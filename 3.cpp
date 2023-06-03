
#include <iostream>
#include <cstdlib> // для функции rand()
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    short* arr = new short[size]; // выделение памяти под массив

    // заполнение массива случайными числами
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // случайное число от 0 до 99
    }

    // вывод адресов и значений элементов массива
    for (int i = 0; i < size; i++) {
        cout << "Address of arr[" << i << "]: " << &arr[i] << ", Value: " << arr[i] << endl;
    }

    delete[] arr; // освобождение памяти, занятой под массив
    return 0;
}
