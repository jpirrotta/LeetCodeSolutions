//
// Created by jesse on 2025-03-19.
//

#include "TwoSum.h"
#include <unordered_map>

std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> hashTbl;
    const int size = nums.size();
    for (int i = 0; i < size; i++) {
        hashTbl[nums[i]] = i;
    }

    for (int i = 0; i < size; i++) {
        if (hashTbl.contains(target - nums[i]) && hashTbl[target - nums[i]] != i) {
            return {i, hashTbl[target - nums[i]]};
        }
    }
    return {};
}
