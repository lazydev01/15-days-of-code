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
    vector<int> v;
    for(auto i:m){
        v.push_back(i.second);
    }
    set<int> s;
    for(int i=0; i<v.size(); i++){
        s.insert(v[i]);
    }
    if(v.size()==s.size()){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
return 0;
}
