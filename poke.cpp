#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

string pokesplit_1(string str) {
	string a;
	int leng = str.find("-",0);
	a = str.substr(0, leng); 
//	cout << a << endl;
	return a;
}
string pokesplit_2(string str) {
	string a;
	int leng = str.find("-",0);
	a = str.substr(leng+1); 
//	cout << a << endl;
	return a;
}

int main()
{
	char str[22];
	gets(str);
	string a,b;
	a=pokesplit_1(str);
	b=pokesplit_2(str);
//	cout << a << endl;
//	cout << b << endl;
	char *p;
	char *q;
	char m[22];
	char n[22];
	strcpy(m,a.c_str());
	strcpy(n,b.c_str());
	p=strtok(m," ");
	int i=0,j=0;
	while(p!=NULL){
//		cout << p << endl;
		p=strtok(NULL," ");
		i++;
	}
	q=strtok(n," ");
	while(q!=NULL){
//		cout << q << endl;
		q=strtok(NULL," ");
		j++;
	}
//	cout << i <<' '<< j <<endl;
	if(i==2&&m[0]=='j'){
		cout <<a<<endl;return 0;
	}
	if(j==2&&n[0]=='j'){
		cout <<b<<endl;return 0;
	}
	if(i==4&&j!=4){
		cout <<a<<endl;return 0;
	}
	if(j==4&&i!=4){
		cout <<b<<endl;return 0;
	}
	if(i!=j){
			cout <<"ERROR"<<endl;return 0;
	}
	if(i==1||i==2||i==3||i==4||i==5){
		if(m[0]=='2'){
			cout <<a<<endl;return 0;
		}
		if(n[0]=='2'){
			cout <<b<<endl;return 0;
		}
		if(m[0]=='A'){
			cout <<a<<endl;return 0;
		}
		if(n[0]=='A'){
			cout <<b<<endl;return 0;
		}
		if(m[0]=='K'){
			cout <<a<<endl;return 0;
		}
		if(n[0]=='K'){
			cout <<b<<endl;return 0;
		}
		if(m[0]=='Q'){
			cout <<a<<endl;return 0;
		}
		if(n[0]=='Q'){
			cout <<b<<endl;return 0;
		}
		if(m[0]=='J'){
			cout <<a<<endl;return 0;
		}
		if(n[0]=='J'){
			cout <<b<<endl;return 0;
		}
		if(m[0]<n[0]){
			cout <<b<<endl;return 0;
		}
		if(m[0]>n[0]){
			cout <<b<<endl;return 0;
		}	
	}
/*	cout << m[0]<<' '<<m[1]<<' '<<m[2]<<' '<<m[3]<<' '<<m[4]<<' '<<n[0]<<' '<<n[1]<<' '<<n[2]<<' '<<n[3]<<' '<<n[4]<<endl;*/ 
	system("pause");
	return 0;
}
