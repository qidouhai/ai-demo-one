//机器人的类
#include <iostream>

using namespace std;

#include <string>

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
