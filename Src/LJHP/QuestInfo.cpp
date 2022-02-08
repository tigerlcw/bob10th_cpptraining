#include "pch.h"
#include "QuestInfo.h"

static CQuestInfo g_QuestInfo;

CQuestInfo::CQuestInfo(void) {
	ExportAPIEntry(this);
}

CQuestInfo::~CQuestInfo(void) {

}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC) {
	ST_QUEST_NPC_DATA npc;
	npc.x = 11;
	npc.y = 5;
	npc.z = 1;	

	npc.nNpcID = 151;
	npc.strTrack = "취약점분석트랙";
	npc.strName = "이주협";
	npc.nAge = 18;
	npc.strMBTI = "INFJ";
	npc.cPatch = 'X';
	npc.strMessage = "안녕하세요 이주협입니다.\n악성코드 분석은 재밌다~!";

	npc.vecBigImage.resize(60);
	npc.vecBigImage[0] = "*==***=*==******==****==**====*===================";
	npc.vecBigImage[1] = "*==***====**=************=====***=================";
	npc.vecBigImage[2] = "=*=*****=*************************================";
	npc.vecBigImage[3] = "**************************==*******=*=============";
	npc.vecBigImage[4] = "****=****************=**==***=*****===============";
	npc.vecBigImage[5] = "*********************!*=$$=*******==**============";
	npc.vecBigImage[6] = "=*****=**********==*;~-~=#$#**!*******============";
	npc.vecBigImage[7] = "=**************=$=!=!!=:=*##$!=!!;!*****==========";
	npc.vecBigImage[8] = "=************===$$$####!;~!*!$;==*:!*****=========";
	npc.vecBigImage[9] = "=************=$$######=*=;=*$=:!=;!:*=***=*=======";
	npc.vecBigImage[10] = "=************=$$######$##$=##=$!#!!!:****=**======";
	npc.vecBigImage[11] = "************=$$=$$#@#@#@#@##@$#;@:-~:!=******=====";
	npc.vecBigImage[12] = "************##$=$####@#@#####@@=$#$***=*******====";
	npc.vecBigImage[13] = "************$$$$$#######$##########$##$=*******===";
	npc.vecBigImage[14] = "***********$=#$$#########$#$#$@@###@###=*********=";
	npc.vecBigImage[15] = "***********$#$=#####=$$##$#=$#@@#@#@##==*********=";
	npc.vecBigImage[16] = "***********=$=$#####*$###$#@$@@###@#$##=*********=";
	npc.vecBigImage[17] = "**********==$*$$##=$#####$#@##@#######@=**********";
	npc.vecBigImage[18] = "**********$$$==##$==######$###@#######@***********";
	npc.vecBigImage[19] = "**********=$=$==$==$#@###@$=###$#@@$$##***********";
	npc.vecBigImage[20] = "***********$$=#$=$##########=##@#@@@##=***********";
	npc.vecBigImage[21] = "***********=$$$$$==**=*!*!:;!;!#$#@@#$$***********";
	npc.vecBigImage[22] = "************=$$*~,. .,-----------:$###=***********";
	npc.vecBigImage[23] = "************:$$,  .~!;-,.,-~:=*:~--=#$;***********";
	npc.vecBigImage[24] = "************~*=  ..,!--  .,--~---,,:#;-***********";
	npc.vecBigImage[25] = "********!!!*.,*    .,..   ,....,,,,:*.*!!!********";
	npc.vecBigImage[26] = "*******!!!!! ,!          .,.. ...,,::,!!!!!!******";
	npc.vecBigImage[27] = "*!!!!!!!!!!*,,.          .,,.  ..,,*,-!!!!!!!*****";
	npc.vecBigImage[28] = "!!!!!!!!!!!!- .         ..,,,. ..,,-,:!!!!!!!!****";
	npc.vecBigImage[29] = "*!!!!!!!!!!!!  .    ...~.-;-,,..,,-,-!!!!!!!!!!!**";
	npc.vecBigImage[30] = "!!!!!!!!!!!!!; .   ..   .,,,,-,,,,-:!!!!!!!!!!!!!*";
	npc.vecBigImage[31] = "!!!!!!!!!!!!!!!;. ....    .,---,,,:!!!!!!!!!!!!!!!";
	npc.vecBigImage[32] = "!!!!!!!!!!!!!!!;.....~:~~~~~~--,,-;!!!!!!!!!!!!!!!";
	npc.vecBigImage[33] = "!!!!!!!!!!;;;;;;~.....  ..,-,,,,-~;;;;;!!!!!!!!!!!";
	npc.vecBigImage[34] = "!!!!!!!;;;;;;;;;;,...  .--,,,,,-~;;;;;;;;;;;!!!!!!";
	npc.vecBigImage[35] = "!!!!!;;;;;;;;;;;; ,..    ...,,--:;;;;;;;;;;;;;!!!!";
	npc.vecBigImage[36] = "!!!;;;;;;;;;;;;;; .,,.  ..,,,-~-;;;;;;;;;;;;;;;!!!";
	npc.vecBigImage[37] = ";;;;;;;;;;;;;;;;;  .,,,,-----~-,;;;;;;;;;;;;;;;;;!";
	npc.vecBigImage[38] = ";;;;;;;;;;;;;;;;-  ..,~~~~~~~-,,;;:;;;;;;;;;;;;;;;";
	npc.vecBigImage[39] = ";;;;;;;;;;;;;;:$,  ....~;;:-,,,,;:::;;;;;;;;;;;;;;";
	npc.vecBigImage[40] = ";;;;;;;;;::;::==.  .. ..,,,,,,,,:::::::;;;;;;;;;;;";
	npc.vecBigImage[41] = ";;;;;;;:::::;===..    ...,,,,,,.-!:::::::::;;;;;;;";
	npc.vecBigImage[42] = ";;;;;;:::::;====;.    ...,,,,,,.;!;:::::::::;;;;;;";
	npc.vecBigImage[43] = ";;:::::::;*=====$ ,    ..,,,,,,,=*!:::::::::::;;;;";
	npc.vecBigImage[44] = ";::::::!*=$$====$- -.  ..,,,.,-,**!!;::::::::::;;;";
	npc.vecBigImage[45] = "::::;!*===$$===$$~  ,....,,..- ;=*!!!;!::::::::::;";
	npc.vecBigImage[46] = ";;!!==$$$=$$==$$$=   ,,......  !$=*!**!!!:::::::::";
	npc.vecBigImage[47] = "!!*=$$$$$##=$$=$$=.   ,,,...   $$#$====!!*!;::::::";
	npc.vecBigImage[48] = "*==$$$$$$$$#===$$$:    .-,   .-$#$$$$#@$!!*=!;::::";
	npc.vecBigImage[49] = "==$$$$$$$$$#$$$$$=*    -:    .*$#####@@$=!!*=*!;;:";
	npc.vecBigImage[50] = "$$$$$$$$$$$$$$$==$!   $=$$*  .$#####$=#$$=*!****!!";
	npc.vecBigImage[51] = "$$$$$$$$$$$$$$$====  *$==$#*..$####$$$=$$==*******";
	npc.vecBigImage[52] = "$$$$$$$$$$$$$$$$=$$.,~$==$#$-!$####$$$$##$$$======";
	npc.vecBigImage[53] = "$$$$$$$$$$$$$$$$$$$,,.;==$;~!$#####$$$###$$$$$$$$$";
	npc.vecBigImage[54] = "$$$$$$$$$$$$$$$$$=$*-..~=$,-~$#####$$###$$$$$$$$##";
	npc.vecBigImage[55] = "$$$$$$$$$$$$$$$$$$$=-..*=$~-*$###$$$$###$$$$$$$$##";
	npc.vecBigImage[56] = "$=$$$=$$$$$$$$$$$$$=-.:*=$;~=$##$$$$###$$$$$######";
	npc.vecBigImage[57] = "$$$$$$$$$$$#$$$$$$$$~.**=#$!$###$$$$##$$$$########";
	npc.vecBigImage[58] = "$$$$$$$=$$$$$$$$$$$$@-===$#$$##$$$$#@#$$$$#$######";
	npc.vecBigImage[59] = "$$$$$$$$$$$$$$#$$$$$@#===###$##$$$$##$$$$#########";

	npc.vecSmallImage.resize(25);
	npc.vecSmallImage[0] = "           .@+           ";
	npc.vecSmallImage[1] = "         +@###@%         ";
	npc.vecSmallImage[2] = "        @###%###@*       ";
	npc.vecSmallImage[3] = "       @####%####@:      ";
	npc.vecSmallImage[4] = "      @###########@      ";
	npc.vecSmallImage[5] = "      %############=     ";
	npc.vecSmallImage[6] = "     @#####@@@#####@     ";
	npc.vecSmallImage[7] = "     #####@@@@@######    ";
	npc.vecSmallImage[8] = "    @###@       ####@    ";
	npc.vecSmallImage[9] = "    ##@ @+     :@ @##%   ";
	npc.vecSmallImage[10] = "   @#@#+ -@   %* .=@@#   ";
	npc.vecSmallImage[11] = "  .%@@-   +# -@    @@#%  ";
	npc.vecSmallImage[12] = "  @#@@  :       :  @@#%  ";
	npc.vecSmallImage[13] = "  @%@@ @@@ : * @@@ @@@#+ ";
	npc.vecSmallImage[14] = " @#@@@  @@:: *.@@  @@@#@ ";
	npc.vecSmallImage[15] = " @#@@@     - =     @@@## ";
	npc.vecSmallImage[16] = " %#@@@  *       .  @@@##:";
	npc.vecSmallImage[17] = " @#@@@% @ .#    @ #@@@## ";
	npc.vecSmallImage[18] = " @##@@@ @       @.@@@##@ ";
	npc.vecSmallImage[19] = "  @#@@@ @ #* .* @.@@@#@  ";
	npc.vecSmallImage[20] = "   @#@@ @@@@%@@@@ @@##   ";
	npc.vecSmallImage[21] = "    @#@   @:.:@   @@#.   ";
	npc.vecSmallImage[22] = "     @%@         @@#.    ";
	npc.vecSmallImage[23] = "      @@@       @@#      ";
	npc.vecSmallImage[24] = "       @%@@@@@@@@#       ";
	
	npc.strContents1 = "나는 누구인가..";
	npc.strContents2 = "어렵고 힘들다..";
	npc.strContents3 = "많은 것들을 배웠다..";
	npc.strContents4 = "좋은 경험이었다..ㅠㅠ";
	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}

