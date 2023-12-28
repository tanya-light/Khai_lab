

 #include <iostream>
 #include <cmath>
 using namespace std;
 
 float fac (int n) {
     int i, res;
     res = 1;
     for (i = 1; i <= n; i++) {
        res = i * res;
     }
     return res;
 }
 
 
 void task_4 () {
     cout << "Lab 5 Task 4 Variant 22" << endl << endl;
     float x;
     int k, n;
     cout << "x"<<" " << "n"<< endl;
     cin >> x>> n;
    if (n >= 1) {
        float y, x1, x2;
        y = 1;
        for (k = 1; k <= n; k++ ) {
            x1 = pow (1 - x, k+1 ) + 1;
            int i;
            /*x2 = 1;
            if (k > 1) {
                for (i = 1; i <= k - 1; i++) {
                    x2 = i * x2;
                }
            }*/ 
            x2 = fac (k - 1);
            //cout << x1 << " " << x2 << " " <<  (x1 / x2) << " " << endl;
            y = y * (x1 / x2);
            //cout << "y="<<y << endl;
        } 
        cout << "y = " << y << endl;
    }
    else {
        cout << "Ваше n - неверное значение"<< endl;
    }
     
       
     
     cout << endl << endl;
   
 }
 
void task_21(){
    cout << "Lab 5 Task 21 Variant 22" << endl << endl;
     float x, y, x1, x2;
     int k, n;
     cout << "x"<<" " << "n"<< endl;
     cin >> x>> n;
    for (k = 0; k <= n; k++) {
        x1 = pow (-1, k) * pow (x, 1/2+ k);
        x2 = fac (1 + 2*k);
        y = y + (x1 / x2);
    }
    y = -0.5 + pow (y, x);
    cout << "y = " << y<< endl;
     cout << endl << endl;
   
 }
    

 
 
 int main ()
 {
    task_4();
    task_21();

    return 0;
     
}





