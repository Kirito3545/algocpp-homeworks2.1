﻿#include <iostream>

int fooFib(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fooFib(num - 1) + fooFib(num - 2);
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");


    int num = 0;
    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << std::endl << "Числа Фибоначчи: \n";

    std::cout << fooFib(num) << std::endl;
}

// Относительно быстро считает до num=41.
// Алгороитмическая сложность: по времени O(2^n), по памяти: O(1).
// Сложность по времени подсмотрена в интернете.