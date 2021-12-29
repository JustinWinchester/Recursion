#include <iostream>
using namespace std; 
int factorial(int n){
	if(n==1){
	   return 1; 
	}else{
	 return n * factorial(n-1); 
	}
	}
int sumDigits(int n){
	if(n<10){
	  return n;
	}else{
	return n%10 + sumDigits(n/10);
	}
	}
int count7(int n){
	if(n<10){
	  if(n==7){
	    return 1;
	}else{
	    return 0;
	}
	}else{
	    return count7(n%10) + count7(n/10); 
	}
	}


int powerN(int base, int n){
	if (n==1){
		return base;
	}else{
		return base*powerN(base, n-1);
	}
}
int array11(int arr[],int start, int size){
	if (start==size-1){
		if (arr[start]==11){
			return 1;
		}else{
			return 0;
		}
	}else{
		if (arr[start]==11){
			return 1+ array11(arr,start+1, size);
		}else{
			return array11(arr,start+1, size);
		}	
	}
}
bool array220(int arr[],int start, int size){
	if (start==size-1){
		//stopping case
		return false;
	}else{
		//recursive case
		if (arr[start]*10==arr[start+1]){
			return true;
		}else{
			array220(arr, start+1, size);
		}
	}
}
int countABC(string str){
	if(str.length()<3){
		return 0;
	}else{
		if (str.substr(0,3)=="abc" || str.substr(0,3)=="aba"){
			return 1 + countABC(str.substr(3,str.length()-3));
		}else{
			return countABC(str.substr(1,str.length()-1));
		}	
	}
}
string parenBit(string str){
	if (str.at(0)=='(' && str.at(str.length()-1)==')'){
		return str;
	}else{
		if (str.at(0)!='(' && str.at(str.length()-1)!=')'){
			return parenBit(str.substr(1,str.length()-2));
		}
		if (str.at(0)!='(' && str.at(str.length()-1)==')'){
			return parenBit(str.substr(1,str.length()-1));
		}
		if (str.at(0)=='(' && str.at(str.length()-1)!=')'){
			return parenBit(str.substr(0,str.length()-1));
		}
	}
}
















int main(){

cout<< factorial(5)<< endl;
cout << sumDigits(5447) << endl;
cout << count7(777457) << endl; 

cout<<"The power is: "<<powerN(5,4)<<endl;
	int myarr[]={11, 11, 3, 31, 11};
	cout<<"The number of times 11 appears in array is: "<<array11(myarr,0,8)<<endl;
	cout<<"The property is:";
	if (array220(myarr,0,5)==1){
		cout<<"True"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	string str="abcabaabcttabsabcsssssssssssssss";
	cout<<"The number of correct substrings is: "<<countABC(str)<<endl;
	string str2="(hi)thisisanexample";
	cout<<"The extracted substring is: "<<parenBit(str2)<<endl;

//cout << counter(15) << endl; 
//cout << counter(17) << endl; 


return 0;
}
