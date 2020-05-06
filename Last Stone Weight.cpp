class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
           sort(stones.begin(),stones.end());
        while(stones.size()>1){
            int i=stones.size();
            sort(stones.begin(),stones.end());
            int tmp=stones[i-1]-stones[i-2];
            stones.erase(stones.begin()+(i-2));
            stones.back()=tmp;
        }
        return stones[0];
    }
};