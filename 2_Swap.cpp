#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string goal;
    cin >> s;
    cin >> goal;
    map<char, int> m_s;
    map<char, int> m_goal;
    for(int i=0; i<s.size(); i++){
        m_s[s[i]]++;
    }
    for(int i=0; i<goal.size(); i++){
        m_goal[goal[i]]++;
    }
    int out_of_place = 0;
    if(m_s==m_goal){
        for(int i=0; i<s.size(); i++){
            if(s[i]!=goal[i]){
                out_of_place++;
            }
        }
        if(out_of_place==2){
            cout << "true" << endl;
        }
        else if(out_of_place == 0){
            bool multiple = false;
            for(auto i: m_s){
                if(i.second>1){
                    multiple = true;
                    break;
                }
            }
            if(multiple){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
        }
        else{
            cout << "false" << endl;
        }
    }
    else{
         cout<< "false" << endl;
    }

return 0;
}
