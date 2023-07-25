#include "分词.h"



void test07返回(string &c字符串引用,long long &num字数引用) {

    char s[1024] = { 0 };
    for (int f = 0; f < c字符串引用.length(); f++) {

        s[f] = c字符串引用[f];

    }
    string t;
    string tm;
    int ecounts = 0;
    long long time = 0;
    for (int i = 0; i < sizeof(s); i++) {
        if (s[i] >= 0 && s[i] <= 127) //不是全角字符
        {
            // s[i] = ' ';
             //cout << s[i] << endl;
            tm += s[i];
            ecounts++;
        }

        else time++;
        t += s[i];
    }

    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s < 127; }), t.end());
    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s == 32; }), t.end());
    ;//英文去空格
    //tm.erase(remove_if(tm.begin(), tm.end(), [](char s) { return (unsigned char)s == 32; }), tm.end());

    cout << "test07你输入的英文有: " << tm << endl;
    cout << "test07 英文个数是" << ecounts << endl;
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
    num字数引用 = time / 2;
    c字符串引用 = t;
}

/*
string 读取文件查找内容(string chastr) {
    ifstream ifile("分词用的词语.txt");    // 打开一个文件进行读取操作
    multimap<string, string>cizudict;
    string line;
    while (getline(ifile, line)) {

        size_t pos = line.find(" ");
        if (pos != string::npos) {
            string key = line.substr(0, pos);
            string value = line.substr(pos + 1);
            cizudict.insert({ key,value });
        }
    }
    auto it = cizudict.find(chastr);
    if (it != cizudict.end()) {
        string resultcixing = it->second;
        if (resultcixing == "a") { resultcixing = "形容词"; }
        else
            if (resultcixing == "ad") { resultcixing = "副形词"; }
            else
                if (resultcixing == "b") { resultcixing = "区别词"; }
                else
                    if (resultcixing == "c") { resultcixing = "连词"; }
                    else
                        if (resultcixing == "d") { resultcixing = "副词"; }
                        else
                            if (resultcixing == "e") { resultcixing = "叹词"; }
                            else
                                if (resultcixing == "f") { resultcixing = "方位词"; }
                                else
                                    if (resultcixing == "i") { resultcixing = "成语"; }
                                    else
                                        if (resultcixing == "j") { resultcixing = "字母缩写"; }
                                        else
                                            if (resultcixing == "m") { resultcixing = "数词"; }
                                            else
                                                if (resultcixing == "n") { resultcixing = "普通名词"; }
                                                else
                                                    if (resultcixing == "nr") { resultcixing = "人名"; }
                                                    else
                                                        if (resultcixing == "ns") { resultcixing = "地名"; }
                                                        else
                                                            if (resultcixing == "nt") { resultcixing = "机构团体名"; }
                                                            else
                                                                if (resultcixing == "nz") { resultcixing = "其他专名"; }
                                                                else
                                                                    if (resultcixing == "o") { resultcixing = "拟声词"; }
                                                                    else
                                                                        if (resultcixing == "p") { resultcixing = "介词"; }
                                                                        else
                                                                            if (resultcixing == "q") { resultcixing = "量词 "; }
                                                                            else
                                                                                if (resultcixing == "r") { resultcixing = "代词"; }
                                                                                else
                                                                                    if (resultcixing == "s") { resultcixing = "处所词"; }
                                                                                    else
                                                                                        if (resultcixing == "t") { resultcixing = "时间词"; }
                                                                                        else
                                                                                            if (resultcixing == "u") { resultcixing = "助词"; }
                                                                                            else
                                                                                                if (resultcixing == "v") { resultcixing = "动词"; }
                                                                                                else
                                                                                                    if (resultcixing == "w") { resultcixing = "标点符号"; }
                                                                                                    else
                                                                                                        if (resultcixing == "x") { resultcixing = "非语素字"; }
                                                                                                        else
                                                                                                            if (resultcixing == "y") { resultcixing = "语气词"; }
                                                                                                            else
                                                                                                                if (resultcixing == "z") { resultcixing = "状态词"; }
                                                                                                                else
                                                                                                                {
                                                                                                                    resultcixing = "其他词性";
                                                                                                                }

        //return "->是词组->'" + resultcixing + "\'\t\n";
        //return "是词组";
        return resultcixing;
    }
    else {
        //return "->不是词组\'\t\n";
        return "不是词组";
    }
    
}
*/


string 读取文件查找内容(string chastr) {
    ifstream ifile("分词用的词语.txt");    // 打开一个文件进行读取操作
    multimap<string, string> cizudict;
    string line;
    while (getline(ifile, line)) {

        size_t pos = line.find(" ");
        if (pos != string::npos) {
            string key = line.substr(0, pos);
            string value = line.substr(pos + 1);
            cizudict.insert({ key,value });
        }
    }
    auto it = cizudict.find(chastr);
    if (it != cizudict.end()) {
        if (it->first== chastr) {

       
        string resultcixing = it->second;
        if (resultcixing == "a") { resultcixing = "形容词"; }
        else if (resultcixing == "ad") { resultcixing = "副形词"; }
        else if (resultcixing == "b") { resultcixing = "区别词"; }
        else if (resultcixing == "c") { resultcixing = "连词"; }
        else if (resultcixing == "d") { resultcixing = "副词"; }
        else if (resultcixing == "e") { resultcixing = "叹词"; }
        else if (resultcixing == "f") { resultcixing = "方位词"; }
        else if (resultcixing == "i") { resultcixing = "成语"; }
        else if (resultcixing == "j") { resultcixing = "简称略语"; }
        else if (resultcixing == "k") { resultcixing = "后缀"; }
        else if (resultcixing == "l") { resultcixing = "习用语"; }
        else if (resultcixing == "m") { resultcixing = "数词"; }
        else if (resultcixing == "mq") { resultcixing = "数量词"; }
        else if (resultcixing == "n") { resultcixing = "名词"; }
        else if (resultcixing == "nr") { resultcixing = "人名"; }
        else if (resultcixing == "ns") { resultcixing = "地名"; }
        else if (resultcixing == "nt") { resultcixing = "机构团体名"; }
        else if (resultcixing == "nz") { resultcixing = "其它专名"; }
        else if (resultcixing == "o") { resultcixing = "拟声词"; }
        else if (resultcixing == "p") { resultcixing = "介词"; }
        else if (resultcixing == "q") { resultcixing = "量词"; }
        else if (resultcixing == "r") { resultcixing = "代词"; }
        else if (resultcixing == "s") { resultcixing = "处所词"; }
        else if (resultcixing == "t") { resultcixing = "时间词"; }
        else if (resultcixing == "tg") { resultcixing = "时语素"; }
        else if (resultcixing == "U") { resultcixing = "网址URL"; }
        else if (resultcixing == "ug") { resultcixing = "句末语气词"; }
        else if (resultcixing == "uj") { resultcixing = "助词"; }
        else if (resultcixing == "ul") { resultcixing = "时态助词"; }
        else if (resultcixing == "uv") { resultcixing = "连词"; }
        else if (resultcixing == "uz") { resultcixing = "语气词"; }
        else if (resultcixing == "v") { resultcixing = "动词"; }
        else if (resultcixing == "vd") { resultcixing = "副动词"; }
        else if (resultcixing == "vi") { resultcixing = "不及物动词"; }
        else if (resultcixing == "vn") { resultcixing = "名动词"; }
        else if (resultcixing == "w") { resultcixing = "标点符号"; }
        else if (resultcixing == "x") { resultcixing = "非语素字"; }
        else if (resultcixing == "y") { resultcixing = "语气词"; }
        else if (resultcixing == "z") { resultcixing = "状态词"; }
        else { resultcixing = "其他词性"; }

        return resultcixing;
        }
    }
    else {
        return "不是词组";
    }

}


void 分词(string str) {
    //初期循环判断一句话是否是成语，进行4个字一组进行判断，每个字进行循环，最终找出句子中的成语词语并进行成语形式分词出来
    //成语判断之后进行姓名方式判断，如果有百家姓存在，则有可能是姓名，给与姓名方式的结果可能显示出来一个结果
    //成语和姓名都分词好后，进行词组的判断，如有词组则按照词组的形式进行分词显示
    //自定义名词 判断
    //固定名词判断
    //网络新闻事件名词判断
    //属性关联判断是否是词组的可能性
    //全部排除后 按照可能的结果进行输出
    //int 字符串的长度 = str.length();
    //int len = 17;
    /*
    if (str.length() < 17) {
        len = static_cast<int>(str.length());
    }
    for (int length = 1; length < ; length++) {
        if (length == 2) {

            for (int i = 0; i < str.length(); i += length) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout<< "["+stri+"]" <<"--------"+ 读取文件查找内容(stri);
            }

        }
        else if (length == 4) {

            for (int i = 0; i < str.length(); i += length - 2) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << 读取文件查找内容(stri);
            }

        }
        else if (length == 6) {

            for (int i = 0; i < str.length(); i += length - 4) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << 读取文件查找内容(stri);
            }

        }
        else if (length == 8) {

            for (int i = 0; i < str.length(); i += length - 6) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << 读取文件查找内容(stri);
            }

        }
        else if (length == 10) {

            for (int i = 0; i < str.length(); i += length - 8) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << 读取文件查找内容(stri);
            }

        }
        else if (length == 12) {

            for (int i = 0; i < str.length(); i += length - 10) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << 读取文件查找内容(stri);
            }

        }
        else if (length == 14) {

            for (int i = 0; i < str.length(); i += length - 12) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << 读取文件查找内容(stri);
            }

        }
        else if (length == 16) {

            for (int i = 0; i < str.length(); i += length - 14) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                cout << stri << 读取文件查找内容(stri);
            }

        }

        else {
            cout << "1" << endl;
        }
    }*/


    /*

    //修改
    int len = 17;
    if (str.length() < 17) {
        len = static_cast<int>(str.length());
    }
    for (int length = str.length(); length > 1; length--) {
        if (length == 16) {

            for (int i = str.length(); i > -1; i -= length - 14) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);

                if(读取文件查找内容(stri)== "是词组"){
                cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                cout << "[" + stri + "]" << "--------" << "所在位置为" << i <<","<< length << endl;
                cout << "[" + stri + "]" << "--------" << "两字词组" << endl;
                }
            }

        }
        else if (length == 14) {

            for (int i = str.length(); i > -1; i -= length - 12) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) == "是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "两字词组" << endl;
                }
            }

        }
        else if (length == 12) {

            for (int i = str.length(); i > -1; i -= length - 10) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) == "是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "两字词组" << endl;
                }
            }

        }
        else if (length == 10) {

            for (int i = str.length(); i > -1; i -= length - 8) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) == "是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "两字词组" << endl;
                }
            }

        }
        else if (length == 8) {

            for (int i = str.length(); i > -1; i -= length - 6) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) == "是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "两字词组" << endl;
                }
            }

        }
        else if (length == 6) {

            for (int i = str.length(); i > -1; i -= length - 4) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) == "是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" << "两字词组" << endl;
                }
            }

        }
        else if (length == 4) {

            for (int i = str.length(); i > -1; i -= length - 2) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) == "是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    cout << "[" + stri + "]" << "--------" <<"两字词组" << endl;
                }
            }

        }
        else {
            cout << "1" << endl;
        }
        */


        //123
      /*隐藏输出开头的注释  调试可开启*/
        //再修改
    map<string, int>fencizancundict;
    map<string, string>fencizancuncixingdict;
    multimap<int, string>zlfencizancuncixingdict;
    multimap<int, int>strend;
    map<int, int>strendmaptest;
    multimap<int, string>endstr;
    vector<std::tuple<string, int, string> > vtp;
    int len = 17;
    string 整理好的内容;
    string 整理好的内容对应的开始位置;
    int 开始位置 = 0;
    string 整理好的内容和位置范围;
    string 整理好的内容位置和个数;
    if (str.length() < 17) {
        len = static_cast<int>(str.length());
    }
    for (int length = static_cast<int>(str.length()); length > 1; length--) {
        if (length == 16) {

            //for (int i = str.length(); i > -1; i -= length - 14) {
            for (int i = 0; i < str.length(); i += length - 14) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);

                if (读取文件查找内容(stri) != "不是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                        cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;
                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        //整理好的内容位置和个数+= "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")"+"个数:"+to_string(static_cast<int>(str.length())) + "字词组";

                        //判断是否存在
                        /*
                        for (auto& [key, value] : fencizancundict) {
                            auto it = fencizancundict.find(stri);
                            if (it != fencizancundict.end()) {  // 已经存在该值
                                if ((stri.length() / 2) > key.length()) {  // 新key长度更长
                                    fencizancundict.erase(it);  // 先删除旧的键值对
                                    fencizancundict.insert(pair<string, int>(stri, i));  // 插入新的键值对
                                }
                            }
                            else {  // 不存在该值
                                fencizancundict.insert(pair<string, int>(stri, i));  // 直接插入新的键值对
                            }
                        }
                        */
                       
                        fencizancundict[stri] = i;
                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                    }
                }
            }

        }
        else if (length == 14) {

            //for (int i = str.length(); i > -1; i -= length - 12) {
            for (int i = 0; i < str.length(); i += length - 12) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) != "不是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        //整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                        fencizancundict[stri] = i;
                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri});
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));

                                    strendmaptest[i] = i + stri.length();

                    }
                }
            }

        }
        else if (length == 12) {

            //for (int i = str.length(); i > -1; i -= length - 10) {
            for (int i = 0; i < str.length(); i += length - 10) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) != "不是词组") {
                     cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        //整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";



                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        
                        
                        
                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });


                        
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                    strendmaptest[i] = i + stri.length();
                         

                        
                    }
                }
            }

        }
        else if (length == 10) {

            //for (int i = str.length(); i > -1; i -= length - 8) {
            for (int i = 0; i < str.length(); i += length - 8) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) != "不是词组") {
                     cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                    strendmaptest[i] = i + stri.length();
                    }
                }
            }

        }
        else if (length == 8) {

            //for (int i = str.length(); i > -1; i -= length - 6) {
            for (int i = 0; i < str.length(); i += length - 6) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) != "不是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                     cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;
                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";
                       
                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                        
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                }
            }

        }
        else if (length == 6) {

            //for (int i = str.length(); i > -1; i -= length - 4) {
            for (int i = 0; i < str.length(); i += length - 4) {
                cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) != "不是词组") {
                     cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                           cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });

                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });

                        
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                }
            }

        }
        else if (length == 4) {

            //for (int i = str.length(); i > -1; i -= length - 2) {
            for (int i = 0; i < str.length(); i += length - 2) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) != "不是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                        cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });

                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                    strendmaptest[i] = i + stri.length();
                      
                    }
                }
            }

        }
        else if (length == 2) {

            //for (int i = str.length(); i > -1; i -= length) {
            for (int i = 0; i < str.length(); i += length) {
                 cout << str.substr(i, length) << endl;
                string stri = str.substr(i, length);
                //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                if (读取文件查找内容(stri) != "不是词组") {
                    cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                    cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                    if (length > 2) {

                         cout << "[" + stri + "]" << "--------" << "是单个字" << endl;

                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";
                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });

                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                    else {
                          cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "单个汉字" << endl;

                        整理好的内容 += "[" + stri + "]";
                        //开始位置 += i;
                        整理好的内容对应的开始位置 += "[" + stri + "]" + "开始位置为：" + to_string(i);
                        整理好的内容和位置范围 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                        整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "单个汉字";

                        strend.insert({ i,i + stri.length() });
                        endstr.insert({ i + stri.length(),stri });
                        /*
                        for (auto const& [key, value] : fencizancundict) {
                            auto it = fencizancundict.find(stri);
                            if (it != fencizancundict.end()) {
                                if (static_cast<int>(stri.length()) < static_cast<int>(it->first.length())) {
                                    break;
                                }
                            }
                            else if (key.compare(stri) == 0) {
                                break;
                            }
                            else if (i == value) {
                                break;
                            }
                            else {
                                fencizancundict[stri] = i;
                            }
                        }
                        */
                        fencizancuncixingdict[stri] = 读取文件查找内容(stri);
                        zlfencizancuncixingdict.insert({ i,stri });
                       
                                    vtp.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                    strendmaptest[i] = i + stri.length();
                       
                    }
                }
            }
        }
        else {
            /*隐藏输出*/// cout << "1" << endl;
        }
        


    }
                    cout << endl;
                    cout << "分隔符======================开始=" << endl;
                    cout << endl;
                    cout << "整理好的内容-------->" << 整理好的内容 << endl;
                    cout << endl;
                     cout << "开始位置-------->" << 开始位置 << endl;
                     cout << endl;

                     cout << "整理好的内容对应的开始位置-------->" << 整理好的内容对应的开始位置 << endl;
                    cout << endl;
                        cout << "整理好的内容和位置范围-------->" << 整理好的内容和位置范围 << endl;
                     cout << endl;
                    cout << "整理好的内容位置和个数-------->" << 整理好的内容位置和个数 << endl;
                    cout << endl;
                    cout << "分隔符=======================结束" << endl;
                    cout << endl;
                    cout << endl;
                    cout << "分隔符*^^^^^^^^^^^^^^^^^^^^^^^^^*开始" << endl;
                    cout << endl;
    auto iter = zlfencizancuncixingdict.begin();
    int prev_key = iter->first;
    string prev_value = iter->second;
    for (; iter != zlfencizancuncixingdict.end(); ++iter) {
        // 获取当前键值对的key和value
        int curr_key = iter->first;
        string value = iter->second;

        // 判断当前key是否与前一个key相同
        if (curr_key == prev_key) {
            if (prev_value.length() > value.length()) {
                value = prev_value;
            }
            else {
                prev_value = value;
            }
        }
    }
        for (auto const& pair : zlfencizancuncixingdict) {

                cout << "key:" << pair.first << "value:" << pair.second << endl;

        }


             cout << endl;
                cout << "分隔符*^^^^^^^^^^^^^^^^^^^^^^^^^*结束" << endl;
                cout << endl;
                //strend.insert({ i,i + stri.length() });
                //endstr.insert({ i + stri.length(),stri });
                for (auto const& pair : strend) {

                    cout << "strendkey:" << pair.first << "strendvalue:" << pair.second << endl;

                }
                cout << "分隔符*^^^^^^^^^strendmaptest^^^^^^^^^^^^^^^^*开始" << endl;
                for (auto const& pair : strendmaptest) {

                    cout << "strendmaptestkey:" << pair.first << "strendmaptestvalue:" << pair.second << endl;

                }
                cout << "分隔符*^^^^^^^^^strendmaptest^^^^^^^^^^^^^^^^*结束" << endl;
                for (auto const& pair : endstr) {

                    cout << "endstrkey:" << pair.first << "endstrvalue:" << pair.second << endl;

                }
                cout << endl;
                 cout << "分隔符++++++++++++++++++++结束" << endl;
                 cout << endl;
        
        
        map<string,int>strstrlen;
        map<string,int>newfencizancundict;

        vector<std::tuple<string, int, string> > vsp;
        for (auto const& pair : fencizancundict) {
            
           /* cout << "vtp  0000000000 开始" << endl;
            for (int i = 0; i < vtp.size(); i++) {
                string t1 = get<0>(vtp[i]);
                cout << "第一个元素" << t1 << endl;

                int t2 = get<1>(vtp[i]);
                cout << "第二个元素" << t2 << endl;

                string t3 = get<2>(vtp[i]);
                cout << "第三个元素" << t3 << endl;

                if (t2 == pair.second) {
                    if (t1.length()> pair.first.length()) {
                        vsp.push_back(make_tuple(t1, t2,t3));

                        newfencizancundict[pair.first] = pair.second;
                        cout << "最新-》key:" << pair.first << endl;
                        cout << "最新-》value:" << pair.second << endl;
                    }
                   
                }

            }*/


            cout << "vtp000000000000结束" << endl;
            cout << "全部-》key:" << pair.first << endl;
           cout << "全部-》value:" << pair.second << endl; 
            
            cout << "全部key~~~~~~~~~~~~全部value" << endl;
        }




             cout << "pairlenkey~~~~~~~~~~~~pairlenvalue" << endl;
        for (auto const& pairlen : strstrlen) {
            cout << "pairlen->key:" << pairlen.first<< endl;
             cout << "pairlen->value:" << pairlen.second << endl;
        }
        
        //vector<std::pair<string, int>> ov(strstrlen.begin(), strstrlen.end());
        //auto maxPair = max_element(ov.begin(), ov.end());
        
        //cout << "The pair with the maximum length is "<< maxPair->first<< maxPair->second<< endl;

        
        vector<std::pair<std::string, int>> v(newfencizancundict.begin(), newfencizancundict.end());
        //v.emplace_back(maxPair->first, maxPair->second);
        sort(v.begin(), v.end(), [](std::pair<std::string, int>& a, std::pair<std::string, int>& b) {
            return a.second < b.second;
            });
        cout << endl;
        cout << "分词开始" << endl;
        for (auto& [key, value] : v)
        {
            std::cout << key << ": " << value << std::endl;
            cout << "分词分割线" << endl;
            auto iitt = fencizancuncixingdict.find(key);
            if (iitt != fencizancuncixingdict.end()) {
                cout << iitt->first << "00000--->" << iitt->second << std::endl;
            }
        }
             cout << endl;
        cout << "分词结束" << endl;
             cout << endl;
        


             cout <<"////////////////////////////////////正序和倒序排列对比，上面为倒序，下面为正序////////////////////////////////////"<< endl;

//////////////////在起个地方//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

             map<int,int>strendmaptesttoo;
             
             map<string, int>fencizancundicttoo;
             map<string, string>fencizancuncixingdicttoo;
             multimap<int, string>zlfencizancuncixingdicttoo;
             multimap<int, int>strendtoo;
            
             multimap<int, string>endstrtoo;
             map<int, string>mapendstrtoo;
             vector<std::tuple<string, int, string> > vtptoo;
             int lentoo = 17;
             string 整理好的内容too;
             string 整理好的内容对应的开始位置too;
             int 开始位置too = 0;
             string 整理好的内容和位置范围too;
             string 整理好的内容位置和个数too;


             for (int length =0 ; length < str.length(); length++) {
                 if (length == 16) {

                     //for (int i = str.length(); i > -1; i -= length - 14) {
                     for (int i = 0; i < str.length(); i += length - 14) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);

                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;
                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 //整理好的内容位置和个数too+= "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")"+"个数:"+to_string(static_cast<int>(str.length())) + "字词组";

                                 //判断是否存在
                                 /*
                                 for (auto& [key, value] : fencizancundict) {
                                     auto it = fencizancundict.find(stri);
                                     if (it != fencizancundict.end()) {  // 已经存在该值
                                         if ((stri.length() / 2) > key.length()) {  // 新key长度更长
                                             fencizancundict.erase(it);  // 先删除旧的键值对
                                             fencizancundict.insert(pair<string, int>(stri, i));  // 插入新的键值对
                                         }
                                     }
                                     else {  // 不存在该值
                                         fencizancundict.insert(pair<string, int>(stri, i));  // 直接插入新的键值对
                                     }
                                 }
                                 */
                                 fencizancundicttoo[stri] = i;
                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });
                                 strendmaptesttoo[i] = i+stri.length();
                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 14) {

                     //for (int i = str.length(); i > -1; i -= length - 12) {
                     for (int i = 0; i < str.length(); i += length - 12) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 //整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                                 fencizancundicttoo[stri] = i;
                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });
                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));

                                 strendmaptesttoo[i] = i + stri.length();
                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 12) {

                     //for (int i = str.length(); i > -1; i -= length - 10) {
                     for (int i = 0; i < str.length(); i += length - 10) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 //整理好的内容位置和个数 += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";



                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });



                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });



                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;


                             }
                         }
                     }

                 }
                 else if (length == 10) {

                     //for (int i = str.length(); i > -1; i -= length - 8) {
                     for (int i = 0; i < str.length(); i += length - 8) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 整理好的内容位置和个数too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 8) {

                     //for (int i = str.length(); i > -1; i -= length - 6) {
                     for (int i = 0; i < str.length(); i += length - 6) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;
                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 整理好的内容位置和个数too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;
                             }
                         }
                     }

                 }
                 else if (length == 6) {

                     //for (int i = str.length(); i > -1; i -= length - 4) {
                     for (int i = 0; i < str.length(); i += length - 4) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 整理好的内容位置和个数too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });

                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });


                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                         }
                     }

                 }
                 else if (length == 4) {

                     //for (int i = str.length(); i > -1; i -= length - 2) {
                     for (int i = 0; i < str.length(); i += length - 2) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "字词组分词方式" << "是" << stri.length() / 2 << "字词组" << endl;

                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 整理好的内容位置和个数too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });

                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                         }
                     }

                 }
                 else if (length == 2) {

                     //for (int i = str.length(); i > -1; i -= length) {
                     for (int i = 0; i < str.length(); i += length) {
                         cout << str.substr(i, length) << endl;
                         string stri = str.substr(i, length);
                         //cout << "[" + stri + "]" << "--------" + 读取文件查找内容(stri) << endl;;
                         if (读取文件查找内容(stri) != "不是词组") {
                             cout << "[" + stri + "]" << "--------=========--------" + 读取文件查找内容(stri) << endl;
                             cout << "[" + stri + "]" << "--------" << "所在位置为" << i << "," << length << endl;
                             if (length > 2) {

                                 cout << "[" + stri + "]" << "--------" << "是单个字" << endl;

                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 整理好的内容位置和个数too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "字词组";
                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });

                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                 strendmaptesttoo[i] = i + stri.length();
                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                             else {
                                 cout << "[" + stri + "]" << "--------" << "是" << length / 2 << "单个汉字" << endl;

                                 整理好的内容too += "[" + stri + "]";
                                 //开始位置 += i;
                                 整理好的内容对应的开始位置too += "[" + stri + "]" + "开始位置为：" + to_string(i);
                                 整理好的内容和位置范围too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")";
                                 整理好的内容位置和个数too += "[" + stri + "]" + "所在位置为：" + "（" + to_string(i) + "," + to_string(length) + ")" + "个数:" + to_string(static_cast<int>(str.length())) + "单个汉字";

                                 strendtoo.insert({ i,i + stri.length() });
                                 endstrtoo.insert({ i + stri.length(),stri });
                                 /*
                                 for (auto const& [key, value] : fencizancundict) {
                                     auto it = fencizancundict.find(stri);
                                     if (it != fencizancundict.end()) {
                                         if (static_cast<int>(stri.length()) < static_cast<int>(it->first.length())) {
                                             break;
                                         }
                                     }
                                     else if (key.compare(stri) == 0) {
                                         break;
                                     }
                                     else if (i == value) {
                                         break;
                                     }
                                     else {
                                         fencizancundict[stri] = i;
                                     }
                                 }
                                 */
                                 fencizancuncixingdicttoo[stri] = 读取文件查找内容(stri);
                                 zlfencizancuncixingdicttoo.insert({ i,stri });

                                 vtptoo.push_back(make_tuple(stri, i, 读取文件查找内容(stri)));
                                 strendmaptesttoo[i] = i + stri.length();

                                 mapendstrtoo[i + stri.length()] = stri;

                             }
                         }
                     }
                 }
                 else {
                     /*隐藏输出*/// cout << "1" << endl;
                 }


             }


             cout << "分隔符*^^^^^^^^^strendtoo^^^^^^^^^^^^^^^^*开始" << endl;

             for (auto const& pair : strendtoo) {

                 cout << "strendtookey:" << pair.first << "strendtoovalue:" << pair.second << endl;

             }
             cout << "分隔符*^^^^^^^^^strendmaptesttoo^^^^^^^^^^^^^^^^*开始" << endl;
             for (auto const& pair : strendmaptesttoo) {

                 cout << "strendmaptestkey:" << pair.first << "strendmaptestvalue:" << pair.second << endl;

             }
             cout << "分隔符*^^^^^^^^^strendmaptesttoo^^^^^^^^^^^^^^^^*结束" << endl;
             for (auto const& pair : endstrtoo) {

                 cout << "endstrkey:" << pair.first << "endstrvalue:" << pair.second << endl;

             }

             cout << "分隔符*^^^^^^^^^endstrtoo^^^^^^^^^^^^^^^^*结束" << endl;

             map<int, int>cunzhidict,cunkeydict;
             
             int chushizhi = 0; int chushikey = 0;
             while (strendmaptesttoo.find(chushizhi)!= strendmaptesttoo.end()) {

                 cunkeydict[chushizhi] = cunzhidict[chushizhi];
                 cunzhidict[cunzhidict[chushizhi]] = 0;
                 
                 chushizhi = strendmaptesttoo[chushizhi];
                 chushikey += 1;
             }
             if(!strendmaptesttoo.empty()){
             
                 auto lastltor = strendmaptesttoo.end();
                 lastltor--;
                 cunzhidict[lastltor->second] = 0;
                 cout << "lastltor->second" << lastltor->second << std::endl;
             }
           
            
                 // 输出找到的键和值
             std::cout << "\nFound keys:\n";
             for (const auto& p : cunkeydict) {
                 std::cout << p.first << " -> " << p.second << std::endl;
             }
             std::cout << "\nFound values:\n";
             for (const auto& p : cunzhidict) {
                 auto it = endstrtoo.find(p.first);
                 if (it != endstrtoo.end()) {
                     cout << it->second<<endl;
                 }
                 std::cout << p.first << std::endl;
             }

             std::cout << "\nmapendstrtoo[i + stri.length()] = stri;:\n"; 
             for (const auto& p : mapendstrtoo) {
                 auto it = mapendstrtoo.find(p.first);
                 if (it != mapendstrtoo.end()) {
                     cout << it->second << endl;
                 }
                 std::cout << p.first << std::endl;
             }
             std::cout << "\nFound values+mapendstrtoo:\n";
             for (const auto& p : cunzhidict) {
                 auto it = mapendstrtoo.find(p.first);
                 if (it != mapendstrtoo.end()) {
                     cout << it->second << endl;

                     //高粒度分词写入文本中
                     ofstream file(str + "高粒度分词文本.txt", ios::app ); // 打开一个文件进行写入操作
                     if (file.is_open()) { // 如果文件成功打开
                         
                             file << it->second << endl; // 将键值对写入文件中
                        
                         file.close(); // 关闭文件
                         cout << "高粒度分词写入文本中成功" << endl;
                     }
                     else {
                         std::cerr << "高粒度分词写入文本中失败" << endl;
                     }
                     
                     //高粒度分词写入文本中
                 }
                 std::cout << p.first << std::endl;

                 //高粒度分词位置写入文本中
                 ofstream file(str+"高粒度分词位置文本.txt"  , ios::app); // 打开一个文件进行写入操作
                 if (file.is_open()) { // 如果文件成功打开

                     file << p.first << endl; // 将键值对写入文件中

                     file.close(); // 关闭文件
                     cout << "高粒度分词位置写入文本中成功" << endl;
                 }
                 else {
                     std::cerr << "高粒度分词位置写入文本中失败" << endl;
                 }

                 //高粒度分词长度写入文本中
             }
             std::cout << "\nFound values+mapendstrtoo+fencizancuncixingdicttoo:\n";
             
                 for (const auto& p : cunzhidict) {
                     auto it = mapendstrtoo.find(p.first);
                     if (it != mapendstrtoo.end()) {
                         cout << it->second << endl;
                         auto itor = fencizancuncixingdicttoo.find(it->second);
                         if (it != mapendstrtoo.end()) {
                             cout << itor->second << endl;

                             //高粒度分词词性写入文本中
                             ofstream file(str + "高粒度分词词性文本.txt",ios::app); // 打开一个文件进行写入操作
                             if (file.is_open()) { // 如果文件成功打开

                                 file << itor->second << endl; // 将键值对写入文件中

                                 file.close(); // 关闭文件
                                 cout << "高粒度分词词性写入文本中成功" << endl;
                             }
                             else {
                                 std::cerr << "高粒度分词词性写入文本中失败" << endl;
                             }

                             //高粒度分词词性写入文本中
                         }
                     }
                     std::cout << p.first << std::endl;
                 }
               

        /*
            int count = 0;
            int length = 0;

            while (count < 8) {
                switch (count) {
                case 0:
                    length = 2;
                    for (int i = 0; i < str.length(); i += length) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 1:
                    length = 4;
                    for (int i = 0; i < str.length(); i += length - 2) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 2:
                    length = 6;
                    for (int i = 0; i < str.length(); i += length - 4) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 3:
                    length = 8;
                    for (int i = 0; i < str.length(); i += length - 6) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 4:
                    length = 10;
                    for (int i = 0; i < str.length(); i += length - 8) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 5:
                    length = 10;
                    for (int i = 0; i < str.length(); i += length - 10) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 6:
                    length = 12;
                    for (int i = 0; i < str.length(); i += length - 12) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                case 7:
                    length = 14;
                    for (int i = 0; i < str.length(); i += length - 14) {
                        cout << str.substr(i, length) << endl;
                    }
                    break;
                default:
                    break;
                }
                count++;
                cout << "length = " << length << endl;
            }

        */
    }

