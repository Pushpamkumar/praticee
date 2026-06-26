class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        bool t= false;
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                t=true;
                break;
            }
        }
        return t;
    }
};