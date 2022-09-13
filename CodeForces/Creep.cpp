#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int m;  cin >> m;
        int sum= m+n;
       if(n<m)
            {
                while(n&&m)
                {
                    cout<<0;
                    cout<<1;
                    n--;
                    m--;
                }
                while(m--)
                {
                    cout<<1;
                }
                cout<<"\n";
            }
            else
            {
                while(n&&m)
                {
                    cout<<1;
                    cout<<0;
                    n--;
                    m--;
                }
                while(n--)
                {
                    cout<<0;
                }
                cout<<"\n";
 
            }
    }
    
    return 0; 
}