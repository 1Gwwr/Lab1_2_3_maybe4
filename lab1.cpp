#include <iostream>

using namespace std;
int main() {
    int* n;
    n = new int;
    *n = 5;
    cout <<"Memory address : "<<n <<endl;
    cout <<"Memory address value : "<<*n <<endl;
    delete n;
    return 0;
}
