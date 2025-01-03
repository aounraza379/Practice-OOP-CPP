<<<<<<< HEAD
#include <iostream>
using namespace std;

// BASIC TEMPLATE OF CLASS
// class names {
//     public:
//     int a,b,c;
//     void fnc() {
//         cout << "a is: " << a << endl;
//         cout << "b is: " << b << endl;
//         cout << "c is: " << c << endl;
//    	}
// 	names(int one, int two, int three) {
//     	a = one;
//     	b = two;
//     	c = three;
//     }
// };
// int main() {
//     names a1( 100, 200, 300 );
//     a1.fnc();
//     names a2( 111, 222, 333 );
//     a2.fnc();
//     return 0;
// }

// QUESTION 1
// WRITE A CLASS THAT CONTAINS TWO INTEGERS DATA MEMBERS WHICH ARE INITIALIZED BY 50 AND 100 IN CONSTRUCTOR.
// IT HAS MEMBER FUNCTION product() THAT DISPLAYS THE PRODUCT OF DATA MEMBERS.

// SOLUTION 1
// class Data {
// private:
//    int n1;
//    int n2;
// public:
//    Data() {
//        n1 = 50;
//        n2 = 100;
//    }
//    void product() {
//        int result = n1 * n2;
//        cout << "The Product is: " << result;
//    }
// };
// int main() {
//    Data output;
//    output.product();
//    return 0;
// }

// QUESTION 2
// DECLARE A CLASS NAME Marks WITH 3 DATA MEMBERS TO STORE MARKS OF THREE SUBJECTS, MAKE FUNCTIONS input() to input
// details, sum() to display sum of all marks, avg() to calculate and return avg of all subjects.

// SOLUTION 2 -- 1st Method
// class marks {
//	private:
//		float a,b,c;
//	public:
//		input() {
//			cout << "Enter Marks: ";
//			cin >> a >> b >> c;
//		}
//		void sum() {
//			cout << "Sum is: " << a + b + c << endl;
//		}
//		void avg() {
//			cout << "Average is: " << (a + b + c) / 3;
//		}
// };
// int main() {
//	marks m;
//	m.input();
//	m.sum();
//	m.avg();	
// }

// SOLUTION 2 -- 2nd Method
// class Marks {
// private:
//    int marks1;
//    int marks2;
//    int marks3;
// public:
//    int input() {
//        cout << "Enter marks in three subjects: \n"; 
//        cin >> marks1 >> marks2 >> marks3;
//        return 0;
//    }
//    int sum() {
//        return marks1 + marks2 + marks3;
//    }
//    int avg() {
//        return (marks1 + marks2 + marks3)/3;
//    }
// };
// int main() {
//    Marks show;
//    show.input();
//    int total = show.sum();
//    int average = show.avg();
//    cout << "Total marks: " << total << endl;
//    cout << "Average marks: " << average << endl;
//    return 0;
// }

// QUESTION 3
// DECLARE CLASS NAME Player WHICH HAS ATTRIBUTES pName, pAvg, pTeam.MAKE TWO FUNCTIONS input() for details AND
// output() to show details.KEEP RUNNING PROGRAM UNTIL USER PRESSING Y/y.

// SOLUTION 3
// class Player {
// 	string pName;
// 	int pAvg;
// 	string pTeam;
// 	public:
// 		void input() {
// 			cout << "Enter player's name : "; 
// 			cin >> pName;
// 			cout << "Enter player's average : "; 
// 			cin >> pAvg;
// 			cout << "Enter player's team : "; 
// 			cin >> pTeam;
//		}
//		void output() {
//			cout << "\nEntered Details are :- \n";
//			cout << "Player's name : " << pName <<endl; 
// 			cout << "Player's average : " << pAvg << endl; 
// 			cout << "Player's team : " << pTeam << endl;
//		}
// };
// int main() {
// 		Player p1;
//	 	p1.input();
//	 	p1.output();
// 	
// 	while(true) {
// 		char doAgain;
// 		cout << "\nDo you want to enter details again? :";
// 		cin >> doAgain;
// 		
// 		if( doAgain == 'Y' || doAgain == 'y' ) {
// 			p1.input();
// 			p1.output();
//		} else {
//			break;
//		}
// 	}
// }

// QUESTION 4
// DECLARE A CLASS NAME Notebook WITH 3 DATA MEMEBERS bookId, bookName AND bookPrice. INPUT VALUES TO 
// THE DATA MEMBERS IN THE CONSTRUCTOR, WRITE A Display() FUNCTION THAT DISPLAYS THE DETAILS OF THE BOOK.
// CREATE 2 OBJECTS OF Notebook CLASS.ADD THE PRICE OF BOTH BOOKS, IF SUM IS EVEN DISPLAY DETAILS OF FIRST 
// BOOK, OTHERWISE DISPLAY DETAILS OF SECOND BOOK.

// SOLUTION 4
// class Notebook { 
// 	private: 
//	 	string bookName;
//	 	float bookPrice;
//	 	int bookId;
//	public: 
// 	Notebook() {
// 		cout << "Enter Book Name: ";
// 		cin >> bookName;
// 		cout << "Enter Book Price: ";
// 		cin >> bookPrice;
// 		cout << "Enter Book Id: ";
// 		cin >> bookId;
//	}
//	int display() {
//		cout << "Book Name is " << bookName << endl;
//		cout << "Book Price is " << bookPrice << endl;
//		cout << "Book Id is " << bookId << endl;
//		return 0;
//	}
//	float getPrice() {
//        return bookPrice;
//    }
// };
// int main() {
// 	Notebook n1, n2;
// 	int sum = n1.getPrice() + n2.getPrice();
//	
//	if( sum % 2 == 0 ) {
//		cout << "Sum is even, details of first book are: " << endl;
//		n1.display();
//	} else {
//		cout << "Sum is odd, details of second book are: " << endl;
//		n2.display();
//	}
//	return 0;
// }

// QUESTION 5
// DECLARE A CLASS Array THAT CONTAINS ARRAY OF 5 NUMBERS AND FOLLOWING MEMBER FUMCTIONS: 
// input() to take 5 input from user, function display() to display them, max() to show max number in array
// and min() to show minimum number in array.

// SOLUTION 5 -- 1st Method
// class array {
//	public:
//	int numbers[5];
//	void input() {
//		cout << "Enter 5 numbers" <<endl;
//		for( int i=0; i<5; i++ ) {
//			cin >> numbers[i];	
//		}
//	}
//	void display() {
//		cout << "Numbers are: " <<endl;
//		for( int i=0; i<5; i++ ) {
//			cout << numbers[i] << endl;
//		}
//	}
//	void min() {
//		int minimum = numbers[0]; 
//		for( int i=0; i<5; i++ ) {
//			if ( minimum > numbers[i] ) {
//				minimum = numbers[i];
//			}
//		}
//		cout << "Minimum Number in Array: " << minimum <<endl;
//	}
//	void max() {
//		int maximum = numbers[0]; 
//		for( int i=0; i<5; i++ ) {
//			if ( maximum < numbers[i] ) {
//				maximum = numbers[i];
//			}
//		}
//		cout << "Maximum Number in Array: " << maximum;
//	}
// };
// int main() {
//	array a;
//	a.input();
//	a.display();
//	a.min();
//	a.max();
// }

// SOLUTION 5 -- 2nd Method
// class Array {
// 	private:
// 		int marks[5];
// 	public:
//	 void input();
// 	 void display();
// 	 void min();
// 	 void max();
// };
// void Array :: input() {
// 	cout << "Enter Five Integers: " << endl;
// 	for( int i=0; i<5; i++ ) {
// 		cin >> marks[i];
//	}
// }
// void Array :: display() {
// 	cout << "Five Numbers are: " << endl;
// 	for( int i=0; i<5; i++ ) {
// 		cout << marks[i] << endl;
//	}
// }
// void Array :: min() {
// 	int min = marks[0];
// 	for( int i=0; i<5; i++ ) {
// 		if( min > marks[i] ) {
// 			min = marks[i];
//		}
//	}
//	cout << "The Minimum Number from Array is " << min << endl;
// }
// void Array :: max() {
// 	int max = marks[0];
// 	for( int i=0; i<5; i++ ) {
// 		if( max < marks[i] ) {
// 			max = marks[i];
//		}
//	}
//	cout << "The Maximum Number from Array is " << max;
// }
// int main() {
// 	Array a;
// 	a.input();
// 	a.display();
// 	a.min();
// 	a.max();
//	return 0;
// }

// QUESTION 6
// DEMONSTRATES TWO CLASSES, Employee AND Programmer, WHERE Programmer INHERITS FROM Employee.
// AND HAS A proteced INTEGER Salary. INCLUDES A Public METHOD void setSalary() TO SET THE SALARY
// AND int getSalary() TO RETRIEVE THE SALARY AND PRINT THEM IN main().

// SOLUTION 6
// class Employee {
//	protected:
//		int salary;
//	public:
// 	void setSalary( int s ) {
// 		salary = s;
//	}
//	int getSalary() {
//		return salary;
//	}
// };
// class Programmer : public Employee {
// };
// int main() {
// 	Programmer obj;
// 	obj.setSalary(50000);
// 	cout << "The salary of employee is " << obj.getSalary();
// 	return 0;
// }

// QUESTION 7
// Create a base class Person with derived class Student. The Person class should have name 
// and age as data members.The Student class should inherit from Person and have an additional 
// data member roll_number and a function display() to show all details.

// SOLUTION 7 -- 1st Method
// class Person {
//	public:
//		string name;
//		int age;
// };
// class Student : public Person {
//	public:
//		int roll_no;
//		void display(string name, int age, int roll_no) {
//			cout << "Name is: " << name <<endl;
//			cout << "Age is: " << age <<endl;
//			cout << "Roll Number is: " << roll_no;
//		}
// };
// int main() {
//	Student s;
//	s.display("Aoun", 20, 9861);
// }

// SOLUTION 7 -- 2nd Method
// class Person {
// 	private: 
//    	string name;
//    	int age;
// 	public:
//    Person( string n, int a ) {
//    	name = n;
//    	age = a;
//    }
//    void display1() {
//    	cout << "The name of student is " << name << endl;
//        cout << "The age of student is " << age << endl;
//	}
// };
// class Student : public Person {
// private:
//    int roll_number;
// public:
//    Student(string n, int a, int roll) : Person(n, a), roll_number(roll) { 
//	}
//    void display2() {
//        display1();
//        cout << "The roll number of student is " << roll_number << endl;
//    }   
// };
// int main() {
//   Student s1("Aoun", 20, 15);
//   s1.display2();
// }


=======
#include <iostream>
using namespace std;

// BASIC TEMPLATE OF CLASS
// class names{
//     public:
//     int a,b,c;
//     void fnc() {
//         cout << "a is: " << a << endl;
//         cout << "b is: " << b << endl;
//         cout << "c is: " << c << endl;
//    	}
// 	names(int one, int two, int three) {
//     	a = one;
//     	b = two;
//     	c = three;
//     }
// };
// int main() {
//     names a1( 100, 200, 300 );
//     a1.fnc();
//     names a2( 111, 222, 333 );
//     a2.fnc();
//     return 0;
// }

// QUESTION 1
// WRITE A CLASS THAT CONTAINS TWO INTEGERS DATA MEMBERS WHICH ARE INITIALIZED BY 50 AND 100 IN CONSTRUCTOR.
// IT HAS MEMBER FUNCTION product() THAT DISPLAYS THE PRODUCT OF DATA MEMBERS.

// SOLUTION 1
// class Data {
// private:
//    int n1;
//    int n2;
// public:
//    Data() {
//        n1 = 50;
//        n2 = 100;
//    }
//    void product() {
//        int result = n1 * n2;
//        cout << "The Product is: " << result;
//    }
// };
// int main() {
//    Data output;
//    output.product();
//    return 0;
// }

// QUESTION 2
// DECLARE A CLASS NAME Marks WITH 3 DATA MEMBERS TO STORE MARKS OF THREE SUBJECTS, MAKE FUNCTIONS input() to input
// details, sum() to display sum of all marks, avg() to calculate and return avg of all subjects.

// SOLUTION 2
// class Marks {
// private:
//    int marks1;
//    int marks2;
//    int marks3;
// public:
//    int input() {
//        cout << "Enter marks in three subjects: \n"; 
//        cin >> marks1 >> marks2 >> marks3;
//        return 0;
//    }
//    int sum() {
//        return marks1 + marks2 + marks3;
//    }
//    int avg() {
//        return (marks1 + marks2 + marks3)/3;
//    }
// };
// int main() {
//    Marks show;
//    show.input();
//    int total = show.sum();
//    int average = show.avg();
//    cout << "Total marks: " << total << endl;
//    cout << "Average marks: " << average << endl;
//    return 0;
// }

// QUESTION 3
// DECLARE CLASS NAME Player WHICH HAS ATTRIBUTES pName, pAvg, pTeam.MAKE TWO FUNCTIONS input() for details AND
// output() to show details.KEEP RUNNING PROGRAM UNTIL USER PRESSING Y/y.

// SOLUTION 3
// class Player {
// 	string pName;
// 	int pAvg;
// 	string pTeam;
// 	public:
// 		int input() {
// 			cout << "Enter player's name : "; 
// 			cin >> pName;
// 			cout << "Enter player's average : "; 
// 			cin >> pAvg;
// 			cout << "Enter player's team : "; 
// 			cin >> pTeam;
//		}
//		int output() {
//			cout << "\nEntered Details are :- \n";
//			cout << "Player's name : " << pName <<endl; 
// 			cout << "Player's average : " << pAvg << endl; 
// 			cout << "Player's team : " << pTeam << endl;
//		}
// };
// int main() {
// 		Player p1;
//	 	p1.input();
//	 	p1.output();
// 	
// 	while(true) {
// 		char doAgain;
// 		cout << "\nDo you want to enter details again? :";
// 		cin >> doAgain;
// 		
// 		if( doAgain == 'Y' || doAgain == 'y' ) {
// 			p1.input();
// 			p1.output();
//		} else {
//			break;
//		}
// 	}
// }

// QUESTION 4
// DECLARE A CLASS NAME Notebook WITH 3 DATA MEMEBERS bookId, bookName AND bookPrice. INPUT VALUES TO 
// THE DATA MEMBERS IN THE CONSTRUCTOR, WRITE A Display() FUNCTION THAT DISPLAYS THE DETAILS OF THE BOOK.
// CREATE 2 OBJECTS OF Notebook CLASS.ADD THE PRICE OF BOTH BOOKS, IF SUM IS EVEN DISPLAY DETAILS OF FIRST 
// BOOK, OTHERWISE DISPLAY DETAILS OF SECOND BOOK.

// SOLUTION 4
// class Notebook { 
// 	private: 
//	 	string bookName;
//	 	float bookPrice;
//	 	int bookId;
//	public: 
// 	Notebook() {
// 		cout << "Enter Book Name: ";
// 		cin >> bookName;
// 		cout << "Enter Book Price: ";
// 		cin >> bookPrice;
// 		cout << "Enter Book Id: ";
// 		cin >> bookId;
//	}
//	int display() {
//		cout << "Book Name is " << bookName << endl;
//		cout << "Book Price is " << bookPrice << endl;
//		cout << "Book Id is " << bookId << endl;
//		return 0;
//	}
//	float getPrice() {
//        return bookPrice;
//    }
// };
// int main() {
// 	Notebook n1, n2;
// 	int sum = n1.getPrice() + n2.getPrice();
//	
//	if( sum % 2 == 0 ) {
//		cout << "Sum is even, details of first book are: " << endl;
//		n1.display();
//	} else {
//		cout << "Sum is odd, details of second book are: " << endl;
//		n2.display();
//	}
//	return 0;
// }

// QUESTION 5
// DECLARE A CLASS Array THAT CONTAINS ARRAY OF 5 NUMBERS AND FOLLOWING MEMBER FUMCTIONS: 
// input() to take 5 input from user, display() to display them, max() to show max number in array
// and min() to show minimum number in array.

// SOLUTION 5
// class Array {
// 	private:
// 		int marks[5];
// 	public:
//	 void input();
// 	 void display();
// 	 void min();
// 	 void max();
// };
// void Array :: input() {
// 	cout << "Enter Five Integers: " << endl;
// 	for( int i=0; i<5; i++ ) {
// 		cin >> marks[i];
//	}
// }
// void Array :: display() {
// 	cout << "Five Numbers are: " << endl;
// 	for( int i=0; i<5; i++ ) {
// 		cout << marks[i] << endl;
//	}
// }
// void Array :: min() {
// 	int min = marks[0];
// 	for( int i=0; i<5; i++ ) {
// 		if( min > marks[i] ) {
// 			min = marks[i];
//		}
//	}
//	cout << "The Minimum Number from Array is " << min << endl;
// }
// void Array :: max() {
// 	int max = marks[0];
// 	for( int i=0; i<5; i++ ) {
// 		if( max < marks[i] ) {
// 			max = marks[i];
//		}
//	}
//	cout << "The Maximum Number from Array is " << max;
// }
// int main() {
// 	Array a;
// 	a.input();
// 	a.display();
// 	a.min();
// 	a.max();
//	return 0;
// }

// QUESTION 6
// DEMONSTRATES TWO CLASSES, Employee AND Programmer, WHERE Programmer INHERITS FROM Employee.
// AND HAS A proteced INTEGER Salary. INCLUDES A Public METHOD void setSalary() TO SET THE SALARY
// AND int getSalary() TO RETRIEVE THE SALARY AND PRINT THEM IN main().

// SOLUTION 6
// class Employee{
//	protected:
//		int salary;
//	public:
// 	void setSalary( int s ) {
// 		salary = s;
//	}
//	int getSalary() {
//		return salary;
//	}
// };
// class Programmer : public Employee {
// };
// int main() {
// 	Programmer obj;
// 	obj.setSalary(50000);
// 	cout << "The salary of employee is " << obj.getSalary();
// 	return 0;
// }

// QUESTION 7
// Create a base class Person with derived class Student. The Person class should have name 
// and age as data members.The Student class should inherit from Person and have an additional 
// data member roll_number and a function display() to show all details.

// SOLUTION 7
// class Person{
// 	private: 
//    	string name;
//    	int age;
// 	public:
//    Person( string n, int a ) {
//    	name = n;
//    	age = a;
//    }
//    void display1() {
//    	cout << "The name of student is " << name << endl;
//        cout << "The age of student is " << age << endl;
//	}
// };
// class Student : public Person {
// private:
//    int roll_number;
// public:
//    Student(string n, int a, int roll) : Person(n, a), roll_number(roll) { 
//	}
//    void display2() {
//        display1();
//        cout << "The roll number of student is " << roll_number << endl;
//    }   
// };
// int main() {
//   Student s1("Aoun", 20, 18);
//   s1.display2();
// }
>>>>>>> 549d644a30f8b7306bad9a097593890e01cba976
