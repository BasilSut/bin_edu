#include <stdio.h>

//typedef 
const char HEXDIGITS[18] = "0123456789abcdef";
const char BINDIGITS[4] = "01";

int main(){
    int n0, n, i, res;
    char hex[32];
    char bin[128];
    while (true){
        printf("input a number:\n");
        res = scanf("%d", &n0);
        if (res <= 0 || n0 == 0)
            break;
        //hex representation
        n = n0;
        i = sizeof(int) * 2; // length of hexadecimal notation of int type
        hex[i] = 0;
        while(i>0){
            --i;
            int d = (n & 0xf); //остаток от деления на 16 == поразрядное логическое умножение на f
            //вырезаем четыре бита из двоичного представления числа с помощью маски 0xf и получаем число от нуля до 15 который раен остатку от деления
            n >>=4;//сдвиг двоичного представления числа n на 4 == делению на 16
            hex[i] = HEXDIGITS[d];
        }
        printf("hex representation:  %s \n", hex);

        //binary representation
        n = n0;
        i = sizeof(int) * 8; // length of binary notation of int type
        bin[i] = 0;
        while (i > 0)
        {
            --i;
            int d = (n & 1); //остаток от деления на 2 == поразрядное логическое умножение на 1
            //вырезаем один из двоичного представления числа с помощью маски 1 и получаем либо 0 либо 1 т.е. остатку от деления на 2
            n >>= 1; //сдвиг двоичного представления числа n на 1 == делению на 2
            bin[i] = BINDIGITS[d];
        }
        printf("binary representation:  %s \n", bin);
    }
    
}