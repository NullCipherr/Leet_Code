#include <climits>

class Solution {
public:
    int reverse(int x) {
        long long reverseNumber = 0 ;

        while( x != 0)
        {
            reverseNumber = reverseNumber * 10 + x % 10 ;
            x /= 10 ; 
        }

        return (reverseNumber < INT_MIN || reverseNumber > INT_MAX) ? 0 : reverseNumber ;
    }
};