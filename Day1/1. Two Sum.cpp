class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //two pointers
        int n= nums.size();
        vector<int>v;
        int i=0;
        int j=n-1;
        while(i<j){
            if(nums[i] + nums[j] > target){
                j--;
            }
            else if(nums[i] + nums[j] < target){
                i++;
            }
            else{
                v.push_back(i);
                v.push_back(j);
            }
        }
        return v;
    }
};
