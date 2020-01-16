#include <iostream>
#include <fstream>
#include "lib.h"

using namespace std;

int main() {

    ifstream f1("/Users/apple/CLionProjects/delenie+testy/File_s_chislami");

    string a, b;
    getline(f1, a);
    getline(f1, b);

    try {
        cout << delit(a,b);
    }
    catch (const char *error) {
        cout << error << endl;
    }

    return 0;
}