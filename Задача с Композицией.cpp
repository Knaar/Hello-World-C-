/*Суть задачи в создании композиции из автомобиля и двигателя
По умолчанию ввод должен быть за пользователем, но я, для простоты ввел произвольные значения*/


#include <iostream>
using namespace std;

class Engine {//создал класс Двигателя
public:
    Engine(int p)//по задумке он получает только лошадиные силы
        : power(p)
    {}
    void startEng() {//функция, которую вызовет позже другая
        cout << "Engine ON (" << power << " horsepower)";
    }
private:
    int power;//законсервировали лс от юзера
};
class Car {//класс Автомобиля. Сюда введу цвет и год
public:
    Car(Engine x, string c, int y)//конструктор, получающий цифры от main
        : bd(x), color(c), year(y) {};
    void start() {//запускаем автомобиль через запуск двигателя
        cout << "Starting" << endl;
        bd.startEng();
           

    };
private:
    Engine bd;
    string color;
    int year;
};

int main() {
    /*int power;
    string color;
    int year;
    cin >> power >> color >> year;*/

    Engine bd(100);
    Car Kia(bd, "gold", 2007);
    Kia.start();
    

}
