#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;

        if(s=="1" || s=="4" || s=="78")
        {
            cout<<"+"<<endl;
        }
        else if(s[s.size()-1]=='5' && s[s.size()-2]=='3')
        {
            cout<<"-"<<endl;
        }
        else if(s[s.size()-1]=='4' && s[0]=='9')
        {
            cout<<"*"<<endl;
        }
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
        {
            cout<<"?"<<endl;
        }
        else
            cout<<"?"<<endl;
    }
}
