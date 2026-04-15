#include <iostream>
#include <string>
#include "ArrayQueue.hpp"
using namespace std;

int main() {
    cout << "===== Testing INT Queue =====\n";
    ArrayQueue<int> intQ(5);

    intQ.enqueue(10);
    intQ.enqueue(20);
    intQ.enqueue(30);

    cout << "Front: " << intQ.front() << endl;
    cout << "Back: " << intQ.back() << endl;

    intQ.dequeue();
    cout << "After dequeue, front: " << intQ.front() << endl;

    cout << "Length: " << intQ.getLength() << endl;

    // Copy constructor test
    ArrayQueue<int> intQCopy(intQ);
    cout << "Copied queue front: " << intQCopy.front() << endl;


    cout << "\n===== Testing BOOL Queue =====\n";
    ArrayQueue<bool> boolQ(5);

    boolQ.enqueue(true);
    boolQ.enqueue(false);
    boolQ.enqueue(true);

    cout << "Front: " << boolQ.front() << endl;
    cout << "Back: " << boolQ.back() << endl;

    boolQ.dequeue();
    cout << "After dequeue, front: " << boolQ.front() << endl;

    cout << "Length: " << boolQ.getLength() << endl;

    // Assignment operator test
    ArrayQueue<bool> boolQAssign;
    boolQAssign = boolQ;
    cout << "Assigned queue front: " << boolQAssign.front() << endl;


    cout << "\n===== Testing STRING Queue =====\n";
    ArrayQueue<string> stringQ(5);

    stringQ.enqueue("apple");
    stringQ.enqueue("banana");
    stringQ.enqueue("cherry");

    cout << "Front: " << stringQ.front() << endl;
    cout << "Back: " << stringQ.back() << endl;

    stringQ.dequeue();
    cout << "After dequeue, front: " << stringQ.front() << endl;

    cout << "Length: " << stringQ.getLength() << endl;

    // Test full condition
    stringQ.enqueue("date");
    stringQ.enqueue("elderberry");
    stringQ.enqueue("fig"); // should fill queue

    cout << "Is full? " << (stringQ.isFull() ? "Yes" : "No") << endl;

    return 0;
}