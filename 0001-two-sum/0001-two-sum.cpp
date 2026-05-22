class Solution {
public:
    //using two pointer technique for most efficient solution
    vector<int> twoSum(vector<int>& nums, int target) {
        //to prevent loss of correct indice of value
        vector<pair<int, int>> numindex;
        for (int i = 0; i < nums.size(); i++) {
            numindex.push_back({nums[i], i});
        }
        sort(numindex.begin(), numindex.end());
        int i=0;
        int j=numindex.size()-1;
        while(i!=j){
            if(numindex[i].first+numindex[j].first>target)
                j--;
            else if(numindex[i].first+numindex[j].first<target)
                i++;
            else
                return {numindex[i].second,numindex[j].second};
        }
        return {};
    }
};