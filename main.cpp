#include "iostream"
#include "stdio.h"
#include "menu.cpp"
#include <list>
#include <string>

using namespace std;



int main(int argc, char const *argv[]) {
  int inp = 0;
  do {
    system("clear");
    mainMenuPrint();
    cout<<"";
    cout<<"> ";
    cin>>inp;
    switch (inp) {
      case 1:;
      case 2:;
      case 3:;
      case 4:;
    }
  } while(inp != 5);


  return 0;
}
