﻿#include "汉字的内容字典.h"
//下面做单个汉字的内容字典，内容基本包括字典中的内容，其次是自己需要的内容，然后后期需要的话，可以在更新这个方法再后面添加属性
// 暂时先不做到类或者结构体中吧，先把数据完善，后期看看需求情况在说


//一画常用汉字字典
void 一字() {
    multimap<string, string>yi1hanzidict;
    yi1hanzidict.insert({ "拼音","yi1" });
    yi1hanzidict.insert({ "大写","壹" });
    yi1hanzidict.insert({ "笔画","1" });
    yi1hanzidict.insert({ "部首","一" });
    yi1hanzidict.insert({ "名称","横" });
    yi1hanzidict.insert({ "五笔","GGLL" });

    yi1hanzidict.insert({ "英语","4" });
    yi1hanzidict.insert({ "英语1","one" });
    yi1hanzidict.insert({ "英语2","a" });
    yi1hanzidict.insert({ "英语3","an" });
    yi1hanzidict.insert({ "英语4","alone" });



    yi1hanzidict.insert({ "基本解释","12" });
    yi1hanzidict.insert({ "基本解释1","数词，最小的正整数。" });
    yi1hanzidict.insert({ "基本解释2","同一；一样。如：形状不一。" });
    yi1hanzidict.insert({ "基本解释3","满；全。如：一身汗。" });
    yi1hanzidict.insert({ "基本解释4","统一" });
    yi1hanzidict.insert({ "基本解释5","专一" });
    yi1hanzidict.insert({ "基本解释6","一概；都" });
    yi1hanzidict.insert({ "基本解释7","表示一次或短暂" });
    yi1hanzidict.insert({ "基本解释8","才" });
    yi1hanzidict.insert({ "基本解释9","一旦" });
    yi1hanzidict.insert({ "基本解释10","另一；又" });
    yi1hanzidict.insert({ "基本解释11","每" });
    yi1hanzidict.insert({ "基本解释12","作语助" });


    yi1hanzidict.insert({ "组词","一天" });
    yi1hanzidict.insert({ "组词","一日" });
    yi1hanzidict.insert({ "组词","一些" });
    yi1hanzidict.insert({ "组词","一定" });
    yi1hanzidict.insert({ "组词","一起" });
    yi1hanzidict.insert({ "组词","一直" });
    yi1hanzidict.insert({ "组词","一样" });
    yi1hanzidict.insert({ "组词","一般" });
    yi1hanzidict.insert({ "组词","一下" });
    yi1hanzidict.insert({ "组词","一切" });
    yi1hanzidict.insert({ "组词","统一" });
    yi1hanzidict.insert({ "组词","一旦" });
    yi1hanzidict.insert({ "组词","一体" });
    yi1hanzidict.insert({ "组词","一线" });
    yi1hanzidict.insert({ "组词","唯一" });
    yi1hanzidict.insert({ "组词","一致" });
    yi1hanzidict.insert({ "组词","一代" });
    yi1hanzidict.insert({ "组词","一边" });
    yi1hanzidict.insert({ "组词","十一" });
    yi1hanzidict.insert({ "组词","同一" });
    yi1hanzidict.insert({ "组词","一生" });
    yi1hanzidict.insert({ "组词","一半" });
    yi1hanzidict.insert({ "组词","一块" });
    yi1hanzidict.insert({ "组词","一带" });
    yi1hanzidict.insert({ "组词","一度" });
    yi1hanzidict.insert({ "组词","一道" });
    yi1hanzidict.insert({ "组词","一周" });
    yi1hanzidict.insert({ "组词","一期" });
    yi1hanzidict.insert({ "组词","一支" });
    yi1hanzidict.insert({ "组词","一番" });
    yi1hanzidict.insert({ "组词","一篇" });
    yi1hanzidict.insert({ "组词","单一" });
    yi1hanzidict.insert({ "组词","一身" });
    yi1hanzidict.insert({ "组词","一两" });
    yi1hanzidict.insert({ "组词","一流" });
    yi1hanzidict.insert({ "组词","一手" });
    yi1hanzidict.insert({ "组词","一百" });
    yi1hanzidict.insert({ "组词","一刻" });
    yi1hanzidict.insert({ "组词","一经" });
    yi1hanzidict.insert({ "组词","一类" });




    ofstream file("一字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : yi1hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字一字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字一字初始化失败" << endl;
    }
}


void 乙字() {
    multimap<string, string>yi3hanzidict;
    yi3hanzidict.insert({ "拼音","yi3" });
    yi3hanzidict.insert({ "繁体","乙" });
    yi3hanzidict.insert({ "笔画","1" });
    yi3hanzidict.insert({ "部首","乙" });
    yi3hanzidict.insert({ "名称","横折弯钩/横斜钩" });
    yi3hanzidict.insert({ "五笔","NNLL" });

    yi3hanzidict.insert({ "英语","2" });
    yi3hanzidict.insert({ "英语1","second" });
    yi3hanzidict.insert({ "英语2","2nd heavenly stem" });

    yi3hanzidict.insert({ "基本解释","1" });
    yi3hanzidict.insert({ "基本解释1","天干的第二位。常用作顺序的第二" });

    yi3hanzidict.insert({ "组词","乙醇" });
    yi3hanzidict.insert({ "组词","乙烯" });
    yi3hanzidict.insert({ "组词","乙醇" });
    yi3hanzidict.insert({ "组词","甲乙" });
    yi3hanzidict.insert({ "组词","乙醛" });


    ofstream file("乙字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : yi3hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字乙字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字乙字初始化失败" << endl;
    }
}

//二画常用汉字字典

void 二字() {
    multimap<string, string>er4hanzidict;
    er4hanzidict.insert({ "拼音","er4" });
    er4hanzidict.insert({ "部首","二" });
    er4hanzidict.insert({ "笔画","2" });
    er4hanzidict.insert({ "繁体","二" });
    er4hanzidict.insert({ "五笔","FGG" });
    er4hanzidict.insert({ "笔顺","一  一" });
    er4hanzidict.insert({ "名称","横 横" });

    er4hanzidict.insert({ "英语","2" });
    er4hanzidict.insert({ "英语1","two" });
    er4hanzidict.insert({ "英语2","twice" });


    er4hanzidict.insert({ "基本解释","3" });
    er4hanzidict.insert({ "基本解释1","数目。一加一所得。" });
    er4hanzidict.insert({ "基本解释2","两样；别的。如：不二价。" });
    er4hanzidict.insert({ "基本解释3","次；副。如：二房。" });


    er4hanzidict.insert({ "组词","二月" });
    er4hanzidict.insert({ "组词","二手" });
    er4hanzidict.insert({ "组词","二维" });
    er4hanzidict.insert({ "组词","二战" });
    er4hanzidict.insert({ "组词","二审" });
    er4hanzidict.insert({ "组词","二胡" });
    er4hanzidict.insert({ "组词","二心" });
    er4hanzidict.insert({ "组词","二流" });
    er4hanzidict.insert({ "组词","二话" });
    er4hanzidict.insert({ "组词","二世" });
    er4hanzidict.insert({ "组词","二郎" });
    er4hanzidict.insert({ "组词","二婚" });



    ofstream file("二字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : er4hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字二字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字二字初始化失败" << endl;
    }
}


void 十字() {
    multimap<string, string>shi2hanzidict;
    shi2hanzidict.insert({ "拼音","shi2" });
    shi2hanzidict.insert({ "部首","十" });
    shi2hanzidict.insert({ "笔画","2" });
    shi2hanzidict.insert({ "繁体","十" });
    shi2hanzidict.insert({ "五笔","FGH" });
    shi2hanzidict.insert({ "笔顺","一  丨" });
    shi2hanzidict.insert({ "名称","横 竖" });

    shi2hanzidict.insert({ "英语","4" });
    shi2hanzidict.insert({ "英语1","ten" });
    shi2hanzidict.insert({ "英语2","tenth" });
    shi2hanzidict.insert({ "英语3","complete" });
    shi2hanzidict.insert({ "英语4","perfect" });

    shi2hanzidict.insert({ "基本解释","2" });
    shi2hanzidict.insert({ "基本解释1","数目。九加一所得。" });
    shi2hanzidict.insert({ "基本解释2","表示完备、多或达到顶点。如：十足；十全十美。" });


    shi2hanzidict.insert({ "组词","十分" });
    shi2hanzidict.insert({ "组词","十足" });
    shi2hanzidict.insert({ "组词","十年" });
    shi2hanzidict.insert({ "组词","十一" });
    shi2hanzidict.insert({ "组词","十二" });
    shi2hanzidict.insert({ "组词","三十" });
    shi2hanzidict.insert({ "组词","十字" });
    shi2hanzidict.insert({ "组词","十月" });
    shi2hanzidict.insert({ "组词","十时" });
    shi2hanzidict.insert({ "组词","十方" });


    ofstream file("十字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : shi2hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字十字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字十字初始化失败" << endl;
    }
}


void 丁字() {
    multimap<string, string>ding1hanzidict;
    ding1hanzidict.insert({ "拼音","ding1" });
    ding1hanzidict.insert({ "部首","一" });
    ding1hanzidict.insert({ "笔画","2" });
    ding1hanzidict.insert({ "五行","火" });
    ding1hanzidict.insert({ "繁体","丁" });
    ding1hanzidict.insert({ "五笔","SGH" });
    ding1hanzidict.insert({ "笔顺","一  亅 " });
    ding1hanzidict.insert({ "名称","横 竖钩" });


    ding1hanzidict.insert({ "拼音","2" });
    ding1hanzidict.insert({ "拼音1","male adult" });
    ding1hanzidict.insert({ "拼音2"," 4th heavenly stem" });



    ding1hanzidict.insert({ "基本解释","7" });
    ding1hanzidict.insert({ "基本解释1","天干的第四位。" });
    ding1hanzidict.insert({ "基本解释2","壮健。" });
    ding1hanzidict.insert({ "基本解释3","古称到了服劳役年龄的成年男子。如：壮丁。" });
    ding1hanzidict.insert({ "基本解释4","家口；人口。男称丁，女称口。如：添丁。" });
    ding1hanzidict.insert({ "基本解释5","从事教育的老师。如：园丁。" });
    ding1hanzidict.insert({ "基本解释6","蔬菜或肉类切成的小块。" });
    ding1hanzidict.insert({ "基本解释7","姓" });

    ding1hanzidict.insert({ "组词","园丁" });
    ding1hanzidict.insert({ "组词","补丁" });
    ding1hanzidict.insert({ "组词","布丁" });
    ding1hanzidict.insert({ "组词","壮丁" });
    ding1hanzidict.insert({ "组词","男丁" });
    ding1hanzidict.insert({ "组词","添丁" });




    ofstream file("丁字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : ding1hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字丁字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字丁字初始化失败" << endl;
    }
}


void 厂字() {
    multimap<string, string>chang3hanzidict;
    chang3hanzidict.insert({ "拼音","chang3" });
    chang3hanzidict.insert({ "部首","厂" });
    chang3hanzidict.insert({ "笔画","2" });
    chang3hanzidict.insert({ "五行","金" });
    chang3hanzidict.insert({ "繁体","廠" });
    chang3hanzidict.insert({ "五笔","DGT" });
    chang3hanzidict.insert({ "笔顺","一  ノ" });
    chang3hanzidict.insert({ "名称","横 撇" });

    chang3hanzidict.insert({ "英语","3" });
    chang3hanzidict.insert({ "英语1","factory" });
    chang3hanzidict.insert({ "英语2","workshop" });
    chang3hanzidict.insert({ "英语3","radical 27" });


    chang3hanzidict.insert({ "基本解释","4" });
    chang3hanzidict.insert({ "基本解释1","指用机械制造生产资料或生活资料的工场。" });
    chang3hanzidict.insert({ "基本解释2","有空地方可以存货或进行加工的地方" });
    chang3hanzidict.insert({ "基本解释3","棚舍" });
    chang3hanzidict.insert({ "基本解释4","中国明代为加强专制统治而设的特务机关。" });


    chang3hanzidict.insert({ "组词","厂商" });
    chang3hanzidict.insert({ "组词","工厂" });
    chang3hanzidict.insert({ "组词","厂商" });
    chang3hanzidict.insert({ "组词","厂家" });
    chang3hanzidict.insert({ "组词","厂房" });
    chang3hanzidict.insert({ "组词","出厂" });
    chang3hanzidict.insert({ "组词","电厂" });
    chang3hanzidict.insert({ "组词","药厂" });
    chang3hanzidict.insert({ "组词","船厂" });
    chang3hanzidict.insert({ "组词","厂子" });
    chang3hanzidict.insert({ "组词","砖厂" });
    chang3hanzidict.insert({ "组词","厂址" });
    chang3hanzidict.insert({ "组词","厂矿" });
    chang3hanzidict.insert({ "组词","办厂" });
    chang3hanzidict.insert({ "组词","东厂" });
    chang3hanzidict.insert({ "组词","开厂" });



    ofstream file("厂字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : chang3hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字厂字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字厂字初始化失败" << endl;
    }

}

void 七字() {
    multimap<string, string>qi1hanzidict;
    qi1hanzidict.insert({ "拼音","qi1" });
    qi1hanzidict.insert({ "部首","一" });
    qi1hanzidict.insert({ "笔画","2" });
    qi1hanzidict.insert({ "繁体","七 " });
    qi1hanzidict.insert({ "五笔","AGN " });
    qi1hanzidict.insert({ "笔顺","一  乚  " });
    qi1hanzidict.insert({ "名称","横 竖弯钩 " });

    qi1hanzidict.insert({ "英语","seven" });

    qi1hanzidict.insert({ "基本解释","2" });
    qi1hanzidict.insert({ "基本解释1","数目。六加一所得。1" });
    qi1hanzidict.insert({ "基本解释2","旧时人死后每隔七天祭祀一次，称为一个“七”，直到第四十九天为止，叫“做七”。" });

    qi1hanzidict.insert({ "组词","十七" });
    qi1hanzidict.insert({ "组词","三七" });
    qi1hanzidict.insert({ "组词","七星" });
    qi1hanzidict.insert({ "组词","七绝" });
    qi1hanzidict.insert({ "组词","七律" });
    qi1hanzidict.insert({ "组词","七百" });
    qi1hanzidict.insert({ "组词","七夕" });
    qi1hanzidict.insert({ "组词","七彩" });
    qi1hanzidict.insert({ "组词","七旬" });
    qi1hanzidict.insert({ "组词","七贤" });
    qi1hanzidict.insert({ "组词","七音" });

    ofstream file("七字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : qi1hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字七字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字七字初始化失败" << endl;
    }
}


void 卜字() {
    multimap<string, string>bu3hanzidict;
    bu3hanzidict.insert({ "拼音","bu3" });
    bu3hanzidict.insert({ "部首","卜" });
    bu3hanzidict.insert({ "笔画","2" });
    bu3hanzidict.insert({ "五行","水" });
    bu3hanzidict.insert({ "繁体","蔔" });
    bu3hanzidict.insert({ "五笔","HHY" });
    bu3hanzidict.insert({ "笔顺","丨  丶 " });
    bu3hanzidict.insert({ "名称","竖 点" });


    bu3hanzidict.insert({ "英语","2" });
    bu3hanzidict.insert({ "英语`","fortune telling" });
    bu3hanzidict.insert({ "英语2","prophesy" });


    bu3hanzidict.insert({ "基本解释","2" });
    bu3hanzidict.insert({ "基本解释1","占卜。古人用火灼龟甲取兆，据以推测吉凶。后亦指用其他方法预测吉凶。如：未卜先知。" });
    bu3hanzidict.insert({ "基本解释2","姓" });

    bu3hanzidict.insert({ "组词","卜卦" });
    bu3hanzidict.insert({ "组词","占卜" });


    ofstream file("卜字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : bu3hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字卜字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字卜字初始化失败" << endl;
    }

}

void 人字() {
    multimap<string, string>ren2hanzidict;
    ren2hanzidict.insert({ "拼音","ren2" });
    ren2hanzidict.insert({ "部首","人" });
    ren2hanzidict.insert({ "笔画","2" });
    ren2hanzidict.insert({ "繁体","人" });
    ren2hanzidict.insert({ "五笔","WWWW" });
    ren2hanzidict.insert({ "五行","金" });
    //ren2hanzidict.insert({ "笔顺","ノ㇏" });
    ren2hanzidict.insert({ "名称","撇 捺" });

    ren2hanzidict.insert({ "英语","4" });
    ren2hanzidict.insert({ "英语1`","man" });
    ren2hanzidict.insert({ "英语2","people" });
    ren2hanzidict.insert({ "英语3","mankind" });
    ren2hanzidict.insert({ "英语4","someone else" });



    ren2hanzidict.insert({ "基本解释","10" });
    ren2hanzidict.insert({ "基本解释1","人类" });
    ren2hanzidict.insert({ "基本解释2","指某种人。如：工人。" });
    ren2hanzidict.insert({ "基本解释3","每人；人人。如：人手一册。" });
    ren2hanzidict.insert({ "基本解释4","别人；他人。”" });
    ren2hanzidict.insert({ "基本解释5","成年人" });
    ren2hanzidict.insert({ "基本解释6","人才" });
    ren2hanzidict.insert({ "基本解释7","人手" });
    ren2hanzidict.insert({ "基本解释8","人品" });
    ren2hanzidict.insert({ "基本解释9","人体" });
    ren2hanzidict.insert({ "基本解释10","姓" });


    ren2hanzidict.insert({ "组词","男人" });
    ren2hanzidict.insert({ "组词","女人" });
    ren2hanzidict.insert({ "组词","人们" });
    ren2hanzidict.insert({ "组词","人口" });
    ren2hanzidict.insert({ "组词","大人" });
    ren2hanzidict.insert({ "组词","人生" });
    ren2hanzidict.insert({ "组词","人员" });
    ren2hanzidict.insert({ "组词","人民" });
    ren2hanzidict.insert({ "组词","个人" });
    ren2hanzidict.insert({ "组词","人士" });
    ren2hanzidict.insert({ "组词","别人" });
    ren2hanzidict.insert({ "组词","有人" });
    ren2hanzidict.insert({ "组词","人才" });
    ren2hanzidict.insert({ "组词","人教" });
    ren2hanzidict.insert({ "组词","人体" });
    ren2hanzidict.insert({ "组词","人类" });
    ren2hanzidict.insert({ "组词","人物" });
    ren2hanzidict.insert({ "组词","本人" });
    ren2hanzidict.insert({ "组词","人群" });
    ren2hanzidict.insert({ "组词","家人" });
    ren2hanzidict.insert({ "组词","无人" });
    ren2hanzidict.insert({ "组词","人工" });
    ren2hanzidict.insert({ "组词","他人" });
    ren2hanzidict.insert({ "组词","人家" });
    ren2hanzidict.insert({ "组词","人力" });
    ren2hanzidict.insert({ "组词","工人" });
    ren2hanzidict.insert({ "组词","病人" });
    ren2hanzidict.insert({ "组词","人均" });
    ren2hanzidict.insert({ "组词","人气" });
    ren2hanzidict.insert({ "组词","私人" });
    ren2hanzidict.insert({ "组词","主人" });
    ren2hanzidict.insert({ "组词","人大" });
    ren2hanzidict.insert({ "组词","人人" });
    ren2hanzidict.insert({ "组词","人次" });
    ren2hanzidict.insert({ "组词","人性" });
    ren2hanzidict.insert({ "组词","客人" });
    ren2hanzidict.insert({ "组词","人文" });
    ren2hanzidict.insert({ "组词","成人" });
    ren2hanzidict.insert({ "组词","每人" });
    ren2hanzidict.insert({ "组词","新人" });
    ren2hanzidict.insert({ "组词","高人" });
    ren2hanzidict.insert({ "组词","爱人" });

    ;
    ofstream file("人字.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : ren2hanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字人字初始化成功" << endl;
    }
    else {
        std::cerr << "汉字人字初始化失败" << endl;
    }

}



//
/* 复杂版  过于繁琐，暂停使用这种版本
void 一() {
    multimap<string, string>yihanzidict;
    yihanzidict.insert({ "拼音","yi1" });
    yihanzidict.insert({ "大写","壹" });
    yihanzidict.insert({ "笔画","1" });
    yihanzidict.insert({ "部首","一" });
    yihanzidict.insert({ "名称","横" });
    yihanzidict.insert({ "五笔","GGLL" });

    yihanzidict.insert({ "基本解释","共计11个" });
    yihanzidict.insert({ "基本解释1","数名，最小的正整数（在钞票和单据上常用大写“壹”代）" });
    yihanzidict.insert({ "基本解释2","纯；专：专～。～心～意。" });
    yihanzidict.insert({ "基本解释3","全；满：～生。～地水。" });
    yihanzidict.insert({ "基本解释4","相同：～样。颜色不～。" });
    yihanzidict.insert({ "基本解释5","另外的：蟋蟀～名促织。" });
    yihanzidict.insert({ "基本解释6","表示动作短暂，或是一次，或具试探性：算～算。试～试。）" });
    yihanzidict.insert({ "基本解释7","乃；竞：～至于此。" });
    yihanzidict.insert({ "基本解释8","部分联成整体：统～。整齐划～。" });
    yihanzidict.insert({ "基本解释9","或者：～胜～负。" });
    yihanzidict.insert({ "基本解释10","初次：～见如故。" });
    yihanzidict.insert({ "基本解释11","中国古代乐谱记音符号，相当于简谱中的低音“7”。" });

    yihanzidict.insert({ "英语","共计4个" });
    yihanzidict.insert({ "英语1","one" });
    yihanzidict.insert({ "英语2","a" });
    yihanzidict.insert({ "英语3","an" });
    yihanzidict.insert({ "英语4","alone" });

    yihanzidict.insert({ "详细解释","数词8、形容词7、副词5、名词1" });
    yihanzidict.insert({ "数词1","(指事。“一”是汉字部首之一。本义:数词。大写作“壹”。最小的正整数。常用以表示人或事、物的最少数量)" });
    yihanzidict.insert({ "数词2","同本义 [one]" });
    yihanzidict.insert({ "数词2例子","一，惟初太始道立于一，造分天地，化成万物。——《说文》" });
    yihanzidict.insert({ "数词2例子","一也者，万物之本也。——《淮南子·诠言》" });
    yihanzidict.insert({ "数词2例子","抱一而天下试。——《老子》" });
    yihanzidict.insert({ "数词2例子","故一人有事于四方。——《书·君奭》。传:“天子也。”" });
    yihanzidict.insert({ "数词2例子","一夫作难而七庙隳，身死人手，为天下笑。——汉·贾谊《过秦论》" });
    yihanzidict.insert({ "数词2例子","一夫夜呼，乱者四应。(公元九二年六月，李存莇妻刘皇后听信宦官诬告，杀死大臣郭崇韬，时谣言纷起，人心惶惶。屯驻在贝州(现河北省清河县)的军人皇甫晖勾结党羽作乱，拥立指挥使赵在礼为帅，攻入邺都(现河南省安阳市)。邢州(现河北省邢台市)、沧州驻军相继作乱。)——宋·欧阳修《新五代史·伶官传·序》" });
    yihanzidict.insert({ "数词2例子","又如:一境(一个地方);一丝(一根蚕丝);一碗水往平处端(办事公正不偏袒);一拳正打在心窝(一下说到要害处);一人做一人当(敢做就敢于承认，绝不连累别人);一客不烦二主(托一人能办的事，就不再打扰第二个人);一动不如一静(动不如静好);一言抄百语(总而言之);一缘一会(天缘凑合);一路功名(仕途顺利，官运亨通);一盘一盒(礼物);一清如水(静悄悄地没有人影);一毫不爽(一点不差);一息恹恹(疾病缠身，气息微弱)”" });

    yihanzidict.insert({ "数词3","序数的第一位 [first]" });
    yihanzidict.insert({ "数词3例子","一战而举鄢、郢。(第一仗就攻下了楚国的重要城市鄢、郢。一战，第一战。指楚顷襄王二十年即公元前279年，秦将白起攻下楚国的鄢、郢二都的战争。举，攻下。鄢，地名，在今湖北省宜城县境。郢，地名，在今湖北省江陵县境。)——《史记·平原君虞卿列传》" });
    yihanzidict.insert({ "数词3例子","又如:一紧二慢三罢休(指先紧后慢、最后不了了之的官场办事作风);一来二去(经过一段时间的周折);一品锅(一种里面杂放鸡鸭鱼肉、山珍海味的“砂锅”);一甲(科举殿试第一至第三名，赐进士及第);一更;一品(犹言一等;第一等);一等一(第一等中的第一名)" });


    yihanzidict.insert({ "数词4","若干份中的一份或整数以外的零头 [odd]" });
    yihanzidict.insert({ "数词4例子","先王之制，大都不过参国之一，中五之一，小九之一。——《左传》" });
    yihanzidict.insert({ "数词4例子","又如:一脚(动物身体的四分之一，一条腿的部分);丈一、丈二;百一;一份(整体分为若干份的一部分);一杆子(方言。犹言一部分);一得(得到一件或一个);一端(指物件的一头)" });


    yihanzidict.insert({ "数词5","表示动作一次或短暂 [single;only one]" });
    yihanzidict.insert({ "数词5例子","一至楚。——《史记·平原君虞卿列传》" });
    yihanzidict.insert({ "数词5例子","初一交战。——《资治通鉴》" });
    yihanzidict.insert({ "数词5例子","抚尺一下。——《虞初新志·秋声诗自序》" });
    yihanzidict.insert({ "数词5例子","又如:一拿一个着(一下子就拿住);一气一个死(气得要命);一忽觉转(一觉醒来);一时半霎(指时间极短);一个眼闪(一会儿工夫);一之为甚(一次已经过分了。用来劝人不要重犯错误)" });

    yihanzidict.insert({ "数词6","某一个 [certain]。" });
    yihanzidict.insert({ "数词6例子","如:忽见一个从前方来;一天;一次;一夜(指某夜);一能(某一项专长或技能)" });

    yihanzidict.insert({ "数词7","每;各 [every time;each]。" });
    yihanzidict.insert({ "数词7例子","如:一桌十人;一日三餐" });
    yihanzidict.insert({ "数词8","另;又 [another]。" });
    yihanzidict.insert({ "数词8例子","如:蝉一名知了" });


    yihanzidict.insert({ "形容词1","全;满 [whole;full]" });
    yihanzidict.insert({ "形容词1例子","一肌一容(一:全部。指宫女的整个肌肤容貌)。——唐·杜牧《阿房宫赋》" });
    yihanzidict.insert({ "形容词1例子","传一乡。——宋·王安石《伤仲永》" });
    yihanzidict.insert({ "形容词1例子","洞庭一湖。——宋·范仲淹《岳阳楼记》" });
    yihanzidict.insert({ "形容词1例子","长烟一空。" });
    yihanzidict.insert({ "形容词1例子","欢动一城。——明·高启《书博鸡者事》" });
    yihanzidict.insert({ "形容词1例子","通订一舟。——明·魏学《核舟记》" });
    yihanzidict.insert({ "形容词1例子","又如:一罟(全部;一点不留);一是(全赁);一凭(任凭;完全凭仗);一抹(全部);一听(听任);一划(一派);一床(全部[乐器]);一力(竭力);一创(整个);一到处(到处;四处);一条提(全部;统统);一抹光(一律免除或不予追究);一到处(遍地里);一肩儿(所承担的全部责任)" });


    yihanzidict.insert({ "数词2","相同;一样 [same]。" });
    yihanzidict.insert({ "数词2例子","如:一个稿子(一模一样);一便价(一式的;一律的);一似(好像;似同);一同(相同;一样);一理(同一准则)。" });

    yihanzidict.insert({ "数词3","齐一;联合 [joint;combined]。" });
    yihanzidict.insert({ "数词例子","如:一缴过儿(一起);一搭儿(一答里。一起;一块儿);一合儿(一同;一起);一就(一并;一起);一心(同心;齐心);一堆(一起;一块);一淘(一道;一路);一派(一齐);一体(一起;一块)" });

    yihanzidict.insert({ "数词4","统一 [unified;unitary]" });
    yihanzidict.insert({ "数词4例子","以一中外之心，以色觊觎之望。——《子谦全传》" });
    yihanzidict.insert({ "数词4例子","六王毕，四海一。——杜牧《阿房宫赋》" });
    yihanzidict.insert({ "数词4例子","又如:一正(统一法度政令);一匡(使得到匡正);一法(统一的法令);一是(犹言统一的标准);一量(统一度量);一统天下(统一全国)" });

    yihanzidict.insert({ "数词5","专一 [single-minded;concentrated]" });
    yihanzidict.insert({ "数词例子","用心一世。——《荀子·劝学》" });

    yihanzidict.insert({ "数词5例子","又如:一德无暇(一心一意，没有一点虚情假意);一心一计(一心一意)" });


    yihanzidict.insert({ "数词6","纯一不杂 [pure]。" });
    yihanzidict.insert({ "数词6例子","如:一青(犹纯青);一抹黑(形容一团漆黑);一纯(心地纯一)" });

    yihanzidict.insert({ "数词7","独 [single;alone]。" });
    yihanzidict.insert({ "数词7例子","如:一目(独眼);一取(独取);一眼(一只眼睛。特指独存一眼);一尊(独尊)" });


    yihanzidict.insert({ "副词1","都，一概 [all]" });
    yihanzidict.insert({ "副词1例子","一匡天下。——《史记·货殖列传》" });
    yihanzidict.insert({ "副词1例子","又如:一划(一律);一回(一概);一弄(一切;全体);一抹光(全都包括在内);一往(一概;一律);一括(犹言总括);一是(一概)" });

    yihanzidict.insert({ "副词2","很;甚 [very]。" });
    yihanzidict.insert({ "副词2","如:一无性天(非常虚伪);一力价(极力地);一撮儿(极其;百般)" });

    yihanzidict.insert({ "副词3","始终 [straight;always;all along]。" });
    yihanzidict.insert({ "副词3例子","如:一象(一像。一向;从来);一起(一向;向来);一行(一向;一直);一了(一直;从来);一往(犹一向)" });

    yihanzidict.insert({ "副词4","一经 [once;in case]" });
    yihanzidict.insert({ "副词4例子","诚一开口。——《史记·魏公子列传》" });
    yihanzidict.insert({ "副词4例子","俗之一改。——《史记·屈原贾生列传》" });
    yihanzidict.insert({ "副词4例子","黄鹤一去不复返，——唐·崔颢《黄鹤楼》" });
    yihanzidict.insert({ "副词4例子","禄山一出。——宋·苏轼《教战守》" });
    yihanzidict.insert({ "副词4例子","一出门。——《聊斋志异·促织》" });
    yihanzidict.insert({ "副词4例子","又如:一膺新命(一旦接受朝廷的任命);一觉(一旦);一头(一旦);一投(方言。一等到;一旦)" });


    yihanzidict.insert({ "副词5","犹一一 [one by one;one affer another]。" });
    yihanzidict.insert({ "副词5例子","如:一略数(谓一一略举);一听(一一倾听)" });


    yihanzidict.insert({ "名词1","初次，第一次;开始 [first;begin]。" });
   ; yihanzidict.insert({ "名词1例子","初次，如:一箭上垛(比喻旗开得胜，首次就达到目的);一生人(初次卖做奴婢的女子);一头里(原来;起先);一成(初次制成的);一回生(初见陌生);一见如旧(一见如故。初次相见意气相投，有如故交);一初(开始;起初);一征(初次征战);一听(初听)" });


    yihanzidict.insert({ "方法","数词2-6个古句-1个现代，数词3-1-1，数词4-1-1，数词5-3-1，数词6-0-1，数词7-0-1，数词8-0-1。形1-6-1，形2-0-1，形3-0-1，形4-2-1，形5-1-1，形6-1-1，形7-0-1，副1-1-1，副2-0-1，副3-0-1，副4-5-1，副5-0-1，名1-1-1" });

    yihanzidict.insert({ "常用词组","一把手一把死拿一把抓一败涂地一斑一般一般见识一板三眼一板一眼一半一半一半天一杯羹一辈子一本万利一本正经一鼻孔出气一笔勾销一笔抹煞一壁厢一臂之力一边一边一并一波未平，一波又起一拨儿一不做，二不休一步登天一步一个脚印一差二错一刹一刹那一刬一场空一倡百和一唱一和一朝天子一朝臣一尘不染一成不变一程子一筹莫展一触即发一触即溃一锤定音一锤子买卖一次方程一次性一蹴而就一搭两用儿一大早儿一代一带一旦一刀两断一刀切一道一得一得之功一得之愚一点一点儿一丁点儿一定一定之规一度一段一堆一而再、再而三一二一发一发一发千钧一帆风顺一反常态一分一分为二一风吹一副一概一概而论一干二净一个萝卜一个坑一个心眼儿一共一股劲儿一股脑儿一鼓作气一官半职一贯一棍子打死一锅端一锅粥一锅煮一国两制一何一哄而起一哄而上一忽儿一呼百应一晃一晃一会儿一己一技之长一家之长一家之主一见倾心一见如故一箭双雕一介一经一举一举两得一蹶不振一刻一孔之见一口一口气一块一块一览一览表一揽子一劳永逸一例一连一连串一了百了一鳞半爪一溜儿一溜烟一路一律一落千丈一马当先一马平川一脉相承一毛不拔一面一面儿理一面之词一面之交一鸣惊人一瞑不视一命呜呼一模一样一木难支一目了然一目十行一男半女一年到头一年一度一念之差一诺千金一派一盘棋一盘散沙一瞥一贫如洗一暴十寒一齐一起一气一窍不通一切一清二白一清二楚一穷二白一丘之貉一人班一人飞升，仙及鸡犬一人之心，千万人之心也一日一日千里一日三秋一日身死一如一如既往一霎那一身一神教一生一眚一时一时半会儿一事无成一视同仁一手一手一足一手遮天一水儿一顺儿一瞬一丝不苟一丝不挂一丝一毫一塌糊涂一套一套一体一天一条龙一条心一同一统一通儿一头一头儿沉一头热一吐为快一团和气一团漆黑一团糟一推六二五一网打尽一往情深一往无前一望无际一味一文不名一文不值一问三不知一窝蜂一无是处一无所长一五一十一物降一物一息尚存一席话一系列一下一下一向一笑置之一些一泻千里一泻汪洋一心一心一德一心一意一行一言既出，驷马难追一言九鼎一言堂一言为定一言以蔽之一氧化碳一样一叶蔽目，不见泰山一叶知秋一一一衣带水一语破的一元方程一再一早一眨巴眼一朝一朝一夕一针见血一枕黄粱一阵一阵风一阵子一知半解一直一纸空文一致一掷千金一柱擎天一准一字千金一字一板一总一走了之一卒之田" });


    ofstream file("一.txt"); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : yihanzidict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "汉字一初始化成功" << endl;
    }
    else {
        std::cerr << "汉字一初始化失败" << endl;
    }
}
*/

