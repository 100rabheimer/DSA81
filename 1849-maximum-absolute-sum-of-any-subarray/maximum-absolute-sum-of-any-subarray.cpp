class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending=0;
        int minending=0;
        int ans=0;
        for(int x:nums){
            maxending=max(x,maxending+x);
            minending=min(x, minending+x);
            ans=max({ans,maxending,abs(minending)});
        }
        return ans;
    }
};