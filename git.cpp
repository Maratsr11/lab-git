#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void readFromFile(std::vector<std::string>& lines) {
    std::ifstream file("input.txt");
    if (!file.is_open()) {
        std::cerr << "Не удалось открыть файл input.txt!" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    // Отладочный вывод
    //std::cout << "Прочитано строк: " << lines.size() << std::endl;
    //for (const auto& l : lines) {
       // std::cout << l << std::endl;
    //}
}
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