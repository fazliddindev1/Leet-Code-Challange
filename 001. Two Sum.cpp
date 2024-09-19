#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seenNumbers;  

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; 

            // Check if we've already seen the complement
            if (seenNumbers.count(complement)) {
                return {seenNumbers[complement], i};  
            }

            // Store the current number and its index in the map
            seenNumbers[nums[i]] = i;
        }

        return {};  // Shouldn't reach here as per the problem's guarantee
    }
};
