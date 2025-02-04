#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string>
#include <tchar.h>
using namespace std;

void Task(_TCHAR* text)
{
	_TCHAR vowels[] = {'�', '�', '�' , '�' , '�' , '�' , '�' , '�' , '�' , '�' };
	int words = 0;
	for (int i = 0; i < _tcslen(text); i++)
	{
		if ((text[i] != ' ' && text[i + 1] == ' ') || (i == _tcslen(text) - 1 && text[i] != ' '))
		{
			for (_TCHAR c : vowels)
			{
				if (text[i] == c) words++;
			}
		}
	}
	cout << "ʳ������ ���, �� ����������� �� �������: " << words << endl;
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	_TCHAR text[100] = _TEXT(""); //������ ���� ������ ���������� ����� �������� ���
	cin.getline(text, 100);

	Task(text);
}
