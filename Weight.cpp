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
#include <cstring>
#include "Weight.h"

static const float KILOS_IN_A_POUND = .453592;
static const float SLUGS_IN_A_POUND = .031081;


float Weight::fromKilogramToPound( const float kilogram ) noexcept {
return kilogram / KILOS_IN_A_POUND ;
}

static const std::string POUND_LABEL ;
static const std::string KILO_LABEL ;
static const std::string SLUG_LABEL ;

static float convertWeight( float fromWeight,UnitOfWeight fromUnit,UnitOfWeight toUnit ) noexcept;