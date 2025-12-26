#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
    string attempt;
	string password = "12345";
	while (true) {
		cout << "[ + ] Введите пароль: ";
		cin >> attempt;
		if (attempt == password) {
			cout << "\x1b[92mДобро пожаловать!\x1b[0m";
			return 0;
		}
		else {
			cout << "\x1b[31m [-] Неверный пароль!\x1b[0m\n";
		}
	}
}

