#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int is_palindromo_recursivo(const char* str, int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    if (str[inicio] != str[fim]) {
        return 0;
    }
    return is_palindromo_recursivo(str, inicio + 1, fim - 1);
}

int palindromo(const char* str) {
    int len = strlen(str);
    if (len == 0) {
        return 1;
    }
    return is_palindromo_recursivo(str, 0, len - 1);
}

int main() {
    const char* s1 = "arara";
    const char* s2 = "casa";
    const char* s3 = "ovo";
    const char* s4 = "rever";
    const char* s5 = "banana";

    cout << "A string \"" << s1 << "\" e palindromo? " << palindromo(s1) << endl;
    cout << "A string \"" << s2 << "\" e palindromo? " << palindromo(s2) << endl;
    cout << "A string \"" << s3 << "\" e palindromo? " << palindromo(s3) << endl;
    cout << "A string \"" << s4 << "\" e palindromo? " << palindromo(s4) << endl;
    cout << "A string \"" << s5 << "\" e palindromo? " << palindromo(s5) << endl;

    return 0;
}