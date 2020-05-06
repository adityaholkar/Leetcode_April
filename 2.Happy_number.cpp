class Solution {
public:
    bool isHappy(int n) {
        set<int> st; 
    while (1) 
    { 
        n = numSquareSum(n); 
        if (n == 1 || n==7) 
            return true; 
        if (st.find(n) != st.end()) 
            return false; 
        st.insert(n); 
    } 
    }
    int numSquareSum(int x)
    {
        int sum=0;
        while(x)
        {
            sum = sum + (x%10)*(x%10);
            x/=10;
        }
        return sum;
    }
};
