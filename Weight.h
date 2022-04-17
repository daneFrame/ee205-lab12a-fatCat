///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   16_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <string>
#include <ostream>

using namespace std;

float kilogram;

enum unitOfWeight { POUND, KILO, SLUG };

static float fromKilogramToPound( float kilogram ) noexcept;


class Weight {
public:  ////////////// Enumerations //////////////
    /// A unit of measure for weight
    static float fromKilogramToPound( float kilogram ) noexcept;

public:
    float weightInPounds;
    float weightInSlugs;
    float weighInKilos;
    bool bIsKnown;
    bool bHasMax;
    float maxWeight;

public:
    Weight();
    bool isWeightValid(float checkWeight, float maxWeight)  noexcept{
        if ((checkWeight > 0) && (checkWeight < maxWeight)){
            return true;
        }
        return false;
    }
    Weight(float newWeight);
    Weight(unitOfWeight newUnitOfMeasure);
    Weight(float newWeight, unitOfWeight newUnitOfMeasure);
    Weight(float newWeight, float newMaxWeight);
    Weight(unitOfWeight newUnitOfMeasure, float newMaxWeight);
    Weight(float newWeight, unitOfWeight newUnitOfMeasure, float newMaxWeight);

}
bool Weight::operator==( const Weight& rhs_Weight ) const {
    /// Remember to convert the two weight's units into a common unit!
    /// Treat unknown weights as 0 (so we can sort them without dealing
    /// with exceptions)
    float lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ?
                       rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight == rhs_weight;
};

static float convertWeight();
