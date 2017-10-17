//
//  FindMin.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/5/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "FindMin.hpp"


int Solution::findMin(vector<int>& nums) {
    // sort complexity: O(Nlog2N)

    // corner case;
    /* if(nums.size() == 1) return nums[0];
    
    for(int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i] > nums[i + 1])
            return nums[i + 1];
    }
    return nums[0];
    */
    
    int low = 0;
    int high = static_cast<int>(nums.size() - 1);
    int mid = 0;
    while(low < high)
    {
        if(nums[low] < nums[high])
            return nums[low];
        else
        {
            mid = (low + high) / 2;
            if(nums[mid] >= nums[low])
                low = mid + 1;
            else
                high = mid;
        }
    }
    return nums[mid];
}
