#include "iostream"
#include <list>
#include <string>
#include <vector>

using namespace std;


void mainMenuPrint(){
  cout<<"1-Просмотреть таблицу"<<endl;
  cout<<"2-Добавить практику"<<endl;
  cout<<"3-Удалить практику"<<endl;
  cout<<"4-Редактировать практику"<<endl;
  cout<<"5-Сохранить таблицу"<<endl;
  cout<<"6-Загрузить таблицу"<<endl;
  cout<<"7-Очистить список"<<endl;
  cout<<"8-Выход"<<endl;
}
/*
string practiceId,
string practiceName,
string studentFullName,
string practiceVar,
string practiceLevel,
string releaseDate,
string studentMark
*/

vector<string> enterPracticeInfo(){
  //TODO:print table
  vector<string> info(7);
  //info.reserve(7);
  //system("clear");
  cout<<"Введите номер практики: ";cin>>info[0];
  cout<<"Введите название практики: ";cin>>info[1];
  cout<<"Введите ФИО студента: ";cin>>info[2];
  cout<<"Введите номер варианта: ";cin>>info[3];
  cout<<"Введите номер уровня: ";cin>>info[4];
  cout<<"Введите дату сдачи: ";cin>>info[5];
  cout<<"Введите оценку студента: ";cin>>info[6];
  //int a;
  //cin >> a;
  return info;
}


void addPracticeMenu(){
  //TODO: add practice menu

}


string rmPracticeFooterMenu(){
  //TODO: remove practice footer menu
  string _id;
  cout<<"Введите номер записи: ";cin>>_id;
  return _id;
}


void editPracticeFooterMenu(){
  //TODO: edit practice footer menu
  
}


void areYouSureMenu(){
  //TODO: are you sure menu

}
