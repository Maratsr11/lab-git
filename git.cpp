#include <iostream>
#include <vector>
#include <string>

void readFromFile(std::vector<std::string>& lines) {}
void printLines(const std::vector<std::string>& lines) {}
void writeToFile(const std::vector<std::string>& lines) {}

int main() {
    setlocale(LC_ALL, "ru_RU");
    std::vector<std::string> lines;
    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);
    std::cout << "Программа завершена!" << std::endl;
    return 0;
}