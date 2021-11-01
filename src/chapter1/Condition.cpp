/**
 * Young 2021-10-29
 */

#include <iostream>
#include "Sales_item.h" //对于不属于标准库的头文件 使用 ""包裹


void smaller();
void sta();

int main2() {
	 //smaller();
	 Sales_item book;
	 std::cin >> book;
	 std::cout << book << std::endl;
	 return  0;
}

void sta(){
	 int curValue = 0;
	 int nextvalue = 0;
	 if( std::cin >> curValue ){
		 // 输入流是 cin
		 int cnt = 1;
		 while(std::cin >> nextvalue){
			 if(curValue == nextvalue){
				 cnt ++;
			 }else{
				 std::cout << "value: " << curValue << " 连续次数为 " << cnt << std::endl;
	             curValue = nextvalue;
	             cnt =1;
			 }
		 }
		 	 	 std::cout << "value: " << curValue << " 连续次数为 " << cnt << std::endl;
	 }
}
void smaller(){

 int cur = 0;
 int nextValue = 0;
 //判断有无输入
 if(std::cin >> cur){

	 while(std::cin >> nextValue){
		 if(cur > nextValue){
			 std::cout << cur <<" is larger than " << nextValue << std::endl;
		 }
		 cur = nextValue;
	 }
 }

}
