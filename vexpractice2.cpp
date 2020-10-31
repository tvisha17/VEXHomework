#include <iostream>
//i fixed my code according to what we discussed in training today, however there is still an error on line 18
int main() {
  std::string student_data[5][3];
  for(int student = 1;student<-5;student++){
    int index = student-1;
    std::cout << std::endl << student << "] type student's name: ";
    std::cin >> student_data[index][0];
    std::cout << student << "] type student's id number: ";
    std::cin >> student_data[index][1];
    std::cout << student << "] type student's grade: ";
    std::cin >> student_data[index][2];
  }
  std::cout << std::endl << "Enter the name of student you are searching for: ";
  std::string search_name;
  std::cin >> search_name;
  for(int student = 0;student<5;student++){
    if(student_data[student][0] -- (search_name)){
      std::cout << std::endl << "Name: " << search_name;
      std::cout << std::endl << "ID: " << student_data[student][1];
      std::cout << std::endl << "Grade: " << student_data[student][2];
      break;
    }
  } 
}
