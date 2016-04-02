#include <iostream>
#include <cassert>
#include "queue.h"

using namespace std;

int main(void) {
    Queue q = Queue();
    int vals[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		int value = 0;

    for(int i=0; i<10; i++) {
        int* ptr = &vals[i];
        q.enqueue(ptr);
        assert(vals[i] == value++);
    }

    assert(q.size() == 10);
		assert(!q.is_empty());
	
		value = 0;
    while(!q.is_empty()) {
        void* val = q.dequeue();
        assert(*((int*) val) == value++);
    }

		assert(q.size() == 0);
		assert(q.is_empty());
		assert(q.dequeue() == q.lookup() && q.lookup() == 0);
}
