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
cout<< "                             ����� 5.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "����������� ����� ��� ࠡ��� � ����訬� 楫묨 �᫠��." <<endl;
cout << "����� ������ �।��⠢���� ���� �������� �㭪樮���쭮��, �ࠪ��� ���" <<endl;
cout << "���஥���� 楫��᫥���� ⨯�� ������ (int, long � ⠪ �����)." <<endl;

cout<<endl;

Matematik operation;

cout<< "������ ᫮����� ��� ����� Matematik   operation.sum(12345, 6789)" <<endl;
cout<< "�������:   " <<operation.sum(12345, 6789);
cout<<endl<<endl;

cout<< "������ ���⠭�� ��� ����� Matematik   operation.sub(12345, 6789)" <<endl;
cout<< "�������:   " <<operation.sub(12345, 6789);
cout<<endl<<endl;

cout<< "������ 㬭������ ��� ����� Matematik   operation.multiply(123, 678)" <<endl;
cout<< "�������:   " <<operation.multiply(123, 678);
cout<<endl<<endl<<endl;
}


















