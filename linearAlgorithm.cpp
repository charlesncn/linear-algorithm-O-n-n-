#include <iostream>

using namespace std;

class Complexity
{
	private: int i,n;
	public: void sum(){
		cout<<"Enter value of n"<<endl;
		cin>>n;
		for(i=1;i<=n;i++){
		
		cout<<i<<"\t@"<<endl;
		}
	}


};
int main()
{
	Complexity co;
	co.sum();
	return 0;
	
}
