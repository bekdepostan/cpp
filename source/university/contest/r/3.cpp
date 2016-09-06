#include <iostream>

using namespace std;

int tickets(int n = 999999, int sum = 0) {
    int  j, l;
    char builet[6];

    for (int i = 0; i <= n; i++) {
        for (l = i, j = 0; j < 6; j++, l /= 10) {
            builet[j] = l % 10;
        }
        if (builet[0] + builet[2] + builet[4] == builet[1] + builet[3] + builet[5]) {
            sum++;
        }
    }
    return sum;
}

int main() {
    cout << "Количество счастливых билетов: " << tickets() << endl;
    return 0;
}
