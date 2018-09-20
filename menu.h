#include "iostream"
#include <list>
#include <string>


using namespace std;


void mainMenuPrint(){
  cout<<"1-Просмотреть таблицу"<<endl;
  cout<<"2-Добавить практику"<<endl;
  cout<<"3-Удалить практику"<<endl;
  cout<<"4-Редактировать практику"<<endl;
  cout<<"5-Сохранить таблицу"<<endl;
  cout<<"6-Загрузить таблицу"<<endl;
  cout<<"7-Выход"<<endl;
}


list<string> enterPracticeInfo(){
  //TODO:print table
  list<string> pracInfo;
  system("clear");
  cout<<"Введите номер практики: ";int id;cin>>id;
  cout<<"Введите название практики: ";string name;cin>>name;
  int a;
  cin >> a;
  return pracInfo;
}


void addPracticeMenu(){
  //TODO: add practice menu

}


void rmPracticeFooterMenu(){
  //TODO: remove practice footer menu

}


void editPracticeFooterMenu(){
  //TODO: edit practice footer menu

}


void areYouSureMenu(){
  //TODO: are you sure menu

}
