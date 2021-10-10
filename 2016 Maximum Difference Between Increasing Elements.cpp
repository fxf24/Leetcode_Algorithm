#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int size = nums.size();
        int ans = -1;
        for (int i=0; i<size-1; i++){
            for (int j=i+1; j<size; j++){
                if (nums[i] < nums[j]){
                    int temp = nums[j]- nums[i];
                    if (temp > ans){
                        ans = temp;
                    }
                }
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
    cout << s.maximumDifference(a) << '\n';
    return 0;
}