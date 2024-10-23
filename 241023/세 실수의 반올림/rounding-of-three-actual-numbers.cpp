#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a, b, c;
    cin >> a >> b >> c;
    cout << fixed;
    cout.precision(3);
    printf("%.3f\n%.3f\n%.3f", a, b, c);
    return 0;
}