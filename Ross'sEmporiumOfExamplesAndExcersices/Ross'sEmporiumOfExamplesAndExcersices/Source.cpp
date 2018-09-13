#include <iostream>
#include <array>
#include <algorithm>

template <typename T, T size>
void processArray(std::array<T, size> & arr)
{
	T smallest = arr[0];
	std::for_each(	std::begin(arr), 
					std::end(arr),
					[&](T const & element){ //my first lambda function : D 
						if (element < smallest)
						{
							smallest = element;
						}
	});

	////range based loop bruther
	//for (T & element : arr)
	//{
	//	std::cout << element << std::endl;
	//}
}

template <typename T>
T smallest(T const *baseAdr, int const ELEMENTS)
{
	T small = baseAdr[0];
	for (int i = 1; i < ELEMENTS; i++)
	{
		if (baseAdr[i] < small)
		{
			small = baseAdr[i];
		}
	}
	return small;
}
int main1()
{
	std::array<int, 5> stdArraysAreCool = { 1,7,8,55,-0 };
	int arr[] = { 1,2,3,-1,4 };
	std::cout << "Smlst" << std::endl;
	std::cout << smallest(arr, 5) << std::endl;
	processArray<int, 5>(stdArraysAreCool);
	system("PAUSE");
	return 0;
}