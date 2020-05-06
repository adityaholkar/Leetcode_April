class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far =INT_MIN; 
   int curr_max = 0; 
  
   for (int i:nums) 
   { 
        curr_max = max(i, curr_max+i); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far;
    }
};