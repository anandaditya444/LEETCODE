//Q. 167

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>v;
        if(n == 0 || n == 1)
            return v;
        int start = 0,end = n-1;
        while(start < end)
        {
            int sum = numbers[start]+numbers[end];
            if(sum == target)
            {
                v.push_back(start+1);
                v.push_back(end+1);
                break;
            }
            else if(sum < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return v;
    }
};