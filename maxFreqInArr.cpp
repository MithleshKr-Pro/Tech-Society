#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [] ={3,2,5,4,5,4,4};
    int maxFreq=0;
    int maxTerm ;
    for (int i =0; i<7;i++){
        int freq=0;
        for(int j =i;j<7;j++){
            if(arr[j]==arr[i]){
                freq+=1;
            }
        }
        if(freq > maxFreq){
            maxFreq = freq;
            maxTerm = arr[i];
        }
    }
    cout<<maxTerm<<endl;

    return 0;
}