/*#include <string>
#include <vector>

using namespace std;

int answer; // ����� ��

void dfs(vector<int>& numbers, int& target, int depth, int num){ // depth�� ���� ����, num�� �� ������ ���� �հ�
    if(depth == numbers.size()){ // �ִ� ��������
        if(num == target){ // ���� ��ġ�ϸ� ī��Ʈ
            answer++;
        }
    }
    else{
        dfs(numbers, target, depth + 1, num + numbers[depth]); // �� ������ ���ڸ� ���ϴ� ���
        dfs(numbers, target, depth + 1, num - numbers[depth]); // �� ������ ���ڸ� ���� ���
    }
}

int solution(vector<int> numbers, int target) {
    
    dfs(numbers, target, 0, 0);
    
    return answer;
}*/