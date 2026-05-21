class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currsum = 0;
        /* algorithm:
            1.check if continuing the current subarray is worth it or not:
                condition: array[i]>currsum+array[i]
                        then just update currsum = array[i]
            2.else just keep continuing the current subarray

            update maxsum if highest of currsum history is reached

            easy algorithm!
        */
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