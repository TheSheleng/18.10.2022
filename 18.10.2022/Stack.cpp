#include "Stack.h"

using namespace stck;

Stack::Stack()
{
	// ���������� ���� ����
	top = EMPTY;
}

void Stack::Clear()
{
	// ����������� "�������" ����� 
	// (������ � ������� ��� ��� ����������, 
	// �� ������� ������, ��������������� �� ������ � �������� �����,
	// ����� �� ������������)
	top = EMPTY;
}

bool Stack::IsEmpty()
{
	// ����?
	return top == EMPTY;
}

bool Stack::IsFull()
{
	// �����?
	return top == FULL;
}

int Stack::GetCount()
{
	// ���������� �������������� � ����� ���������
	return top + 1;
}

void Stack::Push(string c)
{
	// ���� � ����� ���� �����, �� ����������� ���������
	// �� ������� ����� � ��������� ����� �������
	if (!IsFull())
		st[++top] = c;
}

string Stack::Pop()
{
	// ���� � ����� ���� ��������, �� ���������� ������� �
	// ��������� ��������� �� ������� �����
	if (!IsEmpty())
		return st[top--];
	else // ���� � ����� ��������� ���
		return 0;
}

void Stack::Output()
{
	for (int i = 0; i < top + 1; i++)
	{
		cout << st[i] << " ";
	}
	cout << endl;
}