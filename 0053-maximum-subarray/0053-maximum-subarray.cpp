class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currsum = 0;
        // so i missed the case where the nums[i] is greater than max itself
        for(int i=0;i<nums.size();i++){
            if(nums[i]>currsum+nums[i]){
                currsum = nums[i];
            }
            else{
                currsum += nums[i];
            }
            if(currsum>maxsum){
                maxsum = currsum;
            }
        }
        return maxsum;
    }
};