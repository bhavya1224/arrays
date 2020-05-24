#include <iostream>
#include<string>

using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.length();
        int flag = 0;
        int i;
        for(i=0;i<n;i++)
        {

            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
            flag = 0;
        }
        return i;
    }
};
int main()
{
    string s;
    cin>>s;
    Solution s1;
    cout<<s1.firstUniqChar(s);
    return 0;
}
