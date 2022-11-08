/*#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int size1 = arr1.size();
    int size2 = arr2.size();
    int size3 = arr2[0].size();
    vector<vector<int>> answer(size1, vector<int>(size3));

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size3; j++) {
            int sum = 0;
            for (int k = 0; k < size2; k++) {
                sum += arr1[i][k] * arr2[k][j];
            }
            answer[i][j] = sum;
        }
    }

    return answer;
}*/