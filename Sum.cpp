//
// Created by tsiory on 12/25/24.
//

#include "Sum.h"
#include <iostream>

using namespace std;



//question 1

int Sum::methode_1(int number1, int number2) {
    return number1 + number2;
}

int Sum::methode_1(int number1, int number2, int number3) {
    return number1 + number2 + number3;
}

int Sum::methode_2(int number1, int number2, int number3 = 4) {
    return number1 + number2 + number3;
}

int Sum::methode_2(int number1, int number2 = 5) {
    return number1 + number2;
}

//question 2 methode sans retour

void Sum::calculate_1(int number1, int number2) {
    int sum = number1 + number2;
    cout << number1  << " + " << number2 << " = " << sum << endl;
}

void Sum::calculate_1(int number1, int number2, int number3) {
    int sum = number1 + number2;
    cout << number1  << " + " << number2<<" + " <<number3 << " = " << sum << endl;
}

void Sum::calculate_2(int number1, int number2, int number3) {
    int sum = number1 + number2;
    cout << number1  << " + " << number2 <<" + " <<number3 <<" = " << sum << endl;
}

void Sum::calculate_2(int number1, int number2) {
    int sum = number1 + number2;
    cout << number1  << " + " << number2 << " = " << sum << endl;
}
