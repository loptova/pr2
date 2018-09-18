#include "iostream"
#include <list>
#include <string>
#include "p_r.class.cpp"
#include <fstream>

using namespace std;

class Scripts{
  public:
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
};
