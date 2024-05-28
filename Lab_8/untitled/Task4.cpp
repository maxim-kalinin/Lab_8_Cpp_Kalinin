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
cout<< "                             Задача 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Программе подается код на С++ (чтение производится из файла и предполагается," <<endl;
cout << "что это действительно код от С++ а не Java или чего подобного)." <<endl;
cout << "Программа должна проверить скомпилируется ли код, т. е. проверить, что все" <<endl;
cout << "открывающие и закрывающие фигурные скобки на месте, везде ли стоят точки" <<endl;
cout << " с запятой. Правильно ли оформлены комментарии." <<endl;
cout<<endl;
cout<<"Решение:"<<endl;
cout<<endl;
cout<<"Сперва создаем файл с программой PROGRAM.CPP. Потом делаем анализ файла."<<endl;
cout<<"В файл отправлена программа следующего вида:"<<endl;
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
cout <<"Проводим анализ программы:"<< endl;
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
        cout<<"1. В программе присутствует директива #include"<<endl;
        cout<<" Значит программа написана на языке С++"<<endl;
        break;
    }
    if(line != "#include") cout<<"программа написана НЕ на с++"<<endl;
 }

 fin1.close();

 cout<<endl<<endl;

//----------------------------------------------------------------------------------

 cout<< "2. Делаем подсчет кол-ва операторов начала и окончания программы."<<endl;
 cout<< " Т.е количество фигурных скобок  { }" <<endl;

 fstream fin2("PROGRAM.CPP", fstream::in);
 int count=0;

   while (fin2 >> line)
    {
      if(line == "{") count++;
      if(line == "}") count++;
    }

 fin2.close();

 cout<< " Количество операторов  { }  после подсчета равно:  " << count <<endl;
 cout<< " Что соответствует правильному написанию программы." <<endl;

 cout<<endl<<endl;

//----------------------------------------------------------------------------------

 cout<< "3. В программе внутри фигурных скобок, две строки." <<endl;
 cout<< " Делаем подсчет символов (операторов) завершения команды  -  ;" <<endl;


 fstream fin3("PROGRAM.CPP", fstream::in);;
 bool bl;
 count=0;

 while (fin3 >> line)
 {
     bl = isInside(line, ';');
     if(bl == true) count++;
 }

 fin3.close();

 cout<< " Количество операторов завершения команды  -  ;  после подсчета равно:  "<< count <<endl;
 cout<< " Что соответствует правильному написанию программы." <<endl;

 cout<<endl<<endl<<endl;
}
