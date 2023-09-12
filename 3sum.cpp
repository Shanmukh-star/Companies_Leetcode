#define pub push_back
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> req;
        vector<vector<int>> reqv;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           int j=i+1;
           int k=n-1;
           while(k>j)
           {
               vector<int> v;
               if(nums[k]+nums[j]==-nums[i])
               {
                   v.pub(nums[i]);
                   v.pub(nums[j]);
                   v.pub(nums[k]);
                   req.insert(v);
                   j++;
                   k--;
               }
               else if(nums[k]+nums[j]+nums[i]>0)
               {
                   k--;
               }
               else
               {
                   j++;
               }
           }
        }
        for(auto i : req)
        {
            reqv.pub(i);
        }
        return reqv;
    }
};
