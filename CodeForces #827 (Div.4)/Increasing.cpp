#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<ll>v(n); 
        
        for(int i =0; i<n; i++) cin >> v[i];
        // int s = sizeof(v)/sizeof(ll);
        sort(v.begin(), v.end());
        int flag=0;
        for(int i =0; i<n-1; i++){
            if(v[i] == v[i+1]){
                flag=1;
                break;
            }
            else flag=0;
        }  
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    
    return 0; 
}