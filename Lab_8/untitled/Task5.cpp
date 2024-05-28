#include "Task5.h"

class Matematik
{
  public:

    double sum(signed long long val1, signed long long val2)
    {
       return val1 + val2;
    }


    double sub(signed long long val1, signed long long val2)
    {
       return val1 - val2;
    }

    double multiply(signed long long val1, signed long long val2)
    {
       return val1 * val2;
    }

};

void functionZadanie5()
{

cout<< "=========================================================================" <<endl;
cout<< "                             Задача 5.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Реализовать класс для работы с большими целыми числами." <<endl;
cout << "Класс должен предоставлять весь комплекс функциональности, характерный для" <<endl;
cout << "встроенных целочисленных типов данных (int, long и так далее)." <<endl;

cout<<endl;

Matematik operation;

cout<< "Операция сложения для класса Matematik   operation.sum(12345, 6789)" <<endl;
cout<< "Результат:   " <<operation.sum(12345, 6789);
cout<<endl<<endl;

cout<< "Операция вычитания для класса Matematik   operation.sub(12345, 6789)" <<endl;
cout<< "Результат:   " <<operation.sub(12345, 6789);
cout<<endl<<endl;

cout<< "Операция умножения для класса Matematik   operation.multiply(123, 678)" <<endl;
cout<< "Результат:   " <<operation.multiply(123, 678);
cout<<endl<<endl<<endl;
}


















