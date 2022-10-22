#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int pow = log2(n);
    for(int i=0; i<pow; i++){
        vector<int> temp;
        for(int j=0; j<n/2; j++){
            if(j%2==0){
                temp.push_back(min(arr[2*j], arr[(2*j)+1]));
            }
            else{
                temp.push_back(max(arr[2*j], arr[(2*j)+1]));
            }
        }
        n/=2;
        arr = temp;
    }
    cout << arr[0] << endl;
return 0;
}
