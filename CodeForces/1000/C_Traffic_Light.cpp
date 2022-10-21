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
        char c; cin >> c;
        string str; cin >> str;
        str += str;

        if(c=='g'){
            cout<<0<< endl;
        }
        else{
            int flag = 0;
            int j = 0, max = 0;
            for(int i=0; i<n*2; i++)
            {
                if (str.at(i) == 'g')
                    {   
                        if(j>max)
                            max=j;
                        j = 0;
                        flag = 0;
                    }
                else if (str.at(i) == c)
                {
                    flag = 1;
                }
                if (flag) 
                    j++;
            }
            cout << max << endl;
        }
    }
    
    return 0; 
}