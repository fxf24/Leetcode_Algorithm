#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isNumber(const string& str){
        return str.find_first_not_of("0123456789") == string::npos;
    }
    int countValidWords(string sentence) {
        int ans = 0;
        stringstream ss(sentence);
        string word;
        vector<string> a;
        while(getline(ss, word, ' ')){
            word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
            a.push_back(word);
        }
        
        for (int i = 0; i < a.size(); i++){
            cout << a[i] << '\t';
        } 
        
        return ans;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution ss;
    cout << ss.countValidWords(s) << '\n';
    return 0;
}