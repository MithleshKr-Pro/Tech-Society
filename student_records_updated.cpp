#include <bits/stdc++.h>
using namespace std;

fstream file;


class Student{

    int roll_no = 0;
    string name = "";
    string mothers_name = "";
    string fathers_name = "";
    int phy_marks = 0;
    int chem_marks = 0;
    int maths_marks = 0;
    int eng_marks = 0;

public:
    void display()
    {
        cout << "Roll no : " << roll_no << "\n name : " << name << "\nMothers name : " << mothers_name << "\nFather's Name : " << fathers_name << "\n Physics :" << phy_marks << "\nMaths : " << maths_marks << "\nChem. : " << chem_marks << "\nEng : " << eng_marks << endl;
    }
};

int main()
{

    vector <vector<string>> s1;
    fstream ifile("student_records_updated.csv", ios::in | ios::out);
    if(ifile.is_open()){
        
        string s;
        getline(cin, s);

        while(ifile){
            vector <string> v;
            string tmp = "";
            getline(cin, tmp, ',');
            v.push_back(tmp);

            getline(cin, tmp, ',');
            v.push_back(tmp); 

            getline(cin, tmp, ',');
            v.push_back(tmp);

            getline(cin, tmp, ',');
            v.push_back(tmp);

            getline(cin, tmp, ',');
            v.push_back(tmp);

            getline(cin, tmp, ',');
            v.push_back(tmp);

            getline(cin, tmp, ',');
            v.push_back(tmp);

            getline(cin, tmp, ',');
            v.push_back(tmp);

            getline(cin, tmp);
            v.push_back(tmp);

            s1.push_back(v);
            
        }

        for(int i = 0; i<s1[0].size(); i++){
            cout<<s1[0]
        }

    }

    return 0;
}