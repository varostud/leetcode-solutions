class Solution {
public:
    int climbStairs(int n) {
        int *m = new int[n + 1];
        return climbStairs(0, n, m);
    }
    
    int climbStairs(int i, int n, int *m) {
        if(i > n) return 0;
        if(i == n) return 1;
        if(m[i] > 0) return m[i];
        
        m[i] = climbStairs(i + 1, n, m) + climbStairs(i + 2, n, m);
        return m[i];   
    }
};