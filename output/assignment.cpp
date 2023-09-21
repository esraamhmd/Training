// ass# 6
// q1
//#include <iostream>
//#include <string>
//using namespace std;
//class Circle {
//private:
//	double radius;
//	string color;
//public:
//	Circle() {
//		radius = 1.0;
//		color = "red";
//	}
//	Circle(double r) {
//		radius = r;
//	}
//	Circle(double r, string c) {
//		radius = r;
//		color = c;
//	}
//	void setRadius(double r) {
//		radius = r;
//	}
//	void setColor(string c) {
//		color = c;
//	}
//	double getRadius() {
//		return radius;
//	}
//	string getColor() {
//		return color;
//	}
//	double getArea() {
//		return (3.14 * radius * radius);
//	}
//};
//
//int main()
//{
//	Circle c;
//	c.setRadius(5);
//	c.setColor("yellow");
//	cout << "Radius : " << c.getRadius() << endl;
//	cout << "Color : " << c.getColor() << endl;
//	cout <<"Area: " << c.getArea() << endl;
//}
//==============================================================
//q2
//#include <iostream>
//#include <string>
//using namespace std;
//class Employee {
//private:
//	int id;
//	string firstName;
//	string lastName;
//	int salary;
//public:
//	Employee() {
//		id = 0;
//		salary = 0;
//	}
//	Employee(int i, string f, string l, int s) {
//		id = i;
//		salary = s;
//		firstName = f;
//		lastName = l;
//	}
//	void setId(int i) {
//		id = i;
//	}
//	void setFirstName(string f) {
//		firstName = f;
//	}
//	void setLastName(string l) {
//		lastName = l;
//	}
//	void setSalary(int s) {
//		salary = s;
//	}
//	int getId() {
//		return id;
//	}
//	string getFirstName() {
//		return firstName;
//	}
//	string getLastName() {
//		return lastName;
//	}
//	int getSalary() {
//		return salary;
//	}
//	string getName() {
//		string name = firstName + "  " + lastName;
//		return name;
//	}
//	int getAnnualSalary() {
//		return (salary * 12);
//	}
//	int raiseSalary(int percent) {
//		return (salary + (salary * percent * 0.01));
//	}
//};
//
//int main()
//{
//	Employee e;
//	e.setId(436);
//	e.setFirstName("aya");
//	e.setLastName("yasser");
//	e.setSalary(2000);
//	cout << "ID : " << e.getId() << endl;
//	cout << "Name : " << e.getName() << endl;
//	cout << "Salary : " << e.getSalary() << endl;
//	cout << "Annual Salary : " << e.getAnnualSalary() << endl;
//	cout << "Raise Salary : " << e.raiseSalary(50) << endl;
//}
//============================
//q3
//#include <iostream>
//#include <string>
//using namespace std;
//class Account
//{
//private:
//	string id;
//	string name;
//	int balance = 0;
//public:
//	Account( string i,string n) {
//		id = i;
//		name = n;
//	}
//	Account( string i, string n, int b) {
//		id = i;
//		name = n;
//		balance = b;
//	}
//	void setId(int i) {
//		id = i;
//	}
//	void setName(int n) {
//		name = n;
//	}
//	void setBalance(int b) {
//		balance = b;
//	}
//	string getId() {
//		return id;
//	}
//	string getName() {
//		return name;
//	}
//	int getBalance() {
//		return balance;
//	}
//	int credit(int amount) {
//		balance += amount;
//		return balance;
//	}
//	int debit(int amount) {
//		if (amount <= balance) {
//			balance -= amount;
//		}
//		else {
//			cout << "Amount exceeded balance";
//		}
//		return balance;
//	}
//	int transfereTo(Account& a, int amount) {
//		if (amount <= balance) {
//			a.credit(amount);
//			balance -= amount;
//		}
//		else {
//			cout << "Amount exceeded balance";
//		}
//		return balance;
//	}
//};
//int main() {
//	Account a1("alaa", "3682", 5000);
//	Account a2("hassen", "8910", 6000);
//	cout << "alaa name :" << a1.getName() << endl;
//	cout << "alaa id :" << a1.getId() << endl;
//	cout<< " alaa balance  : " << a1.getBalance() << endl;
//	int add;
//	cout << "Enter amount you will add to aya account : \n";
//	cin >> add;
//	cout << " now alaa balance is : " << a1.credit(add) << endl;
//	cout<< "==============================================================\n";
//	int w;
//	cout << "Enter amount you will withdraw from the account : \n";
//	cin >> w;
//	cout << "now alaa balance is : " << a1.debit(w) << endl;
//	cout << "=============================================================\n";
//	cout << "hassen name :" << a2.getName() << endl;
//	cout << "hassen id :" << a2.getId() << endl;
//	cout << " hassen balance  : " << a2.getBalance() << endl;
//	cout << "=============================================================\n";
//	int t;
//	cout << "Enter amount you will transfer to hassen account : \n";
//	cin >> t;
//	cout << "now alaa balance is : " << a1.transfereTo(a2, t) << endl;
//	cout << "nom hassen  Balance is  : " << a2.getBalance() << endl;
//}
//===========================================================
//q4
//#include <iostream>
//#include <string>
//using namespace std;
//class Time
//{
//private:
//	int hour;
//	int minute;
//	int sec;
//
//public:
//	Time() {
//		hour = 0;
//		minute = 0;
//		sec = 0;
//	}
//	Time(int h, int m, int s) {
//		hour = h;
//		minute = m;
//		sec = s;
//	}
//	void sethour(int h) {
//		hour = h;
//	}
//	void setmin(int m) {
//		minute = m;
//	}
//	void setsec(int s) {
//		sec = s;
//	}
//	void setTime(int h, int m, int s) {
//		hour = h;
//		minute = m;
//		sec = s;
//	}
//	int getHour() {
//		return hour;
//	}
//	int getMin() {
//		return minute;
//	}
//	int getSec() {
//		return sec;
//	}
//	Time nextSecond() {
//		Time t = Time(hour, minute, sec);
//		sec++;
//		if (sec >= 60) {
//			sec = 0;
//			minute++;
//		}
//		if (minute >= 60) {
//			minute = 0;
//			hour++;
//		}
//		if (hour >= 24) {
//			hour = 0;
//		}
//		return t;
//	}
//	Time prevSecond() {
//		Time t = Time(hour, minute, sec);
//		sec--;
//		if (sec <= 0) {
//			sec = 59;
//			minute--;
//		}
//		if (minute <= 0) {
//			minute = 59;
//			hour--;
//		}
//		if (hour <= 0) {
//			hour = 23;
//		}
//		return t;
//	}
//
//};
//int main() {
//	Time t1(1, 30, 0);
//	cout << t1.getHour() << " : " << t1.getMin() << " : " << t1.getSec() << endl;
//	cout << "******************************************************************\n";
//	cout << " next second\n";
//	t1.nextSecond();
//	cout << t1.getHour() << " : " << t1.getMin() << " : " << t1.getSec() << endl;
//	cout << "******************************************************************\n\n";
//	cout<< "enter new time\n";
//	Time t2;
//	t2.sethour(15);
//	t2.setmin(11); 
//	t2.setsec(52);
//	cout << t2.getHour() << " : " << t2.getMin() << " : " << t2.getSec() << endl;
//	cout << "******************************************************************\n";
//	cout << "prev second\n";
//	t2.prevSecond();
//	cout << t2.getHour() << " : " << t2.getMin() << " : " << t2.getSec() << endl;
//}