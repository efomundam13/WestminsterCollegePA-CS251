class rational
{
    public: 
        rational(int a, int b);
        //accessors
        int getNumerator();
        int getDenominator();
        void write(int a, int b); 
        void read();
        void reciprocal();
        int gcd(int a, int b);
        void simplify();
     private:
        int numerator;
        int denominator;
};