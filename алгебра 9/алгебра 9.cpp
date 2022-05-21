// алгебра 9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

const int n = 12;
int first, last;
//функция сортировки
void quicksort(int* mas, int first, int last)
{
	int mid, count;
	int f = first, l = last;
	mid = mas[(f + l) / 2]; //вычисление опорного элемента
	cout <<"P = "<< mid<<" ";
	cout <<"L = "<< mas[f]<< " " <<"R = " <<mas[l]<< " "<<endl;
	do
	{
		while (mas[f] < mid) f++;
		while (mas[l] > mid) l--;
		if (f <= l) //перестановка элементов
		{
			count = mas[f];
			mas[f] = mas[l];
			mas[l] = count;
			f++;
			l--;
		}

		for (int i = 0; i < n; i++)
		{
			cout<<mas[i]<< " ";
		}
		cout<< "\n";
	} while (f < l);
	if (first < l) quicksort(mas, first, l);
	if (f < last) quicksort(mas, f, last);

}
//главная функция
int main()
{
	setlocale(LC_ALL, "Rus");
	int A[12] = { 10, 11, 25, 0, 69, 91, 21, 2, 56, 13, 47, 89 };

	cout<< "Исходный массив: ";
	for (int i = 0; i < 12; i++)

		cout<< A[i]<< " ";
	cout<<endl;
	first = 0; last = n - 1;
	quicksort(A, first, last);
	cout<< endl<< "\nРезультирующий массив: ";
	for (int i = 0; i < n; i++) 
		cout<<A[i]<<" ";
	delete[]A;
	system("pause>>void");
	return 0;
}