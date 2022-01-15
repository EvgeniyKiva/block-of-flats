#include <iostream>
#include <string>

int main() {
    std::string SecondName[10];

    for (int i=0; i<10; i++){
        std::cout << "Inter Second name " << i+1 << " flat" << std::endl;
        std::cin >> SecondName[i];
    }
    for (int i=0; i<3; i++) {
        int NumberFlat;
        std::cout << "Inter number flat" << std::endl;
        std::cin >> NumberFlat;
        if (NumberFlat<1||NumberFlat>10){
            std::cout << "Number flat wrong";
            break;
        }
        else {
            std::cout << SecondName[NumberFlat-1] << std::endl;
        }

    }
    return 0;
}
