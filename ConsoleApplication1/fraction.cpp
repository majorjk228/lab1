// Описание методов

#include <iostream>
#include <windows.h>    // Библиотека для русской локализации
#include "fraction.h"   // Подключаем наш файл с структурой
using namespace std;

// Реализация метода для инициализации полей структуры 
void fraction::Init(int F, int S)
{
	first = F;
	second = S;
}

// Реализация метода для чтения значений полей структуры 
void fraction::Read()
{
	cout << "\nВведите цену товара: "; cin >> first;
	cout << "\nВведите количество товаров: "; cin >> second;
}

// Реализация метода для вывода значений полей структуры
void fraction::Show()
{
	cout << "\nСтоимость товара: " << first;
	/*cout << "\nsecond value: " << second;*/
	cout << "\n";
}



// Метод для возведения в степень
double fraction::Power()
{
	return pow(first, second);
}