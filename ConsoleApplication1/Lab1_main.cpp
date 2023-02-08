﻿// Лабораторная работа №1, Вариант 3 (2 семестр).


#include <iostream>
#include <windows.h>    // Библиотека для русской локализации
#include "fraction.h"
using namespace std;


fraction make_fraction(fraction t)
{
    t.Show(); //инициализировали поля переменной t с помощью параметров функции
    return t; //вернули значение переменной t
}


int main()
{
    SetConsoleCP(1251);         // Ввод с консоли в кодировке 1251 для русской локализации.
    SetConsoleOutputCP(1251);   // Вывод на консоль в кодировке 1251 для русской локализации.

    // объект класса
    fraction fract;
    
    fract.Read();          // Вызываем метод для инциализации введенных данных с клавиатуры
    make_fraction(fract);  // Отправляем наш объект на вывод

    
    cout << "\n";
    cout << "Передаем константные данные из кода: \n " << endl;      // Инцилизация перменный в коде 
    cout << "Стоимость товара: 5 и Кол-во товаров: 3 " << endl;
    fract.Init(5, 3);
    fract.Show(); // Выводим данные

    return 0;
}


