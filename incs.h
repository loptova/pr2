#ifndef INCS_H
#define INCS_H

class incs{
  // структура элемента списка
public:
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
};
#endif
