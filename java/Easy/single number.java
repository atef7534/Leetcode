// Link : https://leetcode.com/problem/single-number
// Level : Easy
// Author : Atef Yasser Wasef
// Done : Friday 11:17PM 28/10/2022
// Hint : loop (O(n log n) )

class Solution {
  public int singleNumber(int[] nums) {
    Arrays.sort(nums);
    for (int i = 1; i < nums.length; i += 2) {
      if (nums[i] != nums[i - 1])
        return nums[i - 1];
    }
    return nums[nums.length - 1];
  }
}