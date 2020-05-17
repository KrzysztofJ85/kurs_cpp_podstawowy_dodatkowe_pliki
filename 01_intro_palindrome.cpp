#include <iostream>

bool isPalindrome(const std::string & text) {

  if (text.empty()) {
    return false;
  }
    
  for(int i = 0; i < text.length(); i++) {

    if (text[i] != text[text.length() - i - 1]) {
      return false;
    }

  }

  return true;

}

void checkPalindrome(std::string text) {

  if (isPalindrome(text)) {
    std::cout << text << " is palindrome" << '\n'; 
  }    
  else {
    std::cout << text << " is not palindrome" << '\n'; 
  }

}

int main() {

  checkPalindrome("Ala ma kota");
  checkPalindrome("ala");
  checkPalindrome("kajak");
  checkPalindrome("neveroddoreven");
  checkPalindrome("abacada");

  return 0;

}