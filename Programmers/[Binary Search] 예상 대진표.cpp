/*using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int num = n;
    while (num != 1) { // �߻� ������ �ִ�
        num /= 2;
        answer++;
    }

    int big = a > b ? a : b;
    int small = big == a ? b : a;
    num = n;
    while (true) {
        num /= 2;
        if (num >= small && num < big) { //pivot�������� �¿�� ������
            break;
        }
        else if (small > num) { // pivot���� ũ�� ����� ���Ǹ� ���� ����
            big -= num;
            small -= num;
        }
        answer--;   // ����ǥ�� ������ �پ����Ƿ� ����
    }

    return answer;
}*/