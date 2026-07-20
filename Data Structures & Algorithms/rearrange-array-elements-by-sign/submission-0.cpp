class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int posedge = 0;
        int negedge = 1;
        for(int i = 0;i<n;i++){
            if(nums[i] < 0){
                ans[negedge] = nums[i];
                negedge += 2;
            
            }
            else{
                ans[posedge] = nums[i];
                posedge += 2;
            }
        }
        return ans;
        
    }
};