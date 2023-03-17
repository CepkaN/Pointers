#include<iostream>

template<typename T>
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}
template<typename T>
void p_swap(T* pnum1, T* pnum2) {
	int tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//n = 10, m = 20;

	// ��������� �� ����������.
	/*std::cout << "n = " << n << '\n'; // ����� �������� ����������
	std::cout << "&n = " << &n << '\n'; // ����� ������ ����������
	int* pn=&n;  // �������� ���������, ������������� �� ���������� n
	std::cout << "pn = " << pn << '\n';
	std::cout << "*pn = " << *pn << std::endl;
	*pn = 15;  // ��������� � ���������� n ����� ������������� ��������� pn
	std::cout << "����� n = " << n << '\n';
	pn = &m; // ��������������� ��������� �� ���������� m
	std::cout << "&m = " << &m << '\n';
	std::cout << "pn = " << pn << '\n';
	int* pm = &m;
	std::cout << "pm = " << pm << '\n';
	*pm = 25;
	std::cout << "m = " << m << '\n';
	std::cout << "*pn = " << *pn << '\n';
	std::cout << "*pm = " << *pm << '\n';*/

	// ��������� � �������.
	/*const int size = 5;
	int arr[size]{ 23,75,235476,7753,194 };
	int* pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << '\n';  //  235476
	pa2++;
	std::cout << "*pa2 = " << *pa2 << '\n'; // 7753
	pa2 -= 2;
	std::cout << "*pa2 = " << *pa2 << '\n'; // 75
	pa2 = &arr[0];
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << ' ';
	std::cout << '\n';

	std::cout << "arr = " << arr << '\n';
	std::cout << "pa2 = " << pa2 << '\n';
	int sum = 0;
	for (int i = 0; i < size; i++) 
		sum += *(arr + i);
	std::cout << "����� = " << sum << '\n';
	// arr = &n; // ������!
	// arr++;    // ������!
	// arr-=2;   // ������!*/

	// ��������� � �������.
	n = 7, m = 15;
	std::cout << n << ' ' << m << '\n';
	//  my_swap(n, m);  // �� ��������, ��� ��� ��������� - ��� ����� ����������.
	p_swap(&n, &m);
	std::cout << n << ' ' << m << '\n';




	return 0;
}