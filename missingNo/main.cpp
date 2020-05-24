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
        for(int i = 0; i<N-1; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+N);
        int sum = N*(N+1)/2;

        for(int i = 0;i<N-1; i++)
        {
            sum = sum - arr[i];
        }
        cout<<sum<<endl;


    }
	return 0;
}
