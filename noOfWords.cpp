#include<iostream>

using namespace std;
int main(){
    string words;
    getline(cin,words,'\n');
    int i =0,noOfWords=0;
    cout<<words.size();
    while(i<words.size()){
    cout<<words<<endl;
    


        if(i=0 && words[i]==' '){
            while(words[i] == ' ' && i<words.size()){
        cout<<"i = "<<i;

                i++;
            }
        noOfWords++;
        }
        
        while(words[i] != ' ' && i<words.size()){
        cout<<"i = "<<i;

            i++;
        }
        noOfWords ++;
        cout<<"i = "<<i;



        // if(words[i] == ' '){
        //     i++;
        // }
        

        cout<<noOfWords+1<<endl;

    }
cout<<noOfWords+1<<endl;

return 0;
}
