#include <iostream>
using namespace std;

int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}

int main() {

    int t=0,i = 0;
    cin>>t;
    while(i<t){
        int a,b;
        cin>>a>>b;
        int gcd1 = gcd(a,b);
        
        if(max(a,b)%min(a,b) == 0){
            cout<<((a*b)/gcd1)*b/a<<endl;
        }else{
            cout<<gcd1<<endl;
        }


        i++;
    }

return 0;
}