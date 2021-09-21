#include <fstream>
#include "gnuplot.h"

int main(){
    int x[5][2]=
    {
        { 1, 2 } , // строка №0
        { 2, 4 } , // строка №1
        { 3, 8 } , // строка №2...
        { 4, 16 }, 
        { 5, 32 }
    };

    std::ofstream out_line("./li.dat");//, std::ios::app';
    if (out_line.is_open()){
        
        for(int i = 0; i<5; ++i){
            for(int h = 0; h<2; ++h)
                out_line<<x[i][h]<<"\t";
            out_line<<"\n";
        };
        out_line.close(); 
        gnuplot p;
        p("plot \'./li.dat\' w l"); 
    };
    return 0;
}