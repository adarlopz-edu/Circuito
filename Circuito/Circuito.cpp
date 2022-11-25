#include <iostream>

using namespace std;

int main() {
    int x, cr{}, ve{};
    int r1, r2, r3, r4, r5, r6, r7;
    double rt, rm1, rm, it, v1, v2, v3, vm, v7;
    double i4, i5, i6;
    cout << "Producto Integrador Circuito Mixto\n";
    cout << "Lopez Lopez Brandon Adair\n";
    cout << endl;
    cout << "Escribe la cantidad de resistencias: ";
    cin >> cr;

    if (cr > 7) {
        cout << "Introduce una cantidad menor de 7!";
    }
    else {
        cout << "Introduce el valor de R1: ";
        cin >> r1;
        cout << "Introduce el valor de R2: ";
        cin >> r2;
        cout << "Introduce el valor de R3: ";
        cin >> r3;
        cout << "Introduce el valor de R4: ";
        cin >> r4;
        cout << "Introduce el valor de R5: ";
        cin >> r5;
        cout << "Introduce el valor de R6: ";
        cin >> r6;
        cout << "Introduce el valor de R7: ";
        cin >> r7;

        rm1 = pow(r4, -1) + pow(r5, -1) + pow(r6, -1);
        rm = pow(rm1, -1);
        rt = r1 + r2 + r3 + rm + r7;
        cout << "Resistencia Total: " << rt << "Ohms" << endl;

        cout << endl;

        cout << "Escribe el voltaje de entrada (V): ";
        cin >> ve ;

        it = ve / rt;
        cout << "Intensidad Total: " << it << "A" << endl;

        cout << endl;

        v1 = it * r1;
        v2 = it * r2;
        v3 = it * r3;
        vm = it * rm;
        v7 = it * r7;
        cout << "V1 = " << v1 << "V" << endl;
        cout << "V2 = " << v2 << "V" << endl;
        cout << "V3 = " << v3 << "V" << endl;
        cout << "VM = " << vm << "V" << endl;
        cout << "V7 = " << v7 << "V" << endl;

        cout << endl;

        i4 = vm / r4;
        i5 = vm / r5;
        i6 = vm / r6;
        cout << "I4 = " << i4 << "A" << endl;
        cout << "I5 = " << i5 << "A" << endl;
        cout << "I6 = " << i6 << "A" << endl;

    }
}