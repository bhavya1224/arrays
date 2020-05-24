#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    //1324
    sort(v1.begin(), v1.end());
    reverse(v1.begin(), v1.end());

    vector<int>::iterator it;
    for(it = v1.begin(); it!=v1.end();it++)
    {
        cout<<*it<<" ";
    }
}
