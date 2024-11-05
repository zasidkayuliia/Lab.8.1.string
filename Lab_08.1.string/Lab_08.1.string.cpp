#include <iostream>
#include <string>

using namespace std;

// Функція для підрахунку кількості пар сусідніх символів "aa", "bb" або "cc"
int Count(const string& str) {
    int k = 0;
    for (size_t i = 0; i < str.length() - 1; i++) {
        if ((str[i] == 'a' && str[i + 1] == 'a') ||
            (str[i] == 'b' && str[i + 1] == 'b') ||
            (str[i] == 'c' && str[i + 1] == 'c')) {
            k++;
        }
    }
    return k;
}

// Функція для заміни кожної пари сусідніх символів "aa", "bb" або "cc" на "***"
string Change(const string& str) {
    string result;
    for (size_t i = 0; i < str.length(); i++) {
        if ((str[i] == 'a' && str[i + 1] == 'a') ||
            (str[i] == 'b' && str[i + 1] == 'b') ||
            (str[i] == 'c' && str[i + 1] == 'c')) {
            result += "***"; // Додаємо "***" замість пари
            i++; // Пропускаємо наступний символ у парі
        }
        else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // Виведення кількості пар
    cout << "String contained " << Count(str) << " groups of 'aa', 'bb' or 'cc'" << endl;

    // Заміна пар
    string modifiedStr = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    return 0;
}
