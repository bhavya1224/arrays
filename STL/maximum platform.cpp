#include<bits/stdc++.h>
using namespace std;
bool sort1(const pair<int,char> &a,const pair<int,char> &b)
{
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
)
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        int ar[n],dp[6];
        for(int i = 0; i<n; i++)
        {
            cin>>ar[n];
        }
        for(int i = 0; i<n; i++)
        {
            cin>>dp[n];
        }
        vector<pair<int,char> > order;


        for(int i = 0; i<n; i++)
        {
            order.push_back(make_pair(ar[i],'a'));
            order.push_back(make_pair(dp[i],'d'));
        }
        vector<pair<int,char> >::iterator it;
        sort(order.begin(),order.end(),sort1);
        int count = 0;
        for(it = order.begin();it!=order.end(); it++)
        {
            if((*it).second == 'a')
            {
                count++;
            }
            else
                count--;
        }
        cout<<count;


    }
}
