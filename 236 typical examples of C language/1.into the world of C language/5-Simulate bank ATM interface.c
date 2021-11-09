#include <stdio.h>


void login(int account, int passward)
{
	int a = 0, b = 0;
	while (1)
	{
		printf("Please enter your account number:\n");
		scanf("%d", &a);
		printf("Please enter the passward:\n");
		scanf("%d", &b);
		if (a == account && b == passward)
		{
			printf("Login successfully!\n");
			break;
		}
		else
		{
			printf("The user name or passward is incorrect\n");
			continue;
		}

	}
}


void menu()
{
	printf("Please select the service you want!\n");
	printf("1.Query balance\n");
	printf("2.Withdrawals\n");
	printf("3.Diposit\n");
	printf("4.Change the passward\n");
	printf("5.Take the card\n");
}



void queryBalance(int number)
{
	printf("Your balance is $%d\n", number);
}



int withdrawals(int money)
{
	int amount = 0;
	printf("Please enter the amount you want to withdraw!\n");
	while (1)
	{
		scanf("%d", &amount);
		if (amount > money)
		{
			printf("Lack of balance!\n");
			continue;
		}
		else if (amount > 0)
		{
			printf("You have successfully withdraw $%d\n", amount);
			return money - amount;
			break;
		}
		else
		{
			printf("Error!Please try again!\n");
			continue;
		}
	}

}

int diposit(int money)
{
	int amount = 0;
	printf("Please enter the amount you want to diposit!\n");
	while (1)
	{
		scanf("%d", &amount);
		if (amount > 0)
		{
			printf("You have successfully diposit!\n");
			return money + amount;
			break;
		}
		else
		{
			printf("Error!Please try again!\n");
			continue;
		}
	}
}


int changePassward(int passward)
{
	int number = 0;
	int i = 0;
	printf("PLease enter your old passward!\n");
	for ( ; i < 3; i++)
	{
		scanf("%d", &number);
		if (number == passward)
		{
			break;
		}
		else
		{
			printf("Error!Please try again!\n");
			continue;
		}
	}
	if (i == 3)
	{
		printf("The modification failed.Please try again later!\n");
		return passward;
	}
	while (1)
	{
		printf("New passward:\n");
		scanf("%d", &number);
		printf("again:\n");
		int temp = 0;
		scanf("%d", &temp);
		if (number == temp)
		{
			printf("Change successfully!\n");
			return number;
			break;
		}
		else
		{
			printf("Two inconsistencies!\n");
			continue;
		}
	}
}


int main()
{
	int account = 123456;
	int passward  = 123456;
	int money = 1000;
	printf("Welcome to the ATM!\n\n");
	login(account,passward);
	queryBalance(money);
	int temp = 0;
	do
	{
		menu();
		scanf("%d", &temp);
		switch (temp)
		{
			case 1:
				queryBalance(money);
				break;
			case 2:
				money = withdrawals(money);
				break;
			case 3:
				money = diposit(money);
				break;
			case 4:
				passward = changePassward(passward);
				break;
			case 5:
				printf("The card was successfully removed!Thank you for using it!\n");
				break;
			default:
				printf("Error!Please try again!\n");
				break;
		}

	}
	while(temp != 5);

	return 0;
}
