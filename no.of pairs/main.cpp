#include <bits/stdc++.h>
using namespace std;


int main() {
	int T;
    cin>>T;
    int n;
    int m;
    while(T--)
    {
        cin>>n;
        cin>>m;
        int arr[n];
        int arr1[m];
        int count = 0;
        int p1, p2;
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i = 0; i<m; i++)
        {
            cin>>arr1[i];
        }
        for(int i =0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                p1 = pow(arr[i], arr1[j]);
                p2 = pow(arr1[j],arr[i]);
                cout<<"p1"<<p1<<endl;
                cout<<"p2"<<p2<<endl;
                if(p1>p2)
                {
                    count++;
                }
            }
        }
        cout<<count++;
    }
	return 0;
}
