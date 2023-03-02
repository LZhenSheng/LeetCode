class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                int k=i;
                for(int j=0;j<needle.length();j++)
                {
                    if(haystack[k]==needle[j])
                        k++;
                    else
                        break;
                    if(j==needle.length()-1)
                        return i;
                }
            }
        }
        return -1;
    }
};
