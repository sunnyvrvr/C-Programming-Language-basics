#include <iostream>

//------ ���ӽ����̽�
namespace BestComImpl {
	void SimpleFunc();
	void PrettyFunc();
}

namespace ProdComImpl {
	void SimpleFunc() {
		std::cout << "ProdCom�� ������ �Լ�" << std::endl;
	}
}

int main() {
	BestComImpl::SimpleFunc();
	ProdComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void) {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();
	ProdComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void) {
	std::cout << "So Pretty!!" << std::endl;
}