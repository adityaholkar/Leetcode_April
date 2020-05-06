class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //int *it;
        auto it = remove(nums.begin (),nums.end(),0);
        for(;it!=nums.end();it++)
        {
            *it=0;
        }
         
    }
};