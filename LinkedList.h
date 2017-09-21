//
// Created by Yasin on 9/21/2017.
//

#ifndef CODINGINTERVIEW_LINKEDLIST_H
#define CODINGINTERVIEW_LINKEDLIST_H


template<class T> class LinkedList
{
    // Destructor/Constructors
    ~LinkedList();
    LinkedList();


    int insert (const T& element);
    void clear();

    void RemoveDups();



    private:
        class LN
        {
        public:
            LN() {};
            LN(const LN& ln): value(ln.value), next(ln.next) {}
            LN(const T v, LN* n = nullptr) : value(v), next(n) {}

            T value;
            LN* next = nullptr;
        };


    LN* front = nullptr;
    LN* rear  = nullptr;
    int used  = 0;
};

template<class T>
LinkedList<T>::~LinkedList() {}

template<class T>
LinkedList<T>::LinkedList() {}

template<class T>
int LinkedList<T>::insert(const T &element) {

    return 0;
}

template<class T>
void LinkedList<T>::clear() {

}




#endif //CODINGINTERVIEW_LINKEDLIST_H
