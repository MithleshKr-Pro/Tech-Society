#include <bits/stdc++.h>
using namespace std;

int main()
{
    //str.compare(str1)
    string str1 = "Hell\0", str2 = "Hell";
    for (int i = 0; i < str1.size() || i < str2.size(); i++)
    {
        if (str1[i] != str2[i])
        {
            cout << str2[i] - str1[i] << endl;
            exit(0);
        }
    }
    cout << "No difference Found !!!" << endl;

    return 0;
}