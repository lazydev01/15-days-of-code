#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int zero_count = 0;
    int one_count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            one_count++;
        }
        else{
            zero_count++;
        }
    }
    vector<int> zero;
    int max_length = 0;
    if(zero_count==0){
        cout << n-1 << endl;
    }
    else if(one_count==0){
        cout << 0 << endl;
    }
    else{
        for(int i=1; i<n-1; i++){
            if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1){
                zero.push_back(i);
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){ 
            if(arr[i]==1){
                count++;
            }
            else{
                max_length = max(max_length, count);
                count = 0;
            }
        }
        if(arr[n-1]==1){
            max_length = max(max_length, count);
        } 
        for(int i=0; i<zero.size(); i++){
            int left = 1;
            int right = 1;
            int j = zero[i]-1;
            int k = zero[i]+1;
            if(j!=0){
                while(arr[j]==arr[j-1]){
                    left++;
                    j--;
                    if(j==0){
                        break;
                    }
                }
            }
            if(k!=0){
                while(arr[k]==arr[k+1]){
                    right++;
                    k++;
                    if(k==n-1){
                        break;
                    }
                }
            }
            max_length = max(max_length, left+right);            
        }
        cout << max_length << endl;
    }
    return 0;
}
