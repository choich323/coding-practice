/*#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	
	while (t--) {

		string command;
		int size;
		char tmp;
		cin >> command >> size;
		deque<int> num(size);

		cin >> tmp; // '['
		if (size > 0) {
			cin >> num[0];
			for (int i = 1; i < size; i++) {
				cin >> tmp >> num[i];
			}
		}
		cin >> tmp; // ']'

		bool reverse = false;
		bool error = false;
		int comSize = command.size(); // size함수 호출 역시 시간을 소비하므로 for문의 조건문에 넣기보단 별도의 변수로 할당하여 시간적 이득을 얻기
		for (int j = 0; j < comSize; j++) {
			if (command[j] == 'R') {
				if (reverse) {
					reverse = false;
				}
				else {
					reverse = true;
				}
			}
			else if (command[j] == 'D') {
				if (num.empty()) { // 비어있으면 에러
					error = true;
					break;
				}
				if (reverse) { // 역방향 제거
					num.pop_back();
				}
				else { // 정방향 제거
					num.pop_front(); // vector의 erase를 쓰면 시간초과. erase가 O(n)의 시간복잡도이기 때문. 처음 아이템을 제거하고 나머지 아이템을 앞으로 당기기 때문에 O(n)이다.
					                 // 반면 deque는 더블 링크드 리스트 구조이기 때문에 데이터 추가/제거에 O(1)만으로 충분하다.
				}
				size--;
			}
		}
		if(error){
			cout << "error" << '\n';
		}
		else {
			cout << '[';
			if (!num.empty()) {
				if (!reverse) { // 정방향 출력
					cout << num[0];
					for (int k = 1; k < size; k++) {
						cout << ',' << num[k];
					}
				}
				else { // 역방향 출력
					cout << num[size - 1];
					for (int k = size - 2; k >= 0; k--) {
						cout << ',' << num[k];
					}
				}
			}
			cout << ']' << '\n';
		}
	}

	return 0;
}*/