#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, m;
    cin >> n1;
    int arr1[n1] = {0};
    for (int i = 0; i < n1; i++)
    {
        cin >> m;
        arr1[i] = m;
    }
    int n2;
    cin >> n2;
    int arr2[n2] = {0};
    for (int i = 0; i < n2; i++)
    {
        cin >> m;
        arr2[i] = m;
    }

    // Combined Array
    int combArr[n1 + n2];
    for (int i = 0, j = 0; i < n1 or j < n2; i++, j++)
    {
        if(i<n1){
        combArr[i] = arr1[i];
        }
        if(j<n2){
        combArr[j+n1] = arr2[j];
        }
    }

    int size = sizeof(combArr)/sizeof(combArr[0]);
    sort(combArr,combArr+size);
    for (int i = 0; i < n2+n1; i++)
    {
        cout<<combArr[i]<<"\t";
    }

    return 0;
}