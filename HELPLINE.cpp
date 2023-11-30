#include<stdio.h> 
#include<string.h>
#include<windows.h>
#include<stdlib.h>
 

// Structure to store the 
// user details (Signup details) 
struct details { 
    char uname[100]; 
    int age; 
    char password[100]; 
    char email[100]; 
    char mobile[10]; 
}; 

struct food {  
    char first_food[25]; 
    char second_food[25]; 
    char third_food[25]; 
    char fourth_food[25];
	char fifth_food[25];
	char sixth_food[25];
	char seventh_food[25];
	char eighth_food[25]; 
    int first, second, third, fourth, fifth, sixth, seventh, eighth; 
};

struct food f[8];
  
struct details s[100]; 
   
void signup();
void account_check();  
int validate(); 
void login();   
void Educational_Module();
void Food_Module();
void Health_Module();
void Others();
void AllSchools();
void SearchSchools();
void AllHospitals();
void SearchHospitals();
void choice_main();
   
int flag = 1, i, j = 0, count = 0, caps = 0; 
int small = 0, special = 0, numbers = 0; 
int success = 0, x, choice; 
char temp_name[100], temp_password1[100]; 
char temp_password2[100], temp_email[100]; 
char temp_mobile[100]; 
int temp_age, food_choice, n; 
int search_choice, confirm; 
int ch, food, option; 
int order;
  

void gotoxy (int x, int y)
{
COORD coord = { 0 ,0 };
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mainmenu()
{
	
system("color F4");
 //SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
char d[40] = "WELCOME TO HELPLINE SYSTEM";
int i,j,k,l,m;
gotoxy(30,10);
for(j=0;j<60;j++)
{
Sleep(5);
printf("\xb2");
}
gotoxy(30,10);printf("\xB2");
Sleep(30);
gotoxy(30,11);printf("\xB2");
Sleep(30);
gotoxy(30,12);printf("\xB2");
Sleep(30);
gotoxy(30,13);printf("\xB2");
gotoxy(30,14);printf("\xB2");
Sleep(30);
gotoxy(30,15);printf("\xB2");
Sleep(30);
gotoxy(30,16);printf("\xB2");
Sleep(30);
gotoxy(30,17);printf("\xB2");
gotoxy(30,18);printf("\xB2");
Sleep(30);
gotoxy(30,19);printf("\xB2");
Sleep(30);
gotoxy(30,20);printf("\xB2");
Sleep(30);
gotoxy(30,21);printf("\xB2");
gotoxy(30,22);printf("\xB2");
Sleep(30);
gotoxy(30,23);printf("\xB2");
Sleep(30);
gotoxy(30,24);printf("\xB2");
Sleep(30);
gotoxy(30,25);printf("\xB2");
 
gotoxy(90,10);printf("\xB2");
Sleep(30);
gotoxy(90,11);printf("\xB2");
Sleep(30);
gotoxy(90,12);printf("\xB2");
Sleep(30);
gotoxy(90,13);printf("\xB2");
Sleep(30);
gotoxy(90,14);printf("\xB2");
gotoxy(90,15);printf("\xB2");
Sleep(30);
gotoxy(90,16);printf("\xB2");
Sleep(30);
gotoxy(90,17);printf("\xB2");
Sleep(30);
gotoxy(90,18);printf("\xB2");
Sleep(30);
gotoxy(90,19);printf("\xB2");
Sleep(30);
gotoxy(90,20);printf("\xB2");
Sleep(30);
gotoxy(90,21);printf("\xB2");
Sleep(30);
gotoxy(90,22);printf("\xB2");
Sleep(30);
gotoxy(90,23);printf("\xB2");
Sleep(30);
gotoxy(90,24);printf("\xB2");
Sleep(30);
gotoxy(90,25);printf("\xB2");
Sleep(30);
gotoxy(90,26);printf("\xB2");
 
gotoxy(30,25);
for(j=0;j<60;j++)
{
Sleep(30);
printf("\xb2");
}
 
gotoxy(30,14);
for(j=0;j<60;j++)
{
Sleep(30);
printf("\xb2");
}
 
gotoxy(31,12);
printf("\t ");
for(m=0;m<30;m++)
{
Sleep(60);
printf("%c",d[m]);
}
 

gotoxy(33,16);
printf("\t \xdb\xdb\xdb\xb2 1. SIGNUP");
gotoxy(33,19);
printf("\t \xdb\xdb\xdb\xb2 2. LOGIN");
gotoxy(33,22);
printf("\t \xdb\xdb\xdb\xb2 3. EXIT");
 
int main_choice;

	gotoxy(31,27);
	printf("Enter choice: ");
	scanf("%d",&main_choice);

while(main_choice!=3){	
	
	if(main_choice == 1){
		signup();
		while(success==0){
			signup();
		}
	}
	else if(main_choice == 2){
		login();
	}
	else{
		break;
	}

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t1.Signup\n");
	printf("\t\t2.Login\n");
	printf("\t\t3.Exit\n\n");
	printf("Enter choice: ");
	scanf("%d",&main_choice);

	}
}
 
int main() 
{ 
    mainmenu(); 
     
} 
  
 
void signup() 
{ 
	printf("\n\t\tSIGNUP\n\n");
    printf("\nEnter Your name\t"); 
    scanf("%s", temp_name); 
  
    printf("\nEnter Your Age\t"); 
    scanf("%d", &temp_age); 
  
    printf("\nEnter Your Email\t"); 
    scanf("%s", temp_email); 
  
    printf("\nEnter Password\t"); 
    scanf("%s", temp_password1); 
  
    printf("\nConfirm Password\t"); 
    scanf("%s", temp_password2); 
  
    printf("\nEnter Your Mobile Number\t"); 
    scanf("%s", temp_mobile); 
  
    // Function Call to validate 
    // the user creation 
    x = validate(); 
    if (x == 1) 
        account_check(); 
} 
  
// Function to validate the user 
int validate() 
{ 
    // Validate the name 
    for (i = 0; temp_name[i] != '\0'; i++) { 
        if (!((temp_name[i] >= 'a' && temp_name[i] <= 'z') 
              || (temp_name[i] >= 'A'
                  && temp_name[i] <= 'Z'))) { 
            printf("\nPlease Enter Valid Name\n"); 
            flag = 0; 
            break; 
        } 
    } 
    if (flag == 1) { 
        count = 0; 
  
        // Validate the Email ID 
        for (i = 0; 
             temp_email[i] != '\0'; i++) { 
            if (temp_email[i] == '@'
                || temp_email[i] == '.') 
                count++; 
        } 
        if (count >= 2 
            && strlen(temp_email) >= 5) { 
            // Validating the Password and 
            // Check whether it matches 
            // with Conform Password 
            if (!strcmp(temp_password1,temp_password2)) { 
                if (strlen(temp_password1) >= 8 
                    && strlen(temp_password1) <= 12) { 
                    caps = 0; 
                    small = 0; 
                    numbers = 0; 
                    special = 0; 
                    for (i = 0; temp_password1[i] != '\0'; i++) { 
                        if (temp_password1[i] >= 'A'&& temp_password1[i] <= 'Z') 
                            caps++; 
                        else if (temp_password1[i] >= 'a'&& temp_password1[i]<= 'z') 
                            small++; 
                        else if (temp_password1[i] >= '0'&& temp_password1[i]<= '9') 
                            numbers++; 
                        else if (temp_password1[i] == '@'|| temp_password1[i] == '&'|| temp_password1[i] == '#'|| temp_password1[i] == '*') 
                            special++; 
                    } 
                    if (caps >= 1 && small >= 1 && numbers >= 1 && special >= 1) { 
                        // Validating the Input age 
                        if (temp_age != 0 && temp_age > 0) { 
                            // Validating the Input mobile 
                            // number 
                            if (strlen(temp_mobile) == 11) { 
                                for (i = 0; i < 10; i++) { 
                                    if (temp_mobile[i]>= '0'&& temp_mobile[i]<='10') { 
                                        success = 1; 
                                    } 
                                    else { 
                                        printf("\n\nPlease Enter Valid Phone Number"); 
                                        return 0; 
                                        break; 
                                    } 
                                } 
                                // Success is assigned with 
                                // value 1, Once every 
                                // inputs are correct. 
                                if (success == 1) 
                                    return 1; 
                            } 
                            else { 
                                printf("\n\nPlease Enter 11 Digit Phone Number"); 
                                return 0; 
                            } 
                        } 
                        else { 
                            printf("\n\nPlease Enter Valid Age");
                            return 0; 
                        } 
                    } 
                    else { 
                        printf("\n\nPlease Enter the"); 
                        printf("strong password, Your "); 
                        printf("password must contain "); 
                        printf("atleast one uppercase, "); 
                        printf("Lowercase, Number and "); 
                        printf("special character\n\n"); 
                        return 0; 
                    } 
                } 
                else { 
                    printf("\nYour Password Length Should Be Greater Than 8 Letters\n"); 
                    return 0; 
                } 
            } 
            else { 
                printf("\nPassword Mismatch\n\n"); 
                return 0; 
            } 
        } 
        else { 
            printf("\nPlease Enter Valid E-Mail\n\n"); 
            return 0; 
        } 
    } 
} 

void account_check() 
{ 
    for (i = 0; i < 100; i++) { 
        // Check whether the email 
        // and password are already 
        // matched with existed account 
        if (!(strcmp(temp_email, s[i].email) 
              && strcmp(temp_password1, 
                        s[i].password))) { 
            printf("\n\nAccount Already"); 
            printf("Existed. Please Login !!\n\n"); 
            main(); 
            break; 
        } 
    } 
    // if account does not already 
    // existed, it creates a new 
    // one with new inputs 
    if (i == 100) { 
        strcpy(s[j].uname, temp_name); 
        s[j].age = temp_age; 
        strcpy(s[j].password, temp_password1); 
        strcpy(s[j].email, temp_email); 
        strcpy(s[j].mobile, temp_mobile); 
        j++; 
        printf("\n\n\nAccount Successfully"); 
        printf("Created!!\n\n"); 
    } 
} 
  
void choice_main(){
				printf("\n\n1. Education Module\n"); 
                printf("2. Health Module\n");
				printf("3. Food Module\n");
				printf("4. Others\n");
				printf("5. Exit\n"); 
                printf("Please enter your Choice: \t"); 
                scanf("%d", &search_choice); 
  
                switch (search_choice) { 
                 case 1: { 
                    Educational_Module(); 
                    break; 
                } 
                case 2: { 
                    Health_Module();
                    break;
                }
				case 3: { 
                    Food_Module();
                    break;
                }
				case 4: { 
                    Others();
                    break;
                }
				case 5: { 
                    system("cls");
                    mainmenu();
		}	
	}
}
// Function to Login the users 
void login(){
 
    printf("\n\nLOGIN\n\n"); 
    printf("\nEnter Your Email\t"); 
    scanf("%s", temp_email); 
    printf("Enter Your Password\t"); 
    scanf("%s", temp_password1); 
    for (i = 0; i < 100; i++) { 
        // Check whether the input 
        // email is already existed or not 
        if (!strcmp(s[i].email, temp_email)){
            if (!strcmp(s[i].password, temp_password1)) { 
                printf("\n\nWelcome %s, ", s[i].uname); 
                printf("Your are successfully logged in ..\n "); 
                choice_main();
    			}else { 
            		printf("\n\nInvalid Password! "); 
            		printf("Please Enter the "); 
            		printf("correct password\n\n"); 
					login(); 
            		break; 
            	} 
    	}
        else { 
            printf("\n\nAccount doesn't "); 
            printf("exist, Please signup!!\n\n"); 
            //success1 = 1; 
            break;
		} 
	}
}

void food_intialize(){
	 
    	strcpy(f[1].first_food, "1.Karahi"); 
    	strcpy(f[1].second_food, "2.Biryani"); 
   		strcpy(f[1].third_food, "3.Tikka");
		strcpy(f[1].fourth_food, "4.Nehari");
		strcpy(f[1].fifth_food, "5.Pulao");
		strcpy(f[1].sixth_food, "6.Shawarma");
		strcpy(f[1].seventh_food, "7.Kebab");
		strcpy(f[1].eighth_food, "8.Tea"); 
    	f[1].first = 1500; 
    	f[1].second = 100; 
    	f[1].third = 250;
    	f[1].fourth = 160;
    	f[1].fifth	= 140;
    	f[1].sixth = 100;
    	f[1].seventh = 240;
    	f[1].eighth = 30;
	
	}
  
  
void Food_Module() { 
	
	int total = 0;
		food_intialize();
  	
	  	while(1){
    	    printf("\n\nPlease choose the Food\n\n");
			printf("MENU ::\n\n");  
    	    printf("\n\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",f[1].first_food,
			f[1].second_food,f[1].third_food,f[1].fourth_food,f[1].fifth_food,
			f[1].sixth_food,f[1].seventh_food,f[1].eighth_food);
    		printf("\nPlease Enter Your Choice\t"); 
    	    scanf("%d", &food_choice);
    	   		if (food_choice == 1) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].first_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].first); 
        			} 
        		else if (food_choice == 2) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].second_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].second); 
        			}
				else if (food_choice == 3) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].third_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].third); 
        			}
				else if (food_choice == 4) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].fourth_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].fourth); 
        			}
				else if (food_choice == 5) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].fifth_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].fifth); 
        			}
				else if (food_choice == 6) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].sixth_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].sixth); 
        			}
				else if (food_choice == 7) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].seventh_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].seventh);
        			}
				else if (food_choice == 8) { 
           			printf("Please Enter the "); 
            		printf("Count of %s\t",f[1].eighth_food); 
            		scanf("%d", &n); 
            		total = total + (n * f[1].eighth); 
        			}				
	
		 
	    printf("\n\n\n\n--------------Cart"); 
	    printf("----------------"); 
	    printf("\nYour Total Order"); 
	    printf("Amount is %d\n",total); 
	    printf("\n\nDo You wish to"); 
	    printf("order (y=1/n=0):"); 
	    scanf(" %d", &ch); 
	    if (ch == 1) { 
	        printf("\n\nThank You for your"); 
	        printf("order!! Your Food is on "); 
	        printf("the way. Welcome again!!\n\n"); 
	        // exit(1); 
	        return; 
	    } 
	    else if (ch == 0) { 
	        printf("Do You want to exit -1"); 
	        printf("or Go back -0"); 
	        scanf("%d", &confirm); 
	        if (confirm == 1) { 
	            printf("\n\nOops! Your order is"); 
	            printf("cancelled!! Exiting.."); 
	            printf("Thank You visit again!\n"); 
	            // exit(1); 
	            return; 
	        } 
	        else { 
	            printf("\n\nThank You\n\n"); 
	            choice_main();
	        } 
	    } 
	    else { 
	        printf("\n\nPlease Enter the "); 
	        printf("correct choice\n\n"); 
	         
	    } 
	}
}
void Educational_Module(){
	printf("\n\nWhat would you like to search ?\n\n");
	printf("press 1 to search all schools:\n\n");
	printf("press 2 to search schools by education type:\n\n");
	printf("press 3 to Exit: \n");
	
	scanf("%d",&option);
	
	if(option == 1){
		AllSchools();
	}
	else if(option == 2){
		SearchSchools();
	}
	else if(option == 3){
		choice_main();
	}
	else{
		printf("\n\nINVALID CHOICE\n\n");
	}
}

void AllSchools() {

	int i;
	char str[100];
	char c;
	
	FILE * pFile;
	pFile = fopen("school and colleges list.txt","r");
	
	printf("\nBelow Are The Renowned Schools In Karachi :: \n\n");
	
	if(pFile==NULL){
		printf("Error! In Opening File");
	}
	
	c = fgetc(pFile);
	
	while(c!=EOF){
		printf("%c",c);
		c = fgetc(pFile);	
	}
	fclose(pFile);
	choice_main();
}

void SearchSchools() {
	char c[200][31];
	char check[10];
	printf("Enter Type Of School eg.Matric : Olevels : inter : Alevel :>");
	fflush(stdin);
	scanf("%s",&check);
	FILE* pFile;
	pFile = fopen("SCHOOLS.txt", "r");
	
	int i = 0;
	int k=0;
		while (fgets(c[i], 30, pFile)) {
			i++;
		}
	int typeindex = 2;
	for (i = 0; i < 41; i++) {
		if (c[typeindex][0] == check[0]) {
			printf("%s", c[typeindex - 2]);
			printf("%s", c[typeindex - 1]);
			printf("%s", c[typeindex + 1]);
			printf("\n");
		}
		typeindex = typeindex + 4;
	
	}
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("****Here you can see Contact Number and Address for Desire Schools or Colleges *****\n");
	fclose(pFile);
	choice_main();
}

void Health_Module(){
	printf("\n\nWhat would you like to search ?\n\n");
	printf("press 1 to search all hospitals:\n\n");
	printf("press 2 to search hospitals by address wise:\n\n");
	printf("press 3 to exit:\n");
	
	scanf("%d",&option);
	
	if(option == 1){
		AllHospitals();
	}
	else if(option == 2){
		SearchHospitals();
	}
	else if(option == 3){
		return;
	}
	else{
		printf("\n\nINVLAID CHOICE\n\n");
	}
	choice_main();
}

void AllHospitals() {

		int i;
	char str[100];
	char c;
	
	FILE * pFile;
	pFile = fopen("Hospital database.txt","r");
	
	printf("\nBelow Are The Renowned Hospitals In Karachi :: \n\n");
	
	if(pFile==NULL){
		printf("Error! In Opening File");
	}
	
	c = fgetc(pFile);
	
	while(c!=EOF){
		printf("%c",c);
		c = fgetc(pFile);	
	}
	fclose(pFile);
	choice_main();
}

void SearchHospitals() {
	char c[200][31];
	char check[10];
	printf("\nEnter Address Of Hospital eg.Phase1 : Phase2 : Phase3 : Phase4\n\n");
	fflush(stdin);
	scanf("%s",&check);
	FILE* pFile;
	pFile = fopen("Hospital list.txt", "r");
	
	int i = 0;
	int k=0;
		while (fgets(c[i], 30, pFile)) {
			i++;
		}
	int typeindex = 1;
	for (i = 0; i < 41; i++) {
		if (c[typeindex][5] == check[5]) {
			printf("%s", c[typeindex - 1]);
			printf("%s", c[typeindex + 1]);
			printf("%s", c[typeindex + 2]);
			printf("\n");
		}
		typeindex = typeindex + 4;
	
	}
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("****Here you can see Contact Number and Address for Desire Hospitals*****\n");
	fclose(pFile);
	choice_main();
}

void Others(){
	printf("\n\n\t\tEMERGENGY NUMBERS\t\t\n\n");
	printf("Police Department : 15\n");
	printf("Fire Brigade : 16\n");
	printf("Traffic Police : 1915\n");
	printf("CPLC : 1102\n");
	printf("Rangers : 1101\n");
	printf("Chipa Ambulance : 1020\n");
	choice_main();	
}

