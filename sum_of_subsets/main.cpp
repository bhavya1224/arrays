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
                    if(arr[i]<j)
                    {
                        dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
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
    int sum;
    cout<<"enter sum: ";
    cin>>sum;
    bool result;
    result = isPossible(arr,sum,n);
    cout<<result;
}
