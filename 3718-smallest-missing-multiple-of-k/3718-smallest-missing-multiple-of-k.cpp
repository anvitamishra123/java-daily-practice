class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int >st;
    int n=nums.size();
    for (int i=0;i<n;i++)
    {
        st.insert(nums[i]);
    }
    int i=1;
    while (st.find (k*i)!=st.end())
    {
        i++;
    }
    return k*i;
    }
};