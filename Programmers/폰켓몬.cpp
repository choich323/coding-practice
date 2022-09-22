/*#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;

    sort(nums.begin(), nums.end());

    int size = nums.size();
    vector<int> mon(1);
    int idx = 0; mon[0] = nums[0];
    for (int i = 1; i < size; i++) {
        if (mon.size() == size / 2) {
            break;
        }
        if (nums[i] != mon[idx]) {
            mon.push_back(nums[i]);
            idx++;
        }
    }

    answer = mon.size();

    return answer;
}*/