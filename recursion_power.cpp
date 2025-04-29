#include <iostream>
using namespace std;

int power(int a, int b){
    if(b==0) return 1;
    if(b%2 == 0)
        return ((power(a,b/2))*(power(a,b/2)));
    if (b%2 != 0)
        return ((power(a,b/2))*(power(a,b/2)))*a;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;

return 0;
}