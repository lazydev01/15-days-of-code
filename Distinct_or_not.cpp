#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    bool ans = true;
    for(auto i:m){
        if(i.second>1){
            ans = false;
            break;         
        }
    }
    if(!ans){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
return 0;
}
