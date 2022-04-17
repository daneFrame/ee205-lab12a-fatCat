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


float kilogram;

enum unitOfWeight { POUND, KILO, SLUG };

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
    Weight(float newWeight);
    Weight(unitOfWeight newUnitOfMeasure);
    Weight(float newWeight, unitOfWeight newUnitOfMeasure);
    Weight(float newWeight, float newMaxWeight);
    Weight(unitOfWeight newUnitOfMeasure, float newMaxWeight);
    Weight(float newWeight, unitOfWeight newUnitOfMeasure, float newMaxWeight);

};

static float convertWeight();
