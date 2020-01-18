#include <iostream>
#include <fstream>

using namespace std;

int delit(string a, string b) {

    int aa, bb;

    if (empty(a) || empty(b)) {
        throw range_error("Недостаточно данных в файле!");

    } else if (b == "0") {
        throw invalid_argument("Делить на ноль нельзя!!");
    }

    aa = stoi(a);
    bb = stoi(b);
    return aa / bb;
}