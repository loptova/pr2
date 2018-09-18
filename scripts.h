#include "iostream"
#include <list>
#include <string>
#include "Practice.class.h"
#include <fstream>

using namespace std;



    string path = "file.txt";
    ofstream fout;
    void saveListToFile(){
      //TODO: saving list of practice to the file
      fout.open(path, ofstream::app);
    }


    list<Practice> loadDataFromFile(){
      //TODO: loading data from file
      list<Practice> prList;
      //loading
      return prList;
    }


    void addToDataToList(){
      //TODO: adding data to the list

    }


    void removeDataFromList(int rmId){
      //TODO: remove row with rmId
      //rmId - id of practice

    }
