class Solution {
public:
    //optimal: nums[i] + nums[j] + nums[k] = 0 implies that
    // nums[j] + nums[k] = -nums[i]
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec; // Declaring a 2D vector named 'vec'
        std::sort(nums.begin(),nums.end());
        int j,k;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){//Because the array is sorted, the very first time you encounter a specific number at nums[i], your code runs the entire two-pointer scan and finds every single possible triplet that can start with that value.
                continue;
            }else{
                j=i+1;
                k=nums.size()-1;
                while(j<k){
                    if(nums[j]+nums[k]>-nums[i])
                        k--;
                    else if(nums[j]+nums[k]<-nums[i])
                        j++;
                    else{
                        vec.push_back({nums[i],nums[j],nums[k]});
                        //placed after one match because? find it
                        while (j < k && nums[j] == nums[j + 1]) j++; // Keep sliding until the last duplicate element
                        while (j < k && nums[k] == nums[k - 1]) k--; // Keep sliding until the last duplicate element
                        j++;
                        k--;
                    }
                }
            }
        }
        return vec;
    }
};