#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
	string input;
	getline(cin,input);
	int i,a=0;
	for(i=0; i<=input.length(); i++){
		if(isalpha(input[i])){
			if(((i-a)%2)==0){
				putchar(toupper(input[i]));
			}else{
				putchar(tolower(input[i]));
			}
		}else{
			putchar(input[i]);
			a+=1;
		}
	}
}