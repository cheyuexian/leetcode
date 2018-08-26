
/*

给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。

你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。

示例:

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
解答:
第一种自然是暴力双重循环解法时间复杂度为O(n^2)
第二种用空间换时间 只遍历一次 将遍历之后的数字存在map中

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> leftNums; //
        vector<int> ret;
        for(int i = 0;i<nums.size();++i)
        {
            int left = target-nums[i];
            if(leftNums.count(left))
            {
                
                ret.push_back(leftNums[left]);
                ret.push_back(i);
                return ret;
            }
            else
            {
                leftNums.insert(pair<int,int>(nums[i],i));
            }
        }
        return ret;
    }
};