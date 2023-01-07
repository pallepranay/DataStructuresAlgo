// Approach 1 : Using Bit Manipulation: 
// Best Method
// Time Complexity: O(N) Space Complexity: O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int res = nums.size();
        for(int i=0; i<nums.size(); i++){
            res ^= i;
            res ^= nums[i];
        }
        return res;

        
    }
};

// Approach 2 : Difference of Sum of the numbers:
// Methond is not preffered in interviews
// Time Complexity: O(N) Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arrSum = 0;
        for (int i:nums){
            arrSum+=i;
        }

        int n = nums.size();
        int totSum = n*(n+1)/2;

        return totSum - arrSum;

    }
};
