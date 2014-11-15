#include "MD5.h"
 
int main(int argc, char *argv[]) {
    // Output the test cases when no-input argv
    if (argc <= 1) {
        std::cout << "MD5(\"\") = " << md5("") << std::endl;
        std::cout << "MD5(\"a\") = " << md5("a") << std::endl;
        std::cout << "MD5(\"abc\") = " << md5("abc") << std::endl;
        std::cout << "MD5(\"message digest\") = " << md5("message digest") << std::endl;
        std::cout << "MD5(\"abcdefghilklmnopqrstuvwxyz\") = " << md5("abcdefghijklmnopqrstuvwxyz") << std::endl;
        std::cout << "MD5(\"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789\") =" 
              << md5("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789") << std::endl;
    } else {
        // Output the MD5 value of each input argv
        for (int i = 1; i < argc; i++) {
            std::cout << "MD5(\"" << argv[i] << "\") = " << md5(std::string(argv[i])) << std::endl;
        }
    }
    return 0;
}
