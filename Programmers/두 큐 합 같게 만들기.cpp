/*#include <string>
#include <vector>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    long long sum1 = 0; // ť1�� ���� ����
    long long sum2 = 0; // ť2�� ���� ����
    int size = queue1.size(); // ť�� ������

    for (int i = 0; i < size; i++) {
        sum1 += queue1[i];
        sum2 += queue2[i];
    }
    // ���� ���� �Ϸ�

    if ((sum1 + sum2) % 2 == 1) { // ������ ¦���� �ƴϸ� ���� �Ұ���
        return -1;
    }

    int q1_front = 0; // ť1 �ε���
    int q2_front = 0; // ť2 �ε���

    while (sum1 != sum2) { // �� ť�� ���� ���� ������

        if (q1_front > size && q2_front > size) { // �� ���� ť�� ���Ҹ� �ٲ� ��Ȳ�� �� ��
            return -1;
        }

        if (sum1 < sum2) { // ť2�� ������ �� ũ�� ť1�� ������
            if (q2_front == queue2.size() - 1) { // �������� ���´µ� ť�� ��������
                return -1;
            }
            int tmp = queue2[q2_front];     // ť�� ���� �� ������ ����
            sum1 += tmp;                    // �� ����
            sum2 -= tmp;
            q2_front++;                     // ť2 �ε��� ����(������ ����)
            queue1.push_back(tmp);          // ������ �߰�
        }
        else if (sum1 > sum2) { // ť1�� ������ �� ũ�� ť2�� ������
            if (q1_front == queue1.size() - 1) { // �������� ���´µ� ť�� ��������
                return -1;
            }
            int tmp = queue1[q1_front];     // ť�� ���� �� ������ ����
            sum2 += tmp;                    // �� ����
            sum1 -= tmp;
            q1_front++;                     // ť1 �ε��� ����(������ ����)
            queue2.push_back(tmp);          // ������ �߰�

        }
        answer++; // ���� + 1
    }

    return answer;
}*/