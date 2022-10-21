#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    double first, second, third;
    cin >> first >> second >> third;
    vector<double> arr = {first, second, third};
    sort(arr.begin(), arr.end(), greater<int>());
    if(arr[0]>(arr[1]+arr[2])){
        count+=(arr[1]+arr[2]);
        count+=(arr[0]-(arr[1]+arr[2]));
    }
    else{
        arr[1]-=ceil((double)(arr[0]/2));
        arr[2]-=(int)arr[0]/2;
        count+=arr[0];
        count+=max(arr[1], arr[2]);
    }
    cout << count << endl;
return 0;
}
