#include <stdio.h>
#include <string.h>
#include <math.h>

//change

int main() {
	char message[256]; //raw message
	char key[256]; //raw key
	int eints[256]; //encrypted integers
	char estring[256];
	int dints[256]; //decrypted integers


	printf("Enter your message:");
	fgets(message, sizeof(message), stdin);
	
	printf("Enter your key:");
	fgets(key, sizeof(key), stdin);
	printf("\n");

	//Encryption
	int klength = strlen(key) - 1;
	int mlength = strlen(message) - 1;
	int i;
	int tracker;

	for(i = 0; i < mlength; i++){
		tracker = i % klength;
		eints[i] = ((int)message[i] + (int)key[tracker]) % 255;
	}

	// print encrypted message in int values	
	printf("Encrypted message:");
	for(i = 0; i < mlength; i++){
		printf("-");
		printf("%d",eints[i]);
	}
	printf("\n\n");
	
	// print encrypted message in character values
	printf("Encrypted String:");
	for(i = 0; i < mlength; i++){
		printf("%c", (char)eints[i]);
	}
	printf("\n\n");

	printf("lasjhd;liar;arj\n");
	printf("lasjhd;liar;arj\n");
	printf("lasjhd;liar;arj\n");
	printf("ginger");

	//decrypt
	for(i = 0; i < mlength; i++){
                tracker = i % klength;
                dints[i] = ((int)eints[i] - (int)key[tracker]) % 255;
        }
	
	// print decrypted message
	printf("Decrypted message:");
        for(i = 0; i < mlength; i++){
                printf("%c", (char)dints[i]);
        }
	printf("\n\n");

	return 0;
}

