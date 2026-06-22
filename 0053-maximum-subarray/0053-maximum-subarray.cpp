class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currSum=0;
        int maxSum=INT_MIN;

        for(int start = 0 ; start<nums.size() ; start++){

            currSum += nums[start];
            maxSum = max(currSum,maxSum);

            if (currSum <0){
                currSum=0;
            }
        }

        return maxSum;
        
    }
};