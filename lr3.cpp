#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_valid_bit_string(string bit_string) {
    for (char char_ : bit_string) {
        if (char_ != '0' && char_ != '1') {
            return false;
        }
    }
    return true;
}

int main() {
    string frst;
    cout << "Введите первую битную строку из 8 символов:";
    cin >> frst;
    while (!is_valid_bit_string(frst)) {
        cout << "Cтрока должна содержать только 0 и 1" << endl;
        cout << "Введите первую битную строку из 8 символов:";
        cin >> frst;
    }

    string scnd;
    cout << "Введите вторую битную строку из 8 символов:";
    cin >> scnd;
    while (!is_valid_bit_string(scnd)) {
        cout << "Cтрока должна содержать только 0 и 1" << endl;
        cout << "Введите первую битную строку из 8 символов:";
        cin >> scnd;
    }

    frst = string(8 - frst.length(), '0') + frst;
    scnd = string(8 - scnd.length(), '0') + scnd;
    vector<int> result(8, 0);
    for (int i = 0; i < 8; i++) {
        if (frst[i] == '1' && scnd[i] == '1') {
            result[i] = 1;   
        } else {
            result[i] = 0;  
        }
    }
    string result_str = "";
    for (int bit : result) {
        result_str += to_string(bit);
    }
    
    cout << "Первая строка: " << frst << endl;
    cout << "Вторая строка: " << scnd << endl;
    cout << "Результат конъюнкции:" << result_str << endl;

    return 0;
}
