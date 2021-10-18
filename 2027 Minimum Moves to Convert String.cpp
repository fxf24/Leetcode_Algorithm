#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        int size = s.length();
        for (int i=0; i<size-2; i++){
            if (s[i] == 'X'){
                s[i] = 'O';
                s[i+1] = 'O';
                s[i+2] = 'O';
                ans += 1;
            }
        }
        if (s[size-2] == 'X'){
            s[size-2] = 'O';
            s[size-1] = 'O';
            ans += 1;
        }
        else if (s[size-1] == 'X'){
            s[size-1] = 'O'
            ans += 1;
        }

        return ans;
    }
};
int main(){
    string s;
    cin >> s;
    Solution ss;
    cout << ss.minimumMoves(s) << '\n';

    return 0;
}