#include<stdio.h>
#include<stdlib.h>
void Total_Bill(int,int);
main()
{
	int menu,B,burger,dmenu,D,drink,i,burgeritems=5,drinkitems=4;
	char* burgermenu[5] = {"CHICKEN BURGER","BEEF BURGER  ","ZINGER BURGER","CHEESE LOADED","BB SPECIAL BURGER"};
	int burgerprice[5] = {150,200,230,250,300};
	char* drinkmenu[4] = {"COKE ","SPRITE","FANTA","WATER"};
	int drinkprice[4] = {60,60,60,50};
	char rep;
	
do{	
	printf("\t\t    WELCOME  TO  THE \n\t\t B U R G E R  B L O C K \n");
	printf("=================================================================\n");
	printf("\t\t   PLACE YOUR ORDER.\n");
	printf("\t\t  1.MENU \t 0.EXIT \n\t\t  : ");
	scanf("%d",&menu);
	printf("=================================================================\n");
	if(menu==1)
	{
		printf("\t\t\t B U R G E R S \n");
		
		//FOR PRINTING MENU I USED ARRAY AND FOR LOOP.
		
		for(i=0;i<burgeritems;i++) 
		{
			printf("\t\t%d. %s\t\t%d/-\n",i+1,burgermenu[i],burgerprice[i]);
		}
		printf("\t\t 0.SKIP");
		printf("\n=================================================================\n");
		printf("\n\t\t WHICH ONE WOULD YOU LIKE TO EAT? \n\t\t : ");
		scanf("%d",&B);
		
		//FOR SELECTING BURGERS FROM THE MENU I USED IF ELSE CONDITION.
		
		if(B==1)
		{
			printf("\n\t\t 1.CHICKEN BURGER \t RS:150/-");
			printf("\n\n\t\t ENTER THE BURGER CODE TO CONFIRM: ");
			scanf("%d",&burger);
			burger=150;
		}
		else if(B==2)
		{
			printf("\n\t\t 2.BEEF BURGER \t\t RS:200/-");
			printf("\n\n\t\t ENTER THE BURGER CODE TO CONFIRM: ");
			scanf("%d",&burger);
			burger=200;
		}
		else if(B==3)
		{
			printf("\n\t\t 3.ZINGER BURGER \t RS:230/-");
			printf("\n\n\t\t ENTER THE BURGER CODE TO CONFIRM: ");
			scanf("%d",&burger);
			burger=230;
		}
		else if(B==4)
		{
			printf("\n\t\t 4.CHEESE LOADED \t RS:250/-");
			printf("\n\n\t\t ENTER THE BURGER CODE TO CONFIRM: ");
			scanf("%d",&burger);
			burger=250;
		}
		else if(B==5)
		{
			printf("\n\t\t 5.BB SPECIAL BURGER \t RS:300/-");
			printf("\n\n\t\t ENTER THE BURGER CODE TO CONFIRM: ");
			scanf("%d",&burger);
			burger=300;	
		}
		else
		{
			printf(" \t\t SECTION SKIPPED.");
			burger=0;
		 } 
		printf("\n=================================================================\n");
		printf("\n\t\tWOULD YOU LIKE TO ORDER SOME DRINK??");
		printf("\n\t\t 1.DRINKS. \t 0.EXIT. \n\t\t : ");
		scanf("%d",&dmenu);
		printf("\n=================================================================\n");
		if(dmenu==1)
		{
			printf("\t\t\t DRINKS \n");
			
			//FOR PRINTING MENU I USED ARRAY AND FOR LOOP.
				
			for(i=0;i<drinkitems;i++) 
			{
				printf("\t\t%d. %s\t\t%d/-\n",i+1,drinkmenu[i],drinkprice[i]);
			}
			printf("\n\t\t 0. SKIP.");
			printf("\n=================================================================\n");
	    	printf("\n\t\t WHICH ONE WOULD YOU LIKE TO DRINK? \n\t\t : ");
		    scanf("%d",&D);
		    
		    //FOR SELECTING BURGERS FROM THE MENU I USED IF ELSE CONDITION.
		    
		    if(D==1)
		   {   	
			    printf("\n\t\t 1. COKE. \t\t 60/-");
			    printf("\n\n\t\t ENTER THE DRINK CODE TO CONFIRM: ");
			    scanf("%d",&drink);
			    drink=60;
		   }
		    else if(D==2)
		   {
		    	printf("\n\t\t 2. SPRITE. \t\t 60/-");
			    printf("\n\n\t\t ENTER THE DRINK CODE TO CONFIRM: ");
			    scanf("%d",&drink);
			    drink=60;
			    
		   }
		    else if(D==3)
		   {  
		    	printf("\n\t\t 3. FANTA. \t\t 60/-");
		    	printf("\n\n\t\t ENTER THE DRINK CODE TO CONFIRM: ");
		    	scanf("%d",&drink);
		    	drink=60;
		   }
		    else if(D==4)
		   { 
		    	printf("\n\t\t 4. WATER. \t\t 50/-");
		    	printf("\n\n\t\t ENTER THE DRINK CODE TO CONFIRM: ");
			    scanf("%d",&drink);
			    drink=50;
		   }
		   else
		   {
		    	printf(" \t\t SECTION SKIPPED.");
		    	drink=0;
		   } 
		printf("\n=================================================================\n");
		}
		else
		{
			printf("\n\t\t ORDER COMPLETED");
		}
	}
	else
	{
		printf("\t\tTHANKS FOR COMING SEE YOU NEXT TIME..:)");
		burger=0;
	    drink=0;
		system("cls");
	}
	
	system("cls");
	
	//CALLING FUNCTION IN MAIN.
	
	Total_Bill(burger, drink);
	
	
	
	printf("\n\t\t N E X T   O R D E R? Y/N \n\t\t: ");
	scanf(" %c",&rep);
	system("cls");
	}
	while(rep=='y'|| rep=='Y');
	
}

//FUNCTION BODY

void Total_Bill(int burger,int drink)
{
	printf("\n\t\t\t Y O U R   O R D E R");
	printf("\n-------------------------------------------------------------------");
	printf("\n\t\t BURGER \t\t RS: %d /-",burger);
	printf("\n\t\t DRINK \t\t\t RS: %d /-",drink);
	int TOTAL=burger+drink;
	printf("\n-------------------------------------------------------------------");
	printf("\n\t\t TOTAL BILL \t\t RS: %d /-",TOTAL);
	printf("\n==================================================================\n");
}
