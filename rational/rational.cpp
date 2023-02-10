#include"rational.h"
#include<iostream>
#include<algorithm>

using namespace std;
        rational::rational(int a, int b) 
        {
            this->numerator = a;
            this->denominator = b;

            if(denominator == 0) {
                denominator = 1;
            }
        }
        int rational::getNumerator()
        {
            return this->numerator;
        }
        int rational::getDenominator()
        {
            return this->denominator;
        }
        void rational::write(int a, int b)
        {
           numerator = a;
           denominator = b;
        }
        void rational::read()
        {
            cout<<"Fraction: ";
            cout<<this->numerator<<"/"<<this->denominator<<endl;
        }
        void rational::reciprocal() 
        {
            cout<<"Reciprocal Fraction: ";
            cout<<this->denominator<<"/"<<this->numerator<<endl;
        }
        int rational::gcd(int a, int b)
        {
            if(b == 0)
            {
                return a;
            }
            return gcd(b, a % b);
        }
        void rational::simplify()
        {
            int g;
            g = gcd(numerator,denominator);
            numerator /= g;
            denominator /= g;
            cout<<"Reduced Fraction: ";
            cout<<this->numerator<<"/"<<this->denominator<<endl;
            cout<<"Reduced Reciprocal Fraction: ";
            cout<<this->denominator<<"/"<<this->numerator<<endl;
        };

int main()
{
    rational r1(3,0);
    cout<<"Rational Number 1:"<<endl;
    r1.read();
    r1.reciprocal();
    r1.simplify();
    cout<<endl;
    rational r2(0,1);
    cout<<"Rational Number 2:"<<endl;
    r2.write(50,5);
    r2.read();
    r2.reciprocal();
    r2.simplify();
    cout<<endl;
    rational r3(-7,35);
    cout<<"Rational Number 3:"<<endl;
    r3.read();
    r3.reciprocal();
    r3.simplify();
    cout<<endl;


}

        