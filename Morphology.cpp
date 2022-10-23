#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, goal;
    cin >> s >> goal;
    char first_char = s[0];
    vector<int> index;
    for(int i=0; i<goal.size(); i++){
        if(goal[i]==first_char){
            index.push_back(i);
        }
    }
    bool flag = false;
    goal+=goal;
    int i=0;
    while(i<index.size()){
        int j=0;
        int k = index[i];
        while(j<s.size() && s[j]==goal[k]){
            j++;
            k++;
        }
        if(j==s.size()){
            flag = true;
            break;
        }
        i++;
    }
    if(flag){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
return 0;
}
