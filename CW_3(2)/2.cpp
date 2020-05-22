#include<iostream>

#include<fstream>

using namespace std;

int main() {
    char* array = new char[100];
    char* mass = new char[100];
    char* massiv = new char[100];
    char ch, ch2, n;
    int i = 0;
    int j = 0;
    cout << "1:";
    while (studentA.get(ch)) {
        cout << ch;
        array[j] = ch;
        j++;
    }
    cout << "2:";
    while (studentB.get(ch2)) {
        cout << ch2;
        mass[i]= ch2;
        i++;
    }
    for (int j = 0; j < 100; j++) {
        for (int i = 0; i < 100; i++) {
            if (array[j] != mass[i]) {
                cout << array[j] <<endl;
                array[j] = n;
                n = massiv[100];
            }
            else 
            continue;
        }
    }
    output<< massiv[100];
    studentA.close();
    studentB.close();
    output.close();
}

