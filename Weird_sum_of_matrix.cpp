#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long int
int m, n;
cin >> m >> n;
vector<vector<int>> vv;
for(int i=0; i<m; i++){
    vector<int> v(n);
    for(int j=0; j<n; j++){
        cin >> v[j];
    }
    vv.push_back(v);
}
int count = 0;
for(int i=0; i<m-2; i++){
    for(int j=0; j<n-2; j++){
        int temp = 0;
        temp+=(vv[i][j] + vv[i][j+1] + vv[i][j+2] + vv[i+1][j+1] + vv[i+2][j] + vv[i+2][j+1] + vv[i+2][j+2]);
        count = max(count, temp);
    }
}
cout << count << endl;
return 0;
}
