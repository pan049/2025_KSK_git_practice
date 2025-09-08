#include <bits/stdc++.h>
using namespace std;
// test
int M;
int x;

void input() {
    cin >> M;
}

void calc() {
    x=24-M;
    x+=24;
}

void output() {
    cout << x << endl;
}

main() {
    input();
    calc();
    output();
}
