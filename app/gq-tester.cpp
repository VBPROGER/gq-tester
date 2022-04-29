#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string VALUE = "MyValue123"; // Your own value here, can also be changed using GameConqueror
    for (std::string line; std::getline(std::cin, line);) {
        cout << VALUE << endl;
    }
    return 0;
}
