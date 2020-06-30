#include <iostream>
#include <string>

//#include <basics/max1.h>
//#include <basics/maxauto.h>
//#include <basics/maxcommon.h>
//#include <basics/maxdecltype.h>
//#include <basics/maxdecltypedecay.h>
//#include <basics/maxdefault1.h>
#include <basics/maxdefault3.h>

int main() {
    auto i = 42;
    std::cout << "max(7, i): " << ::max(7, i) << "\n";

    auto f1 = 3.4;
    auto f2 = -6.7;
    std::cout << "max(f1, f2): " << ::max(f1, f2) << "\n";

    std::string s1 = "mathematics";
    std::string s2 = "math";
    std::cout << "max(s1, s2): " << ::max(s1, s2) << "\n";

    return 0;
}
