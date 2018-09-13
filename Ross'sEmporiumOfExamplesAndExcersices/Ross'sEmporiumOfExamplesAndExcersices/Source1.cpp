#include <stack>
#include <iostream>

int main()
{
	std::stack<int> s;
	int value = -1;
	while (value < 0)
	{
		std::cout << "Enter positive integer: ";
		std::cin >> value;
	}
	while (value > 0)
	{
	s.push(value % 2);
	value /= 2;
	}
	std::cout << "That base 10 num in binary is: ";
	while (!s.empty())
	{
		std::cout << s.top();
		s.pop();
	}
	std::cout << std::endl;

	system("pause");
}





