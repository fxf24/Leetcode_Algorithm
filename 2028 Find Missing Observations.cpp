#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int size = rolls.size();
        int num1 = (size+n)*mean;
        int num2 = 0;
        for (int i=0; i<size; i++){
            num2 += rolls[i];
        }
        vector<int> ans;
        double total = num1 - num2;
        if (total / n  > 6 || total / n < 1){} 
        else {
            while (total >0){
                double temp = total / n;
                int k = (int)round(temp);
                ans.push_back(k);
                total -= k;
                n -= 1;
            }
        }
        return ans;
    }
};
int main(){
    int m;
    cin >> m;
    vector<int> r(m);
    for (int i=0; i<m; i++){
        cin >> r[i];
    }

    int mean, n;
    cin >> mean >> n;

    Solution s;
    vector<int> ans = s.missingRolls(r, mean, n);
    for (int n : ans){
        cout << n << ' ';
    }
    cout << '\n';

    return 0;
}

// 4
// 3 2 4 3
// 4 2

// 3
// 1 5 6
// 3 4