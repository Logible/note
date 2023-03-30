# C++

- [C++](#c)
  - [1. 面向对象程序设计的基本原则](#1-面向对象程序设计的基本原则)
  - [2.面向对象程序的设计和效率](#2面向对象程序的设计和效率)
  - [3.掌握类的定义、对象的定义、对象的初始化](#3掌握类的定义对象的定义对象的初始化)
    - [类的访问控制](#类的访问控制)
    - [string](#string)
    - [const string \&name](#const-string-name)
  - [4. 掌握成员函数的定义及使用](#4-掌握成员函数的定义及使用)
    - [作用域解析运算符`::`](#作用域解析运算符)
    - [C++new命令](#cnew命令)
    - [new Person和new Person()](#new-person和new-person)
  - [5. 掌握构造函数与析构函数的功能、使用方法与调用顺序](#5-掌握构造函数与析构函数的功能使用方法与调用顺序)
    - [默认构造函数](#默认构造函数)
  - [6. 了解静态成员的必要性](#6-了解静态成员的必要性)
  - [7. 了解静态成员、静态数据成员、成员函数的定义及使用](#7-了解静态成员静态数据成员成员函数的定义及使用)
  - [8. 了解需要友元的原因、友元函数的使用](#8-了解需要友元的原因友元函数的使用)
    - [成员初始化列表初始化](#成员初始化列表初始化)
  - [9. 掌握继承、多态与重载的概念](#9-掌握继承多态与重载的概念)
    - [三种继承方式](#三种继承方式)
  - [10. 掌握继承的工作方式、派生类的构造](#10-掌握继承的工作方式派生类的构造)
  - [11. 掌握虚函数的定义及使用](#11-掌握虚函数的定义及使用)
    - [const](#const)

根据对考点的需掌握程度, 帮我列出(等下条聊天再列)C++知识点并进行解释, 必要时附上示例代码(代码使用c++11.0前,要给出代码输出结果). 考点我会在下次聊天给出, 明白吗

1. 掌握面向对象程序设计的基本原则，
2. 了解面向对象程序的设计和效率，
3. 掌握类的定义、对象的定义、对象的初始化，
4. 掌握成员函数的定义及使用，
5. 掌握构造函数与析构函数的功能、使用方法与调用顺序，

6. 了解静态成员的必要性，
7. 了解静态成员、静态数据成员、成员函数的定义及使用，
8. 了解需要友元的原因、友元函数的使用，
9. 掌握继承、多态与重载的概念，
10. 掌握继承的工作方式、派生类的构造，
11. 掌握虚函数的定义及使用，

12. 掌握多继承的构造顺序、继承的访问控制，
13. 了解抽象类的定义与使用
14. 掌握运算符重载的使用

## 1. 面向对象程序设计的基本原则

- 面向对象程序设计基本原则包括：封装、继承和多态。

- 封装是将**数据和函数**作为一个整体进行封装，以避免外部直接访问数据，从而增加了程序的安全性和可靠性；
- 继承是指**派生类继承基类的数据和函数**，从而可以节省代码，提高程序的可维护性；
- **从一个父类派生出多个子类，可以使子类之间有不同的行为**，这种行为称之为多态。
  - 更直白的说，就是子类重写父类的方法，使子类具有不同的方法实现。

## 2.面向对象程序的设计和效率

- 面向对象程序设计可以提高程序的**可维护性和可扩展性**，
- 但是在一些场景下可能会降低程序的执行效率。
- 因此，需要在设计程序时权衡好程序的可维护性和执行效率，选择最合适的方案。

## 3.掌握类的定义、对象的定义、对象的初始化

- 类的定义包括类名、成员变量、成员函数、访问控制等元素。
- 类的对象是**类定义的实例**，可以通过类名加括号的方式来定义对象
- 对象的初始化可以在定义时进行，也可以在后面使用构造函数来完成。

    ```c++
    MyClass obj; //定义对象

    MyClass obj(10);//MyClass 是一个已定义的类，obj 是一个 MyClass 类型的对象，并使用自定义构造函数将整数值 10 传递给它进行初始化。
    ```

  - 需要注意的是，如果对象定义**时未指定初始值**，则该对象将使用**默认构造函数**进行初始化。例如：

    ```c++
    MyClass obj;  // 调用 MyClass 的默认构造函数进行初始化
    ```

```c++
class Person {
public:
    Person() {
        cout << "Default constructor called." << endl;
    }

    Person(const string &name, int age) {
        this->name = name;
        this->age = age;
        cout << "Constructor with parameters called." << endl;
    }

    ~Person() {
        cout << "Destructor called." << endl;
    }

private:
    string name;
    int age;
};

int main() {
    Person p1;
    Person p2 = Person();
    Person* p3 = new Person();

    delete p3;
    return 0;
}
```

- 第一行代码定义了一个名为 p1 的 Person 类对象，采用**默认构造函数**进行初始化；
- 第二行代码定义了一个名为 p2 的 Person 类对象，采用**默认构造函数**进行初始化，其中用到了 **C++ 中的括号初始化方式**；
  - 使用括号初始化，这里实际上是**声明了一个函数**，而不是创建对象
  - 该函数**没有参数**，返回值为 Person 类型的对象。
- 第三行代码定义了一个名为 p3 的 **Person 类指针**，**使用 new 运算符在堆上分配内存**，然后调用默认构造函数进行初始化。

### 类的访问控制

在 C++ 中，类的访问控制分为三种：

- public：**公有访问控制**，类中的所有成员（包括变量和函数）都可以**被任何函数**访问。
- private：**私有访问控制**，类中的所有成员（包括变量和函数）都只能被**类内部的函数**访问，类外部的函数无法访问。
- protected：**保护访问控制**，类中的所有成员（包括变量和函数）都只能被**类内部的函数访问和派生类的成员函数访问**，类外部的函数无法访问。

### string

string 是 C++ 中的字符串类型，也称为 STL 字符串或标准字符串。它在`<string>`头文件中定义，可以使用标准字符串操作函数，例如 size()、append()、substr() 等。与 C 风格字符串不同，string 类型的长度是可变的，不需要使用预先分配的缓冲区。

```c++
int main() {
    string s1 = "hello";    // 直接初始化
    string s2("world");     // 直接初始化，使用构造函数
    string s3 = s1 + " " + s2;  // 字符串拼接
    cout << s3 << endl;     // 输出 "hello world"

    return 0;
}
```

### const string &name

- 在 Person 构造函数的参数中，name 是一个 const 引用，这意味着它是一个**对 string 对象的常量引用**。使用引用的主要目的是避免在函数调用时创建 string 的副本，从而提高程序的性能和效率。

- 如果没有使用引用，则将复制 string 对象的内容，这将涉及将 string 对象的所有数据复制到新的对象中，**这可能会花费大量的时间和内存**。而使用引用，将只传递 string 对象的内存地址，从而避免了复制数据的操作

## 4. 掌握成员函数的定义及使用

- 成员函数是指在**类内部定义的函数**，可以访问该类的成员变量和函数。
  - 它可以有不同的访问权限
    - 包括**公有、私有和保护**三种
  - 如果成员函数的访问权限为公有，那么该函数可以被类的外部代码调用。
- 公有成员函数是指可以被类的外部代码直接调用的函数，它可以在类的**内部或外部**定义。
  - 通常情况下，我们将类的接口封装成公有成员函数，以便外部代码可以方便地调用类的功能。

- 定义

    ```c++
    class Rectangle {
    public:
        int width, height;
        void set_values (int,int);
        int area();
    };

    void Rectangle::set_values (int x, int y) {
        width = x;
        height = y;
    }

    int Rectangle::area() {
        return width * height;
    }
    ```

- 使用

    ```c++
    Rectangle rect;
    rect.set_values (3,4);
    cout<<"rect.area():"<<rect->area();

    Rectangle *rect = new Rectangle;
    rect->set_values (3,4);
    cout<<"rect.area():"<<rect->area();

    Rectangle rect;
    Rectangle *pRect = &rect;
    rect->set_values (3,4);
    cout<<"rect.area():"<<rect->area();
    ```

### 作用域解析运算符`::`

作用域解析运算符`::`是C++中的一个运算符，用于指明标识符的作用域。在C++中，标识符可以被定义在不同的作用域中，例如全局作用域、命名空间、类、函数等。

```c++
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
```

### C++new命令

- new 是 C++ 中的一个关键字，用于在运行时**动态分配内存并返回指向该内存的指针**。 new 命令的语法如下：

```c++
new type;
```

- 其中，type是要分配内存的数据类型，例如 int、double、char、struct 或 class 等。new 命令**会在堆上分配足够大小的内存来存储指定类型的变量**，并返回指向该内存的指针。例如，下面的代码使用 new 命令在堆上动态分配了一个整数，并将其存储在 p 中：

```c++
int* p = new int;
```

- 上述代码会在堆上分配一个整数所占用的内存，并返回一个指向该内存的指针。我们可以通过指针 p 来访问和操作这个整数。

- 我们还可以使用 new 命令在堆上动态分配数组。例如，下面的代码使用 new 命令在堆上动态分配了一个包含 10 个整数的数组，并将其存储在 arr 中：

```c++
int* arr = new int[10];
```

- 上述代码会在堆上分配一个包含 10 个整数所占用的内存，并返回一个指向该内存的指针。我们可以通过指针 arr 来访问和操作这个数组。

- 需要注意的是，在使用 new 命令分配内存后，需要使用 delete 命令来释放内存，以避免内存泄漏。
  - 例如，如果我们使用 new 命令分配了一个整数，并存储在 p 中，我们可以使用 delete 命令释放该内存：
  - 类似地，如果我们使用 new 命令分配了一个数组，并存储在 arr 中，我们可以使用 delete[] 命令释放该内存：

```c++
delete p;
delete[] arr;
```

- new 除了可以用于动态分配单个变量或数组外，还可以用于**动态分配对象**。在 C++ 中，对象是基于类定义的，因此使用 new 分配对象的语法如下：

```c++
new Class;
```

- 其中，Class 是要分配的对象所属的类。例如，假设我们有一个名为 Person 的类，我们可以使用以下代码创建一个 Person 对象：

```c++
Person *p = new Person;
```

- 这将在堆上分配足够大小的内存来存储 Person 对象，并返回一个指向该对象的指针。
- 当我们使用 new 分配对象时，C++ 将自动调用该类的构造函数来初始化对象。如果我们的类没有定义构造函数，则编译器将使用默认构造函数。

### new Person和new Person()

- 这两种形式的结果是相同的，它们都会分配Person类型的内存并**调用默认构造函数来初始化对象**。

- new Person是使用**默认构造函数**创建一个Person对象的实例，不带任何参数。
- 而new Person()则是使用**无参构造函数**创建一个Person对象的实例，与new Person相比，它强制要求调用Person类的无参构造函数。

## 5. 掌握构造函数与析构函数的功能、使用方法与调用顺序

- 构造函数和析构函数是 C++ 中常用的两种特殊函数，它们分别在对象被创建和销毁时调用。下面是它们的功能、使用方法和调用顺序的解释。

- 构造函数的功能和使用方法：
  - 构造函数用于在**创建对象时初始化对象的成员变量**。
  - 它的名称必须与类名相同，可以有多个重载形式，但不可以有返回值。
  - 在使用时，它会自动调用，并按照参数列表选择适当的构造函数进行初始化。

- 析构函数是一种特殊的成员函数，其名称与类名称相同，前面加上波浪线（~）作为前缀。它**在对象被销毁时自动调用**，用于释放对象分配的资源，包括动态分配的内存、打开的文件等等。析构函数没有返回值，也不能带参数。

### 默认构造函数

- 在 C++ 中，默认构造函数是在**没有显示声明构造函数时**，编译器自动为类生成的构造函数。
  - 如果你希望为类指定默认构造函数，可以在类定义中使用无参构造函数来定义它。

```c++
class MyClass {
public:
    int num;
    string str;
    // 指定默认构造函数
    MyClass() {
        num = 0;
        str = "default";
        cout << "Default constructor is called" << endl;
    }
};
```

- 需要注意的是，如果你在类中定义了其他构造函数
  - 编译器将不再自动生成默认构造函数，因此你需要自己定义它，否则会出现编译错误

## 6. 了解静态成员的必要性

- 静态成员的必要性在于它**可以被整个类所共享**，而不是由类的每个对象独立维护。这意味着所有类对象共享同一个静态成员变量的值，而不是每个对象都有自己的值。同样，静态成员函数可以在不创建任何对象的情况下被调用，这使得它们非常适合作为类的工具函数。

## 7. 了解静态成员、静态数据成员、成员函数的定义及使用

- 静态成员是指在类内部**被声明为static的成员**，它不依赖于类的任何对象，而是**与类本身相关联**。
- 静态成员有两种类型：
  - 静态**数据成员**
  - 静态**成员函数**

```c++
class Car {
  public:
    Car() { count++; }
    static int getCount() { return count; }
  private:
    static int count;
};

int Car::count = 0; // 静态成员变量必须在类外进行初始化

int main() {
  Car car1;
  Car car2;
  cout << Car::getCount(); // 输出 2，表示有两辆汽车被生产出来了
  return 0;
}
```

## 8. 了解需要友元的原因、友元函数的使用

- C++中，友元（friend）是一种机制，允许类中的**某些函数或者其他类访问类的私有成员**。
- 友元可以是一个函数，也可以是一个类，它通过在**类中声明友元**来进行定义。

- reason
  - 通常来说，友元是在某些情况下需要访问类的私有成员，但这些成员不想被公开或暴露在类的外部。

- 例如，如果我们有一个类Person，它有一个私有成员变量age，我们可以通过将Person的某个函数声明为友元函数来允许外部函数访问age，同时不将age公开为公有成员。
- 另一个例子是两个类之间需要共享私有成员时，可以将一个类定义为另一个类的友元类。

```c++
class Person {
public:
    Person(int age) : age(age) {}
private:
    int age;
    friend void printAge(const Person& person);
};

void printAge(const Person& person) {
    cout << "The person's age is: " << person.age << endl;
}

int main() {
    Person person(25);
    printAge(person); // 输出 "The person's age is: 25"
    return 0;
}
```

### 成员初始化列表初始化

```c++
A(int a) : a(a) {} // 使用成员初始化列表初始化a成员变量
// 等同于
A(int a) {
    this->a = a;
}
```

- a(a) 语句就是用来初始化私有成员变量a的。
  - 第一个 a 表示的是**成员变量A::a**，
  - 第二个 a 表示的是构造函数的参数a
- 这个语法就是将参数a直接赋值给成员变量A::a，从而完成对成员变量的初始化。

## 9. 掌握继承、多态与重载的概念

- 继承
  - 是指一个类（称为子类或派生类）可以从另一个类（称为父类或基类）**继承数据和函数**的能力。
  - 子类可以访问父类的**公有成员和受保护成员**，但不能访问私有成员。继承有助于代码重用和简化代码结构。

- 多态：
  - 是指**同一个函数或方法调用**可以根据**对象的不同**而产生不同的行为。
  - 在C++中，多态有两种实现方式：虚函数和模板
    - 虚函数通过在基类中将函数声明为虚函数，并在派生类中对其进行重写来实现多态。
    - 模板通过将函数或类定义为模板，使其能够处理不同类型的数据。

- 重载：
  - 指在同一个作用域中定义**多个同名的函数或运算符**，但它们的**参数列表**不同。
  - 通过重载，可以让函数或运算符**处理不同类型的数据或参数个数**。
  - 在C++中，重载函数或运算符必须在**参数列表或返回值类型中**有所不同。

### 三种继承方式

- ![20230322160939](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230322160939.png)

- 什么是通过接口访问

```c++
class Base {
private:
    int privateVar;
public:
    Base(int val) : privateVar(val) {}

    int getPrivateVar() const {
        return privateVar;
    }

    void setPrivateVar(int val) {
        privateVar = val;
    }
};

class Derived : public Base {
public:
    Derived(int val) : Base(val) {}

    void printPrivateVar() const {
        cout << "Derived accessing Base's private variable: " << getPrivateVar() << endl;
    }
};

int main() {
    Derived d(10);
    d.printPrivateVar(); // 输出: Derived accessing Base's private variable: 10

    d.setPrivateVar(20); // 通过基类接口修改私有成员
    d.printPrivateVar(); // 输出: Derived accessing Base's private variable: 20

    return 0;
}
```

## 10. 掌握继承的工作方式、派生类的构造

- 派生类的构造

```c++
#include <iostream>

// 定义一个父类
class Animal {
public:
    int age;
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

// 定义一个子类，继承自Animal类
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.age = 3; // 子类可以访问从父类继承来的公有成员
    dog.eat();   // 子类可以调用从父类继承来的公有成员函数
    dog.bark();
    return 0;
}
```

- 当派生类对象被创建时，它的构造函数会被调用。
  - 在 C++ 中，派生类的构造函数**必须显式地调用基类的构造函数**，否则编译器会默认调用基类的默认构造函数。
  - 派生类的析构函数也**必须显式地调用基类的析构函数**，以确保正确释放内存。

```c++
#include <iostream>

using namespace std;

class Animal {
public:
    Animal(string name) : m_name(name) {
        cout << "Animal constructor is called." << endl;
    }

    ~Animal() {
        cout << "Animal destructor is called." << endl;
    }

protected:
    string m_name;
};

class Dog : public Animal {
public:
    Dog(string name, string breed) : Animal(name), m_breed(breed) {
        cout << "Dog constructor is called." << endl;
    }

    ~Dog() {
        cout << "Dog destructor is called." << endl;
    }

private:
    string m_breed;
};

int main() {
    Dog myDog("Fido", "Golden Retriever");  // 创建一个 Dog 对象
    cout << "My dog's name is " << myDog.m_name << "." << endl;
    cout << "My dog's breed is " << myDog.m_breed << "." << endl;
    return 0;
}
```

```py
//输出
Animal constructor is called.
Dog constructor is called.
My dog's name is Fido.
My dog's breed is Golden Retriever.
Dog destructor is called.
Animal destructor is called.
```

- 构造函数：先调用**基类**的构造函数，再调用子类的构造函数
- 析构函数：先调用**子类**的析构函数，再调用基类的析构函数。

## 11. 掌握虚函数的定义及使用

- 在 C++ 中，虚函数是一种特殊的成员函数，它可以在**派生类中重写基类的同名函数**，并且通过基类指针或引用调用时，能够根据实际指向的对象类型来调用相应的函数。虚函数的定义和使用如下：

1. 定义虚函数：在基类中，将函数声明为虚函数，即在函数前加上关键字 virtual。例如：

    ```c++
    class Shape {
    public:
        virtual double area() const {
            return 0.0;
        }
    };
    ```

2. 重写虚函数：在派生类中，可以重写基类中的虚函数，以实现特定的功能。在重写时，函数的参数列表、返回值类型和 const 属性必须与基类中的虚函数相同，而函数体可以不同。例如

    ```c++
    class Circle : public Shape {
    private:
        double radius;

    public:
        Circle(double r) : radius(r) {}

        virtual double area() const {
            return 3.14 * radius * radius;
        }
    };

    //调用
    Shape* pShape = new Circle(10.0);
    double area = pShape->area();//314
    ```

### const

- const 是 C++ 中的一个关键字，**表示该成员函数是一个常成员函数，即在函数体内不能修改对象的数据成员**。在定义虚函数时，将其声明为 const 的好处是可以确保调用该函数不会修改对象的状态，这有助于提高程序的健壮性和可维护性。

```c++
virtual double area() const {
    return 0.0;
}
```

- 在函数体内，如果试图修改对象的数据成员，编译器将会发出错误提示。
