#include "Task2.h"


class Brutforce
{
private:
    char chr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m',
                'n','o','p','q','r','s','t','u','v','w','x','y','z'};
public:

    void Start(std::string str)
    {
        std::string rezult;

        int j=0;

        for(int k=0; k<4; k++)
        {
          for(int i=0; i<26; i++)
          {
            if(str[j] == chr[i])
            {
                rezult[j] = str[j];
                j++;
            }
          }
        }

        cout<<"Вы ввели слово:  ";
        for(int i=0; i<4; i++)
            cout << rezult[i];

    } // end Search

};


void functionZadanie2()
{

cout<< "=========================================================================" <<endl;
cout<< "                             Задача 2.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Требуется написать свой класс Bruteforce т. е. пользователь вводит какой-то" <<endl;
cout << "пароль и программа методом перебора всех вариантов находит этот пароль." <<endl;


Brutforce brutforce;

    std::string str = "grut";

    brutforce.Start(str);

    cout<<endl;

cout<<endl<<endl<<endl;

}
