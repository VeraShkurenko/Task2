#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char buf[100];
	cin >> buf;
	cout << buf << endl;

	cout << "Привет, мир!\n";
}