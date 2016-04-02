#include <iostream>
#include "queue.h"

using namespace std;

int main(void) {
    Queue q = Queue();
    int vals[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i=0; i<10; i++) {
        int* ptr = &vals[i];
        q.enqueue(ptr);
        cout << "q.enqueue(" << vals[i] << ")" << endl;
    }

    cout << endl << endl << "assertion:    q.size() == 10 == " << q.size() << endl;
    cout << "assertion:    q.is_empty() == 0 == " << q.is_empty() << endl << endl << endl;

    while(!q.is_empty()) {
        void* val = q.dequeue();
        cout << "q.dequeue() == " << *((int*) val) << endl;
    }

    cout << endl << endl << "assertion:    q.size() == 0 == " << q.size() << endl;
    cout << "assertion:    q.is_empty() == 1 == " << q.is_empty() << endl;
}
