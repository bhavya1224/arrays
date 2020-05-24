#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int N,S;
    int flag = 0;
    while(T--)
    {
        cin>>N;
        cin>>S;
        int arr[N];
        for(int i = 0; i<N; i++)
        {
            cin>>arr[i];
        }
        int sum = 0;
        for(int i = 0; i<N; i++)
        {
           for(int j = i; j<N; j++)
           {
              sum+=arr[j];
              if(sum == S)
              {
                  cout<<i+1<<" "<<j+1<<endl;
                  flag = 1;
                  break;
              }
           }
           if(flag ==1)
           {
               break;
           }


           sum = 0;

        }
        if(flag == 0)
        {
            cout<<-1;
        }


    }

	return 0;
}
