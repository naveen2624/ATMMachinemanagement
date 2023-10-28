#include <iostream>
#include<conio.h>
using namespace std;
main()
{
string tpass,pass="123",reset,pass1,pass2,user;
float amnt=0,bal=0;
int s;
char w;
account:
cout<<"Welcome to CONTINENTAL BANK!"<<endl;
cout<<"1: Login\n2: Create Account\n3: Exit\n"<<endl;
cin>>s;
switch(s)
{
case 1:
cout<<"Enter Username: ";
cin>>user;
cout<<"Enter Password= ";
cin>>tpass;
if(tpass==pass)
{
cout<<"Welcome User!"<<endl;
goto menu;
}
else{
goto wr;
}
case 2:
create:
cout<<"Enter Username: ";
cin>>user;
cout<<"Enter Password: ";
cin>>pass1;
cout<<"Renter Password: ";
cin>>pass2;
if(pass2==pass1)
{
pass=pass2;
cout<<"\nPassword changed!"<<endl;
goto start;
}
else
{
cout<<"Password not match "<<endl;
t1:
cout<<"Wanna Try Again(Y/N)?= ";

cin>>w;

switch(w)
{
case 'y':case 'Y':
goto create;
break;
case 'n':case 'N':
goto account;
break;
default:
cout<<"Invalid Input!"<<endl;
goto t1;
}

}
break;
case 3:
goto exit1;
break;
default:
cout<<"Invalid Input!";
}
start:
menu:
cout<<"\nPress\n1: Deposit amount\n2: Withdraw amount\n3: Balance inquiry\n4. Reset Password\n5 Exit= "<<endl;

cin>>s;
switch(s)
{
case 1:
deposit:
cout<<"Type amount= ";
cin>>amnt;
bal+=amnt;

cout<<"\n\t--------------------------------------"<<endl;

cout<<"\t\t\tRecipt"<<endl;
cout<<"\t--------------------------------------"<<endl;
cout<<"\tYour balance is= | Rs."<<bal<<endl;
cout<<"\t--------------------------------------"<<endl;
t2:
cout<<"Wanna Try Again(Y/N)?= ";
cin>>w;
switch(w)
{
case 'y':case 'Y':
goto menu;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalind Input!"<<endl;
goto t2;
}
break;
case 2:
withdraw:
cout<<"Enter Amount= ";
cin>>amnt;
if(amnt>bal)
{
cout<<"Sorry! Invalid amount"<<endl;
t3: cout<<"\nWanna try again?(Y/N)= ";
cin>>w;
switch(w)
{
case 'y':case 'Y':
goto withdraw;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalind Input!";
goto t3;
}
}
bal-=amnt;

cout<<"\n\t--------------------------------------"<<endl;

cout<<"\t\t\tRecipt"<<endl;
cout<<"\t--------------------------------------"<<endl;

cout<<"\tWithdrawed Amount= | Rs."<<amnt<<endl;

cout<<"\tRemaining Balance= | Rs."<<bal<<endl;
cout<<"\t--------------------------------------"<<endl;
t4:
cout<<"\nNeed another Transaction(Y/N)?= ";

cin>>w;
switch(w)
{
case 'y':case 'Y':
goto menu;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalind Input!"<<endl;
goto t4;
}
break;
case 3:
Balance:
cout<<"\n\t--------------------------------------"<<endl;

cout<<"\t\t\tRecipt"<<endl;
cout<<"\t--------------------------------------"<<endl;

cout<<"\tCurrent Balance= | Rs."<<bal<<endl;
cout<<"\t--------------------------------------"<<endl;
t5:
cout<<"\nWanna Use Again(Y/N)?= ";
cin>>w;
switch(w)
{
case 'y':case 'Y':
goto menu;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalind Input!"<<endl;
goto t5;
}
break;
case 4:
password:
p1:
cout<<"Type old Password= ";
cin>>reset;
if(reset==pass)
{
p:
cout<<"Type New Password= ";

cin>>pass1;
cout<<"Confirm Password= ";
cin>>pass2;
if(pass2==pass1)
{
pass=pass2;
cout<<"\nPassword changed!"<<endl;
goto start;
}
else
{
cout<<"Password not match "<<endl;
p3:
cout<<"\nWanna Try Again(Y/N)?= ";
cin>>w;
switch(w)
{
case 'y':case 'Y':
goto p;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalid Input!"<<endl;
goto p3;
}
}
}
else
{
p2:
cout<<"Invalid Password!";
cout<<"\nWanna try again(Y/N)?= ";
cin>>w;
switch(w)
{
case 'y':case 'Y':
goto p1;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalind Input!"<<endl;
goto p2;
} 

}
case 5:
goto exit;
break;
default:
cout<<"Invalid Input!"<<endl;
t6:
cout<<"\nWanna try again?(Y/N)= ";
cin>>w;
switch(w)
{
case 'y':case 'Y':
goto menu;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalind Input!"<<endl;
goto t6;
}

}
wr:
cout<<"Error!\nWrong Password!"<<endl;
t7:
cout<<"Wanna Try Again(Y/N)?= ";
cin>>w;
switch(w)
{
case 'y':case 'Y':
goto start;
break;
case 'n':case 'N':
goto exit;
break;
default:
cout<<"Invalind Input!"<<endl;
goto t7;
}

exit:
cout<<"Are you sure to Exit(Y/N)?=";
cin>>w;
switch(w)
{
case 'Y': case 'y':
goto exit1;
case 'n': case 'N':
goto account;
default: 

cout<<"Invalid Input!"<<endl;
goto exit;
}
exit1:
cout<<"\n\t------------------------------"<<endl;
cout<<"\t\t***Thanks You!***"<<endl;
getch();
}