/*#include <string>
#include <vector>

using namespace std;

int answer; // 방법의 수

void dfs(vector<int>& numbers, int& target, int depth, int num){ // depth는 현재 레벨, num은 현 레벨의 숫자 합계
    if(depth == numbers.size()){ // 최대 레벨에서
        if(num == target){ // 답이 일치하면 카운트
            answer++;
        }
    }
    else{
        dfs(numbers, target, depth + 1, num + numbers[depth]); // 현 레벨의 숫자를 더하는 경우
        dfs(numbers, target, depth + 1, num - numbers[depth]); // 현 레벨의 숫자를 빼는 경우
    }
}

int solution(vector<int> numbers, int target) {
    
    dfs(numbers, target, 0, 0);
    
    return answer;
}*/