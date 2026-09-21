/******************************************************************************

Miles Per Gallon: A car holds 16 gallons of gasoline and can travel 312 miles
before refueling. Store these values in variables, calculate the miles per
gallon, and store the result in a variable before displaying it.
Choose data types that preserve a fractional result. Label the output and
include the units. Save this program as mpg.cpp.

*******************************************************************************/
#include <iostream>

int main()
{
    float capacity = 16;
    float miles = 312;
    float mpg;
    
    mpg = miles / capacity;
    
    std::cout << "A car that can travel " << miles << " miles with " 
    << capacity << " gallons of fuel has a MPG of " << mpg;

    return 0;
}