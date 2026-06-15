class Solution {
public:
    void reverseString(vector<char>& s) {
       int n = s.size();
        vector<char> temp(n);

        // Step 1: Store characters in reverse order
        for (int i = 0; i < n; i++) {
            temp[i] = s[n - 1 - i];
        }

        // Step 2: Copy back to original array
        for (int i = 0; i < n; i++) {
            s[i] = temp[i];
        }
 
    
    }
};