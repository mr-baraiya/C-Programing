//5. Create a function that converts amount into words.
// (i.e. 9241: Nine Thousand Two Hundred Forty One)?(C)
#include <stdio.h>
#include <string.h>

void number_to_words(int);

void main() {
    int n = 0;
    printf("Enter the Four Digit Number : ");
    scanf("%d",&n);
    number_to_words(n);
}

void number_to_words(int n) {
	char result[1024] = "";
    // Arrays for number words
    char *ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
	char *teens[] = {"Ten","Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", 
						"Eighteen", "Nineteen" };
    char *tens[] = { "", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", 
					"Sixty ", "Seventy ", "Eighty ", "Ninety " };

    if (n == 0) {
        printf("Zero");
        return;
    }
    
	if(n >= 1000){
		strcat(result,ones[n/1000]);
		strcat(result," Thousand ");
		n = n % 1000;
	}
	if(n >= 100){
		strcat(result,ones[n/100]);
		strcat(result," Hundred ");
		n = n % 100;
	}
	
	if(n >= 20){
		strcat(result,tens[n/10]);
		n = n % 10;
		strcat(result,ones[n]);
		n = 0;
	}
	if(n >= 10){
		strcat(result,teens[n%10]);
		n = 0;
	}
	if(n > 0){
		strcat(result,ones[n]);
		n = 0;
	}
	
	puts(result);
}
