#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
    (void)argc;

    std::ofstream file(argv[1]);
    if (file.is_open()) {
        file.close();
    }
    else
        std::cerr << "Error dumbass" << std::endl;
    return 0;
}
