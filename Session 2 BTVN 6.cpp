#include <stdio.h>
int main(){
	
	const float PI = 3.14;
	int ban_kinh;
	ban_kinh = 5;
	float chu_vi;
	chu_vi = ban_kinh * 2 * PI;
	float dien_tich;
	dien_tich = ban_kinh * ban_kinh * PI;
	printf ("Chu vi hinh tron la %f\n", chu_vi);
	printf ("Dien tich hinh tron la %f\n", dien_tich);
	return 0;
}
