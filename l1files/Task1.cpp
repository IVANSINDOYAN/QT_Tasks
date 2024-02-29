#include <iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<iomanip>
  struct info{ //struct to keep information about the object's properties 
                std::string type;
                std::string name;
                std::string value;
                int line;
                int position;
        };




  void valuate(info &ob, std::string strtmp){ //function to separate the input string and valuate the info type object

        std::string tmp;
        int index = 0;
        std::stringstream tmpstr(strtmp);
        std::vector<std::string> words;
        	while(tmpstr >> tmp){
                	words.push_back(tmp);
        	}
        	
		int size = words.size();
        	for(int i = 0; i < size; ++i){
                	if(words[i] == "="){
                        index = i;
                	}
        	}		
        	if(index){
                	ob.value = words[size - 1];
                	size -= 2;
        	}else{
                	ob.value = "GARBAGE";
        		}

	switch(size){ // valuateing the properties depending on the size of the vector containing the separated words of the input string
                case 1:
                        ob.name = words[0];
                        ob.type = "-";
                        ob.value = "-";
                        break;
                case 2:
                        ob.type = {(words[0])[0]};
                        ob.name = words[1];
                        break;
                case 3:
                        ob.type = {(words[0])[0], (words[1])[0]};
                        ob.name = words[2];
                        break;
                case 4:
                        ob.type = {words[0].front(), words[1].front(), words[2].front()};
                        ob.name = words[3];
                        break;
                case 5:
                        ob.type = {words[0].front(), words[1].front(), words[2].front(), words[3].front()};
                        ob.name = words[4];

        }


}






int main(){
	std::string str1;
	std::string str2;
	std::cin >> str1;
	std::cin >> str2;
	std::string strtmp;
	std::ifstream f1 (str1); // getting an input file
	std::ofstream f2 (str2); // flushing the output information to the output file
	
	
	

	int index1 = 0;
	int line1 = 0;
	info arr[100];
 	f2  << std::left << std::setw(15)  << "Type" << std::setw(15) << "Value" << std::setw(15);
       	f2 << "Name" << std::setw(15) << "Line" <<std::setw(15) << "Position" << std::endl;
	
	
	while(std::getline(f1, strtmp, ';') ,!f1.eof()){ // reading sentences till the  semicolon(';') sign
		for(int i = 0; i < strtmp.size(); ++i){
			if(strtmp[i] == '\n'){
				++ line1;
				index1 = 0;
			}
		}	
		arr[index1].position = index1;
		arr[index1].line = line1;
		valuate(arr[index1], strtmp);
		f2 << std::left << std::setw(15)  << arr[index1].type << std::setw(15) << arr[index1].value << std::setw(15);
	       	f2 << arr[index1].name << std::setw(15) << arr[index1].line << std::setw(15) << arr[index1].position  << std::endl;
		++index1;
	}

			
			
		
}
