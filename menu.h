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


string[6] enterPracticeInfo(){
  //TODO:print table
  string pracInfo[6];
  //system("clear");
  cout<<"Введите номер практики: ";int id;cin>>pracInfo[0];
  cout<<"Введите название практики: ";string name;cin>>pracInfo[1];
  cout<<"Введите ФИО студента: ";string name;cin>>pracInfo[2];
  cout<<"Введите номер варианта: ";string name;cin>>pracInfo[3];
  cout<<"Введите номер уровня: ";string name;cin>>pracInfo[4];
  cout<<"Введите дату сдачи: ";string name;cin>>pracInfo[5];
  cout<<"Введите оценку студента: ";string name;cin>>pracInfo[6];
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
