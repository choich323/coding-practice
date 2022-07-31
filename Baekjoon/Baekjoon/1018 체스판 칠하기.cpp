/*#include <iostream>
#include <string>
using namespace std;

int main() {
	int row, col;
	int count = 0;
	int min = 9999;
	string* str;

	cin >> row >> col;

	str = new string[row];
	for (int i = 0; i < row; i++) {
		cin >> str[i];
	}

	string* temp = new string[row];

	// 기준점: 좌상단
	for (int i = 0; i <= row - 8; i++) {
		for (int j = 0; j <= col - 8; j++) { // 기준 좌표 설정
			for (int k = 0; k < row; k++)	// temp string 배열에 오리지널 데이터 로드
				temp[k] = str[k];

			for (int r = i; r < i + 8; r++){
				for (int c = j; c < j + 7; c++) {
					if (r != i + 7 && temp[r][c] == temp[r + 1][c]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r + 1][c] = 'W';
						else
							temp[r + 1][c] = 'B';
					}
					if (temp[r][c] == temp[r][c + 1]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r][c + 1] = 'W';
						else
							temp[r][c + 1] = 'B';
					}
				}
			}

			// 현 기준점에서 검사를 끝낸 시점
			if (min > count) 
				min = count;
			count = 0;
		}
	}

	// 기준점: 우상단
	for (int i = 0; i <= row - 8; i++) {
		for (int j = col - 1; j - 7 >= 8; j--) { // 기준 좌표 설정
			for (int k = 0; k < row; k++)	// temp string 배열에 오리지널 데이터 로드
				temp[k] = str[k];

			for (int r = i; r < i + 8; r++) {
				for (int c = j; c > j - 7; c--) {
					if (r != i + 7 && temp[r][c] == temp[r + 1][c]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r + 1][c] = 'W';
						else
							temp[r + 1][c] = 'B';
					}
					if (temp[r][c] == temp[r][c - 1]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r][c - 1] = 'W';
						else
							temp[r][c - 1] = 'B';
					}
				}
			}

			// 현 기준점에서 검사를 끝낸 시점
			if (min > count)
				min = count;
			count = 0;
		}
	}

	// 기준점: 좌하단
	for (int i = row - 1; i - 7 >= 0; i--) {
		for (int j = 0; j <= col - 8; j++) { // 기준 좌표 설정
			for (int k = 0; k < row; k++)	// temp string 배열에 오리지널 데이터 로드
				temp[k] = str[k];

			for (int r = i; r > i - 8; r--) {
				for (int c = j; c < j + 7; c++) {
					if (r != i - 7 && temp[r][c] == temp[r - 1][c]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r - 1][c] = 'W';
						else
							temp[r - 1][c] = 'B';
					}
					if (temp[r][c] == temp[r][c + 1]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r][c + 1] = 'W';
						else
							temp[r][c + 1] = 'B';
					}
				}
			}

			// 현 기준점에서 검사를 끝낸 시점
			if (min > count)
				min = count;
			count = 0;
		}
	}

	// 기준점: 우하단
	for (int i = row - 1; i - 7>= 0; i--) {
		for (int j = col - 1; j - 7 >= 0; j--) {
			for (int k = 0; k < row; k++)	// temp string 배열에 오리지널 데이터 로드
				temp[k] = str[k];

			for (int r = i; r > i - 8; r--) {
				for (int c = j; c > j - 7; c--) {
					if (r != i - 7 && temp[r][c] == temp[r - 1][c]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r - 1][c] = 'W';
						else
							temp[r - 1][c] = 'B';
					}
					if (temp[r][c] == temp[r][c - 1]) {
						count++;
						if (temp[r][c] == 'B')
							temp[r][c - 1] = 'W';
						else
							temp[r][c - 1] = 'B';
					}
				}
			}

			if (min > count)
				min = count;
			count = 0;
		}
	}

	cout << min;

	delete[] str;
	delete[] temp;

	return 0;
}*/