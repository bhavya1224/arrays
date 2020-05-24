#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k,x;
        int min1;
        cin>>n;
        vector<int> min;
        int arr[n];
        for(int i =0; i<n; i++)
        {
            cin>>x;
            min.push_back(x);
        }
        cin>>k;
        sort(min.begin(),min.end());



        cout<<min[k-1]<<endl;
    }
}
