#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char c;
    cin >> c;
    vector<int> index;
    for(int i=0; i<s.size(); i++){
        if(s[i]==c){
            index.push_back(i);
        }
    }
    vector<int> ans;
    for(int i=0; i<s.size(); i++){
        int minimum = INT_MAX;
        for(int j=0; j<index.size(); j++){
            minimum = min(minimum, abs(index[j]-i));
        }
        ans.push_back(minimum);
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
return 0;
}
