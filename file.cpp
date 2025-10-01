#include <iostream>
#include <fstream> 
#include <string>


int main() {
    setlocale(LC_ALL, "rus");
    std::ifstream inputFile("input.txt");
    std::string line;

    int countNumbers; // Количество строк со словами в файле

    for (int i = 0; i < 1; i ++ ) {
        std::getline(inputFile, line);
        countNumbers = std::stoi(line);
    }

    std::string words[countNumbers];

    for (int i = 0; i <= countNumbers - 1; i++) {
        std::getline(inputFile, line);

        words[i] = line;
    }

    for (int i = countNumbers - 1; i >= 0; i--) {
        std::cout << words[i] << std::endl;
    }
    
    return 0;

}