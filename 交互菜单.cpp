#include "交互菜单.h"

int test01(string xn, string mn, string nn, int i = 1);
void 记录paperid(int i);
int 读取paperid();
void test03(int i);

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
            cout << "请输入1,为：" << yn << " 选择汉字的词性" << endl;

            int tt = 0;
            int t = 0;
            cin >> tt;
            if (tt != 1) {
                cout << "请输入1,为：" << yn << " 选择汉字的词性" << endl;
                exit(1);
            }
            else {
                t = tt;
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
