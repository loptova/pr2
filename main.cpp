#include "iostream"
#include "stdio.h"
#include "menu.h"
#include "scripts.h"
#include <list>
#include <string>
#include "Practice.h"
#include <fstream>
#include <cstring>

using namespace std;

// Practice prList[255];
// структура элемента списка
struct prac{
  int practiceId;
  string practiceName;
  string studentFullName;
  string practiceVar;
  int practiceLevel;
  string releaseDate;
  string studentMark;
  prac* next;
};
// сам список
struct pracList{
  prac* head;
  prac* tail;
};
// конструктор пустого списка
void constr_list(pracList &l){
  l.head = NULL;
}
// проверка на пустоту списка
bool chk_empty(pracList l){
  return (l.head == NULL);
}
// добавление элемента списка
void prac_in(
  pracList &l,
  int practiceId,
  string practiceName,
  string studentFullName,
  string practiceVar,
  int practiceLevel,
  string releaseDate,
  string studentMark
){
  prac* p = new prac();
  p->practiceId = practiceId;
  p->practiceName = practiceName;
  p->studentFullName = studentFullName;
  p->practiceVar = practiceVar;
  /*strcpy(p->practiceName, practiceName);
  strcpy(p->studentFullName, studentFullName);
  strcpy(p->practiceVar, practiceVar);*/
  p->practiceLevel = practiceLevel;
  p->releaseDate = releaseDate;
  p->studentMark = studentMark;
  //strcpy(p->releaseDate, releaseDate);
  //strcpy(p->studentMark, studentMark);
  p->next = NULL;
  if (chk_empty(l)) l.head = p; else l.tail->next = p;
}


pracList prList;

int main(int argc, char const *argv[]) {
  int inp = 0;
  //Practice practice;
  //practice.setPracticeId(1);
  //prList[0] = practice

  constr_list(prList);
  prac_in(prList, 344, "asd", "1asd", "1dasd1", 243, "asdc", "asd");

  do {
    system("clear");
    // cout<<chk_empty(prList)<<endl;
    while (prList.head != NULL){
      cout<<prList.head->practiceId<<endl;
      cout<<prList.head->practiceName<<endl;
      cout<<prList.head->studentFullName<<endl;
      cout<<prList.head->practiceVar<<endl;
      cout<<prList.head->practiceLevel<<endl;
      cout<<prList.head->releaseDate<<endl;
      cout<<prList.head->studentMark<<endl;
      prList.head = prList.head->next;
    }
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
