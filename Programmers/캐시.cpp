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
        for (int j = 0; j < cities[i].size(); j++) { // �빮�ڷ� �ٲٱ�
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
        if (miss) { // cache miss�� ĳ���� ���� ó�� ���ں��� �о��
            j = 0;
        }
        if (i >= cacheSize) { // ĳ�ð� ������� ������
            for (int k = j; k < cacheSize - 1; k++) { // hit �Ǵ� ù �ε����� �������� �о��
                cache[k] = cache[k + 1];
            }
            cache[cacheSize - 1] = cities[i]; // �ֱ� ���ڸ� ���� �������� ��ġ
        }
        else { // ĳ�ð� ���������
            cache[i] = cities[i];
        }
    }

    return answer;
}*/