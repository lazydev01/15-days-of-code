#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> arr(n);
    vector<string> ans;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        bool row1 = false;
        bool row2 = false;
        bool row3 = false;
        bool flag = false;
        int count=0;
        for(int j=0; j<arr[i].size(); j++){
            if(!row1 && (arr[i][j]=='q' || arr[i][j]=='w' || arr[i][j]=='e' || arr[i][j]=='r' || arr[i][j]=='t' || arr[i][j]=='y' || arr[i][j]=='u' || arr[i][j]=='i' || arr[i][j]=='o' || arr[i][j]=='p')){
                row1 = true;
                count++;
            }       
            else if(!row2 && (arr[i][j]=='a' || arr[i][j]=='s' || arr[i][j]=='d' || arr[i][j]=='f' || arr[i][j]=='g' || arr[i][j]=='h' || arr[i][j]=='j' || arr[i][j]=='k' || arr[i][j]=='l')){
                row2 = true;
                count++;
            }
            else if(!row3 && (arr[i][j]=='z' || arr[i][j]=='x' || arr[i][j]=='c' || arr[i][j]=='v' || arr[i][j]=='b' || arr[i][j]=='n' || arr[i][j]=='m')){
                row3 = true;
                count++;
            }
            if(count==2){
                flag = true;
                break;
            }       
            }
            if(!flag){
                ans.push_back(arr[i]);
            }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
return 0;
}
