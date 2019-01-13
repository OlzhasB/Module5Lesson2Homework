#include<stdio.h> 
#include<locale.h> 
#include<iostream> 

void task1()
{

	int i, A[20] = { 0 };

	for (i = 0; i < 20; i++)
	{
		A[i] = 50 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}


void task2()

{
	int i, A[20] = { 0 }, j, a;

	printf("Given array: \n");
	for (i = 0; i < 20; i++)
	{
		A[i] = 50 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nDecreasing array: \n");
	for (i = 0; i < 19; i++)
	{
		for (j = 18; j >= i; j--)
		{
			if (A[j] < A[j + 1])
			{
				a = A[j];
				A[j] = A[j + 1];
				A[j + 1] = a;
			}
		}
	}

	for (i = 0; i < 20; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}


	printf("\nIncreasing array: \n");
	for (i = 0; i < 19; i++)
	{
		for (j = 18; j >= i; j--)
		{
			if (A[j] > A[j + 1])
			{
				a = A[j];
				A[j] = A[j + 1];
				A[j + 1] = a;
			}
		}
	}

	for (i = 0; i < 20; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}

void task3()
{

	int A[10] = { 0 }, i, maxIndex, minIndex, max = 0, min = 21;


	for (i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);

		if (A[i] > max)
		{
			max = A[i];
			maxIndex = i;
		}

		if (A[i] < min)
		{
			min = A[i];
			minIndex = i;
		}
	}

	printf("\nMax number is A[%d] = %d\n", maxIndex, max);
	printf("\nMin number is A[%d] = %d\n", minIndex, min);

	int a;
	a = A[maxIndex];
	A[maxIndex] = A[minIndex];
	A[minIndex] = a;

	printf("\nNew array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}



void task4()
{
	int A[15] = { 0 }, i, a;

	for (i = 0; i < 15; i++)
	{
		A[i] = -10 + rand() % 45;
		printf("A[%d] = %d\n", i, A[i]);
	}

	a = A[0];
	printf("\nNumbers more than A[0] = %d\n", a);
	for (i = 0; i < 10; i++)
	{
		if (A[i] > a)
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	system("pause");
}


void task5()
{
	int A[15] = { 0 }, i, maxIndex, minIndex, max = 0, min = 21, sum, dif;


	for (i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);

		if (A[i] > max)
		{
			max = A[i];
			maxIndex = i;
		}

		if (A[i] < min)
		{
			min = A[i];
			minIndex = i;
		}
	}

	printf("\nMax number is A[%d] = %d\n", maxIndex, max);
	printf("Min number is A[%d] = %d\n", minIndex, min);

	sum = max + min;
	dif = max - min;

	printf("\nSum of these numbers is %d\n", sum);
	printf("Difference values of these numbers is %d\n", dif);

	system("pause");
}

void task6()
{
	int A[17] = { 0 }, i, sum = 0;

	printf("Given array:\n");
	for (i = 0; i < 17; i++)
	{
		A[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("\nOdd numbers:\n");
	for (i = 0; i < 17; i++)
	{
		if (A[i] % 2 != 0)
		{
			printf("A[%d] = %d\n", i, A[i]);
			sum += A[i];
		}
	}

	printf("\nNumbers multiple of 3:\n");
	for (i = 0; i < 17; i++)
	{
		if ((A[i] % 3 == 0) && (A[i] != 0))
		{
			printf("A[%d] = %d\n", i, A[i]);
			A[i] = sum;
		}
	}

	printf("Sum of the odd numbers is %d\n", sum);

	printf("\nChanged array:\n");
	for (i = 0; i < 17; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);

	}

	system("pause");
}

void task7()
{
	int i, A[15] = { 0 }, neg = 0, prod = 1, zero = 0;

	printf("Given array:\n");
	for (i = 0; i < 15; i++)
	{
		A[i] = -10 + rand() % 20;
		printf("A[%d] = %d\n", i + 1, A[i]);
	}

	printf("\nNevagitve numbers:\n");
	for (i = 0; i < 15; i++)
	{
		if (A[i] < 0)
		{
			neg++;
			printf("A[%d] = %d\n", i + 1, A[i]);
		}
	}
	printf("\nThe amount of negative numbers: %d\n", neg);

	printf("\nPosiitve numbers:\n");
	for (i = 0; i < 15; i++)
	{
		if (A[i] > 0)
		{
			prod *= A[i];
			printf("A[%d] = %d\n", i + 1, A[i]);
		}
	}
	printf("\nThe production of positive numbers: %d\n", prod);


	for (i = 0; i < 15; i++)
	{
		if (A[i] == 0)
		{
			zero++;
		}
	}
	printf("\nThe amount of zeroes is : %d\n", zero);

	system("pause");
}

void task8()
{
	int i, A[19] = { 0 };

	printf("Given array:\n");
	for (i = 0; i < 19; i++)
	{
		A[i] = -1 + rand() % 20;
		printf("A[%d] = %d\n", i + 1, A[i]);
	}

	int a = 0, sum = 0, negIndex;
	i = 0;
	do
	{
		if (A[i] < 0)
		{
			a = 1;
			negIndex = i;
	
		}
		i++;
	} while ((i < 19) && (a == 0));

	if (a == 0)
		printf("\nThere is no negative number\n");

	else
	{
		printf("\nThe first negative number is A[%d] = %d\n", negIndex + 1, A[negIndex]);
		printf("\nArray before this number:\n");
		for (i = 0; i < negIndex; i++)
		{
			printf("A[%d] = %d\n", i + 1, A[i]);
		}
	}
	
	system("pause");
}


void task9()
{
	int i, A[12] = { 0 }, min = 20, minIndex;

	printf("Given array:\n");
	for (i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 15;
		printf("A[%d] = %d\n", i, A[i]);

		if (A[i] < min)
		{
			min = A[i];
			minIndex = i;
		}
	}
	printf("\nMin number is A[%d] = %d\n", minIndex, min);

	min *= 3;
	A[minIndex] = min;
	printf("\nMin number multiplied by 3 is %d\n", min);

	printf("\nMin number is A[%d] = %d\n", minIndex, min);
	printf("The last number is A[%d] = %d\n", 11, A[11]);

	

	int a;
	a = min;
	A[minIndex] = A[11];
	A[11] = a;

	printf("\nChanged array\n");
	for (i = 0; i < 12; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}



void task10()
{
	int i, A[15] = { 0 }, a;

	printf("Given array:\n");
	for (i = 0; i < 15; i++)
	{
		A[i] = 1 + rand() % 15;
		printf("A[%d] = %d\n", i, A[i]);
	}

	int j = 14;
	printf("\nChanged array:\n");
	for (i = 0; i < 15; i++)
	{
		printf("A[%d] = %d\n", j, A[j]);
		j--;
	}

	system("pause");
}

int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("¬ведите номер задани€: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	}

	printf("’отите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}