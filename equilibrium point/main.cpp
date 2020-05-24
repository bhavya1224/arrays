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
        float sumb = 0;
        float sumf = 0;
        int flag = 0;
        for(int l = 0; l<N; l++)
        {
            cin>>arr[l];
        }
       for(int i = 0; i<N; i++)
       {
           for(int j = 0;j<i;j++)
           {
               sumb = sumb+arr[j];
           }
           for(int k = i+1; k<N; k++)
           {
               sumf = sumf+arr[k];
           }

           if(sumb == sumf)
           {
               cout<<i+1<<endl;

               flag = 1;
               break;
           }


           sumb = 0;
           sumf = 0;
       }
       if (flag == 0)
       {
           cout<<-1;
           break;
       }
    }
	return 0;
}
