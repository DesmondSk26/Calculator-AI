#include<stdio.h>
#include<math.h>
#include<string.h>
int sum(int a[],int);
int subs(int a[]);
int multi(int a[],int);
int devide(int a[]);
int fact(int a[],int);
int sqr(int a[],int);
int cube(int a[],int);
int root(int a[],int);
int power(int a[],int,int);
void main()
{
	int a[20],n,i=0,j,k,l,m,t;
	char nm[20];
	printf("                          %c",272);for(t=1;t<29;t++){printf("%c",247);}printf("%c",273);
	printf("\n                          %c",176);for(t=1;t<29;t++){printf(" ");}printf("%c",176);
	printf("\n                          %c Welcome To S.K. Calculator %c",176,176);
	printf("\n                          %c",176);for(t=1;t<29;t++){printf(" ");}printf("%c\n",176);
	printf("                          %c",272);for(t=1;t<29;t++){printf("%c",247);}printf("%c",273);
	printf("\n\nEnter Your Name : ");
	gets(nm);
	printf("\n\n                             Here We Go %s",nm);
	First:
	printf("\n\nHow Many Numbers YOu want to use %s : ",nm);
	scanf("%d",&n);
	printf("\n\n%s, Enter Some Numbers YOu want to Operate : ",nm);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	i=0;
	printf("\n\nPress Any Command : \n\nPress 1 TO Sum\n\nPress 2 to Substract\n\nPress 3 To Multiply\n\nPress 4 To Devide\n\nPress 5 To Factorial\n\nPress 6 to Square\n\nPress 7 To Cube\n\nPress 8 To Root\n\nPress 9 To Power It To N Times\n\nPress 10 TO Cuberoot\n\nPress Any Key To Close\n\nEnter Choice : ");
	scanf("%d",&m);
	switch(m)
	{
		case 1 :
			l=sum(a,n);
			break;
		case 2 :
				if(n>2)
				{
				printf("\n\n%s You Need To Enter Two Digits TO Operate This Operation\n\nWant to Try Again\n\nPress 1 TO Yes\n\nPress 2 To No\n\nEnter Choice : ",nm);
				scanf("%d",&j);
				if(j==1)
				{
					printf("\n\nEnter Two Numbers %s : ",nm);
					for(i=0;i<2;i++)
					{
						scanf("%d",a+i);
					}
					l=subs(a);
					break;
				}	
				else
				{
					printf("\n\n\n  %c !!Okay %s!! %c\n %c !!Good Bye!! %c\n\n\n",257,nm,257,258,258);
					break;
				}		
				}
				else
					l=subs(a);
					break;	
		case 3 :
			multi(a,n);
			break;
		case 4 :
				if(n>2)
				{
				printf("\n\n%s You Need To Enter Two Digits TO Operate This Operation\n\nWant to Try Again\n\nPress 1 TO Yes\n\nPress 2 To No\n\nEnter Choice : ",nm);
				scanf("%d",&j);
				if(j==1)
					{
					printf("\n\nEnter Two Numbers %s : ",nm);
					for(i=0;i<2;i++)
					{
						scanf("%d",a+i);
					}
					l=devide(a);
					break;	
					}	
				else
					{
					printf("\n\n\n  %c !!Okay %s!! %c\n %c !!Good Bye!! %c\n\n\n",257,nm,257,258,258);
					break;
					}	
				}
				else
					l=devide(a);
					break;	
		case 5 : 
			l=fact(a,n);
			break;
		case 6 :
			l=sqr(a,n);
			break;
		case 7 :
			l=cube(a,n);
			break;
		case 8 :
			l=root(a,n);
			break;
		case 9 :
				printf("\n\n%s Please Enter Number YOu Want to Multiply N Times : ",nm);
				scanf("%d",&k);
				l=power(a,k,n);
				break;
		case 10 :
			l=cuberoot(a,n);
			break;
		default :
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
			break;	
	}
	if(l!=0)
	{
		l=0;
		goto First;
	}	
}
	int sum(int a[],int n)
	{
		int s=0,i,b;
		for(i=0;i<n;i++)
		{
			s=s+*(a+i);
		}
		printf("\n\nYour Sum %c %d",282,s);
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
	}
	int subs(int a[])
	{ 
		int b;
		if(a[0]>a[1])
			printf("\n\nYour Substract %c %d",282,a[0]-a[1]);
		else
			printf("\n\nYour Substract %c %d",282,a[1]-a[0]);
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(5);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
	}
	int multi(int a[],int n)
	{
		int m=1,i,b;
		for(i=0;i<n;i++)
		{
			m=m**(a+i);
		}
		printf("\n\nYour Multiply %c %d",282,m);
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);		
	}
	int devide(int a[])
	{
		int b;
		if(a[0]>a[1])
			printf("\n\nYour Devide %c %f",282,(float)a[0]/a[1]);
		else
			printf("\n\nYour Devide %c %f",282,(float)a[1]/a[0]);
			printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
	}
	int fact(int a[],int n)
	{
		int i,j,f=1,b;
		printf("\n\nFactorials Of Numbers Are  : ");
		for(i=0;i<n;i++)
		{
			for(j=1;j<=*(a+i);j++)
			{
				f=f*j;
			}
		printf("\n%d's Factorial %c %d",*(a+i),282,f);
		f=1;
		}
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
	}
	int cube(int a[],int n)
	{
		int i,b;
		printf("\n\nYour Cube Of Numbers Are : \n\n");
		for(i=0;i<n;i++)
		{
			printf("\n%d's Cube %c %d",*(a+i),282,*(a+i)**(a+i)**(a+i));
		}
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
	}
	int sqr(int a[],int n)
	{
		int i,b;
		printf("\n\nYour Square Of Numbers Are : ");
		for(i=0;i<n;i++)
		{
			printf("\n%d's Square %c %d",*(a+i),282,*(a+i)**(a+i));
		}
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
	}
	int root(int a[],int n)
	{
		int i,b;
		printf("\n\nYour Roots Of Given Numbers Are : \n\n");
		for(i=0;i<n;i++)
		{
			printf("\n%c%d %c %f",251,*(a+i),282,sqrt(*(a+i)));	
		}
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);	
	}
	int power(int a[],int k,int n)	
	{
		int i,x,b;
		printf("\n\nYour Powers Of The Given Numbers Are : \n\n");
		for(i=0;i<n;i++)
		{
			x=pow(*(a+i),k);
			printf("\n%d%c %c %d ",*(a+i),252,282,x);
		}
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);	
	}
	int cuberoot(int a[],int n)
	{
		int b,i;
		printf("\n\nYour Cuberoot Of Given Numbers Are : \n\n");
		for(i=0;i<n;i++)
		{
			printf("\n%d's Cube Root %c %f",*(a+i),282,cbrt(*(a+i)));	
		}
		printf("\n\n%c !!Try Again!! %c\n\nFor Yes Press 1\nFor No Press 2\n:--",257,257);
		scanf("%d",&b);
		if(b==1)
			return(10);
		else
			printf("\n\n\n   %c !!Okay!! %c\n %c !!Good Bye!! %c\n\n\n",257,257,258,258);
	}
