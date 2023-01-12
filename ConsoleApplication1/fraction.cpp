// �������� �������

#include <iostream>
#include <windows.h>    // ���������� ��� ������� �����������
#include "fraction.h"   // ���������� ��� ���� � ����������
using namespace std;

// ���������� ������ ��� ������������� ����� ��������� 
void fraction::Init(int F, int S)
{
	first = F;
	second = S;
}

// ���������� ������ ��� ������ �������� ����� ��������� 
void fraction::Read()
{
	SetConsoleCP(1251);         // ���� � ������� � ��������� 1251 ��� ������� �����������.
	SetConsoleOutputCP(1251);   // ����� �� ������� � ��������� 1251 ��� ������� �����������.

	cout << "\n������� ���� ������: "; cin >> first;
	cout << "\n������� ���������� �������: "; cin >> second;
}

// ���������� ������ ��� ������ �������� ����� ���������
void fraction::Show()
{
	SetConsoleCP(1251);         // ���� � ������� � ��������� 1251 ��� ������� �����������.
	SetConsoleOutputCP(1251);   // ����� �� ������� � ��������� 1251 ��� ������� �����������.

	cout << "\n��������� ������: " << first;
	/*cout << "\nsecond value: " << second;*/
	cout << "\n";
}



// ����� ��� ���������� � �������
double fraction::Power()
{
	return pow(first, second);
}