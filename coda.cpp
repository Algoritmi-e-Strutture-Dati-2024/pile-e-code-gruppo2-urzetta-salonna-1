// Definizione classe Coda basata su ListaPuntatori
template <typename T>
class Coda {
private:
    ListaPuntatori<T> lista;

public:
    // Consente di aggiungere un elemento alla coda
    void enqueue(T elem) {
        lista.inslista(elem);
    }

    // Consente di rimuovere l'elemento in fondo alla coda e restituirlo
    T dequeue() {
        return lista.poplista();
    }

    // Consente di restituire l'elemento in fondo alla coda senza rimuoverlo
    T front() {
        return lista.leggilista();
    }

    // Consente di restituire true se la coda   vuota
    bool isEmpty() {
        return lista.listavuota();
    }

    // Consente di restituire il numero di elementi nella coda
    int size() {
        return lista.lunghezza();
    }
};
