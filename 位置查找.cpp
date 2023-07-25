#include "位置查找.h"




//2句子去除标点符号  空格  求出汉字个数

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

void test05(string str, void callback(size_t)) {
    string sworlds = str;
    size_t num = sworlds.length();
    // int nums = static_cast<int>(sworlds.length());
    string chars = "abcefgiklmopqrstuvwxyz!@#$%^&*-=\"?[]~|()_+'/{}`<>\\;:12345790 ";
    testfindback(sworlds, chars, callback);
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