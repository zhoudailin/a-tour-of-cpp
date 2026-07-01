#include<iostream>
using namespace std;

enum class Color { red, green, blue };

enum class Traffic_light { green, yellow, red };

enum Traditional_Color { red, green, yellow, blue };

int main() {
    cout << red << endl;
    Color c = Color::red;
    Traffic_light light = Traffic_light::red;
    cout << static_cast<int>(c) << " " << static_cast<int>(light) << endl;
    return 0;
}
