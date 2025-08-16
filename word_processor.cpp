#include <bits/stdc++.h>
using namespace std;
//bronze_track - Word Processor
int main() {
    int n, k; // n is number of words
    cout << "enter the n and k :";
    cin >> n >> k; // k is the limit of chars per line

    int current_len = 0;  // current line length
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
        int word_len = word.size();

        if (current_len == 0) {
            // first word of the line
            cout << word;
            current_len = word_len;
        } else if (current_len + 1 + word_len <= k) {
            // word fits in current line
            cout << " " << word;
            current_len += 1 + word_len;
        } else {
            // word doesn't fit, start new line
            cout << "\n" << word;
            current_len = word_len;
        }
    }
    cout << "\n";
    return 0;
}

