#include <iostream>

using namespace std;

int main()
{
   int T;
   cin>>T;
   while(T--)
   {
       int n;
       cin>>n;
       int flag = 0;
       int arr[n];
       for(int i = 0; i<n; i++)
       {
           cin>>arr[i];
       }
       for(int i = 0; i<n;i++)
       {
           for(int j = i+1; j<n; j++)
           {
               if(arr[i]<arr[j])
               {
                   flag = 1;
                   break;
               }
               flag = 0;

           }
           if(flag == 0 || i == n-1)
             cout<<arr[i]<<" ";

       }
       cout<<endl;
   }
}
