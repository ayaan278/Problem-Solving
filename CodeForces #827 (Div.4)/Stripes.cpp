#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--){
    
        char ch[8][8];

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin>> ch[i][j];
            }
        }

        int Rcount = 0, Bcount = 0;
        int flag=0;
        for(int i = 0; i < 8; i++){
            int temp= 0;
            for(int j = 0; j < 8; j++){
                if(ch[i][j]=='R'){
                    Rcount++;
                    temp++;
                }
                else if(ch[i][j]=='B'){
                    Bcount++;
                }
                
            }
            if(temp==8){
                flag++;
            }
        }
        if(Rcount>Bcount && flag!=0)
            cout<<"R"<<endl;
        else if(Bcount>Rcount && flag<1)
            cout<<"B"<<endl;
        else{
            if(flag>=1) cout<<"R"<<endl;
            else cout<<"B"<<endl;
        }
    }
     
    
    return 0;
}
