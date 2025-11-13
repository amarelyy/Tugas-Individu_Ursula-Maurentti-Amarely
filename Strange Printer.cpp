#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

// Function to find the least number of times printer needs to print a word
int strangePrinter(string s) {
    int n = s.size();

    if (n == 0) { // If string is empty, no turns needed
        cout << "Please complete input!" << endl;
        return 0;
    }
    
    // Table to store how many turns needed for each word
    vector<vector<int>> dp(n, vector<int>(n, 0));  
    
    // Fill the DP table using bottom-up approach
    for (int i = n - 1; i >= 0; --i) { // Loop goes from the current i to the end of the string
        dp[i][i] = 1;  // One letter, one print
        for (int j = i + 1; j < n; ++j) {
            dp[i][j] = dp[i][j - 1] + 1;  // Start assuming we need one more print
            for (int k = i; k < j; ++k) {
                if (s[k] == s[j]) {
                    // If two letters match, print them together
                    int extra = (k + 1 <= j - 1) ? dp[k + 1][j - 1] : 0;
                    dp[i][j] = min(dp[i][j], dp[i][k] + extra); // Stores the minimum number of turns
                }
            }
        }
    }
    return dp[0][n - 1];  // Result for the entire string
}

int main() {
    cout << "How many words do you want to print? (max. 6 words): " << endl;
    
    // Get number of words
    int numWords;
    cin >> numWords;
    cin.ignore();  // Clear extra input
    
    // Check if the input meets the requirements
    if (numWords > 6 || numWords <= 0) {
        cout << "Enter valid amount!" << endl;
        return 0;
    }
    
    cout << "Enter your words here!: " << endl;
    
    vector<int> results;  // To store results for each word
    for (int i = 1; i <= numWords; ++i) {
        cout << i << ". ";  // Print the number
        string word;
        getline(cin, word); // Read the line
    
    // Split and clean words
        string clean = "";  // Start with empty clean word
        for (char c : word) {
            if (isalpha(c)) {  // Keep only letters
                clean += c;
            }
        }

        if (!clean.empty()) {  // Add only if not empty
            int turns = strangePrinter(clean);
            results.push_back(turns);
        } else {
            cout << "The word you entered has no letters." << endl;
            return 0; 
        }
    }

 // Output the results for each word
    cout << "Successfully printing! Results: " << endl;

    for (size_t i = 0; i < results.size(); ++i) {
        cout << (i + 1) << ". " << results[i] << endl;
    }
    
    return 0;
}