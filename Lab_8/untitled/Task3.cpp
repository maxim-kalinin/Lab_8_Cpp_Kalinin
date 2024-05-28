#include "Task3.h"


template <class T> class CustomList
{
private:
    // ����饥 ������⢮ ����⮢ � ᯨ᪥
    int current_size;
    // �����⥫� �� ������ ᯨ᪠
    T* elements;
protected:
    // ��⠭�������� ���� ࠧ��� ᯨ᪠, ࠢ�� <new_size>
    void set_size(int new_size) {
        current_size = new_size;
    }
    // �����稢��� ࠧ��� ᯨ᪠ �� 1
    void inc_size() {
        current_size++;
    }
public:
    // ���������
    CustomList();

    // ��������
    ~CustomList();

    // ����砥� ࠧ��� ᯨ᪠
    int size() const {
        return current_size;
    }

    // �������� ���� ����� <element> � ����� ᯨ᪠
    void add(T const& element);

    // ����砥� ����� ᯨ᪠ � �������� ����樨 (�� ��������� ������� <index>)
    T get(int index) const {
        T* elm = this->p_get(index);
        return *elm;
    }

    // ������ ����� � �������� ����樨 ᯨ᪠
    bool remove(int index);

    // ����砥� 㪠��⥫� �� ����� � �������� ����樨 (�� ��������� ������� <index>)
    T* p_get(int index) const;

    // ����砥� 㪠��⥫� �� ��᫥���� ����� ᯨ᪠
    T* p_last() const;

    // ����砥� 㪠��⥫� �� ���� ����� ᯨ᪠
    T* p_first() const;

    // ������ �� ������ �� ᯨ᪠, ᮪��� ��� ࠧ��� �� 0
    void clear();
};

//-------------------------------------------------------------------------------

// ���������
template <class T> CustomList<T>::CustomList() {
    set_size(0);
    elements = nullptr;
}

// ��������
template <class T> CustomList<T>::~CustomList() {
    if (elements != nullptr && size() > 0) {
        delete[] elements;
        elements = nullptr;
    }
    set_size(0);
}

// �������� ���� ����� <element> � ����� ᯨ᪠
template <class T> void CustomList<T>::add(T const& element) {
    int old_size = size();
    inc_size();

    T* new_elements = new T[size()];
    if (old_size > 0) {
        for (int i = 0; i < old_size; i++) {
            new_elements[i] = elements[i];
        }
    }
    new_elements[current_size - 1] = element;

    if (old_size > 0) {
        delete[] elements;
    }
    elements = new_elements;
}


// ����砥� 㪠��⥫� �� ��᫥���� ����� � ᯨ᪥
template <class T> T* CustomList<T>::p_last() const {
    if (size() == 0) {
        return nullptr;
    }

    if (size() == 1) {
        return &elements[0];
    }

    return &elements[current_size - 1];
}

// ����砥� 㪠��⥫� �� ���� ����� � ᯨ᪥
template <class T> T* CustomList<T>::p_first() const {
    if (current_size == 0) {
        return nullptr;
    }

    return &elements[0];
}

// ��頥� ᯨ᮪, 㤠��� �� ������
template <class T> void CustomList<T>::clear() {
    if (current_size == 0) {
        return;
    }

    delete[] elements;
    elements = nullptr;
    current_size = 0;
}


// ����砥� 㪠��⥫� �� ����� � �������� ����樨 (�� ��������� ������� index)
template <class T> T* CustomList<T>::p_get(int index) const {
    if (current_size == 0 || index < 0 || index >= current_size) {
        return nullptr;
    }

    return &elements[index];
}


// ������ ����� � �������� ����樨 ᯨ᪠
template <class T> bool CustomList<T>::remove(int index) {
    if (size() == 0) {
        return false;
    }

    if (index < 0 || index >= size()) {
        return false;
    }

    if (size() == 1 && index == 0) {
        this->clear();
        return true;
    }

    int new_size = size() - 1;
    T* new_elements = new T[new_size];
    int current_index = 0;
    while (current_index < index) {
        new_elements[current_index] = elements[current_index];
        current_index++;
    }
    for (int i = index + 1; i < size(); i++) {
        new_elements[current_index] = elements[i];
        current_index++;
    }

    delete[] elements;

    elements = new_elements;
    current_size = new_size;

    return true;
}







void functionZadanie3()
{

cout<< "=========================================================================" <<endl;
cout<< "                             ����� 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "������� �ணࠬ��, ����� ������ �믮����� ᫥���騥 ����樨:" <<endl;
cout << "1. ��������� ����吝� ����楢�� ᯨ᮪." <<endl;
cout << "2. ������ ���������� ᯨ᪠." <<endl;
cout << "3. ������ ��ᬮ�� ᯨ᪠." <<endl;
cout << "4. ������ 㤠����� ����⮢ ᯨ᪠." <<endl;
cout<<endl;
cout<<"��襭��:"<<endl;
cout<<endl;
cout<<"���������� ����⮢ � ᯨ᮪:"<<endl;
cout<<"spisok.add(\"qwert\");"<<endl;
cout<<"spisok.add(\"asdfg\");"<<endl;
cout<<"spisok.add(\"zxcvb\");"<<endl;
cout<<endl;
cout<<"����祭�� ����⮢ �� ᯨ᪠:"<<endl;
cout<<"spisok.get(i);"<<endl;
cout<<endl;



CustomList<std::string> spisok;

   spisok.add("1. qwert");
   spisok.add("2. asdfg");
   spisok.add("3. zxcvb");

   for(int i=0; i<3; i++)
      cout <<"     "<< spisok.get(i) << endl;

cout<<endl;
cout<<"������ ����� � �������� ����樨 ᯨ᪠:"<<endl;
cout<<"spisok.remove(i);"<<endl;
cout<<endl;

spisok.remove(1);

for(int i=0; i<2; i++)
   cout <<"     "<< spisok.get(i) << endl;


cout<<endl;
cout<<"������ �� ������ �� ᯨ᪠:"<<endl;
cout<<"spisok.clear();"<<endl;

cout<<endl<<endl<<endl;

}
