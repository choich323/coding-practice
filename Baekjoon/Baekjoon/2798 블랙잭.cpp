/*#include <iostream>
using namespace std;

int main() {
	int cardN;
	int maxM;
	int result = 0;
	int ary[100];
	
	cin >> cardN >> maxM;
	
	// 카드 숫자 입력
	for (int i = 0; i < cardN; i++) {
		cin >> ary[i];
	}

	for (int a = 0; a < cardN; a++) {
		for (int b = a+1; b < cardN; b++) {
			for (int c = b+1; c < cardN; c++) {
				int sum = ary[a] + ary[b] + ary[c]; // 현재 조합의 합
				if (sum > result && sum <= maxM) // 현재 최댓값보다 더 크면서 M이하면
					result = sum; // 결과값 수정
			}
		}
	}

	cout << result;

	return 0;
}*/