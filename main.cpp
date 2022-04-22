///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab12a_fatCat - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   16_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Weight.h"

using namespace std;

int main(){
    ///assign a weight
    Weight firstWeight =  Weight(6.9);

    firstWeight.dump();

    Weight secondWeight = Weight(8.8, Weight::KILO, 25);

    secondWeight.dump();


return 0;
};