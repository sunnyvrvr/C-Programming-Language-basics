#include <iostream>
using namespace std;
//------- ��ü������
struct TV {
private:
	int channel;
	int volume;
	bool powerOn;

public:
	void on() {
		powerOn = true;
	}
	void off() {
		powerOn = false;
	}
	void setChannel(int chn) {
		if (chn >= 1 && chn <= 99) {
			channel = chn;
		}
		else
			channel = 1;
	}
	int getChannel() {
		return channel;
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
		}
	}
	int getvolume() {
		return volume;
	}
};

int main() {
	TV mytv;
	mytv.on();
	mytv.setChannel(100);
	mytv.setVolume(50);
	cout << "����ä��:" << mytv.getChannel() << endl;
	cout << "����ä��:" << mytv.getChannel() << endl;
}
