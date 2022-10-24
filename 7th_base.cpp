#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin >> n;
    bool negative = false;
    if(n<0){
        negative = true;
    }
    n = abs(n);
    int logarithm = log2(n)/log2(7);
    int ans = 0;
    for(int i=logarithm; i>=1; i--){
        if(n>=pow(7, i)){
            int div = n/(pow(7, i));
            ans = ans + (ceil((pow(10, i))*div));
            n-=ceil(pow(7, i)*div);
        }
    }
    ans+=n;
    if(negative){
        ans*=-1;
    }
    cout << ans << endl;
return 0;
}
