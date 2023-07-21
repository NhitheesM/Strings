#include <bits/stdc++.h> 
string nextLargestPalindrome(string s, int length) {
    int n = length;
    string left = "";
    string right = "";
    string mid = "";
    string rev_left = "";
    string result = "";

    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                left += s[i];
            } else if (i == n / 2) {
                mid = s[i];
            } else {
                right += s[i];
            }
        }

        for (int i = n / 2 - 1; i >= 0; i--) {
            rev_left += s[i];
        }

        if (!rev_left.empty() && !right.empty() && stoi(rev_left) > stoi(right)) {
            result = left + mid + rev_left;
        } else if (mid == "9") {
            left = to_string(stoi(left) + 1);
            mid = "0";
            right = "";
            for (int i = n / 2 - 1; i >= 0; i--) {
                right += left[i];
            }
            result = left + mid + right;
        } else {
            result = left + to_string(stoi(mid) + 1) + rev_left;
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                left += s[i];
            } else {
                right += s[i];
            }
        }

        for (int i = n / 2 - 1; i >= 0; i--) {
            rev_left += s[i];
        }

        if (!rev_left.empty() && !right.empty() && stoi(rev_left) > stoi(right)) {
            result = left + rev_left;
        } else {
            left = to_string(stoi(left) + 1);
            right = "";
            for (int i = n / 2 - 1; i >= 0; i--) {
                right += left[i];
            }
            result = left + right;
        }
    }

    return result;
}