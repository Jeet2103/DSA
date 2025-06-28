#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class solution
{
    public:
        int LE(vector<int>& nums)
        {
            int n = nums.size();
            int max = nums[0];
            for(int i = 0 ; i< n ; i++)
            {
                if(nums[i]>max)
                {
                    max = nums[i];
                }
            }
            return max;

        }
        int SLE1(vector<int>& nums)
        {
            int n = nums.size();
            int max = INT_MIN;
            int sle = INT_MIN;
            for(int i = 0 ; i< n ; i++)
            {
                if(nums[i]>max)
                {
                    max = nums[i];
                }
            }
            for(int j = 0 ; j< n ; j++)
            {
                if(nums[j]>sle && nums[j]!=max)
                {
                    sle = nums[j];
                }
            }
            return (sle==INT_MIN) ?   -1:sle;
        } 
        int SLE2(vector<int>& nums)
        {
            int second = INT_MIN;
            int first = INT_MIN;
            for(int i = 0 ; i<nums.size();i++)
            {
                if(nums[i]>first)
                {
                    second = first;
                    first = nums[i];
                }
                else if(nums[i]!=first)
                {
                    second = nums[i];
                }
            }
            return (second==INT_MIN) ? -1 : second;
        }
};
int main()
{
    vector<int> nums = {10,1,4,6,2,2,11,11,88,90,90,90,90,45,89};
    solution s;
    int res1 = s.LE(nums);
    int res2 = s.SLE1(nums);
    int res3 = s.SLE2(nums);
    cout<<res1<<endl;
    cout<< res2<<endl<<res3;


    return 0;
}