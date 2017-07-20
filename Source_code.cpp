#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
void data(int i,int j,char check[],char b[]);
void preview(int i,int j,char check[],char b[],int a[]);
class cd
{
	public:int setting(char check[],char b[],int *l1,int *l2,int prv[]);
};

class ID
{
	public:int checking(char check[],char b[]);
};
main()
{
	//lower case for email id
	//UPPER CASE FOR PASSWORD
	
	char a[40],A[40],t,T,b[5000],B[1000],c[30],C[30],check[40],CHECK[40],code[20],CODE[20],msg[500];
	char ptr[5000],id[30],sub[100],body[500],choi,your[30],to[32]="to",choice;
	int i=0,I=0,n,N,m,M,j,J,fact=0,FACT=0,chali=0,CHALI=0,atmp=1,pact=0,prv[20],flag=0;
	ID obj;
	cd obj2;
	
	//TO GET ALL THE EMAIL ADDRESS IN b char array
        ifstream infile;
		infile.open("id.doc");
		infile.getline(b,5000);
		infile.close();
		
	      cout<<"\tWELCOME TO C-MAIL"<<endl;
lablestart:cout<<"ENTER 'c' TO CREATE ACCOUNT\nENTER 'v' IF ALREADY EXIST"<<"\n\n\tENTER CHARACTER: ";
	cin>>t;
	
	lab:if(t=='C'||t=='c')
	{
		
    system("cls");
    
    labcheck:cout<<"\nENTER EMAIL ID YOU WANT: ";
	cin>>a;
	
	fact=obj.checking(a,b);
	if(fact==2){cout<<"\t\nID ALREADY TAKEN TRY DIFFERENT ID ";goto labcheck;}

	
	cout<<"\nENTER THE PASSWORD YOU WANT: ";
	cin>>A;
	
	
  ofstream outfile;
  outfile.open("id.doc", ios::app );
  outfile<<a<<' ';
  outfile.close();
  
  ofstream OUTFILE;
  OUTFILE.open("passcode.doc",ios::app);
  OUTFILE<<A<<' ';
  OUTFILE.close();system("cls");
  cout<<"ID HAS BEEN CREATED";flag=1;
  
  
	}
	if((t=='u'||t=='U')&&atmp>3){system("cls");cout<<"\n\tYOU EXCEEDED THE LIMIT";}
	
	
	
	if(t=='r'||t=='v'||t=='R'||t=='V')
	{
		
		ifstream INFILE;
		INFILE.open("passcode.doc");
		INFILE.getline(B,1000);
		INFILE.close();
		
	}
	
       if(t=='v'||t=='V'){
		system("cls");
		
		lablem:cout<<"\nENTER THE ID: ";
		cin>>check;
		n=strlen(check);
		m=strlen(b);
		
	fact=obj.checking(check,b);

}

if(t=='v'||t=='V'){
		
		cout<<"ENTER THE PASSWORD: ";
		cin>>CHECK;
		N=strlen(CHECK);
		M=strlen(B);
	
 	FACT=obj.checking(CHECK,B);

}

lablelogged:if(fact==2&&FACT==2)
	{
		system("cls");
		if(flag==1){cout<<"\tID HAS BEEN CREATED ,'WELCOME SIR'\n";strcpy(check,a);}
	ifstream infile;
	infile.open("mail.doc");
	infile.getline(ptr,5000);
	infile.close();
		
		
	cout<<"TO SEND A MAIL ENTER 'S'\nTO CHECK INBOX ENTER 'I'";
	cout<<"\n\nENTER YOUR CHOICE: ";
	cin>>choi;	
		
	if(choi=='s'||choi=='S')
	{
		system("cls");
		
				cout<<"TO : ";
		cin>>id;
		cout<<"\nSUBJECT: ";
		cin.getline(sub,100);
		cin.getline(sub,100);
		cout<<"\nBODY   : ";
		cin.getline(body,500);
		
		cout<<"\n\n\tENTER 's' TO SEND THE MAIL :";
		cin>>choice;
		

        if(choice=='s'||choice=='S'){
		ofstream outfile;
		outfile.open("mail.doc",ios::app);
		outfile<<"to"<<id<<'^';
		outfile<<"FROM: "<<check<<'^';
		outfile<<"SUBJECT: "<<sub<<'^';
		outfile<<"BODY: "<<body<<'#';
		outfile.close();system("cls");cout<<"\tMAIL SENT PLEASE CLOSE WINDOW TO LOG OUT"<<endl;}
	}
	
	if(choi=='i'||choi=='I')
	{

		system("cls");
		strcat(to,check);
		pact=obj2.setting(to,ptr,&I,&J,prv);
		if(pact==2)
			preview(I,J,to,ptr,prv);
		if(pact!=2)cout<<"\n\n\tNO MAIL RECEIVED";
			
		}
}


if(fact!=2&&fact!=0&&FACT==2){system("cls");cout<<"WRONG ID!!\n";goto lablem;}
if(fact==2&&FACT!=2&&FACT!=0){system("cls");cout<<"WRONG PASSWORD!!\n";goto lablem;}
if(fact!=2&&fact!=0&&FACT!=2&&FACT!=0){system("cls");cout<<"WRONG ID AND PASSWORD!!\n";goto lablem;}
getche();
if((t=='v'||t=='V')&&fact==2&&FACT==2)goto lablelogged;
if((t=='c'||t=='C')&&flag==1){fact=2;FACT=2;goto lablelogged;}
//if((choi=='l'||choi=='L')&&fact==2&&FACT==2)goto lablestart;
}


int ID::checking(char check[],char b[])
{
	int i,m,n,j,chali=0,fact=0;
			n=strlen(check);
            m=strlen(b);
	 	for(i=0;i<m;i++)
 	{
 		if(check[0]==b[i])
 		
 		{ chali=1;
		 for(j=0;j<n;j++)
 		{
 			if(check[j]!=b[i+j]){fact=1;break;}
 			else fact=0;
 		}
		
	
}
if(chali==1&&fact==0){fact=2;break;};

 	};
	 return fact;
	 }
	 
int cd::setting(char check[],char b[],int *l1,int *l2,int prv[])
{
	
	int i,m,n,j,chali=0,fact=0,jump=0,I=0;
			n=strlen(check);
            m=strlen(b);
	 	for(i=0;i<m;i++)
 	{
 		if(check[0]==b[i])
 		
 		{ chali=1;
		 for(j=0;j<n;j++)
 		{
 			if(check[j]!=b[i+j]){fact=1;break;}
 			else fact=0;
 		}
		
	}
if(chali==1&&fact==0&&b[i+j]=='^')
	{fact=2;jump=2;prv[I]=i+j+1;I=I+1;};

	};
	 
	 //i=i+j+1;
	 j=0;
	  if(jump==2)
     //data(i,j,check,b);
	 *l1=I;
	 *l2=j;	
		 
	 return jump;
}


void data(int i,int j,char check[],char b[])
{
	char from[50],subject[150],bdy[1000];
			 while(b[i]!='^')
	 {
	 	from[j]=b[i];
	 	i=i+1;
	 	j=j+1;
	 }
	 	from[j]='\0';
	 	cout<<"MAIL RECEIVED "<<from<<endl;
	 	i=i+1;
	 	j=0;
	 	
	 	while(b[i]!='^')
	 	{
	 	subject[j]=b[i];
	 	i=i+1;
	 	j=j+1;
	 }
	 	subject[j]='\0';
	 	cout<<endl<<strupr(subject)<<endl<<endl;
	 	i=i+1;
	 	j=0;
	 	
	 		 	while(b[i]!='#')
	 	{
	 	bdy[j]=b[i];
	 	i=i+1;
	 	j=j+1;
	 }
	 	from[j]='\0';
	 	cout<<bdy<<endl;
	 	i=i+1;
	 	j=0;
}

void preview(int i,int j,char check[],char b[],int a[])
{
	int m,w,o;
	char from[50],subject[150];
	for(m=0;m<i;m++)
	{
		cout<<"TO READ THIS MAIL ENTER: "<<m+1<<endl;
		w=a[m];
       while(b[w]!='^')
	 {
	 	from[j]=b[w];
	 	w=w+1;
	 	j=j+1;
	 }
	 	from[j]='\0';
	 	cout<<"MAIL RECEIVED "<<from;
	 	w=w+1;
	 	j=0;
	 	
	 	while(b[w]!='^')
	 	{
	 	subject[j]=b[w];
	 	w=w+1;
	 	j=j+1;
	    }
	 	subject[j]='\0';
	 	cout<<endl<<strupr(subject)<<endl<<endl;
	 	j=0;
	}
	cout<<endl<<endl<<"\tENTER YOUR CHOICE: ";
	cin>>o;
	m=a[o-1];
	j=0;
	system("cls");
	data(m,j,check,b);
	
}
