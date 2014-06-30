#include "main.hpp"

#include <iostream>

int Main::run() {
    std::cout << "HELLo, World!!!\n";
    return 0;
}

int main(int argc, const char** argv) {
    return Main::run();
}
