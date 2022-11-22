#include "complex.h"
#include<iostream>


int main(){

    Complex a(9,  8);
    Complex b(10, 7);
    Complex c(0, 0);
    Complex d(9, 8);
    c++;
    ++c;
    if(d == a){
        std::cout<<"true"<<std::endl;
    };
    ++d;
    d.show();
    a = c;
    c.show();


    return 0;
}