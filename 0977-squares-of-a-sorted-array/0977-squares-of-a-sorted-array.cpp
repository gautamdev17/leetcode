class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int> result(nums.size());
        int i=0;
        int j=nums.size()-1;
        int k = nums.size()-1;
        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){// handle equal case anywhere its symmetrical
                result[k]=nums[j]*nums[j];
                j--;
            }else{
                result[k]=nums[i]*nums[i];
                i++;
            }
            k--;
        }
        return result;
    }
};