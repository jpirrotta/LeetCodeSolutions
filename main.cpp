#include <iostream>
        #include <vector>
        #include "TwoSum.h"

        void displayHeader(const std::string& date, const std::string& problemName) {
            std::cout << "=============================" << std::endl;
            std::cout << "LeetCode Problem: " << problemName << std::endl;
            std::cout << "Date: " << date << std::endl;
            std::cout << "=============================" << std::endl;
        }

        int main() {
            // Two Sum - Start
            displayHeader("2025-03-19", "Two Sum");

            // Two Sum testing code
            std::vector<int> nums = {2, 7, 11, 15};
            const std::vector<int> result = TwoSum::twoSum(nums, 9);

            // Display result
            std::cout << "The indices are: " << result[0] << " and " << result[1] << std::endl;

            // Two Sum - End
            return 0;
        }