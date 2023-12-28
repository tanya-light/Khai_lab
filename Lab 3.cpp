

 #include <iostream>
 #include <cmath>
 using namespace std;
 
 
 void task2_34 () {
     cout << "Lab 3 Task 2 Variant 34" << endl << endl;
     float x, y, r;
      cout << "x"<<" "<< "y"<< " " << "r" << " "<< endl;
      cin >> x>> y>> r;
   
     if (r > 0)
     { // proveryaem popadaet li x, y v treugolnick?
        //treugolnick ravnobedrennyi
        float xr, yr;
        //xr i yr - koordinaty, kotorye sootvetstvuet r
        xr = yr = r/sqrt (2);
        
        if (x <= 0 && y <= 0)
        {
            x = abs (x);
            y = abs (y);
            if (x >= 0 && x <= xr)
            { 
                if (y >= x && y <= 2*yr - x)
                {
                   cout << "Точка попадає у потрібний нам трикутник"<< endl; 
                }
                else cout << "Точка не попадає у потрібний нам трикутник (#3)" << endl;
            } 
            else cout << "Точка не попадає у потрібний нам трикутник (#2)" << endl;
        }
        else cout << "Точка не попадає у потрібний нам трикутник (#1)" << endl;
        
        
        // proveryaem popadaet li x, y v okruzhnost' s r R?
        if (x >= xr && y >= 0 && y <= 2*yr)
        {
             if ((x - xr) * (x - xr) + (y - yr) * (y - yr) <= r * r)
             {
                //cout << "Test1: in circle!" << endl;
                
                if (y >= yr - (x-xr) && y <= yr + (x-xr))
                {
                    cout << "Точка попадає у потрібний нам сектор круга"<< endl;
                }
                else cout << "Точка не попадає у потрібний нам сектор круга (#3)"<< endl;
             }
            else cout << "Точка не попадає у потрібний нам сектор круга (#2)"<< endl;
        }
        else cout << "Точка не попадає у потрібний нам сектор круга (#1)"<< endl;
     }
     else cout << "По-перше, радіус повинен бути більшим від нуля"<< endl;
     
     cout << endl << endl;
   
 }
 
 
 void task_if16()
 {
     /* If16. Дано три змінні дійсного типу: A, B, C. Якщо їх значення впорядковані за
зростанням, то подвоїти їх; в іншому випадку замінити значення кожної змінної на
протилежне. Вивести нові значення змінних A, B, C.*/
  cout << "Task If16" << endl;
    
    float A, B, C;
    cout << "Дано три змінні дійсного типу: A, B, C: " << endl;
    cin >> A >> B >> C;
    if (A < B && B < C){
        A *= 2;
        B *= 2;
        C = C * 2;
    }
    else {
         A *= -1;
        B *= -1;
        C = C * -1;
       
    }
    
    cout << "Результат: " << A << " " << B << " " << C << " " << endl;
 }
 
 
 
 int main ()
 {
    task2_34();
    
    task_if16();

    return 0;
     
}




