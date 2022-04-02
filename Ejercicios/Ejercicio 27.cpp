#include <iostream>
#include <array>
#include <set>
#include <time.h> 

int main() {
  srand (time(NULL));
  int i=0;
  std::array<int,20> arr{rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100,rand()%100};

  std::set<int> ordenado;

  for(auto elem:arr){
    ordenado.insert(elem);
  }
  for(auto elem:ordenado){
    std::cout<<elem;
  }
}