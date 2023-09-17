#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int V, U, T1, T2;
    cout << "Скорость лодки:"<< endl; 
    cin >> V;
    cout << "Скорость течения:"<< endl;
    cin >> U;
    cout << "Время в озере:"<< endl;
    cin >> T1;
    cout << "Время против течения:"<< endl;
    cin >> T2;
    int S_1 = T1 * V;
    cout << "Sчо: "<< S_1 << endl;
    int V_2 = V - U;
    cout << "Vчпт: "<< V_2<< endl;
    int S_2 = T2 * V_2;
    cout << "Sчзт: "<< S_2<< endl;
    return 0;
}