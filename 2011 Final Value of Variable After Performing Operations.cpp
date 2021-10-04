#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (string next : operations){
            if (next.find('+') == 1 || next.find('+') == 0){
                ans += 1;
            }
            else {
                ans -= 1;
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    Solution s;
    cout << s.finalValueAfterOperations(a) << '\n';
    return 0;
}
// --X
// X++
// X++