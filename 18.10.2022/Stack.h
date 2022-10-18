#pragma once

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

namespace stck
{
	class Stack
	{
		// Нижняя и верхняя границы стека
		enum { EMPTY = -1, FULL = 20 };
		// Массив для хранения данных
		string st[FULL + 1];
		// Указатель на вершину стека
		int top;

	public:
		// Конструктор
		Stack();

		// Добавление элемента
		void Push(string c);

		// Извлечение элемента
		string Pop();

		// Очистка стека
		void Clear();

		// Проверка существования элементов в стеке
		bool IsEmpty();

		// Проверка на переполнение стека
		bool IsFull();

		// Количество элементов в стеке
		int GetCount();

		void Output();
	};

}
