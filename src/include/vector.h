#include <chrono>
#include <iostream>
#include <stdlib.h>
#include <thread>
#include <time.h>
using namespace std;

template <typename Type> class VectorHolder {
public:
  VectorHolder(size_t tamanho) : mSize(tamanho), mVector(new Type[tamanho]) {}

  ~VectorHolder() { delete[] mVector; }

  void null() {
    clearScreen();
    for (int i = 0; i < mSize; i++) {
      mVector[i] = 0;
    }
  }

  void set() {
    srand(time(NULL));
    cout << "* Vetor - Inserindo Valores *";
    cout << "\n===============================" << endl;
    for (int i = 0; i < mSize; i++) {
      mVector[i] = rand() % 10 + 1;
      cout << "Elemento [" << i + 1 << "]: ";
      cout << mVector[i];
      cout << endl;
    }
    cout << endl;
    this_thread::sleep_for(chrono::seconds(2));
    clearScreen();
  }

  void setPar() {
    srand(time(NULL));
    cout << "* Vetor - Inserindo valores pares *";
    cout << "\n===================================" << endl;
    for (int i = 0; i < mSize; i++) {
      while (mVector[i] % 2 != 0) {
        mVector[i] = rand() % 10 + 1;
      }
      cout << "Elemento [" << i + 1 << "]: ";
      cout << mVector[i];
      cout << endl;
    }
    cout << endl;
    this_thread::sleep_for(chrono::seconds(2));
    clearScreen();
  }

  void setImpar() {
    srand(time(NULL));
    cout << "* Vetor - Inserindo valores ímpares *";
    cout << "\n======================================" << endl;
    for (int i = 0; i < mSize; i++) {
      while (mVector[i] % 2 == 0) {
        mVector[i] = rand() % 10 + 1;
      }
      cout << "Elemento [" << i + 1 << "]: ";
      cout << mVector[i];
      cout << endl;
    }
    cout << endl;
    this_thread::sleep_for(chrono::seconds(2));
    clearScreen();
  }

  void modify(size_t index, Type valor) { mVector[index] = valor; }

  Type get(size_t index) const { return mVector[index]; }

  void print() const {
    cout << "[";
    for (int i = 0; i < mSize; i++) {
      cout << mVector[i] << ",";
    }
    cout << "]" << endl;
    cout << endl;
  }

private:
  size_t mSize;
  Type *mVector;

  void clearScreen() { cout << "\033[2J\033[1;1H"; }
};