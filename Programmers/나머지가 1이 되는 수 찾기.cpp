/*#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    if (n % 2 == 1) { // 홀수면 무조건 2
        answer = 2;
    }
    else {
        int mid = n / 2;
        int i;
        for (i = 3; i < mid; i++) {
            if (n % i == 1) {
                answer = i;
                break;
            }
            i++;
        }
        if (i > mid) {
            answer = n - 1;
        }
    }

    return answer;
}*/