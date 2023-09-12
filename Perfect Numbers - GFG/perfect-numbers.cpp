//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int isPerfectNumber(long long N) {
        if (N <= 1) {
            return 0; // 1 is not considered a perfect number
        }

        long long sumOfFactors = 1; // Initialize with 1 as 1 is always a factor

        // Iterate from 2 to the square root of N
        for (long long i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                // If i is a factor of N, add i and N/i to the sumOfFactors
                sumOfFactors += i;
                if (i != N / i) {
                    sumOfFactors += N / i;
                }
            }
        }

        // Check if the sum of factors (excluding N itself) is equal to N
        if (sumOfFactors == N) {
            return 1; // N is a perfect number
        } else {
            return 0; // N is not a perfect number
        }
    }
};






//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends