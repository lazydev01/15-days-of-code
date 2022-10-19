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
map<int, int> m;
for(int i=0; i<n; i++){
    m[arr[i]]++;
}
for(auto i:m){
    if(i.second>n/2){
        cout << i.first << endl;
        break;
    }
}
return 0;
}
