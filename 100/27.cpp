class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,r=nums.size()-1;
        int num=0;
        while(l<=r)
        {
            while(l<nums.size()&&nums[l]!=val)
            {
                num++;
                l++;
            }
            while(r>=0&&nums[r]==val)
            {
                r--;
            }
            if(l<r)
            {
                int temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
            }
        }
        return num;
    }
};
