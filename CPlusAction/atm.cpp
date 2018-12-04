#include "stdafx.h"
#include <stdio.h>
#include<stdlib.h>

void atm() 
{
	char Key, CMoney;
	int inputPwd, defaultPwd = 123, i = 1, a = 1000;
	while (1)
	{
		do {
			system("cls");
			printf("******************************\n");
			printf("*    Please select key:      *\n");
			printf("*    1.password              *\n");
			printf("*    2.get money             *\n");
			printf("*    3.Return                *\n");
			printf("******************************\n");
			Key = getchar();
		} while (Key != '1'&&Key != '2'&&Key != '3');
		switch (Key)
		{
		case '1':
			system("cls");
			do {
				i++;
				printf("      please input password      ");
				scanf_s("%d", &inputPwd);
				if (inputPwd != defaultPwd) {
					if (i > 3) {
						printf("Wrong!Please any key to exit...");
						getchar();
						exit(0);
					}
					else {
						puts("wrong,try again");
					}
				}
			} while (inputPwd != defaultPwd&&i <= 3);
			printf("OK!Press any key to continue...");
			getchar();
		case '2':
			do {
				system("cls");
				if (inputPwd != defaultPwd) {
					printf("please logging in,press any key to continue...");
					getchar();
					break;
				}
				else {
					printf("************************************\n");
					printf("    Please select:                  \n");
					printf("    1.$100                          \n");
					printf("    2.$200                          \n");
					printf("    3.$300                          \n");
					printf("    4.Return                        \n");
					printf("************************************\n");
					CMoney = getchar();
				}
			} while (CMoney != '1'&&CMoney != '2'&&CMoney != '3'&&CMoney != '4');
			switch (CMoney) {
			case '1':
				system("cls");
				a = a - 100;
				printf("************************************\n");
				printf("Your Credit money is $100,Thank you!\n");
				printf("The balance is $%d.\n", a);
				printf("Press any key to return...\n");
				printf("************************************\n");
				getchar();
				break;
			case '2':
				system("cls");
				a = a - 200;
				printf("************************************\n");
				printf("Your Credit money is $200,Thank you!\n");
				printf("The balance is $%d.\n", a);
				printf("Press any key to return... \n");
				printf("************************************\n");
				getchar();
				break;
			case '3':
				system("cls");
				a = a - 300;
				printf("************************************\n");
				printf("Your Credit money is $300,Thank you!\n");
				printf("the balance is $%d \n", a);
				printf("Press any key to return...\n");
				printf("************************************\n");
				getchar();
				break;
			}
			break;
		case '3':
			printf("*************************************\n");
			printf("Thank you for your using!\n");
			printf("Goodbye!\n");
			printf("*************************************\n");
			getchar();
			break;
		}
		break;
	}
	return;
}