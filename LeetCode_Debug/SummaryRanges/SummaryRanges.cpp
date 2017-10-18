//
//  SummaryRanges.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/17/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "SummaryRanges.hpp"

vector<string> Solution::summaryRanges(vector<int>& nums) {
        /* vector<string> result;
        if(nums.empty() || nums.size() == 0) return result;
        for(int i = 0; i < nums.size(); i++)
        {
            // a sorted integer array without duplicates
            int start = nums[i];
            int end = nums[i];

            while((i < nums.size() - 1) && (nums[i] + 1 == nums[i + 1]))
            {
                end = nums[i + 1];
                i++;
            }
            if(start == end)
            {
                result.push_back(to_string(start));
            }
            else
            {
                string s = to_string(start) + "->" + to_string(end);
                result.push_back(s);
            }
            if(i == nums.size() - 1 && nums[i] != end)
                result.push_back(to_string(nums[i]));
            
        }
        return result; */
    
    // use index instead of value
    vector<string> result;
    if(nums.empty() || nums.size() == 0) return result;
    for(int i = 0; i < nums.size(); )
    {
        int start = i, end = i;
        while(end + 1 < nums.size() && nums[end] + 1 == nums[end + 1])
            end++;
        if(start < end)
        {
            string s = to_string(nums[start]) + "->" + to_string(nums[end]);
            result.push_back(s);
        }
        else
        {
            result.push_back(to_string(nums[start]));
        }
        i = end + 1;
    }
    return result;
}
