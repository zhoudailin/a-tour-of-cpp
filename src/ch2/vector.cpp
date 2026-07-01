#include <iostream>
using namespace std;

struct Vector {
    double *elem;
    int sz;
};

void vector_init(Vector &v, int s) {
    v.elem = new double[s];
    v.sz = s;
}

double read_and_sum(int s) {
    Vector v;
    vector_init(v, s);
    for (int i = 0; i < v.sz; i++) {
        cin >> v.elem[i];
    }
    double sum = 0;
    for (int i = 0; i < v.sz; i++) {
        sum += v.elem[i];
    }
    return sum;
}

int main() {
    cout << read_and_sum(5) << endl;
    return 0;
}
