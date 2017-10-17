//
//  RotateImage.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/13/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "RotateImage.hpp"

void Solution::rotate(vector<vector<int> >& matrix) {
    // clockwise: 1. reverse up to down 2.transpose
    //reverse(matrix.begin(), matrix.end());
    for (auto vi : matrix) reverse(vi.begin(), vi.end());
    for(int i = 0; i < matrix.size(); i++)
        for(int j = i + 1; j < matrix[i].size(); j++)
            swap(matrix[i][j], matrix[j][i]);
}
