#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N, int M){
    if(N <= 0 || M <= 0){
		cout << "Invalid input";
	}
	else{
	    for(int dog = 0; dog < N; dog++){
		    for(int cat = 0; cat < M; cat++){
		    	cout << "O";
	    	}
		    cout << "\n";
    	}
	}
}

int main(){

	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	

	
	
	return 0;
}
