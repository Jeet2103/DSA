#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class solution
{
    public:
    int removedeplicate(vector<int>& nums)
    {
        int n = nums.size();
        int j = 1 ;
        for(int i = 1 ; i < n ; i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main()
{
    solution s;
    vector<int> nums = {12,12,34,56,78,78};
    int res = s.removedeplicate(nums);
    cout<<res<<endl;
    nums.resize(res);
    for(int i = 0;i<nums.size();i++)
    {
        cout<<nums[i]<<endl;
    }

    return 0 ;
}