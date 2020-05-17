#include <iostream>

void fun(int=10, std::string="x") {
   auto i = 1u;
   std::cout << "i1 " << i << "\n";
   i -= 1;
   std::cout << "i2 " << i << "\n";
   i -= 1;
   std::cout << "i3 " << i << "\n";
   auto j = 1;
   std::cout << "i1 " << j << "\n";
   j -= 1;
   std::cout << "i2 " << j << "\n";
   j -= 1;
   std::cout << "i3 " << j << "\n";
}

int main() {
    fun(1,"x");
    bool a = true;
    bool b = true;

    if (!a && !b) {
        std::cout << "x1\n";
    }
    if (!(a && b)) {
        std::cout << "x2\n";
    }
    if (!(a || b)) {
        std::cout << "x3\n";
    }
    if (!a || !b) {
        std::cout << "x4\n";
    }
    if (!a || b) {
        std::cout << "x5\n";
    }

    auto i = 10u; auto j = ++i - 1u;
    std::cout << i << "\n";
    std::cout << j << "\n";

    
}

