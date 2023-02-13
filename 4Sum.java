class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
    ArrayList<List<Integer>> res = new ArrayList<List<Integer>>();
    if(nums == null || nums.length == 0)
        return res;
    int n = nums.length;
    Arrays.sort(nums);
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int l = j + 1, r = n - 1;
            int target1 = target - nums[i] - nums[j];
            while(l < r) {
                int lrsum = nums[l] + nums[r];
                if(lrsum < target1) l++;
                else if(lrsum > target1) r--;
                else {
                    List <Integer> quad = new ArrayList();
                    quad.add(nums[i]);
                    quad.add(nums[j]);
                    quad.add(nums[l]);
                    quad.add(nums[r]);
                    res.add(quad);

                    // processing the duplicates 
                    while(l < r && nums[l] == quad.get(2)) ++l;
                    while(l < r && nums[l] == quad.get(3)) ++r;
                }

            }
            // processing duplicates for j
            while(j+1 < n && nums[j+1] == nums[j]) ++j;
        }
        while(i+1<n && nums[i+1] == nums[i]) ++i;
    }
    return res;

    }
}
