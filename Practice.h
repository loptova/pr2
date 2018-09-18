//#include <string>
#ifndef UPDATE_H
#define UPDATE_H

class Practice{
  private:
    int practiceId;
    string practiceName;
    string studentFullName;
    string practiceVar;
    int practiceLevel;
    string releaseDate;
    string studentMark;
  public:
    //constructor

    //getters
    int getPracticeId(){
      return this->practiceId;
    }
    string getPracticeName(){
      return this->practiceName;
    }
    string getStudentFullName(){
      return this->studentFullName;
    }
    string getPracticeVar(){
      return this->practiceVar;
    }
    int getPracticeLevel(){
      return this->practiceLevel;
    }
    string getReleaseDate(){
      return this->releaseDate;
    }
    string getStudentMark(){
      return this->studentMark;
    }
    //setters
    void setPracticeId (int newPracticeId){
      this->practiceId = newPracticeId;
    }
    void setPracticeName (string newPracticeName){
      this->practiceName = newPracticeName;
    }
    void setStudentFullName (string newStudentFullName){
      this->studentFullName = newStudentFullName;
    }
    void setPracticeVar (string newPracticeVar){
      this->practiceVar = newPracticeVar;
    }
    void setPracticeLevel (int newPracticeLevel){
      this->practiceLevel = newPracticeLevel;
    }
    void setReleaseDate (string newReleaseDate){
      this->releaseDate = newReleaseDate;
    }
    void setStudentMark (string newStudentMark){
      this->studentMark = newStudentMark;
    }
};

#endif
