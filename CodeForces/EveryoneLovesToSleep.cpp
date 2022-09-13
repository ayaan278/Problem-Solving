//Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define ll long long
#define tc ll t; cin>> t; while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fast_io;
   #ifndef ONLINE_JUDGE
    freopen("contest input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    tc{
        vector<pair<int, int>> alarm;
        int n;
        cin >>n;
        int a, b, h, m;
        cin>> h>> m;
        for(int i = 0; i < n; i++)
        {
            cin >> a >> b;
            alarm.push_back(make_pair(a, b));
        }
        
        for(int i = 0; i < n; i++){
            if(alarm[i].first == h){
                if(alarm[i].second < m){
                    alarm[i].first += 24;
                }
            }
            else if(alarm[i].first < h){
                alarm[i].first += 24;
            }
        } 
        vector <int> alms(n); 
        for(int i = 0; i < n; i++){
            alms[i] = (alarm[i].first * 60) + alarm[i].second;
        }

        sort(alms.begin(), alms.end());

        int ans_mins = abs(((h*60) + m) - alms[0]); 

        int ans_h = ans_mins / 60;

        ans_mins %= 60;
        cout << ans_h << " " << ans_mins << endl;
    }
     
    
    return 0;
}
