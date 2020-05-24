#include <iostream>

using namespace std;
int knapsack(int val[], int w[],int W,int n)
{
    int dp[n+1][W+1];
    for(int i = 0; i<n+1; i++)
    {
        dp[i][0]=0;
        for(int j =0; j<W+1; j++)
        {
            dp[0][j]=0;


            for(int i = 1; i<n+1; i++)
            {
                for(int j =1; j<W+1; j++)
                {
                    if(w[i]<=W)
                    {
                            dp[i][j] = max(val[i]+dp[i-1][j-w[i]],dp[i-1][j]);
                    }
                    else
                    {
                        dp[i][j] = dp[i-1][W];
                    }
                }
            }
        }
    }
return dp[n][W];

}




int main()
{
    int n;
    cout<<"Enter no. elements: ";
    cin>>n;
    int val[n];
    int w[n];
    cout<<"enter value and corresponding weight: ";
    for(int i = 0; i<n; i++)
    {
        cin>>val[i]>>w[i];

    }
    int W;
    cout<<"enter the weight of the knapsack: ";
    cin>>W;
    int result;
    result = knapsack(val,w,W,n);
    cout<<"max profit: "<<result;

}
