#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        vector<int> a(3);
        for (int s : stones){
            a[s%3]++;
        }
        bool ans = (a[0]%2 > 0);
        if (!a[1]){
            if (a[2] > 2 && ans) return true;
            else return false;
        }

        if (!a[2]){
            if (a[1] > 2 && ans) return true;
            else return false;
        }

        if (abs(a[1] - a[2]) > 2 && ans) return true;

        return !ans;
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    Solution s;
    cout << s.stoneGameIX(a) << '\n';
    return 0;
}

// 2
// 2 1