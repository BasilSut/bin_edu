#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cerr;

class gnuplot {
public:
    gnuplot();
    ~gnuplot();
    void operator () (const string & command);
protected:
    FILE *gnuplotpipe;
};

gnuplot::gnuplot(){
    gnuplotpipe = popen("gnuplot -persist", "w");
    if(!gnuplotpipe)
        cerr<<"gnuplot wasn't found !";
}

gnuplot::~gnuplot(){
    fprintf(gnuplotpipe,"exit\n");
    pclose(gnuplotpipe);
}

void gnuplot::operator() (const string &command){
    fprintf(gnuplotpipe, "%s\n", command.c_str());
    fflush(gnuplotpipe);
}
