#include <iostream>
#include <string>
#include <random>
#include <windows.h>
#include <time.h>
using namespace std;
class Player{
	private:
		char ans;//r--->rock, p--->paper, s--->scissors 
	public:
	Player(char a){
		this->ans;
	}
	char generateAns(){
		char as[3];
		as[0]='r';
		as[1]='p';
		as[2]='s';
		srand(time(NULL));
		int i=rand()%3;
		return as[i];		
	}
};

void compWin(){
	cout<<"COMPUTER WINS!"<<endl;
}
void playerWin(){
	cout<<"PLAYER WINS!"<<endl;
}

void compareAns(char c,char p){
		p=tolower(p);
		if(c==p)//same result
			cout<<"DRAW!"<<endl;

		if(c=='r' && p=='s')//rock vs scissors
			compWin();
		else if(c=='s' && p=='r')
			playerWin();
			
		
		else if(c=='p' && p=='r')//rock vs paper
			compWin();
		else if(c=='r' && p=='p')
			playerWin();
			
			
		else if(c=='s' && p=='p')//paper vs scissors
			compWin();
		else if(c=='p' && p=='s')
			playerWin();
}

int main(void){
	Player computer(' ');
	Player player(' ');
	char m;
	char ans;
	cout<<"Type G to Go, Q to exit"<<endl<<"r-->rock, p-->paper, s-->scissors: ";
	cin>>m;
	while(m!='q' || m!='Q'){
		cout<<"Rock"<<endl;
		Sleep(500);
		cout<<"Paper"<<endl;
		Sleep(500);
		cout<<"Scissors"<<endl;
		Sleep(500);
		cout<<"Answer: "<<endl;
		cin>>ans;
		cout<<"Computer:"<<computer.generateAns()<<endl;
		compareAns(computer.generateAns(),ans);	
		cout<<"Continue? G/Q : ";
		cin>>m;
		if(m=='q' || m=='Q')
		return 0;
	}
	return 0;
}
