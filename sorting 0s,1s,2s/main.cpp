#include <bits/stdc++.h>
using namespace std;


int main() {
	int T;
    cin>>T;
    int N;


    while(T--)
    {
        cin>>N;
        int arr[N];
        for(int i = 0; i<N; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+N);
        for(int i = 0; i<N; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
