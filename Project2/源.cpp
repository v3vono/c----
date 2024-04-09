//#include<iostream>
//using namespace std;
//struct fish
//{
//	string fishs;
//	int weight;
//	float lenth;
//};
//int main()
//{
//	fish* p = new fish;
//	cout << "这条鱼是什么品种";
//	cin >> (*p).fishs;
//	cout << "这条鱼多重";
//	cin >> (*p).weight;
//	cout << "这条鱼多长";
//	cin >> p->lenth;
//	cout << "这条鱼是" << p->fishs << "," << p->weight << "重" << p->lenth << "长的鱼" << endl;
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	string str1;
//	cout << "enter a word"<<endl;
//	cin >> str1;
//	cout << "reverse the word" << endl;
//	for (int i = 0, j= str1.size()-1;i<j;i++)
//	{
//		int temp = str1[i];
//		str1[i] = str1[j];
//		str1[j] = temp;
//		j--;
//	}
//	cout << str1;
//	return 0;
//}
//
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int a, b, i, sum=0;
//	cout << "请输入较小的数"<< endl;
//	cin >> a;
//	cout << "请输入较大的数" << endl;
//	cin >> b;
//	if (b < a)
//	{
//		cout << "数据错误" << endl;
//	}
//	for (i = a; i <= b; i++)
//	{
//		sum += i;
//	}
//	cout << sum;
//}
//#include<iostream>
//#include<array>
//int main()
//{
//	using namespace std;
//	array<long double, 10>arr{ 2,4,6,8,10 };
//	int i, sum = 0;
//	for (i = 0; i < arr.size(); i++)
//	{
//		sum += i;
//	}
//	cout << sum;
//}
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int num[10], i, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> num[i];
//		if (num[i] == 0)
//		{
//			break;
//		}
//		sum += num[i];
//		cout << "目前为止输入了" << i + 1 << "个数字" << endl;
//		cout << "这些数的和为" << sum<<endl;
//	}
//}
//#include <iostream>  
//#include <cmath>  
//
//using namespace std;
//
//double calculateValue(double principal, double rate, int years) {
//    double value = principal;
//    for (int i = 0; i < years; i++) {
//        value = value * (1 + rate) + principal * rate;
//    }
//    return value;
//}
//
//int main() {
//    double daphnePrincipal = 100.0;
//    double daphneRate = 0.10;
//    double cleoPrincipal = 100.0;
//    double cleoRate = 0.05;
//    int years = 1;
//    double daphneValue = calculateValue(daphnePrincipal, daphneRate, years);
//    double cleoValue = calculateValue(cleoPrincipal, cleoRate, years);
//    while (cleoValue < daphneValue) {
//        years++;
//        daphneValue = calculateValue(daphnePrincipal, daphneRate, years);
//        cleoValue = calculateValue(cleoPrincipal, cleoRate, years);
//    }
//    cout << "在" << years << "年后，Cleo的投资价值超过了Daphne的投资价值。" << endl;
//    cout << "此时，Daphne的投资价值为：" << daphneValue << "元。" << endl;
//    cout << "Cleo的投资价值为：" << cleoValue << "元。" << endl;
//    return 0;
//}
//#include<iostream>
//int main()
//{
//	using namespace std;
//	char firstname[20], lastname[20], grade; int age;
//	cout << "what is your first name";
//	cin.get(firstname,20 );
//	cin.get();
//	cout << "what is your last name";
//	cin.get(lastname, 20);
//	cin.get();
//	cout << "what letter grade do you deserve";
//	cin >> grade;
//	grade = grade + 1;
//	cout << "what is your age";
//	cin >> age;
//	cout << "name:" << firstname << " " << lastname;
//	cout << "grade:" <<grade;
//	cout << "age:" << age;
//}
//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	double daphne = 100, cleo = 100, year;
//	for ( year=1; cleo <= daphne; year++)
//	{
//		daphne = daphne + 10;
//		cleo = cleo * 1.05;
//
//	}
//	cout << year;
//}
//#include<iostream>
//int main()
//{
//	using namespace std;
//	double daphne = 100.0;
//	double cleo = 100.0;
//	int year;
//	for (year = 1; cleo <= daphne; year++)
//	{
//		daphne += 10.0;
//		cleo *= 1.05;
//	}
//	cout << year - 1 << " years later,Cleo's investment is worth more than Daphne's." << endl;
//	cout << "Daphne has $" << daphne << endl;
//	cout << "Cleo has $" << cleo << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>												//头文件函数
//#include"标头.h"
//int main()
//{
//	using namespace std;
//	int a = 100, b = 200;
//	add(a, b);
//	cout << add(a, b);
//}
//#include<iostream>																		//冒泡排序函数
//void bubblesort(int* arr, int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j=0; j <len- i - 1; j++)
//			if (arr[j] > arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//	}
//		for (int i = 0; i < 10; i++)
//		{
//			std::cout << arr[i];
//		}
//}
//
//	int main()
//{
//	using namespace std;
//	int arr[10], len;
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//
//	}
//	len = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, len);
//}
//#include<iostream>
//int main()
//{
//	using namespace std;
//	struct student
//	{
//		string name;
//		int age;
//		int score;
//	};
//	string Name;
//	cin >> Name;
//	int Age;
//	cin >> Age;
//	int Score;
//	cin >> Score;
//	student s1;
//	s1.name = Name;
//	s1.age = Age;
//	s1.score = Score;
//	cout << "该学生的名字：" << s1.name;
//	cout << "该学生的年龄：" << s1.age;
//	cout << "该学生的分数：" << s1.score;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//struct student
//		{
//			string name;
//			int age;
//			int score;
//		};
//int main()
//{
//	student s1=
//	{"张三", 18, 100};
//	student* p = &s1;
//	cout << p->name;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//};
//void pr(struct student *p)
//{
//	cout <<p->name;
//	cout << p->age;
//}
//
//int main()
//{
//	student s1 = { "luo",18 };
//	pr(&s1);
//}
//#include<iostream>
//#include<string>
//#include<ctime>
//using namespace std;
//struct student
//{
//	string sname;
//	int score;
//};
//struct teacher
//{
//	string tname;
//	struct student s[5];
//};
//void allocatespace(teacher t[3], int len)
//{
//	
//	string nameseed = "ABCDE";
//	for (int i=0; i <len; i++)
//	{
//		t[i].tname = "teacher_";
//		t[i].tname += nameseed[i];
//		for (int j=0; j < 5; j++)
//		{
//			t[i].s[j].sname = "student_";
//			t[i].s[j].sname += nameseed[j];
//			int random = rand() % 61+40;
//			t[i].s[j].score = random;
//		}
//	}
//}
//
//void printfun(struct teacher t[3],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师为" << t[i].tname;
//		for (int j=0; j < 5; j++)
//		{
//			cout << "学生姓名：" << t[i].s[j].sname << "分数为" << t[i].s[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct teacher t[3];
//	int len = sizeof(t) / sizeof(t[0]);
//	allocatespace(t, len);
//	printfun(t,len);
//}
//#include<iostream>
//#include<string>
//using namespace std;
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//void bubble_sort( struct hero heroarray[],int len)
//{
//	for (int i = 0; i < len - 1; i++)
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (heroarray[j].age > heroarray[j + 1].age)
//			{
//				struct hero temp = heroarray[j];
//				heroarray[j] = heroarray[j + 1];
//				heroarray[j + 1] = temp;
//			}
//		}
//}
//
//int main() {
//	hero heroarray[5] = {
//
//		{"刘备", 23, "男"},
//		{"关羽", 19, "男"},
//		{"张飞", 18, "男"},
//		{"赵云", 21, "男"},
//		{"貂蝉", 20, "女"},
//	};
//	int len = sizeof(heroarray) / sizeof(heroarray[0]);
//	bubble_sort(heroarray, len);
//	
//	for (int i = 0; i < len; i++)
//		cout << heroarray[i].name << "\t" << heroarray[i].age << "\t" << heroarray[i].sex << endl;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int* p = new int(10);
//	cout << *p;
//	delete p;
//}
//#include<iostream>           //局部变量的在使用后会被释放，引用的局部变量
//using namespace std;
//int& asd(int& val1, int& val2)
//{
//	val1 = 2;
//	 val2 = 2;
//	 static int c = val1 + val2;
//	return c;
//}
//int main()
//{
//	int a=12, b = 2;
//	cout << asd(a, b);
//	cout << a;
//}  
//#include<iostream>
//
//using namespace std;
////int adds(int a = 10, int b = 10)          //要么咋声明加入默认形参参数，要么在定义时加入默认参数，不能同时存在
//
//int adds(int a = 10, int b = 10)
//{
//	return a + b;
//
//}
//int main()
//{
//	int a = 1, b = 2;
//	    
//
//}
//#include<iostream>
//#include<cmath>
//const double pi = 3.14;
//using namespace std;
//class circle
//{
//public:
//	int r;
//	double caclulate()
//	{
//		return pi * pow(r, 2);
//	}
//};
//int main()
//{
//	circle c1;
//	c1.r = 2;
//	cout << c1.caclulate();
//	return;
//}
//#include<iostream>
//using namespace std;
//class student
//{
//public:
//	string name;
//	int stdnum[10];
//	void input()
//	{
//		for (int i = 0; i < 10; i++)
//		{                                                                  
//			cout << "请输入学生姓名";
//			cin >> name;
//			cout << "请输入学生学号";
//			cin >> stdnum[i];
//		}
//	}
//};
//int main()
//{
//	student stu;
//	stu.input();
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "学生姓名:" << stu.name[i];
//		cout << "学生学号:" << stu.stdnum[i];
//	}
//}
//#include<iostream>
//using namespace std;
//class cube
//{
//public:
//	void set_len(int len)
//	{
//		l = len;
//	}
//	int get_len()
//	{
//		return l;
//	}
//	void set_w(int wide)
//	{
//		w = wide;
//	}
//	int get_w()
//	{
//		return w;
//	}
//	void set_h(int high)
//	{
//		h = high;
//	}
//	int get_h()
//	{
//		return h;
//	}
//	int caculates()
//	{
//		return 2 * l * h + 2 * w * l + 2 * w * h;
//	}
//	int caculatev()
//	{
//		return l * h * w;
//	}
//private:
//	int l;
//	int w;
//	int h;
//	
//};
//int main()
//{
//	cube c1;
//	c1.set_len(12);
//	c1.set_w(17);
//	c1.set_h(14);
//	cout << c1.caculates() << endl;
//	cout << c1.caculatev();
//	cube c2;
//	c2.set_len(11);
//	c1.set_w(14);
//	c1.set_h(5);
//	cout << c2.caculates() << endl;
//	cout << c2.caculatev();
//	
//}
// 
//#include<iostream>                   //构造函数和析构函数，析构函数在内存释放之前自动调用一次
//using namespace std;
//class circle
//{
//public:
//	circle()
//	{
//		cout << "构造的函数调用" << endl;
//	}
//	~circle()
//	{
//		cout << "析构函数的调用";
//	}
//};
//int main()
//{
//	circle c1;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//class point
//{
//public:
//	void setx(int a)
//	{
//		x = a;
//	}
//	int getx()
//	{
//		return x;
//	}
//	void sety(int b)
//	{
//		y = b;
//	}
//	int gety()
//	{
//		return y;
//	}
//private:
//	int x;
//	int y;
//};
//class circle
//{
//public:
//	void setcenter(point o)
//	{
//		center = o;
//	}
//	point getcenter()
//	{
//		return center;
//	}
//	void setr(int ri)
//	{
//		r = ri;
//	}
//	int getr()
//	{
//		return r;
//	}
//private:
//	point center;
//	int r;
//};
//void compare(circle& c1, point& x1)
//{
//	pow(c1.getcenter().getx() - x1.getx(), 2) + pow(c1.getcenter().gety() - x1.gety(), 2);
//	c1.setr(10);
//	if (c1.getr() > pow(c1.getcenter().getx() - x1.getx(), 2) + pow(c1.getcenter().gety() - x1.gety(), 2))
//	{
//		cout << "点在圆内" << endl;
//	}
//	else if(c1.getr() == pow(c1.getcenter().getx() - x1.getx(), 2) + pow(c1.getcenter().gety() - x1.gety(), 2))
//	{
//		cout << "点在圆上" << endl;
//	}
//	else
//	{
//		cout << "点在圆外" << endl;
//	}
//}
//int main()
//{
//	circle c;
//	point p;
//	point center;
//	center.setx(0);
//	center.sety(0);
//	c.setcenter(center);
//	p.setx(5);
//	p.sety(5);
//	c.setr(5);
//	compare(c, p);
//}
//#include<iostream>
//using namespace std;
//class func
//{
//public:
//	func()
//	{
//		cout << "无参结构" << endl;
//	}
//	func(int x)
//	{
//		cout << "有参结构" << endl;
//	}
//	func(const func& p)
//	{
//		cout << "拷贝结构" << endl;
//	}
//	~func()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//func dowork()
//{
//	func f;										//调用一次无参函数
//	return f;
//}
//void main()
//{
//	/*func p1;;
//	func p2(10);
//	func p3(p2);*/
//	func f2=dowork();							//调用拷贝函数
//}
//#include<iostream>								//深拷贝
//using namespace std;
//class func
//{
//public:
//	func(int a,int w)
//	{
//		age = a;
//		weight = new int(w);
//	}
//	func(const func& other)
//	{
//		age = other.age;						//自己写一个拷贝函数，用new分配内存，防止悬挂指针的释放
//		weight = new int( * (other.weight));
//	}
//	~func() {
//		if(weight!=	NULL)
//		delete weight;
//	}
//	int age;
//	int *weight;
//};
//int main()
//{
//	
//	func p1(18,160);
//	func p2(p1);
//	cout << p2.age << "\t" << *p2.weight;
//}
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person(int a, int b, int c) :m_a(a), m_b(b)m_c(c;)
//	{
//
//	}
//	int m_a;
//	int m_b;
//	int m_c;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//
//class phone
//{
//public:
//    phone(string pname)
//    {
//        p_name = pname;
//    }
//    string p_name;
//};
//
//class person
//{
//public:
//    person(string m_name, string p_name):name(m_name),p_phone(p_name)          //成员初始化列表，不能定义有参函数，编译器默认phone p_phone 是默认构造函数
//    {}
//    string name;
//    phone p_phone;
//};
//
//void test()
//{
//    person p("张三", "华为");
//    cout << p.name << "拿着" << p.p_phone.p_name;
//}

//int main()
//{
//    test();
//}
//#include<iostream>
//using namespace std;
//class func
//{
//private:
//	static int b;
//public:
//	static int a;
//};
//int func::a = 100;					//静态变量需要在类外赋值
//int func::b = 200;
//void test()
//{
//	func f;
//	cout << f.a << endl;
//	func::a = 200;
//	cout << func::a;
//}
//int main()
//{
//	test();
//}
//#include<iostream>
//using namespace std;
//class func
//{
//public:
//	static void fun()
//	{
//		a = 200;                //静态函数可以访问静态变量
//		cout << a;
//	}
//	static int a;
//};
//int func::a = 100;
//int main()
//{
//	func p;
//	p.fun();
//}
//#include<iostream>
//using namespace std;
//class func
//{
//	double a;				//根据数据类型，类的内存空间随之改变(数据类型要在类的对象向上)非静态成员变量在对象上，其余都不在对象上
//};
//void test1()
//{
//	func p;
//	cout << sizeof(p);
//}
//int main()
//{
//	test1();
//}
//#include<iostream>
//using namespace std;
//class func
//{
//public:
//	void fun(int a)
//	{
//		this->a = a;			//this 指向调用该成员函数时的那个对象
//	}
//	
//	func& addfunc(func &p)
//	{
//		a += p.a;
//		return *this;
//	}
//	int a;
//};
//
//void call()
//{
//	func p1;
//	p1.fun(100);
//	func p2;
//	p2.fun(200);
//	p2.addfunc(p1).addfunc(p1).addfunc(p1).addfunc(p1);
//	cout << p2.a;
//}
//
//int main()
//{
//	
//	call();
//}

//#include<iostream>
//using namespace std;
//class func
//{
//public:
//	void a1()
//	{
//		cout << "函数调用";
//	}
//	void show()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << a;
//	
//	}
//	int a = 10;
//};
//int main()
//{
//	func* p = NULL;						//有成员变量的类在指针输出时不能为空指针
//	p->a1();
//	//p->show();
//}
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	void showperson()const
//	{
//			//a = 200;		//在函数体后加const说明不能改变this指针的值和指向的地址,除非加入mutable
//		b = 400;			//加入了mutable b的值可以改变
//	}
//	void func()
//	{
//
//	}
//	int a;
//	mutable int b;
//};
//void test1()
//{
//	const person p;
//	//p.a = 10;				//const修饰类，不可改变其属性
//	p.b = 20;
//}
//void test2()
//{
//	const person t;
//	t.showperson();
//	//t.func()				//常对象只能调用常函数
//}
//#include<iostream>
//using namespace std;
//class person
//{
//	friend void test(person* p);			//友元全局函数，可以访问类内的私有成员
//public:
//	person()
//	{
//		a = "客厅";
//		b = "卧室";
//	}
//	string a;
//private:
//	string b;
//};
//void test(person *p)
//{
//	cout<<p->b;
//}
//int main()
//{
//	person p;
//	test(&p);
//}
//#include<iostream>
//using namespace std;
//class building
//{
//	friend class person;			//友元类 ，可以访问building的私有成员
//public:
//	void func()
//	{
//	
//	}
//private:
//	string bedroom = "卧式";
//};
//class person
//{
//	
//public:
//	void visit(building* b)
//	{
//		cout << "正在访问你的" << b->bedroom;
//	}
//};
//
//void test()
//{
//	building b;
//	person p;
//	p.visit(&b);
//}
//void main()
//{
//	test();
//｝
//#include<iostream>
//using namespace std;
//
//class person1
//{
//public:
//	int a;
//	int b;
//};
//person1 operator+(person1 &p1, person1 &p2)			//opretor+加号运算符重载
//	{
//		person1 temp;
//		temp.a = p1.a + p2.a;
//		temp.b = p1.b + p2.b;
//		return temp;
//	}
//
//void test1()
//{
//	person1 p1;
//	p1.a = 1;
//	p1.b = 2;
//	person1 p2;
//	p2.a = 10;
//	p2.b = 5;
//	person1 p3;
//	p3 = p1 + p2;
//	cout << p3.a << endl;
//	cout << p3.b << endl;
//}
//int main()
//{
//	test1();
//}
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	int a;
//	int b;
//};
//person operator+(person& p1,int n)
//{
//	person temp;
//	temp.a= p1.a + n;
//	temp.b=p1.b + n;
//	return temp;
//}
//void test()
//{
//	int n = 100;
//	person p1;
//	p1.a = 10;
//	p1.b = 20;
//	person p3;
//	p3 = p1 + n;
//	cout << p3.a <<" "<< p3.b;
//}
//int main()
//{
//	test();
//}
//#include<iostream>			//运算符的重载
//using namespace std;
//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//	friend void test();
//private:
//	int a;
//	int b;
//};
//ostream& operator<<(ostream &cout,person p)
//{
//	cout << p.a << " " << p.b << endl;
//	return cout;
//}
//void test()
//{
//	person p;
//	p.a = 10;
//	p.b = 20;
//	cout << p << endl;
//}
//void main()
//{
//	test();
//}
//#include<iostream>
//using namespace std;
//
//class integer
//{
//	friend ostream& operator<<(ostream& cout, integer myint);
//public:
//	integer()
//	{
//		myint = 0;
//	}
//private:
//	int myint;
//}; 
//ostream &operator<<(ostream& cout, integer mint)
//{
//	cout << mint.myint;
//	return cout;
//}
//void test1()
//{
//	integer mint;
//	cout << mint;
//}
//int main()
//{
//	test1();
//}
//#include<iostream>
//using namespace std;
//class page
//{
//public:
//	page()
//	{
//		cout << "主页" << endl;
//	}
//};
//class ym :public page
//{
//public:
//	ym()
//	{
//		cout << "某课程" <<endl;
//	}
//};
//void main()
//{
//	page main;
//	ym branch;
//	
//}
//#include<iostream>
//using namespace std;
//class father
//{
//public:
//	int m_a= 100;
//
//};
//class son :public father
//{
//public:
//	int m_a=10;
//
//};
//void test()
//{
//	father fa;
//	son so;
//	cout << so.m_a;
//	cout << so.father::m_a;
//}
//int main()
//{
//	test();
//}
//#include<iostream>
//using namespace std;
//class func
//{
//public:
//	void subfunction()
//	{
//		cout << "父函数subfunction的函数调用";
//	}
//};
//class func2 :public func
//{
//public:
//
//	void subfunction()
//	{
//		cout << "子函数subfunction的函数调用";
//	}
//
//};
//void test()
//{
//	func people;
//	func2 person;
//	person.subfunction();
//	person.func::subfunction();
//}
//void main()
//{
//	test();
//}
//#include<iostream>
//using namespace std;
//class func
//{
//public:
//	static int a;
//};
//int func::a = 100;			//静态成员的定义要在类外进行
//class func2
//{
//public:
//	static int a;
//};
//int func2::a = 200;
//void test()
//{
//	func2 son;
//	cout << son.func2::a;
//}
//void main()
//{
//	test();
//}
//#include<iostream>				//菱形继承
//using namespace std;
//class animal
//{
//public:
//	animal()
//	{
//		cout << "动物";
//	}
//};
//class goat :public animal
//{
//public:
//	goat()
//	{
//		cout << name << " " << age << endl;
//	}
//	string name = "羊";
//	int age = 5;
//};
//class camel :public animal
//{
//public:
//	camel()
//	{
//		cout << name << " " << age << endl;
//	}
//	string name = "骆驼";
//	int age = 7;
//};
//class alpaca :public goat,public camel
//{
//public:
//	alpaca()
//	{
//		cout << name << " " << age << endl;
//	}
//	string name = "羊驼";
//	int age = 2;
//};
//void test()
//{
//	animal an;
//	goat sam;
//	camel jhon;
//	alpaca sj;
//}
//int main() {
//	test();
//}

//#include<iostream>					//多态必须要有继承关系，并且子类必须重写父类的虚函数 (vitrual)
//using namespace std;
//class animal
//{
//public:
//	virtual void speak()			//晚绑定地址，子类的地址被传入时，在编译阶段绑定被传入的子类的地址
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class cat :public animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//class dog :public animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//void dospeak(animal& animal)			//父类的指针或引用，执行子类对象
//{
//	animal.speak();
//}
//void test1()
//{
//	cat cat;
//	dog dog;
//	dospeak(cat);
//	dospeak(dog);
//
//}
//void main()
//{
//	test1();
//}
// 
// 
// 
//#include<iostream>								//多态好处1、组织结构清晰 2、可读性强3、代码扩展和维护性高
//using namespace std;
//class calculate
//{
//public:
//	virtual int calculator()
//	{
//		return 0;
//	}
//	int a;
//	int b;
//};
//class addfunction :public calculate
//{
//public:
//	 int calculator()
//	{
//		return a + b;
//	}
//};
//class multiplicationfunction :public calculate
//{
//public:
//	int calculator()
//	{
//		return a * b;
//	}
//};
//class subtractionfunction :public calculate
//{
//public:
//	int calculator()
//	{
//		return a - b;
//	}
//};
//class divisionfunction :public calculate
//{
//public:
//	int calculator()
//	{
//		return a / b;
//	}
//};
//void test1()
//
//{
//	calculate* abc = new addfunction;
//	abc->a = 10;
//	abc->b = 20;
//	cout << abc->calculator() << endl;
//	delete abc;
//	abc = new multiplicationfunction;
//	abc->a = 10;
//	abc->b = 20;
//	cout << abc->calculator() << endl;
//	delete abc;
//	abc = new subtractionfunction;
//	abc->a = 10;
//	abc->b = 20;
//	cout << abc->calculator() << endl;
//	delete abc;
//	abc = new divisionfunction;
//	abc->a = 10;
//	abc->b = 20;
//	cout << abc->calculator() << endl;				//小数答案用double或float，这里不做修改
//	delete abc;
//	
//};
//int main()
//{
//	test1();
//}

//#include<iostream>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//void s(int val)
//{
//	cout << val << endl;
//}
//void m()
//{
//	vector<int> p;
//	p.push_back(10);
//	p.push_back(120);
//	p.push_back(130);
//	p.push_back(140);
//	vector<int>::iterator itbegin = p.begin();				//第一种遍历
//	vector<int>::iterator end = p.end();
//	while (itbegin != end)
//	{
//		cout << *itbegin << endl;
//		itbegin++;
//	}
//	for (vector<int>::iterator it = p.begin(); it != p.end(); it++)			//第二种遍历
//	{
//		cout << *it << endl;
//	}
//	for_each(p.begin(), p.end(), s);				//第三种遍历（for_each）需要algorithm头文件
//}
//void main()
//{
//	m();
//}
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//class person
//{
//public:
//	person(string name,int age)
//	{
//		this->sage = age;
//		this->sname = name;
//	};
//	string sname;
//	int sage;
//
//};
//auto fun = [](const person& p)					  //lambda表达式
//{
//	cout << p.sname << "\t" << p.sage << endl;
//};
//void test1()
//{
//	vector<person> p;
//	person p1 ("aaa", 10);
//	person p2 ("bbb", 20);
//	person p3 ("ccc", 30);
//	p.push_back(p1); 
//	p.push_back(p2);
//	p.push_back(p3);
//	for ( vector<person>::iterator it = p.begin();it != p.end();it++)
//	{
//		cout << (*it).sname << "\t" << (*it).sage << endl;
//	}
//	
//	for_each(p.begin(), p.end(), fun);			//使用了lambda表达式
//}
//void main()
//{
//	test1();
//}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void m()
//{
//	vector<vector<int>> p;
//	vector<int> p1;
//	vector<int> p2;
//	vector<int> p3;
//	vector<int> p4;
//	for ( int i = 0;  i < 4;  i++)
//	{
//		p1.push_back(i + 1);
//		p2.push_back(i + 2);
//		p3.push_back(i + 3);
//		p4.push_back(i + 4);
//	}
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	for (vector<vector<int>>::iterator it = p.begin(); it < p.end(); it++)
//	{
//		
//		for (vector<int>::iterator vit = (*it).begin(); vit < (*it).end(); vit++)					//二维数组，it是一个包含数组的数组，需要解引用把里面的数组解引用再次利用for循环得到内数组的数据
//		{
//			cout << *vit;
//		}
//		cout << endl;
//	}
//}
//void main()
//{
//	m();
//}
//#include<iostream>
//#include<string>
//using namespace std;
//void m()
//{
//	const char* c = "hello world";
//	string str(c);
//	string str2(str);
//	string str3;
//	str3.assign("hello c++");
//	cout << str << endl;
//	cout << str2 << endl;
//	cout << str3 << endl;
//	string s1 = "I";
//	string s2;
//	s2.assign("love");
//	string s3;
//	s3.assign("games");
//	string s4;
//	s4.assign("lol dnf");
//	s1.append(s2);
//	cout << s1 << endl;
//	s1 += s3;
//	cout << s1 << endl;
//	s1 += (s4);
//	cout << s1 << endl;
//	s1.append (s4, 0, 3);			//从第0个字符截取3位(str,n,m)n代表第n个字符，m代表截取m位
//	cout << s1 << endl;
//	int pos = s1.find("lol");
//	cout << pos << endl;
//	s1.replace(10, 3, "valorant");		//str&replace(n,m,str)从第n个字符串开始，将后面的m个字符替换为str
//	cout << s1 << endl;
//	int com = s1.compare(s4);			//-1为s1小于s2，0为相等，1为s1大于s2
//	cout << com;
//}
//void main()
//{
//	m();
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//void print(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it;
//	}
//	cout << endl;
//}
//void m()
//{
//	vector<int>v;
//
//	for (int i = 0;i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	print(v);
//	v.pop_back();
//	print(v);
//	cout << v.capacity();
//	v.insert(v.begin(), 6);
//	print(v);
//}
//void main()
//{
//	m();
//}
//#include<iostream>
//#include<list>
//#include<string>
//using namespace std;
//class person
//{
//public:
//	person(const string & sname, int sage, int sheight)
//	{
//		this->name = sname;
//		this->age = sage;
//		this->height = sheight;
//	}
//	string name;
//	int age;
//	int height;
//};
//void printfun(list<person> &m)
//{
//	for (list<person>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->name << " " << it->age << " " << it->height << endl;
//	}
//}
//bool compare(person &sp1,person &sp2)				//回调函数，用来告诉l.sort应该怎样排序（仿函数）
//{
//
//	if (sp1.age == sp2.age)
//	{
//		return sp1.height < sp2.height;
//	}
//	return sp1.age < sp2.age;
//
//	
//}
//void m()
//{
//	list<person> l;
//	person p1("张飞", 30, 181);
//	person p2("刘备", 40, 177);
//	person p3("关羽", 35, 190);
//	person p4("孙权", 40, 175);
//	person p5("曹操", 50, 185);
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	printfun(l);
//	l.sort(compare);					//list不可以用sort算法，双向链表不可以随机访问，但是list自带sort函数
//	printfun(l);
//}
//void main()
//{
//	m();
//}
//#include<iostream>
//#include<map>
//using namespace std;
//void m()
//{
//	map<int, int>m;
//	m.insert(make_pair(10, 100));
//}
#include<iostream>
using namespace std;
#define eletype int
struct sequentialist 
{
	eletype *element;
	int size;
	int capacity;
};
void initializelist(sequentialist* list, int capacity)
{
	list->element = new eletype[capacity];
	list->size = 0;
	list->capacity = capacity;
}
void destory(sequentialist* list) 
{
	delete list->element;
}
int size(sequentialist* list)
{
	return list->size;
}
bool isempty(sequentialist* list)
{
	return list->size == 0;
}
void insert(sequentialist* list, int index, eletype element)
{
	if (index<0 || index>list->size)
	{
		throw invalid_argument("invalid index");
	}
	if (list->size == list->capacity)
	{
		int newcapacity = list->capacity * 2;
		eletype* newelement = new eletype[newcapacity];
		for (int i = 0; i < list->size; i++)
		{
			newelement[i] = list->element[i];
		}
		delete list->element;
		list->element = newelement;
		list->capacity = newcapacity;
	}
	for (int i = list->size; i > index; i--)
	{
		list->element[i] = list->element[i - 1];
	}
	list->element[index] = element;
	list->size++;
}
void deletes(sequentialist* list,int index)
{
	if (index >= list->size)
	{
		throw invalid_argument("invalid");
	}
	for (int i = 0; i < list->size-1; i++)
	{
		if (index == i)
		{
			list->element[i] = list->element[i + 1];
			i++;
		}
	}
}
void find(sequentialist* list,int num)
{
	for (int i = 0; i < list->size; i++)
	{
		if (num == list->element[i])
		{
			cout << "找到元素";
		}
		throw invalid_argument("invalid");
	}
}

