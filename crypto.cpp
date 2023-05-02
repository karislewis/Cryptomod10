#include <iostream>
#include <cstring>
#include <algorithm>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc,char * argv[]){
	int shift_amount; 
	shift_amount=atoi(argv[1]);
	string enter_string;
	getline(cin, enter_string);

	string empty_string="";
	int length_enter=enter_string.size();
 	
	for(int i=0;i<length_enter;i++){
		char ch=enter_string.at(i);
		if (ch!=' ') {
			empty_string=empty_string+ch;
		}
	}
//	cout<<empty_string<<endl;

	int count_c=0;
	int count_r=0;
	char x;

	int length_empty=empty_string.size();
	for(int j=0;j<length_empty;j++){
		x=char(toupper(empty_string.at(j)));
		//cout<<x;
		//cout<<"Before the shift"<<endl;
		bool true_false;
		true_false=isalpha(x);
		//cout<<true_false<<endl;
		if (true_false==1){
			x+=shift_amount;
			//cout<<x;
			//cout<<"After the shift"<<endl;
			if (!isalpha(x)){
				x-=26;
				count_c+=1;
			}
			if (count_c==5){
				cout<<" ";
				count_c=0;
				count_r+=1;
			}
			count_c+=1;
			if (count_r==10){
				cout<<endl;
				count_r=0;
			}
		cout<<x;
		}
	}

	cout<<endl;				

	return 0;
}


