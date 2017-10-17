//
//  ProductOfArrayExceptSelf.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/5/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "ProductOfArrayExceptSelf.hpp"


vector<int> Solution::productExceptSelf(vector<int>& nums) {
    vector<int> result;
    // in nums, there might be 0
    for(int i = 0; i < nums.size(); i++)
    {
        int temp = 1;
        for(int j = 0; j < nums.size() && i != j; j++)
        {
            temp *= nums[j];
        }
        result.push_back(temp);
    }
    return result;
}
