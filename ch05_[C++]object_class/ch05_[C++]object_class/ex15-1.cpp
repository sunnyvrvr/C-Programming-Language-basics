#include <iostream>
using namespace std;

class Account {

public:
	Account() : money(0) { }
	Account(int money) : money(money) { }
		void Deposit(int d) {
			money += d;
			cout << d << "원 예금" << endl;
		}
		void Draw(int d) {
			if (money - d >= 0) {
				money -= d;
				cout << d << "원 인출" << endl;
			}
		}
		//const 선언 객체의 내부를 건드리지 않는 함수
		int GetMoney() const {
			return money;
		}

private:
	int money;
};

int main() {
	Account acc(10000);
	acc.Deposit(5000);
	acc.Draw(7000);
	cout << "잔고:" << acc.GetMoney() << endl;
	const Account doodle;
	//doodle.Deposit(10); //const함수가 아니므로 오류
	doodle.GetMoney();
}