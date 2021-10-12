#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;



int main(){
    setlocale(LC_ALL,"ru");
    string path = "./c.tx";

    ifstream fin;
    fin.exceptions(ifstream::badbit | ifstream::failbit);// для корректной работы напсанных ниже исключений
    try{
        cout<<"попытка открыть файл"<<endl;
        fin.open(path);
        cout<<"file opened!"<<endl;
    }
    catch(const std::exception& ex){
        cout <<ex.what() <<endl;
        cout<< "ошибка открытия файла"<<endl;
    }
    return 0;
}


