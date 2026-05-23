class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n%2)*2*n+((n+1)%2)*n;
    }
};