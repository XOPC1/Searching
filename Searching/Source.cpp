//Персональный шаблон проекта С++
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
template<typename T>int searchIndex(T array[], int l, T key, int begin = 0) {
	for (int i = begin; i < l; i++)
		if (array[i] == key)
			return i;
	return -1;
}

template<typename T>int searchLastIndex(T array[], int l, T key, int begin = -1) {
	if (begin == -1)
		begin = l - 1;
	for (int i = begin; i>=0; i--)
		if (array[i] == key)
			return i;
	return -1;
}

void subWord(char array[], int l, char sym) {
	int symIndex = searchIndex(array, l, sym);
	if (symIndex != -1)
		for (int i = symIndex; i < l; i++)
			cout << array[i];
	else
		cout << "FUCKING ERROR!!!";
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n;

	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Введите число: ";
	cin >> n;
	cout << searchLastIndex(arr, 10, n, 5) << endl;*/

	//Задание "Подслово"
	cout << "Изначальный массив:\n";
	char word[8] = { 'f','u','n','c','t','i','o','n' };
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;

	cout << "Подслово:\n";
	subWord(word, 8, 'p');
	cout << endl;

	return 0;
}