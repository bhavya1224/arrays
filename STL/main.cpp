#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter no. of bags";
    cin>> n ;
    map<int,string,greater <int> > map1;


    for(int i = 0; i<n; i++)
    {
        string name;
        int t;
        vector<pair<int,int> > items;
        int ni, w;


        vector<int> tw;
        cout<<"enter the name of bag"<<i+1;
        cin>>name;
        cout<<"Number of types of items in bag"<<i+1;
        cin>>t;

        for(int j = 0; j<t; j++)
        {
            cout<<"Number of item"<<j+1<<"in bag"<<i+1;
            cin>>ni;
            cout<<"weight of item"<<j+1<<"in bag"<<i+1;
            cin>>w;
            items.push_back(make_pair(ni,w));

        }

        for(int k =0; k<t; k++)
        {

            tw.push_back((items[k].first)*(items[k].second));

        }
        map1.insert(make_pair(accumulate(tw.begin(),tw.end(),0),name));



    }

   map<int,string> :: iterator it;
    for (it=map1.begin() ; it!=map1.end() ; it++)
        cout <<(*it).second<<" ";



}
