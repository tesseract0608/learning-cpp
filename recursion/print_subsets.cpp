/*
Problem: Print all subsets of a string
Approach: Recursion (pick / not pick)
Time Complexity: O(2^n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

void generateSubsets(int index, string &s, string &current) {
    if (index == s.size()) {
        cout << current << "\n";
        return;
    }

    // Not pick
    generateSubsets(index + 1, s, current);

    // Pick
    current.push_back(s[index]);
    generateSubsets(index + 1, s, current);
    current.pop_back();
}

int main() {
    string s = "abc";
    string current;
    generateSubsets(0, s, current);
    return 0;
}
