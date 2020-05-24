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

        int r;

        for(int i = 0; i<N; i++)
        {
            cin>>arr[i];
        }
        for(int i = 1; i<=N; i++)
        {
            if(i != arr[i])
            {
               cout<<i;
            }
        }

    }
	return 0;
}
