#include <iostream>
#include <stdio.h>

int main(){
    int a = 3;
    int b = 5;
    int z = 6;

    unsigned char d = 1, f;
    f = ~d;
    std::cout <<"a & b = "<< (a & b) << "\n";
    std::cout <<"a | b = "<< (a | b) << "\n";
    std::cout <<"a ^ b = "<< (a ^ b) << "\n";
    //printf("%d \n",a^b);

    std::cout <<"~f ="<< ~f << "\n";
    std::cout <<"z << "<< (z<<1) << "\n";

    return 0;
}