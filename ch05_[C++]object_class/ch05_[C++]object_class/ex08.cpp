#include <iostream>
using namespace std;

int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

//------ 함수 오버로딩 
int inventory[8] = { 0 };
int score = 0;

//void getItem(int itemId) {
//	inventory[itemId]++;
//}
//
//void getItem(int itemId, int cnt) {
//	inventory[itemId]  += cnt;
//}
//
//void getItem(int itemId, int cnt, int sc) {
//	inventory[itemId] += cnt;
//	score += sc;
//}

//------ 디폴트값 활용
void getItem(int itemId, int cnt = 1, int sc = 0) {
	inventory[itemId] += cnt;
	score += sc;
}

int main() {
	getItem(6, 5);
	getItem(3);
	getItem(5, 4, 7000);

	for (int i : arr) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "점수: " << score << endl;

}

