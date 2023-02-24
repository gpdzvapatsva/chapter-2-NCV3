//Program to check whether input is a vowel or consonant
#include <iostream>

using namespace std;

int main() {
    char chars;
    bool isLowercaseVowel=false, isUppercaseVowel=false;

    cout << "Enter an alphabet: "<<endl;
    cin >> chars;

    // values for lowercase vowels stored in a boolean variable
    isLowercaseVowel = (chars == 'a' || chars == 'e' || chars == 'i' || chars == 'o' || chars == 'u');

    // values for uppercase vowels stored in a boolean variable
    isUppercaseVowel = (chars == 'A' || chars == 'E' || chars == 'I' || chars == 'O' || chars == 'U');

    // show error message if c is not an alphabet
    if (!isalpha(chars)){
     cout<<"Error! The input is a non-alphabetic character."<<endl;
     }
    else if (isLowercaseVowel || isUppercaseVowel)
       {
          cout << chars << " is a vowel."<<endl;
       }

    else
    {
          cout << chars << " is a consonant."<<endl;
    }

    return 0;
}
