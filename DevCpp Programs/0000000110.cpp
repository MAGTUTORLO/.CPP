// (0000000110) Number to Roman Numerals <CpE221/Mathematics>
// (class function)


#include <cstdlib>
#include <iostream>

using namespace std;


class numbersystem
      {
      public:
             
             void input();
             double num;
             long intnum,m,d,c,l,x,v,i,n;
           
             
      };
      
      
      
      
int main(int argc, char *argv[])
{
numbersystem k;

    k.input();

    system("PAUSE");
    return EXIT_SUCCESS;
};


void numbersystem::input()
{

char yes='y';
while (yes=='y')
{
cout<<"Enter a number:"<<endl;
cin>>num;
intnum=(long)num;

if (intnum>=1000)
   {
   m=intnum/1000;
   n=0;
       {
       for (n;n<m;n++)
           {
           cout<<"M";
           }
       }
   intnum=intnum%1000;
   }


if (intnum>=900)
   {
   cout<<"CM";
   intnum=intnum%900;
   }

else if (intnum>=500)
     {
     d=intnum/500;
     n=0;
     
         for (n;n<d;n++)
             {
             cout<<"D";             
             }
     intnum=intnum%500;
     } 
     
if (intnum>=400)
   {
   cout<<"CD";
   intnum=intnum%400;
   }

else if (intnum>=100)
     {
     c=intnum/100;
      n=0;
      for (n;n<c;n++)
             {
             cout<<"C";             
             }
      intnum=intnum%100;
     }

if (intnum>=90)
   {
   cout<<"XC";
   intnum=intnum%90;
   }

else if (intnum>=50)
     {
     l=intnum/50;
      n=0;
      for (n;n<l;n++)
             {
             cout<<"L";             
             }
      intnum=intnum%50;
     }

if (intnum>=40)
   {
   cout<<"XL";
   intnum=intnum%40;
   }

else if (intnum>=10)
     {
     x=intnum/10;
      n=0;
      for (n;n<x;n++)
             {
             cout<<"X";             
             }
      intnum=intnum%10;
     }

if (intnum>=9)
   {
   cout<<"IX";
   intnum=intnum%9;
   }

else if (intnum>=5)
     {
      v=intnum/5;
      n=0;
      for (n;n<v;n++)
             {
             cout<<"V";             
             }
      intnum=intnum%5;
     }
if (intnum>=4)
   {
   cout<<"IV";
   intnum=intnum%4;
   }

else if (intnum>=1)
     {
     i=intnum;
      n=0;
      for (n;n<i;n++)
             {
             cout<<"I";             
             }
      intnum=intnum%1;
     }

cout<<endl;

cout<<"Would you like to run this program again?(y/n):";
cin>>yes;
cout<<endl;
}
   
};
