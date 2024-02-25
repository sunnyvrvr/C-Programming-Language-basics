#include <iostream>
#include <string>
using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};

class TextMessage {
	int sendTime;
	string sendName;
	string text;
public:
	TextMessage(int sendTime, string sendName, string text) {
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->text = text;
	}
	//위와 동등한 다른 방식의 코드
	//TextMessage(int sendTime, string sendName, string text);
	//sendTime(sendTime), sendName(sendName), text(text)
	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	int GetText() const { return text; }
private:
	int sendTime;
	string sendName;
	string text;
};

class ImageMessage {
	int sendTime;
	string sendName;
	Image* image;
public:
	ImageMessage(int sendTime, string sendName, Image* image) {
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->image = image;
	}
	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	int* GetImage() const { return image; }
};

int main() {
	Image* dogImage = new Image;
	TextMessage* hello = new TextMessage(10, "두들", "안녕");
	TextMessage* hello = new TextMessage(20, "두들", dogImage);

	cout << "보낸 시간:" << hello->GetSendTime() << endl;
	cout << "보낸 사람:" << hello->GetSendTime() << endl;
	cout << "내용 :" << hello->GetSendTime() << endl;
	cout << endl;

	cout << "보낸 시간:" << hello->GetSendTime() << endl;
	cout << "보낸 사람:" << hello->GetSendTime() << endl;
	cout << "내용 :" << (string)dog->GetImage() << endl;
	cout << endl;
}
