#include "Task1.h"

#include <thread>
#include <chrono>

class AvtoBaza
{
private:
   int ZayavkaNaReis;
   int ZayavkaNaRemont;

public:
   static int NomerReisa;

    void Dispether()
    {
      for(int i=0; i<12; i++)
      {
        this_thread::sleep_for(chrono::milliseconds(600));
        NomerReisa++;
        cout<<"Диспетчер оформил заявку на рейс с номером  "<<NomerReisa<<endl;
      }
    }

    void Voditel()
    {
        for(; ;)
        {
            this_thread::sleep_for(chrono::milliseconds(550));
            if(NomerReisa == 4 || NomerReisa ==8)
                  cout<<"              Водитель перенаправил на ремонт заявку  = "<<NomerReisa<<endl;

            if(NomerReisa == 12){
                cout<<"Все заявки выполнены."<<endl;
                break;
            }
        }
    }
};

int AvtoBaza::NomerReisa=0;

void functionZadanie1()
{

cout<< "=========================================================================" <<endl;
cout<< "                             Задача 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Задача на взаимодействие между классами и потоками. Разработать систему" <<endl;
cout << "'Автобаза'.Диспетчер распределяет заявки на Рейсы между Водителями" <<endl;
cout << "и назначает для этого ?Автомобиль. Водитель может сделать заявку на ремонт." <<endl;
cout << "Диспетчер может отстранить Водителя от работы." <<endl;
cout << "Водитель делает отметку о выполнении Рейса." <<endl;
cout<<endl<<endl;

    AvtoBaza *dispetcher = new AvtoBaza;
    AvtoBaza *voditel = new AvtoBaza;

    thread th1([&](){
        dispetcher->Dispether();
    });

    thread th2([&](){
        voditel->Voditel();
    });

    th1.join();
    th2.join();

cout<<endl<<endl<<endl;
}



