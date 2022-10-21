#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    int gcd_a_b = __gcd(a, b);
    int count = 0;
    int temp = ceil(sqrt(gcd_a_b));
    for(int i=1; i<temp; i++){
        if(gcd_a_b%i==0){
            count++;
        }
    }
    count*=2;
    if(temp*temp==gcd_a_b){
        count++;
    }
    cout << count << endl;
return 0;
}
