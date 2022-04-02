A partir de un array de 100 números enteros aleatorios entre 0 y 20 (ver cómo generar números aleatorios), guardar en el tipo de dato pertinente todos aquellos que sean múltiplos de 3 y posteriormente imprimirlos por pantalla (no se debe repetir ninguno).


#include <iostream>
#include <array>
#include <set>
#include <stdlib.h>
#include <time.h>

int main() {
  srand (time(NULL));
  std::array <int, 100> nums = {};
  std::set <int> divisores = {};

  for (int i = 0; i < 100; i++) {
    nums.at(i) = rand() % 21;
  }

  for (auto elem: nums) {
    if (elem % 3 == 0) {
      divisores.insert (elem);
    }
  }

  for (auto elem: divisores) {
    std::cout << elem << "\n";
  }
}