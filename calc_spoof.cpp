/* Axel Gumira; CSE-130-50; 7/25/2024*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <complex.h>

//all user defined variables
int sel, pnum;
float num1, num2, num3;
//constants
const float pi=3.14159;

//function for menu
void menu()
{
	printf("\n\nCalculator Menu:\n\n(1) Addition\n(2) Subtraction\n(3) Multiplication\n(4) Division\n(5) Modulus");
	printf("\n(6) Prime\n(7) Factorial\n(8) Power\n(9) Fibonacci\n(10) Sin");
	printf("\n(11) Cos\n(12) Tan\n(13) Csc\n(14) Sec\n(15) Cot");
	printf("\n(16) Log\n(17) LN\n(18) Square root\n(19) Quadratic formula\n(20) Absolute value\n(0) Exist");
	printf("\n\nChoose an operation: ");
	scanf("%d",&sel);
}

//function that gets users' input + operations (lines 26-251)
void add()
{
	printf("Enter 1st number: ");
	scanf("%f",&num1);
	printf("Enter 2nd number: ");
	scanf("%f",&num2);
	printf("%.2f + %.2f = %.2f\n\n",num1,num2,(num1+num2));
}
void sub()
{
	printf("Enter 1st number: ");
	scanf("%f",&num1);
	printf("Enter 2nd number: ");
	scanf("%f",&num2);
	printf("%.2f - %.2f = %.2f\n\n",num1,num2,(num1-num2));
}
void mul()
{
	printf("Enter 1st number: ");
	scanf("%f",&num1);
	printf("Enter 2nd number: ");
	scanf("%f",&num2);
	printf("%.2f * %.2f = %.2f\n\n",num1,num2,(num1*num2));
}
void div()
{
	printf("Enter 1st number: ");
	scanf("%f",&num1);
	printf("Enter 2nd number: ");
	scanf("%f",&num2);
	printf("%.2f / %.2f = %.2f\n\n",num1,num2,(num1/num2));
}
void mod()
{
	printf("Enter 1st number: ");
	scanf("%f",&num1);
	printf("Enter 2nd number: ");
	scanf("%f",&num2);
	printf("%.2f %% %.2f = %.2f\n\n",num1,num2,fmod((float)num1,(float)num2));
}
void pri()
{
	int prime=1; 
	printf("Enter number for check: ");
	scanf("%d",&pnum);
	for (int i=2; i<pnum; i++)
	{
		if (pnum%i==0)
		{
			prime=0;
			break;
		}
	}					
	if (prime==0)
		{
		printf("%d is NOT prime\n",pnum);
		}

	else
		{
		printf("%d is prime\n",pnum);
		}
}
void fac()
{
	float fact=1;
	printf("Enter a number: ");
	scanf("%f",&num1);
	for (int x=1; x<=num1; x++){
		fact=fact*x;
		}
	printf("%.0f!=%.0f\n",num1,fact);
}
void power()
{
	printf("Enter a base: ");
	scanf("%f",&num1);
	printf("Enter exponent: ");
	scanf("%f",&num2);
	printf("%.0f^%.0f=%.0f\n",num1,num2,pow(num1,num2));
	
	//reference: https://www.scaler.com/topics/pow-function-in-c/
}
void fib()
{
	printf("Enter number of terms: ");
	scanf("%d",&pnum);
	int arr[pnum]={0,1};
	//adds to array
	for (int i=2; i<=pnum; i++){
		arr[i]=arr[i-2]+arr[i-1];
	}
	//prints array
	for (int x=0; x<=pnum; x++){
		printf("%d ", arr[x]);
	}
	
}
void vsin()
{
	float val,cval; //cval is convert val from degrees to radians
    printf("Enter number: ");
	scanf("%f", &num1);
	val=sin(num1);
    cval=sin(num1*(pi/180));
    printf("sin (%.3f) radians= %.3f",num1,val);
    printf("\nsin (%.3f) degrees= %.3f\n",num1,cval);
}

	
void vcos()
{
	float val,cval; //cval is convert val from degrees to radians
    printf("Enter number: ");
	scanf("%f", &num1);
	val=cos(num1);  //radians
    cval=cos(num1*(pi/180));    //degrees
    printf("cos (%.3f) radians= %.3f",num1,val);
    printf("\ncos (%.3f) degrees= %.3f\n",num1,cval);
}
void vtan()
{
	float val,cval; //cval is convert val from degrees to radians
    printf("Enter number: ");
	scanf("%f", &num1);
	val=tan(num1);
    cval=tan(num1*(pi/180));
    printf("tan (%.3f) radians= %.3f",num1,val);
    printf("\ntan (%.3f) degrees= %.3f\n",num1,cval);
}

void vcsc()
{
	float val,cval; //cval is convert val from degrees to radians
    printf("Enter number: ");
	scanf("%f", &num1);
    //changes made do csc
	val=1/(sin(num1));
    cval=1/(sin(num1*(pi/180)));
    printf("csc (%.3f) radians= %.3f",num1,val);
    printf("\ncsc (%.3f) degrees= %.3f\n",num1,cval);
}
void vsec()
{
	float val,cval; //cval is convert val from degrees to radians
    printf("Enter number: ");
	scanf("%f", &num1);
    //changes made do sec
	val=1/(cos(num1));
    cval=1/(cos(num1*(pi/180)));
    printf("sec (%.3f) radians= %.3f",num1,val);
    printf("\nsec (%.3f) degrees= %.3f\n",num1,cval);
}
void vcot()
{
	float val,cval; //cval is convert val from degrees to radians
    printf("Enter number: ");
	scanf("%f", &num1);
    //changes made do cot
	val=1/(tan(num1));
    cval=1/(tan(num1*(pi/180)));
    printf("cot (%.3f) radians= %.3f",num1,val);
    printf("\ncot (%.3f) degrees= %.3f\n",num1,cval);
}
void vlog()
{
    printf("Enter number: ");
	scanf("%f", &num1);
    printf("log (%.3f) = %.3f", num1, log10(num1));    
}
void vln()
{
	printf("Enter number: ");
	scanf("%f", &num1);
    printf("LN (%.3f) = %.3f", num1, log(num1)); 
}
void vsqrt()
{
	printf("Enter number: ");
	scanf("%f", &num1);
    printf("square root of (%.3f) = %.3f", num1, sqrt(num1)); 
}
void qdeq()
{
	printf("Quadratic formula: ax^2+bx+c=0");
    printf("\na=");
    scanf("%f",&num1);
    printf("b=");
    scanf("%f",&num2);
    printf("c=");
    scanf("%f",&num3);
    float b_4ac=pow(num2,2)-(4*num1*num3);
    //case for real numbers
   if (b_4ac>=0)
    {
        float pos=(-num2+sqrt(b_4ac))/(2*num1);
        float neg=(-num2-sqrt(b_4ac))/(2*num1);
        printf("the roots are %f and %f\n", pos, neg);
    }
    //handles the case of complex numbers
    else
    {
        float _Complex sqrt_b_4ac=csqrt(b_4ac);
        float _Complex pos=(-num2+sqrt_b_4ac)/(2*num1);
        float _Complex neg=(-num2-sqrt_b_4ac)/(2*num1);
        printf("the roots are %.2f%+.2fi\n", creal(pos), cimag(pos));
        printf("the roots are %.2f%+.2fi\n", creal(neg), cimag(neg));
        
        //attempt to brute force
        /*float cb_4ac=fabs(b_4ac);
        float b_2a=(-num2/(num1*2));
        float cneg=(2*num1);
        printf("the roots are %.2f + sqrt(%.2f)i/(%.2f)\n", b_2a, cb_4ac,cneg);
        printf("the roots are %.2f - sqrt(%.2f)i/(%.2f)\n", b_2a, cb_4ac,cneg);*/

    }    

}
void vabs()
{
    printf("Enter number:");
    scanf("%f",&num1);
    printf("|%.3f|=%.3f",num1,fabs(num1));
}
//switch statement
int main()
{
	while (true)
	{
		menu();
		switch (sel)
		{
			case 1:	//add
				add();
				break;
			case 2: //sub
				sub();							
				break;
			case 3: //times
				mul();				
				break;
			case 4: //divide
				div();
				break;
			case 5: //mod
				mod();				
				break;
			case 6: //prime?
				pri();				
				break;
			case 7: //factorial
				fac();
				break;
			case 8: //power
				power();
				break;
			case 9: //fibonacci
				fib();
				break;
			case 10: //sin
				vsin();
				break;
			case 11: //cos
				vcos();
				break;
			case 12: //tan
				vtan();
				break;	
			case 13: //csc
				vcsc();
				break;		
			case 14: //sec
				vsec();
				break;
			case 15: //cot
				vcot();
				break;
			case 16: //log
				vlog();
				break;
			case 17: //ln
				vln();
				break;
			case 18: //sqrt
				vsqrt();
				break;
			case 19: //quadratic formula
				qdeq();
				break;
            case 20: //absolute value
                vabs();
                break;
			case 0: //exist
				printf("Bye");
				exit(0);
		}
	}
}