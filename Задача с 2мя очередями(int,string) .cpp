#include <iostream>
#include <string>
using namespace std;


template <class T>
class Queue {
    private:
	int *arr;
        int count;
    public:
    	Queue(int size) {
    	    arr = new int[size];
    	    count = 0;
    	}
        int add(int elem){
    	    arr[count] = elem;
    	    count++;
    return 0;
}
        int get(int index){
    	    cout << arr[index]<<endl;
            return 0;
}
};

template <>
class Queue <string>{
    private:
	string *arr;
        int count;
    public:
    	Queue(int size) {
    	    arr = new string[size];
    	    count = 0;
    	}
        int add(string elem){
    	    arr[count] = elem;
    	    count++;
    return 0;
}
        int get(int index){
    	    cout << arr[index]<<endl;
            return 0;
}
};


int main()
{
    Queue<string> q(3);
	q.add("James");
	q.add("Andy");
	q.add("Amy");
	q.get(2);


    Queue <int> n(2);
	n.add(42);
	n.add(33);
	n.get(1);




    return 0;
}
