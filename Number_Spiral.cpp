#include <iostream>
using namespace std;

int main() {
    long long t,i=0;
    cin>>t;
    while(i<t){
        long long row,col; 
        cin>>row>>col;
        long long val = max(row,col);
        long long  diag_val = val * val - val + 1;
        if(val%2 == 0) cout<<diag_val + (row - col)<<endl;
        else cout<<diag_val - (row - col)<<endl;
        i++;
    }

return 0;
}