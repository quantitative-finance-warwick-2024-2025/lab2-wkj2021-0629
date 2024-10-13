#include <iostream>
#include <string>
#include <iomanip>
#include "exercises.h"

/*
Exercise 1:

Write a C++ program that continuously asks for a string of text input from the keyboard.
The output of this program should give the amount of characters, words and lines in the text.
Implement the function using a while loop, and use if-else statements to branch your code.
Read single characters from an input stream using the std::cin.get() function.

- Assume that words can only be separated by spaces ' ' or tabs '\t'.
- All characters should be counted apart from space ' ', tabs '\t' or new lines '\n'.
- An empty input has 0 characters, 0 words and 0 lines.
- Any non-empty input has at least 1 line.

*/
void exercise_1()
{
    int characters = 0, words = 0, lines = 0;
    char c;
    bool in_word = false;
    bool non_empty = false;

    std::cout << "Type some text to analyse, press ctrl+D/ctrl+Z to stop:\n\n";

    while (std::cin.get(c))
    {      
       // Your solution here
    }

    std::cout << "\nNumber of characters: " << characters << '\n';
    std::cout << "Number of words: " << words << '\n';
    std::cout << "Number of lines: " << lines << '\n';
}

/*
Exercise 2:
Implement the same function from exercise 1 using a do-while loop instead of a while loop. 
Make sure the functionality has not changed.
*/
void exercise_2()
{
    int characters = 0, words = 0, lines = 0;
    char c;
    bool in_word = false;
    bool non_empty = false;

    std::cout << "Type some text to analyse, press ctrl+D/ctrl+Z to stop:\n\n";

    // Your solution here

    std::cout << "\nNumber of characters: " << characters << '\n';
    std::cout << "Number of words: " << words << '\n';
    std::cout << "Number of lines: " << lines << '\n';
}

/*
Exercise 3:
Implement a switch statement in your program from Exercise 1 to replace the branching with if-else statements.
Make sure the functionality has not changed.
*/
void exercise_3()
{
    int characters = 0, words = 0, lines = 0;
    char c;
    bool in_word = false;
    bool non_empty = false;

    std::cout << "Type some text to analyse, press ctrl+D/ctrl+Z to stop:\n\n";

    // Your solution here

    std::cout << "\nNumber of characters: " << characters << '\n';
    std::cout << "Number of words: " << words << '\n';
    std::cout << "Number of lines: " << lines << '\n';
}

/*
Exercise 4:
Write a C++ function that prints two columns on the screen with the temperature in degrees Fahrenheit (left column)
and the equivalent temperature in Celsius (right column).
The number of steps (rows to print), step-size (fahrenheit) and start-temperature (fahrenheit) are given as inputs to the function.
Temperatures should be formatted to contain space for 10 digits, with 1 of the digits after the decimal point.

Use a while loop to implement the function.

Hints:
Use std::cout << std::fixed << std::setprecision(1) before you print out the temperatures to format fixed precision correctly.
Use std::setw(10) to set the output width before printing each temperature.

*/
void exercise_4(unsigned int number_of_steps, double step_size, double lower_lim)
{
    double upper_lim = step_size * (number_of_steps - 1) + lower_lim;

    std::cout << std::setw(10) << "Fahrenheit" << std::setw(10) << "Celsius" << '\n';

    double fahrenheit = lower_lim;

    // Your solution here
}

/*
Exercise 5:

Write the same function as in exercise 4, but use a for loop instead of a while loop.

*/
void exercise_5(unsigned int number_of_steps, double step_size, double lower_lim)
{
    std::cout << std::setw(10) << "Fahrenheit" << std::setw(10) << "Celsius" << '\n';

    // Your solution here
}

/*
Exercise 6:
Write a C++ function which reads any string from the console using std::cin.get().
When the return key is pressed, the program should print the sum of all the
positive single-digit numbers from the string if there are any, and then exit.

For example:
Input: "123"
Prints: "Sum of the numbers is: 6"

Input: "abc123"
Prints: "Sum of the numbers is: 6"

Input: "I have one thing to say"
Prints: "Sum of the numbers is: 0"

Input: "I have 1 thing to say"
Prints: "Sum of the numbers is: 1"

Hints: 
Use an ascii table to identify the range of characters that represent 
single digit numbers, or you can use std::isdigit()

*/
void exercise_6()
{
    int total = 0;
    char c;

    std::cout << "Type some numbers to add up:\n";

    while (std::cin.get(c) && c != '\n')
    {
        // Your solution here
    }

    std::cout << "Sum of the numbers is: " << total << '\n';
}