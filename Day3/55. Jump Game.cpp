class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = nums[0];
        for(int i=1; i<nums.size(); ++i){
            if(jump == 0){
                return false;
            }
            jump = max(jump-1, nums[i]);
        }
        return true;
    }
};
