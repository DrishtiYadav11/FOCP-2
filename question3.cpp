#include <iostream>
using namespace 

bool isPalindrome(string str) {
    string cleaned;
    for (char ch : str)
        if (isalnum(ch)) cleaned += tolower(ch);
    string rev = cleaned;
    reverse(rev.begin(), rev.end());
    return cleaned == rev;
}

void countFrequency(string str) {
    map<char, int> freq;
    for (char ch : str)
        if (isalpha(ch)) freq[tolower(ch)]++;
    cout << "Character frequencies:\n";
    for (auto p : freq) cout << p.first << " : " << p.second << endl;
}

string replaceVowels(string str) {
    string vowels = "aeiouAEIOU";
    for (char &ch : str)
        if (vowels.find(ch) != string::npos) ch = '*';
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << (isPalindrome(str) ? "The string is a palindrome.\n" : "The string is NOT a palindrome.\n");
    countFrequency(str);
    cout << "String after replacing vowels: " << replaceVowels(str) << endl;

    return 0;
}