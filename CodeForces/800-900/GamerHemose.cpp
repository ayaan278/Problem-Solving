#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--){
        ll n, h;
        cin >> n >> h;
        vector<int>v(n); 
        for(int i =0; i<n; i++) cin >> v[i];    
        sort(v.begin(), v.end(), greater<int>()); 
        ll a = v[0], b = v[1], sum = a + b; 
        ll cnt = (h/sum); 
        ll rem = h - (sum * cnt);
        cnt *= 2;
        if(rem != 0){
            cnt++;
            if(rem > a) cnt++;  
        }
        cout << cnt << endl; 
    }
    return 0; 
}
