#include<bits/stdc++.h>
using namespace std;
int main(){

    string words;
    getline(cin,words,'\n');
    int noOfVowels=0;
    for(int i=0;i<words.size();i++){
        if(words[i] >= 65 && words[i]<97){
            int indx = int(words[i])-65;
            words[i] = char(97+indx);
        }
        // cout<<words<<endl;
        if(words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i]=='u'){
            noOfVowels++;
        }
    }
    cout<<noOfVowels<<endl;






    return 0;
}