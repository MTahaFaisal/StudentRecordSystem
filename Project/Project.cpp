#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;
int main()
{
	int rollNumber[100], Class[100];
	float finalMark[100], midMark[100];
	char grades[100];
	int size = 50;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		rollNumber[i] = i + 1;
		Class[i] = (rand() % 10) + 1;
		midMark[i] = rand() % 51;
		finalMark[i] = rand() % 101;
		if (finalMark[i] > 85)
		{
			grades[i] = 'A';
		}
		else if (finalMark[i] > 72)
		{
			grades[i] = 'B';
		}
		else if (finalMark[i] > 59)
		{
			grades[i] = 'C';
		}
		else if (finalMark[i] > 49)
		{
			grades[i] = 'D';
		}
		else
		{
			grades[i] = 'F';
		}
	}

	cout << " ______________________" << endl;
	cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
	cout << " ______________________" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;

	}
	cout << " ______________________" << endl;

	cout << endl << "Enter 1 to sort and display all records roll number wise in ascending order\n";
	cout << "Enter 2 to sort and display all records roll number wise in descending order\n";
	cout << "Enter 3 to sort and display all records in ascending order based on Midtern marks\n";
	cout << "Enter 4 to sort and display all records in descending order based on Midterm marks\n";
	cout << "Enter 5 to sort and display all records in ascending order based on Finals marks\n";
	cout << "Enter 6 to sort and display all records in descending order based on Finals marks\n";
	cout << "Enter 7 to sort and display all records in ascending order based on grades\n";
	cout << "Enter 8 to sort and display all records in descending order based on grades\n";
	cout << "Enter 9 to add new entry of student\n";
	cout << "Enter 10 to delete a student based on his roll number\n";
	cout << "Enter 11 to display record of all the students greater than X marks in Finals in descending order\n";
	cout << "Enter 12 to display record of all the students greater than X marks in Finals in ascending order\n";
	cout << "Enter 13 to display record of all the students less than or equal to X marks in Finals in descending order\n";
	cout << "Enter 14 to display record of all the students less than or equal to  X marks in Finals in ascending order\n";
	cout << "Enter 15 to display record of all the students greater than X grade in ascending order\n";
	cout << "Enter 16 to display record of all the students greater than X grade in descending order\n";
	cout << "Enter 17 to display record of all the students less than or equal to X grade in ascending order\n";
	cout << "Enter 18 to display record of all the students less than or equal to X grade in descending order\n";
	while (2)
	{
		int option;
		cout << "\nEnter your option : ";
		cin >> option;
		if (option == 1)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (rollNumber[j] > rollNumber[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 2)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (rollNumber[j] < rollNumber[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 3)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (midMark[j] > midMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 4)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (midMark[j] < midMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 5)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] > finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 6)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] < finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 7)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (grades[j] > grades[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 8)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (grades[j] < grades[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}


		}
		else if (option == 9)
		{
			while (1)
			{
				cout << "Enter roll number: ";
				cin >> rollNumber[size];
				bool cond = 1;
				for (int i = 0; i < size; i++)
				{
					if (rollNumber[size] == rollNumber[i])
					{
						cout << "Roll number already present !" << endl;
						cond = 0;
						break;
					}
				}
				if (cond)
				{
					while (1)
					{
						cout << "Enter Class: ";
						cin >> Class[size];
						if (Class[size] < 1 || Class[size]>10)
						{
							cout << "Invalid Class !" << endl;
						}
						else
						{
							break;
						}
					}
					while (1)
					{
						cout << "Enter Midterm marks: ";
						cin >> midMark[size];
						if (midMark[size] < 0 || midMark[size]>50)
						{
							cout << "Invalid Marks !" << endl;
						}
						else
						{
							break;
						}
					}
					while (1)
					{
						cout << "Enter Finalterm marks: ";
						cin >> finalMark[size];
						if (finalMark[size] < 0 || finalMark[size]>100)
						{
							cout << "Invalid Marks !" << endl;
						}
						else
						{
							break;
						}
					}
					if (finalMark[size] > 85)
					{
						grades[size] = 'A';
					}
					else if (finalMark[size] > 72)
					{
						grades[size] = 'B';
					}
					else if (finalMark[size] > 59)
					{
						grades[size] = 'C';
					}
					else if (finalMark[size] > 49)
					{
						grades[size] = 'D';
					}
					else
					{
						grades[size] = 'F';
					}
					size++;
					break;
				}
			}


		}
		else if (option == 10)
		{
			int num;
			cout << "Enter the roll number of the student whose record you want to delete !" << endl;
			cin >> num;
			bool check = 0;
			for (int i = 0; i < size; i++)
			{
				if (num == rollNumber[i])
				{
					for (int j = i; j < size; j++)
					{
						rollNumber[j] = rollNumber[j + 1];
						Class[j] = Class[j + 1];
						midMark[j] = midMark[j + 1];
						finalMark[j] = finalMark[j + 1];
						grades[j] = grades[j + 1];
					}
					check = 1;
					size--;
					break;
				}
			}
			if (check)
			{
				cout << "Record has been deleted !" << endl;
			}
			else
			{
				cout << "Student not found !" << endl;
			}


		}
		else if (option == 11)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] < finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			int num;
			cout << "Enter your number: ";
			cin >> num;

			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;


		}
		else if (option == 12)
		{

			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] > finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			int num;
			cout << "Enter your number: ";
			cin >> num;
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;




		}
		else if (option == 13)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] < finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			int num;
			cout << "Enter your number: ";
			cin >> num;
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;



		}
		else if (option == 14)
		{

			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] > finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			int num;
			cout << "Enter your number: ";
			cin >> num;
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;




		}
		else if (option == 15)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] > finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			char num = 'l';
			while (num != 'A' && num != 'B' && num != 'C' && num != 'D' && num != 'F')
			{
				cout << "Enter your grade: ";
				cin >> num;
			}
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;




		}
		else if (option == 16)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] < finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			char num = 'l';
			while (num != 'A' && num != 'B' && num != 'C' && num != 'D' && num != 'F')
			{
				cout << "Enter your grade: ";
				cin >> num;
			}
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;



		}
		else if (option == 17)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] > finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			char num = 'l';
			while (num != 'A' && num != 'B' && num != 'C' && num != 'D' && num != 'F')
			{
				cout << "Enter your grade: ";
				cin >> num;
			}
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;



		}
		else if (option == 18)
		{
			for (int i = size - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (finalMark[j] < finalMark[j + 1])
					{
						int swap1 = rollNumber[j];
						rollNumber[j] = rollNumber[j + 1];
						rollNumber[j + 1] = swap1;

						int swap2 = Class[j];
						Class[j] = Class[j + 1];
						Class[j + 1] = swap2;

						char swap3 = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = swap3;

						float swap4 = midMark[j];
						midMark[j] = midMark[j + 1];
						midMark[j + 1] = swap4;

						float swap5 = finalMark[j];
						finalMark[j] = finalMark[j + 1];
						finalMark[j + 1] = swap5;

					}
				}
			}

			char num = 'l';
			while (num != 'A' && num != 'B' && num != 'C' && num != 'D' && num != 'F')
			{
				cout << "Enter your grade: ";
				cin >> num;
			}
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;



		}

		cout << endl;
		if (option > 0 && option < 11)
		{
			cout << " ______________________" << endl;
			cout << " | " << setw(10) << "RollNumber" << " | " << setw(10) << "MidTerm" << " | " << setw(10) << "FinalTerm" << " | " << setw(10) << "Class" << " | " << setw(10) << "Grade" << " | " << endl;
			cout << " ______________________" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << " | " << setw(10) << rollNumber[i] << " | " << setw(10) << midMark[i] << " | " << setw(10) << finalMark[i] << " | " << setw(10) << Class[i] << " | " << setw(10) << grades[i] << " | " << endl;
			}
			cout << " ______________________" << endl;

		}
		char exit;
		cout << "Enter 'e' or 'E' exit !" << endl;

		cin >> exit;
		if (exit == 'e' || exit == 'E')
		{
			break;
		}
	}
	return 0;
}