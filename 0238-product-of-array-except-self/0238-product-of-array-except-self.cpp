//so if we were allowed to use divison operator, we could have found the product of all members of the array, and just divide the value at each indice for that indice ka result 

//lets think bout 2 pointer method . so one pointer in the start an
class Solution { 
public: 
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> answer; 
        for(int i=0;i<size(nums);i++){
            answer.push_back(1);
        }
        int i=0;
        int j=size(nums)-1;
        int vali=1;
        int valj=1;
        while(i!=size(nums)){
            answer[i]*=vali;
            answer[j]*=valj;
            vali*=nums[i];
            valj*=nums[j];
            i++;
            j--;
        }
        return answer;
    } 
};
