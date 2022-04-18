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

float Weight::fromKilogramToPound( const float kilogram ) noexcept {
return kilogram / KILOS_IN_A_POUND ;
}

static float convertWeight( float fromWeight, Weight::UnitOfWeight fromUnit,Weight::UnitOfWeight toUnit ) noexcept;

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

int Weight::getWeight(Weight::UnitOfWeight weight) const {
    return 0;
}

bool Weight::isWeightValid(float checkWeight, float maxWeight) const noexcept {

        if ((checkWeight > 0) && (checkWeight < maxWeight)) {
            return true;
        }
   return false;
}

bool Weight::operator==(const Weight &rhs_Weight) const {
    float lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ?
                       rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight == rhs_weight;
}


Weight::Weight(float newWeight, float newMaxWeight) {

}

Weight::Weight(float newWeight, UnitOfWeight newUnitOfMeasure, float newMaxWeight) {

}

////getters
float Weight::getWeight() const noexcept{
    //if(UnitOfWeight == POUND) {
      //  return weightInPounds;
    //}
    //if(UnitOfWeight == KILO){
      //  return weighInKilos;
    //}
    //if(UnitOfWeight == SLUG){
    //    return weightInSlugs;
    //}
assert(isWeightValid(checkWeight));
return checkWeight;
}
    Weight::Weight()
    noexcept {

    }
    bool Weight::hasMaxWeight() const noexcept {

        return bHasMax;
    }
///////////////////////////////////////////////////////