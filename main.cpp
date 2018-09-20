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
int a;
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
  if (l.head == NULL){
    cout<<"TO HEAD"<<endl;
    l.head = p;
    l.tail = l.head;
  }else{
    cout<<"TO TAIL"<<endl;
    //new l.tail->next;

    //l.tail = p;
    l.tail->next = p;
    l.tail = l.tail->next;
  }
}
void fillTestData(pracList &s){
  prac_in(s, 1, "first", "first", "first", 1, "first", "first");
  prac_in(s, 2, "second", "second", "second", 2, "second", "second");
  prac_in(s, 3, "third", "third", "third", 3, "third", "third");
  prac_in(s, 4, "4th", "4th", "4th", 4, "4th", "4th");
}



void printTable(pracList &s){
  //TODO:выгрузка в список перед принтом
  system("clear");
  prac* h = s.head;
  prac* t;// = prList.tail;
  // cout<<chk_empty(prList)<<endl;

  t = h;
  while (t != NULL){
    /*
      int practiceId;
      string practiceName;
      string studentFullName;
      string practiceVar;
      int practiceLevel;
      string releaseDate;
      string studentMark;
      prac* next;
    */
      cout << "Node: " << t->practiceId<<" - "<<t->practiceName<<" - "<<t->studentFullName<<" - "<<t->practiceVar<<" - "<<t->practiceLevel<<" - "<<t->releaseDate<<" - "<<t->studentMark;
      cout << endl;
      t = t->next;
  }
  cout<<endl;
  cout<<"1-Назад"<<endl;
  cout<<"> ";
  cin>>a;
}


int main(int argc, char const *argv[]) {
  int inp = 0;
  //Practice practice;
  //practice.setPracticeId(1);
  //prList[0] = practice
  pracList prList;
  constr_list(prList);
  fillTestData(prList);

  do {
    system("clear");

    //fillTestData(prList);
    /*prac_in(prList, 1, "first", "first", "first", 1, "first", "first");
    prac_in(prList, 2, "second", "second", "second", 2, "second", "second");
    prac_in(prList, 3, "third", "third", "third", 3, "third", "third");
    prac_in(prList, 4, "4th", "4th", "4th", 4, "4th", "4th");*/


    // cout<<

    mainMenuPrint();
    //cout<<endl;
    cout<<"> ";
    cin>>inp;
    switch (inp) {
      case 1:{
        printTable(prList);
        break;
      }
      case 2:{
        enterPracticeInfo();
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
