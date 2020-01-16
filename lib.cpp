#include <iostream>
#include <fstream>

using namespace std;

int delit(string a, string b) {

    int aa, bb;

    if (empty(a)) {
        throw "Отсутствует делимое!";

    } else if (empty(b)) {
        throw "Отсутствует делитель!";

    } else if (b == "0") {
        throw "Делить на ноль нельзя!!";
    }

    aa = stoi(a);
    bb = stoi(b);
    return aa / bb;
}