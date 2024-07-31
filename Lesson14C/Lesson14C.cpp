#include <iostream>
#include <string>
#include <windows.h>

int main() {
    // Устанавливаем кодировку консоли на UTF-8
    SetConsoleOutputCP(CP_UTF8);

    std::string myString = "Пример строки";

    std::cout << "Строковая переменная: " << myString << std::endl;
    std::cout << "Длина строки: " << myString.length() << std::endl;
    std::cout << "Первый символ: " << myString.front() << std::endl;
    std::cout << "Последний символ: " << myString.back() << std::endl;

    return 0;
}
