/*#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool second(vector<string> v1, vector<string> v2) {
    return v1[1] < v2[1];
}

int solution(vector<vector<string>> clothes) {
    int answer = 0;

    vector<int> v; // �ߺ��� ���ŵ� ����
    sort(clothes.begin(), clothes.end(), second); // ����

    int size = clothes.size();
    if (size == 1) {
        return 1;
    }
    int count = 0;
    for (int i = 0; i < size; i++) {
        count++;
        if (i == size - 1) { // ������ �������̸� ����
            v.push_back(count);
        }
        else if (clothes[i][1] != clothes[i + 1][1]) { // �ٸ� ������ ���̸�
            v.push_back(count); // �������� ���� ī��Ʈ�� ����
            count = 0; // ī��Ʈ �ʱ�ȭ
        }
    }

    int mul = 1;
    for (int i = 0; i < v.size(); i++) {  // x^3 + (a + b + c)x^2 + (ab + bc + ca)x + (abc)  �̷� ���� ������ �̿��Ѵ� (�� �� x^3�� ����� �����ϱ� ���� �Ʒ����� 1�� ���ִ� ��)
        mul *= 1 + v[i];
    }

    answer = mul - 1;

    return answer;
}*/