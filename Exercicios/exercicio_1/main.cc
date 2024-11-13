#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Insira um numero inteiro: ";
    cin >> n1;
    cout << "Insira outro numero inteiro: ";
    cin >> n2;
    cout << "Insira o ultimo numero inteiro: ";
    cin >> n3;

    int media = (n1 + n2 + n3) / 3;

    cout << "A media é = " << media;

    return 0;
}
