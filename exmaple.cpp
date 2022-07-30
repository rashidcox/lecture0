#include<iostream>
using namespace std;

class User{
	public:
		string name;
		string email;
		string password;

		User(string a, string b, string c){
			name = a;
			email = b;
			password = c;
		}
};


int main(){
	User Object1("kamal uddin", "coxringcox@gmail.com", "12121");

	cout<<Object1.name<<endl;
}