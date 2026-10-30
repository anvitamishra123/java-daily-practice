class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    vector <int>sum(nums.size());
    int n=nums.size();
    if (n==1)
    return 0;
   
   if (n>=2)
   { int s=0;
    for (int i=0;i<n;i++)
    {
    s=s+nums[i];
    sum[i]=s;
    }
    for (int i=0;i<n;i++)
    {
        int lsum=sum[i]-nums[i];
        int rsum =sum[n-1]-sum[i];
        if (lsum==rsum)
        {
return i ;
break ;
        }
        
    }
   }
   return -1 ;
    }
};