#include <iostream> //cout, cin  � ��
#include <windows.h> //setlocale, setconsolecp, setconsoleoutputcp;
#include <conio.h> //getch
#include <cstdlib>//system("pause");

using namespace std;

void ValueAdressPointer();// 2 ������� ���������
void Double();//3 ������� ���������
void Array();//4 ������� ���������
void Info();//5 ������� ���������

//��������� ��������� ��� 5 ������� ���������
struct Address
{
	char city [20]; 
	char street [30]; 
	int house;
};
	
struct Person 
{
	char Fname [15]; 
	char Lname [20];
};
	
// ���������� ���������
struct Employee 
{
	Person p;	// �������� ���������
	Address addr;// �������� ���������
};

int main(int argc, char** argv){
	setlocale(0,"rus");
	
	int ChoiceMenu;
	int ChoiceOnEnd;
	
	do{
	
	menu:	
	std::cout<<"������� ����:"<<std::endl;
	std::cout<<"[1]����� ������������� �����, �� ������� �����������"<<std::endl;
	std::cout<<"[2]��������, ������, ���������"<<std::endl;
	std::cout<<"[3]��� ������ double, ���������"<<std::endl;
	std::cout<<"[4]������ � ��������, ����� ��. �������"<<std::endl;
	std::cout<<"[5]������ �� ����������"<<std::endl;
	std::cout<<"[0]����� �� ���������"<<std::endl;
	std::cout<<"�������� ����� ����:";
	std::cin>>ChoiceMenu;

	switch(ChoiceMenu){
		case 1:{
		goto main;
		break;
		}
		case 2:{
			ValueAdressPointer();
			break;
		}
		case 3:{
			Double();
			break;
		}
		case 4:{
			Array();
			break;
		}
		case 5:{
			Info();
			break;
		}
		case 0:{
			system("cls");
			std::cout<<"����� �� ���������!";
			getch();
			exit(0);
			break;
		}
		
		default:{
			system("cls");
			std::cout<<"������!�������� ����� ����!";
			getch();
			goto menu;
			break;
		}
	}// end switch
}while(ChoiceMenu != 0);
	
	main:
	system("cls");
	int x, sum = 0;
	
	bool flag = true;
	
	while (flag){
	std::cout<<"������� x:";
	std::cin>>x;
	if (x >= 0)
	{
		sum += x;
		continue;
	}
	flag = false;
	}
	
	std::cout<<"�����:"<<sum<<std::endl;
	getch();
	std::cout<<"������� ����������?(1-��,2-���)"<<std::endl;
	std::cin>>ChoiceOnEnd;
	if (ChoiceOnEnd == 1)
	{
		system("cls");
		goto menu;
	}
	else 
	system("cls");
	std::cout<<"����� �� ���������!";
	exit(0);
	
}//main

void ValueAdressPointer(){
	int ChoiceOnEnd;

	system("cls");
	int x = 5 ;
	int * px = & x ;				
	std::cout << "Value x\t\t" << x << std::endl ;	
	std::cout << "Address x\t" << & x << std::endl;	
	std::cout << "Pointer px\t" << px << std::endl;
	
	getch();
	
	
	std::cout<<"������� ����������?(1-��,2-���)"<<std::endl;
	std::cin>>ChoiceOnEnd;
	if (ChoiceOnEnd == 2)
	{
		system("cls");
		std::cout<<"����� �� ���������!";
		exit(0);
	}
	else 
	system("cls");
}

void Double(){
	int ChoiceOnEnd;	
	system("cls");	
	double v1 = 0.05, v2 = 2.5e32 ;
	double * pv ;				
	pv = & v1 ;	
				
	std::cout << "pv =\t" << pv << std::endl ;	
	std::cout << "v1 =\t" << v1 << std::endl ;	
	std::cout << "*pv = \t" ;
	std::cout << * pv << std::endl ;		
	pv = & v2 ;	
				
	std::cout << "pv =\t" << pv << std::endl ;	
	std::cout << "v2 =\t" << v2 << std::endl ;	
	std::cout << "*pv = \t" ;
	std::cout << * pv << std::endl ;	
	getch();
	std::cout<<"������� ����������?(1-��,2-���)"<<std::endl;
	std::cin>>ChoiceOnEnd;
	if (ChoiceOnEnd == 2)
	{
		system("cls");
		std::cout<<"����� �� ���������!";
		exit(0);
	}
	else 
	system("cls");
}

void Array(){
	system("cls");
	int ChoiceOnEnd;
	
	int sum=0;
	int array [] = { 10, 20, 30, 40, 50 } ;
	int size = sizeof ( array ) / sizeof (array[0]);
	
	for ( int i = 0; i < size; i++ )
		cout << * ( array + i ) << '\t';
	std::cout<<std::endl;
	
	int* p = array ;
	int count = 0 ;
	do
	{
		cout << * p++ << '\t';
		count++;
	}while ( count < size );
	
	std::cout<<std::endl<<std::endl;
	
	for ( int i = 0; i < size; i++ )
	{
	
		sum +=	*( array + i );
	}
	
	getch();
	
	std::cout<<std::endl<<"����� ��������� �������:"<<sum*2;
	std::cout<<std::endl<<"������� ����������?(1-��,2-���)"<<std::endl;
	std::cin>>ChoiceOnEnd;
	if (ChoiceOnEnd == 2)
	{
		system("cls");
		std::cout<<"����� �� ���������!";
		exit(0);
	}
	else 
	system("cls");
 }
	
void Info(){	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int ChoiceOnEnd;
	Employee *p = new Employee ;
	
	system("cls");
	
	std::cout<<"������� ������:"<<std::endl;
	std::cout<<std::endl<<"���:";
	std::cin >> p -> p.Fname;
	
	std::cout<<std::endl<<"�������:";
	std::cin >> p -> p.Lname;
	
	std::cout<<std::endl<<"�����:";
	std::cin >> p -> addr.city;
	
	std::cout<<std::endl<<"�����:";
	std::cin >> p -> addr.street;
	
	std::cout<<std::endl<<"����� ����:";
	std::cin >> p -> addr.house;
	
	std::cout<<std::endl<<"��������� ������������� ����������:"<<std::endl;
	
	system("cls");
	
	std::cout<<"���:"<<p -> p.Fname;
	
	std::cout<<std::endl<<"�������:"<<p -> p.Lname;
	
	std::cout<<std::endl<<"�����:"<<p -> addr.city;
	
	std::cout<<std::endl<<"�����:"<<p -> addr.street;
	
	std::cout<<std::endl<<"����� ����:"<<p -> addr.house;

	std::cout<<std::endl<<"������� ����������?(1-��,2-���)"<<std::endl;
	std::cin>>ChoiceOnEnd;
	if (ChoiceOnEnd == 2)
	{
		system("cls");
		std::cout<<"����� �� ���������!";
		exit(0);
	}
	else 
	system("cls");
}
