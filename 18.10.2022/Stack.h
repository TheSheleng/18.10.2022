#pragma once

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

namespace stck
{
	class Stack
	{
		// ������ � ������� ������� �����
		enum { EMPTY = -1, FULL = 20 };
		// ������ ��� �������� ������
		string st[FULL + 1];
		// ��������� �� ������� �����
		int top;

	public:
		// �����������
		Stack();

		// ���������� ��������
		void Push(string c);

		// ���������� ��������
		string Pop();

		// ������� �����
		void Clear();

		// �������� ������������� ��������� � �����
		bool IsEmpty();

		// �������� �� ������������ �����
		bool IsFull();

		// ���������� ��������� � �����
		int GetCount();

		void Output();
	};

}
