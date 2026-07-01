#include<iostream>
#include <variant>
using namespace std;
enum class Type {ptr,num};
struct Entry {
    string name;
    variant<int,double> val;
};
int main() {

}