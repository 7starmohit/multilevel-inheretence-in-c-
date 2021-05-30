#include<iostream>
using namespace std;
class student{
	protected:
		int roll_number;
	public:
		void set_roll_number(int);
		void get_roll_number(void);
};
void student::set_roll_number(int x){
	roll_number=x;
}
void student::get_roll_number()
{
	cout<<"the roll number is "<<roll_number<<endl;
}


class exam:public student{
	protected:
		float maths;
		float cs;
	public:
		void set_marks(float,float);
		void get_marks(void);
};

void exam::set_marks(float q1,float q2){
	maths=q1;
	cs=q2;
}
void exam::get_marks(){
	cout<<"the marks obtained in maths is "<<maths<<endl;
	cout<<"the marks obtained in cs is "<<cs<<endl;	
}


class result:public exam{
	float percentage;
	public:
		void display(){
		    get_roll_number();
		    get_marks();
		    percentage=(maths+cs)/2;
			cout<<"your percentage is "<<percentage<<endl;
		}
};

int main()
{
	result mohit;
	mohit.set_roll_number(29);
	mohit.set_marks(85.33,90.12);
	mohit.display();
	return 0;
}
