#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; 
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        ll maxii = max(a, max(b, c)); 
        ll ans1, ans2, ans3; 
        ans1 = abs(a - maxii) + 1; 
        ans2 = abs(b - maxii) + 1; 
        ans3 = abs(c - maxii) + 1; 
        if(!(maxii == a && maxii == b || maxii == a && maxii == c || maxii == b && maxii == c))
        {
            if(a == maxii) ans1--;
            else if(b == maxii) ans2--;
            else ans3--;
        }
        cout << ans1 << " " << ans2 << " " << ans3 << endl; 
    }
    return 0; 
}