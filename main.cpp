#include "iostream"
#include "stdio.h"
#include "menu.h"
#include "scripts.h"
#include <stdlib.h>
#include <list>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

// Practice prList[255];
int a;
struct prac{
  string practiceId;
  string practiceName;
  string studentFullName;
  string practiceVar;
  string practiceLevel;
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

void prac_rm(pracList &l, string id){
    prac* h = l.head;
    prac* t;
    t = h;

    if (l.head->practiceId == id){
      cout<<"EQUALS AT HEAD"<<endl;
      l.head = l.head -> next;
    }

    while(t != NULL){
      if (t->practiceId == id){

      }
      t = t->next;
    }
}

// добавление элемента списка
void prac_in(
  pracList &l,
  string practiceId,
  string practiceName,
  string studentFullName,
  string practiceVar,
  string practiceLevel,
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
  prac_in(s, "1", "first", "first", "first", "1", "first", "first");
  prac_in(s, "2", "second", "second", "second", "2", "second", "second");
  prac_in(s, "3", "third", "third", "third", "3", "third", "third");
  prac_in(s, "4", "4th", "4th", "4th", "4", "4th", "4th");
}



void printTable(pracList &s){
  //TODO:выгрузка в список перед принтом
  //ystem("clear");
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
  //cout<<endl;
  //cout<<"1-Назад"<<endl;
  //cout<<"> ";
  //cin>>a;
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
    // system("clear");

    //fillTestData(prList);
    /*prac_in(prList, 1, "first", "first", "first", 1, "first", "first");
    prac_in(prList, 2, "second", "second", "second", 2, "second", "second");
    prac_in(prList, 3, "third", "third", "third", 3, "third", "third");
    prac_in(prList, 4, "4th", "4th", "4th", 4, "4th", "4th");*/


    // cout
    mainMenuPrint();
    //cout<<endl;
    cout<<"> ";
    cin>>inp;

      if(inp == 1){
        printTable(prList);
      }else if(inp == 2){
        vector<string> info(enterPracticeInfo());
        for(int i = 0; i<=6; i++){
          cout<<info[i]<<endl;
        }
        //int info0 = atoi(info[0].c_str());
        //int info3 = atoi(info[3].c_str());
        prac_in(prList, info[0], info[1], info[2], info[3], info[4], info[5], info[6]);
        cout<< endl;
      }else if(inp == 3){
        printTable(prList);
        prac_rm(prList, rmPracticeFooterMenu());

      }else if(inp == 4){

      }else if(inp == 5){
        saveListToFile();
      }else if(inp == 6){
        loadDataFromFile();
      }else{
        //inp = 0;
      }

        //cin>>inp;


  } while(inp != 7);


  return 0;
}
