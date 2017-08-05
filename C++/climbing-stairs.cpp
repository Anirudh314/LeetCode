class Solution {
public:
    int a[100000]{0};
    
    int climbStairs(int n) {
        
        if(n==1||n==0)
        {
            return 1;
        }
        if(n<0)
        {
            return 0;
        }
            
        if(a[n-1]==0||a[n-2]==0)
        {
        a[n]=climbStairs(n-1)+climbStairs(n-2);
        }
        else
        a[n]=a[n-1]+a[n-2];
        
        
        return a[n];
    }
};
