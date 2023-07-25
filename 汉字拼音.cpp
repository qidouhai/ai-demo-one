#include  "ºº×ÖÆ´Òô.h"
//±¾ÎÄ¼şÓÃÓÚºº×ÖµÄÓïÒôÀÊ¶ÁÊ¹ÓÃ£¬ÁíÒ»Ğ©¹¦ÄÜ°üÀ¨Ò»Ğ©ÊäÈë·¨µÄ´íÎóÊäÈëµÄÕıÈ·Ê¶±ğ£¬ºÍaiµÄÓï¸ĞÄÜÁ¦ÅàÑøµÈ
//HSK 1

//ÔÚºóÆÚµÄÓïÒôÊ¶±ğµÄÊ±ºòĞèÒª°ÑÆ´Òô°´ÕÕ a-zµÄ·½Ê½½øĞĞ·Ö¸î¿ª´æ´¢¡£ÓÉÓÚÎÒÃÇÊÇÇ°ÆÚ²Ù×÷ ¾ÍÏÈ²»·ÖÁË
void ºº×ÖÆ´Òô³õÊ¼»¯() {
	map<string, string> ºº×ÖÆ´Òôdict;


	ºº×ÖÆ´Òôdict["°«"] = "ai3";
	ºº×ÖÆ´Òôdict["°®"] = "ai4";
	ºº×ÖÆ´Òôdict["°Ë"] = "ba1";
	ºº×ÖÆ´Òôdict["°Ñ"] = "ba3";
	ºº×ÖÆ´Òôdict["°Ù"] = "bai3";
    ºº×ÖÆ´Òôdict["°Ú"] = "bai3";
    ºº×ÖÆ´Òôdict["°à"] = "ban1";
    ºº×ÖÆ´Òôdict["°á"] = "ban1";
    ºº×ÖÆ´Òôdict["°ì"] = "ban4";
    ºº×ÖÆ´Òôdict["°ë"] = "ban4";
    ºº×ÖÆ´Òôdict["±¥"] = "bao3";
    ºº×ÖÆ´Òôdict["±§"] = "bao4";
    ºº×ÖÆ´Òôdict["±­"] = "bei1";
    ºº×ÖÆ´Òôdict["±¶"] = "bei4";
    ºº×ÖÆ´Òôdict["±È"] = "bi2";
    ºº×ÖÆ´Òôdict["±Ê"] = "bi2";
    ºº×ÖÆ´Òôdict["±ß"] = "bian1";
    ºº×ÖÆ´Òôdict["±ä"] = "bian4";
    ºº×ÖÆ´Òôdict["±í"] = "biao3";
    ºº×ÖÆ´Òôdict["²¡"] = "bing4";
    ºº×ÖÆ´Òôdict["²»"] = "bu4";
    ºº×ÖÆ´Òôdict["²¼"] = "bu4";

    ºº×ÖÆ´Òôdict["²Á"] = "ca1";
    ºº×ÖÆ´Òôdict["²Å"] = "cai2";
    ºº×ÖÆ´Òôdict["²Ë"] = "cai4";
    ºº×ÖÆ´Òôdict["²İ"] = "cao3";
    ºº×ÖÆ´Òôdict["²ã"] = "ceng2";
    ºº×ÖÆ´Òôdict["²è"] = "cha2";
    ºº×ÖÆ´Òôdict["³£"] = "chang2";
    ºº×ÖÆ´Òôdict["³ª"] = "chang4";

    ºº×ÖÆ´Òôdict["³Ç"] = "cheng2";
    ºº×ÖÆ´Òôdict["³Ô"] = "chi1";
    ºº×ÖÆ´Òôdict["³é"] = "chou1";
    ºº×ÖÆ´Òôdict["³ö"] = "chu1";
    ºº×ÖÆ´Òôdict["´©"] = "chuan1";
    ºº×ÖÆ´Òôdict["´¬"] = "chuan2";
    ºº×ÖÆ´Òôdict["´°"] = "chuang1";
    ºº×ÖÆ´Òôdict["´²"] = "chuang2";
    ºº×ÖÆ´Òôdict["´µ"] = "chui1";
    ºº×ÖÆ´Òôdict["´º"] = "chun1";
    ºº×ÖÆ´Òôdict["´Ê"] = "ci2";
    ºº×ÖÆ´Òôdict["´í"] = "cuo4";

    ºº×ÖÆ´Òôdict["´ø"] = "dai4";
    ºº×ÖÆ´Òôdict["´÷"] = "dai4";
    ºº×ÖÆ´Òôdict["µ¶"] = "dao1";
    ºº×ÖÆ´Òôdict["µ½"] = "dao4";
    ºº×ÖÆ´Òôdict["µÆ"] = "deng1";
    ºº×ÖÆ´Òôdict["µÈ"] = "deng3";
    ºº×ÖÆ´Òôdict["µÍ"] = "di1";
    ºº×ÖÆ´Òôdict["µÚ"] = "di4";
    ºº×ÖÆ´Òôdict["µã"] = "dian3";
    ºº×ÖÆ´Òôdict["µç"] = "dian4";
    ºº×ÖÆ´Òôdict["µô"] = "diao4";
    ºº×ÖÆ´Òôdict["¶ª"] = "diu1";
    ºº×ÖÆ´Òôdict["¶«"] = "dong1";
    ºº×ÖÆ´Òôdict["¶¬"] = "dong1";
    ºº×ÖÆ´Òôdict["¶®"] = "dong3";
    ºº×ÖÆ´Òôdict["¶¯"] = "dong4";
    ºº×ÖÆ´Òôdict["¶Ì"] = "duan3";
    ºº×ÖÆ´Òôdict["¶Î"] = "duan4";
    ºº×ÖÆ´Òôdict["¶à"] = "duo1";

    ºº×ÖÆ´Òôdict["¶ö"] = "e4";
    ºº×ÖÆ´Òôdict["¶ş"] = "er4";

    ºº×ÖÆ´Òôdict["·­"] = "fan1";
    ºº×ÖÆ´Òôdict["·¹"] = "fan4";
    ºº×ÖÆ´Òôdict["·Å"] = "fang4";
    ºº×ÖÆ´Òôdict["·É"] = "fei1";
    ºº×ÖÆ´Òôdict["·â"] = "feng1";

    ºº×ÖÆ´Òôdict["¸Ä"] = "gai3";
    ºº×ÖÆ´Òôdict["¸Ò"] = "gan3";

    ºº×ÖÆ´Òôdict["¸ß"] = "gao1";
    ºº×ÖÆ´Òôdict["¸ã"] = "gao3";
    ºº×ÖÆ´Òôdict["¸è"] = "ge1";
    ºº×ÖÆ´Òôdict["¸ù"] = "gen1";
    ºº×ÖÆ´Òôdict["¸ú"] = "gen1";
    ºº×ÖÆ´Òôdict["¹»"] = "gou4";
    ºº×ÖÆ´Òôdict["¹Î"] = "gua1";
    ºº×ÖÆ´Òôdict["¹İ"] = "guan3";
    ºº×ÖÆ´Òôdict["¹ó"] = "gui4";
    ºº×ÖÆ´Òôdict["¹ú"] = "guo2";
    ºº×ÖÆ´Òôdict["º£"] = "hai3";
    ºº×ÖÆ´Òôdict["º°"] = "han3";
    ºº×ÖÆ´Òôdict["ºÓ"] = "he2";
    ºº×ÖÆ´Òôdict["ºÚ"] = "hei1";
    ºº×ÖÆ´Òôdict["ºÜ"] = "hen3";

    ºº×ÖÆ´Òôdict["ºó"] = "hou4";
    ºº×ÖÆ´Òôdict["ºş"] = "hu2";
    ºº×ÖÆ´Òôdict["»­"] = "hua4";
    ºº×ÖÆ´Òôdict["»°"] = "hua4";

    ºº×ÖÆ´Òôdict["»»"] = "huan4";
    ºº×ÖÆ´Òôdict["»Æ"] = "huang2";

    ºº×ÖÆ´Òôdict["»Ø"] = "hui2";
    ºº×ÖÆ´Òôdict["¼¦"] = "ji1";
    ºº×ÖÆ´Òôdict["¼±"] = "ji2";
    ºº×ÖÆ´Òôdict["¼·"] = "ji3";
    ºº×ÖÆ´Òôdict["¼Ä"] = "ji4";
    ºº×ÖÆ´Òôdict["¼Ó"] = "jia1";
    ºº×ÖÆ´Òôdict["¼·"] = "ji3";

    ºº×ÖÆ´Òôdict["¼ş"] = "jian4";
    ºº×ÖÆ´Òôdict["½­"] = "jiang1";
    ºº×ÖÆ´Òôdict["½²"] = "jiang3";
    ºº×ÖÆ´Òôdict["½»"] = "jiao1";
    ºº×ÖÆ´Òôdict["½Ğ"] = "jiao4";

    ºº×ÖÆ´Òôdict["½Ó"] = "jie1";
    ºº×ÖÆ´Òôdict["½Ö"] = "jie1";

    ºº×ÖÆ´Òôdict["½è"] = "jie4";
    ºº×ÖÆ´Òôdict["½ï"] = "jin1";
    ºº×ÖÆ´Òôdict["½ô"] = "jin3";
    ºº×ÖÆ´Òôdict["½ø"] = "jin4";
    ºº×ÖÆ´Òôdict["½ü"] = "jin4";
    ºº×ÖÆ´Òôdict["¾Å"] = "jiu3";
    ºº×ÖÆ´Òôdict["¾Ã"] = "jiu3";
    ºº×ÖÆ´Òôdict["¾Æ"] = "jiu3";
    ºº×ÖÆ´Òôdict["¾É"] = "jiu4";
    ºº×ÖÆ´Òôdict["¾Í"] = "jiu4";
    ºº×ÖÆ´Òôdict["¾Ù"] = "ju3";

    ºº×ÖÆ´Òôdict["¿ª"] = "kai1";
    ºº×ÖÆ´Òôdict["¿Ã"] = "ke1";
    ºº×ÖÆ´Òôdict["¿Ê"] = "ke3";
    ºº×ÖÆ´Òôdict["¿Ë"] = "ke4";
    ºº×ÖÆ´Òôdict["¿Ì"] = "ke4";
    ºº×ÖÆ´Òôdict["¿Î"] = "ke4";
    ºº×ÖÆ´Òôdict["¿Ú"] = "kou3";
    ºº×ÖÆ´Òôdict["¿Ş"] = "ku1";
    ºº×ÖÆ´Òôdict["¿à"] = "ku3";
    ºº×ÖÆ´Òôdict["¿é"] = "kuai4";
    ºº×ÖÆ´Òôdict["¿ì"] = "kuai4";

    ºº×ÖÆ´Òôdict["À¶"] = "lan2";
    ºº×ÖÆ´Òôdict["Àä"] = "leng3";
    ºº×ÖÆ´Òôdict["Àë"] = "li2";
    ºº×ÖÆ´Òôdict["Àï"] = "li3";
    ºº×ÖÆ´Òôdict["Á³"] = "lian3";
    ºº×ÖÆ´Òôdict["Á½"] = "liang3";

    ºº×ÖÆ´Òôdict["ÁÁ"] = "liang4";
    ºº×ÖÆ´Òôdict["Á¾"] = "liang4";
    ºº×ÖÆ´Òôdict["Áã"] = "ling2";
    ºº×ÖÆ´Òôdict["Áô"] = "liu2";
    ºº×ÖÆ´Òôdict["Á÷"] = "liu2";

    ºº×ÖÆ´Òôdict["Â¥"] = "lou2";
    ºº×ÖÆ´Òôdict["Â·"] = "lu4";
    ºº×ÖÆ´Òôdict["ÂÒ"] = "luan4";
    ºº×ÖÆ´Òôdict["Âí"] = "ma3";
    ºº×ÖÆ´Òôdict["Âï"] = "ma0";
    ºº×ÖÆ´Òôdict["Âò"] = "mai3";
    ºº×ÖÆ´Òôdict["Âô"] = "mai4";
    ºº×ÖÆ´Òôdict["Âú"] = "man3";
    ºº×ÖÆ´Òôdict["Âı"] = "man4";
    ºº×ÖÆ´Òôdict["Ã¦"] = "mang2";
    ºº×ÖÆ´Òôdict["Ã«"] = "mao2";
    ºº×ÖÆ´Òôdict["ÃÅ"] = "men2";
    ºº×ÖÆ´Òôdict["ÃÇ"] = "men2";
    ºº×ÖÆ´Òôdict["Ã×"] = "mi3";
    ºº×ÖÆ´Òôdict["ÄÃ"] = "na2";
    ºº×ÖÆ´Òôdict["ÄĞ"] = "nan2";
    ºº×ÖÆ´Òôdict["Äã"] = "ni3";
    ºº×ÖÆ´Òôdict["Äê"] = "nian2";
    ºº×ÖÆ´Òôdict["Äî"] = "nian4";
    ºº×ÖÆ´Òôdict["Äú"] = "nin2";
    ºº×ÖÆ´Òôdict["Å£"] = "niu2";
    ºº×ÖÆ´Òôdict["ÅÀ"] = "pa2";
    ºº×ÖÆ´Òôdict["ÅÄ"] = "pai1";
    ºº×ÖÆ´Òôdict["ÅÉ"] = "pai4";
    ºº×ÖÆ´Òôdict["Åö"] = "peng4";
    ºº×ÖÆ´Òôdict["Æª"] = "pian1";
    ºº×ÖÆ´Òôdict["Æ¿"] = "ping2";
    ºº×ÖÆ´Òôdict["ÆÆ"] = "po4";
    ºº×ÖÆ´Òôdict["Æß"] = "qi1";
    ºº×ÖÆ´Òôdict["Æï"] = "qi2";
    ºº×ÖÆ´Òôdict["Æğ"] = "qi3";
    ºº×ÖÆ´Òôdict["Ç§"] = "qian1";
    ºº×ÖÆ´Òôdict["Ç°"] = "qian2";
    ºº×ÖÆ´Òôdict["Ç®"] = "qian2";
    ºº×ÖÆ´Òôdict["Ç½"] = "qiang2";
    ºº×ÖÆ´Òôdict["ÇÅ"] = "qiao2";
    ºº×ÖÆ´Òôdict["Çá"] = "qing1";
    ºº×ÖÆ´Òôdict["Çç"] = "qing2";
    ºº×ÖÆ´Òôdict["Çë"] = "qing2";
    ºº×ÖÆ´Òôdict["Çï"] = "qiu1";
    ºº×ÖÆ´Òôdict["Çò"] = "qiu2";
    ºº×ÖÆ´Òôdict["È¥"] = "qu4";
    ºº×ÖÆ´Òôdict["È«"] = "quan2";
    ºº×ÖÆ´Òôdict["ÈÃ"] = "rang4";
    ºº×ÖÆ´Òôdict["ÈÈ"] = "re4";
    ºº×ÖÆ´Òôdict["ÈË"] = "ren2";
    ºº×ÖÆ´Òôdict["ÈÕ"] = "ri4";
    ºº×ÖÆ´Òôdict["Èâ"] = "rou4";
    ºº×ÖÆ´Òôdict["Èı"] = "san1";
    ºº×ÖÆ´Òôdict["É½"] = "shan1";
    ºº×ÖÆ´Òôdict["Éî"] = "shen1";
    ºº×ÖÆ´Òôdict["Éù"] = "sheng1";
    ºº×ÖÆ´Òôdict["Ê£"] = "sheng4";
    ºº×ÖÆ´Òôdict["Ê®"] = "shi2";
    ºº×ÖÆ´Òôdict["ÊĞ"] = "shi4";
    ºº×ÖÆ´Òôdict["ÊÂ"] = "shi4";
    ºº×ÖÆ´Òôdict["ÊÔ"] = "shi4";
    ºº×ÖÆ´Òôdict["ÊÇ"] = "shi4";
    ºº×ÖÆ´Òôdict["ÊÕ"] = "shou1";
    ºº×ÖÆ´Òôdict["ÊÖ"] = "shou3";
    ºº×ÖÆ´Òôdict["Êé"] = "shu1";
    ºº×ÖÆ´Òôdict["Êä"] = "shu1";
    ºº×ÖÆ´Òôdict["Êì"] = "shu2";
    ºº×ÖÆ´Òôdict["Ê÷"] = "shu4";
    ºº×ÖÆ´Òôdict["Ë«"] = "shuang1";
    ºº×ÖÆ´Òôdict["Ë­"] = "shui2";
    ºº×ÖÆ´Òôdict["Ë®"] = "shui3";
    ºº×ÖÆ´Òôdict["Ë¯"] = "shui4";
    ºº×ÖÆ´Òôdict["ËÄ"] = "si4";
    ºº×ÖÆ´Òôdict["ËÍ"] = "song4";
    ºº×ÖÆ´Òôdict["Ëá"] = "suan1";
    ºº×ÖÆ´Òôdict["Ëã"] = "shuan4";
    ºº×ÖÆ´Òôdict["Ëê"] = "sui4";

    ºº×ÖÆ´Òôdict["Ëû"] = "ta1";
    ºº×ÖÆ´Òôdict["Ëü"] = "ta1";
    ºº×ÖÆ´Òôdict["Ì§"] = "tai2";
    ºº×ÖÆ´Òôdict["Ì«"] = "tai4";
    ºº×ÖÆ´Òôdict["Ì¸"] = "tan2";
    ºº×ÖÆ´Òôdict["ÌÇ"] = "tang2";
    ºº×ÖÆ´Òôdict["ÌÉ"] = "tang3";
    ºº×ÖÆ´Òôdict["ÌÛ"] = "teng2";
    ºº×ÖÆ´Òôdict["Ìß"] = "ti1";
    ºº×ÖÆ´Òôdict["Ìì"] = "tian1";
    ºº×ÖÆ´Òôdict["Ìı"] = "ting1";
    ºº×ÖÆ´Òôdict["Í£"] = "ting2";
    ºº×ÖÆ´Òôdict["Í¦"] = "ting3";
    ºº×ÖÆ´Òôdict["ÍÆ"] = "tui1";
    ºº×ÖÆ´Òôdict["ÍÈ"] = "tui3";
    ºº×ÖÆ´Òôdict["ÍË"] = "tui4";
    ºº×ÖÆ´Òôdict["ÍÑ"] = "tuo1";

    ºº×ÖÆ´Òôdict["Íâ"] = "wai4";
    ºº×ÖÆ´Òôdict["Íê"] = "wan2";
    ºº×ÖÆ´Òôdict["Íí"] = "wan3";
    ºº×ÖÆ´Òôdict["Íë"] = "wan3";
    ºº×ÖÆ´Òôdict["Íù"] = "wang3";
    ºº×ÖÆ´Òôdict["Íü"] = "wang3";
    ºº×ÖÆ´Òôdict["Î»"] = "wei4";
    ºº×ÖÆ´Òôdict["ÎÊ"] = "wen4";
    ºº×ÖÆ´Òôdict["ÎÒ"] = "wo3";
    ºº×ÖÆ´Òôdict["Îå"] = "wu3";

    ºº×ÖÆ´Òôdict["Î÷"] = "xi1";
    ºº×ÖÆ´Òôdict["Ï¸"] = "xi4";
    ºº×ÖÆ´Òôdict["ÏÂ"] = "xia4";
    ºº×ÖÆ´Òôdict["ÏÈ"] = "xian1";
    ºº×ÖÆ´Òôdict["Ïã"] = "xiang1";
    ºº×ÖÆ´Òôdict["Ïì"] = "xiang3";
    ºº×ÖÆ´Òôdict["Ïë"] = "xiang3";
    ºº×ÖÆ´Òôdict["Ïò"] = "xiang4";
    ºº×ÖÆ´Òôdict["Ïñ"] = "xiang4";
    ºº×ÖÆ´Òôdict["Ğ¡"] = "xiao3";
    ºº×ÖÆ´Òôdict["Ğ¦"] = "xiao4";
    ºº×ÖÆ´Òôdict["Ğ¬"] = "xie2";
    ºº×ÖÆ´Òôdict["Ğ´"] = "xie3";
    ºº×ÖÆ´Òôdict["ĞÄ"] = "xin1";
    ºº×ÖÆ´Òôdict["ĞÂ"] = "xin1";
    ºº×ÖÆ´Òôdict["ĞÕ"] = "xing4";
    ºº×ÖÆ´Òôdict["Ñ©"] = "xue3";

    ºº×ÖÆ´Òôdict["Ò©"] = "yao4";
    ºº×ÖÆ´Òôdict["Ò²"] = "ye3";
    ºº×ÖÆ´Òôdict["Ò³"] = "ye4";
    ºº×ÖÆ´Òôdict["Ò¹"] = "ye4";
    ºº×ÖÆ´Òôdict["ÒÚ"] = "yi4";
    ºº×ÖÆ´Òôdict["Òõ"] = "yin1";
    ºº×ÖÆ´Òôdict["Ó®"] = "ying2";
    ºº×ÖÆ´Òôdict["ÓÃ"] = "yong4";
    ºº×ÖÆ´Òôdict["ÓÖ"] = "you4";
    ºº×ÖÆ´Òôdict["ÓÒ"] = "you4";
    ºº×ÖÆ´Òôdict["Óã"] = "yu2";
    ºº×ÖÆ´Òôdict["Ôª"] = "yuan2";
    ºº×ÖÆ´Òôdict["Ô²"] = "yuan2";
    ºº×ÖÆ´Òôdict["ÔÂ"] = "yue4";
    ºº×ÖÆ´Òôdict["ÔÆ"] = "yun2";

    ºº×ÖÆ´Òôdict["ÔÙ"] = "zai4";
    ºº×ÖÆ´Òôdict["ÔÚ"] = "zai4";
    ºº×ÖÆ´Òôdict["Ôç"] = "zao3";
    ºº×ÖÆ´Òôdict["Õ¾"] = "zhan4";
    ºº×ÖÆ´Òôdict["ÕÅ"] = "zhang1";
    ºº×ÖÆ´Òôdict["ÕÒ"] = "zhao3";
    ºº×ÖÆ´Òôdict["Õæ"] = "zhen1";
    ºº×ÖÆ´Òôdict["Ö§"] = "zhi1";
    ºº×ÖÆ´Òôdict["Ö½"] = "zhi3";
    ºº×ÖÆ´Òôdict["Ö¸"] = "zhi3";
    ºº×ÖÆ´Òôdict["ÖÓ"] = "zhong1";
    ºº×ÖÆ´Òôdict["ÖÜ"] = "zhou1";
    ºº×ÖÆ´Òôdict["Öí"] = "zhu1";
    ºº×ÖÆ´Òôdict["×¡"] = "zhu4";
    ºº×ÖÆ´Òôdict["×£"] = "zhu4";
    ºº×ÖÆ´Òôdict["×°"] = "zhuang1";
    ºº×ÖÆ´Òôdict["×Ö"] = "zi4";
    ºº×ÖÆ´Òôdict["×Ü"] = "zong3";
    ºº×ÖÆ´Òôdict["×ß"] = "zou3";
    ºº×ÖÆ´Òôdict["×ì"] = "zui3";
    ºº×ÖÆ´Òôdict["×î"] = "zui4";
    ºº×ÖÆ´Òôdict["×ó"] = "zuo3";
    ºº×ÖÆ´Òôdict["×÷"] = "zuo4";
    ºº×ÖÆ´Òôdict["×ø"] = "zuo4";
    ºº×ÖÆ´Òôdict["×ù"] = "zuo4";
    ºº×ÖÆ´Òôdict["×ö"] = "zuo4";







    ofstream file("ºº×ÖÆ´Òô.txt"); // ´ò¿ªÒ»¸öÎÄ¼ş½øĞĞĞ´Èë²Ù×÷
    if (file.is_open()) { // Èç¹ûÎÄ¼ş³É¹¦´ò¿ª
        for (const auto& pair : ºº×ÖÆ´Òôdict) { // ±éÀú×ÖµäÖĞµÄËùÓĞÔªËØ
            file << pair.first << " " << pair.second << endl; // ½«¼üÖµ¶ÔĞ´ÈëÎÄ¼şÖĞ
        }
        file.close(); // ¹Ø±ÕÎÄ¼ş
        cout << "ºº×ÖÆ´ÒôÊı¾İ³õÊ¼»¯³É¹¦" << endl;
    }
    else {
        std::cerr << "ºº×ÖÆ´ÒôÊı¾İ³õÊ¼»¯Ê§°Ü" << endl;
    }

}




void ¶àÒô×ÖÆ´Òô() {

	multimap<string, string>¶àÒô×ÖÆ´Òôdict;

    ¶àÒô×ÖÆ´Òôdict.insert({ "°¡","a1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "°¡","a2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "°¡","a3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "°¡","a4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "°É","ba1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "°É","ba" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "±±","bei3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "±±","bei4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "±»","bei4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "±»","pi" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "²é","cha2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "²é","zha1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "²î","cha1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "²î","cha4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "²î","chai1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "²î","chai4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "²î","ci" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "³¡","chang3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "³¡","chang2" });
    
    ¶àÒô×ÖÆ´Òôdict.insert({ "³¯","zhao1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "³¯","chao2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "³µ","che1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "³µ","ju1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "´Ó","cong2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "´Ó","zong4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "´ó","da4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "´ó","dai4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "´ó","tai4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "µÃ","de2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "µÃ","de0" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "µÃ","dei3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "µÄ","de0" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "µÄ","di1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "µÄ","di2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "µÄ","di4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "µØ","di4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "µØ","de0" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¶¼","dou1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¶¼","du1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¶Á","du2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¶Á","dou4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¶Ù","dun4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¶Ù","du2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "àÅ","ng4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "àÅ","ng2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "àÅ","ng3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "·¢","fa1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "·¢","fa4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "·Ö","fen1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "·Ö","fen4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "·ç","feng1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "·ç","feng3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¸É","gan4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¸É","gan1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¸ö","ge4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¸ö","ge3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¸÷","ge4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¸÷","ge3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¸ø","gei3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¸ø","ji3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¸ü","geng4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¸ü","geng1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¹ı","guo4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¹ı","guo1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "»¹","hai2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "»¹","huan2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ĞĞ","xing2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ĞĞ","hang2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ĞĞ","hang4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ĞĞ","heng2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÅ","hao4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÅ","hao2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÈ","he1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÈ","he4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÈ","ye4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÍ","he2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÍ","he4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÍ","huo4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÍ","huo2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºÍ","hu2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ºì","hong2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ºì","gong1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "»µ","huai4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "»µ","pi1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "»µ","pei1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "»µ","pei2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "»á","hui4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "»á","kuai4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¼¸","ji3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¼¸","ji1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¼Ò","jia1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¼Ò","jia0" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¼Ò","jie0" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¼ä","jian1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¼ä","jian4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¼û","jian4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¼û","xian4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "½Ç","jiao3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "½Ç","jue2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "½Å","jiao3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "½Å","jue2" });
    
    ¶àÒô×ÖÆ´Òôdict.insert({ "½Ì","jiao4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "½Ì","jiao1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "½Ú","jie2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "½Ú","jie1" });


    ¶àÒô×ÖÆ´Òôdict.insert({ "¾ä","ju4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¾ä","gou1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "¿´","kan4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "¿´","kan1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "À­","la1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "À­","la2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "À­","la3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "À²","la0" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "À²","la1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÁË","liao3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÁË","le0" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÀÛ","lei2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÀÛ","lei3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÀÛ","lei4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Á©","liang3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Á©","lia3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Áù","liu6" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Áù","lu4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÂÌ","lv4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÂÌ","lu4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Âğ","ma2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Âğ","ma3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ã»","mei2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ã»","mo4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÄ","na3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÄ","nei3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÄ","ne2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÇ","na4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÇ","na3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÇ","nei4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÇ","na1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÅ","na4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÅ","ne4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÏ","nan2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÏ","na1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄØ","ni2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄØ","ne0" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÚ","nei4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÄÚ","na4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Å®","nv3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Å®","ru3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÅÜ","pao3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÅÜ","pao2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Æ¬","pian4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Æ¬","pian1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Æ±","piao4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Æ±","piao1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ç³","qian3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ç³","jian1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÉÏ","shang4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÉÏ","shang3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÉÙ","shao3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÉÙ","shao4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ëµ","shuo1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ëµ","shui4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ëµ","yue4" });


    ¶àÒô×ÖÆ´Òôdict.insert({ "Ëı","ta1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ëı","jie3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÌÀ","tang1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÌÀ","shang1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ìá","ti2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ìá","di1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ìá","di3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ìõ","tiao2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ìõ","tiao1" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ìø","tiao4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ìø","tao2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Í¨","tong1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Í¨","tong4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Íò","wan4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Íò","mo4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Îª","wei2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Îª","wei4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ï´","xi3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ï´","xian3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ïµ","xi4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ïµ","ji4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÏÄ","xia4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÏÄ","jia4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ğ©","xie1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ğ©","suo4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ĞÅ","xin4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ĞÅ","shen1" });
    
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ñ½","ya1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ñ½","ya0" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ñò","yang2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ñò","xiang2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Óê","yu3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Óê","yu4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ô¶","yuan3" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ô¶","yuan4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "ÔÛ","zan2" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÔÛ","za2" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Ôà","zang4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ôà","zang1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ôà","zang3" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Õ¼","zhan1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Õ¼","zhan4" });

    ¶àÒô×ÖÆ´Òôdict.insert({ "Õâ","zhe4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Õâ","zhei4" });


    ¶àÒô×ÖÆ´Òôdict.insert({ "Ö»","zhi1" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "Ö»","zhi3" });


    ¶àÒô×ÖÆ´Òôdict.insert({ "ÖØ","zhong4" });
    ¶àÒô×ÖÆ´Òôdict.insert({ "ÖØ","chong2" });




    ofstream file("¶àÒô×ÖÆ´Òô.txt"); // ´ò¿ªÒ»¸öÎÄ¼ş½øĞĞĞ´Èë²Ù×÷
    if (file.is_open()) { // Èç¹ûÎÄ¼ş³É¹¦´ò¿ª
        for (const auto& pair : ¶àÒô×ÖÆ´Òôdict) { // ±éÀú×ÖµäÖĞµÄËùÓĞÔªËØ
            file << pair.first << " " << pair.second << endl; // ½«¼üÖµ¶ÔĞ´ÈëÎÄ¼şÖĞ
        }
        file.close(); // ¹Ø±ÕÎÄ¼ş
        cout << "¶àÒô×ÖÆ´ÒôÊı¾İ³õÊ¼»¯³É¹¦" << endl;
    }
    else {
        std::cerr << "¶àÒô×ÖÆ´ÒôÊı¾İ³õÊ¼»¯Ê§°Ü" << endl;
    }


}