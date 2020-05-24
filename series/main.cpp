#include <iostream>

using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {



        if(haystack.length()==0 && needle.length()>0)
        {
            return(-1);
        }
        if(haystack.length()<needle.length())
            return(-1);
        for(int i = 0; i<haystack.length()-needle.length();i++)
        {

            int j;
            for( j = 0;j<needle.length();j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
                if(j==needle.length())
                {
                    return(i);
                }
                if(j>needle.length())
                    return(-1);

            }
        }



        }
};
int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    Solution s;
    cout<<s.strStr(s1,s2);
}
