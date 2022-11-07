/*#include <vector>

using namespace std;

long long solution(int n) {
    vector<long long> fib(n + 1);
    fib[1] = 1; fib[2] = 2;
    for (int i = 3; i <= n; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 1234567;
    }

    return fib[n];
}*/