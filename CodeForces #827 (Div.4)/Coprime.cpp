#include <bits/stdc++.h>
#define ll long long
#define tc ll t; cin>> t; while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

// int prime(int num, int num2){
//     int maxii = max(num, num2);
//     for(int i = 2; i < maxii; i++){
//         if(num%i==0 && num2%i==0){
//             return 1;
//         }
//     }
//     return 2;
// }

int main()
{
    fast_io;
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    tc{
        ll n;  cin >> n;
        map<int, int> m;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            m[x] = i;
        }
        int ans = -1;
        // for(auto i : m) {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for (auto i : m)
            for (auto j : m) 
                if (__gcd(i.first, j.first) == 1)
                    ans = max(ans, i.second + j.second);
        cout << ans << endl;
    }
    
    return 0; 
}