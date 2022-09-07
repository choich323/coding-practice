/*#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2);

    int hit = 0; int zero = 0;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    for (int i = 0; i < 6; i++) {
        if (lottos[i] != 0) {
            for (int j = hit; j < 6; j++) {
                if (lottos[i] == win_nums[j]) {
                    hit++;
                    break;
                }
            }
        }
        else {
            zero++;
        }
    }

    int best = 1;
    int worst = 6;

    if (hit > 1) {
        worst -= hit - 1;
    }
    if (hit + zero > 0) {
        best += 6 - hit - zero;
    }
    else {
        best = 6;
    }
    answer[0] = best;
    answer[1] = worst;
    return answer;
}*/