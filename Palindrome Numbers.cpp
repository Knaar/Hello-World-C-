/*Число-палиндром – это число (например, 626), которое остается само собой при чтении цифр в обратном порядке.
Напишите функцию, которая возвращает true, если данное число является палиндромом, и false, если не является.
Завершите данную функцию, чтобы код в main работал и приводил к ожидаемому результату.

Пример Входных Данных:
13431

Пример Выходных Данных:
13431 is a palindrome*/

#include <iostream>
using namespace std;
bool Check(int First, int Second) { //создал ф-ю с булевой логикой.
    return(First == Second);        //ф-я даст либо да, либо нет
}



int main() {
    int n, first, reverse = 0, rem;
    cin >> n;
    first = n;
    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;                    //вот тут вообще не понял механизм. 4 строчки скопировал из чужого кода. Надеюсь, однажды пойму автора.
    }


    if (Check(first, reverse)) {//отправили аргументы в функцию
        cout << first << " is a palindrome";
    }
    else {
        cout << first << " is NOT a palindrome";
    }
    return 0;
}