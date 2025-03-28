#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n],term=0;
    int noOfOperations =0;

    
    for(int i= 0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            term = arr[0];
            noOfOperations ++;
        }
        if(term%2==0 && i!=0){
            term += arr[i];
            // cout<<"term :"<<term<<endl;
            noOfOperations++;
        }else if(i!=0){
            term=term*2;
            term = term+arr[i];
            noOfOperations+=2;

        }

    }
    if(term%2 !=0){
        term*=2;
        noOfOperations++;
    }

    cout<<"No of Operations :"<<noOfOperations<<endl<<"Value :"<<term;



    return 0;
}