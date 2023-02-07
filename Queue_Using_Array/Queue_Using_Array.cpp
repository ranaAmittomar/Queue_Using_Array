// Queue_Using_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr auto n = 50;

class queue {

    int* arr;
    int front;
    int back;

public:queue() {
    arr = new int[n];
    front = -1;
    back = -1;
}
      void enqueue(int x) { //to store the element in the queue which enters from back.

          if (back == n - 1) { 
              cout << "The queue is completely filled...";
              return;
          }
         
              back++;
              arr[back] = x;
              if (front == -1) {
                  front++;
              }
      }

      void dequeue() { // this removes the element from queue from front.
          if (front == -1 || front > back) {
              cout << "No more elements in queue..";
              return;
          }
          front++;
      }

      int peek() { //this will show which element is in the front.
          if (front == -1 || front > back) {
              cout << "No more elements in queue..";
              return -1;
          }
          return arr[front];
      }

      bool isEmpty() {
          if (front == -1 || front > back) {
              return true;
          }
          return false;

      }

};


int main()
{

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(56);
    q.enqueue(4);
    cout << q.peek() << endl;
    cout << q.isEmpty();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.isEmpty();
    return 0;
}
