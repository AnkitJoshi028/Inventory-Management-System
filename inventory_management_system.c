#include<graphics.h>
/*THIS IS INVENTARY MANAGEMENT SOFTWARE OF A MEDICQAL STORE LETS SAY UTKARSH MEDICAL STORE
WE ARE ASUMING THAT THIS SYSTEM INITIALLY MAINTAINS THE RECORD OF FIVE MEDICINES ANT THIS SYSTEM ALSO
ALLOWS US TO ADD NEW ITEMS INTO INVENTARY,UPDATE INVENTARY AS WELL AS DELETE ITEMS OF INVENTARY*/
#include<dos.h>
#include<time.h>
#include<string.h>
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
static int i=0;
//---------------------------MODULE OF CLASS ADD------------------------------
class  dete
{
 public:
 int dd,mm,yy;
 char a,b;
 };
class add:public dete
{
public:
 int amount1,amount2,row,coll;
 unsigned long int bar_code;
 char name_of_medicine[30];
 char alternate_of_main_medicine[30];
 char symptoms[30];
 float cost;
 public:
 void get()
 {
 float y;
 scanf("%f",&y);

 cout<<"-------------------PLEASE ENTER RECORD OF "<<i+1<<" MEDICINE-----------------";
 cout<<endl<<"Enter symptoms:";
fflush(stdin);
gets(symptoms);
fflush(stdin);
cout<<endl<<"enter barcode of medicine:";
cin>>bar_code;
fflush(stdin);
cout<<endl<<"Enter expiry date:";
scanf("%d%c%d%c%d",&dd,&a,&mm,&b,&yy);
fflush(stdin);
cout<<endl<<"Enter name of medicine:";
gets(name_of_medicine);
cout<<endl<<"Enter cost of medicine:";
scanf("%f",&cost);
//gets(name_of_medicine);
cout<<endl<<"Enter amount of main medicine:";
cin>>amount1;
fflush(stdin);
cout<<endl<<"Row no and coll no at which medicine is kept:";
scanf("%d %d",&row,&coll);
fflush(stdin);
cout<<endl<<"Enter alternate medicine of the main medicine:";
fflush(stdin);
gets(alternate_of_main_medicine);

cout<<endl<<"Enter amount of alternate medicine:";
cin>>amount2;
fflush(stdin);
 }
 void show()
{
 printf("\nSymptoms over which medicine has been taken are:%s",symptoms);
 printf("\nBar code of main medicine is:%lu",bar_code);
 printf("\nExpiry date of medicine is:%d%c%d%c%d",dd,a,mm,b,yy);
 printf("\nName of main medicine is:%s",name_of_medicine);
 printf("\nAmount of %s available in stock is:%d",name_of_medicine,amount1);
 printf("\nCost of medicine is:%.2lf",cost);
printf("\nAlternate is %s:",alternate_of_main_medicine);
printf("\nAmount of %s available in stock is:%d",alternate_of_main_medicine,amount2);
 printf("\nRow at where the %s medicine is kept is:%d %d",name_of_medicine,row,coll);
 cout<<endl<<endl;
}
};

void main(){
#include<aahh.h>



 char demand[30];
 char choice[3];
 int a;
 int profit=0;
 int aj;
 char most_demanded_medicine[30];
 clrscr();
//-----------------------------------------------------------------------
//module of geting choice from the user
cout<<"--------------------------------------------------------------------------------";
cout<<endl<<"\t\t\t\tUTKARSH MEDICAL STORE"<<endl;
cout<<"--------------------------------------------------------------------------------";
#define N 1
add objarr[N];


for(i=0;i<N;i++)
{
 objarr[i].get();
 objarr[i].show();
 }
clrscr();printf("PROCESSING.");sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");
cout<<endl<<"\t\t\tDATABASE UPDATED";
cout<<endl<<"_________________________________________________________________________";
sleep(3);//--database has been updated at this point-------------------------------
clrscr();//------------------------------------------------------------------
cout<<endl<<"--------------------------UTKARSH MEDICAL STORE-----------------";
/*-----------------------------------------------------------------------------
------------------------------------------------------------------------------
--------------------------------------------------------------------------------
------------------------------------------------------------------------------*/
input:
//------------------INTRACTION WITH USER IS STARTED AT THIS POINT---------------
cout<<endl<<"1)CUSTOMER IS IN FRONT OF YOU??";
gets(choice);
a=strcmp(choice,"yes");
/*As the interaction with the user is started user is instructed by the software
to ask the customer (users's customer) which medicine does he exactly wants? then
the medicine said by the customer is entered into the software via keyboard
then software internally make search on every varible and finds that variable in
which the name said by the user is stored then software will check the availablity
of that particular medicine in the stock if the medicine is available int he stock
then software will ask the customer that how much tablets does he wants?
then software will tell the user about the drawer inside which the medicine is
stored.
  Then the user or the shopkeeper will take out the medicine and ask the customer
that how much tablets does he want??the data given by the customer is entered into the
software as demanded by s/w then our s/w will internally calculate the total amount
of money that is to be taken by the user from the client.
		     In case if the medicine is not available in the stock then s/w will
suggest the user to tell the customer about the alternate medicine that is available
in the stock.if user wants to purchase the alternate medicine then the same process
is repeated as mention above and the name of actual medicine which is actually demanded
by the customer is get sored in some other location.
 software also allows the user to check the total profit gained during the entire
day.and it also tells the user the name of medicine which is currently not available
in the stock*/







if(a==0)
{
 cout<<endl<<"Wish customer and ask what does he want??";
 sleep(2);
 cout<<endl<<"Now type the name of medicine demanded by the customer:\n";
 fflush(stdin);
 gets(demand);

for(int j=0;j<N;j++)
{
int b;
int c;
double rs;
int temp;
char choice2[3];
temp=strcmp(objarr[i].name_of_medicine,demand);
if(temp==0)
{
  if(objarr[i].amount1==0)
	{
	 strcpy(most_demanded_medicine,objarr[i].name_of_medicine);
     if(objarr[i].amount2>0)
	 {
       cout<<endl<<"TELL THE CUSTOMER THAT MEDICINE DEMANDED BY HIM IS CURRENTLY NOT IN THE STOCK BUT THERE IS ANOTHER MEDICINE HIVING THE SAME COMPOSITION AS THAT OF THE MEDICINE DEMANDED BY HIM ASK THE CUSTOMER WETHER HE WANT TO PURCHASE IT??";
       gets(choice);
       b=strcmp(choice2,"yes");
	   if(b==0)
	{
	    cout<<endl<<"Ask the customer how many tablets does he want?";
	    getch();
	    cout<<endl<<"Now enter the no of tablets demanded by the customer:"<<endl;
	    cin>>c;
	    objarr[i].amount2=objarr[i].amount2-c;

	printf("\n%s  medicine is keept at %dth row and %dth coll take the medicine and give it to the customer",objarr[i].alternate_of_main_medicine,objarr[i].row,objarr[i].coll);
	    rs=c*objarr[i].cost;
	    printf("\nDemand  customer the amount of rs:%.2lf",rs);
	    profit=profit+rs;
	}
	    else
		    {
	     cout<<endl<<"SAY SORRY TO CUSTOMER FOR INCONVENIENCE:";
		     }
     }
       }
     else if(objarr[i].amount1>0)
     {
      cout<<endl<<"Ask the user how many tablets does he want?";
      getch();
      cout<<endl<<"Now enter the no of tablets demanded by the customer:"<<endl;
      cin>>c;
objarr[i].amount1=objarr[i].amount1-c;
      printf("\n%s medicine is kept at %dth row and %dth column take the medicine and give it to  the customer",objarr[i].name_of_medicine,objarr[i].row,objarr[i].coll);
      rs=c*objarr[i].cost;
      printf("\nDemand customer the amount of rs:%.2lf",rs);profit=profit+rs;
      }
   else
   {
    cout<<endl<<"There is no such medicine available in the stock say sorry to customer for inconvenience";
    }
}
}
goto input;
}
else if(a!=0)
{
 clrscr();
 input2:
 cout<<endl<<"1)i want to see todays profit:";
 cout<<endl<<"2)i want to see which medicine is not in the stock that i have to purchase:";
 cout<<endl;
 cin>>aj;
 switch(aj)
 {
  case 1:
  {
    struct date d;
    getdate(&d);
    printf("\nToday is:%d-%d-%d",d.da_day,d.da_mon,d.da_year);
    printf("\nAnd profit till now is:%.2lf",profit);
    break;
    }
   case 2:
   {
    printf("\n%s medicine is not in the stock",most_demanded_medicine);
    break;
    }
   default:
   {
    printf("\nWrong entry:");
    printf("\nPlease enter valid no:");delay(1000);
    clrscr();
    goto input2;
    }
   }
 }

getch();
}