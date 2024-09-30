#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string mainstr, string output, int index, vector<string> &ans, int num) {
    if (index >= num) {
        ans.push_back(output);
        return;
    }

    char st = mainstr[0]; // '0'
    solve(mainstr, output + st, index + 1, ans, num);

    if (output.empty() || output.back() != '1') {
        st = mainstr[1]; // '1'
        solve(mainstr, output + st, index + 1, ans, num);
    }
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    string mainStr = "01";
    string tempStr = "";

    vector<string> ans;

    solve(mainStr, tempStr, 0, ans, num);

    cout << "Printing answer: " << endl;
    for (const auto& str : ans) {
        cout << str << endl;
    }

    return 0;
}