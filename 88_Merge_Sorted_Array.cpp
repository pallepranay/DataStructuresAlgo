// Time complexity is O(m+n)
// Space Complexity is O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ar1Cur = m-1;
        int ar2Cur = n-1;
        int arCur = (m+n-1);
        while(ar1Cur>=0 && ar2Cur>=0){
            if(nums1[ar1Cur] > nums2[ar2Cur])
                nums1[arCur--] = nums1[ar1Cur--];
            else
                nums1[arCur--] = nums2[ar2Cur--];
        }

        while(ar1Cur>=0){
            nums1[arCur--] = nums1[ar1Cur--];
        }

        while(ar2Cur>=0){
            nums1[arCur--] = nums2[ar2Cur--];
        }
    }
};
