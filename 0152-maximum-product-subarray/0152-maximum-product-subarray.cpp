class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int p=1;
       int s=1;
       int n=nums.size();
       int m =INT_MIN;
    for (int i=0;i<nums.size();i++)
    {
        if (p==0)p=1;
        if (s==0)s=1;
    p=p*nums[i];
    s=s*nums[n-i-1];
m=max(m,max(s,p));
    } 
    return m ;
    }
};