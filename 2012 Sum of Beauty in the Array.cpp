#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        vector<int> maxL(size);
        vector<int> minR(size);

        maxL[0] = nums[0];
        for (int i=1; i<size; i++){
            maxL[i] = max(nums[i], maxL[i-1]);
        }

        minR[size-1] = nums.back();
        for (int i=size-2; i>=0; i--){
            minR[i] = min(nums[i], minR[i+1]);
        }

        for (int i=1; i<size-1; i++){
            if (maxL[i-1] < nums[i] && nums[i] < minR[i+1]){
                ans += 2;
            }
            else if (nums[i-1] < nums[i] && nums[i] < nums[i+1]){
                ans += 1;
            }
        }

        return ans;
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
    cout << s.sumOfBeauties(a) << '\n';
    return 0;
}
// 1
// 2
// 3

// 2
// 4
// 6
// 4

// 6
// 8
// 3
// 7
// 8
// 9
// 4
// 8