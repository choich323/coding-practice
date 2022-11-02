/*using namespace std;

int big(int num) {
    int one = 0;
    while (num != 0) {
        if (num % 2 == 1) {
            one++;
        }
        num /= 2;
    }
    return one;
}

int solution(int n) {
    int answer = n + 1;
    int one = big(n);

    while (true) {
        if (one == big(answer)) {
            break;
        }
        answer++;
    }

    return answer;
}*/