struct fraction {
    int numerator;
    int denominator;
    
    fraction();
    fraction(int numerator, int denominator);

    fraction plus (int f1, int f2);
    fraction minus (int f1, int f2);
    fraction times (int f1, int f2);
    fraction divide (int f1, int f2);

    void print();
};
