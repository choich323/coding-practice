/*using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int num = n;
    while (num != 1) { // 발생 가능한 최댓값
        num /= 2;
        answer++;
    }

    int big = a > b ? a : b;
    int small = big == a ? b : a;
    num = n;
    while (true) {
        num /= 2;
        if (num >= small && num < big) { //pivot기준으로 좌우로 나뉘면
            break;
        }
        else if (small > num) { // pivot보다 크면 계산의 편의를 위해 감산
            big -= num;
            small -= num;
        }
        answer--;   // 대진표가 반으로 줄었으므로 감소
    }

    return answer;
}*/