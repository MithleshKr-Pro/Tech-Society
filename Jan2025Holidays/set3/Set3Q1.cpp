#include<bits/stdc++.h>
using namespace std;
int prime_term(int);
int main(){
    int n,p,spaceCount,central_space=-1 ,_term=1;
    cin >> n;
    p= 4*n -4;
    spaceCount = n-1;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<spaceCount;j++){
            cout<<" ";
        }
        if(spaceCount == n-1){
            // cout<<"*";
            _term = prime_term (_term);
            cout<<_term;

        }else{
            for(int j = 0; j < 2; j++){
                // cout<<"*";
                _term = prime_term (_term);
                cout<<_term;
                for(int k =0; k<central_space;k++){
                    cout<<" ";
                }
            }
        }
        central_space+=2;
        spaceCount-=1;
        cout<<"\n";

    }

    //second Half
    central_space-=4;
    spaceCount+=2;
    for (int i =0; i<n-1;i++){
        
        for(int j = 0; j<spaceCount;j++){
            cout<<" ";
        }

        if(spaceCount == n-1){
            // cout<< "*";
            _term = prime_term (_term);
            cout<<_term;
        }else{
            for(int j = 0; j < 2; j++){
                    _term = prime_term (_term);
                    // cout<< "*";

                    cout<<_term;
                for(int k =0; k<central_space;k++){
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
        spaceCount+=1;
        central_space-=2;
    }

    return 0;
}
int prime_term(int m){
    int flag = 1;
    m=m+1;
        while(1){
            for(int i= 2; i<m;i++){
                if(m%i == 0){
                    flag = 0;
                    break;
                }
                if(i== m-1){
                    flag =1;
                }
            }
            // break;
            if(flag){
                return m;
            }else{
                m+=1;
            }
        }
}
