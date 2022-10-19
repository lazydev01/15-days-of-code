#include<bits/stdc++.h>
using namespace std;
int main(){
string ransomNote;
string magazine;
cin >> ransomNote;
cin >> magazine;
map<char, int> m_ransom;
map<char, int> m_magazine;
for(int i=0; i<ransomNote.size(); i++){
    m_ransom[ransomNote[i]]++;
}
for(int i=0; i<magazine.size(); i++){
    m_magazine[magazine[i]]++;
}
bool flag = false;
for(auto i:m_ransom){
    if(m_magazine[i.first]<m_ransom[i.first]){
        flag = true;
        break;
    }
}
if(flag){
    cout << "false" << endl;
}
else{
    cout << "true" << endl;
}
return 0;
}
