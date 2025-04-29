#include <iostream>
#include <fstream>
using namespace std;

class question{
    string question;
    string answer;
    
};

int main() {

    fstream ifile("questions.txt");
    string line;
    if (ifile){
        while (getline(ifile, line )){
            if(line == ""){
                cout << '\n';
                continue;
            }
            cout<<line<<endl;
        }
    }



return 0;
}