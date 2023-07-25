#include "文件读写.h"


int test01(string xn, string mn, string nn, int i ) {

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