
#include <iostream>
#include <cmath>
using namespace std;

// Структура времени
struct TTime{
    int Hour, Min, Sec;
};

// Добавление к часам
void AddHour(TTime* T, int N)
{
    if (T->Hour < 0 || T->Hour > 23)
    {
        cout << "Неверное значение часа. Пропуск!" << endl; 
    }
    
    // Инкремент часов
    T->Hour += N;
    
    // Если больше 23 часов, то ищем час следующих суток
    if (T->Hour > 23)
    {
        int n = T->Hour / 24;
        T->Hour -= 24 * n;
    }
}


void Task1_Param81()
{
    TTime Time;
    int N;

    cout << "Введите текущий час:" << endl;
    cin >> Time.Hour;
    
    for (int i = 1; i <= 5; i++)
    {
        cout << "Введите смещение времени в часах (" << i << " шаг): " << endl;
        cin >> N;
        
        AddHour(&Time, N);
        cout << "Новое время: "<< Time.Hour << "ч" << endl << endl;
    }
}


// Структура типа Точка
struct TPoint
{
  float x, y;  
};


float CalcVectorLen(TPoint A1, TPoint A2)
{
    return sqrt(pow(A2.x - A1.x, 2) + pow(A2.y - A1.y, 2));
}

// ЗАДАЧА 2, Begin17
void Task2_Begin17()
{
    TPoint A, B, C;
    
    cout << "Введите x ; y точки A:" << endl;
    cin >> A.x;
    cin >> A.y;
    
    cout << "Введите x ; y точки B:" << endl;
    cin >> B.x;
    cin >> B.y;
    
    cout << "Введите x ; y точки C:" << endl;
    cin >> C.x;
    cin >> C.y;
    
    int lenAC = CalcVectorLen(A, C);
    int lenBC = CalcVectorLen(B, C);
    
    cout << "Длина AC = " << lenAC << endl;
    cout << "Длина BC = " << lenBC << endl;
    cout << "AC + BC  = " << (lenAC + lenBC) << endl << endl;
}



// Структура типа Место
struct TPlace
{
  int x, y;
};


// Проверка размещения на доске
bool CheckPlace(TPlace P)
{
    return P.x >= 1 && P.y >= 1 && P.x <= 8 && P.y <= 8;
}

// Проверка ходит ли конь с P1 на P2
bool CanMove(TPlace P1, TPlace P2)
{
    int dx = abs(P2.x - P1.x);
    int dy = abs(P2.y - P1.y);
    
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

void Task2_Boolean40()
{
    TPlace P1, P2;
    
    cout << "Введите x;y расположения Коня на шахматной доске (1-8):" << endl;
    cin >> P1.x;
    cin >> P1.y;
    if (!CheckPlace(P1))
    {
        cout << "Неверное расположение! Пока!" << endl << endl;
        return;
    }
    
    cout << "Введите x;y движения Коня на шахматной доске (1-8):" << endl;
    cin >> P2.x;
    cin >> P2.y;
    if (!CheckPlace(P2))
    {
        cout << "Неверное расположение! Пока!" << endl << endl;
        return;
    }
    
    if (CanMove(P1, P2)) cout << "Ход конём!" << endl << endl;
    else cout << "Конь не ходит." << endl << endl;

}



int main()
{
    // ЗАДАЧА 1, Param81
    Task1_Param81();
    
    // ЗАДАЧА 2, Begin17
    Task2_Begin17();

    // ЗАДАЧА 2, Boolean40
    Task2_Boolean40();
    
    return 0;
}


