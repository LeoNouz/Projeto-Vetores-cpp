#include "include/vector.h"
#include <iostream>
#include <math.h>
using namespace std;

void clearScreen() { cout << "\033[2J\033[1;1H"; }

void programaA() {
  clearScreen();
  VectorHolder<int> vet(10);
  vet.set();

  vet.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaB() {
  clearScreen();
  VectorHolder<int> vetA(8);
  VectorHolder<int> vetB(8);
  vetA.set();
  for (int i = 0; i < 8; i++) {
    int aux = vetA.get(i) * 3;
    vetB.modify(i, aux);
  }

  vetA.print();
  vetB.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaC() {
  clearScreen();
  VectorHolder<int> vetA(20);
  VectorHolder<int> vetB(20);
  VectorHolder<int> vetC(20);
  vetA.set();
  vetB.set();
  for (int i = 0; i < 20; i++) {
    int aux = vetA.get(i) - vetB.get(i);
    vetC.modify(i, aux);
  }

  vetA.print();
  vetB.print();
  vetC.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaD() {
  clearScreen();
  VectorHolder<int> vetA(15);
  VectorHolder<int> vetB(15);
  vetA.set();
  for (int i = 0; i < 15; i++) {
    int aux = pow(vetA.get(i), 2);
    vetB.modify(i, aux);
  }

  vetA.print();
  vetB.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaE() {
  clearScreen();
  VectorHolder<int> vetA(15);
  VectorHolder<int> vetB(15);
  VectorHolder<int> vetC(30);
  vetA.set();
  vetB.set();
  for (int i = 0; i < 15; i++) {
    int aux = vetA.get(i);
    vetC.modify(i, aux);
  }
  for (int i = 15; i < 30; i++) {
    int aux = vetB.get(i - 15);
    vetC.modify(i, aux);
  }

  vetA.print();
  vetB.print();
  vetC.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaF() {
  clearScreen();
  VectorHolder<int> vetA(20);
  VectorHolder<int> vetB(30);
  VectorHolder<int> vetC(50);
  vetA.set();
  vetB.set();
  for (int i = 0; i < 20; i++) {
    int aux = vetA.get(i);
    vetC.modify(i, aux);
  }
  for (int i = 20; i < 50; i++) {
    int aux = vetB.get(i - 20);
    vetC.modify(i, aux);
  }

  vetA.print();
  vetB.print();
  vetC.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaG() {
  clearScreen();
  VectorHolder<int> vetA(20);
  VectorHolder<int> vetB(20);
  vetA.set();
  for (int i = 0; i < 20; i++) {
    int aux = vetA.get(19 - i);
    vetB.modify(i, aux);
  }

  vetA.print();
  vetB.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaH() {
  clearScreen();
  VectorHolder<int> vetA(5);
  VectorHolder<int> vetB(5);
  VectorHolder<int> vetC(5);
  VectorHolder<int> vetD(15);
  vetA.set();
  vetB.set();
  vetC.set();
  for (int i = 0; i < 5; i++) {
    int aux = vetA.get(i);
    vetD.modify(i, aux);
  }

  for (int i = 0; i < 5; i++) {
    int aux = vetB.get(i);
    vetD.modify(i + 5, aux);
  }

  for (int i = 0; i < 5; i++) {
    int aux = vetC.get(i);
    vetD.modify(i + 10, aux);
  }

  vetA.print();
  vetB.print();
  vetC.print();
  vetD.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaI() {
  clearScreen();
  VectorHolder<int> vetA(15);
  VectorHolder<float> vetB(15);
  vetA.set();
  for (int i = 0; i < 15; i++) {
    if (vetA.get(i) % 2 == 0) {
      int aux = vetA.get(i) / 2;
      vetB.modify(i, aux);
    } else {
      int aux = vetA.get(i) * 1.5;
      vetB.modify(i, aux);
    }
  }

  vetA.print();
  vetB.print();
  this_thread::sleep_for(chrono::seconds(2));
}

void programaJ() {
  clearScreen();
  VectorHolder<int> vetA(6);
  VectorHolder<int> vetB(6);
  vetA.set();
  vetA.setPar();
  vetB.set();
  vetB.setImpar();

  vetA.print();
  vetB.print();
  this_thread::sleep_for(chrono::seconds(120));
}

void menu() {
  int tecla = 0;
  while (tecla != 11) {
    clearScreen();
    cout << "Menu";
    cout << "\n[1]-Exercício a)";
    cout << "\n[2]-Exercício b)";
    cout << "\n[3]-Exercício c)";
    cout << "\n[4]-Exercício d)";
    cout << "\n[5]-Exercício e)";
    cout << "\n[6]-Exercício f)";
    cout << "\n[7]-Exercício g)";
    cout << "\n[8]-Exercício h)";
    cout << "\n[9]-Exercício i)";
    cout << "\n[10]-Exercício j)";
    cout << "\n[11]-Encerrar";
    cout << "\n===============================";
    cout << "\nItem: ";
    cin >> tecla;
    switch (tecla) {
    case 1:
      programaA();
      break;
    case 2:
      programaB();
      break;
    case 3:
      programaC();
      break;
    case 4:
      programaD();
      break;
    case 5:
      programaE();
      break;
    case 6:
      programaF();
      break;
    case 7:
      programaG();
      break;
    case 8:
      programaH();
      break;
    case 9:
      programaI();
      break;
    case 10:
      programaJ();
      break;
    case 11:
      exit(0);
      break;
    default:
      clearScreen();
      cout << "*Erro de funcionamento *";
      cout << "\n===============================" << endl;
      this_thread::sleep_for(chrono::seconds(2));
    }
  }
}

int main(int argc, char *argv[]) {
  menu();
  return 0;
}