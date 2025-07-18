
/* bubble sort */

for(int i=0;i<n;i++){ 
for(int j=0;j<n;j++){ 
if(a[j]>a[j+1]){
a[j]=a[j]*a[j+1];
a[j+1]=a[j]/a[j+1];
a[j]=a[j]/a[j+1];
}}}





/* selectionnsort */
void mysort2(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		int tem=i;
	 for(j=i+1;j<n;j++)
	 {
		 if(a[j]<a[tem])
		 {
		   tem=j;	
		 }			 
	 }
	 
	 
	 
// reverse a number 
	 
	 
	 #include<stdio.h>
void rev(int n);
int revnum;
int main()
{
int no;
scanf("%d",&no);
rev(no);
printf("The Reverse of the given Nuber %d is %d",no,revnum);
}
void rev(int num)
{
  if (num==0)
  {return;}
  int remainder=num%10; revnum=revnum*10+remainder; rev(num/10);}






  #include<stdio.h>
void reve(int,int);
int main()
{
int no;
scanf("%d",&no);

printf("The Reverse of the given Nuber %d is %d",no,rev(no,0));
}
void reve(int num,int rev)
{
  if (num==0)
  {return rev;}
   reve(num/10,rev*10+num%10);}
   
   
   
   
   

   
   #include<stdio.h>
int isprime(int,int);
void main()
{   prime number
 int no;
 scanf("%d",&no);
 int ver=isprime(no,2);
 printf("%d is a %s",no,ver?"prime number":"not a prime number");
}
int isprime(int no,int div)
{
   
 if(no%div==0){return 0;}
 if(div>(no/2)) return 1;
 return isprime(no,div+1); 
}


#include<stdio.h>
int isprime(int,int);
void main()
{
 int no;
 scanf("%d",&no);
 
 printf("%d is a %s",no,isprime(no,2)?"prime number":"not a prime number");
}
int isprime(int no,int div)
{
   
 if(no%div==0){return 0;}
 if(div>(no/2)) {return 1;}
 return isprime(no,div+1); 
}
