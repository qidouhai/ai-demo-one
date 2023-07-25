#include  "字典.h"

//字典部分开始  
//a-z字典 用于用户初次使用 本地没有数据时 进行初次调用构建
//az数英  n>e
void 初始化小写az数英字典() {
    map<int, string> nazdict;
    nazdict[1] = "a";
    nazdict[2] = "b";
    nazdict[3] = "c";
    nazdict[4] = "d";
    nazdict[5] = "e";
    nazdict[6] = "f";
    nazdict[7] = "g";
    nazdict[8] = "h";
    nazdict[9] = "i";
    nazdict[10] = "j";
    nazdict[11] = "k";
    nazdict[12] = "l";
    nazdict[13] = "m";
    nazdict[14] = "n";
    nazdict[15] = "o";
    nazdict[16] = "p";
    nazdict[17] = "q";
    nazdict[18] = "r";
    nazdict[19] = "s";
    nazdict[20] = "t";
    nazdict[21] = "u";
    nazdict[22] = "v";
    nazdict[23] = "w";
    nazdict[24] = "x";
    nazdict[25] = "y";
    nazdict[26] = "z";

    ofstream file("小写az数英字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : nazdict) { // 遍历字典中的所有元素
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
    map<string, int> azndict;
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

    nAZdict[1] = "A";
    nAZdict[2] = "B";
    nAZdict[3] = "C";
    nAZdict[4] = "D";
    nAZdict[5] = "E";
    nAZdict[6] = "F";
    nAZdict[7] = "G";
    nAZdict[8] = "H";
    nAZdict[9] = "I";
    nAZdict[10] = "J";
    nAZdict[11] = "K";
    nAZdict[12] = "L";
    nAZdict[13] = "M";
    nAZdict[14] = "N";
    nAZdict[15] = "O";
    nAZdict[16] = "P";
    nAZdict[17] = "Q";
    nAZdict[18] = "R";
    nAZdict[19] = "S";
    nAZdict[20] = "T";
    nAZdict[21] = "U";
    nAZdict[22] = "V";
    nAZdict[23] = "W";
    nAZdict[24] = "X";
    nAZdict[25] = "Y";
    nAZdict[26] = "Z";

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
    nefuhaodict[1] = ",";
    nefuhaodict[2] = ".";
    nefuhaodict[3] = "/";
    nefuhaodict[4] = "\\";
    nefuhaodict[5] = "'";
    nefuhaodict[6] = "|";
    nefuhaodict[7] = "\"";
    nefuhaodict[8] = ";";
    nefuhaodict[9] = ":";
    nefuhaodict[10] = "]";
    nefuhaodict[11] = "[";
    nefuhaodict[12] = "}";
    nefuhaodict[13] = "{";
    nefuhaodict[13] = "{";
    nefuhaodict[14] = "+";
    nefuhaodict[15] = "-";
    nefuhaodict[16] = "_";
    nefuhaodict[17] = "=";
    nefuhaodict[18] = ")";
    nefuhaodict[19] = "(";
    nefuhaodict[20] = "*";
    nefuhaodict[21] = "&";
    nefuhaodict[22] = "^";
    nefuhaodict[23] = "%";
    nefuhaodict[24] = "$";
    nefuhaodict[25] = "#";
    nefuhaodict[26] = "@";
    nefuhaodict[27] = "!";
    nefuhaodict[28] = "`";
    nefuhaodict[29] = "~";
    nefuhaodict[30] = "<";
    nefuhaodict[31] = ">";

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
    map <string, int> enfuhaodict;
    enfuhaodict[","] = 1;
    enfuhaodict["."] = 2;
    enfuhaodict["/"] = 3;
    enfuhaodict["\\"] = 4;
    enfuhaodict["\'"] = 5;
    enfuhaodict["|"] = 6;
    enfuhaodict["\""] = 7;
    enfuhaodict[";"] = 8;
    enfuhaodict[":"] = 9;
    enfuhaodict["]"] = 10;
    enfuhaodict["["] = 11;
    enfuhaodict["}"] = 12;
    enfuhaodict["{"] = 13;
    enfuhaodict["+"] = 14;
    enfuhaodict["-"] = 15;
    enfuhaodict["_"] = 16;
    enfuhaodict["="] = 17;
    enfuhaodict[")"] = 18;
    enfuhaodict["("] = 19;
    enfuhaodict["*"] = 20;
    enfuhaodict["&"] = 21;
    enfuhaodict["^"] = 22;
    enfuhaodict["%"] = 23;
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
    nzfuhaodict[1] = "，";
    nzfuhaodict[2] = "。";
    nzfuhaodict[3] = "、";
    nzfuhaodict[4] = "？";
    nzfuhaodict[5] = "》";
    nzfuhaodict[6] = "《";
    nzfuhaodict[7] = "、";
    nzfuhaodict[8] = "|";
    nzfuhaodict[9] = "；";
    nzfuhaodict[10] = "：";
    nzfuhaodict[11] = "】";
    nzfuhaodict[12] = "【";
    nzfuhaodict[13] = "}";
    nzfuhaodict[14] = "{";
    nzfuhaodict[15] = "+";
    nzfuhaodict[16] = "=";
    nzfuhaodict[17] = "-";
    nzfuhaodict[18] = "——";
    nzfuhaodict[19] = "）";
    nzfuhaodict[20] = "（";
    nzfuhaodict[21] = "*";
    nzfuhaodict[22] = "&";
    nzfuhaodict[23] = "……";
    nzfuhaodict[24] = "%";
    nzfuhaodict[25] = "￥";
    nzfuhaodict[26] = "#";
    nzfuhaodict[27] = "@";
    nzfuhaodict[28] = "！";
    nzfuhaodict[29] = "·";
    nzfuhaodict[30] = "~";

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
    hanzipinyindict["a"] = "中文汉字拼音a开头索引字典.txt";
    hanzipinyindict["b"] = "中文汉字拼音b开头索引字典.txt";
    hanzipinyindict["c"] = "中文汉字拼音c开头索引字典.txt";
    hanzipinyindict["d"] = "中文汉字拼音d开头索引字典.txt";
    hanzipinyindict["e"] = "中文汉字拼音e开头索引字典.txt";
    hanzipinyindict["f"] = "中文汉字拼音f开头索引字典.txt";
    hanzipinyindict["g"] = "中文汉字拼音g开头索引字典.txt";
    hanzipinyindict["h"] = "中文汉字拼音h开头索引字典.txt";
    hanzipinyindict["i"] = "中文汉字拼音i开头索引字典.txt";
    hanzipinyindict["j"] = "中文汉字拼音j开头索引字典.txt";
    hanzipinyindict["k"] = "中文汉字拼音k开头索引字典.txt";
    hanzipinyindict["l"] = "中文汉字拼音l开头索引字典.txt";
    hanzipinyindict["m"] = "中文汉字拼音m开头索引字典.txt";
    hanzipinyindict["n"] = "中文汉字拼音n开头索引字典.txt";
    hanzipinyindict["o"] = "中文汉字拼音o开头索引字典.txt";
    hanzipinyindict["p"] = "中文汉字拼音p开头索引字典.txt";
    hanzipinyindict["q"] = "中文汉字拼音q开头索引字典.txt";
    hanzipinyindict["r"] = "中文汉字拼音r开头索引字典.txt";
    hanzipinyindict["s"] = "中文汉字拼音s开头索引字典.txt";
    hanzipinyindict["t"] = "中文汉字拼音t开头索引字典.txt";
    hanzipinyindict["u"] = "中文汉字拼音u开头索引字典.txt";
    hanzipinyindict["v"] = "中文汉字拼音v开头索引字典.txt";
    hanzipinyindict["w"] = "中文汉字拼音w开头索引字典.txt";
    hanzipinyindict["x"] = "中文汉字拼音x开头索引字典.txt";
    hanzipinyindict["y"] = "中文汉字拼音y开头索引字典.txt";
    hanzipinyindict["z"] = "中文汉字拼音z开头索引字典.txt";

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
    apinyindict.insert({ "a","a" });
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
    dpinyindict.insert({ "d","da" });
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
void  中文汉字拼音e开头索引字典() {
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
        cout << "中文汉字拼音h开头索引字典初始化成功" << endl;
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
        cout << "中文汉字拼音j开头索引字典初始化成功" << endl;
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
        cout << "中文汉字拼音k开头索引字典初始化成功" << endl;
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
        cout << "中文汉字拼音l开头索引字典初始化成功" << endl;
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
        cout << "中文汉字拼音m开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音m开头索引字典初始化失败" << endl;
    }

}

//n拼音索引
void 中文汉字拼音n开头索引字典() {
    multimap<string, string>npinyindict;
    npinyindict.insert({ "n","n" });
    npinyindict.insert({ "n","na" });
    npinyindict.insert({ "n","nai" });
    npinyindict.insert({ "n","nan" });
    npinyindict.insert({ "n","nang" });
    npinyindict.insert({ "n","nao" });
    npinyindict.insert({ "n","ne" });
    npinyindict.insert({ "n","nei" });
    npinyindict.insert({ "n","nen" });
    npinyindict.insert({ "n","neng" });
    npinyindict.insert({ "n","ng" });
    npinyindict.insert({ "n","ni" });
    npinyindict.insert({ "n","nian" });
    npinyindict.insert({ "n","niang" });
    npinyindict.insert({ "n","niao" });
    npinyindict.insert({ "n","nie" });
    npinyindict.insert({ "n","nin" });
    npinyindict.insert({ "n","ning" });
    npinyindict.insert({ "n","niu" });
    npinyindict.insert({ "n","nong" });
    npinyindict.insert({ "n","nou" });
    npinyindict.insert({ "n","nu" });
    npinyindict.insert({ "n","nü" });
    npinyindict.insert({ "n","nuan" });
    npinyindict.insert({ "n","nve" });
    npinyindict.insert({ "n","nuo" });

    ofstream file("中文汉字拼音n开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : npinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音n开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音n开头索引字典初始化失败" << endl;
    }

}

//o 拼音索引
void 中文汉字拼音o开头索引字典() {
    multimap<string, string>opinyindict;
    opinyindict.insert({ "o","o" });
    opinyindict.insert({ "o","ou" });

    ofstream file("中文汉字拼音o开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : opinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音o开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音o开头索引字典初始化失败" << endl;
    }
}

//p 拼音索引
void 中文汉字拼音p开头索引字典() {
    multimap<string, string>ppinyindict;
    ppinyindict.insert({ "p","pa" });
    ppinyindict.insert({ "p","pai" });
    ppinyindict.insert({ "p","pan" });
    ppinyindict.insert({ "p","pang" });
    ppinyindict.insert({ "p","pao" });
    ppinyindict.insert({ "p","pei" });
    ppinyindict.insert({ "p","pen" });
    ppinyindict.insert({ "p","peng" });
    ppinyindict.insert({ "p","pi" });
    ppinyindict.insert({ "p","pian" });
    ppinyindict.insert({ "p","piao" });
    ppinyindict.insert({ "p","pie" });
    ppinyindict.insert({ "p","pin" });
    ppinyindict.insert({ "p","ping" });
    ppinyindict.insert({ "p","po" });
    ppinyindict.insert({ "p","pou" });
    ppinyindict.insert({ "p","pu" });

    ofstream file("中文汉字拼音p开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : ppinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音p开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音p开头索引字典初始化失败" << endl;
    }

}

//q 拼音索引
void 中文汉字拼音q开头索引字典() {
    multimap<string, string>qpinyindict;
    qpinyindict.insert({ "q","qi" });
    qpinyindict.insert({ "q","qia" });
    qpinyindict.insert({ "q","qian" });
    qpinyindict.insert({ "q","qiang" });
    qpinyindict.insert({ "q","qiao" });
    qpinyindict.insert({ "q","qie" });
    qpinyindict.insert({ "q","qin" });
    qpinyindict.insert({ "q","qing" });
    qpinyindict.insert({ "q","qiong" });
    qpinyindict.insert({ "q","qiu" });
    qpinyindict.insert({ "q","qu" });
    qpinyindict.insert({ "q","quan" });
    qpinyindict.insert({ "q","que" });
    qpinyindict.insert({ "q","qun" });

    ofstream file("中文汉字拼音q开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : qpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音q开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音q开头索引字典初始化失败" << endl;
    }

}

//r 拼音索引
void 中文汉字拼音r开头索引字典() {
    multimap<string, string>rpinyindict;
    rpinyindict.insert({ "r","ran" });
    rpinyindict.insert({ "r","rang" });
    rpinyindict.insert({ "r","rao" });
    rpinyindict.insert({ "r","re" });
    rpinyindict.insert({ "r","ren" });
    rpinyindict.insert({ "r","reng" });
    rpinyindict.insert({ "r","ri" });
    rpinyindict.insert({ "r","rong" });
    rpinyindict.insert({ "r","rou" });
    rpinyindict.insert({ "r","ru" });
    rpinyindict.insert({ "r","rua" });
    rpinyindict.insert({ "r","ruan" });
    rpinyindict.insert({ "r","rui" });
    rpinyindict.insert({ "r","run" });
    rpinyindict.insert({ "r","ruo" });

    ofstream file("中文汉字拼音r开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : rpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音r开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音r开头索引字典初始化失败" << endl;
    }


}


//s 拼音索引
void 中文汉字拼音s开头索引字典() {
    multimap<string, string>spinyindict;
    spinyindict.insert({ "s","sa" });
    spinyindict.insert({ "s","sai" });
    spinyindict.insert({ "s","san" });
    spinyindict.insert({ "s","sang" });
    spinyindict.insert({ "s","sao" });

    spinyindict.insert({ "s","se" });
    spinyindict.insert({ "s","sen" });
    spinyindict.insert({ "s","seng" });
    spinyindict.insert({ "s","sha" });
    spinyindict.insert({ "s","shai" });

    spinyindict.insert({ "s","shan" });
    spinyindict.insert({ "s","shang" });
    spinyindict.insert({ "s","shao" });
    spinyindict.insert({ "s","she" });
    spinyindict.insert({ "s","shei" });

    spinyindict.insert({ "s","shen" });
    spinyindict.insert({ "s","sheng" });
    spinyindict.insert({ "s","shi" });
    spinyindict.insert({ "s","shou" });
    spinyindict.insert({ "s","shu" });

    spinyindict.insert({ "s","shua" });
    spinyindict.insert({ "s","shuai" });
    spinyindict.insert({ "s","shuan" });
    spinyindict.insert({ "s","shuang" });
    spinyindict.insert({ "s","shui" });

    spinyindict.insert({ "s","shun" });
    spinyindict.insert({ "s","shuo" });
    spinyindict.insert({ "s","si" });
    spinyindict.insert({ "s","song" });
    spinyindict.insert({ "s","sou" });

    spinyindict.insert({ "s","su" });
    spinyindict.insert({ "s","suan" });
    spinyindict.insert({ "s","sui" });
    spinyindict.insert({ "s","sun" });
    spinyindict.insert({ "s","suo" });


    ofstream file("中文汉字拼音s开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : spinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音s开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音s开头索引字典初始化失败" << endl;
    }
}


//t 拼音索引
void 中文汉字拼音t开头索引字典() {
    multimap<string, string>tpinyindict;
    tpinyindict.insert({ "t","ta" });
    tpinyindict.insert({ "t","tai" });
    tpinyindict.insert({ "t","tan" });
    tpinyindict.insert({ "t","tang" });
    tpinyindict.insert({ "t","tao" });

    tpinyindict.insert({ "t","te" });
    tpinyindict.insert({ "t","teng" });
    tpinyindict.insert({ "t","ti" });
    tpinyindict.insert({ "t","tian" });
    tpinyindict.insert({ "t","tiao" });

    tpinyindict.insert({ "t","tie" });
    tpinyindict.insert({ "t","ting" });
    tpinyindict.insert({ "t","tong" });
    tpinyindict.insert({ "t","tou" });
    tpinyindict.insert({ "t","tu" });

    tpinyindict.insert({ "t","tuan" });
    tpinyindict.insert({ "t","tui" });
    tpinyindict.insert({ "t","tun" });
    tpinyindict.insert({ "t","tuo" });

    ofstream file("中文汉字拼音t开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : tpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音t开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音t开头索引字典初始化失败" << endl;
    }
}

//w 拼音索引
void 中文汉字拼音w开头索引字典() {
    multimap<string, string>wpinyindict;
    wpinyindict.insert({ "w","wa" });
    wpinyindict.insert({ "w","wai" });
    wpinyindict.insert({ "w","wan" });
    wpinyindict.insert({ "w","wang" });
    wpinyindict.insert({ "w","wei" });

    wpinyindict.insert({ "w","wen" });
    wpinyindict.insert({ "w","weng" });
    wpinyindict.insert({ "w","wo" });
    wpinyindict.insert({ "w","wu" });

    ofstream file("中文汉字拼音w开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : wpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音w开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音w开头索引字典初始化失败" << endl;
    }
}


//x 拼音索引
void 中文汉字拼音x开头索引字典() {
    multimap<string, string>xpinyindict;
    xpinyindict.insert({ "x","xi" });
    xpinyindict.insert({ "x","xia" });
    xpinyindict.insert({ "x","xian" });
    xpinyindict.insert({ "x","xiang" });
    xpinyindict.insert({ "x","xiao" });

    xpinyindict.insert({ "x","xie" });
    xpinyindict.insert({ "x","xin" });
    xpinyindict.insert({ "x","xing" });
    xpinyindict.insert({ "x","xiong" });
    xpinyindict.insert({ "x","xiu" });

    xpinyindict.insert({ "x","xu" });
    xpinyindict.insert({ "x","xuan" });
    xpinyindict.insert({ "x","xue" });
    xpinyindict.insert({ "x","xun" });


    ofstream file("中文汉字拼音x开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : xpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音x开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音x开头索引字典初始化失败" << endl;
    }

}


//y 拼音索引
void 中文汉字拼音y开头索引字典() {
    multimap<string, string>ypinyindict;
    ypinyindict.insert({ "y","ya" });
    ypinyindict.insert({ "y","yan" });
    ypinyindict.insert({ "y","yang" });
    ypinyindict.insert({ "y","yao" });
    ypinyindict.insert({ "y","ye" });

    ypinyindict.insert({ "y","yi" });
    ypinyindict.insert({ "y","yin" });
    ypinyindict.insert({ "y","ying" });
    ypinyindict.insert({ "y","yo" });
    ypinyindict.insert({ "y","yong" });

    ypinyindict.insert({ "y","you" });
    ypinyindict.insert({ "y","yu" });
    ypinyindict.insert({ "y","yuan" });
    ypinyindict.insert({ "y","yue" });
    ypinyindict.insert({ "y","yun" });


    ofstream file("中文汉字拼音y开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : ypinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音y开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音y开头索引字典初始化失败" << endl;
    }

}

//z 拼音索引
void 中文汉字拼音z开头索引字典() {
    multimap<string, string>zpinyindict;
    zpinyindict.insert({ "z","za" });
    zpinyindict.insert({ "z","zai" });
    zpinyindict.insert({ "z","zan" });
    zpinyindict.insert({ "z","zang" });
    zpinyindict.insert({ "z","zao" });

    zpinyindict.insert({ "z","ze" });
    zpinyindict.insert({ "z","zei" });
    zpinyindict.insert({ "z","zen" });
    zpinyindict.insert({ "z","zeng" });
    zpinyindict.insert({ "z","zha" });

    zpinyindict.insert({ "z","zhai" });
    zpinyindict.insert({ "z","zhan" });
    zpinyindict.insert({ "z","zhang" });
    zpinyindict.insert({ "z","zhao" });
    zpinyindict.insert({ "z","zhe" });

    zpinyindict.insert({ "z","zhei" });
    zpinyindict.insert({ "z","zhen" });
    zpinyindict.insert({ "z","zheng" });
    zpinyindict.insert({ "z","zhi" });
    zpinyindict.insert({ "z","zhong" });

    zpinyindict.insert({ "z","zhou" });
    zpinyindict.insert({ "z","zhu" });
    zpinyindict.insert({ "z","zhua" });
    zpinyindict.insert({ "z","zhuai" });
    zpinyindict.insert({ "z","zhuan" });

    zpinyindict.insert({ "z","zhuang" });
    zpinyindict.insert({ "z","zhui" });
    zpinyindict.insert({ "z","zhun" });
    zpinyindict.insert({ "z","zhuo" });
    zpinyindict.insert({ "z","zi" });

    zpinyindict.insert({ "z","zong" });
    zpinyindict.insert({ "z","zou" });
    zpinyindict.insert({ "z","zu" });
    zpinyindict.insert({ "z","zuan" });

    zpinyindict.insert({ "z","zui" });
    zpinyindict.insert({ "z","zun" });

    zpinyindict.insert({ "z","zuo" });

    ofstream file("中文汉字拼音z开头索引字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : zpinyindict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音z开头索引字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音z开头索引字典初始化失败" << endl;
    }

}


//中文汉字拼音a对应的汉字字典
void 中文汉字拼音a对应的汉字字典() {
    multimap<string, string>aduiyingdict;
    aduiyingdict.insert({ "a1" , "阿" });
    aduiyingdict.insert({ "a1" , "啊" });
    aduiyingdict.insert({ "a1" , "吖" });
    aduiyingdict.insert({ "a1" , "腌" });
    aduiyingdict.insert({ "a1" , "錒" });
    aduiyingdict.insert({ "a1" , "锕" });

    aduiyingdict.insert({ "a2" , "啊" });
    aduiyingdict.insert({ "a2" , "嗄" });

    aduiyingdict.insert({ "a3" , "啊" });

    aduiyingdict.insert({ "a4" , "啊" });

    ofstream file("中文汉字拼音a对应的汉字字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : aduiyingdict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音a对应的汉字字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音a对应的汉字字典初始化失败" << endl;
    }

}


//中文汉字拼音ai对应的汉字字典
void 中文汉字拼音ai对应的汉字字典() {
    multimap<string, string>aiduiyingdict;
    aiduiyingdict.insert({ "ai1" , "挨" });
    aiduiyingdict.insert({ "ai1" , "娭" });
    aiduiyingdict.insert({ "ai1" , "唉" });
    aiduiyingdict.insert({ "ai1" , "嗳" });
    aiduiyingdict.insert({ "ai1" , "埃" });
    aiduiyingdict.insert({ "ai1" , "哎" });

    aiduiyingdict.insert({ "ai1" , "噯" });
    aiduiyingdict.insert({ "ai1" , "哀" });
    aiduiyingdict.insert({ "ai1" , "溾" });
    aiduiyingdict.insert({ "ai1" , "锿" });
    aiduiyingdict.insert({ "ai1" , "諰" });
    aiduiyingdict.insert({ "ai1" , "鎄" });

    ofstream file("中文汉字拼音ai对应的汉字字典.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : aiduiyingdict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "中文汉字拼音ai对应的汉字字典初始化成功" << endl;
    }
    else {
        std::cerr << "中文汉字拼音ai对应的汉字字典初始化失败" << endl;
    }

}
