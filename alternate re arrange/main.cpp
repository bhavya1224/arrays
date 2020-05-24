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
        int j = N;
        int i = 0;
        int arr1[N];
        while(i<j)
        {
            for(int k = 0; k<N; k++)
            {
                arr1[k]=arr[--j];
                arr1[++k]=arr[i++];
            }
        }
        for(int i =0; i<N; i++)
        {
            cout<<arr1[i]<<" ";
        }

    }
	return 0;
}
