#include <iostream>

class Q1
{
public:
	template <typename ReturnType, typename InputType>
	ReturnType sum(InputType const* pArray, int const ELEMENTS) {
		InputType sum = 0;
		for (int index = 0; index < ELEMENTS;
			index++) {
			sum += pArray[index];
		}
		return static_cast<ReturnType> (sum) / ELEMENTS;
	}
};

int main()
{
	int * one = new int;
	int * two = new int;
	int * three = new int;
	int * four = new int;
	int * five = new int;
	int const el = 5;
	Q1 q1;
	int const * array[5] = {one, two, three, four, five };
	//q1.sum(array, el);
	system("PAUSE");
}
