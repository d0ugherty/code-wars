
#include <iostream>
#include <string>



std::string encrypt(std::string, int n);
std::string decrypt(std::string, int n);

int main () {
    encrypt("This is a test!", 0);
    std::cout << decrypt("hsi  etTi sats!", 1) << std::endl;
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
    if (encryptedText.empty() || n < 1) {
        return encryptedText;
    }

    int textLength, textHalf;
    std::string odd, even;

    while (n > 0) {
        textLength = encryptedText.length();
        textHalf = textLength / 2;
        odd = encryptedText.substr(0, textHalf);
        even = encryptedText.substr(textHalf);
        encryptedText = "";

        for (int i = 0; i < textHalf; i++) {
            encryptedText += even[i];
            encryptedText += odd[i];
        }
      
        if (textLength % 2 != 0) {
            encryptedText += even[textHalf];
        }
      n--;
    }
 return encryptedText;
}
