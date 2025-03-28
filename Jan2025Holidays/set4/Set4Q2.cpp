#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Q2
    vector<int> arr;
    int n,m,more=0,flag = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr.push_back(m);
    }
    more = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < more){
            flag = 0;
            break;
        }
        more = arr[i];
        
    }

    if (flag){
        cout << "True"<<endl;
    }else{
        cout << "False"<<endl;
    }
        return 0;
}