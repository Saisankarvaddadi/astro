class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1,r,c;
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            pro=pro*r;
            n=n/10;
        }
        c=pro-sum;
        return c;
    }
};
