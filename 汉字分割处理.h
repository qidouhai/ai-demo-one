#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

//适用于windows 十六进制方式提取分割汉字和统计汉字数量
void  test16(string s);
//提取字符串中的汉字及个数  //适用于linux 的汉字统计和 汉字分割
//windows vs  中分割汉字会显示乱码
void  test06(string s);

//下面是一个简单的示例 utf16_to_utf8 函数的实现，用于将 UTF - 16 编码转化为 UTF - 8 编码：


string utf16_to_utf8(const wstring& utf16_string);


void test08(wstring c);



//linux 下汉字数量不准  //适用于wIndows VS中的汉字提取和汉字数量统计
int IncludeChinese(char* s);
void test07(string c);

string 替换内容(string 原字符, string 需要替换的字符, string 要替换成的内容);
string   过滤替换部分汉字或词语(string s);
