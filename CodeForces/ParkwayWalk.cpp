#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int m;  cin >> m;
        int ans;
        vector<int>v(n); 
        for(int i =0; i<n; i++) cin >> v[i];
        int sum = 0;
        for(int i =0; i<n; i++) sum += v[i];
        if(m>=sum)  ans=0;
        else ans=sum-m;
        cout<<ans<<endl;
    }
    
    return 0; 
}
