/*#include<algorithm>
#include<vector>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int size = A.size();
    int j = size - 1;
    for (int i = 0; i < size; i++) {
        answer += A[i] * B[j];
        j--;
    }

    return answer;
}*/