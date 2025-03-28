#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    getline(cin,word,'\n');
    for(int i=0;i<word.size()/2;i++){
        char temp = word[i];
        word[i] = word[word.size()-1-i];
        word[word.size()-1-i] = temp;
    }
    cout<<word<<endl;

    return 0;
}