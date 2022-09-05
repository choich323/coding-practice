/*#include <string>
#include <vector>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    long long sum1 = 0; // 큐1의 현재 총합
    long long sum2 = 0; // 큐2의 현재 총합
    int size = queue1.size(); // 큐의 사이즈

    for (int i = 0; i < size; i++) {
        sum1 += queue1[i];
        sum2 += queue2[i];
    }
    // 총합 설정 완료

    if ((sum1 + sum2) % 2 == 1) { // 총합이 짝수가 아니면 연산 불가능
        return -1;
    }

    int q1_front = 0; // 큐1 인덱스
    int q2_front = 0; // 큐2 인덱스

    while (sum1 != sum2) { // 두 큐의 합이 같지 않을때

        if (q1_front > size && q2_front > size) { // 두 개의 큐의 원소를 바꾼 상황이 될 때
            return -1;
        }

        if (sum1 < sum2) { // 큐2의 총합이 더 크면 큐1로 보내기
            if (q2_front == queue2.size() - 1) { // 아이템을 보냈는데 큐가 비어버리면
                return -1;
            }
            int tmp = queue2[q2_front];     // 큐의 가장 앞 아이템 저장
            sum1 += tmp;                    // 합 갱신
            sum2 -= tmp;
            q2_front++;                     // 큐2 인덱스 증가(아이템 제거)
            queue1.push_back(tmp);          // 아이템 추가
        }
        else if (sum1 > sum2) { // 큐1의 총합이 더 크면 큐2로 보내기
            if (q1_front == queue1.size() - 1) { // 아이템을 보냈는데 큐가 비어버리면
                return -1;
            }
            int tmp = queue1[q1_front];     // 큐의 가장 앞 아이템 저장
            sum2 += tmp;                    // 합 갱신
            sum1 -= tmp;
            q1_front++;                     // 큐1 인덱스 증가(아이템 제거)
            queue2.push_back(tmp);          // 아이템 추가

        }
        answer++; // 연산 + 1
    }

    return answer;
}*/