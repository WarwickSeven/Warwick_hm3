#include <iostream>

using std::cout;
using std::cin;
using std::endl;

extern const int a;
extern const int b;
extern const int c;
extern const int d;

int main()
{
    float x = a*(b+(float(c)/d));                       //ДЗ номер 1 и 4
    //float x = a*(b+(static_cast <float> (c)/d));
    cout << x << endl;
    
    
    int e, f;                                           //ДЗ номер 2
    cout << "Введие целое число: ";
    cin >> e;
    f = (e <= 21) ? 21-e : (e-21)<<1;
    cout << "ну ты и ввел конечно: " << f << endl;
    
    
    int arrm[3][3][3] = { }, * pArr = nullptr;          //ДЗ номер 3
    pArr = &arrm[0][0][0];
    pArr += 13;
    *pArr = 7; // записываем число 7 в центральную ячейку массива
    
    
    cout << "2D-визуализация массива: " << endl;
    cout << "1 слой: "<< endl;
    cout << arrm[0][0][0] << " | " << arrm[0][0][1] << " | " << arrm[0][0][2] << endl;
    cout << arrm[0][1][0] << " | " << arrm[0][1][1] << " | " << arrm[0][1][2] << endl;
    cout << arrm[0][2][0] << " | " << arrm[0][2][1] << " | " << arrm[0][2][2] << endl;
    cout << "2 слой: "<< endl;
    cout << arrm[1][0][0] << " | " << arrm[1][0][1] << " | " << arrm[1][0][2] << endl;
    cout << arrm[1][1][0] << " | " << arrm[1][1][1] << " | " << arrm[1][1][2] << endl;
    cout << arrm[1][2][0] << " | " << arrm[1][2][1] << " | " << arrm[1][2][2] << endl;
    cout << "3 слой: "<< endl;
    cout << arrm[2][0][0] << " | " << arrm[2][0][1] << " | " << arrm[2][0][2] << endl;
    cout << arrm[2][1][0] << " | " << arrm[2][1][1] << " | " << arrm[2][1][2] << endl;
    cout << arrm[2][2][0] << " | " << arrm[2][2][1] << " | " << arrm[2][2][2] << endl;
    
    return 0;
}
