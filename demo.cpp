#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include<sstream>
#include <algorithm>
#include <map>







/*===================*/

/*======================*/
//字典部分结束
//1句子存为历史记录 保存到文本
//2句子去除标点符号  空格  求出汉字个数
//3句子分析 句子结构 句子成分 句子分解 
//nlp
//这个涉及到了分词，估计需要向后排
//4将句子分割后的单个字 按照类格式存到临时文本
     /*test01基本实现教过的文字内容保存到文本
     而这一条要实现的是对话中的句子*/
// 这个初期阶段 应该是“你们好”
// 他们好、在吗、再见、等等通用词语和简单无词汇的分割字组成阶段
// 例如：再见，需要把“再”和“见”分开来分别保存到txt
// 而文本中为再见句子存档
// 为后期的模型抽象进行的资料库存储
     
//5根据单个字符 翻译成意思集合
//前期的数据结构先设计为字典map+链表
//字典存字     链表/数组容器  存确切的属性内容

//6通过模型或经验对句子意思进行优化，使其成为正确句子
     /*这是理解句子的阶段，如果无法理解则需要用户详细描述*/
//字符串的字，字的含义，字的词性，字的用法，字的近义词，字的反义词，字的关联字词，字关联字词的含义，字的例句，字的关联字词句的权重，字使用掌握的熟练度，字可能会出现的位置（从0开始冒泡排序），字的使用场景，字的人工监督学习相关内容，字的实物映射，字的网址，字的专用有名词的返回值，字的心理学字典返回值，字的句子结构，字所处于机器人所属的显卡taken，机器人显卡与机器人的taken匹配度，字数限制
void 句子的含义(string 汉字, string 字的意思,string 字的词性,string 字的近义词,int 字的位置,string 字的关联字词,string 字的例句,string 字的专用有名词的返回值,string 字的句子结构,int 字数限制) {
    //字的词性按照罗列出来
    //句子结构，根据词性匹配出合适的句子结构
    //对单个汉字的意思进行特殊解读后提炼出来字的意思的关键词及含义，然后赋值给当前的句子
    //根据句子缺少的内容 让AI 根据理解进行选词填空（填写对和填写错都会进行记录，错误和正确都用红黑线条表示，而红黑线条的粗线表示对其了解和掌握的程度，而红黑线条可以用数字代替或者一些数据结构等）（答对则会增加自驱动更新模型中的能力值增加1，能力增加表示AI 越强大，获得的溢出越多，包括心情，和健康值，以及对生命值的延长都有意义）

    //很明显 这里需要字典 ，所以要补字典数据（放到上面吧）

}

//中文词语字典 用于用户初次使用 本地没有数据时 进行初次调用构建
void 初始化中文词语数中词语字典();
//引入的声明开始
void 记录paperid(int i);
int 读取paperid();
void 菜单交互(string a1, string a2, string a3, string a4, int a5);
int test01(string xn, string mn, string nn, int i = 1);
void test02(string cm);
void test03(int i);
void test04(string someworld, int id);
void test05(string str, void callback(size_t));
void  test06(string s);
void test07(string c);
void test08(wstring c);
void  test16(string s);
//linux 下汉字数量不准  //适用于wIndows VS中的汉字提取和汉字数量统计
int IncludeChinese(char* s);
void myCallback(size_t index);

/*-----------------------*/
void test07返回(string& c字符串引用, long long& num字数引用); 
void 组词分类(); 
void 分词(string str); 
string 读取文件查找内容(string chastr); 
void 分词用的词语();
/*---------------------------*/
void 新菜单交互();
/*---------------------------*/
void 是什么();
void  读取数据();
void 当听到这些语言时();
//声明结束

int main() {
    //开发计划
    //机器人打开时会检测细胞的正常和异常数量，同时会检测器官的正常和异常报告
    //当检测完成后，可以进行正常使用时，会根据用户的指令进行是否装载细胞和器官功能表达
    //当无法正常使用时，需要进行机器人异常修正工作
    //机器人出现思想动态变更时，会在开机时进行检测
    //当机器人的正常值范围出现异常时，会开机进行报告


    //初始化
  /* 
   */
    //组词分类();

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
   
    /*
    cout << "AI:我是AI机器人,请问有什么可以帮助你的吗？" << endl;
    string messages = "123";
    int putskeyid = 0;
    getline(cin, messages);
    // cin >> messages;
    putskeyid += 1;

    //汉字 a;
    string 汉字关键字  = "方块字";
    string yn = "我";  //教的汉字
    string ym = "字的词性";
    string yx = "词的词性";
    //a.意思 = yx;

    int paperid = 1;
    int ppaper_id = 读取paperid();
    test04(messages, putskeyid);
    test05(messages, myCallback);

    //test07测试 
    char* mstr = (char*)messages.c_str();
    IncludeChinese(mstr);
    test07(messages);
    //
    //分词专用区开始
    string c字符串引用 = messages;
    long long num字数引用 = 0;
    test07返回( c字符串引用, num字数引用);
    cout << "下面是分词(c字符串引用)测试" << endl;
    分词用的词语(); 分词(c字符串引用);
     cout << "上面是分词(c字符串引用)测试" << endl;
     
    //分词专用区结束
    test06(messages);
    cout << "下面是16进制猜测windows vs执行的进制测试" << endl;
    test16(messages);
    //
    if (messages != "123")
    {
        test02(messages);
    }
    else {
        cout << messages << endl;
    }
    if (ppaper_id != paperid && ppaper_id > 0) {
        paperid = ppaper_id + 1;
       菜单交互(汉字关键字, messages, yn, yx, paperid);
    }
    else {
        paperid = 1;

        菜单交互(汉字关键字, messages, yn, yx, paperid);
    }
     */

    新菜单交互();
    // 是什么();
    //当听到这些语言时();
}
