/*����� ��������� ������ ����� Painting � ������� ������ � ������� ������������.
��������� ���, ����� ����������� �������� name � �������� ��������� � ������� ���.

������ ������� ������
Ocean

������ �������� ������
Ocean*/
#include <iostream>
#include <string>
using namespace std;

class Painting {


public:
    Painting(string nm) {//������ �����������, ����������� ��� �� �-�� main
        setName(nm);    //����������� ��� ����� ����� ���������� � �-� setName
    }

    void setName(string x) {//�������� ��� � ��������� ���
        name = x;             //� ���������� name ���������� �������� �� x
    }

    string getName() { //�-� ���������� ������ ��� ������ �������� ����� �� ������� �� main
        return name;  //��� ���������� name
    }


private:           //��������� ����� ����� �� ����� �����, �� � ������, ����� ���������)
    string name;

};
int main() {
    string name;
    cin >> name;//��� ��� ������ ���� ���

    Painting image(name);//��������� ��������� ��� � �����.� ����� �����, ��� ������ ����������

    cout << image.getName();

    return 0;
}