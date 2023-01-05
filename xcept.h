#ifndef Array1D_
#define Array1D_

// One-dimensional arrays.

#include <iostream>
#include"xcept.h"
using namespace std;

template <class T> class Array1D {
  template <class A>
  friend ostream &operator<<(ostream &out, const Array1D<A> &x);

public:
  Array1D(int size = 0);
  Array1D(const Array1D<T> &v);
  ~Array1D() { delete[] element; }
  T &operator[](int i) const;
  int Size() { return size; }
  Array1D<T> &operator=(const Array1D<T> &v);
  Array1D<T> operator+() const;
  Array1D<T> operator+(const Array1D<T> &v) const;
  Array1D<T> operator-() const;
  Array1D<T> operator-(const Array1D<T> &v) const;
  Array1D<T> operator*() const;
  Array1D<T> operator*(const Array1D<T> &v) const;
  Array1D<T> &operator+=(const T &x);
  Array1D<T> &ReSize(int sz);
…
 // exception classes for various error types

#ifndef Xcept_
#define Xcept_

// #include <except.h>
#include <exception>
#include <new>

using namespace std;

// bad initializers
class BadInitializers {
public:
  BadInitializers() {}
};

// insufficient memory
class NoMem {
public:
  NoMem() {}
};

// change new to throw NoMem instead of xalloc
void my_new_handler() { throw NoMem(); };

new_handler Old_Handler_ = set_new_handler(my_new_handler);

// improper array, find, insert, or delete index
// or deletion from empty structure
class OutOfBounds {
public:
  OutOfBounds() {}
};

// use when operands should have matching size
class SizeMismatch {
public:
  SizeMismatch() {}
};

// use when zero was expected
class MustBeZero {
public:
  MustBeZero() {}
};

// use when zero was expected
class BadInput {
public:
  BadInput() {}
};

#endif