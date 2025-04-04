#include <iostream>
#include <string>
using namespace std;
// Function to perform Brute Force String Matching
void bruteForceStringMatch(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();
    int count = 0;
    for (int i = 0; i <= n - m; ++i) {
        int j;
        for (j = 0; j < m; ++j) {
                if (text[i + j] != pattern[j])
                break;
        }         if (j == m) {
             count++;
        cout << "Pattern found at index " << i << endl;
        }
    }     if (count == 0) {
        cout << "Pattern not found in the text." << endl;
    } else {
        cout << "Pattern found " << count << " time(s) in the text." << endl;
    }
}

int main() {
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern to search for: ";
    getline(cin, pattern);
    bruteForceStringMatch(text, pattern);
    return 0;
}



