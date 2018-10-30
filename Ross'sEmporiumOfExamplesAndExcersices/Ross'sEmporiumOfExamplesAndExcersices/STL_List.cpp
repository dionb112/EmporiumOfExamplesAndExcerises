#include <iostream>
#include <list>

int main5()
{
	std::list<int> theList;
	theList.push_back(1);
	theList.push_back(2);
	theList.push_back(3);

	std::list<int>::reverse_iterator reverseIter = theList.rbegin();
	auto reverseEnd = theList.rend();
	for (; reverseIter != reverseEnd; reverseIter++)
	{
		std::cout << *reverseIter << std::endl;
	}
	system("PAUSE");
	return 5;
}