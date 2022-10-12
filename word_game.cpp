#include<iostream>
using namespace std;
int main(){
	char input,input3,input2,input4,input5;
	int win=0,loss=0;
	int winning=0,lossing=0;
	int input1,i,j=0,check=0;;
char game[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


cout<<"Enter E/e To Continue :";cin>>input;cout<<endl;
while(input=='e' || input=='E'){
	cout<<" 1: EASY  :"<<endl;
	cout<<" 2: HARD:"<<endl;
	cin>>input1;cout<<endl;
	if(input1==1){
		i=0;
			if(i==0){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<game[2]<<"__"<<game[19]<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					if(input3=='a'|| input3=='A'){
						cout<<"YOU ENTERED THE CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:"<<endl;
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
			
			}
			cout<<"DO You WANT TO PLAY MORE y/n:";cin>>input2;
			if(input2=='y'|| input2=='Y') {
			i++;
			if(i==1){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<game[11]<<game[0]<<"__"<<game[24]<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					if(input3=='z' || input3=='Z') {
						cout<<"YOU ENTERED CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:"<<endl;
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
					} }
			else{
				break;
			}
				cout<<"DO You WANT TO PLAY MORE y/n:";cin>>input2;
			if(input2=='y'|| input2=='Y') {
			i++;
			if(i==2){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<game[2]<<game[14]<<game[12]<<"__"<<game[20]<<game[19]<<game[4]<<game[17]<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					if(input3=='p' || input3=='P') {
						cout<<"YOU ENTERED CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:"<<endl;
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
					} }
			
			
	
			
			
			
			
		
		
	}
  else if(input1==2){
  		i=0;
			if(i==0){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<game[0]<<game[11]<<"__"<<game[7]<<game[0]<<game[1]<<"__"<<game[19]<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					cin>>input4;
					if((input3=='p'|| input3=='P') && (input4=='e' || input4=='E')){
						cout<<"YOU ENTERED THE CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:"<<endl;
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
			
			}
			cout<<"DO You WANT TO PLAY MORE y/n:";cin>>input2;
			if(input2=='y'|| input2=='Y') {
			i++;
			if(i==1){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<game[0]<<"__"<<game[18]<<game[8]<<"__"<<game[13]<<"__"<<game[4]<<game[13]<<game[19]<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					cin>>input4;
					cin>>input5;
					if((input3=='s' || input3=='S') && (input4=='g' || input4=='G') && (input5=='m' || input5=='M')) {
						cout<<"YOU ENTERED CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:";
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
					} }
			else{
				break;
			}
				cout<<"DO You WANT TO PLAY MORE y/n:";cin>>input2;
			if(input2=='y'|| input2=='Y') {
			i++;
			if(i==2){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<"__"<<game[0]<<game[19]<<game[7]<<"__"<<game[12]<<game[0]<<game[19]<<game[8]<<game[2]<<"__"<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					cin>>input4;
					cin>>input5;
					if((input3=='m' || input3=='M') && (input4=='e' || input4=='E') && (input5=='S' || input5=='s')) {
						cout<<"YOU ENTERED CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:"<<endl;
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
					} }
				else{
					break;
				}
					cout<<"DO You WANT TO PLAY MORE y/n:";cin>>input2;
			if(input2=='y'|| input2=='Y') {
			i++;
			if(i==3){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<"__"<<game[0]<<game[19]<<game[7]<<"__"<<game[12]<<game[0]<<game[19]<<game[8]<<game[2]<<"__"<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					cin>>input4;
					cin>>input5;
					if((input3=='m' || input3=='M') && (input4=='e' || input4=='E') && (input5=='S' || input5=='s')) {
						cout<<"YOU ENTERED CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:"<<endl;
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
					} }
				else{
					break;
				}
					cout<<"DO You WANT TO PLAY MORE y/n:";cin>>input2;
			if(input2=='y'|| input2=='Y') {
			i++;
			if(i==4){
				loss=0;win=0;
				cout<<"GUESS THE ALPHABET :"<<endl;
				cout<<game[0]<<"__"<<game[1]<<game[17]<<"__"<<game[21]<<game[8]<<game[0]<<game[19]<<game[8]<<"__"<<game[13]<<endl;
				for(j=1;j<3;j++){
					cin>>input3;
					cin>>input4;
					cin>>input5;
					if((input3=='m' || input3=='M') && (input4=='e' || input4=='E') && (input5=='S' || input5=='s')) {
						cout<<"YOU ENTERED CORRECT LETTER:"<<endl;
						win++;
						break;
						
					}
					else{
						loss++;
						cout<<"ONE MORE CHANCE:"<<endl;
					}
					
				}
				if(win>0){
					winning++;
				}
				else if(loss==2){
					lossing++;
				}
					} }
				else{
					break;
				}
			
			
	
			
			
			
			
		
		
	}
	else {
		cout<<"You entered incorrect digit:"<<endl;
	}
  
	
	
	

cout<<"Enter E/e To Continue :";cin>>input;cout<<endl;	
}
cout<<"Total  Win="<<winning<<endl;
cout<<"Total  Loss="<<lossing<<endl;
 
	return 0;
}
