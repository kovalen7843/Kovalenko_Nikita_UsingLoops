/*
 *  Copyright 2024 Nikita Kovalenko (kovalen7843)
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 * 
 *  Introductory comments: Shirin Herrington, CS 117, Sections 17782 & 17823
 *  Program name: UsingLoops
 *  Description: Using loops in calculating and printing digits and characters
 */

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

// A function that asks the user to enter two integers, the first number must be less than the second number
void get_input(int &first, int &second) {
    cout << "Enter two integers, the first number must be less than the second number: ";
    cin >> first >> second;
    while (first >= second) {
        cout << "Invalid input. The first number must be less than the second number. Try again: ";
        cin >> first >> second;
    }
}

// A function that prints all odd numbers between the first number and the second number
void print_odd(int first, int second) {
    cout << "The odd numbers between " << first << " and " << second << " are: ";
    for (int i = first; i <= second; i++)
        if (i % 2 != 0)
            cout << i << " ";
    cout << endl;
}

// A function that prints the sum of all even numbers between the first and the second number
void print_even_sum(int first, int second) {
    int sum = 0;
    for (int i = first; i <= second; i++)
        if (i % 2 == 0)
            sum += i;
    cout << "The sum of all even numbers between " << first << " and " << second << " is: " << sum << endl;
}

// A function that prints the numbers and their squared between 1 and 10
void print_squares() {
    cout << "The numbers and their squared between 1 and 10 are: " << endl;
    cout << setw(5) << "Number" << setw(10) << "Squared" << endl;
    int number = 1;
    do {
        cout << setw(5) << number << setw(10) << number * number << endl;
        number++;
    } while (number <= 10);
}

// A function that prints the sum of the square of the odd numbers between the first and second number
void print_odd_square_sum(int first, int second) {
    int sum = 0;
    for (int i = first; i <= second; i++)
        if (i % 2 != 0)
            sum += i * i;
    cout << "The sum of the square of the odd numbers between " << first << " and " << second << " is: " << sum << endl;
}

// A function that prints all uppercase letters
void print_uppercase() {
    cout << "The uppercase letters are: ";
    char letter = 'A';
    while (letter <= 'Z') {
        cout << letter << " ";
        letter++;
    }
    cout << endl;
}

// The main function that calls the other functions
int main() {
    int first, second;

    get_input(first, second);
    print_odd(first, second);
    print_even_sum(first, second);
    print_squares();
    print_odd_square_sum(first, second);
    print_uppercase();

    return 0;
}
