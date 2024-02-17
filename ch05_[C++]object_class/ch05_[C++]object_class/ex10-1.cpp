class Time {
	int h, m, s;
public:
	Time() : Time(0, 0, 0) {
		//h = 0;
		//m = 0;
		//s = 0;
	}
	Time(int s) : Time(0, 0, s) {
		//h = 0;
		//m = 0;
		this -> s = s;
	}
	Time(int m, int s) : Time(0, m, s){
		//h = 0;
		//m = 0;
		//this-> s = s;
	}
	Time(int h, int m, int s) : h(h), m(m), s(s) {
		//this->h = 0;
		//this->m = 0;
		//this->s = 0;
	}
};