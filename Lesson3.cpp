
//Kopchikov Aleksandr
// Lesson 3.1  Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной 
//				и не оптимизированной программы. Написать функции сортировки, которые возвращают количество операций.

/*
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;

// Определяем максимальный размер массива
#define MaxN 100
void swap1(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
// Распечатываем массив
void print(int N, int *a)
{
	int i;
	for (i = 0; i < N; i++)
		printf("%6i", a[i]);
	printf("\n");
}

int main(int argc, char *argv[]) {
	int a[MaxN];          // Создаём массив пользовательским вводом
	int b[MaxN];
	int N;
	cout << "Input size massiv: ";
	cin >> N;
	int i;
	for (i = 0; i < N; i++)
	{
		cout << "Input number: ";
		cin >> a[i];
		b[i] = a[i];
	}
	puts("Array before sort simpl massiv");
	print(N, a);
	puts("Array before sort modern massiv");
	print(N, b);
	int j = 0;
	int k = 0;
	int count1 = 0;
	int count2 = 0;
	count1++;			//Упорядочивание обычным методом пузырька
	for (i = 0; i < N; i++)
		for (j = 0; j < N - 1; j++) {
			count1++;
			if (a[j] > a[j + 1])
			{
				count1++;
				swap1(&a[j], &a[j + 1]);
			}
		}
	puts("Array after sort simple metod");
	print(N, a);
		//Упорядочивание модернизированным методом пузырька
	int M;
	M = N;
	for (i = 0; i < M + 1; i++) {
		for (j = 0; j < N - 1; j++) {
			count2++;
			while (b[j] > b[j + 1])
			{
				count2++;
				swap1(&b[j], &b[j + 1]);
			}
		}
		count2++;
		M--;
	}
			puts("Array after sort modern metod");
			print(N, b);
			cout << "Control sum metoda 1: " << count1 << endl;
			cout << "Control sum metoda 2: " << count2 << endl;
			system("pause");
			return 0;
		}

*/
// Lesson 3.2 Реализовать шейкерную сортировку.

/*
#include <iostream>
using namespace std;

//ф-ция для обмена значений ячеек
void swapEl(int *arr, int i)
{
	int buff;
	buff = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = buff;
}

//ф-ция "шейкер"-сортировки
void myShakerSort(int *arr, int size)
{
	int leftMark = 1;
	int rightMark = size - 1;
	while (leftMark <= rightMark)
	{
		for (int i = rightMark; i >= leftMark; i--)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		leftMark++;


		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		rightMark--;

		cout << "\nИтерация: " << leftMark - 1; // просмотр количества итераций
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	int size = 0;
	cout << "Размер массива: ";
	cin >> size;
	int *A = new int[size];

	for (int k = 0; k < size; k++)
	{
		A[k] = size - k; // запись значений по убыванию
		cout << A[k] << " | ";
	}

	myShakerSort(A, size); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size; k++)
	{
		cout << A[k] << " | ";
	}
	cout << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

//ф-ция для обмена значений ячеек
void swapEl(int *arr, int i)
{
	int buff;
	buff = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = buff;
}

//ф-ция "шейкер"-сортировки
void myShakerSort(int *arr, int size)
{
	int leftMark = 1;
	int rightMark = size - 1;
	while (leftMark <= rightMark)
	{
		for (int i = rightMark; i >= leftMark; i--)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		leftMark++;


		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		rightMark--;

		cout << "\nИтерация: " << leftMark - 1; // просмотр количества итераций
	}
}

int main(){
	setlocale(LC_ALL, "rus");

	int size = 0;
	cout << "Размер массива: ";
	cin >> size;
	int *A = new int[size];

	for (int k = 0; k < size; k++)
	{
		A[k] = size - k; // запись значений по убыванию
		cout << A[k] << " | ";
	}

	myShakerSort(A, size); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size; k++)
	{
		cout << A[k] << " | ";
	}
	cout << endl;
	system("pause");

	return 0;
}
*/
// Lesson 3.3 3. Реализовать бинарный алгоритм поиска в виде функции, 
// которой передается отсортированный массив. Функция возвращает индекс найденного элемента или -1, если элемент не найден.

#include <iostream>

using namespace std;

int BinSearch(const int* arr, int count, int key);

int main()
{
	const int n = 5;
	int arr[n] = { 1, 2, 3, 4, 5 };
	int key;
	int count = 0;
	cout << "key: ";
	cin >> key;
	int i = 0;
	int nomer = 1;
	count++;
	if (BinSearch(arr, n, key) != -1) {
		count++;
		while (key != arr[i]) {
			i++;
			count++;
		}
		cout << i+1 << endl << "Oper-s ended: "<< count << endl;
	}
	else
		cout << "-1" << endl << "Oper-s ended: " << count << endl;
	system("pause");
	return 0;
}

int BinSearch(const int* arr, int count, int key)
{
	count++;
	int l = 0;            // нижняя граница
	count++; 
	int u = count - 1;    // верхняя граница
	count++;
	while (l <= u) {
		count++;
		int m = (l + u) / 2;
		count++;
		if (arr[m] == key) return m;
		count++; 
		if (arr[m] < key) l = m + 1;
		count++;
		if (arr[m] > key) u = m - 1;
	}
	return -1;
}
