typedef struct book
{
	int id;
	char name[20];
	char author[20];
}book;

void insertbookdata(book*ptr);
int searchbook(book*);
void showbooks(book*,int,int);
void main()
{
	book arr[10];
	int check;
	insertbookdata(&arr);
	check=searchbook(&arr);
	showbooks(&arr,check,10);
}
void insertbookdata(book*ptr)
{
	ptr->id=101;
	strcpy(ptr->name,"letusc");
	strcpy(ptr->author,"yashwantkanetkar");
		ptr[1].id=102;
		strcpy(ptr[1].name,"mrityunjaya");
		strcpy(ptr[1].author,"shivajisawant");
			ptr[2].id=103;
			strcpy(ptr[2].name,"letusjava");
			strcpy(ptr[2].author,"yashwantkanetkar");
				ptr[3].id=104;
				strcpy(ptr[3].name,"shrimanyogi");
				strcpy(ptr[3].author,"ranjitdesai");
					ptr[4].id=105;
					strcpy(ptr[4].name,"panipat");
					strcpy(ptr[4].author,"vishwaspatil");
						ptr[5].id=106;
						strcpy(ptr[5].name,"duniyadari");
						strcpy(ptr[5].author,"suhasshrivalkar");
							ptr[6].id=107;
							strcpy(ptr[6].name,"partner");
							strcpy(ptr[6].author,"v.p.kale");
								ptr[7].id=108;
								strcpy(ptr[7].name,"musafir");
								strcpy(ptr[7].author,"anupgodbole");
									ptr[8].id=109;
									strcpy(ptr[8].name,"radheya");
									strcpy(ptr[8].author,"ranjitdesai");
										ptr[9].id=110;
										strcpy(ptr[9].name,"vyaktiaanivalli");
										strcpy(ptr[9].author,"p.l.deshpande");
}
int searchbook(book*b)
{
	int check;
	printf("search book");
	printf("\nif you know book id: press 1");
	printf("\nif you know book Name: press 2");
	printf("\nif you know book Author: press 3==");
	scanf("\n%d",&check);
	return check;
}
 void showbooks(book*showbook,int check,int t)
{
	int checkid;
	char checkbookname[20];
	char checkauthor[20];
	int i;
	int result=1;
	if(check==1)
	{
		printf("Enter id:");
		scanf("%d",&checkid);
		for(i=0;i<t;i++)
		{
			if(showbook[i].id==checkid)	
			{
				printf("\nBook id:%d",showbook[i].id);
				printf("\nBook Name:%s",showbook[i].name);
				printf("\nBook Author:%s",showbook[i].author);
				break;
			}
			if(i==9)
			{
				printf("\tNOT FOUND");
			}
		}
	}
	if(check==2)
	{
		printf("Enter Bookname:");
		scanf("%s",&checkbookname);
		for(i=0;i<t;i++)
		{
			result=strcmp(showbook[i].name,checkbookname);
			
			if(result==0)
			{
			
				printf("\nBook id:%d",showbook[i].id);
				printf("\nBook Name:%s",showbook[i].name);
				printf("\nBook Author:%s",showbook[i].author);
				break;    
			}
			if(i==9)
			{
				printf("\tNOT FOUND");
			}
			
		}
	}  
	if(check==3)
	{
		printf("Enter author:");
		scanf("%s",&checkauthor);
		for(i=0;i<t;i++)
		{
			result=strcmp(showbook[i].author,checkauthor);
			
			if(result==0)
			{
			
				printf("\n\nBook id:%d",showbook[i].id);
				printf("\nBook Name:%s",showbook[i].name);
				printf("\nBook Author:%s",showbook[i].author);
			}
	
		}
	}
	
}
