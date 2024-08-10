// تابعی بنویسید که یک آرایه ی شش عضوی را دریافت کرده بوسیله اشاره گر آرایه را مرتب کند
//sort by pointers
#include<iostream>
#include<conio.h>
using namespace std;

void sort(int *temp)
{
	int i,j,te;
	 for(i=0;i<5;i++)
	  for(j=i+1;j<6;j++)
	    if(*(temp+i)>*(temp+j))
	    {
	    	te=*(temp+i);
	    	*(temp+i)=*(temp+j);
	    	*(temp+j)=te;
		}
}


	main()
	{
	   int i,mark[6];
	   
	   for(i=0;i<6;i++)
	   {
	   	cout<<"Enter mark "<<"["<<i<<"]: ";
	   	cin>>mark[i];
	   }
	   
	   cout<<"\n============befor=============\n";
	   for(i=0;i<6;i++)
	     cout<<mark[i]<<"\t";
	 //call fanction sort
	 sort(mark);
	 
	 
	     cout<<"\n============After=============\n";
	     
	     for(i=0;i<6;i++)
	      cout<<mark[i]<<"\t";
	      
	    getch();
	    return 0;
	}