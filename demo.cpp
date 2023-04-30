#include <iostream>

using namespace std;

#include <string>


#include <fstream>

#include<sstream>

//声明字符类
class zifu {
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
	string 汉字名字;

};
//现代汉语的词性  名词  动词   形容词   数词   量词   代词 ,连词介词代词冠词名词副词情态动词形容词副词动词
class 词性 :public 汉字 {
public:
	string 词性解释;

	词性() {
		词性名字 = "词性";
	};
	string 词性名字;
};

//名词
class 名词 :public 词性 {
public:
	string 名词解释;

	名词() {
		名词名字 = "名词";
	};
	string 名词名字;
};

//动词
class 动词 :public 词性 {
public:
	string 动词解释;

	动词() {
		动词名字 = "动词";
	};
	string 动词名字;
};

//形容词
class 形容词 :public 词性 {
public:
	string 形容词解释;

	形容词() {
		形容词名字 = "形容词";
	};
	string 形容词名字;
};


//数词
class 数词 :public 词性 {
public:
	string 数词解释;

	数词() {
		数词名字 = "数词";
	};
	string 数词名字;
};

//量词
class 量词 :public 词性 {
public:
	string 量词解释;

	量词() {
		量词名字 = "量词";
	};
	string 量词名字;
};





//汉字的词性  代词细化
class 代词 :public 词性 {
public:
	string 代词解释;

	代词() {
		代词名字 = "代词";
	};
	string 代词名字;
};

class 人称代词 :public 代词 {
public:
	string 人称代词名字;
};

class 疑问代词 :public 代词 {
public:
	string 疑问代词名字;
};
class 指示代词 :public 代词 {
public:
	string 指示代词名字;
};
//人称代词细分
class 第一人称代词 :public 人称代词 {
public:
	string 指示代词名字;
};

class 第二人称代词代词 :public 人称代词 {
public:
	string 指示代词名字;
};


class 第三人称代词代词 :public 人称代词 {
public:
	string 指示代词名字;
};


//汉字主语谓语宾语
class 单字主语 :public 汉字 {
public:

	string 单字主语名字;
};

class 单字谓语 :public 汉字 {
public:

	string 单字谓语名字;
};

class 单字宾语 :public 汉字 {
public:


	string 单字宾语名字;
};

class 词组 :public 汉字 {
public:
	int  词组字个数;
	string 含义;
};

class 词组主语 :public 词组 {
public:
	string 词组主语名字;
};

class 词组谓语 :public 词组 {
public:
	string 词组谓语名字;
};

class 词组宾语 :public 词组 {
public:

	string 词组宾语名字;
};

//成语类
class 成语词组 :public 词组 {
public:

	string 成语词组名字;
};

class 成语主语 :public 成语词组 {
public:

	string 成语主语词组名字;
};

class 成语宾语 :public 成语词组 {
public:

	string 成语宾语词组名字;
};

class 成语谓语 :public 成语词组 {
public:

	string 成语谓语词组名字;
};

class 标点符合 :public zifu {
public:
	string 含义;

};


//句子按照结构拆分  
class 句子 {
public:
	string 主语;
	string 谓语;
	string 宾语;
	string 语气;
	string 场景;
	//按照句子结构进行造句
	/*void func() {
		string 主语;
		主语 = 单字主语 () || 词组主语() || 成语主语();
		cout << 主语 << 谓语 << 宾语 << endl;

	};*/
};

//据用途和语气，句子可以分为陈述句、疑问句、祈使句、感叹句。根据结构可分为单句和复句
class 陈述句子 :public 句子 {
public:

};

class 疑问句子 :public 句子 {
public:

};

class 祈使句子 :public 句子 {
public:

};

class 感叹句子 :public 句子 {
public:

};


//机器人的类
class airobotsdemo {
public:
	string 名字;
	int 编号;
	string 跑;
	string 走;
	string 爬;
	string 睡觉;
	string 躺;
	string 跳;
	string 说;
	string 性格;
protected:
	string 基因;

	class 身体 {
	protected:
		class 器官 {
		protected:
			class 细胞
			{
			public:
				string 吃;
				string 死亡;
				string 寿命 = "5天";
				string 饥饿;
				string 遗传;
			protected:
				int c_DNA = 2;
				int c_RNA = -1;
				int c_酶 = -1;
				string 变异指数 = 0;
				int 酶(string 维生素a, string 其他) {
					int m = 0;
					m -= 1;
					return m;

				};
				/*这里的蛋白质分子正常 ，则细胞正常，其中的过程暂时省略掉，只用其中的结果
				和计算机的0,1思想是一样的*/
				void 细胞正常表达(int 酶, int RNA, int DNA)
				{


					//随机个0和1的组成
					if (c_酶 == 酶) {
						//酶是正常酶, 可以参与酶解链DNA工作

						if (DNA + RNA + 酶 == 0) {
							//当DNA RNA  酶 合计等于0时，基因正常表达
							cout << "细胞功能正常,可以继续执行任务" << endl;
						};
					}
					else {
						变异指数 += 1;
						cout << "细胞变异指数增加" << endl;
					}

				};
			};
		};
	};
private:
	string 健康;
	string 记忆;
	int 年龄;
	int 寿命;
};
//开发计划
//细胞的成年之前生产数量是几何倍数的增长，暂时定在数量为100W个细胞可以形成一个器官组织
//(30岁)成年后细胞的生产数量逐年递减，生产速度降低，到100岁之前，逐渐把有生机的细胞全部替换成老化细胞
//也就是器官衰竭的状态

//天体
class 星球 {
public:
	string 名字;

};

/*

void test01() {
	zifu 测试;
	汉字 a;
	词组 b;
	词性 d;
	名词 e;
	动词 f;
	形容词 g;
	数词 h;
	量词 i;
	代词 j;
	//单字主语 c;
	//单字谓语 k;
	//单字宾语 l;
	////c.词性 = e.名词名字 ||f.动词名字||g.形容词名字;
	////cout << c.词性;
	//c.单字主语名字 = "你";
	//k.单字谓语名字 = "是";
	//l.单字宾语名字 = "人";
};
*/

/*

void 主谓宾句子(string x,string y,string z) {
	陈述句子 aaa;
	aaa.主语 = x;
	aaa.谓语 = y;
	aaa.宾语 = z;
	cout<< aaa.主语 << aaa.谓语 << aaa.宾语;

};
*/

int test01(string xn, string mn,int i=1) {
	
	stringstream filename;
	filename << i;
	ofstream  ofs;
	ofs.open(filename.str() + ".txt", ios::out );
	string 字和意中的字 = xn;
	string 字和意中的意 = mn;
	ofs << 字和意中的字 <<endl;

	ofs << 字和意中的意 << endl;
	ofs.close();
	i += 1;
	return i;
}
void test02(string cm, int paid) {
	
	for (int paid = 1; paid < 10; paid++) {
		stringstream filename;
		filename << paid;
		ifstream ifs;



		ifs.open(filename.str() + ".txt", ios::in);
		if (!ifs.is_open()) {
			cout << "系统：文件打开失败" << endl;
			
			return;
		}
		string 字和意中的字;
		string 字和意中的意;
		字和意中的字 = 字和意中的字 + filename.str();
		字和意中的意 = 字和意中的意 + filename.str();
		ifs >> 字和意中的字;

		ifs >> 字和意中的意;

		if (cm == 字和意中的字)
		{

			cout << "AI:我学过汉字有 : " << 字和意中的字 << endl;
			cout << "AI:它的意思是 : " << 字和意中的意 << endl;
			break;
		}
		else {
			//cout << "AI:我知道这个字,并且调用了这个函数,但是文件中没有这些字，你可以教我认字吗";
			continue;
		}
		ifs.close();
	}
	
}

int main() {
	//开发计划
	//机器人打开时会检测细胞的正常和异常数量，同时会检测器官的正常和异常报告
	//当检测完成后，可以进行正常使用时，会根据用户的指令进行是否装载细胞和器官功能表达
	//当无法正常使用时，需要进行机器人异常修正工作
	//机器人出现思想动态变更时，会在开机时进行检测
	//当机器人的正常值范围出现异常时，会开机进行报告

	//下面是随机测试
	/*
	单字主语 c;
	单字谓语 k;
	单字宾语 l;
	c.单字主语名字 = "你";
	k.单字谓语名字 = "是";
	l.单字宾语名字 = "人";
	主谓宾句子(c.单字主语名字, k.单字谓语名字, l.单字宾语名字);
	*/
	//test01();
	cout << "AI:我是AI机器人,请问有什么可以帮助你的吗？" << endl;
	string messages = "123";
	cin >> messages;
	汉字 a;
	a.关联字 = "888";
	string yn = "我";
	int paperid = 1;
	if (messages != "123")
	{
		
		test02(messages, paperid);
		
		
	}
	else {
		cout << messages << endl;
	}

	if (a.关联字 == messages) {
		cout << "AI:我知道这个字，但是忘记了大概意思是什么";

	}
	else
	{
		cout << "AI:我还没有学习更多内容，你可以教我吗？" << endl;
		cout << "1为可以" << endl;
		cout << "2为不可以" << endl;
		int i = 0;
		
		cin >> i;

		if (i == 1)
		{

			cout << "请输入单个汉字" << endl;
			cin >> yn;
			cout << "1，没有手误，继续教此汉字意思" << endl;

			cout << "2，手误，换一个字教" << endl;

			cout << "3,退出本次教学" << endl;
			int t = 0;
			cin >> t;
			while (true)
			{



				if (t == 1) {
					cout << "请输入" << yn << "的汉语意思" << endl;
					cin >> a.意思;
					cout << "教学成功," << yn << "的汉语意思是：" << a.意思 << endl;
					cout << "1.教错了，更正并重新输入" << endl;
					cout << "2.没有输入手误，继续教更多内容" << endl;
					cout << "3,退出本次教学" << endl;
					cin >> t;
					if (t == 2 || t == 3)
					{
						
						test01(yn, a.意思, paperid);
						paperid = test01(yn, a.意思, paperid);
						//cout << "paperid= " << paperid << endl;
						
					}
				}
				else if (t == 2) {

					cout << "请输入单个汉字" << endl;
					cin >> yn;
					cout << "1，没有手误，继续教此汉字意思" << endl;

					cout << "2，手误，换一个字教" << endl;

					cout << "3,退出本次教学" << endl;
					cin >> t;

				}
				else if (t == 3) {
					break;
				}
				else {
					cout << "输入有误，还请重新输入";
					break;
				}

			}
		}
		else if (i == 2) {

			cout << "欢迎下次使用，按任意键退出";
			exit;
		}
		else
		{
			cout << "输入有误，请重新输入";
		}
	}



}
