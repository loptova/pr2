#include "iostream"
#include "stdio.h"
#include "menu.h"
#include "scripts.h"
#include <list>
#include <string>
#include "Practice.class.h"
#include <fstream>

using namespace std;



int main(int argc, char const *argv[]) {
  int inp = 0;
  list <Practice> prList;
  do {
    system("clear");
    mainMenuPrint();
    cout<<"";
    cout<<"> ";
    cin>>inp;
    switch (inp) {
      case 1:{

        break;
      }
      case 2:{

        break;
      }
      case 3:{

        break;
      }
      case 4:{

        break;
      }
      case 5:{
        saveListToFile();
        break;
      }
      case 6:{
        loadDataFromFile();
        break;
      }
    }
  } while(inp != 7);


  return 0;
}
