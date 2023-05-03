#include <iostream>

using namespace std;

class CoffeMachine {
public:
	string TypeCoffe;
	int capacity;
	bool isEnable;
	void Enable();
	void Disable();
};


int main() {
	setlocale(LC_ALL, "ru");
	CoffeMachine Bosch;
	Bosch.TypeCoffe = "Ground coffee";
	Bosch.capacity = 1200;
	Bosch.isEnable = false;
	if (Bosch.isEnable == true) Bosch.Disable();
	else Bosch.Enable();
}

void CoffeMachine::Enable() {
	cout << "Кофемашина включена!" << endl;
}

void CoffeMachine::Disable() {
	cout << "Кофемашина выключена!" << endl;
}
