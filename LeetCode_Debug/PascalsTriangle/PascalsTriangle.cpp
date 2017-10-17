//
//  PascalsTriangle.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/16/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "PascalsTriangle.hpp"

vector<vector<int> > Solution::generate(int numRows) {
    vector<int> singleRow;
    vector<vector<int> > result;
    // numRows == 1;
    if(numRows == 0)
        return result;
    // numRows == 1;
    singleRow.push_back(1);
    result.push_back(singleRow);
    if(numRows == 1)
        return result;
    // numRows == 2;
    singleRow.push_back(1);
    result.push_back(singleRow);
    if(numRows == 2)
        return result;
    for(int i = 2; i < numRows; i++)
    {
        vector<int> row;
        row.push_back(1);
        for(int j = 0; j < result[i - 1].size() - 1; j++)
        {
            row.push_back(result[i - 1][j] + result[i - 1][j + 1]);
        }
        row.push_back(1);
        
        result.push_back(row);
    }
    
    return result;
}
