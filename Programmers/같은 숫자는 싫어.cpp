/*#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int arraySize = arr.size();
    int curNum = arr[0]; // �ʱⰪ ����
    answer.push_back(arr[0]);
    for (int i = 1; i < arraySize; i++) {
        if (curNum != arr[i]) { // ���� ���ڿ� ���ϴ� �迭�� ���ڰ� �ٸ���
            curNum = arr[i]; // �ߺ� ���� �ƴϹǷ� ���� ���� ����
            answer.push_back(arr[i]); // �ߺ� ���� �ƴϹǷ� �迭 ����
        }
    }

    return answer;
}*/