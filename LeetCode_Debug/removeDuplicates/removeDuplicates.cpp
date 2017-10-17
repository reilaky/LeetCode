//
//  removeDuplicates.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/11/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "removeDuplicates.hpp"

int Solution::removeDuplicates(vector<int>& nums) {
    // sorted array
    if(nums.size() == 0) return 0;
    int count = 1;
    int j = 1;
    for(int i = 1; i < nums.size(); i++)
    {
        while(i < nums.size() && nums[i - 1] == nums[i])
            i++;
        if(i < nums.size() && nums[i - 1] != nums[i])
        {
            count++;
            nums[j] = nums[i];
            j++;
        }
    }
    return count;
}
