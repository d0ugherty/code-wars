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


/** Inverse of the encryption function
 *  -Now we start with non-empty string objects for odd & even as opposed to
 *  to the empty ones in the encrypt function
 *  
 *  **/
std::string decrypt(std::string encryptedText, int n) {
    if (encryptedText.empty() || n < 1) return encryptedText;
    
    int textLength = encryptedText.length();
    int textHalf = textLength / 2;
    while (n > 0) {
        std::string odd = encryptedText.substr(0, textHalf);
        std::string even = encryptedText.substr(textHalf);
        //encryptedText = "";
        int evenLength = even.length();

        for(int i = 0; i <= textHalf; i++) {
            if(i % 2 == 0) {
                encryptedText[i] += even[i];
                std::cout << "EVEN " << even[i] << std::endl;
            } else {
                encryptedText[i] += odd[i];
                std::cout << "ODD" << odd[i] << std::endl;
            }
            //(i % 2 == 0) ? encryptedText += even[i] : encryptedText += odd[i];
        }
        n--;
    }
    return encryptedText;
}

