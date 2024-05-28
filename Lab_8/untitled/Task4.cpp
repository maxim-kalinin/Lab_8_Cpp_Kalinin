#include "Task4.h"

#include <fstream>
#include <vector>


bool isInside(const std::string & str, char c)
{
    return str.find(c) != std::string::npos;
}


void functionZadanie4()
{

cout<< "=========================================================================" <<endl;
cout<< "                             ����� 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "�ணࠬ�� �������� ��� �� �++ (�⥭�� �ந�������� �� 䠩�� � �।����������," <<endl;
cout << "�� �� ����⢨⥫쭮 ��� �� �++ � �� Java ��� 祣� ���������)." <<endl;
cout << "�ணࠬ�� ������ �஢���� ᪮���������� �� ���, �. �. �஢����, �� ��" <<endl;
cout << "���뢠�騥 � ����뢠�騥 䨣��� ᪮��� �� ����, ����� �� ���� �窨" <<endl;
cout << " � ����⮩. �ࠢ��쭮 �� ��ଫ��� �������ਨ." <<endl;
cout<<endl;
cout<<"��襭��:"<<endl;
cout<<endl;
cout<<"���ࢠ ᮧ���� 䠩� � �ணࠬ��� PROGRAM.CPP. ��⮬ ������ ������ 䠩��."<<endl;
cout<<"� 䠩� ��ࠢ���� �ணࠬ�� ᫥���饣� ����:"<<endl;
cout<<endl;
cout << "#include <stdio.h>" << std::endl;
cout << "" << endl;
cout << "int main()" << endl;
cout << "{" << endl;
cout << "   std::cout<< \"Hello World\" <<endl;" << std::endl;
cout << "" << endl;
cout << "   return 0;" << endl;
cout << "}" << endl;
cout << endl <<endl;
cout <<"�஢���� ������ �ணࠬ��:"<< endl;
cout << endl;


std::ofstream out;
       out.open("PROGRAM.CPP");

 if (out.is_open())
  {
    out << "#include <stdio.h>" << std::endl;
    out << "" << std::endl;
    out << "int main()" << std::endl;
    out << "{" << std::endl;
    out << "   std::cout<< \"Hello World\" <<endl;" << std::endl;
    out << "" << std::endl;
    out << "   return 0;" << std::endl;
    out << "}" << std::endl;
    out << std::endl;
  }

//---------------------------------------------------------------------------

  std::vector<string> vect;
  std::string line;

  fstream fin1("PROGRAM.CPP", fstream::in);


 while (fin1 >> line)
 {
    if(line == "#include")
    {
        cout<<"1. � �ணࠬ�� ��������� ��४⨢� #include"<<endl;
        cout<<" ����� �ணࠬ�� ����ᠭ� �� �몥 �++"<<endl;
        break;
    }
    if(line != "#include") cout<<"�ணࠬ�� ����ᠭ� �� �� �++"<<endl;
 }

 fin1.close();

 cout<<endl<<endl;

//----------------------------------------------------------------------------------

 cout<< "2. ������ ������ ���-�� �����஢ ��砫� � ����砭�� �ணࠬ��."<<endl;
 cout<< " �.� ������⢮ 䨣���� ᪮���  { }" <<endl;

 fstream fin2("PROGRAM.CPP", fstream::in);
 int count=0;

   while (fin2 >> line)
    {
      if(line == "{") count++;
      if(line == "}") count++;
    }

 fin2.close();

 cout<< " ������⢮ �����஢  { }  ��᫥ ������ ࠢ��:  " << count <<endl;
 cout<< " �� ᮮ⢥����� �ࠢ��쭮�� ����ᠭ�� �ணࠬ��." <<endl;

 cout<<endl<<endl;

//----------------------------------------------------------------------------------

 cout<< "3. � �ணࠬ�� ����� 䨣���� ᪮���, ��� ��ப�." <<endl;
 cout<< " ������ ������ ᨬ����� (�����஢) �����襭�� �������  -  ;" <<endl;


 fstream fin3("PROGRAM.CPP", fstream::in);;
 bool bl;
 count=0;

 while (fin3 >> line)
 {
     bl = isInside(line, ';');
     if(bl == true) count++;
 }

 fin3.close();

 cout<< " ������⢮ �����஢ �����襭�� �������  -  ;  ��᫥ ������ ࠢ��:  "<< count <<endl;
 cout<< " �� ᮮ⢥����� �ࠢ��쭮�� ����ᠭ�� �ணࠬ��." <<endl;

 cout<<endl<<endl<<endl;
}
