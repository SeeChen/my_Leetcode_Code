/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.
*/

class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int temp = x;
        int y = 0;
        while(temp > 0){
            y = y * 10 + temp % 10;
            temp /= 10;
        }
        return x == y;
    }
}
