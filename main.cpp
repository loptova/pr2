#include "iostream"
#include "stdio.h"
#include "menu.h"
#include "scripts.h"
#include <list>
#include <string>
#include "Practice.h"
#include <fstream>
#include <cstring>
#include "incs.h"
using namespace std;

// Practice prList[255];





int main(int argc, char const *argv[]) {
  int inp = 0;
  //Practice practice;
  //practice.setPracticeId(1);
  //prList[0] = practice
  incs incs1;
  
  incs.constr_list(prList);
  // prac_in(prList, 344, "asd", "1asd", "1dasd1", 243, "asdc", "asd");

  do {
    system("clear");
    // cout<<chk_empty(prList)<<endl;

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
