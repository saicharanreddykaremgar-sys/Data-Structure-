#include<iostream>
  using namespace std;
  
   class Calculater 
   {
   	 public:
   	 	int add(int a,int b)
   	 	{
   	 		return a+b;
		}
		int add(int a,int b, int c)
		{
			return a+b+c;
		}
   };
   int main()
   {
   	  Calculater c1;
   	  cout<<"sum of two numbers = "<< c1.add(10,20);
   	  
   	  cout<<" sum of three numbers = "<< c1.add(10,20,30);
   	  
   	  return 0;
   }
