#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                break;
            }
            else if (digits[i] == 9)
            {
                digits[i] = 0;
            }
        }
        if (digits[0] == 0)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;

    }
};