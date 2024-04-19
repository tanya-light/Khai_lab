#include <iostream>
#include <cmath>
using namespace std;
const int M=10, N=20;/*введення змінних*/

void get_matr(int in_matr[M][N], int & in_m, int & in_n)/*робимо заготовку під матрицю*/ 
{
    do /*починається цикл, у якому виводимо розмір матриці та її умови, також обчислюємо суму елементів матриці.*/
    {
        cout << "Enter rows count (2-20):";
        cin >> in_m;
        cout << "Enter columns even count (= Rows ) (2-20):";
        cin >> in_n;
    }   
    while (in_n < 2 || in_n > N || in_m < 2 || in_m > M || in_n%2 != 0);
    
    
    cout << "Enter elements:"<< endl;
    for (int i = 0; i < in_m; i++)
    {
        for (int j = 0; j < in_n; j++)
        {
            cin >> in_matr[i][j];
        }
    }
        
        
}

int matr_sum (int in_matr[M][N], int & in_m, int & in_n)
{
    int sum_matr = 0;
    for (int j = 0; j < in_n; j=j+2)
    {
        for (int i = 0; i < in_m; i++)
        {
            sum_matr = sum_matr + in_matr[i][j];
            
        }
    }
    return sum_matr; /*кінець циклу*/
}

void task()
{
    int matr1[M][N];
    int row, col;
    get_matr(matr1, row, col);
    int sum = matr_sum (matr1, row, col);
    cout << "Sum = " << sum; /*виведення суми*/
}

int main()
{
    task();
    
    return 0;
}
    
