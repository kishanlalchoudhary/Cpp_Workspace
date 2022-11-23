#include<iostream>
#include<fstream>
using namespace std; 

class Student{

	private:

		string name;
		int rollNumber;

	public:

		void accept(string name, int rollNumber){

			this->name = name;
			this->rollNumber = rollNumber;

		}

		void write(fstream &myWriteFile){

			cout<<"Writing a File"<<endl;
			myWriteFile<<"Name - "<<name<<endl;
			myWriteFile<<"Roll Number - "<<rollNumber<<endl;

		}

		void read(fstream &myReadFile){

			cout<<endl;
			cout<<"Reading a File"<<endl;
			string data ;
			while (getline(myReadFile, data)){
				cout<<data<<endl;
			}

		}

};

int main(){

	fstream myFile;
	Student student;
	string studentName;
	int studentRollNumber;
	int numberOfStudent;

	cout<<"\nWelcome to the program\n"<<endl;

	cout<<"Enter the number of students : ";
	cin>>numberOfStudent;

	myFile.open("File.txt", ios::out);

	for (int i = 1; i<=numberOfStudent; i++){

		cout<<endl;
		cout<<"Enter the name of student "<<i<<" : ";
		cin.ignore();
		getline(cin, studentName);

		cout<<"Enter the roll number of student "<<i<<": ";
		cin>>studentRollNumber;

		student.accept(studentName, studentRollNumber);
		student.write(myFile);

	}

	myFile.close();

	myFile.open("File.txt", ios::in);
	student.read(myFile);

	myFile.close();

	cout<<"\nThanks for using our program\n"<<endl;;

	return 0;
}