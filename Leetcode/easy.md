1) 1051. Height Checker
Solved
Easy
Topics
Companies
Hint
A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.

You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).

Return the number of indices where heights[i] != expected[i].

------------------------------------------------
class Solution {
    public int heightChecker(int[] heights) {
         // Step 1: Create a copy of the heights array and sort it to get the expected order.
        int[] expected = heights.clone(); // Copy of the original array
        Arrays.sort(expected); // Sort the array to get the expected order
        
        // Step 2: Compare the original heights with the expected heights.
        int count = 0; // To store the number of indices where heights and expected are different
        for (int i = 0; i < heights.length; i++) {
            if (heights[i] != expected[i]) {
                count++; // If they are different, increment the count
            }
        }
        
        // Step 3: Return the number of mismatches
        return count;
    }
}


2)