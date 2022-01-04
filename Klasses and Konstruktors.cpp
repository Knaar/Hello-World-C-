/*Даная программа задает класс Painting и создает объект с помощью конструктора.
Исправьте код, чтобы конструктор принимал name в качестве аргумента и выводил его.

Пример Входных Данных
Ocean

Пример Выходных Данных
Ocean*/
#include <iostream>
#include <string>
using namespace std;

class Painting {


public:
    Painting(string nm) {//создал конструктор, принимающий имя из ф-ии main
        setName(nm);    //конструктор все имена будет передавать в ф-ю setName
    }

    void setName(string x) {//получает имя в перемноой икс
        name = x;             //в переменную name записываем значение от x
    }

    string getName() { //ф-я существует только для выдачи текущего имени по запросу из main
        return name;  //тут актуальный name
    }


private:           //приватный метод хдесь не особо нужен, но я создал, чтобы привыкать)
    string name;

};
int main() {
    string name;
    cin >> name;//тут все просто даже мне

    Painting image(name);//отправили введенное имя в класс.С этого места, нам приват недоступен

    cout << image.getName();

    return 0;
}