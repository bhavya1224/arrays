#include <bits/stdc++.h>
using namespace std;
vector<int> t;

int findSum(int arr[],int n)
{
    int max = 3;
    int sum = 0;
    for(int i = 0 ; i<n; i++)
    {
        sum+=arr[i];

    }
    if (sum >= max)
    {
        max = sum;
        return max;
    }

    return(findSum(arr,n-1));

}

int main() {
	int T;
    cin>>T;
    int N;


    while(T--)
    {
        cin>>N;
        int arr[N];
        int  sum = 0;
        int r;

        for(int i = 0; i<N; i++)
        {
            cin>>arr[i];
        }
        cout<<findSum(arr,N)<<" ";

    }
	return 0;
}
