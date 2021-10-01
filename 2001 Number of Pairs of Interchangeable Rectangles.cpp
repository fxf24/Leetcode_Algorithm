#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[10001];
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long total = 0;
        int size = rectangles.size();

        vector<double> a(size);
        for (int i=0; i<size; i++){
           a[i] =  (double)rectangles[i][0]/rectangles[i][1];
        }

        sort(a.begin(), a.end());

        long long count=0;
        for (int i=0; i<size-1; i++){
            if (a[i] == a[i+1]){
                count+=1;
            }
            else {
                total += (count*(count+1))/2;
                count = 0;
            }
        }

        if (count != 0 && total == 0){
            total += (count*(count+1))/2;
        }
        
        return total;
    }
};

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for (int i=0; i<n; i++){
        int w, h;
        cin >> w >> h;
        a[i][0] = w;
        a[i][1] = h;
    }
    Solution s;
    cout << s.interchangeableRectangles(a) << '\n';
    return 0;
}
// 4
// 4 8
// 3 6
// 10 20
// 15 30