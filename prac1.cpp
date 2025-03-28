#include <bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    vector<int> found;
    int num[]={1,2,3,4,5,6,7,8,9,0};
    cin>>n;

    while(n>0){
        for(int i =0;i<10;i++){
            if(num[i]==n%10){
                num[i] = 0;
            }
        }

        // num.erase(remove(num.begin(), num.end(), n%10), num.end());

        n=n/10;


    }
    int flag = 1;
    for(int i=0;i<10;i++){
        if(num[i] == 1)
            flag =0;
    }
    if(flag){
        cout<<"yes";
    }else{
        cout<<"no";
    }



    


    // if(num.size()==0){
    //     cout<<"yes";
    // }else{
    //     cout<<"no";
    // }

    // int 

    // for(int i =0; i<10;i++){

    // }

    

    // int term = 0,flag =0;
    // for(long long i= 0;i<found.size() and term<10;i++){
    //     // cout<<"Inside"<<endl;
    //     for(long long j = 0;j<found.size();j++){
    //         // cout<<"Inner"<<endl;
    //         if(term == found[j]){
    //             // cout<<"Found"<<"term"<<term;
    //             term++;
    //         }else if(j == found.size()-1){
    //             break;
    //         }
    //         // cout<<"term : "<<term<<endl;
    //     }

    //     if(term == 10){
    //         flag = 1;
    //     }

    // }
    // cout<<"flag  : "<<flag<<endl;

    // if(flag){
    //     cout<<"yes";
    // }else{
    //     cout<<"no";
    // }



    return 0;
}