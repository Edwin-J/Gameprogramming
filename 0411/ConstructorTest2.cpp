#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;

public:
	Car();
	Car(int s, int g, string c);
};
Car::Car(){
	cout << "����Ʈ ������ ȣ��" << endl;
	speed;
	gear = 1;
	color = "white";
}
Car::Car(int s, int g, string c){
	cout << "�Ű������� �ִ� ������ ȣ�� " << endl;
	speed = s;
	gear = g;
	color = c;
}

int main(){
	Car c1;
	Car c2(100, 0, "blue");
	return 0;
}