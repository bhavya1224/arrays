#include <bits/stdc++.h>

using namespace std;
class charVector
{
public:
    vector<char> v;
    vector<char> initializeVector(string s)
    {
      for(int i = 0; i<s.length(); i++)
      {
          v.push_back(s[i]);
         //cout<<s[i]<<endl;
      }
      return(v);
    }
    void duplicateVector(vector<char> v1)
    {
       vector<char> v1Copy;
       v1Copy = v1;
       vector<char>::iterator it;
       for(it = v1Copy.begin(); it!=v1Copy.end(); it++ )

       {
           v1.push_back(*it);
       }
       print(v1);
    }
    void duplicateRevVector(vector<char> v2)
    {
        vector<char> v2Copy;
        v2Copy = v2;
        reverse(v2Copy.begin(),v2Copy.end());
        vector<char>::iterator it1;
        for(it1 = v2Copy.begin(); it1!=v2Copy.end(); it1++)

       {
           v2.push_back(*it1);
       }
       print(v2);


    }
    void print(vector<char> v)
    {
         vector<char>::iterator it;
      for(it = v.begin(); it!=v.end(); it++)
      {
          cout<<*it<<" ";
      }
      cout<<endl;
    }


};
int main()
{
    charVector vt;
    charVector vt2;
    string s1, s2;
    vector<char> v1;
    vector<char> v2;
    cout<<"String to be stored in vector1"<<endl;
    cin>>s1;
    cout<<"String to be stored in vector2"<<endl;
    cin>>s2;
    v1 = vt.initializeVector(s1);
    v2 = vt2.initializeVector(s2);
    vt.duplicateVector(v1);
    vt2.duplicateRevVector(v2);

}
