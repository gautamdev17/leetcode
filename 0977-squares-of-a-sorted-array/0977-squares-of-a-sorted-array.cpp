class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int> result(nums.size());
        int i=0;
        int j=nums.size()-1;
        for(int k=0;k<nums.size();k++){
            nums[k]=nums[k]*nums[k];
        }
        int k = nums.size()-1;
        while(i<=j){
            if(nums[i]<=nums[j]){// handle equal case anywhere its symmetrical
                result[k]=nums[j];
                j--;
            }else{
                result[k]=nums[i];
                i++;
            }
            k--;
        }
        return result;
    }
};