#include <iostream>
#include <string>

using namespace std;

int main() {
  int game1;
    std::cout<<"Please Type In A Number Between 1 - 4: "; cin >> game1;
  if (game1 == 1) {
     std::cout<<"You've caught a Pikachu!" << endl; 
  } 
  if (game1 == 2) {
     std::cout<<"You've caught a Bulbasaur!" << endl;
  }
  if (game1 == 3) {
     std::cout<<"You've Caught a Pedgie!" << endl;
  }
  if (game1 == 4) {
      std::cout<<"You've Caught a Squirtle!" << endl;
  }
}


