#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int size = grid[0].size();
        long long ans = -1;
        vector<vector<long long>> a(2, vector<long long>(size));
         
        for (int i=size-2; i>=0; i--){
            a[0][i] = a[0][i+1] + grid[0][i+1];
        }

        for (int i=1; i<size; i++){
            a[1][i] = a[1][i-1] + grid[1][i-1];
        }

        for (int index = 0; index<size; index++){
            long long m = max(a[0][index], a[1][index]);
            if (ans==-1 || ans> m){
                ans = m;
            }
        }

        return ans;
    }
};
int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n));
    for (int i=0; i<2; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    Solution s;
    cout << s.gridGame(a) << '\n';
    return 0;
}

// 3
// 2 5 4
// 1 5 1

// 3
// 3 3 1
// 8 5 2

// 4
// 1 3 1 15
// 1 3 3 1