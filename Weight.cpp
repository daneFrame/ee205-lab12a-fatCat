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

static float convertWeight( float fromWeight, UnitOfWeight fromUnit,UnitOfWeight toUnit ) noexcept;

void setMaxWeight(float newMaxWeight){

}

bool Weight::isWeightValid(float checkWeight)  noexcept{
    if ((checkWeight > 0) && (checkWeight < maxWeight)){
        return true;
    }
    return false;
}

Weight::Weight( const UnitOfWeight newUnitOfWeight, const float newMaxWeight ) : Weight( newUnitOfWeight ) {
    setMaxWeight( newMaxWeight );
    assert( validate() );
}


Weight::Weight(float newWeight) {
if(Weight::isWeightValid(newWeight)){
    weightInPounds = newWeight;
}else{
    cout << "ERROR: Invalid Weight." << endl;
}
}

bool Weight::isWeightKnown() const noexcept {
    return bIsKnown;
}

bool Weight::operator==(const Weight &rhs_Weight) const {
    float lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ?
                       rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight == rhs_weight;
///////////////////////////////////////////////////////
////setters
Weight::Weight(UnitOfWeight newUnitOfMeasure) {

}

Weight::Weight(float newWeight, unitOfWeight newUnitOfMeasure) {

}

Weight::Weight(float newWeight, float newMaxWeight) {

}

Weight::Weight(unitOfWeight newUnitOfMeasure, float newMaxWeight) {

}

Weight::Weight(float newWeight, unitOfWeight newUnitOfMeasure, float newMaxWeight) {

}

////getters
float Weight::getWeight() const noexcept{
    if(unitOfWeight == POUND) {
        return weightInPounds;
    }
    if(unitOfWeight == KILO){
        return weighInKilos;
    }
    if(unitOfWeight == SLUG){
        return weightInSlugs;
    }
}
///////////////////////////////////////////////////////