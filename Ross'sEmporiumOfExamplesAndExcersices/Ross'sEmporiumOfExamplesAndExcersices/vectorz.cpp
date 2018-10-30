#include <vector>
#include <iostream>
#include <algorithm>

int main4()
{
	std::vector<int> v;
	v.push_back(3);
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	auto endIter = remove(v.begin(), v.end(), 3);
	system("PAUSE");
	return 4;
}
