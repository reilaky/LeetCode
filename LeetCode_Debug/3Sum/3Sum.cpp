//
//  3Sum.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/4/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "3Sum.hpp"

vector<vector<int> > Solution::threeSum(vector<int>& nums)
{
    // brute force: duplication && n^3
    // a + b + c = 0, triplets must contain at least one negative and one positive number or all to be 0.
    // sort, skip the duplicate(unless 0, only count 2 duplicates), from beginning and end
    vector<vector<int> > result;
    
    // corner case
    if(nums.size() < 3)
        return result;
    // sort(iterator1, iterator2);
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size() - 2 && nums[i] <= 0; i++)
    {
        // sum cannot be 0
        if(nums[i] > 0) break;
        // skip the duplicates of 1st element
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int low = i + 1, high = static_cast<int>(nums.size() - 1);
        while(low < high)
        {
            // sum is equal to 0;
            if(nums[low] + nums[high] + nums[i] == 0)
            {
                vector<int> triplet;
                triplet.push_back(nums[i]);
                triplet.push_back(nums[low]);
                triplet.push_back(nums[high]);
                result.push_back(triplet);
                // skip duplicates
                while(low < high && nums[high] == nums[high - 1])
                    high--;
                high--;
                while(low < high && nums[low] == nums[low + 1])
                    low++;
                low++;
            }
            
            else if(nums[low] + nums[high] + nums[i] > 0)
                high--;
            else
                low++;
        }
    }
    return result;
    
}
