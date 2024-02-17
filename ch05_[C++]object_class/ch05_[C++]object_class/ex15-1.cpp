#include <iostream>
using namespace std;

class Account {

public:
	Account() : money(0) { }
	Account(int money) : money(money) { }
		void Deposit(int d) {
			money += d;
			cout << d << "�� ����" << endl;
		}
		void Draw(int d) {
			if (money - d >= 0) {
				money -= d;
				cout << d << "�� ����" << endl;
			}
		}
		//const ���� ��ü�� ���θ� �ǵ帮�� �ʴ� �Լ�
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
	cout << "�ܰ�:" << acc.GetMoney() << endl;
	const Account doodle;
	//doodle.Deposit(10); //const�Լ��� �ƴϹǷ� ����
	doodle.GetMoney();
}