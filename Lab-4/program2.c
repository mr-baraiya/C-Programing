//2. Create a structure book with book title, author, publication, and price. Read data of 3
//books and display.(A)

//Create Structure
struct book{
	char title[30];
	char author[30];
	char publication[30];
	float price;
};
void main(){
	struct book b[3];
	int i=0;
	//get value from User
	for(i=0;i<3;i++){
		printf("\n");
		printf("Enter the Title of Book : ");
		gets(b[i].title);
		printf("Enter the Author Name : ");
		gets(b[i].author);
		printf("Enter the Publication : ");
		gets(b[i].publication);
		printf("Enter the Price : ");
		scanf("%f",&b[i].price);
		getchar();
	}
	//Display Structure
	for(i=0;i<3;i++){
		printf("\n");
		printf("Book Name : %s \n",b[i].title);
		printf("Author Name : %s \n",b[i].author);
		printf("Publication : %s \n",b[i].publication);
		printf("Price : %f \n",b[i].price);
	}
}
