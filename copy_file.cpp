#include <iostream>
#include <fstream>

using namespace std;

int main() {

    char c;
    ifstream ifn("class_2.cpp");
    ofstream ofn("class_1.cpp");

    
    if (ifn.is_open() && ofn.is_open()) {
        c = ifn.get();
        
        while (ifn) {
            ofn << c;
            c = ifn.get();
        }
        ifn.close();
        ofn.close();
    }



return 0;
}
    