#include <climits>

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, result = 0 ;
        
        while (i < s.size() && s[i] == ' ') 
        {
            i++ ; // Skip leading whitespaces
        }

        if (i < s.size() && (s[i] == '-' || s[i] == '+')) 
        {
            sign = (s[i++] == '-') ? -1 : 1 ; // Check for sign
        }

        while (i < s.size() && isdigit(s[i])) 
        {
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) 
            {
                return (sign == 1) ? INT_MAX : INT_MIN ; // Handle overflow
            }
        
            result = result * 10 + (s[i++] - '0') ; // Build the result
        }

        return result * sign ;
    }
};