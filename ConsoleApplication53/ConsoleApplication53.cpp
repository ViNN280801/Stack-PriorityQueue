#include "stdafx.h"
#include <iostream>
#include <stack>
#include <deque>
#include <queue>

using namespace std;

int main()
{

#pragma region stack
	//Создание стека типа данных строки
	stack<string>Stack;

	//Помещение элементов в стек
	if (Stack.empty()) {
		Stack.push("x - y - z");
		Stack.push("x + 2y");
		Stack.push("z + 4x");
	}

	//Кол-во элементов в стеке
	cout << "Size Stack = " << Stack.size() << endl;

	//Просмотр элементов стека
	cout << "Begginning elements(terms) without brackets: " << endl;
	while (!Stack.empty())
	{
		cout << Stack.top() << endl;
		Stack.top();
	}

	//Проверка и изменение элементов
	if (Stack.top() == "x - y - z")
		Stack.top() = "{x - y - z}";
	else if (Stack.top() == "x + 2y")
		Stack.top() = "[x + 2y]";
	else if (Stack.top() == "z + 4x")
		Stack.top() = "(z + 4x)";
	else
		return 1;

	//Дальнейший просмотр элементов
	cout << "Ending elements(terms): " << endl;
	while (!Stack.empty())
	{
		cout << Stack.top() << endl;
		Stack.pop();
	}
#pragma endregion

#pragma region queue
	priority_queue<string>name;

	//Добавление имён в очередь печати
	name.push("Oldrich");
	name.push("Leubouf");
	name.push("Trey"); //Первый в очереди
	name.push("Kate"); //Последняя в очереди

	//Результат:
	while (!name.empty())
	{
		if (name.top() == "Trey") {
			cout << "First in queue - " << name.top() << endl;
			name.pop();
		}
		else if (name.top() == "Oldrich" || name.top() == "Leubouf"){
			cout << "Next in queue - " << name.top() << endl;
			name.pop();
		}
		else {
			cout << "Last in queue - " << name.top() << endl;
			name.pop();
		}
	}
#pragma endregion

	return 0;
}

