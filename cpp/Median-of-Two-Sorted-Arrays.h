//
//  Median-of-Two-Sorted-Arrays.h
//  LeetCode
//
//  Created by TosSense on 14-10-15.
//  Copyright (c) 2014年 TosSense. All rights reserved.
//
// https://oj.leetcode.com/problems/median-of-two-sorted-arrays/

#ifndef LeetCode_Median_of_Two_Sorted_Arrays_h
#define LeetCode_Median_of_Two_Sorted_Arrays_h

#include <vector>

using std::vector;

class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        const int totalCnt = m + n;
        int a = 0, b = 0;
        vector<int> vec;
        vec.reserve(totalCnt);
        while( vec.size() < totalCnt / 2 + 1 )
        {
            if( a < m && b < n )
            {
                if( A[a] < B[b] )
                {
                    vec.push_back(A[a++]);
                }
                else
                {
                    vec.push_back(B[b++]);
                }
            }
            else if( a >= m )
            {
                vec.push_back(B[b++]);
            }
            else
            {
                vec.push_back(A[a++]);
            }
        }
        
        if( totalCnt % 2 == 1 )
            return vec.back() * 1.0;
        else
            return (vec[vec.size()-1] + vec[vec.size()-2]) / 2.0;
    }
};

#endif
