#include <iostream>

using namespace std;

int main()
{
    int k,n;
    cin>>k>>n;
    int nu;
    int  flag = 0;
    int  count = 0;
     for(int i = 1; i<10; i++)
     {
         nu = k*i;
         if(nu%10==0)
         {
             cout<<i;
             break;
         }
         while(nu>10)
         {
             nu = nu%10;
         }
         if(nu == n)
         {
             cout<<i;

             break;
         }



     }

}

