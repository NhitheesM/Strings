#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    int n = input.length();
    int word_count = 1;
    
    for (int i = 0; i < n; i++) {
        if (input[i] == ' ') {
            word_count += 1;
        }
    }
    
    string words[word_count];
    int word_index = 0;
    
    for (int i = 0; i < n; i++) {
        if (input[i] == ' ') {
            word_index += 1;
        } else {
            words[word_index] += input[i];
        }
    }
    
    string output;
    
    for (int i = word_count - 1; i >= 0; i--) {
        output += words[i] + ' ';
    }
    
    return output;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
    return 0;
}
