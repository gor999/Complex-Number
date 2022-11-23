#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include<iostream>

class Complex
{
    private:
    double m_number;
    double mi_number;

    public:
    Complex(double, double);
    void operator=(const Complex& other);
    Complex operator+(const Complex& other);
    Complex operator-(const Complex& other);
    
    // Պետք է վերադարձնի this-ը (Complex&)
    Complex operator++();
    
    Complex operator++(int);
    
    // Պետք է վերադարձնի this-ը (Complex&)
    Complex operator--();
    
    Complex operator--(int);
    
    // Պետք է վերադարձնի this-ը (Complex&)
    Complex operator+=(const Complex& other);
    
    bool operator==(const Complex& other);
    void show();
};



#endif
