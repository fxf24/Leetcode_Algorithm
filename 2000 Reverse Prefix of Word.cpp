#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = word.find(ch);
        string front = word.substr(0, index+1);
        string back = word.substr(index+1, word.size());
        reverse(front.begin(), front.end());
        string w = front + back;
        return w;
    }
};
int main() {
    string word;
    char ch;
    cin>>word;
    cin>>ch;
    Solution s;
    cout << s.reversePrefix(word, ch) << '\n';
    return 0;
}