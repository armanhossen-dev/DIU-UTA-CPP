// F. The Young Great Wizard of UTA
//i used Ai to understand this problem and solve it
//i have to learn dp sorry to my self :<

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;  // Input the two magical words

    int n = s.length();
    int m = t.length();

    // Create a 2D DP table of size (n+1) x (m+1) //strings so add + 1, // because we are comparing two strings.
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    // Base case: transforming s[0...i] to empty string (t is empty)
    for (int i = 0; i <= n; ++i) 
        dp[i][0] = i; // Requires i deletions

    // Base case: transforming empty string (s is empty) to t[0...j]
    for (int j = 0; j <= m; ++j) 
        dp[0][j] = j; // Requires j insertions

    // Fill the DP table using bottom-up approach
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s[i - 1] == t[j - 1]) {
                // If characters match, no cost needed
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                // Minimum cost of insert, delete, or replace
                dp[i][j] = 1 + min({
                    dp[i - 1][j],     // Delete from s
                    dp[i][j - 1],     // Insert into s
                    dp[i - 1][j - 1]  // Replace character
                });
            }
        }
    }

    // Final answer: min cost to convert full s to full t
    cout << dp[n][m] << endl;
    return 0;
}




//Levenshtein Distance.
    //Edit Distance
    /*
    Allowed operations:
    Insert a character
    Delete a character
    Replace a character


    
    if (str1 == str2) {   //compares character by character, using their ASCII values.
        cout << "Strings are equal" << endl; 
    } else if (str1 < str2) {
        cout << "str1 is lexicographically smaller" << endl;
    } else {
        cout << "str1 is greater" << endl;
    }
    
    */