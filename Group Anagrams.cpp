class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      //  int ar[strs.size]={0};
        string temp;
        vector<vector<string>>ans;
       // sort(strs.begin(),strs.end());
       unordered_map<string,vector<string>>umap;
        for(int i=0;i<strs.size();i++)
        {
           temp = strs[i];
            sort(temp.begin(),temp.end());
            umap[temp].push_back(strs[i]);
        }
        for(auto n:umap)
        {
            ans.push_back(n.second);
        }
        return ans;
    }
   
};