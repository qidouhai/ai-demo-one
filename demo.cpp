#include <iostream>

using namespace std;

#include <string>


#include <fstream>

#include<sstream>

#include <algorithm>

#include <map>

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
    string 方块字;
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
//现代汉语的词性  名词  动词   形容词   数词   量词   代词 ,连词  介词  冠词  副词  情态动词
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

//字典部分开始  
//a-z字典 用于用户初次使用 本地没有数据时 进行初次调用构建
//az数英  n>e
void 初始化小写az数英字典() {
    map<int, string> nazdict;
    nazdict[1] = {"a"};
    nazdict[2] = { "b" };
    nazdict[3] = { "c" };
    nazdict[4] = { "d" };
    nazdict[5] = { "e" };
    nazdict[6] = { "f" };
    nazdict[7] = { "g" };
    nazdict[8] = { "h" };
    nazdict[9] = { "i" };
    nazdict[10] = { "j" };
    nazdict[11] = { "k" };
    nazdict[12] = { "l" };
    nazdict[13] = { "m" };
    nazdict[14] = { "n" };
    nazdict[15] = { "o" };
    nazdict[16] = { "p" };
    nazdict[17] = { "q" };
    nazdict[18] = { "r" };
    nazdict[19] = { "s" };
    nazdict[20] = { "t" };
    nazdict[21] = { "u" };
    nazdict[22] = { "v" };
    nazdict[23] = { "w" };
    nazdict[24] = { "x" };
    nazdict[25] = { "y" };
    nazdict[26] = { "z" };

    ofstream file("小写az数英字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair:nazdict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "az数英字典初始化成功" << endl;
    }
    else {
        std::cerr << "az数英字典失败" << endl;
    }

}

//小写az英数字典  e>n
void 初始化小写az英数字典() {
map<string,int> azndict;
azndict["a"] = 1;
azndict["b"] = 2;
azndict["c"] = 3;
azndict["d"] = 4;
azndict["e"] = 5;
azndict["f"] = 6;
azndict["g"] = 7;
azndict["h"] = 8;
azndict["i"] = 9;
azndict["j"] = 10;
azndict["k"] = 11;
azndict["l"] = 12;
azndict["m"] = 13;
azndict["n"] = 14;
azndict["o"] = 15;
azndict["p"] = 16;
azndict["q"] = 17;
azndict["r"] = 18;
azndict["s"] = 19;
azndict["t"] = 20;
azndict["u"] = 21;
azndict["v"] = 22;
azndict["w"] = 23;
azndict["x"] = 24;
azndict["y"] = 25;
azndict["z"] = 26;

ofstream file("小写az英数字典.txt"); // 打开一个文件进行写入操作
if (file.is_open()) { // 如果文件成功打开
    for (const auto& pair : azndict) { // 遍历字典中的所有元素
        file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
    }
    file.close(); // 关闭文件
    cout << "az英数字典初始化成功" << endl;
}
else {
    std::cerr << "az英数字典失败" << endl;
}

}

//A-Z字典 用于用户初次使用 本地没有数据时 进行初次调用构建
//AZ   n>E
void 初始化大写AZ数英字典() {
    map<int, string> nAZdict;
   
    nAZdict[1] = { "A" };
    nAZdict[2] = { "B" };
    nAZdict[3] = { "C" };
    nAZdict[4] = { "D" };
    nAZdict[5] = { "E" };
    nAZdict[6] = { "F" };
    nAZdict[7] = { "G" };
    nAZdict[8] = { "H" };
    nAZdict[9] = { "I" };
    nAZdict[10] = { "J" };
    nAZdict[11] = { "K" };
    nAZdict[12] = { "L" };
    nAZdict[13] = { "M" };
    nAZdict[14] = { "N" };
    nAZdict[15] = { "O" };
    nAZdict[16] = { "P" };
    nAZdict[17] = { "Q" };
    nAZdict[18] = { "R" };
    nAZdict[19] = { "S" };
    nAZdict[20] = { "T" };
    nAZdict[21] = { "U" };
    nAZdict[22] = { "V" };
    nAZdict[23] = { "W" };
    nAZdict[24] = { "X" };
    nAZdict[25] = { "Y" };
    nAZdict[26] = { "Z" };

    ofstream file("大写AZ数英字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : nAZdict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "AZ数英字典初始化成功" << endl;
    }
    else {
        std::cerr << "AZ数英字典初始化失败" << endl;
    }
}

//大写AZ英数字典   E>n
void 初始化大写AZ英数字典() {
    map<string, int> AZndict;

    AZndict["A"] = 1;
    AZndict["B"] = 2;
    AZndict["C"] = 3;
    AZndict["D"] = 4;
    AZndict["E"] = 5;
    AZndict["F"] = 6;
    AZndict["G"] = 7;
    AZndict["H"] = 8;
    AZndict["I"] = 9;
    AZndict["J"] = 10;
    AZndict["K"] = 11;
    AZndict["L"] = 12;
    AZndict["M"] = 13;
    AZndict["N"] = 14;
    AZndict["O"] = 15;
    AZndict["P"] = 16;
    AZndict["Q"] = 17;
    AZndict["R"] = 18;
    AZndict["S"] = 19;
    AZndict["T"] = 20;
    AZndict["U"] = 21;
    AZndict["V"] = 22;
    AZndict["W"] = 23;
    AZndict["X"] = 24;
    AZndict["Y"] = 25;
    AZndict["Z"] = 26;

    ofstream file("大写AZ英数字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : AZndict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "AZ英数字典初始化成功" << endl;
    }
    else {
        std::cerr << "AZ英数字典初始化失败" << endl;
    }
}

//英文符号字典 用于用户初次使用 本地没有数据时 进行初次调用构建
//数英符号   n>es
void 初始化英文符号数英符号字典() {
    map<int, string> nefuhaodict;
    nefuhaodict[1] = { "," };
    nefuhaodict[2] = { "." };
    nefuhaodict[3] = { "/" };
    nefuhaodict[4] = { "\\" };
    nefuhaodict[5] = { "'" };
    nefuhaodict[6] = { "|" };
    nefuhaodict[7] = { "\"" };
    nefuhaodict[8] = { ";" };
    nefuhaodict[9] = { ":" };
    nefuhaodict[10] = { "]" };
    nefuhaodict[11] = { "[" };
    nefuhaodict[12] = { "}" };
    nefuhaodict[13] = { "{" };
    nefuhaodict[14] = { "+" };
    nefuhaodict[15] = { "-" };
    nefuhaodict[16] = { "_" };
    nefuhaodict[17] = { "=" };
    nefuhaodict[18] = { ")" };
    nefuhaodict[19] = { "(" };
    nefuhaodict[20] = { "*" };
    nefuhaodict[21] = { "&" };
    nefuhaodict[22] = { "^" };
    nefuhaodict[23] = { "%" };
    nefuhaodict[24] = { "$" };
    nefuhaodict[25] = { "#" };
    nefuhaodict[26] = { "@" };
    nefuhaodict[27] = { "!" };
    nefuhaodict[28] = { "`" };
    nefuhaodict[29] = { "~" };
    nefuhaodict[30] = { "<" };
    nefuhaodict[31] = { ">" };
    
    ofstream file("英文符号数英符号字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : nefuhaodict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "英文符号数英符号字典初始化成功" << endl;
    }
    else {
        std::cerr << "英文符号数英符号字典初始化失败" << endl;
    }
}

//英数符号  es>n

void 初始化英文符号英数符号字典() {
    map <string,int> enfuhaodict;
    enfuhaodict[","] = 1;
    enfuhaodict["."] = 2;
    enfuhaodict[" /" ] = 3;
    enfuhaodict["\\"] = 4;
    enfuhaodict["\'"] = 5;
    enfuhaodict[" |" ] = 6;
    enfuhaodict["\""] = 7;
    enfuhaodict[";"] = 8;
    enfuhaodict[":"] = 9;
    enfuhaodict["]"] = 10;
    enfuhaodict["["] = 11;
    enfuhaodict[" }"] = 12;
    enfuhaodict["{"] = 13;
    enfuhaodict[" +" ] = 14;
    enfuhaodict[" - "] = 15;
    enfuhaodict["_"] = 16;
    enfuhaodict[" = "] = 17;
    enfuhaodict[")"] = 18;
    enfuhaodict["("] = 19;
    enfuhaodict[" * "] = 20;
    enfuhaodict["&"] = 21;
    enfuhaodict[" ^ "] = 22;
    enfuhaodict[" % "] = 23;
    enfuhaodict["$"] = 24;
    enfuhaodict["#"] = 25;
    enfuhaodict["@"] = 26;
    enfuhaodict["!"] = 27;
    enfuhaodict["`"] = 28;
    enfuhaodict["~"] = 29;
    enfuhaodict["<"] = 30;
    enfuhaodict[">"] = 31;

    ofstream file("英文符号英数符号字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : enfuhaodict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "英文符号英数符号字典初始化成功" << endl;
    }
    else {
        std::cerr << "英文符号英数符号字典初始化失败" << endl;
    }
}



//中文符号字典 用于用户初次使用 本地没有数据时 进行初次调用构建
void 初始化中文符号数中符号字典() {
    map<int, string> nzfuhaodict;
    nzfuhaodict[1] = { "，" };
    nzfuhaodict[2] = {"。"};
    nzfuhaodict[3] = { "、" };
    nzfuhaodict[4] = { "？" };
    nzfuhaodict[5] = { "》" };
    nzfuhaodict[6] = { "《" };
    nzfuhaodict[7] = { "、" };
    nzfuhaodict[8] = { "|" };
    nzfuhaodict[9] = { "；" };
    nzfuhaodict[10] = { "：" };
    nzfuhaodict[11] = { "】" };
    nzfuhaodict[12] = { "【" };
    nzfuhaodict[13] = { "}" };
    nzfuhaodict[14] = { "{" };
    nzfuhaodict[15] = { "+" };
    nzfuhaodict[16] = { "=" };
    nzfuhaodict[17] = { "-" };
    nzfuhaodict[18] = { "——" };
    nzfuhaodict[19] = { "）" };
    nzfuhaodict[20] = { "（" };
    nzfuhaodict[21] = { "*" };
    nzfuhaodict[22] = { "&" };
    nzfuhaodict[23] = { "……" };
    nzfuhaodict[24] = { "%" };
    nzfuhaodict[25] = { "￥" };
    nzfuhaodict[26] = { "#" };
    nzfuhaodict[27] = { "@" };
    nzfuhaodict[28] = { "！" };
    nzfuhaodict[29] = { "·" };
    nzfuhaodict[30] = { "~" };

    ofstream file("中文符号数中符号字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : nzfuhaodict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文符号数中符号字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文符号数中符号字典初始化失败" << endl;
    }
}

//中文汉字字典 用于用户初次使用 本地没有数据时 进行初次调用构建
void 初始化中文汉字拼音索引目录字典() {
    map<string, string> hanzipinyindict;
    hanzipinyindict["a"] = { "中文汉字拼音a开头索引字典.txt" };
    hanzipinyindict["b"] = { "中文汉字拼音b开头索引字典.txt" };
    hanzipinyindict["c"] = { "中文汉字拼音c开头索引字典.txt" };
    hanzipinyindict["d"] = { "中文汉字拼音d开头索引字典.txt" };
    hanzipinyindict["e"] = { "e拼音.txt" };
    hanzipinyindict["f"] = { "f拼音.txt" };
    hanzipinyindict["g"] = { "g拼音.txt" };
    hanzipinyindict["h"] = { "h拼音.txt" };
    hanzipinyindict["i"] = { "i拼音.txt" };
    hanzipinyindict["j"] = { "j拼音.txt" };
    hanzipinyindict["k"] = { "k拼音.txt" };
    hanzipinyindict["l"] = { "l拼音.txt" };
    hanzipinyindict["m"] = { "m拼音.txt" };
    hanzipinyindict["n"] = { "n拼音.txt" };
    hanzipinyindict["o"] = { "o拼音.txt" };
    hanzipinyindict["p"] = { "p拼音.txt" };
    hanzipinyindict["q"] = { "q拼音.txt" };
    hanzipinyindict["u"] = { "u拼音.txt" };
    hanzipinyindict["v"] = { "v拼音.txt" };
    hanzipinyindict["w"] = { "w拼音.txt" };
    hanzipinyindict["x"] = { "x拼音.txt" };
    hanzipinyindict["y"] = { "y拼音.txt" };
    hanzipinyindict["z"] = { "z拼音.txt" };

    ofstream file("中文汉字拼音索引目录字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : hanzipinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音索引目录字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音索引目录字典初始化失败" << endl;
    }

}


//a拼音索引
void  中文汉字拼音a开头索引字典() {
    multimap<string, string>apinyindict;
    apinyindict.insert({"a","a"});
    apinyindict.insert({ "a","ai" });
    apinyindict.insert({ "a","an" });
    apinyindict.insert({ "a","ang" });
    apinyindict.insert({ "a","ao" });

    ofstream file("中文汉字拼音a开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : apinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音a开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音a开头索引字典初始化失败" << endl;
    }
}

//b拼音索引

void 中文汉字拼音b开头索引字典() {
    multimap<string, string>bpinyindict;
    bpinyindict.insert({ "b","ba" });
    bpinyindict.insert({ "b","bai" });
    bpinyindict.insert({ "b","ban" });
    bpinyindict.insert({ "b","bang" });
    bpinyindict.insert({ "b","bao" });
    bpinyindict.insert({ "b","bei" });
    bpinyindict.insert({ "b","ben" });
    bpinyindict.insert({ "b","beng" });
    bpinyindict.insert({ "b","bi" });
    bpinyindict.insert({ "b","bian" });
    bpinyindict.insert({ "b","biao" });
    bpinyindict.insert({ "b","bie" });
    bpinyindict.insert({ "b","bin" });
    bpinyindict.insert({ "b","bing" });
    bpinyindict.insert({ "b","bo" });
    bpinyindict.insert({ "b","bu" });

    ofstream file("中文汉字拼音b开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : bpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音b开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音b开头索引字典初始化失败" << endl;
    }

}


//c拼音索引
void 中文汉字拼音c开头索引字典() {
    multimap<string, string>cpinyindict;
    cpinyindict.insert({ "c","ca" });
    cpinyindict.insert({ "c","cai" });
    cpinyindict.insert({ "c","can" });
    cpinyindict.insert({ "c","cang" });
    cpinyindict.insert({ "c","cao" });
    cpinyindict.insert({ "c","ce" });
    cpinyindict.insert({ "c","cen" });
    cpinyindict.insert({ "c","ceng" });
    cpinyindict.insert({ "c","cha" });
    cpinyindict.insert({ "c","chai" });
    cpinyindict.insert({ "c","chan" });
    cpinyindict.insert({ "c","chang" });
    cpinyindict.insert({ "c","chao" });
    cpinyindict.insert({ "c","che" });
    cpinyindict.insert({ "c","chen" });
    cpinyindict.insert({ "c","cheng" });
    cpinyindict.insert({ "c","chi" });
    cpinyindict.insert({ "c","chong" });
    cpinyindict.insert({ "c","chou" });
    cpinyindict.insert({ "c","chu" });
    cpinyindict.insert({ "c","chuai" });
    cpinyindict.insert({ "c","chuan" });
    cpinyindict.insert({ "c","chuang" });
    cpinyindict.insert({ "c","chui" });
    cpinyindict.insert({ "c","chun" });
    cpinyindict.insert({ "c","chuo" });
    cpinyindict.insert({ "c","ci" });
    cpinyindict.insert({ "c","cong" });
    cpinyindict.insert({ "c","cou" });
    cpinyindict.insert({ "c","cu" });
    cpinyindict.insert({ "c","cuan" });
    cpinyindict.insert({ "c","cui" });
    cpinyindict.insert({ "c","cun" });
    cpinyindict.insert({ "c","cuo" });

    ofstream file("中文汉字拼音c开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : cpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音c开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音c开头索引字典初始化失败" << endl;
    }


}


//d拼音索引
void 中文汉字拼音d开头索引字典() {
    multimap<string, string>dpinyindict;
    dpinyindict.insert({"d","da"});
    dpinyindict.insert({ "d","dai" });
    dpinyindict.insert({ "d","dan" });
    dpinyindict.insert({ "d","dang" });
    dpinyindict.insert({ "d","dao" });
    dpinyindict.insert({ "d","de" });
    dpinyindict.insert({ "d","deng" });
    dpinyindict.insert({ "d","di" });
    dpinyindict.insert({ "d","dia" });
    dpinyindict.insert({ "d","dian" });
    dpinyindict.insert({ "d","diao" });
    dpinyindict.insert({ "d","die" });
    dpinyindict.insert({ "d","ding" });
    dpinyindict.insert({ "d","diu" });
    dpinyindict.insert({ "d","dong" });
    dpinyindict.insert({ "d","dou" });
    dpinyindict.insert({ "d","du" });
    dpinyindict.insert({ "d","duan" });
    dpinyindict.insert({ "d","dui" });
    dpinyindict.insert({ "d","dun" });
    dpinyindict.insert({ "d","duo" });


    ofstream file("中文汉字拼音d开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : dpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音d开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音d开头索引字典初始化失败" << endl;
    }
}


//e拼音索引
void  中文汉字拼音d开头索引字典() {
    multimap<string, string>epinyindict;
    epinyindict.insert({ "e","e" });
    epinyindict.insert({ "e","ei" });
    epinyindict.insert({ "e","en" });
    epinyindict.insert({ "e","eng" });
    epinyindict.insert({ "e","er" });

    ofstream file("中文汉字拼音e开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : epinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音e开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音e开头索引字典初始化失败" << endl;
    }

}


//f拼音索引
void 中文汉字拼音f开头索引字典() {
    multimap<string, string>fpinyindict;
    fpinyindict.insert({ "f","fa" });
    fpinyindict.insert({ "f","fan" });
    fpinyindict.insert({ "f","fang" });
    fpinyindict.insert({ "f","fei" });
    fpinyindict.insert({ "f","fen" });
    fpinyindict.insert({ "f","feng" });
    fpinyindict.insert({ "f","fo" });
    fpinyindict.insert({ "f","fou" });
    fpinyindict.insert({ "f","fu" });

    ofstream file("中文汉字拼音f开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : fpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音f开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音f开头索引字典初始化失败" << endl;
    }
}


//g拼音索引
void 中文汉字拼音g开头索引字典() {
    multimap<string, string>gpinyindict;
    gpinyindict.insert({ "g","ga" });
    gpinyindict.insert({ "g","gai" });
    gpinyindict.insert({ "g","gan" });
    gpinyindict.insert({ "g","gang" });
    gpinyindict.insert({ "g","gao" });
    gpinyindict.insert({ "g","ge" });
    gpinyindict.insert({ "g","gei" });
    gpinyindict.insert({ "g","gen" });
    gpinyindict.insert({ "g","geng" });
    gpinyindict.insert({ "g","gong" });
    gpinyindict.insert({ "g","gou" });
    gpinyindict.insert({ "g","gu" });
    gpinyindict.insert({ "g","gua" });
    gpinyindict.insert({ "g","guai" });
    gpinyindict.insert({ "g","guan" });
    gpinyindict.insert({ "g","guang" });
    gpinyindict.insert({ "g","gui" });
    gpinyindict.insert({ "g","gun" });
    gpinyindict.insert({ "g","guo" });

    ofstream file("中文汉字拼音g开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : gpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音g开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音g开头索引字典初始化失败" << endl;
    }

}

//h拼音索引
void 中文汉字拼音h开头索引字典() {
    multimap<string, string>hpinyindict;
    hpinyindict.insert({ "h","ha" });
    hpinyindict.insert({ "h","hai" });
    hpinyindict.insert({ "h","han" });
    hpinyindict.insert({ "h","hang" });
    hpinyindict.insert({ "h","hao" });
    hpinyindict.insert({ "h","he" });
    hpinyindict.insert({ "h","hei" });
    hpinyindict.insert({ "h","hen" });
    hpinyindict.insert({ "h","heng" });
    hpinyindict.insert({ "h","hong" });
    hpinyindict.insert({ "h","hou" });
    hpinyindict.insert({ "h","hu" });
    hpinyindict.insert({ "h","hua" });
    hpinyindict.insert({ "h","huai" });
    hpinyindict.insert({ "h","huan" });
    hpinyindict.insert({ "h","huang" });
    hpinyindict.insert({ "h","hui" });
    hpinyindict.insert({ "h","hun" });
    hpinyindict.insert({ "h","huo" });

    ofstream file("中文汉字拼音h开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : hpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音h开索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音h开头索引字典初始化失败" << endl;
    }

}

//j拼音索引

void 中文汉字拼音j开头索引字典() {
    multimap<string, string>jpinyindict;
    jpinyindict.insert({ "j","ji" });
    jpinyindict.insert({ "j","jia" });
    jpinyindict.insert({ "j","jian" });
    jpinyindict.insert({ "j","jiang" });
    jpinyindict.insert({ "j","jiao" });
    jpinyindict.insert({ "j","jie" });
    jpinyindict.insert({ "j","jin" });
    jpinyindict.insert({ "j","jing" });
    jpinyindict.insert({ "j","jiong" });
    jpinyindict.insert({ "j","jiu" });
    jpinyindict.insert({ "j","ju" });
    jpinyindict.insert({ "j","juan" });
    jpinyindict.insert({ "j","jue" });
    jpinyindict.insert({ "j","jun" });


    ofstream file("中文汉字拼音j开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : jpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音j开索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音j开头索引字典初始化失败" << endl;
    }

}

//k拼音索引
void 中文汉字拼k开头索引字典() {
    multimap<string, string>kpinyindict;
    kpinyindict.insert({ "k","ka" });
    kpinyindict.insert({ "k","kai" });
    kpinyindict.insert({ "k","kan" });
    kpinyindict.insert({ "k","kang" });
    kpinyindict.insert({ "k","kao" });
    kpinyindict.insert({ "k","ke" });
    kpinyindict.insert({ "k","kei" });
    kpinyindict.insert({ "k","ken" });
    kpinyindict.insert({ "k","keng" });
    kpinyindict.insert({ "k","kong" });
    kpinyindict.insert({ "k","kou" });
    kpinyindict.insert({ "k","ku" });
    kpinyindict.insert({ "k","kua" });
    kpinyindict.insert({ "k","kuai" });
    kpinyindict.insert({ "k","kuan" });
    kpinyindict.insert({ "k","kuang" });
    kpinyindict.insert({ "k","kui" });
    kpinyindict.insert({ "k","kun" });
    kpinyindict.insert({ "k","kuo" });


    ofstream file("中文汉字拼音k开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : kpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音k开索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音k开头索引字典初始化失败" << endl;
    }

}


//l拼音索引
void 中文汉字拼音l开头索引字典() {
    multimap<string, string>lpinyindict;
    lpinyindict.insert({ "l","la" });
    lpinyindict.insert({ "l","lai" });
    lpinyindict.insert({ "l","lan" });
    lpinyindict.insert({ "l","lang" });
    lpinyindict.insert({ "l","lao" });
    lpinyindict.insert({ "l","le" });
    lpinyindict.insert({ "l","lei" });
    lpinyindict.insert({ "l","leng" });
    lpinyindict.insert({ "l","li" });
    lpinyindict.insert({ "l","lia" });
    lpinyindict.insert({ "l","lian" });
    lpinyindict.insert({ "l","liang" });
    lpinyindict.insert({ "l","liao" });
    lpinyindict.insert({ "l","lie" });
    lpinyindict.insert({ "l","lin" });
    lpinyindict.insert({ "l","ling" });
    lpinyindict.insert({ "l","liu" });
    lpinyindict.insert({ "l","lo" });
    lpinyindict.insert({ "l","long" });
    lpinyindict.insert({ "l","lou" });
    lpinyindict.insert({ "l","lu" });
    lpinyindict.insert({ "l","lü" });
    lpinyindict.insert({ "l","luan" });
    lpinyindict.insert({ "l","lüe" });
    lpinyindict.insert({ "l","lun" });
    lpinyindict.insert({ "l","luo" });

    ofstream file("中文汉字拼音l开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : lpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音l开索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音l开头索引字典初始化失败" << endl;
    }

}

//m拼音索引
void 中文汉字拼音m开头索引字典() {
    multimap<string, string>mpinyindict;
    mpinyindict.insert({ "m","ma" });
    mpinyindict.insert({ "m","mai" });
    mpinyindict.insert({ "m","man" });
    mpinyindict.insert({ "m","mang" });
    mpinyindict.insert({ "m","mao" });
    mpinyindict.insert({ "m","me" });
    mpinyindict.insert({ "m","mei" });
    mpinyindict.insert({ "m","men" });
    mpinyindict.insert({ "m","meng" });
    mpinyindict.insert({ "m","mi" });
    mpinyindict.insert({ "m","mian" });
    mpinyindict.insert({ "m","miao" });
    mpinyindict.insert({ "m","mie" });
    mpinyindict.insert({ "m","min" });
    mpinyindict.insert({ "m","ming" });
    mpinyindict.insert({ "m","miu" });
    mpinyindict.insert({ "m","mo" });
    mpinyindict.insert({ "m","mou" });
    mpinyindict.insert({ "m","mu" });

    ofstream file("中文汉字拼音m开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : mpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音m开索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音m开头索引字典初始化失败" << endl;
    }

}

//n拼音索引




//中文词语字典 用于用户初次使用 本地没有数据时 进行初次调用构建
void 初始化中文词语数中词语字典() {
    map<int, string> ciyudict;

}

//中文成语字典 用于用户初次使用 本地没有数据时 进行初次调用构建
void 初始化中文成语数中成语字典() {
    map<int, string> chengyudict;

}

//字典部分结束

void testfindback(string str, string chars, void  callback(size_t)) {
    string strstr = str;
    string strchars = chars;
    size_t pos = strstr.find_first_of(strchars);
    if (pos != string::npos) {
        callback(pos);
    }
}
//返回位置
void myCallback(size_t index) {
    cout << "位置" << index << endl;
}

//1句子存为历史记录 保存到文本
void test04(string someworld, int id) {
    string swd = someworld;
    int imd = id;
    string filename = to_string(imd);
    string rehis = "历史记录";
    string txt = ".txt";
    ofstream ofs;
    ofs.open(rehis + filename + txt, ios::in | ios::trunc);
    ofs << swd << endl;
    ofs.close();


}

//2句子去除标点符号  空格  求出汉字个数
void test05(string str, void callback(size_t)) {
    string sworlds = str;
    size_t num = sworlds.length();
    // int nums = static_cast<int>(sworlds.length());
    string chars = "abcefgiklmopqrstuvwxyz!@#$%^&*-=\"?[]~|()_+'/{}`<>\\;:12345790 ";
    testfindback(sworlds, chars, callback);
}
//适用于windows 十六进制方式提取分割汉字和统计汉字数量
void  test16(string s) {
    string t;
    int count = 0;
    for (int i = 0; i < s.length(); i++) // UTF-16编码中，中文占用2个字节
    {
        if ((unsigned char)s[i] < 0x80) // ASCII字符的最高位为0，UTF-16编码为1字节
        {
            t.append(s.substr(i, 1));
            t.append("/");
        }
        else if ((unsigned char)s[i] == 0xFFFE)  // 中文的第一个字节的最高位为0*FFFE，则为小端序，UTF-16编码为2字节
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
        }
        else if ((unsigned char)s[i] == 0xFEFF){   // 文章开头为0xFEFF，则为大端序,UTF-16编码为2字节
            
                t.append(s.substr(2, i));
                t.append("/");
                i += 1;
                count++;
        }
        else
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
            count++;
        }
    }
    //cout << t << endl;
    //return t;
    cout << "test16汉字个数是" << count << endl;
    cout << "test16可以分割成为" << t << endl;


}
//提取字符串中的汉字及个数  //适用于linux 的汉字统计和 汉字分割
//windows vs  中分割汉字会显示乱码
void  test06(string s) {
    string t;
    int count = 0;
    for (int i = 0; i < s.length(); i++) // UTF-8编码中，中文占用3个字节
    {
        if ((unsigned char)s[i] < 0x80) // ASCII字符的最高位为0，UTF-8编码为1字节
        {
            t.append(s.substr(i, 1));
            t.append("/");
        }
        else if ((unsigned char)s[i] < 0xE0) // 中文的第一个字节的最高位为110，UTF-8编码为3字节
        {
            t.append(s.substr(i, 3));
            t.append("/");
        }
        else if ((unsigned char)s[i] == 0x3001) {
            // t.append(s.substr(i, 3));
            t.append("/");
            i += 2;
            count--;
        }
        else // 中文的第一个字节的最高位为1110，UTF-8编码为3字节
        {
            t.append(s.substr(i, 3));
            t.append("/");
            i += 2;
            count++;
        }
    }
    //cout << t << endl;
    //return t;
    cout << "test06汉字个数是" << count << endl;
    cout << "test06可以分割成为" << t << endl;


}

//下面是一个简单的示例 utf16_to_utf8 函数的实现，用于将 UTF - 16 编码转化为 UTF - 8 编码：


string utf16_to_utf8(const wstring& utf16_string) {
    string utf8_string;
    for (size_t i = 0; i < utf16_string.length(); i++) {
        uint32_t c = static_cast<uint32_t>(utf16_string[i]);
        if (c <= 0x7F) {
            // Single-byte UTF-8 character
            utf8_string += static_cast<char>(c);
        }
        else if (c <= 0x7FF) {
            // Two-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 6) | 0xC0);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else if (c <= 0xFFFF) {
            // Three-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 12) | 0xE0);
            utf8_string += static_cast<char>(((c >> 6) & 0x3F) | 0x80);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else if (c <= 0x10FFFF) {
            // Four-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 18) | 0xF0);
            utf8_string += static_cast<char>(((c >> 12) & 0x3F) | 0x80);
            utf8_string += static_cast<char>(((c >> 6) & 0x3F) | 0x80);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else {
            // Invalid character
            utf8_string += '\xEF';
            utf8_string += '\xBF';
            utf8_string += '\xBD';
        }
    }
    return utf8_string;
}


void test08(wstring c) {
    wstring t;
    for (int i = 0; i < c.length(); i++) {
        if ((unsigned)c[i] < 127) {
            t += (wchar_t)' ';
        }
        else {
            t += c[i];
        }
    }
    t.erase(remove_if(t.begin(), t.end(), [](wchar_t s) { return (unsigned)s < 127; }), t.end());
    cout << "test08你输入的汉字有: " << utf16_to_utf8(t) << endl;
    cout << "有" << count_if(t.begin(), t.end(), [](wchar_t s) {return (unsigned)s >= 127; }) << "个汉字" << endl;
}

//字符串处理方法2
/*

void test001(string str,char * s)
{

    char b;
    string 非中文;
        int len=str.length();
        for(int t=0;t<len;t++)
        {
        b = *s++;
        //如果到字符串尾 则说明没有中文字符
        if (b == 0){
            非中文+=b;
            }

          if (*s & 0 * 80)
          {
          t++;
            }
            else if (b & 0 * 80){
                if (*s & 0 * 80)
            }else
        //如果字符串高位为1  且下一字符高位
        //也是1 则有中文字符
        if (b & 0 * 80){
            if (*s & 0 * 80)
               cout<<1;
                        }
            }

    cout<< 0;
}

*/

//linux 下汉字数量不准  //适用于wIndows VS中的汉字提取和汉字数量统计
int IncludeChinese(char* s)
{
    // char* s = new char[c.length() + 1];

    // strcpy_s(s, c.length() + 1, c.c_str());
    char b;

    while (1)
    {
        b = *s++;
        //如果到字符串尾 则说明没有中文字符
        if (b == 0) break;
        //如果字符串高位为1  且下一字符高位
        //也是1 则有中文字符
        if (b & 0 * 80)
            if (*s & 0 * 80)
                return 1;
    }
    return 0;
}
void test07(string c) {

    char s[1024] = { 0 };
    for (int f = 0; f < c.length(); f++) {

        s[f] = c[f];

    }
    string t;
    string tm;
    long long time = 0;
    for (int i = 0; i < sizeof(s); i++) {
        if (s[i] >= 0 && s[i] <= 127) //不是全角字符
        {
            // s[i] = ' ';
             //cout << s[i] << endl;
            tm += s[i];
        }

        else time++;
        t += s[i];
    }

    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s < 127; }), t.end());
    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s == 32; }), t.end());
    ;


    cout << "test07你输入的英文有: " << tm << endl;
    cout << "test07你输入的汉字有: " << t << endl;
    long long times;

    times = t.size();
    cout << "有" << (time / 2) << "个汉字" << endl;
    cout << "有t.size" << t.size() << "个汉字" << endl;
    cout << "有tm.size" << tm.size() << "个非汉字" << endl;
    cout << "有t.length" << t.length() << "个汉字" << endl;
    cout << "有sizeof(tm)" << sizeof(tm) << "个非汉字" << endl;
    cout << "有sizeof(t)" << sizeof(t) << "个汉字" << endl;
    cout << "有tm.length" << tm.length() << "个非汉字" << endl;
}


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
//前期的数据结构先设计为字典+map+链表
//字典存字     链表/数组容器  存确切的属性内容
void 字典(string a,string b) {
    map<string, string> dict;
    



}

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

     //字符串查找
     /* string str1 = "好大啊";
         string chars1 = "你们真的好吗？是不是真的啊？"
         返回2
         */
void testfind(string str, string chars) {
    string strstr = str;
    string strchars = chars;
    size_t pos = strstr.find_first_not_of(strchars);
    if (pos != string::npos) {
        cout << pos << endl;
    }
    else {
        cout << "没有找到" << endl;
    }
}

/*string str1 = "哈哈哈哈啊哈哈";
string chars1 = "你们真的好吗？是不是真的啊？";
返回8
*/
void testfind01(string str, string chars) {
    string strstr = str;
    string strchars = chars;
    size_t pos = strstr.find_first_of(strchars);
    if (pos != string::npos) {
        cout << pos << endl;
    }
    else {
        cout << "没有找到" << endl;
    }
}

int test01(string xn, string mn, string nn, int i = 1) {

    string filename;
    filename = to_string(i);
    ofstream  ofs;
    ofs.open(filename + ".txt", ios::out | ios::trunc);
    string 字和意中的字 = xn;
    string 字和意中的字加分隔符 = "|" + xn + "|";
    string 字和意中的意 = mn;
    string 字和意中的意加分隔符 = "|" + mn + "|";
    string 字中的词性 = nn;
    string 字中的词性加分隔符 = "|" + nn + "|";
    int inpaperid = i;
    string inpaperid加分隔符 = "|" + filename + "|";

    ofs << 字和意中的字 << endl;
    ofs << 字和意中的字加分隔符 << endl;
    ofs << 字和意中的意 << endl;
    ofs << 字和意中的意加分隔符 << endl;
    ofs << 字中的词性 << endl;
    ofs << 字中的词性加分隔符 << endl;
    ofs << inpaperid << endl;
    ofs << inpaperid加分隔符 << endl;
    ofs.close();
    i += 1;
    return i;

}
void 记录paperid(int i) {
    ofstream  ofs;
    ofs.open("paperid.txt", ios::out | ios::trunc);
    int paperid = i - 1;
    ofs << paperid << endl;
    ofs.close();
}
int 读取paperid() {
    ifstream  ifs;
    ifs.open("paperid.txt", ios::in);
    int paperid;
    ifs >> paperid;
    ifs.close();
    return paperid;
}
void test03(int i) {
    string 字和意中的字;
    string 字和意中的字加分隔符;
    string 字和意中的意;
    string 字和意中的意加分隔符;
    string 字中的词性;
    string 字中的词性加分隔符;
    string 学过的字;
    string 学过的字加分隔符;
    string 学过意思;
    string 学过意思加分隔符;
    string 学过的词性;
    string 学过的词性加分隔符;
    string filename;
    string filename加分隔符;
    int j;
    j = i;

    ifstream ifs;


    for (int m = 1; m < j; m++) {
        string odfilename;
        odfilename = to_string(m);
        ifs.open(odfilename + ".txt", ios::in);
        字和意中的字 = 字和意中的字 + odfilename;
        字和意中的字加分隔符 = 字和意中的字加分隔符 + odfilename;
        字和意中的意 = 字和意中的意 + odfilename;
        字和意中的意加分隔符 = 字和意中的意加分隔符 + odfilename;
        字中的词性 = 字中的词性 + odfilename;
        字中的词性加分隔符 = 字中的词性加分隔符 + odfilename;
        filename = filename + odfilename;
        filename加分隔符 = filename加分隔符 + odfilename;

        ifs >> 字和意中的字;
        ifs >> 字和意中的字加分隔符;
        ifs >> 字和意中的意;
        ifs >> 字和意中的意加分隔符;
        ifs >> 字中的词性;
        ifs >> 字中的词性加分隔符;
        ifs >> filename;
        ifs >> filename加分隔符;
        ifs.close();
        学过的字 += 字和意中的字.c_str();
        学过的字加分隔符 += 字和意中的字加分隔符.c_str();
        学过意思 += 字和意中的意.c_str();
        学过意思加分隔符 += 字和意中的意加分隔符.c_str();
        学过的词性 += 字中的词性.c_str();
        学过的词性加分隔符 += 字中的词性加分隔符.c_str();

    }


    ofstream  ofs;
    filename = to_string(j);
    ofs.open(filename + ".txt", ios::out | ios::trunc);
    ofs << 学过的字 << endl;
    ofs << 学过的字加分隔符 << endl;
    ofs << 学过意思 << endl;
    ofs << 学过意思加分隔符 << endl;
    ofs << 学过的词性 << endl;
    ofs << 学过的词性加分隔符 << endl;
    ofs << filename << endl;
    ofs << filename加分隔符 << endl;
    ofs.close();


}
void test02(string cm) {
    string 字和意中的字;
    string 字和意中的字加分隔符;
    string 字和意中的意;
    string 字和意中的意加分隔符;
    string 字中的词性;
    string 字中的词性加分隔符;
    string 学过的字;
    string 句子大概意思;

    int id = 读取paperid();
    for (int paidd = 1; paidd <= id; paidd++) {
        string filename;
        filename = to_string(paidd);
        ifstream ifs;



        ifs.open(filename + ".txt", ios::in);
        if (!ifs.is_open()) {
            cout << "系统：文件打开失败" << endl;

            return;
        }

        字和意中的字 = 字和意中的字 + filename;
        字和意中的字加分隔符 = 字和意中的字加分隔符 + filename;
        字和意中的意 = 字和意中的意 + filename;
        字和意中的意加分隔符 = 字和意中的意加分隔符 + filename;
        字中的词性 = 字中的词性 + filename;
        字中的词性加分隔符 = 字中的词性加分隔符 + filename;
        ifs >> 字和意中的字;
        ifs >> 字和意中的字加分隔符;
        ifs >> 字和意中的意;
        ifs >> 字和意中的意加分隔符;
        ifs >> 字中的词性;
        ifs >> 字中的词性加分隔符;
        ifs.close();
        学过的字 += 字和意中的字;
        句子大概意思 += 字和意中的意;

    }

    if (cm == 字和意中的字)  //单个字学过判断
    {

        cout << "AI:我学过汉字有 : " << 字和意中的字 << endl;
        cout << "AI:它的意思是 : " << 字和意中的意 << endl;
        cout << "AI:它的词性是 : " << 字中的词性 << endl;
    }
    else if (cm == 学过的字) //输入内容完全匹配判断
    {
        cout << "AI:我学过汉字有 : " << 学过的字 << endl;
        cout << "AI:它的意思是 : " << 句子大概意思 << endl;
    }

    else {
        //cout << "AI:我知道这个字,并且调用了这个函数,但是文件中没有这些字，你可以教我认字吗";

        //包含字判断
        int count = 0;
        string sameChars = "";
        for (int i = 0; i < 学过的字.length(); i++) {
            for (int j = 0; j < cm.length(); j++) {
                if (学过的字[i] == cm[j]) {

                    sameChars += 学过的字[i];
                    count++;
                    int mmm = count;
                }
            }
        }

        if (学过的字.find(cm) != string::npos) {
            cout << "AI:我还学过汉字有 : " << sameChars << endl;
            if (sameChars == 学过的字)  //单个字学过判断
            {
                cout << "AI:它的词性是 : " << 句子大概意思 << endl;
            }
            //cout << "AI:它的意思是 : " << sameCharsmean << endl;
        }
    }


}

// 函数实现测试
void 菜单交互(string a1, string a2, string a3, string a4, int a5) {
    string a11 = a1;
    string    messages = a2;
    string yn = a3;  //汉字
    string ym = "字的词性";
    string  yx = a4;  //字的意思
    int  paperid = a5;

    if (a11 == messages) {
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
            cout << "请输入1,为："  << yn << " 选择汉字的词性" << endl;
            
            int tt = 0;
            int t = 0;
            cin >> tt;
            if (tt != 1) {
                cout << "请输入1,为：" << yn << " 选择汉字的词性" << endl;
                exit (1);
            }
            else {
                t=tt;
            }
            
           
            while (true)
            {



            
                if (t == 1) {
                    cout << "选项" << endl;
                    cout << "A " << "名词 " << endl;
                    cout << "B " << "动词 " << endl;
                    cout << "C " << "形容词 " << endl;
                    cout << "D " << "数词 " << endl;
                    cout << "E " << "量词 " << endl;
                    cout << "F " << "代词 " << endl;
                    cout << "G " << "连词 " << endl;
                    cout << "H " << "介词 " << endl;
                    cout << "I " << "助词 " << endl;
                    cout << "J " << "副词 " << endl;
                    cout << "K " << " 叹词 " << endl;
                    cin >> ym;


                    if (ym == "A") {
                        ym = "名词 ";

                    }
                    else if (ym == "B")
                    {
                        ym = "动词 ";

                    }
                    else if (ym == "C") {
                        ym = "形容词 ";
                    }
                    else if (ym == "D")
                    {
                        ym = "数词 ";
                    }
                    else if (ym == "E")
                    {
                        ym = "量词 ";
                    }
                    else if (ym == "F")
                    {
                        ym = "代词 ";
                    }
                    else if (ym == "G")
                    {
                        ym = "连词 ";
                    }
                    else if (ym == "H")
                    {
                        ym = "介词 ";
                    }
                    else if (ym == "I")
                    {
                        ym = "助词 ";
                    }
                    else if (ym == "J")
                    {
                        ym = "副词 ";
                    }
                    else if (ym == "K")
                    {
                        ym = " 叹词 ";
                    }
                    else {
                        cout << "输入有误" << endl;
                        exit(1);
                    }
                    //名词  动词   形容词   数词   量词   代词 ,连词  介词  助词  副词    叹词
                    if (ym == "名词" || "动词 " || "形容词 " || "数词 " || "量词 " || "代词 " || "连词 " || "介词 " || "助词" || "副词" || "叹词")
                    {
                        cout << "你选择的是： " << ym << endl;
                    }
                    
                    cout << "1,手误，重新输入汉字的词性" << endl;
                    cout << "2.输入汉字意思" << endl;
                    cout << "3.换个汉字教" << endl;
                    cout << "4,退出本次教学" << endl;
                    cin >> t;
                    

                }
                else   if (t == 2) {
                    cout << "请输入" << yn << "的汉语意思" << endl;
                    cin >> yx;
                    cout << "教学成功," << yn << "的汉语意思是：" << yx << endl;
                    cout << "1,修改" << yn << "的汉字的词性" << endl; 
                    cout << "2.教错了，更正并重新输入" << endl;
                    cout << "3.保存并继续教更多内容" << endl;
                    cout << "4,保存并退出" << endl;
                    cin >> t;
                    if (t == 3 || t == 4)
                    {

                        test01(yn, yx, ym, paperid);
                        paperid = test01(yn, yx, ym, paperid);
                        //cout << "paperid= " << paperid << endl;

                    }
                    if (t == 4)
                    {
                        记录paperid(paperid);
                        test03(paperid);
                        cout << "欢迎下次光临,如有疑问请联系邮箱：" << endl;
                        cout << "kaiji234@outlook.com" << endl;
                        cout << "再会!" << endl;
                        //system("pause");
                        //return 0;
                    }
                }
                else if (t == 3) {

                    cout << "请输入单个汉字" << endl;
                    cin >> yn;
                    
                    cout << "1,请选择" << yn << "的汉字的词性" << endl; 
                    cout << "2，输入汉字意思" << endl;
                    cout << "3，手误，换一个字教" << endl;

                    cout << "4,退出本次教学" << endl;
                    cin >> t;

                }
                else if (t == 4) {
                    break;
                }
                else {
                    cout << "输入有误,请稍后再试";
                    cin >> t;
                    break;
                }

            }
        }
        else if (i == 2) {

            cout << "欢迎下次使用，按任意键退出";
            exit(0);
        }
        else
        {
            cout << "输入有误，请重新输入数字";
            cin >> i;
        }
    }

}


int main() {
    //开发计划
    //机器人打开时会检测细胞的正常和异常数量，同时会检测器官的正常和异常报告
    //当检测完成后，可以进行正常使用时，会根据用户的指令进行是否装载细胞和器官功能表达
    //当无法正常使用时，需要进行机器人异常修正工作
    //机器人出现思想动态变更时，会在开机时进行检测
    //当机器人的正常值范围出现异常时，会开机进行报告


    //初始化
   初始化小写az数英字典();
   初始化大写AZ数英字典();
   初始化英文符号数英符号字典();
   初始化英文符号英数符号字典();
   初始化中文符号数中符号字典();
   中文汉字拼音a开头字典();
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
    int putskeyid = 0;
    getline(cin, messages);
    // cin >> messages;
    putskeyid += 1;

    汉字 a;
    string 汉字关键字 = a.方块字 = "方块字";
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


    /*     菜单交互开始    */
        /*
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
                cout << "2,请选择" << yn << "的汉字的词性" << endl;
                cout << "3，手误，换一个字教" << endl;

                cout << "4,退出本次教学" << endl;
                int t = 0;
                cin >> t;
                while (true)
                {



                    if (t == 1) {
                        cout << "请输入" << yn << "的汉语意思" << endl;
                        cin >> a.意思;
                        cout << "教学成功," << yn << "的汉语意思是：" << a.意思 << endl;
                        cout << "1.教错了，更正并重新输入" << endl;
                        cout << "2,请选择" << yn << "的汉字的词性" << endl;
                        cout << "3.没有输入手误，继续教更多内容" << endl;
                        cout << "4,退出本次教学" << endl;
                        cin >> t;

                    }
                    else if (t == 2) {
                        cout << "选项" << endl;
                        cout << "A " << "名词 " << endl;
                        cout << "B " << "动词 " << endl;
                        cout << "C " << "形容词 " << endl;
                        cout << "D " << "数词 " << endl;
                        cout << "E " << "量词 " << endl;
                        cout << "F " << "代词 " << endl;
                        cout << "G " << "连词 " << endl;
                        cout << "H " << "介词 " << endl;
                        cout << "I " << "助词 " << endl;
                        cout << "J " << "副词 " << endl;
                        cout << "K " << " 叹词 " << endl;
                        cin >> ym;


                        if (ym == "A") {
                            ym = "名词 ";

                        }
                        else if (ym == "B")
                        {
                            ym = "动词 ";

                        }
                        else if (ym == "C") {
                            ym = "形容词 ";
                        }
                        else if (ym == "D")
                        {
                            ym = "数词 ";
                        }
                        else if (ym == "E")
                        {
                            ym = "量词 ";
                        }
                        else if (ym == "F")
                        {
                            ym = "代词 ";
                        }
                        else if (ym == "G")
                        {
                            ym = "连词 ";
                        }
                        else if (ym == "H")
                        {
                            ym = "介词 ";
                        }
                        else if (ym == "I")
                        {
                            ym = "助词 ";
                        }
                        else if (ym == "J")
                        {
                            ym = "副词 ";
                        }
                        else if (ym == "K")
                        {
                            ym = " 叹词 ";
                        }
                        else {
                            cout << "输入错误，请从新输入" << endl;
                        }
                        //名词  动词   形容词   数词   量词   代词 ,连词  介词  助词  副词    叹词
                        if (ym == "名词" || "动词 " || "形容词 " || "数词 " || "量词 " || "代词 " || "连词 " || "介词 " || "助词" || "副词" || "叹词")
                        {
                            cout << "你选择的是： " << ym << endl;
                        }

                        cout << "1.修改汉字意思" << endl;
                        cout << "2,手误，重新输入汉字的词性" << endl;
                        cout << "3.没有输入手误，继续教更多内容" << endl;
                        cout << "4,退出本次教学" << endl;
                        cin >> t;
                        if (t == 3 || t == 4)
                        {

                            test01(yn, a.意思, ym, paperid);
                            paperid = test01(yn, a.意思, yn, paperid);
                            //cout << "paperid= " << paperid << endl;

                        }
                        if (t == 4)
                        {
                             记录paperid(paperid);
                            test03(paperid);
                            cout << "欢迎下次光临,如有疑问请联系邮箱：" << endl;
                            cout << "kaiji234@outlook.com" << endl;
                            cout << "再会!" << endl;
                            //system("pause");
                            //return 0;
                        }

                    }
                    else if (t == 3) {

                        cout << "请输入单个汉字" << endl;
                        cin >> yn;
                        cout << "1，没有手误，继续教此汉字意思" << endl;
                        cout << "2,请选择" << yn << "的汉字的词性" << endl;
                        cout << "3，手误，换一个字教" << endl;

                        cout << "4,退出本次教学" << endl;
                        cin >> t;

                    }
                    else if (t == 4) {
                        break;
                    }
                    else {
                        cout << "输入有误,请稍后再试";
                        cin >> t;
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
                cout << "输入有误，请重新输入数字";
                cin >> i;
            }
        }

        */
        /*菜单交互 结束*/

}
