#include<iostream>
  using namespace std;
  
   class Mobile
   {
   	 public:
   	 	int  MobileId;
   	 	string MobileSeries;
   	 	float  MobilePrice;
   	 
   	 void accept()
   	 {
   	 	cout<<" enter Mobile Id = ";
   	 	cin >> MobileId;
   	 	
   	 		cout<<" enter Mobile Series = ";
   	 		cin >> MobileSeries;
   	 		
   	 			cout<<" enter Mobile Price = ";
   	 			cin >> MobilePrice;
		}
   	  void display()
   	  
   	  {
   	      cout<<" Mobile Id  = "<<  MobileId <<endl;	
   	      cout<<" Mobile Series = "<<  MobileSeries <<endl;	
   	      cout<<" Mobile Price = "<<  MobilePrice <<endl;	
		 }
   };
   
   int main()
   {
   	Mobile m[5];
   	
   	cout << "\n Enter information of 5 mobiles =\n ";
   	
   	for (int i =0; i<5;i++)
   	{
   		cout<<"\n enter details of Mobile  = " << i + 1<< endl;
		m[i].accept();	
	}
	
	cout << "\n ---   mobile information ---  =\n ";
	
		for (int i =0; i<5;i++)
		{
			cout<<"\n  Details of Mobile  " << i + 1<< endl;
			
	     	m[i].display();	
		}
		
		return 0;
   }
   
