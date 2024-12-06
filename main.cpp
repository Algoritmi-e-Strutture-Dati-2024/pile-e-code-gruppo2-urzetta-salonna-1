#include <iostream>
using namespace std;

int main(){
    //test pila
    Pila<int> p;
    p.push(10);
    p.push(20);
    p.push(30);
    cout << "Top della pila: " << p.top() <<endl;
    cout << "Rimozione top: " << p.pop() <<endl;
    cout << "Top della pila: " << p.top() <<endl;
    cout << "La pila è vuota? " << (p.isEmpty() ? "Sì" : "No") << endl; //usando l'operatore ternario
    cout << "Numero di elementi nella pila: " << p.size() <<endl;

    //test coda
    Coda<int> c;
    c.enqueue(10);
    c.enqueue(20);
    c.enqueue(30);
    cout << "Front della coda: " << c.front() <<endl;
    cout << "Rimozione front: " << c.dequeue() <<endl;
    cout << "La coda è vuota? " << (c.isEmpty() ? "Sì" : "No") <<endl;
    cout << "Numero di elementi nella coda: " << c.size() <<endl;

  return 0;

}
    
    
