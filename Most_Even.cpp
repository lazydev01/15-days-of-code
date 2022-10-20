#include<bits/stdc++.h>
using namespace std;
bool sortByVal(const pair<string, int> &a, 
               const pair<string, int> &b) 
{ 
    return (b.second < a.second); 
} 
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
    int maximum = 0;
    for(auto i:m){
        if(i.second>maximum && i.first%2==0 ){
            maximum = i.second;
        }
    }
    if(maximum==0){
        cout << -1 << endl;
    }
    else{
        vector<int> max_freq;
        for(auto i:m){
            if(m[i.first]==maximum && i.first%2==0 ){
                max_freq.push_back(i.first);
            }
        }
        cout << *min_element(max_freq.begin(), max_freq.end());
    }
    
return 0;
}
