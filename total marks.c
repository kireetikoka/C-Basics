#include<stdio.h>
void main()
{
	// variable declaration 
	int phys, eng, maths, chem, tot;
	
	// intialization 
	phys = 80;
	eng = 90;
	maths = 85;
	chem = 80;
	
	// calculation
	tot = phys+eng+maths+chem;
	
	// output
	printf("marks in phys :%d,\n",phys);
	printf("marks in eng :%d,\n",eng);
	printf("marks in maths :%d,\n",maths);
	printf("marks in chem : %d,\n",chem);
	printf("total marks : %d,\n",tot);
}
