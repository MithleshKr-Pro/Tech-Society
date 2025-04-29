#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int longestCommonSubsequence(string text1, string text2) {
            string strt = "", strt2 = "";
            if(text1.size() < text2.size()) {
            strt = text1;
            strt2 = text2;
        }
        else{
            strt = text2;
            strt2 = text1;
        }
        int cnt = 0,cnt1 = 0;
        int k = 0, l = 0,flag = 0;

        while(l<strt.size()){
            for (int i = l; i<strt.size(); i++ ){
                for(int j=k; j<strt2.size(); j++){
                    if(strt[i] == strt2[j]){
                        cout<<i<<" "<<j<<endl;
                        cnt++;
                        k = ++j;
                        cout<<cnt<<" ";
                        if(!flag ) {
                            l = i+1;
                            cout<<l<<" ";
                            flag = 1;
                        }
                        cout<<k<<endl;
                        break;
                    }
                }
            }
            if(cnt > cnt1) cnt1 = cnt;
            cnt = 0;
            flag = 0;
            k = 0;
        }
        return cnt1;
    
        }
        
    };

int main() {

    string s1 = "";
    string s2 = "", strt = "",strt2 = "";
    cin>>s1>>s2;
    
    Solution s;
    cout<<endl<<s.longestCommonSubsequence(s1,s2)<<endl;

    // if(s1.size() < s2.size()) {
    //     strt = s1;
    //     strt2 = s2;
    // }
    // else{
    //     strt = s2;
    //     strt2 = s1;
    // }
    // int cnt = 0;
    // int k = 0;
    // for (int i = 0; i<strt.size(); i++ ){
    //     for(int j=k; j<strt2.size(); j++){
    //         if(strt[i] == strt2[j]){
    //             // cout<<i<<" "<<j<<endl;
    //             cnt++;
    //             k = ++j;
    //             // cout<<k<<endl;
    //             break;
    //         }
    //     }
    // }

    // cout<<cnt<<endl;


return 0;
}