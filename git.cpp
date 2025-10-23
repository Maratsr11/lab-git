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
        if (!line.empty()) {
            lines.push_back(line);
        }
    }
    file.close();
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
    setlocale(LC_ALL, "ru_RU.UTF-8");
    std::vector<std::string> lines;
    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);
    std::cout << "Программа завершена!" << std::endl;
    return 0;
}