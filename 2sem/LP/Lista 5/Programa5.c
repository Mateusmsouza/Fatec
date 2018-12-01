#include <stdio.h>
#include <locale.h>
#include <string.h>

char* return_one_name(char name0[255], char name1[255], char name2[255], char name3[255], char name4[255], char order_controll[5][255]){
	for (int i = 0; i < 255; ++i)
	{
		if (  (name0[i] < name1[i]  && name0[i] < name2[i] && name0[i] < name3[i] && name0[i]  < name4[i])  && ( (strcmp(name0, order_controll[4]) != 0 )&& (strcmp(name0, order_controll[3]) != 0) && (strcmp(name0, order_controll[2]) != 0) && (strcmp(name0, order_controll[1]) != 0) && (strcmp(name0, order_controll[0]) != 0) )){	

			return name0;

		}
		if (  (name1[i] < name0[i]  && name1[i] < name2[i] && name1[i] < name3[i] && name1[i]  < name4[i])  && ( (strcmp(name1, order_controll[4]) != 0 )&& (strcmp(name1, order_controll[3]) != 0) && (strcmp(name1, order_controll[2]) != 0) && (strcmp(name1, order_controll[1]) != 0) && (strcmp(name1, order_controll[0]) != 0) )){	

			return name1;

		}
		if (  (name2[i] < name1[i]  && name2[i] < name0[i] && name2[i] < name3[i] && name2[i]  < name4[i])  && ( (strcmp(name2, order_controll[4]) != 0 )&& (strcmp(name2, order_controll[3]) != 0) && (strcmp(name2, order_controll[2]) != 0) && (strcmp(name2, order_controll[1]) != 0) && (strcmp(name2, order_controll[0]) != 0) )){	

			return name2;

		}
		
		if (  (name3[i] < name1[i]  && name3[i] < name0[i] && name3[i] < name2[i] && name3[i]  < name4[i])  && ( (strcmp(name3, order_controll[4]) != 0 )&& (strcmp(name3, order_controll[3]) != 0) && (strcmp(name3, order_controll[2]) != 0) && (strcmp(name3, order_controll[1]) != 0) && (strcmp(name3, order_controll[0]) != 0) )){	

			return name3;
		}

		if (  (name4[i] < name1[i]  && name4[i] < name0[i] && name4[i] < name2[i] && name4[i]  < name3[i])  && ( (strcmp(name4, order_controll[4]) != 0 )&& (strcmp(name4, order_controll[3]) != 0) && (strcmp(name4, order_controll[2]) != 0) && (strcmp(name4, order_controll[1]) != 0) && (strcmp(name4, order_controll[0]) != 0) )){	

			return name4;
		}
	}
}

void alphabetical(char names[5][255]){
	char order_controll[5][255];
	char aux[255];

	for (int i = 0; i < 5; ++i)
	{
		strcpy(order_controll[i], "a");
	}
	printf("Lista em Ordem Alfabética:\n");
	for (int i = 0; i < 5; ++i)
	{
		strcpy(aux ,return_one_name(names[0],names[1],names[2],names[3],names[4], order_controll));
		printf("%s\n", aux);
		strcpy(order_controll[i], aux );
	}

}

int main(){
	char names[5][255];

	for (int i = 0; i < 5; ++i)
	{
		printf("Type your name. (Name index: %d)\n", i);
		scanf("%s", names[i]);
		printf("Saved successfully!\n");
	}

	alphabetical(names);

	system("pause");
}