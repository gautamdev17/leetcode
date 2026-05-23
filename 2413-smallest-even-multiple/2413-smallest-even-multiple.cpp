class Solution {
public:
    int smallestEvenMultiple(int n) {
        //first submission: return (n%2)*2*n+((n+1)%2)*n;
        return n<<(n&1);// (n&1) is 1, if n is odd, then it multiplies n by 2, or returns n itself
    }
};