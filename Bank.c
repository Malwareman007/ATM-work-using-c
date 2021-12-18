#include<stdio.h>
#include<stdlib.h>
unsigned long long amount=10000000000, deposit, withdraw;
long long int choice, pin, k,c=0,cho;
void draw();
void depo();
int main()
{
        do
        {
	             while (pin!=8055)
	             {
  		                if(c==3)
                      {
                              printf("\n\n\n\n\t\t\t\t      . . .TOO MANY WRONG ATTEMPTS. . .\n\n\n\n\n");
                              exit(0);
                      }
                      printf("\n\n\n\n\t\t\t\t\tENTER YOUR SECRET PIN NUMBER : ");
		                  scanf("%lld", &pin);
		                  if (pin != 8055)
                      {
                              system("cls");
		                          printf("\n\n\n\t\t\t\t\tPLEASE ENTER VALID PASSWORD");
                              printf("\n\n\n\t\t\t\t\t!!!. . .%lld Turns Left. . .!!!",2-c);
                      }
                      c++;
              }
              system("cls");
		          printf("\n\n\n\n\n\t\t\t\t   +++++~~~~ Welcome to ATM Service ~~~~+++++\n");
		          printf("\n\n\n\t\t\t\t\t\t1. Check Balance\n");
		          printf("\t\t\t\t\t\t2. Withdraw Cash\n");
		          printf("\t\t\t\t\t\t3. Deposit Cash\n");
		          printf("\t\t\t\t\t\t0. Quit\n");
		          printf("\n\n\n\t\t\t\t***********************************************\n\n");
		          printf("\n\n\t\t\t\t\t\tEnter your choice := ");
		          scanf("%lld", &choice);
		          switch (choice)
		          {
		                   case 1:  system("cls");
                                printf("\n\n\n\n\n\t\t\t\t   +++++~~~~ Welcome to ATM Service ~~~~+++++\n");
                                printf("\n\n\n\t\t\t\t\t   YOUR CURRENT BALANCE IS := %llu\n", amount);
                                printf("\n\n\n\n\t\t\t\t ***********************************************\n\n\n");
			                          break;
		                   case 2:  draw();
			                          break;
		                   case 3:  depo();
                                break;
		                   case 0:  system("cls");
                                printf("\n\n\n\n\n\t\t\t\t   +++++~~~~ Welcome to ATM Service ~~~~+++++\n");
                                printf("\n\n\n\n\n\n\t\t\t\t . . . THANKS FOR USING OUR ATM SERVICE . . .\n\n\n\n\n");
                                printf("\n\n\n\t\t\t\t ***********************************************\n\n\n\n\n");
                                exit(0);
			                          break;
		                  default:  system("cls");
                                printf("\n\n\n\n\n\t\t\t\t   +++++~~~~ Welcome to ATM Service ~~~~+++++\n");
                                printf("\n\n\n\t\t\t\t\t\t INVALID CHOICE\n");
                                printf("\n\n\n\t\t\t\t ***********************************************\n\n");
                                break;
		          }
		          printf("\n\n\n\n\t\t\t\t   DO U WISH TO HAVE ANOTHER TRANSACTION?(1/0): ");
              fflush(stdin);
              scanf("%lld",&cho);
	            }while(cho==1);
              system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t . . . THANKS FOR USING OUT ATM SERVICE . . .\n\n\n\n\n");
}
void draw()
{
          long long int i=0,amo,deno[4]={0},pric[5]={0,2000,500,200,100}, with;
          system("cls");
           printf("\n\n\n\n\n\t\t\t\t     +++++~~~~ Welcome to ATM Service ~~~~+++++\n");
           printf("\n\n\n\t\t\t\t\t ENTER THE AMOUNT TO WITHDRAW: ");
           fflush(stdin);
           scanf("%llu", &withdraw);
           if (withdraw % 100 != 0)
           {
                    printf("\n\n\n\t\t\t\t PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100\n\n\n");
           }
           else if (withdraw >amount)
           {
                    printf("\n\n\n\t\t\t\t\t\tINSUFFICENT BALANCE\n");
           }
           else if (withdraw >(amount - 500))
           {
                    printf("\n\n\n\t\t\t\t   MINIMUM BALANCE SHOULD BE GREATER THAN 500/-\n\n\t\t\t\tTRANSACTION IS NOT POSSIBLE FOR THE ENTERED AMMOUNT\n");
           }
           else
           {
                    with=withdraw;
                    do
                    {
                            amo=with;
                            i++;
                            deno[i-1]=amo/pric[i];
                            if(amo%pric[i]!=0)
                            {
                                   with=with%pric[i];
                            }
                    }while(amo%pric[i]!=0);
                    amount = amount - withdraw;
                    printf("\n\n\t\t\t\t\t . . . PROCEED FOR DENOMINATIONS . . .\n\n");
                    for(i=0;i<4;i++)
                    {
                            if(i==0)
                                    printf("\n\t\t\t\t\t\t      %lld  x  %lld",pric[i+1],deno[i]);
                            else
                                    printf("\n\t\t\t\t\t\t      %lld   x  %lld",pric[i+1],deno[i]);

                    }
                    printf("\n\n\t\t\t\t\t    . . . PLEASE COLLECT CASH . . . ");
                    printf("\n\n\n\t\t\t\t\t    YOUR CURRENT BALANCE IS := %llu\n", amount);
           }
           printf("\n\n\n\t\t\t\t   ***********************************************\n\n");
}
void depo()
{
           system("cls");
           printf("\n\n\n\n\n\t\t\t\t   +++++~~~~ Welcome to ATM Service ~~~~+++++\n");
           printf("\n\n\n\t\t\t\t\t ENTER THE AMOUNT TO DEPOSIT := ");
           fflush(stdin);
           scanf("%llu", &deposit);
           amount = amount + deposit;
           printf("\n\n\n\t\t\t\t\t   YOUR CURRENT BALANCE IS := %llu\n", amount);
           printf("\n\n\n\t\t\t\t ***********************************************\n\n");

}

