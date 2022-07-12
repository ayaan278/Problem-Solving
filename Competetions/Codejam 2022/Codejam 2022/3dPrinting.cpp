//Bismillah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int iter=1;
    while(num--)
    {
        vector<vector<int>> arr;
        int val;
        for(int i=0; i<3; i++)
        {
            vector<int> temp;
            for(int j = 0; j < 4; j++)
            {
                cin >> val;
                temp.push_back(val);
            }
            arr.push_back(temp);
        }
        double sum; //1000000
        double allsum[4];
    
        allsum[0]=min(min(arr[0][0],arr[1][0]),arr[2][0]);
        allsum[1]=min(min(arr[0][1],arr[1][1]),arr[2][1]);
        allsum[2]=min(min(arr[0][2],arr[1][2]),arr[2][2]);
        allsum[3]=min(min(arr[0][3],arr[1][3]),arr[2][3]);

        int flag=0;
        sum=allsum[0]+allsum[1]+allsum[2]+allsum[3];
        if(sum==1000000)
        {
            flag=1;
        }
        else if(sum>1000000)
        {
            double tempval=abs(1000000-sum);
            sum-= tempval;
            float itercount=0;
            for(int i=0; i<4;i++)
            {   
                
                if(allsum[i]>=tempval)
                {
                    allsum[i]-=tempval;
                    break;
                }
                else
                {   
                    if(allsum[i]-(tempval/2)>0 && itercount+2<=4)
                    {
                        allsum[i]-=(tempval/2);
                        itercount+=2;
                    }
                    else if(allsum[i]-(tempval/4)>0 && itercount+1<=4)
                    {
                        allsum[i]-=(tempval/4);
                        itercount++;
                    }
                    else if(allsum[i]-(tempval/8)>0 && itercount+0.5<=4)
                    {
                        allsum[i]-=(tempval/8);
                        itercount+=0.5;
                    }
                }
                if(itercount==4)
                    break;
            }
            flag=1;
        }
        else
        {
            flag=0;
        }


        if(flag==0)
        {
            cout<<"Case #"<<iter<<": IMPOSSIBLE\n";
        }
        else
        {   
            // if((allsum[0]+allsum[1]+allsum[2]+allsum[3])!=1000000)
            cout<<setprecision(3);
            cout<<"Case #"<<iter<<": "<<allsum[0]<<" "<<allsum[1]<<" "<<allsum[2]<<" "<<allsum[3]<<endl;
        }
        iter++;
    }
    return 0;
}

