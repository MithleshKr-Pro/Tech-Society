#include <iostream>
using namespace std;

bool isSorted(long long *arr,int n){
    long long temp = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]<temp) return false;
        else temp = arr[i];
    }
    return true;
}

int main() {
    int t = 0,i = 0;
    cin>>t;
    while(i<t){
        int n,k;
        cin>>n>>k;
        long long arr[n];
        //input Array
        for(int j = 0; j < n; j++){
            cin>>arr[j];
        }
        int flag = 1;
        if (k == 0 || k == 1 && !isSorted(arr,n)){
            flag = 0;
            cout<<"no"<<endl;
        }
        int count = 0;
        while(!isSorted(arr, n) && flag){
            long long temp = arr[0],str_idx = 0,cnt = 0;
            for(int j = 1; j < n; j++){
                // cout<<"temp :"<<temp<<"cnt :"<<cnt<<"str_idx :"<<str_idx<<endl;
                if( arr[j] < temp){
                    cnt++;
                }else{
                    if(cnt > 0 && cnt <= k){
                        for(int k1 = str_idx,p = j - 1; k1 <= p; k1++, p--){
                            swap(arr[k1],arr[p]);
                        }
                    }
                    if(cnt>k){
                        for (int k1 = str_idx,p=j-cnt+k-1; k1 <= p;k1++,p--){
                            swap(arr[k1], arr[p]);
                        }
                    }
                    str_idx = j;
                    cnt = 0;
                }
                if (j == n-1 && cnt >0 && cnt <= k){
                    for(int k1 = str_idx,p = j; k1 <= p; k1++, p--){
                        swap(arr[k1],arr[p]);
                    }
                }
                if (j == n-1 && cnt > k){
                    for (int k1 = str_idx,p = j-cnt+k; k1 <= p;k1++,p--){
                        swap(arr[k1], arr[p]);
                    }
                }
                // cout<<"temp :"<<temp<<"cnt :"<<cnt<<"str_idx :"<<str_idx<<"J :"<<j<<"flag :"<<flag<<endl;
                for(int j = 0; j < n; j++){
                    cout<<arr[j]<<" ";
                }
                cout<<endl;
                temp = arr[j];
            }

            // for(int j = 0; j < n; j++){
            //     cout<<arr[j]<<" ";
            // }
            // cout<<endl;
            
           count++; 

        }
        if (flag)
        cout<<"yes"<<endl;
        i++;
    }
return 0;
}


// //final easy soln
// #include <iostream>
// using namespace std;

// int main() {
//     long long t = 0,i = 0;
//     cin>>t;
//     while(i<t){
//         long long n,k;
//         cin>>n>>k;
//         long long arr[n];
//         //input Array
//         for(long long j = 0; j < n; j++){
//             cin>>arr[j];
//         }
//         int flag = 1;
//         if(k == 1){
//             long long temp = arr[0];
//             for (long long  j = 1; j<n;j++){
//                 if (temp > arr[j]){
//                     flag = 0;
//                     cout<<"NO"<<endl;
//                     break;
//                 }
//                 temp = arr[j];
//             }
//         }

//         if (flag)
//         cout<<"YES"<<endl;
//         i++;
//     }
// return 0;
// }