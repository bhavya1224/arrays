#include <iostream>

using namespace std;
int isPossible(int arr[],int sum, int n)
{
    int dp[n+1][sum+1];

    for(int i =0; i<n+1; i++)
    {
        dp[i][0]=1;
        for(int j =1; j<sum+1; j++)
        {
            dp[0][j]=0;
            for(int i = 1;i<n+1; i++)
            {
                for(int j = 1; j<sum+1; j++)
                {
                    if(arr[i]<sum)
                    {
                        dp[i][j]= dp[i-1][j-arr[i]] || dp[i-1][j];
                    }
                    else
                        dp[i][j] = dp[i-1][j];
                }
            }
    }
    }
    return dp[n][sum];

}
int main()
{
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];

    }
   int s = 0;
    for(int i = 0; i<n;i++)
    {
        s+=arr[i];
    }
    if(s%2==0)
    {
        cout<<isPossible(arr,s/2,n);
    }
    else
    {
        cout<<"not possible";
    }



}
