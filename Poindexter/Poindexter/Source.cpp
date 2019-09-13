int main()
{
	int n = 5;

	int* p;
	p = &n; //address of n

	*p = *p + 64; //access value (dereferencing the pointer)

	int* q = p;

	int arr[4] = { 10,11,12,13 };
	int* pInt = &arr[1];

	*pInt = 69;
	//arr[2] = 69

	pInt[2] = 88; //derefence the memory address two (ints) over
	//arr[3] = 88;



	return 0;
}