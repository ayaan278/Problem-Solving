#include <bits/stdc++.h>
#define ll long long
#define tc ll t; cin>> t; while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif 
    tc{
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        int ans=0;

        if(d==0){
            ans=n+m-2;
        }
        if((x-1<=d || m-y<=d) && (y-1<=d || n-x<=d)){
            ans=-1;
        }
        else{
            ans=n+m-2;
        }
        cout<<ans<<endl;

    }
    
    return 0; 
} 