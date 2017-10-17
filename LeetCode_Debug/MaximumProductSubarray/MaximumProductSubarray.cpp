//
//  MaximumProductSubarray.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/13/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "MaximumProductSubarray.hpp"

int Solution::maxProduct(vector<int>& nums)
{
    // sub problem: dp[i] = max(dp[i - 1] * nums[i], nums[i]);
    vector<int> dp(nums.size() + 1, 0);
    dp[0] = 1;
    int result = INT_MIN;
    if(nums.size() == 1) return nums[0];
    for(int i = 0; i < nums.size(); i++)
    {
        dp[i + 1] = dp[i] * nums[i] != 0 ? dp[i] * nums[i] : 1;
        result = max(dp[i + 1], result);
    }
    return result;
}
