#include <iostream>

//------ 네임스페이스
namespace BestComImpl {
	void SimpleFunc();
	void PrettyFunc();
}

namespace ProdComImpl {
	void SimpleFunc() {
		std::cout << "ProdCom이 정의한 함수" << std::endl;
	}
}

int main() {
	BestComImpl::SimpleFunc();
	ProdComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void) {
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	ProdComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void) {
	std::cout << "So Pretty!!" << std::endl;
}