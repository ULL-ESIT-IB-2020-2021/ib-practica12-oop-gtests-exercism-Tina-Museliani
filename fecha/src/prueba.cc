 #include <sstream>
 #include <string>
 #include <fstream>
 #include <iostream>
 #include <vector>

 int main(){
 std::ifstream infile ("sample1.txt");
 std::string line;
 std::vector<std::string> dates {};
  std::string date;
 
 while (getline(infile,line)) {
    std::istringstream iss (line);
    if (iss>> date){
      dates.push_back(date);
    }
  }
  for (int i=0; i< dates.size(); i++){
    std::cout << dates [i]<< std::endl;
  }
return 0;
 }