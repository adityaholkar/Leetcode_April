class Solution {
public:
    bool backspaceCompare(string S, string T) {
        //string s,t;
        int i = S.length()-1,j=T.length()-1;
        
        int counts=0,countj=0;
       while(i>=0 || j>=0)
       {
           while(i>=0)
           {
               if(S[i] == '#')
               {
                   ++counts;
                   --i;
               }
               else if(counts > 0)
               {
                   --counts;
                   --i;
               }
               else break;
           }
            while(j>=0)
           {
               if(T[j] == '#')
               {
                   ++countj;
                   --j;
               }
               else if(countj > 0)
               {
                   --countj;
                   --j;
               }
               else break;
           }
           if(i>=0 && j>=0 && S[i] != T[j])
               return false;
           if((i>=0) != (j>=0))
               return false;
           --i;
           --j;
       }
        return true;
    }
};