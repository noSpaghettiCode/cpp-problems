#include <iostream>
#include <string>

using namespace std;

class Solution {

public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.size(); i++)
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] - 'A' + 'a';
        return str;
    }
};

int main() {

    string str;
    getline(cin, str);
    Solution sol;
    cout << sol.toLowerCase(str);
}
