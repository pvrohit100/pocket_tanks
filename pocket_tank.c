#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void delay();
int main()
{
int r,p1=0,p2=0,i,x,y,c1=1,c2=9,ch,p=0,q=3,z=0;
char name1[10],name2[10];
printf("\n            POCKET TANKS mini \n");
printf("\n              INSTRUCTIONS  \n");
printf("\n Enter -1 to go left...1 to go right...0 for no change \n");        //            printf("\n  \n");
  printf("\n        USE 4  OR  6 KEYS TO CHANGE ANGLE \n");
    printf("\n          USE 5 FOR TARGET LOCKING \n");
printf("\n ENTER PLAYER 1 NAME \n");
scanf("%s",name1);
printf("\n ENTER PLAYER 2 NAME \n");
scanf("%s",name2);
//system("clear");

for(i=0;i<=5;i++)
{
	if(i%2==0)	//p1
	{for(y=20;y>=0;y--)                  //disp
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                             if(y==0&&(x!=c1||x!=c2))   printf("__");
                           else printf("  ");
		          }printf("\n");
			}
	printf("\n %s its your turn \n Enter -1 to go left...1 to go right...0 for no change \n",name1);              //change position
	scanf("%d",&ch);
	if(ch==-1){--c1;}
	else if(ch==1){++c1;}
	else{}
	for(y=20;y>=0;y--)                  //disp
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                             if(y==0&&(x!=c1||x!=c2))   printf("__");
                           else printf("  ");
		          }printf("\n");
			}
	p=0;
	while(p!=5)
	{printf("\nenter 4 / 6 for decreasing/increasing angle.....\n5 for target locking \n");
	scanf("%d",&p);
	if(p==4){--q;}
	else if(p==6){++q;}
	for(y=20;y>=0;y--)
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                            else if(y==0&&(x!=c1||x!=c2))   printf("__");
                           else if(y==(c1-x)*(x-q)){ printf(" *"); }
			     else printf("  ");
		          }printf("\n");
			}

	}		//target locked
	printf("\n target locked \n");
for(r=1;r<=10;r++)
{for(y=20;y>=0;y--)
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                            else if(y==0&&(x!=c1||x!=c2))   printf("__");
                            else if((y==(c1-x)*(x-q))&&(x<=r)){ printf(" *"); }
			     else printf("  ");
		          }printf("\n");
			}
//system("clear");
delay();
}

if((c1-c2)*(c2-q)==0){p1=p1+10;printf("\n good shot \n");}
else if((c1-(c2-1))*((c2-1)-q)==0){p1=p1+5;printf("\n just missed.... good luck next time \n");}
else if((c1-(c2+1))*((c2+1)-q)==0){p1=p1+5;printf("\n just missed.... good luck next time \n");}
printf("\n %s                      %s\n ",name1,name2);
printf("\n %d                          %d\n",p1,p2);

	}		//p1 end





	else   //p2
	{
	for(y=20;y>=0;y--)                  //disp
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                             if(y==0&&(x!=c1||x!=c2))   printf("__");
                           else printf("  ");
		          }printf("\n");
			}
	printf("\n %s its your turn \n Enter -1 to go left...1 to go right...0 for no change \n",name2);      //change position
	scanf("%d",&ch);
	if(ch==-1){--c2;}
	else if(ch==1){++c2;}
	else{}
	for(y=20;y>=0;y--)                  //disp
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                             if(y==0&&(x!=c1||x!=c2))   printf("__");
                           else printf("  ");
		          }printf("\n");
			}
	z=0;
	while(z!=5)
	{printf("\nenter 4 / 6 for increasing/decreasing angle.....\n5 for target locking \n");
	scanf("%d",&z);
	if(z==4){--q;}
	else if(z==6){++q;}
	for(y=20;y>=0;y--)
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                            else if(y==0&&(x!=c1||x!=c2))   printf("__");
                           else if(y==(c2-x)*(x-q)){ printf(" *"); }
			     else printf("  ");
		          }printf("\n");
			}

	}		//target locked
	printf("\n target locked \n");
for(r=10;r>0;r--)
{
for(y=20;y>=0;y--)
			{for(x=-2;x<=11;x++)
		         { if(y==0&&(x==c1))  printf("#1");if(y==0&&(x==c2))  printf("#2");
                            else if(y==0&&(x!=c1||x!=c2))   printf("__");
                           else if((x>r)&&(y==(c2-x)*(x-q))){ printf(" *"); }
			     else printf("  ");
		          }printf("\n");
			}
delay();

}

if((c2-c1)*(c1-q)==0){p2=p2+10;printf("\n good shot \n");}
else if((c2-(c1-1))*((c1-1)-q)==0) {p2=p2+5;printf("\n just missed.... good luck next time \n");}
else if((c2-(c1+1))*((c1+1)-q)==0){p2=p2+5;printf("\n just missed.... good luck next time \n");}
printf("\n %s                      %s\n ",name1,name2);
printf("\n%d                          %d \n",p1,p2);




	}
}
if(p1>p2)printf("\n %s wins\n",name1);
else if(p1<p2)printf("\n %s wins\n",name2);
else printf("\n DRAW MATCH\n");
	scanf("%d",&i);
return 0;
}
void delay(){
int i,j,s;
float p,q;
p=33445.44;
q=845.5454;

for(s=0;s<250;s++)
{for(i=0;i<250;i++)
{
for(j=-1000;j<100;j++){p=i*(float)i/39875*(1/998*p*49)*848*q*4/747;}
}
}

}
