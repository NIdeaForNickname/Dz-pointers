#include <iostream>
#include <cmath>

using namespace std;
int main(){
    // task1 

    int a = 1, b = 1;
    int *ap = &a, *bp = &b;

    cout << "Diff in bytes: " << abs((bp-ap)*4) << "\n"; // int = 4 bytes


    // task2
    cout << "--------------------" << "\n";


    int c = 2;
    int *cp = &c;

    cout << pow(*cp, 2) << "\n";
    cout << pow(*cp, 3) << "\n";
    cout << pow(*cp, 4) << "\n";
    

    // task3
    cout << "--------------------" << "\n";

    int a1 = 2, b1 = 3;
    int *a2 = &a1, *b2 = &b1;
    int **a3 = &a2, **b3 = &b2;

    cout << **a3 + **b3 << "\n";


    // task4
    cout << "--------------------" << "\n";


    int c1, *c2 = &c1, **c3 = &c2, ***c4 = &c3;
    int d1, *d2 = &d1, **d3 = &d2, ***d4 = &d3;

    cout << "Weight: ";
    cin >> ***c4;
    cout << "Height: ";
    cin >> ***d4;
    
    int ans = (***d4 - 110) - ***c4;

    if (ans > 0){
        cout << "Need to gain: " << abs(ans) << " kg\n";
    } else if (ans < 0){
        cout << "Need to loose: " << abs(ans) << " kg\n";
    } else {
        cout << "Perfect Weight!\n";
    }


    // task5
    cout << "--------------------" << "\n";


    int e1, *e2 = &e1, **e3 = &e2, ***e4 = &e3, ****e5 = &e4, *****e6 = &e5;

    cout << ****e6 << "\n";
    cout << ***e6 << "\n";
    cout << **e6 << "\n";
    cout << *e6 << "\n";
    cout << e6 << "\n";
}