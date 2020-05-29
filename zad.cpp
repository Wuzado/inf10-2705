#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, temp;
    int n[100], i, items;
    getline(cin, s);
    items = 0;
    while(i <= s.length()) {
        if(s[i] == ' ') {
            n[items] = stoi(temp);
            items++;
            temp = "";
            i++;
        } else {
            temp.push_back(s[i]);
            i++;
        }
    }
    n[items] = stoi(temp);
    items++;

    i = 0;
    while(i < items) {
        cout << n[i] * n[i] << " ";
        i++;
    }
    
    return 0;
}