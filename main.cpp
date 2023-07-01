/*******************************************************************************
 * AUTHOR        : Dillon Welsh
 * LAB #4        : RATIONAL NUMBERS
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 09/10/2020
 ******************************************************************************/

#include "rational.h"
#include "rational.cpp"

/*******************************************************************************
 * RATIONAL NUMBERS
 *______________________________________________________________________________
 * Write a C++ program that performs the rational number operations addition,
 * subtraction, multiplication and division on two fractions.
 *______________________________________________________________________________
 * INPUT:
 *  N/A
 *
 * OUTPUT:
 *  Rational fraction: Rational object of fraction
 ******************************************************************************/

int main()
{
    Rational fraction;      // CALC & OUT - object for fraction

    // OUTPUT - ouput all computations
    cout << "Testing default constructor.\n";
    // display() - prints out fraction
    fraction.display();
    cout << endl << endl;
    cout << "Testing one argument constructor with 5 as the argument.\n";
    // Rational() - constructor
    fraction = Rational(5);
    // display() - prints out fraction
    fraction.display();
    cout << endl << endl;
    cout << "Testing two argument constructor with (2,3) as the argument.\n";
    // Rational() - constructor
    fraction = Rational(2,3);
    // display() - prints out fraction
    fraction.display();
    cout << endl << endl;
    cout << "Testing add function by adding 5 and 2/3.\n";
    // Rational() - constructor
    fraction = Rational(5).add(Rational(2,3));
    // display() - prints out fraction
    fraction.display();
    cout << endl << endl;
    cout << "Testing subtract function by subtracting 5 and 2/3.\n";
    // Rational() - constructor
    fraction = Rational(5).subtract(Rational(2,3));
    // display() - prints out fraction
    fraction.display();
    cout << endl << endl;
    cout << "Testing multiply function by multiplying 5 and 2/3.\n";
    // Rational() - constructor
    fraction = Rational(5).multiply(Rational(2,3));
    // display() - prints out fraction
    fraction.display();
    cout << endl << endl;
    cout << "Testing divide function by dividing 5 and 2/3.\n";
    // Rational() - constructor
    fraction = Rational(5).divide(Rational(2,3));
    // display() - prints out fraction
    fraction.display();
    cout << endl;

    return 0;
}
