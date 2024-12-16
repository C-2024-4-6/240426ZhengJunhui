#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void Hinput(int hour);
	void Minput(int minute);
	void Sinput(int sec);
	void output();
};
void Time::Hinput(int hour) {
	this->hour = hour;
}
void Time::Minput(int minute) {
	this->minute = minute;
}
void Time::Sinput(int sec) {
	this->sec = sec;
}
void Time::output() {
	cout << hour << "：" << minute << "：" << sec << endl;
}
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.Hinput(10);      //输入设定的时间 
	t1.Minput(14);
	t1.Sinput(20);
	t1.output();
	return 0;
}