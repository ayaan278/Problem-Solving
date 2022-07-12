#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string t1) 
{
    int hr,mn,sec;
     hr= (t1[0]-'0')*10 + (t1[1]-'0');
     mn= (t1[3]-'0')*10+(t1[4]-'0');
     sec=(t1[6]-'0')*10+(t1[7]-'0');
     if (t1[8]=='A' && hr==12 )
     {
        hr=00; 
     }
     else if ( t1[8]=='P')
     {
         if ( hr==12 )
         {
            hr=12;
         }
         else 
         {
         hr=hr+12;      
        }
     }
     string s="";
     if(hr<10){
        s+="0";
        s+=to_string(hr);}
    else
        s+=to_string(hr);
     s += ":";
    if(mn<10){
        s+="0";
        s+=to_string(mn);}
    else
        s+=to_string(mn);
     s += ":";
     if(sec<10){
        s+="0";
        s+=to_string(sec);}
    else
        s+=to_string(sec);
     return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
