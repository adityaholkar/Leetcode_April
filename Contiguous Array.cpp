class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int length=0;
        unordered_map<int,int>umap;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0) 
                count++;
            else
                count--;
            if(count == 0 )
                length = max(length,i+1);
            else
            {
                auto pos = umap.find(count);
                if(pos!=umap.end())
                {
                    length = max(length, i - pos->second);                   
                }
                else
                    umap.insert({count,i});
            }
        }
        return length;
    }
};