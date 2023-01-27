/*
В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято записывать в виде четырех чисел, каждое из которых может принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
127.0.0.0
192.168.0.1
255.0.255.255
Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool right_ip = true;
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            words.push_back(word);
            word = "";
        } else {
            word += s[i];
        }
    }
    words.push_back(word);
    if (words.size() != 4) {
        right_ip = false;
    } else {
        for (string word : words) {
            if (word == "") {
                right_ip = false;
                break;
            } else {
                for (int i = 0; i < word.size(); i++) {
                    if (!(word[i] >= '0' && word[i] <= '9')) {
                        right_ip = false;
                        break;
                    }
                }
                if (word.size() != 1 && word[0] == '0') {
                    right_ip = false;
                }
                if (!right_ip) {
                    break;
                }
                int num = stoi(word);
                if (!(num >= 0 && num <= 255)) {
                    right_ip = false;
                }
            }
        }
    }
    if (right_ip) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}