#include <iostream>
using namespace std;

void swapPointer(int * & ref1, int * & ref2)
{
	int * tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;

}

int main(void)
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	cout << *ptr1 << ' ' << *ptr2 << endl;
	swapPointer(ptr1, ptr2);
	cout << *ptr1 << ' ' << *ptr2 << endl;

	return 0;
}

