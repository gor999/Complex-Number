#include"complex.h"


Complex::Complex(double my_number, double i_number):m_number{my_number}, mi_number{i_number}{}

void Complex::operator=(const Complex &other){
        this->m_number = other.m_number;
        this->mi_number = other.mi_number;
    }

Complex Complex::operator+(const Complex &other){
    return Complex(this->m_number+other.m_number,this->mi_number+other.mi_number); 
}

Complex Complex::operator-(const Complex &other){
    return Complex(this->m_number - other.m_number,this->mi_number - other.mi_number);
}

Complex Complex::operator++(){
    return Complex(this->m_number = this->m_number + 1,this->mi_number = this->mi_number + 1);
}

Complex Complex::operator++(int){
    return Complex(this->m_number++, this->mi_number++);
}   
Complex Complex::operator--(int){
    return Complex(this->m_number--, this->mi_number--);
}
Complex Complex::operator--(){
    return Complex(this->m_number = this->m_number - 1, this->mi_number = this->mi_number - 1);
}

Complex Complex::operator+=(const Complex &other){
    return Complex(this->m_number = other.m_number + this->m_number,this->mi_number = other.mi_number + this->mi_number);
}

bool Complex::operator==(const Complex &other){
    return (this->m_number == other.m_number && this->mi_number == other.mi_number);
}

void Complex::show(){
    std::cout<<m_number<<"  "<<mi_number<<std::endl;
}



