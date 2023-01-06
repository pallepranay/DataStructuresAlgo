// This problem is variation of Dutch National Flag Algorithm
// low mid and high pointers to the array
// Space Complexity: O(N)
// Time Complexity: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0;
        int lo = 0;
        int hi = nums.size() - 1;
        while(mid <= hi){
            switch(nums[mid]){
                case 0:
                    swap(nums[lo++], nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[hi--]);
                    break;   
            }
        }
        
    }
};
