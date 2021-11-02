
#include <iostream>

/**
 * 有无符号类型变量时，结果也是无符号的aa bb cc dd
 */
void decl();

int used = 42 ; //全局作用域

int main(void) {
	decl();
	define();
	int unique = 10; //块作用域 局部变量

	std::cout << used << " " << unique << std::endl;
}

void define(){
 extern int i = 10; //定义
 std::cout << i <<std::endl;
 int y ; //定义
 std::cout << y <<std::endl;
 extern int z ;
 std::cout << z <<std::endl;
}
void decl(){
	unsigned u = 10, u2= 42; // 无符号数
	std::cout << u2 -u << std::endl; // 正确 32
	std::cout << u -u2 << std::endl; //类型为无符号数 故 -32 + int.max

	int i = 10,i2 = 42;
	std::cout << i -i2 << std::endl; //有符号
	std::cout << i2 -i << std::endl; // 有符号


	std::cout << i -u << std::endl; // 0
	std::cout << u -i << std::endl; // 0
}
