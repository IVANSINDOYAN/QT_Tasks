#include<iostream>
  enum class week{
                Monday,
                Tuesday,
                Wednesday,
                Thursday,
                Friday,
                Saturday,
                Sunday,
 };


struct data{
	std::string date;
	std::string month;
                int year;

        };


void showdate(data ob){
	std::cout << (ob.date) << "/" << (ob.month) << "/";
}


int main()
{

	data ob;
	std::cin >> (ob.date) >> (ob.month);
	showdate(ob);

}
