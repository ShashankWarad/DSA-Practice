// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.

class Solution {
  public : 
          int lengthOfLastWord(string s){
            int n = s.length();
            int i = n-1;
            while(i >= 0 && s[i] == ' '){
              i--;
            }

            int len = 0;
            while(i >= 0 && s[i] != ' '){      // while(i >= 0 && s[--i] != ' '){
              len++;                           // len++;
              i--;                             // }
            }
            return len;
          }
};
