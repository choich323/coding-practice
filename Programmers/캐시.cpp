/*#include <string>
#include <vector>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;

    vector<string> cache(cacheSize);
    int size = cities.size();
    int cacheIndex = 0;

    if (cacheSize == 0) {
        return size * 5;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < cities[i].size(); j++) { // 대문자로 바꾸기
            if (cities[i][j] >= 97) {
                cities[i][j] -= 32;
            }
        }

        int j;
        bool miss = true;
        for (j = 0; j < cacheSize; j++) {
            if (cities[i] == cache[j]) { // cache hit
                answer++;
                miss = false;
                break;
            }
            if (j == cacheSize - 1) { // cache miss
                answer += 5;
            }
        }
        if (miss) { // cache miss면 캐시의 가장 처음 문자부터 밀어낸다
            j = 0;
        }
        if (i >= cacheSize) { // 캐시가 비어있지 않으면
            for (int k = j; k < cacheSize - 1; k++) { // hit 또는 첫 인덱스를 기준으로 밀어내기
                cache[k] = cache[k + 1];
            }
            cache[cacheSize - 1] = cities[i]; // 최근 문자를 가장 마지막에 배치
        }
        else { // 캐시가 비어있으면
            cache[i] = cities[i];
        }
    }

    return answer;
}*/