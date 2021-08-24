#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define ESC 27
#define F2 60
int total_run=0;
int display(int);
int registeration(int);
int statictics(int);
int vaccine(int);
int admin(int);
int user_data(int);
int helpline(int);
int stat_update(int);
int vac_update(int);
FILE *registration;//main data//
FILE *update_stats;//covid update//
FILE *uupdate_stats;//vaccine availibity update//
struct data
    {
        char first_name[15], last_name[15];

    int a[6];
    int age;
    long long int b;
    };
    struct statics
    {
    long long int uu[16];
    };
    struct sstatics
{
    long long int uuu[16];
    };
    COORD coord = {0,0};
void gotoxy(int column, int line);

int main()
{

int p,i=1,dis,task=0,tool,global,ticc_num;
int vac,user=0,adminn,registerr,statictics_return,vaccine_return,help,return1,return2,return3,return4,return5,return6,return7,return8;

pp: 
dis=display(task);
system("cls");
    switch(dis)
    {
    case 1:

return1=registeration(registerr);
if(return1!=1.32)
{
    main();
}

break;

case 2:

    return2=statistics(statictics_return);
    if(return2!=1.34)
    {
        system("cls");
        main();
    }
    break;
case 3:
    return3=vaccine(vaccine_return);
    if(return3!=1.23)
    {
    system("cls");
    main();
    }
    break;

case 4:
    return4=admin(adminn);
    if(return4==0)
    {
    

           printf("WELCOME!!\n\n");
           printf("[1].  CHECK REGISTERED DATABASE:\n\n");
           printf("[2].  UPDATE AVAILABILITY OF VACCINES:\n\n");
           printf("[3].  UPDATE COVID STATICTICS:\n\n");
            printf("\n\n<please open in fullscreen mode for uninterrupted details>");
           printf("\n\n choose the operation you want to perform:  ");
           scanf("%d",&tool);
           if(tool==1)
           {
           return5=user_data(user);
           if(return5!=1.34);
           {
               system("cls");
               main();
           }
           }
           else if(tool==3)
           {
return7=stat_update(global);
if(return7!=1.56)
{
system("cls");
main();
}
           }
           else if(tool==2)
           {
            return8=vac_update(vac);
            if(return8!=1.56)
            {
            system("cls");
            main();
            }
           }

   else
    {system("cls");
main();
    }
    }
    else
    {
    printf("INCORRECT PASSWORD!!");
    main();
    }

break;
case 5:
    return6=helpline(help);
    if(return6!=1.67)
    {
        system("cls");
    main();
    }
    break;
    default:
    break;
    }
return 0;}



int registeration(int registerr)
{
   long long int ticket;
   int ch;
FILE *registration;
struct data z[32];
registration=fopen("registrationdetail0.txt","ab");
   if(registration == NULL)
{
printf("FIle not Found");
exit(1);
}
  while(1)
  {

      printf("enter your first name:\n:");
    scanf("%s",&z[total_run].first_name);
    printf("enter your last name:\n:");
    scanf("%s",&z[total_run].last_name);
    system("cls");
    printf("\n\nenter your age:\t");
    scanf("%d",&z[total_run].age);
    if(z[total_run].age<18)
{
    printf("you are not eligible for any vaccine!");
   break;
}
system("cls");
  printf("[1]. johnson and johnson vaccine\t [2]. Covishield vaccine\t [3]. vero cell vaccine\n\n");
         printf("[4].Moderna vaccine\t\t\t [5]. astraZeneca vaccine\t [6]. CoronaVac vaccine");
  printf("\n\n\nchoose the vaccine: ");
  scanf("%d",&z[total_run].a[0]);
  system("cls");
  printf("[1]. Pokhara \t[2]. Kathmandu\t[3]. Chitwan\n\n[4]. Biratnagar\t[5]. myagdi\t [6]. Syangya\n\n");
  printf("\n\nchoose a location: ");
  scanf("%d",&z[total_run].a[1]);
  system("cls");
    printf("[1].   september 5\t[2].   September 7\t[3].   september 12\n\n[4].   september 15\t");
    printf("[5].   september 18\t[6].   september 21\n\n[7].   september 24\t[8].   september 28\t[9].  september 30");
    printf("\n\n choose one suitable date for yourself: ");
    scanf("%d",&z[total_run].a[2]);
    system("cls");
    printf("[1].  morning shift(6 am to 10 am)\t[2].  afternoon shift(12 pm to 5 pm) ");
    printf("\n\n choose one suitable shift for yourself: ");
    scanf("%d",&z[total_run].a[3]);
    system("cls");
    printf("\n\nPLEASE ENTER YOUR PHONE NUMBER:\n");
    scanf("%lli",&z[total_run].b);
    system("cls");
    printf("have you previously been infected with covid-19?\n");
    printf("[1].   YES   \t[2].    NO\n\n:");
    scanf("%d",&z[total_run].a[4]);
    system("cls");
    printf("is this you first dose of COVID-19 vaccine?\n\n:");
    printf("[1].   YES       \t[2].    NO\n\n:");
    scanf("%d",&z[total_run].a[5]);
    system("cls");
     fwrite(&z[total_run],sizeof( struct data),1,registration);
    printf("\n\nYOU HAVE SUCCESSFULLY REGISTERED FOR COVID-19 VACCINE!\n\n");
    ticket=z[total_run].a[0]*37+(z[total_run].b/980000)+total_run*7;//to generate a random ticket number each time
    printf("\n\nYOUR TICKET NUMBER IS %d.\n\n",ticket);
    total_run++;
printf("\n\npress F2 to register another covid-19 vaccine  ||  press ESC to exit.\n:");
s:
ch=getch();
switch(ch){
    case ESC:
    fclose(registration);
    return(total_run);
    break;
    case F2:
    system("cls");
    break;
    default:
    printf("invalid input\n");
    goto s;

}
}
fclose(registration);
return(total_run);
getch();
    }


int display(int task)
{
printf("\n\n\n[1].  REGISTERATION FOR VACCINE:\n\n");
printf("[2].  GLOBAL/NATIONAL COVID-19 STATICTICS:\n\n");
printf("[3].  AVAILABILITY OF VACCINES:\n\n");
printf("[4].  ADMIN TOOLS:\n\n");
printf("[5].  HELPLINE NUMBERS::\n\n");
printf("[6].  EXIT:\n\n");
printf("\n\nchoose the operation you want to peform: ");
scanf("%d",&task);
return(task);
}



int admin(int adminn)
{
int i=0,j;
char pass[20],ch,comp[20]={'1','2','3','4','5'};
printf("to access admin tools please enter the 5 digit pin:\n\n:");
for(i=0;i<5;i++)
{
    scanf(" %c",&ch);
    system("cls");
    printf("*");
    pass[i]=ch;

}
system("cls");
pass[i]='\0';
adminn=(strcmp(pass,comp));
if(adminn==0)
    return 0;
else
    return 1;
}


           int user_data(int user)
           {
               FILE *registration;
                int i=0,n=-1,ch;
                long long int ticket;
                    struct data z[32];
               registration=fopen("registrationdetail0.txt","rb");

               system("cls");
                   gotoxy(1,1);
                  printf("FIRST NAME:");
                  gotoxy(18,1);
                   printf("LAST NAME:");
                   gotoxy(35,1);
                   printf("AGE:");
                    gotoxy(50,1);
                   printf("VACCINE TYPE:");
                   gotoxy(72,1);
                   printf("LOCATION:");
                  gotoxy(89,1);
                   printf("DATE:");
                   gotoxy(105,1);
                    printf("TIME:");
                    gotoxy(120,1);
                    printf("PH.NUMBER:");
                    gotoxy(140,1);
                    printf("PREVIOUS INFECTION:");
                    gotoxy(162,1);
                 printf("DOSE:");
                gotoxy(178,1);
                printf("TICKET NO.:");


               while(!feof(registration))
               {
                    fread(&z[++n],sizeof(struct data),1,registration);
               }
                for(i=0;i<n;i++)
                  {
                   gotoxy(1,3+i);
                    printf("%s",z[i].first_name);
                    gotoxy(18,3+i);
                    printf("%s",z[i].last_name);
                    gotoxy(35,3+i);
                    printf("%d",z[i].age);
                    gotoxy(50,3+i);
                    if(z[i].a[0]==1)

                        printf("johnson and johnson");
                    else if(z[i].a[0]==2)
                        printf("covishield");
                    else if(z[i].a[0]==3)
                     printf("vero cell");
                    else if(z[i].a[0]==4)
                        printf("moderna");
                    else if(z[i].a[0]==5)
                        printf("astrazenaca");
                    else if(z[i].a[0]==6)
                        printf("coronavac");
                    else
                        printf(".xx.");
                               gotoxy(72,3+i);
                               if(z[i].a[1]==1)
                               printf("pokhara");
                               else if(z[i].a[1]==2)
                                printf("kathmandu");
                               else if(z[i].a[1]==3)
                               printf("chitwan");
                               else if(z[i].a[1]==4)
                                printf("biratnagar");
                               else if(z[i].a[1]==5)
                               printf("myagdi");
                               else if(z[i].a[1]==6)
                               printf("Syangja ");
                               else
                                printf(".xx.");
                                gotoxy(89,3+i);
                                if(z[i].a[2]==1)
                                    printf("september 05");
                                    else if(z[i].a[2]==2)
                                    printf("september 07");
                                    else if(z[i].a[2]==3)
                                    printf("september 12");
                                    else if(z[i].a[2]==4)
                                    printf("september 15");
                                    else if(z[i].a[2]==5)
                                    printf("september 18");
                                    else if(z[i].a[2]==6)
                                    printf("september 21");
                                    else if(z[i].a[2]==7)
                                    printf("september 24");
                                    else if(z[i].a[2]==8)
                                    printf("september 28");
                                    else if(z[i].a[2]==9)
                                    printf("september 30");
                                    else
                                    printf(".xx.\n");
                                    gotoxy(105,3+i);
                                                if(z[i].a[3]==1)
                                            printf("morning");
                                           else if(z[i].a[3]==2)
                                                printf("afternoon");
                                                else
                                                printf(".xx.");

                                            gotoxy(120,3+i);
                                                printf("%lli",z[i].b);
                                               gotoxy(140,3+i);
                                                if(z[i].a[4]==1)
                                                    printf("yes");
                                                else if(z[i].a[4]==2)
                                                    printf("no");
                                               else
                                             printf(".xx.");
                                             gotoxy(162,3+i);
                                             if(z[i].a[5]==1)
                                            printf("1st");
                                            else if(z[i].a[5]==2)
                                            printf("2nd");
                                          else
                                            printf(".xx.");
                                            gotoxy(178,3+i);
                                            ticket=z[i].a[0]*37+(z[i].b/980000)+i*7;//to generate ticket number same as seen in registred completion.
                                          printf("%d",ticket);
                                            }

               fclose(registration);
                gotoxy(1,25+i);
                printf("'.xx.' means incorrect details entered*");
                gotoxy(1,30+i);
               printf("\nPress ESC to return to home page:\t");
               getch();
               ch = getch();
               switch(ch){
               case ESC:
               break;
               }
                return(user);
               }
           void gotoxy(int column, int line)
           {
coord.X = column; coord.Y = line;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
           }

int helpline(int help)
{
    char ch;
printf("HELPLINE PHONE NUMBERS:\n\n");
printf("\n\npokhara:    9856043234");
printf("\n\nkathmandu:  9806600789");
printf("\n\nchitwan:    9847878912");
printf("\n\nbiratnagar: 9856098675");
printf("\n\nmyagdi:     9846056634");
printf("\n\nsyangya:    9819121734");
printf("\n\n\nenter ESC to return to home page: ");
ch=getch();
switch(ch){
    case ESC:
    break;
}
return(help);
}

int stat_update(int global)
{
    char ch;
    system("cls");
FILE *update_stats;
struct statics pp;
update_stats=fopen("registrationdetail1.txt","wb");
   if(update_stats == NULL)
{
printf("FIle not Found");
exit(1);
}
printf("\t\t\t\t\tUPDATE THE STATICTICS:\n\n");
printf("\n\nglobal covid cases: ");
scanf("%lli",&pp.uu[0]);
printf("\n\nnational covid cases: ");
scanf("%lli",&pp.uu[1]);
printf("\n\ntotal global deaths: ");
scanf("%lli",&pp.uu[2]);
printf("\n\nnational deaths:");
scanf("%lli",&pp.uu[3]);
printf("\n\nnew global covid cases: ");
     scanf("%lli",&pp.uu[4]) ;
printf("\n\nnew local covid cases: ");
scanf("%lli",&pp.uu[5]);
printf("\nnew global deaths: ");
scanf("%lli",&pp.uu[6]);
printf("\n\nnew national deaths: ");
scanf("%lli",&pp.uu[7]);
printf("\n\nglobal vaccinated population percentage: ");
scanf("%lli",&pp.uu[8]);
printf("\n\nnational vaccinated population percentage: ");
scanf("%lli",&pp.uu[9]);
 fwrite(&pp,sizeof( struct statics),1,update_stats);
 fclose(update_stats);
printf("\n\n\n\n\npress ESC to return to home page: ");
ch=getch();
switch (ch){
    case ESC:
    break;
}
return(1);
}


int statistics(statictics_return)
{
    char ch;
    FILE *update_stats;

                    struct statics pp;
               update_stats=fopen("registrationdetail1.txt","rb");
                fread(&pp,sizeof(struct statics),1,update_stats);


               system("cls");
               printf("\n<STATS ARE UPDATED ON DAILY BASIS>\n\n\n");
printf("\n\nglobal covid cases                 : %lli",pp.uu[0]);
printf("\n\nnational covid cases               : %lli",pp.uu[1]);
printf("\n\ntotal global deaths                : %lli",pp.uu[2]);
printf("\n\ntotal national deaths              : %lli",pp.uu[3] );
printf("\n\nnew global covid cases             : %lli",pp.uu[4]);
printf("\n\nnew national covid cases           : %lli",pp.uu[5]);
printf("\n\nnew global deaths                  : %lli",pp.uu[6]);
printf("\n\nnew national deaths                : %lli",pp.uu[7]);
printf("\n\ngobal vaccinated population        : %lli (percentage)",pp.uu[8]);
printf("\n\nnational vaccinated population     : %lli (percentage)",pp.uu[9]);

               fclose(update_stats);
printf("\n\n\n\n\npress ESC to return to home page:\n");
ch=getch();
switch(ch){
    case ESC:
    break;
}
return(1);
}


int vac_update(int vac)
{
    char ch;
      system("cls");
FILE *uupdate_stats;
struct sstatics ppp;
uupdate_stats=fopen("registrationdetail2.txt","wb");
   if(uupdate_stats == NULL)
{
printf("FIle not Found");
exit(1);
}
printf("UPDATE THE NATIONAL AVAILABILITY OF VACCINE :\n\n\n");
printf("\n\njohnson and johnson  :");

scanf("%lli",&ppp.uuu[0]);
printf("\n\nCovishield vaccine   :");
scanf("%lli",&ppp.uuu[1]);
printf("\n\nvero cell vaccine    :");
scanf("%lli",&ppp.uuu[2]);
printf("\n\nModerna vaccine      :");
scanf("%lli",&ppp.uuu[3]);
printf("\n\nastraZeneca vaccine  :");
scanf("%lli",&ppp.uuu[4]);
printf("\n\nCoronaVac vaccine    :");
scanf("%lli",&ppp.uuu[5]);
fwrite(&ppp,sizeof( struct sstatics),1,uupdate_stats);
 fclose(uupdate_stats);
printf("\n\n\n\n enter ESC to exit: ");
ch=getch();
switch(ch){
    case ESC:
    break;
}
return(1);
}


int vaccine(int vaccine_return)
{
    char ch;
    FILE *uupdate_stats;

                    struct sstatics ppp;
               uupdate_stats=fopen("registrationdetail2.txt","rb");
                fread(&ppp,sizeof(struct sstatics),1,uupdate_stats);


               system("cls");
               printf("\n<VACCINE AVAILABILITY IS UPDATED ON DAILY BASIS>\n\n\n");
printf("vaccine name:\t\t doses required:\tavailable vaccines(nation wide):\n\n");
printf("johnson and johnson:\t\t1\t\t\t%lli\n\n",ppp.uuu[0]);
printf("Covishield vaccine:\t\t2\t\t\t%lli\n\n",ppp.uuu[1]);
printf("vero cell vaccine:\t\t2\t\t\t%lli\n\n",ppp.uuu[2]);
printf("Moderna vaccine:\t\t2\t\t\t%lli\n\n",ppp.uuu[3]);
printf("astraZeneca vaccine:\t\t2\t\t\t%lli\n\n",ppp.uuu[4]);
printf("CoronaVac vaccine:\t\t2\t\t\t%lli\n\n",ppp.uuu[5]);


               fclose(uupdate_stats);

printf("\n\npress ESC to return to home page: ");
ch=getch();
switch(ch){
    case ESC:
    break;
}
return(1);
}
