//The task is to count all the triplets such that sum of two elements equals the third element.

#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int N;
    int flag = 0;
    while(T--)
    {
        cin>>N;
        int arr[N];
        for(int i = 0; i<N; i++)
        {
            cin>>arr[i];
        }
        int sum = 0;
        int count = 0;
        int flag = 0;
        for(int i = 0; i<N; i++)
        {
            for(int j = i+1; j<N; j++)
            {
                sum+=(arr[i]+arr[j]);
                for(int  k = 0; k<N; k++)
                {
                    if(sum == arr[k])
                    {
                        count++;
                        flag = 1;
                    }
                }
                sum = 0;
            }
            sum = 0;
        }
        if(flag == 0)
        {
            cout<<-1;
        }
        cout<<count<<endl;
        count = 0;


    }
	return 0;
}
