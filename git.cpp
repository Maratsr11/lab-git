#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void readFromFile(std::vector<std::string>& lines) {
    // Временное заполнение для отладки
    lines.push_back("Test line 1");
    lines.push_back("Test line 2");
}
void printLines(const std::vector<std::string>& lines) {
    for (const auto& line : lines) {
        std::cout << line << std::endl;
    }
}
void writeToFile(const std::vector<std::string>& lines) {
    std::ofstream file("output.txt");
    if (!file.is_open()) {
        std::cerr << "Не удалось открыть файл output.txt!" << std::endl;
        return;
    }
    for (const auto& line : lines) {
        file << line << std::endl;
    }
    file.close();
    std::cout << "Данные записаны в output.txt" << std::endl;
}

int main() {
    setlocale(LC_ALL, "ru_RU");
    std::vector<std::string> lines;
    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);
    std::cout << "Программа завершена!" << std::endl;
    return 0;
}