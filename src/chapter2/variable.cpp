
#include <iostream>

/**
 * 有无符号类型变量时，结果也是无符号的aa
 */
int main(void) {

	unsigned u = 10, u2= 42; // 无符号数
	std::cout << u2 -u << std::endl; // 正确 32
	std::cout << u -u2 << std::endl; //类型为无符号数 故 -32 + int.max

	int i = 10,i2 = 42;
	std::cout << i -i2 << std::endl; //有符号
	std::cout << i2 -i << std::endl; // 有符号


	std::cout << i -u << std::endl; // 0
	std::cout << u -i << std::endl; // 0
}
