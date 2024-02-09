#include<iostream>
using namespace std;
class Test
{
	static int x;
	public:
	void glb(int x){
		cout<<"VELUE OF GLOBLE X IS: "<<Test::x<<"\n";
		cout<<"VELUE OF LOCAL X IS: "<<x;
	}
};
 int Test::x=4;
int main()
{
   Test obj;
   int x=7;
   obj.glb(x);
    return 0;
}