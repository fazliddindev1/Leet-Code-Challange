#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seenNumbers;  

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; 

            if (seenNumbers.count(complement)) {
                return {seenNumbers[complement], i};  
            }

            seenNumbers[nums[i]] = i;
        }

        return {};  
    }
};
