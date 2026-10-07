#include <iostream>
#include <cmath>

using namespace std;

void jeParan(int a) {
    if(a%2==0) cout << "broj je paran " << endl;
        else cout << "broj je neparan" << endl;

}
void apsolutnaVrijednost(int a) {
cout << abs(a) << endl;
}
void kvadrat(int a) {
cout << a*a << endl;
}
void ispisiAnalizu(int a) {
cout << a << endl;
}
int main()
{
    int a;
    cout << "Unesi broj: ";
    cin >> a;


    if(a<-100 || a>100) {
        cout << "Unesi broj veæi od -100 i manji od 100: ";
        cin >> a;
    }

    jeParan(a);
    apsolutnaVrijednost(a);
    kvadrat(a);


    return 0;
}
