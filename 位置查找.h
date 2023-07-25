#pragma once
#include <iostream>
using namespace std;
#include <string>

//2句子去除标点符号  空格  求出汉字个数

void testfindback(string str, string chars, void  callback(size_t));
//返回位置
void myCallback(size_t index);
void test05(string str, void callback(size_t));

//目前感觉用处不大
//字符串查找
  /* string str1 = "好大啊";
      string chars1 = "你们真的好吗？是不是真的啊？"
      返回2
      */
void testfind(string str, string chars);


/*string str1 = "哈哈哈哈啊哈哈";
string chars1 = "你们真的好吗？是不是真的啊？";
返回8
*/
void testfind01(string str, string chars);