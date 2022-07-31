/*#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> heap(100000);

void heapDown(int last) {

	//print
	cout << heap[0] << '\n'; // 0��°�� max value�̹Ƿ�
	heap[0] = heap[last];	 // ����� ������ ����
	heap[last] = 0;			 // ���� ������ ������ ����
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
		if (x == 0) { // 0�̸� �ִ��� ����ϰ� ����
			if (last == 0) {
				cout << 0 << '\n';
			}
			else {
				heapDown(last);
			}
		}
		else { // �� �ܿ��� x�� ���Ϳ� �ֱ�
			heap[last] = x;
			if (last != 0) { // ������� ������
				reHeap(last); // ����
			}
			last++;
		}
	}

	return 0;
}*/