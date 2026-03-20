#include <stdio.h>

void ToUpper(char* string, int n){
	for (int i = 0; i < n; i++){
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
	}
}

void ToLower(char* string, int n){
	for (int i = 0; i < n; i++){
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 32;
	}
}

int main(){
	char string[7] = "sTrINg";
	printf("Start: %s\n", string);

	ToUpper(string, 6);
	printf("Upper: %s\n", string);
	ToLower(string, 6);
	printf("Lower: %s\n", string);
}
