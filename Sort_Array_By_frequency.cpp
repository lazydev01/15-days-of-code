#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    vector<pair<int, int>> vp;
    for (auto i : m)
    {
        pair<int, int> p;
        p = make_pair(i.second, i.first);
        vp.push_back(p);
    }
    sort(vp.begin(), vp.end(), [](const auto &l, const auto &r)
         { return (l.first == r.first) ? l.second > r.second : l.first < r.first; });
    vector<int> ans;
    for(int i=0; i<vp.size(); i++){
        for(int j=0; j<vp[i].first; j++){
            ans.push_back(vp[i].second);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
