//Hospital System
#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;



class Hospital1
{public:
	string Name;
	char Address[];
	char Telephone[];
	void getdata()
	{
		cout<<"Enter Hospital name: "; cin>>Name;
		cout<<"Enter Hospital Location: "; cin>>Address;
		cout<<"Enter Hospital Telephone: "; cin>>Telephone;
		
	}
	
	void display()
	{
		cout<<"Hospital Details are: "<<endl;
		cout<<"Hospital Name: "<<Name<<endl;
		cout<<"Hospital Address: "<<Address<<endl;
		cout<<"Hospital Telephone: "<<Telephone<<endl<<endl;
	}
};

class branch
{
	public:
		branch()
		{
		 //branch hospital deatails created.
		}
		
		
		
		~branch()
		{
			//branch details deleted.
		}
};
class Person:public Hospital1

{public:
	char Title[];
	char YOB[];
	char Gender[];
	int Age;
	void patadetails()
	{    
	cout<<"Person Details: choose either Staff or Patient."<<endl;
		cout<<"Enter Title: ";cin>>Title;
		cout<<"Enter Your Name: ";cin>>Name;
		cout<<"Enter Your Birthdate: ";cin>>YOB;
		cout<<"Enter Your Gender: ";cin>>Gender;
		
	}
	
	void putdata();
};
void Person ::putdata()
{
	cout<<"Enter Home Address: "; cin>>Address;
	cout<<"EnterYour Phone Number: "; cin>>Telephone;
	
	
};
class Patient:public Person

{public:
	string date;
	string Sickness;
	string Prescription;
	string Allergies;
	string SpecialRequest;
	void Records()
	{
	cout<<"Enter Admission date: ";  cin>>date;
	cout<<"Enter patient's sickness: ";  cin>>Sickness;
	cout<<"Enter Patient's prescription: ";  cin>>Prescription;	
	cout<<"Enter patient's allergies: ";  cin>>Allergies;
	cout<<"Enter patient's special Request: ";  cin>>SpecialRequest;
	
	}
	
};
class staff:public Hospital1
{
public:
    string education,certification,languages;
    int Date_joined;
    void get()
    {      cout << "\nEnter your Name: "; cin>>Name;
           cout << "\nEnter the level of education: ";
           cin>> education;
          cout << "\nEnter the certification: ";
          cin>> certification;
         cout << "\nEnter the languages: ";
         cin>> languages;
          cout << "\nEnter the Date Joined: ";
          cin>> Date_joined;
    }
    virtual void displayStaff()
    {
    cout << "Staff Details: "<<endl;
	cout << "Staff name: "<<Name<<endl;	
	cout << "Staff Level of Education: "<<education<<endl;	
	cout << "Staff Language: "<<languages<<endl;
	cout << "Staff certification: "<<certification<<endl;
	cout << "Staff Entry Date: "<<Date_joined<<endl;
	}

};
class Department:public staff
{ public:
	int staffID;
	
  void department()
  {
  	cout<<"Enter Staff ID: "; 
	cin>>staffID;
  }
  void displayStaff()
    {
    cout << "Staff Details: "<<endl;
    cout<< "Staff ID: "<<staffID<<endl;
	cout << "Staff name: "<<Name<<endl;	
	cout << "Staff Level of Education: "<<education<<endl;	
	cout << "Staff Language: "<<languages<<endl;
	cout << "Staff certification: "<<certification<<endl;
	cout << "Staff Entry Date: "<<Date_joined<<endl;
	}
  
};

class Operation_staff:public staff
{
public:
    void weka()
    {
        cout<<"\nOPERATIONS STAFF";
    }
};

class Administrative_staff:public staff
{
public:
    void putdata()
    {
        cout<<"\nADMINISTRATIVE STAFF";
    }
};

class Technical_staff:public staff
{
public:
    void wekadata()
    {
        cout<<"\nTECHNICAL STAFF";
    }
};

class Receptionist
{
	public:
		char title,name,education,certification;
		int age;
		void get1()
		{
			cout<<"ENTER TITLE";
			cin>>title;
			cout<<"ENTER NAME";
			cin>>name;
			cout<<"ENTER EDUCATION";
			cin>>education;
			cout<<"ENTER CERTIFICATION";
			cin>>certification;
		}
		void display1()
		{
			cout<<"Receptionist details are:"<<endl;
			cout<<"Receptionist name:"<<name<<endl;
			cout<<"Receptionist education:"<<education<<endl;
			cout<<"Receptionist certification:"<<certification<<endl;
		}
};
class surgeon
{
	public:
		char title,name, education, certification;
		int age;
		void get2()
		{
			cout<<"ENTER TITLE";
		    cin>>title;
		    cout<<"ENTER NAME";
		    cin>>name;
		    cout<<"ENTER AGE";
		    cin>>age;
		    cout<<"ENTER EDUCATION";
		    cin>>education;
		    cout<<"ENTER CERTIFICATION";
		    cin>>certification;
		}
};
class Frontdeskstaff
{
	public:
		char title,name,education,certification;
		int age;
		void get3()
		{
			cout<<"ENTER TITLE";
			cin>>title;
			cout<<"ENTER NAME";
			cin>>name;
			cout<<"ENTER EDUCATION";
			cin>>education;
			cout<<"ENTER CERTIFICATION";
			cin>>certification;
		}
		void display2()
		{
			cout<<"Front desk staff details are:"<<endl;
			cout<<"Front desk staff name:"<<name<<endl;
			cout<<"Front desk staff education:"<<education<<endl;
			cout<<"Front desk staff certification:"<<certification<<endl;
		}
};
class surgicaltechnologist
{
	public:
		char title,name,education,certification;
		int age;
		void get4()
		{
			cout<<"ENTER TITLE";
			cin>>title;
			cout<<"ENTER NAME";
			cin>>name;
			cout<<"ENTER EDUCATION";
			cin>>education;
			cout<<"ENTER CERTIFICATION";
			cin>>certification;
		}
		void display3()
		{
			cout<<"surgical technologist details are:"<<endl;
			cout<<"surgicaltechnologist name:"<<name<<endl;
			cout<<"surgical technologist education:"<<education<<endl;
			cout<<"surgical technologist certification:"<<certification<<endl;
		}
};
class Doctor
{
	public:
		string Name;
		int Age;
        int Phone;
		string Gender;
		string Address;
		string YOB;
		string Specialty;
		
		void fetchdata()
		{
			cout<<"Enter NAME: "<<endl;
			cin>>Name;			
			cout<<"Enter Age: "<<endl;
			cin>>Age;		
			cout<<"Please Enter your Gender: "<<endl;
			cin>>Gender;
		}
		void putdata();
};

void Doctor::putdata()
{
	cout<<"Enter Specialty: "<<endl;
	cin>>Specialty;
	cout<<"Enter Address: "<<endl;
	cin>>Address;
	cout<<"Enter Year of Birth: "<<endl;
	cin>>YOB;
	cout<<"Enter Phone Number: "<<endl;
	cin>>Phone;
  
}
class Nurse:public Doctor
{
	public:
	
		void getdata()
		{
			cout<<"Please Enter Name: "<<endl;
			cin>>Name;
			cout<<"Please enter Age: "<<endl;
			cin>>Age;
			
			cout<<"Please Enter your Gender: "<<endl;
			cin>>Gender;
		
		}
		void patadata();
};

void Nurse::patadata()
{
	cout<<"Enter Specialty: "<<endl;
	cin>>Specialty;
	cout<<"Enter Address: "<<endl;
	cin>>Address;
	cout<<"Enter Year of Birth: "<<endl;
	cin>>YOB;
	cout<<"Enter Phone Number: "<<endl;
	cin>>Phone;
	   
}
class Technician:public Doctor
{
	public:
	
		void recorddata()
		{
			cout<<"ENTER NAME: "<<endl;
			cin>>Name;
			cout<<"Enter Age: "<<endl;
			cin>>Age;
			cout<<"Please Enter your Gender: "<<endl;
			cin>>Gender;
	
		}
		void details();
};

void Technician::details()
{
	cout<<"Enter Specialty: "<<endl;
	cin>>Specialty;
	cout<<"Enter Address: "<<endl;
	cin>>Address;
	cout<<"Enter Year of Birth: "<<endl;
	cin>>YOB;
	cout<<"Enter Phone Number: "<<endl;
	cin>>Phone;

   
}
class Technologist:public Doctor
{
	public:
	
		void wekadata()
		{
			cout<<"ENTER NAME: "<<endl;
			cin>>Name;
			cout<<"Enter Age: "<<endl;
			cin>>Age;
			cout<<"Please Enter your Gender: "<<endl;
			cin>>Gender;
		
		}
		void drawdata();
};

void Technologist::drawdata()
{
	cout<<"Enter Specialty: "<<endl;
	cin>>Specialty;
	cout<<"Enter Address: "<<endl;
	cin>>Address;
	cout<<"Enter Year of Birth: "<<endl;
	cin>>YOB;
	cout<<"Enter Phone Number: "<<endl;
	cin>>Phone;
  
}

main()
{
	cout<<" Welcome to Mwananchi Hospital."<<endl;
	cout<<"==============================================================================="<<endl<<endl;

		
	Person B;
	B.patadetails();
	B.putdata();
	Patient C;
	C.Records();
	Department Y;
	Y.department();
	Y.displayStaff();	

		
	 
	staff staff1;
    staff1.get();
    Operation_staff staff2;
    staff2.weka();
    Administrative_staff staff3;
    staff3.putdata();
    Technical_staff staff4;
    staff4.wekadata();

	/*Receptionist receptionist1;
	receptionist1.get1();
	surgeon surgeon1;
	surgeon1.get2();
	Frontdeskstaff front_deskstaff1;
	front_deskstaff1.get3();
	surgicaltechnologist surgical_technologist1;
	surgical_technologist1.get4();
    

    Doctor Name;
	Name.fetchdata();
	Doctor Specialty;
	Specialty.putdata();
	Nurse Z;
	Z.getdata();
	Z.patadata();
	Technician G;
	G.recorddata();
	G.details();
	Technologist H1;
	H1.wekadata();
	H1.drawdata(); */
		
	
	
	return 0;
  }

   
 
    

