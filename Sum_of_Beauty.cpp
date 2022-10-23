#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=1; i<n-1; i++){
        if(*max_element(arr.begin(), arr.begin()+i-1)<arr[i] && *min_element(arr.begin()+i+1, arr.end())>arr[i]){
            count+=2;
        }
        else if(arr[i]<arr[i+1] && arr[i]>arr[i-1]){
            count+=1;
        }
    }
    cout << count << endl;
return 0;
}
