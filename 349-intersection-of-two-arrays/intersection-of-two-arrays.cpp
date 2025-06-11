class Solution {
public:
    bool bs(vector<int>arr , int t)
    {
        int l=0;
        int h = arr.size()-1;
        while(l<=h)
        {
            int m = l + (h-l) / 2;
            if(arr[m] == t)
            {
                return true;
            }
            else if(arr[m] < t)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return false;        
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums2.begin(),nums2.end());
        set<int>ans;
        for(int i : nums1)
        {
            if (bs(nums2,i))
            {
                ans.insert(i);
            }
        }
        return vector<int>(ans.begin(),ans.end());
    }
};