//
#ifndef ASS_3_YMVECTOR_H
#define ASS_3_YMVECTOR_H
#include <iostream>

template<typename T>
using iterator = T*;

template<typename T>
class YMVECTOR {
    template<typename type>
    friend std::ostream& operator << (std::ostream& out, ::YMVECTOR<type>);
public:

    // Constructors
    YMVECTOR(int size = 0 );
    YMVECTOR(T*,int n );
    YMVECTOR(const YMVECTOR<T>& other);
    YMVECTOR(YMVECTOR<T>&& other);
    ~YMVECTOR();

    // Assignment
    YMVECTOR<T>& operator=(const YMVECTOR other);


    // Indexing
    T& operator[](int)const;
    T& operator[](int);

    // getters
    int size()const;
    int capacity()const;
    bool isEmpty()const;

    // reSizing
    void resize(int size);
    void clear();

    // adding , removing elements
    int push_back(const T& element);
    T pop_back();

    // Comparison
    bool operator==(const YMVector<T>& other)const;
    bool operator>(const YMVector<T>& other)const;
    bool operator<(const YMVector<T>& other)const;

    // iterators
    void insert(iterator<T>, T);
    void erase(iterator<T>it);
    void erase(iterator<T>it1, iterator<T>it2);
    iterator<T>begin()const;
    iterator<T>end()const;
private:
    T* arr;
    int arrayCapacity;
    int arraySize;

};

#include "YMVector.cpp"

#endif //
