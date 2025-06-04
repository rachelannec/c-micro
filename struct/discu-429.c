#include <stdio.h>

struct phone{
	char brand[80];
	char model[80];
	char color[80];
	float price;
} po1, po2, po3; // tucked in

int main(){
	// struct phone po1, po2, po3; 
	struct phone po1 = {
		"Apple", "iPhone 15", "black", 19000
	};
	struct phone po2 = {
		"Huawei", "Mate1", "blue", 20000
	};
	
	printf("%s %s %s %.2f\n", po1.brand, po1.model, po1.color, po1.price);
}