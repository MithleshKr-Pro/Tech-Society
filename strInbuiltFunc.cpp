#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Mithlesh Kumar";
    // reverse(str.begin(),str.end());
    cout<<str<<endl;

    //compare


    //substr
    cout<<str.substr(0,8)<<endl;


    //strcat
    string str1 = "Aman";
    // cout<<strcat(str,str1)<<endl;       This will not work as it takes char array as input

    string str2;
    str2[0] = 'a';
    str2[1] = 'b';
    str2[2] = 'c';
    str2[3] = 'd';
    cout<<str2.size()<<endl;


    //to-string(val)
    // string str3 = to_string(384749);
    cout<<to_string(384749)<<endl;
    cout<<typeid(std::string).name()<<endl;



    //find

    string str4 = "Tech Society";
    cout<<str4.find("Society")<<endl;

    if(str4.find("hello") == str4.npos){
        cout<<"Hello not found"<<endl;
    }







    return 0;
}