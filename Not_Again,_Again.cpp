#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> m;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    bool flag = false;
    for(int i=0; i<s.size(); i++){
        if(m[s[i]]==1){
            flag = true;
            cout << i << endl;
            break;
        }
    }
    if(!flag){
        cout << -1 << endl;
    }
return 0;
}
