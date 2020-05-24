#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c;
        for(int i = 0; i<nums.size(); i++)
        {
            c = count(nums.begin(),nums.end(), nums[i]);
            if(c<2)
            {
                return nums[i];
                break;
            }
        }

    }
};
int main()
{
    int n;
    int x;
    cin>>n;
    vector<int> nums;
    for(int i = 0; i<n; i++)
    {
        cin>>x;
        nums.push_back(x);
    }
    int a;
    Solution result;
    a = result.singleNumber(nums);
    cout<<a;
}
