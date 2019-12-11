#include <iostream>
#include <fstream>

using namespace std;

int delit(ifstream &f1){

    string a, b;
    int aa, bb;

    getline(f1, a);
    getline(f1, b);

    if (a == "" || b == ""){
        cout<<"Не достаточно данных в файле\n";

    } else if (b == "0"){
        cout<<"Делить на ноль нельзя\n";

    }else{
        aa= atoi(a.c_str());
        bb = atoi(b.c_str());
        return aa/bb;
    }

}