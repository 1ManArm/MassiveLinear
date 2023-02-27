#include <iostream>

//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n\n";
}

//Линейный поиск первого вхождения элемента в массив
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

//Линейный поиск последнего вхождения элемента в массив
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

void subword(char word[], const int length, char sym) {
	int index = search_index(word, length, sym);
	if (index != -1) {
		for (int i = index; i < length; i++)
			std::cout << word[i];
		std::cout << std::endl;
	}
	else
		std::cout << "ОШИБКА!\n";
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Линейный поиск
	/*const int size = 10;
	int arr[size]{ 10, 20, 20, 90, 60, 90, 70, 10, 70, 60 };
	//             00  01  02  03  04  05  06  07  08  09
	std::cout << "Массив:\n";
	print_arr(arr, size);
	int index;
	std::cout << "Введите число: ";
	std::cin >> n;

	//index = search_index(arr, size, n, 4);
	index = search_last_index(arr, size, n, 5);

	if (index != -1)
		std::cout << "\nИндекс: " << index << '\n';
	else
		std::cout << "\nЧисла нет в массиве!\n\n";*/

	//Подслово
	std::cout << "Слово:\n";
	const int word_size = 8;
	char word[word_size]{ 'F','U','N','C','T','I','O','N' };
	for (int i = 0; i < word_size; i++)
		std::cout << word[i];
	std::cout << "\nВведите символ -> ";
	char sym;
	std::cin >> sym;
	std::cout << "Подслово:\n";
	subword(word, word_size, sym);


	return 0;
}