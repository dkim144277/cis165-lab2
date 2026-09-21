# cis165-lab2

Course Section: CIS-165-B030
# How to compile
1. Download one of the .cpp files from the repository
2. Go to https://www.onlinegdb.com/
3. Click the file upload icon on the top left
4. Run the program

# Test runs
## sum.cpp, original values
50, 100
Expected result: 150
Actual result: 150

## sum.cpp, altered values
1, 2
Expected result: 3
Actual result: 3

## mpg.cpp, original values
16, 312
Expected result: 150
Actual result: 150

## mpg.cpp, altered values
15, 300
Expected result: 20
Actual result: 20

I've restored the original values in both programs before uploading

# sum.cpp
I first declare the following variables:
* num1
* num2
num1 is assigned a value of 50, num2 is assigned a value of 100
I then create a new variable total which is equal to num1 + num2. I do this calculation beforehand so that I don't need to clutter the cout function with arithmetic.
Finally, I print the values of num1 and num2 as well as the sum of both.

# mpg.cpp
I first declare 3 floats:
* capacity
* miles
* mpg
If not declared as floats, C++ will take whatever value is assigned to these variables and implicitly convert them to unwanted values.
I then assign mpg equal to miles / capacity
Finally, I print the capacity, the miles, and then the calculated mpg.

Example: When I assigned capacity a value of 15 and miles as 300, the program finds the quotient of miles divided by capacity and then assigns the quotient to mpg. Then, mpg is printed in a cout statement with clear labels.
