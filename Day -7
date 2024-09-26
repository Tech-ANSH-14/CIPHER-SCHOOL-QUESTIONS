#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string &str) {
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        while (left < right && !std::isalnum(str[left])) {
            ++left;
        }

        while (left < right && !std::isalnum(str[right])) {
            --right;
        }

        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }

        ++left;
        --right;
    }

    return true;
}

int main() {
		string str1,str2,str3;
    getline(cin, str1);
		getline(cin, str2);
		getline(cin, str3);
    
    std::cout << "Test 1: " << (isPalindrome(test1) ? "true" : "false") << std::endl;
    std::cout << "Test 2: " << (isPalindrome(test2) ? "true" : "false") << std::endl;
    std::cout << "Test 3: " << (isPalindrome(test3) ? "true" : "false") << std::endl;

    return 0;
}
