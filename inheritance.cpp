#include<iostream>
#include<string.h>
using namespace std;
class person{
	public:
		string name;
		int age;
//		person(string name,int age){
//			name=name;
//			age=age;
//		}
    };
	class student:public person {
		public:
			int rollno;
			void getinfo(){
				cout<<"Name:"<<name<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Rollno:"<<rollno<<endl;
			}
	};
int main(){
	student s1;
	s1.getinfo();
	s1.name="manish";
	s1.age=23;
	s1.rollno=222;
		s1.getinfo();
	return 0;
}
