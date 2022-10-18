class Solution {
    public void moveZeroes(int[] nums) {
      // Two Pointer
        int index = 0;
        // Iterate through the array, keep the final index and next value index, ignor 0s for now
        for (int nextValue = 0; nextValue < nums.length; nextValue++) {
            if (nums[nextValue] != 0) {
                nums[index] = nums[nextValue];
                index++;
            }
        }
        // Add 0s at the end
        for (int i = index; i < nums.length; i++) {
            nums[i] = 0;
        }
    }
}