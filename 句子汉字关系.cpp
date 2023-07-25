#include <string>
#include <iostream>
using namespace std;
#include <map>

//表格
void 表格(string 句子内容) {
	string  xy轴内容 = 句子内容;
	int len = 句子内容.length();
	//假设都是汉字 没有英文和数字（有的话需要进行判断字符是否是汉字，然后根据长度进行分割）
	//分割单个汉字或者是词组 然后填入表格中 ，在表格中根据语料库进行关系数据填充和完善
	//把字与字的关系 根据冒泡排序 进行从大到小进行排序
	//当需要组成语言的时候  调用冒泡排序表 根据句子含义进行预估语句中应该在什么位置出现什么汉字 
	//语句正确的时候，把ai的语感能力加1，预估能力加1（除了关系可以用来预估，句子的场景，情景，主语的类型特征等等都可以参与预估的模型中，当然这些里面的复合型关系还是需要进行多维度表格的建立和完善，这里就一笔带过了）

	//字段
	int x1 = 1;
	int x2 = 2;
	int x3 = 3;
	int x4 = 4;
	int  x轴[] = { x1, x2, x3, x4 };

	//自增id 
	int y1 = 1;
	int y2 = 2;
	int y3 = 3;
	int  y轴1[] = { y1 };

	//by id
	string x1_y1 = "字符串1";
	string x2_y1 = "字符串2";
	string x3_y1 = "字符串3";
	string x4_y1 = "字符串3";

	//select "字符串" by id 
	//存入、删除、改、查
	map<string, string>数据库dict;




}