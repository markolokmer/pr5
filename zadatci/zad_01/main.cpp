#include <iostream>

using namespace std;

void zbroj(double a,double b) {
    cout << a+b << endl;
}
void razlika(double a,double b) {
    cout << a-b << endl;
}
void podijeliti(double a,double b) {
    cout << a/b << endl;
}
void pomnoziti(double a,double b) {
    cout << a*b << endl;
}





int main()
{
    double a,b;
    cout << "Unesi dva broja: ";
    cin >> a;
    cin >> b;

    zbroj(a,b);
    razlika(a,b);
    pomnoziti(a,b);
    podijeliti(a,b);




    return 0;
}
