//
//  SpiralMatrix.cpp
//  LeetCode_Debug
//
//  Created by Yan Kong on 10/17/17.
//  Copyright © 2017 Yan Kong. All rights reserved.
//

#include "SpiralMatrix.hpp"


vector<int> Solution::spiralOrder(vector<vector<int> >& matrix) {
    vector<int> result;
    if(matrix.empty()) return result;
    int row = matrix.size();
    int col = matrix[0].size();
    if(row == 0 || col == 0)
        return result;
    result.resize(row * col);
    vector<vector<bool> > checked(row, vector<bool>(col, false));
    int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1 , 0}};
    int r = 0, c = 0, di = 0;
    // right to the end, then down to the end, left to the end, up to the end
    for(int i = 0; i < row * col; i++)
    {
        result[i] = matrix[r][c];
        checked[r][c] = true;
        int tempR = r + dir[di][0];
        int tempC = c + dir[di][1];
        if(tempR >= 0 && tempR < row && tempC >= 0 && tempC < col && !checked[tempR][tempC])
        {
            r = tempR;
            c = tempC;
        }
        else
        {
            di = (di + 1) % 4;
            r += dir[di][0];
            c += dir[di][1];
        }
    }
    return result;
}
