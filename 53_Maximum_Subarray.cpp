// Kadane's algorithm
// Time Complexity will be O(N)
// Space Complexity will be O(1)
 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxum = nums[0];
        for(auto it : nums){
            sum += it;
            maxum = max(sum, maxum);
            if(sum < 0) sum = 0;

        }
        return maxum;
        
    }
};
