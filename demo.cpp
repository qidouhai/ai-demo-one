#include <iostream>;

using namespace std;

#include <string>;

//声明字符类
class zifu{
public:
	string 表示字符;
};

//继承字符类后进行分开声明汉字类 和  标点符号类
class 汉字 :public zifu {
public:
	//汉字的词性  意思  用法  关联的词语  关联的事物   关联的句子  
	string 词性;
	string 意思;
	string 关联字;
	string 关联词;
	string 关联句;
	string 关联事物;
	int  汉字个数;


	void 汉字set() {

	}

	void 汉字get() {

	}
private:
	string 汉字名字;

};

class 单字主语:public 汉字 {
public:


private:
	string 单字主语名字;
};

class 单字谓语 :public 汉字 {
public:


private:
	string 单字谓语名字;
};

class 单字宾语 :public 汉字 {
public:


private:
	string 单字宾语名字;
};

class 词组 :public 汉字 {
public:
	int  词组字个数;
	string 含义;
};

class 词组主语 :public 词组 {
public:


private:
	string 词组主语名字;
};

class 词组谓语 :public 词组 {
public:


private:
	string 词组谓语名字;
};

class 词组宾语 :public 词组 {
public:


private:
	string 词组宾语名字;
};



class 标点符合 :public zifu {
public:
	string 含义;



};


class airobotsdemo {
public:
	string botname;   //名字
	int botid;     //id
protected:

private:
	string botjiyi;  //记忆
	int botage;   //年龄
	int botmaxage;  //寿命




};


int main() {
	
	
} 