// Bismillah
#include <bits/stdc++.h>
using namespace std;

void print(int take, int y, string s,int trial)
{
    for(int j = 0; j <= y; j++)
    {   
        if(trial==0 && j==y)
        {
            cout<<"|";
        }
        else if(trial==1 && j==y)
        {
            cout<<"+";
        }
        else{
            if(take==0)
            {
                cout<<"..";
                take=1;
            }
            else
            {
                cout<<s;
            }
        }
    }
    cout<<endl;
}

int main()
{
    int number;
    cin>>number;
    int tempo=1;
    vector<vector<int>> arr;
    int val;
    for(int i=0; i<number; i++)
    {
        vector<int> temp;
        for(int j = 0; j < 2; j++)
        {
            cin >> val;
            temp.push_back(val);
        }
        arr.push_back(temp);
        temp.clear();
    }
    
    int a ,b;
    int coli=0;
    while(number--)
    {   
        a=arr[coli][0];
        b=arr[coli][1];
        coli++;
        cout<<"Case #"<<tempo<<":\n";
        int take =0;
        for(int i = 0; i < a; i++)
        {   
            if(take==0)
            {   
                print(take, b,"+-",1);
                print(take, b,"|.",0);
                take++;
            }
            else
            {   
                print(take, b,"+-",1);
                print(take, b,"|.",0);
            }
        }
        print(1,b,"+-",1);
        tempo++;
    }
    return 0;
}

