#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool placeWordInCrossword(vector<vector<char>>& board, string word) {
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                cout << board[i][j];
            }
            cout << '\n';
        }
        cout << word << '\n';
        
        return false;
    }
};
int main(){
    int m, n;
    cin >> m >> n;

    cin.ignore();
    vector<vector<char>> a(m, vector<char>(n));
    for (int i=0; i<m; i++){
        string temp;
        getline(cin, temp);
        for (int j=0; j<n; j++){
            a[i][j] = temp[j];
        }
        cin.clear();
    }

    string word;
    cin >> word;

    Solution s;
    cout << s.placeWordInCrossword(a, word) << '\n';

    return 0;
}
// 3 3
// # #
//   #
// #c 
// abc