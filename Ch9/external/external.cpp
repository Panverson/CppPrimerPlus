#include <iostream>
using namespace std;

double warming = 0.3;
void update(double);
void local();

int main() {
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degrees.\n";
    local();    // 自动隐藏同名的全局变量
    cout << "Global warming is " << warming << " degrees.\n";
    return 0;
}
