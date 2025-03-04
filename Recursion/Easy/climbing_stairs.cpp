// Method 1
// This is a recursion code

class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;

        int one = climbStairs(n-1);
        int two = climbStairs(n-2);

        return one + two;
    }
};

// Method 2

class Sol {
public: 
    int climbStairs(int n){
      if(n <= 3) return n;
      return climbStairs(n - 1) + climbStairs(n - 2);
    }
}
