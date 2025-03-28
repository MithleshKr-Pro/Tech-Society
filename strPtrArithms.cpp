#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    char word[n];

    for(int i =0;i<n;i++){
        cin>>*(word+i);
    }
    
    int i =0;
    while(*(word+i) != '\0'){
        cout<<*(word+i);
        i++;
    }
    cout<<"\n";

    return 0;
}