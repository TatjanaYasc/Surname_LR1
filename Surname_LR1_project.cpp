#include <iostream>
#include <string>
using namespace std;

void VolumeOfParallelepiped()
{
	//Задание 1. Написать программу вычисления объема параллелепипеда
	//Исходные данные вводятся с клавиатуры

	//Здесь должен быть Ваш код
    //change1
	cout << "Результат Задания 1: "<<endl;
}
void ProductOfNumbers()
{
	//Задание 2. С клавиатуры вводится четырехзначное число
	//Найти произведение второй и третьей его цифр

	//Здесь должен быть Ваш код
     //change2
	cout << "Результат Задания 2: " << endl;
}
void MaximumOfNumber()
{
	//Задание 3. Вводятся три произвольных числа x, y, z
	//Найти наибольшее 	среди них

	//Здесь должен быть Ваш код
	cout << "Результат Задания 3: " << endl;
}
void ExistenceOfTriangle()
{
	//Задание 4. Даны действительные положительные числа x, y z
	//Выяснить существует ли треугольник с длинами сторон x, y z
	//Если треугольник существует, то ответить – является ли он равносторонним

	//Здесь должен быть Ваш код
	cout << "Результат Задания 4: " << endl;
}
void DigitRecognition()
{
	//Задание 5. Написать программу, которая просит ввести цифру и выводит её словами
	//В случае, если пользователь укажет недопустимое число, программа
	//должна вывести сообщение «Ошибка ввода данных».Для решения задания
	//используется оператор switch - case 
	
	//Здесь должен быть Ваш код
	cout << "Результат Задания 5: " << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int funcSelect = 0;
	for (;;)
	{
		cout << "\nTask 1. Вычисление объема параллелепипеда\n";
		cout << "Task 2. Произведение цифр четырехзначного числа\n";
		cout << "Task 3. Наибольшее из 3-х чисел\n";
		cout << "Task 4. Существование треугольника\n";
		cout << "Task 5. Текстовая трансляция цифры\n\n";
		cout << "Please enter the number of the desired function or 0 if you want to close the app: \n";
		cin >> funcSelect;
		switch (funcSelect)
		{
			case 0:
			{
				return 0;
			}
			case 1:
			{
				VolumeOfParallelepiped();
				break;
			}
			case 2:
			{
				ProductOfNumbers();
				break;
			}
			case 3:
			{
				MaximumOfNumber();
				break;
			}
			case 4:
			{
				ExistenceOfTriangle();
				break;
			}
			case 5:
			{
				DigitRecognition();
				break;
			}
			default:
			{
				cout << "Введите значение от 1 до 5 либо 0 для окончания";
			}
		}
	}
	return 0;
}
