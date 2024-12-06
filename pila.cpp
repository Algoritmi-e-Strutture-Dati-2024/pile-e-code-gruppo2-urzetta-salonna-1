// Definizione classe Pila basata su ListaPuntatori
template <typename T>
class Pila {
private:
    ListaPuntatori<T> lista;

public:
    // Consente di aggiungere un elemento alla pila
    void push(T elem) {
        lista.inslista(elem);
    }

    // Consente di rimuovere l'elemento in cima alla pila e restituirlo
    T pop() {
        return lista.poplista();
    }

    // Consente di restituire l'elemento in cima alla pila senza rimuoverlo
    T top() {
        return lista.leggilista();
    }

    // Consente di restituire true se la pila è vuota
    bool isEmpty() {
        return lista.listavuota();
    }

    // Consente di restituire il numero di elementi nella pila
    int size() {
        return lista.lunghezza();
    }
};
