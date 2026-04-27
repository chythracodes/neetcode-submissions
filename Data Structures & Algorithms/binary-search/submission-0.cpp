class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid = nums.size()/2;
        int l=0;
        int r=nums.size();
        while(l<r)
        {
            int m = (l+r-1)/2;
            if(target == nums[m])
            return m;
            
            if(target > nums[m])
            {
                l = m+1;
            }
            
            else
            r = m;
        

        }
        return -1;
        
    }
};
