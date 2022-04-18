///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   16_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "Weight.h"

using namespace std;

static const float UNKNOWN_WEIGHT = 0;
static const float KILOS_IN_A_POUND = .453592;
static const float SLUGS_IN_A_POUND = .031081;

static const std::string POUND_LABEL = "Pound" ;
static const std::string KILO_LABEL = "Kilo";
static const std::string SLUG_LABEL = "Slug";


float pound, slug;


float Weight::fromKilogramToPound( const float kilogram ) noexcept {
return kilogram / KILOS_IN_A_POUND ;
}

float Weight::fromPoundToKilogram(const float pound) noexcept {
    return pound * KILOS_IN_A_POUND;
}

float Weight::fromSlugToPound(const float slug) noexcept {
    return slug / SLUGS_IN_A_POUND;
}

float Weight::fromPoundToSlug(const float slug) noexcept {
    return slug * SLUGS_IN_A_POUND;
}
///static float convertWeight( float fromWeight, Weight::UnitOfWeight fromUnit,Weight::UnitOfWeight toUnit ) noexcept;
float Weight::convertWeight(float fromWeight, Weight::UnitOfWeight fromUnit, Weight::UnitOfWeight toUnit) noexcept {
switch(fromUnit){
    case POUND:
        switch (toUnit) {
            case POUND:
                return fromWeight;
            case KILO:
                return Weight::fromPoundToKilogram(fromWeight);
            case SLUG:
                return Weight::fromPoundToSlug(fromWeight);
        }
        case KILO:
            switch (toUnit) {
                case POUND:
                    return fromKilogramToPound(fromWeight);
                case KILO:
                    return fromWeight;
                case SLUG:
                    return fromSlugToPound(fromKilogramToPound(fromWeight));
            }
                case SLUG:
                    switch (toUnit){
                        case POUND:
                            return fromSlugToPound(fromWeight);
                        case KILO:
                            return fromPoundToKilogram(fromSlugToPound(fromWeight));
                        case SLUG:
                            return fromWeight;
                    }

}
return 0;
}

void setMaxWeight(float newMaxWeight){

}


Weight::Weight( const UnitOfWeight newUnitOfWeight, const float newMaxWeight ) : Weight( newUnitOfWeight ) {
    setMaxWeight( newMaxWeight );
    assert( validate() );
}


Weight::Weight(float newWeight) {

}

bool Weight::isWeightKnown() const noexcept {
    return bIsKnown;
}

bool Weight::validate() const noexcept {
    //float checkWeight;
    assert(isWeightValid(checkWeight, maxWeight));
    return false;
}

float Weight::getWeight(Weight::UnitOfWeight weightUnits) const noexcept{
    assert(isWeightValid(weight));
    float convertedWeight = convertWeight(weight, unitOfWeight, weightUnits);
    return convertedWeight;
}

///bool Weight::isWeightValid(float checkWeight) const noexcept {
 /////  assert( (checkWeight > 0) || checkWeight == UNKNOWN_WEIGHT );
    ///if( bHasMax ){
   ////  assert( checkWeight <= maxWeight );
    ///}
    ///return true;
///}
bool Weight::isWeightValid(float checkWeight, float maxWeight) const noexcept {

        if ((checkWeight > 0) && (checkWeight < maxWeight)) {
            return true;
        }
   return false;
}

Weight::Weight(float newWeight, float newMaxWeight) {

}

Weight::Weight(float newWeight, UnitOfWeight newUnitOfMeasure, float newMaxWeight) {

}

////getters
float Weight::getWeight() const noexcept{
assert(isWeightValid(weight));
return weight;
}
    Weight::Weight()
    noexcept {

    }
    bool Weight::hasMaxWeight() const noexcept {

        return bHasMax;
    }
///////////////////////////////////////////////////////

std::ostream& operator<<( ostream& lhs_stream
        ,const Weight::UnitOfWeight rhs_UnitOfWeight ) {
    switch( rhs_UnitOfWeight ) {
        case Weight::POUND: return lhs_stream << POUND_LABEL ;
        case Weight::KILO:  return lhs_stream << KILO_LABEL ;
        case Weight::SLUG:  return lhs_stream << SLUG_LABEL ;
        default:
            throw out_of_range( "The unit can’t be mapped to a string" );
    }
}

bool Weight::operator==(const Weight &rhs_Weight) const {

    float lhs_weight = bIsKnown ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;
    return lhs_weight == rhs_weight;
}
