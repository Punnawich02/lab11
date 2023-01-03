#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; 
	int i = 1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		if(grade == 'A')
		{
			count[0]++;
		}
		else if(grade == 'B')
		{
			count[1]++;
		}
		else if(grade == 'C')
		{
			count[2]++;
		} 
		else if(grade == 'D')
		{
			count[3]++;
		}
		else if(grade == 'F')
		{
			count[4]++;
		}
		else if(grade == '0')
		{ } //null function
		else
		{
			cout << "Wrong input. Please input again.\n";
			i--;
		}
		i++;
	}while(grade != '0');
	
	int all = count[0] + count[1] + count[2] + count[3] + count[4];
	cout << "In total "<< all <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
