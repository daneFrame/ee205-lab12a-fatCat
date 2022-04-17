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

//

//enum unitOfWeight { POUND, KILO, SLUG };

static float fromKilogramToPound( float kilogram ) noexcept;


class Weight {
public:  ////////////// Enumerations //////////////
    /// A unit of measure for weight
    float kilogram;

    static float fromKilogramToPound(float kilogram) noexcept;

    enum UnitOfWeight {
        POUND, KILO, SLUG
    };

//private:
    //  bool bIsKnown;
    //bool bHasMax;

public:
    float weightInPounds;
    float weightInSlugs;
    float weighInKilos;
    bool bIsKnown;
    bool bHasMax;
    float maxWeight;
    float weight;

public:
    Weight() noexcept;

    bool isWeightValid(float checkWeight, float maxWeight) noexcept;

    Weight(float newWeight) ;

    Weight(UnitOfWeight newUnitOfMeasure) noexcept;

    Weight(float newWeight, UnitOfWeight newUnitOfMeasure);

    Weight(float newWeight, float newMaxWeight);

    Weight(UnitOfWeight  newUnitOfMeasure, float newMaxWeight);

    Weight(float newWeight, UnitOfWeight newUnitOfMeasure, float newMaxWeight);

public:
    static float convertWeight();
    bool isWeightKnown() const noexcept;

    bool isWeightValid(float checkWeight);
};


