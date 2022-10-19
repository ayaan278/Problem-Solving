#include <bits/stdc++.h>
#define ll long long
#define tc ll t; cin>> t; while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    tc{
        int n;  cin >> n;
        ll opp; cin >> opp;

        vector <ll> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }

        int ans = 0;
        sort(v.begin(), v.end(), greater<>());

        int sum = 0;
        int j = n-1;
   
        
        for(int i = 0; i < n; i++){
            sum=v[i];
            if(v[i]>opp){
                ans++;
            }
            else{   
                while(opp>=sum && j>i){
                    sum =sum+v[i];
                    j--;
                    // cout<<sum<<" "<<i<<" "<<j<<endl;
                }
                if(sum>opp){
                    ans++;
                    sum=0;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0; 
}