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
        cout<<"��ᯥ��� ��ନ� ��� �� ३� � ����஬  "<<NomerReisa<<endl;
      }
    }

    void Voditel()
    {
        for(; ;)
        {
            this_thread::sleep_for(chrono::milliseconds(550));
            if(NomerReisa == 4 || NomerReisa ==8)
                  cout<<"              ����⥫� ��७��ࠢ�� �� ६��� ���  = "<<NomerReisa<<endl;

            if(NomerReisa == 12){
                cout<<"�� ��� �믮�����."<<endl;
                break;
            }
        }
    }
};

int AvtoBaza::NomerReisa=0;

void functionZadanie1()
{

cout<< "=========================================================================" <<endl;
cout<< "                             ����� 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "����� �� ����������⢨� ����� ����ᠬ� � ��⮪���. ���ࠡ���� ��⥬�" <<endl;
cout << "'��⮡���'.��ᯥ��� ��।���� ��� �� ����� ����� ����⥫ﬨ" <<endl;
cout << "� �����砥� ��� �⮣� ?��⮬�����. ����⥫� ����� ᤥ���� ��� �� ६���." <<endl;
cout << "��ᯥ��� ����� ����࠭��� ����⥫� �� ࠡ���." <<endl;
cout << "����⥫� ������ �⬥�� � �믮������ ����." <<endl;
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



