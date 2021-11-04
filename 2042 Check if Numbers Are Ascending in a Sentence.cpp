#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    bool isNumber(const string& str){
        return str.find_first_not_of("0123456789") == string::npos;
    }
    bool areNumbersAscending(string s) {
        istringstream ss(s);
        string stringBuffer;
        vector<int> a;
        while(getline(ss, stringBuffer, ' ')){
            if (isNumber(stringBuffer)){
                int i=0;
                istringstream ssInt(stringBuffer);
                ssInt >> i;
                a.push_back(i);
            }            
        }

        for (int i=0; i<a.size()-1; i++){
            if (a[i] >= a[i+1]){
                return false;
            }
        }
        return true;
    }
};
int main()
{
    string s;
    getline(cin, s);
    Solution ss;
    cout << ss.areNumbersAscending(s)<< '\n';
    return 0;
}