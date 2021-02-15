//
//  main.cpp
//  Fraction2
//
//  Created by Aurélien Ammeloot on 08/02/2021.
//

#include <iostream>

using namespace std;

// A fraction is a number represented with a numerator and
// a denominator, e.g. 1/2, 1/3, 4/5 etc...
class Fraction
{
    int numerator, denominator;
public:
    Fraction(int _num, int _den)
    {
        numerator = _num;
        // TODO: deal with the fact that _den shouldn't be zero
        denominator = _den;
    }
    
    // Access methods
    int getNum() { return numerator; }
    int getDen() { return denominator; }
    
    // Get a floating point version of the fraction
    double getDoubleValue() const
    {
        return (double)numerator / (double)denominator;
    }
};

// Create operator overloads
// Check the equality / non equality between two fractions
bool operator==(const Fraction& left, const Fraction& right)
{
    return left.getDoubleValue() == right.getDoubleValue();
}

bool operator!=(const Fraction& left, const Fraction& right)
{
    return left.getDoubleValue() != right.getDoubleValue();
}

// Output a fraction using cout
ostream& operator<<(ostream& out, Fraction& obj)
{
    return out << obj.getNum() << "/" << obj.getDen();
}

// Multiply two fractions together



int main(int argc, const char * argv[]) {

    // Creating two fractions (1/2) (2/4)
    // ==
    
    Fraction f1(1,2);
    Fraction f2(2,4);
    Fraction f3(4,5);
    
    
    cout << f1 << endl;
    cout << f2 << endl;
    cout << f3 << endl;
    
    
    
    bool e1 = f1 == f2;
    cout << e1 << endl;
    
    bool e2 = f2 == f3;
    cout << e2 << endl;
    
    // f1 == f2
    
    //cout << "numerator " << f1.getNum() << endl;
    //cout << "denominator " << f1.getDen() << endl;
    //cout << "floating point value " << f1.getDoubleValue() << endl;
    
    return 0;
}
