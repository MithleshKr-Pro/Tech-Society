#include <iostream>
using namespace std;

int main() {
    int max_count = 0;
    string s ="";
    cin>>s;
    char temp = s[0];
    int temp_cnt = 1;
    for(int i= 1;i<s.size();i++){
        if(s[i] == temp) temp_cnt++;
        else{
            if(temp_cnt > max_count) max_count = temp_cnt;
            temp = s[i];
            temp_cnt = 1;
        }
    }
    if(temp_cnt > max_count) max_count = temp_cnt;
    cout<<max_count<<endl;

return 0;
}