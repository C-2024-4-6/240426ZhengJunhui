#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
	cout << hour << "��" << minute << "��" << sec << endl;
}
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.Hinput(10);      //�����趨��ʱ�� 
	t1.Minput(14);
	t1.Sinput(20);
	t1.output();
	return 0;
}