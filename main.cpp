#include <iostream>  
#include <string>  
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    string password = "12345";
    string userPassword;
    cout << "\x1b[6m                                                   [+] Вход в систему [+]\x1b[0m\n";
    bool Correct = false; 
    while (!Correct) {
        
        cout << "[+] Введите пароль: ";
        cin >> userPassword;

        if (userPassword == password) {
            cout << "\x1b[92m[+] Добро пожаловать!\x1b[0m" << endl;
            Correct = true;
        }
        else {
            cout << "\x1b[31m[-] Неверный пароль!\x1b[0m" << endl;
        }
    }

    return 0;
}
