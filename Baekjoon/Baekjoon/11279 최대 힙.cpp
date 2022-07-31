/*#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> heap(100000);

void heapDown(int last) {

	//print
	cout << heap[0] << '\n'; // 0번째가 max value이므로
	heap[0] = heap[last];	 // 출력한 아이템 제거
	heap[last] = 0;			 // 제일 마지막 아이템 제거
	last--;

	int tmp, left, right;
	int curNode = 0;

	left = curNode * 2 + 1;
	right = curNode * 2 + 2;
	int more = heap[left] >= heap[right] ? left : right;

	while (more <= last && heap[more] > heap[curNode]) {
		//swap
		tmp = heap[curNode];
		heap[curNode] = heap[more];
		heap[more] = tmp;
		
		curNode = more;

		left = curNode * 2 + 1;
		right = curNode * 2 + 2;
		more = heap[left] >= heap[right] ? left : right;
	}
}

void reHeap(int last) {
	int tmp;
	int curNode = last;
	int parent = (curNode - 1) / 2;
	while (curNode != 0) {
		if (heap[parent] < heap[curNode]) {
			//swap
			tmp = heap[parent];
			heap[parent] = heap[curNode];
			heap[curNode] = tmp;
		}
		curNode = parent;
		parent = (curNode - 1) / 2;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, last = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x == 0) { // 0이면 최댓값을 출력하고 빼기
			if (last == 0) {
				cout << 0 << '\n';
			}
			else {
				heapDown(last);
			}
		}
		else { // 그 외에는 x를 벡터에 넣기
			heap[last] = x;
			if (last != 0) { // 비어있지 않으면
				reHeap(last); // 정렬
			}
			last++;
		}
	}

	return 0;
}*/