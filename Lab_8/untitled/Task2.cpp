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

        cout<<"�� ����� ᫮��:  ";
        for(int i=0; i<4; i++)
            cout << rezult[i];

    } // end Search

};


void functionZadanie2()
{

cout<< "=========================================================================" <<endl;
cout<< "                             ����� 2.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "�ॡ���� ������� ᢮� ����� Bruteforce �. �. ���짮��⥫� ������ �����-�" <<endl;
cout << "��஫� � �ணࠬ�� ��⮤�� ��ॡ�� ��� ��ਠ�⮢ ��室�� ��� ��஫�." <<endl;


Brutforce brutforce;

    std::string str = "grut";

    brutforce.Start(str);

    cout<<endl;

cout<<endl<<endl<<endl;

}
