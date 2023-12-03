#include <iostream>
#include <Windows.h> 
using namespace std;

void sumFirstN(int N) {
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "—ума першого " << N << " натуральн≥ числа Ї " << sum << endl;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;

    cout << "¬вед≥ть N : ";
    cin >> N;

    sumFirstN(N);

    return 0;
}