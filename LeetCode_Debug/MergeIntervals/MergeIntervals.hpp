//
//  MergeIntervals.hpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/13/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#ifndef MergeIntervals_hpp
#define MergeIntervals_hpp

#include <stdio.h>
#include "vector"

#endif 

using namespace std;
/* MergeIntervals_hpp */
/**
 * Definition for an interval.
 */

struct Interval
{
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals);
};
