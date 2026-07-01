#include<iostream>
using namespace std;

consteval int square(const int x) {
    return x * x;
}

int main() {
    const int x = 5;
    constexpr int s = square(x);
    cout << s << endl;
    return 0;
}
