/*#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string bin(int n, int size) {
    string result;
    while (size != result.size()) {
        result.push_back(n % 2);
        n /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);

    vector<string> bin1;
    vector<string> bin2;
    for (int i = 0; i < n; i++) {
        bin1.push_back(bin(arr1[i], n));
        bin2.push_back(bin(arr2[i], n));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (bin1[i][j] == 1 || bin2[i][j] == 1) {
                answer[i].push_back('#');
            }
            else {
                answer[i].push_back(' ');
            }
        }
    }

    return answer;
}*/