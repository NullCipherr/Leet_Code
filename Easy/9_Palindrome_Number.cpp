class Solution {
public:
    bool isPalindrome(int x) 
    {
        int revertedNumber = 0 ;

        if(x < 0 || (x % 10 == 0 && x != 0 ))
        {
            return false ;
        }

        while(x > revertedNumber )
        {
            revertedNumber = revertedNumber * 10 + (x % 10) ;
            x /= 10 ;
        }

        return x == revertedNumber || x == revertedNumber/10 ;
    }
};