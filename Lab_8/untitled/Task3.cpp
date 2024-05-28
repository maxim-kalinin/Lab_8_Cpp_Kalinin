#include "Task3.h"


template <class T> class CustomList
{
private:
    // Текущее количество элементов в списке
    int current_size;
    // Указатель на элементы списка
    T* elements;
protected:
    // Устанавливает новый размер списка, равный <new_size>
    void set_size(int new_size) {
        current_size = new_size;
    }
    // Увеличивает размер списка на 1
    void inc_size() {
        current_size++;
    }
public:
    // Конструктор
    CustomList();

    // Деструктор
    ~CustomList();

    // Получает размер списка
    int size() const {
        return current_size;
    }

    // Добавляет новый элемент <element> в конец списка
    void add(T const& element);

    // Получает элемент списка в заданной позиции (по заданному индексу <index>)
    T get(int index) const {
        T* elm = this->p_get(index);
        return *elm;
    }

    // Удаляет элемент в заданной позиции списка
    bool remove(int index);

    // Получает указатель на элемент в заданной позиции (по заданному индексу <index>)
    T* p_get(int index) const;

    // Получает указатель на последний элемент списка
    T* p_last() const;

    // Получает указатель на первый элемент списка
    T* p_first() const;

    // Удаляет все элементы из списка, сокращая его размер до 0
    void clear();
};

//-------------------------------------------------------------------------------

// Конструктор
template <class T> CustomList<T>::CustomList() {
    set_size(0);
    elements = nullptr;
}

// Деструктор
template <class T> CustomList<T>::~CustomList() {
    if (elements != nullptr && size() > 0) {
        delete[] elements;
        elements = nullptr;
    }
    set_size(0);
}

// Добавляет новый элемент <element> в конец списка
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


// Получает указатель на последний элемент в списке
template <class T> T* CustomList<T>::p_last() const {
    if (size() == 0) {
        return nullptr;
    }

    if (size() == 1) {
        return &elements[0];
    }

    return &elements[current_size - 1];
}

// Получает указатель на первый элемент в списке
template <class T> T* CustomList<T>::p_first() const {
    if (current_size == 0) {
        return nullptr;
    }

    return &elements[0];
}

// Очищает список, удаляя все элементы
template <class T> void CustomList<T>::clear() {
    if (current_size == 0) {
        return;
    }

    delete[] elements;
    elements = nullptr;
    current_size = 0;
}


// Получает указатель на элемент в заданной позиции (по заданному индексу index)
template <class T> T* CustomList<T>::p_get(int index) const {
    if (current_size == 0 || index < 0 || index >= current_size) {
        return nullptr;
    }

    return &elements[index];
}


// Удаляет элемент в заданной позиции списка
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
cout<< "                             Задача 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Написать программу, которая должна выполнять следующие операции:" <<endl;
cout << "1. Создавать двусвязный кольцевой список." <<endl;
cout << "2. Операцию дополнения списка." <<endl;
cout << "3. Операцию просмотра списка." <<endl;
cout << "4. Операцию удаления элементов списка." <<endl;
cout<<endl;
cout<<"Решение:"<<endl;
cout<<endl;
cout<<"Добавление элементов в список:"<<endl;
cout<<"spisok.add(\"qwert\");"<<endl;
cout<<"spisok.add(\"asdfg\");"<<endl;
cout<<"spisok.add(\"zxcvb\");"<<endl;
cout<<endl;
cout<<"Получение элементов из списка:"<<endl;
cout<<"spisok.get(i);"<<endl;
cout<<endl;



CustomList<std::string> spisok;

   spisok.add("1. qwert");
   spisok.add("2. asdfg");
   spisok.add("3. zxcvb");

   for(int i=0; i<3; i++)
      cout <<"     "<< spisok.get(i) << endl;

cout<<endl;
cout<<"Удаляет элемент в заданной позиции списка:"<<endl;
cout<<"spisok.remove(i);"<<endl;
cout<<endl;

spisok.remove(1);

for(int i=0; i<2; i++)
   cout <<"     "<< spisok.get(i) << endl;


cout<<endl;
cout<<"Удаляет все элементы из списка:"<<endl;
cout<<"spisok.clear();"<<endl;

cout<<endl<<endl<<endl;

}
