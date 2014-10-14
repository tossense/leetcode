//
//  two-sum.h
//  LeetCode
//
//  Created by TosSense on 14-10-14.
//  Copyright (c) 2014年 TosSense. All rights reserved.
//
// https://oj.leetcode.com/problems/two-sum/

#ifndef LeetCode_two_sum_h
#define LeetCode_two_sum_h
#include <vector>
#include <map>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        std::map<int, int> wantedNums; // num -> previous num pos
        for(int i=0; i<numbers.size(); ++i)
        {
            auto it = wantedNums.find(numbers[i]);
            if( it != wantedNums.end() )
            {
                res.push_back(it->second+1);
                res.push_back(i+1);
                break;
            }
            else
            {
                int wanntedNum = target - numbers[i];
                wantedNums[wanntedNum] = i;
            }
        }
        return res;
    }
};

#endif
