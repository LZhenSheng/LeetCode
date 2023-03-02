class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int num=0;
        sort(nums.begin(),nums.end());
        int i=0;
        while(nums[i++]==0)
        {
            num++;
        }
        int last;
        if(i>0)
            last=nums[i-1];
        else
            last=nums[0];
        for(;i<nums.size();i++)
        {
            if(nums[i]==last)
                return false;
            while(i>0&&last!=0&&nums[i]!=last+1)
            {
                num--;
                last+=1;
                if(num<0)
                    return false;
            }
            last=nums[i];
        }
        if(num>=0)
            return true;
        else
            return false;
    }
};
