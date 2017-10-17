//
//  MergeSortedArray.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/13/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "MergeSortedArray.hpp"

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    auto it1 = nums1.begin();
    auto it2 = nums2.begin();
    nums1.insert(it1 + m, it2, it2 + n);
    sort(nums1.begin(), nums1.end());
}
