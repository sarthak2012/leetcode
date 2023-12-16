class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n);
        for(int index=0;index<n;index++){
            int newindex= (index+k)%n;
            ans[newindex] = nums[index];
        }   
        nums=ans;
    }
};