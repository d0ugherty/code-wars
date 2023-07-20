#include <iostream>
#include <string>



std::string encrypt(std::string, int n);
std::string decrypt(std::string, int n);


int main() {
    std::string test = "012345";
    std::cout << "Encrypt:  " << test << std::endl;
    std::cout << "Result: " << encrypt(test, 2) << std::endl;
    std::cout << "Decrypt: " << "hsi  etTi sats!" << std::endl; 
    std::cout << "Result: " << decrypt("hsi  etTi sats!", 1) << std::endl;
    return 0;

}

std::string encrypt(std::string text, int n) {
    if (text.empty() || n < 1)  return text;

    while(n > 0) {
        std::string odd = "";
        std::string even = "";
        for(int i = 0; i < text.length(); i++){
            (i % 2 == 0) ? even += text[i] : odd += text[i];
        }
        text = odd + even;
        n--;
    }
    return text;
}


// Finish this
std::string decrypt(std::string encryptedText, int n) {
    if (encryptedText.empty() || n < 1) return encryptedText;

    while (n > 0) {
        std::string odd = "";
        std::string even = "";

        for(int i = 0; i < encryptedText.length(); i++) {
            (i % 2 == 1) ? even += encryptedText[i] : odd += encryptedText[i];
        }
        encryptedText = even + odd;
        n--;
    }
    return encryptedText;
}

