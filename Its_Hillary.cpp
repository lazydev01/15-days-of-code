#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long int
int n;
cin >> n;
vector<int> arr(n);
for(int i=0; i<n; i++){
    cin >> arr[i];
}
int count = 0;
bool flag = false;
int temp;
for(int i=1; i<n-1; i++){
    if(arr[i+1]==arr[i]){
        flag = true;
        temp = arr[i-1];
    }
    else{
        if(flag){
            if(temp<arr[i] && arr[i+1]<arr[i])count++;
            else if(temp>arr[i] && arr[i+1]>arr[i])count++;
        }
        else{
             if(arr[i-1]<arr[i] && arr[i+1]<arr[i])count++;
            else if(arr[i-1]>arr[i] && arr[i+1]>arr[i])count++;
        }
        flag = false;
    }
}
cout << count << endl;
return 0;
}
