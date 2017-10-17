//
//  MergeIntervals.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/13/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "MergeIntervals.hpp"

bool intervalCompare(Interval a, Interval b) { return a.start < b.start; }

vector<Interval> Solution::merge(vector<Interval>& intervals)
{
    if(intervals.size() == 1) return intervals;
    vector<Interval> result;
    sort(intervals.begin(), intervals.end(), intervalCompare);
    
    for(int i = 0; i < intervals.size(); i++)
    {
        Interval temp(intervals[i].start, intervals[i].end);
        while(i + 1 < intervals.size() && temp.end >= intervals[i + 1].start)
        {
            temp.end = max(intervals[i + 1].end, temp.end);
            i++;
        }
        result.push_back(temp);
    }
    return result;
}

