#include "pch.h"
#include "QuestInfo.h"

static CQuestInfo g_QuestInfo;

CQuestInfo::CQuestInfo(void)
{
	ExportAPIEntry(this);
}

CQuestInfo::~CQuestInfo(void)
{
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.x = 1;
	npc.y = 2;
	npc.z = 23;
	npc.nNpcID = 133;
	npc.strTrack = "보안제품개발트랙";
	npc.strName = "걱정많은승현";
	npc.nAge = 25;
	npc.strMBTI = 'ESTJ';
	npc.cPatch = 'H';
	npc.strMessage = "못 따라갈거같아 걱정이되는구만! :(";
	npc.strContents1 = "";


	npc.vecBigImage.resize(75);
	npc.vecBigImage[0] = "                         .     -**:-.                           ";
	npc.vecBigImage[1] = "                    ,:=$$$=*;;$######$;-                     	 ";
	npc.vecBigImage[2] = "                  .!=###################=,                   	 ";
	npc.vecBigImage[3] = "                 .$#######################*                  	 ";
	npc.vecBigImage[4] = "                :$#########################$.                	 ";
	npc.vecBigImage[5] = "               :$$###########################,               	 ";
	npc.vecBigImage[6] = "              .$$$###################@########,              	 ";
	npc.vecBigImage[7] = "              =$$$###############@###@########$              	 ";
	npc.vecBigImage[8] = "             ,$$$###################@@@@#######$             	 ";
	npc.vecBigImage[9] = "             =$$###################@##@#@#######~            	 ";
	npc.vecBigImage[10] = "           ~$$$########@@#$=$########@#@##@#####            	 ";
	npc.vecBigImage[11] = "           *$$$############=*==##@##@@@@########~           	  ";
	npc.vecBigImage[12] = "          .$$$$##########$=!;:;*$####@@@########*           	  ";
	npc.vecBigImage[13] = "          ;$$$$#######$=*!:~~~~:!$#@#@#####@#####           	  ";
	npc.vecBigImage[14] = "          !$$$#$##$$$=!;:~-----~~*#@#############.          	  ";
	npc.vecBigImage[15] = "          $$$$$#$$$=*;~-,,,..,,-~!###############.          	  ";
	npc.vecBigImage[16] = "          $$$$##$==;~-,.......,,-;$##$###########.          	  ";
	npc.vecBigImage[17] = "          =$$$#$==;-,..........,-:=#$$#$#########!          	  ";
	npc.vecBigImage[18] = "         ~=#$$#$=;-,..   ......,,:=$$=$=#########*          	  ";
	npc.vecBigImage[19] = "         !$#$$#=!~,...   ......,,:;**=**=$#######*          	  ";
	npc.vecBigImage[20] = "         =$##$#=:,,...    ......,:~=**=;!*=!$####*          	  ";
	npc.vecBigImage[21] = "         =$#$$$!-,...   ........,:~=;**:;:;~*####*          	  ";
	npc.vecBigImage[22] = "         =$$$$=:,,....  ........--:;;!:~~~--:=###*          	  ";
	npc.vecBigImage[23] = "         =$$$=;-,,,,... ........,~~-~:~-~----;=##*          	  ";
	npc.vecBigImage[24] = "         *$$$;-,,-~~~~-,,.......,,,--~~~~~~---*$#!          	  ";
	npc.vecBigImage[25] = "         ;$$=-,,,:;!!!!:~-,.....,,-~;!!!;;;~--;$#!          	  ";
	npc.vecBigImage[26] = "         ,$#!,,,~~~~:::::~-,...,,-~;!;!;::::-,~$#;          	  ";
	npc.vecBigImage[27] = "          =$!,,,--,,,,,----,...,-~~~~--,,----,~$#~          	  ";
	npc.vecBigImage[28] = "          !$;..,,,,.,,,,,,,,...,---,,,,,,,,,,,-$$           	  ";
	npc.vecBigImage[29] = "          ~$:...,,,~;*$*,,,,...,,,--!=$!;--,,,-$=-,         	  ";
	npc.vecBigImage[30] = "         ,-*:...,,::,=#*;,... ..,,,;~$$~~;~-,,-=:~~         	  ";
	npc.vecBigImage[31] = "         -.::...,----~:~~,... ..,.,~~:;~~~~-,,-!,--         	  ";
	npc.vecBigImage[32] = "         ,.-~....,,,..,,,.......,..,-,,.,,-,,,--,--         	  ";
	npc.vecBigImage[33] = "         ...-................ .,,...,,,,,,,,,,-~,-.         	  ";
	npc.vecBigImage[34] = "          .,-..................,,..........,,,-~,,          	  ";
	npc.vecBigImage[35] = "          .,,.....   ...........,,..........,,---.          	  ";
	npc.vecBigImage[36] = "           ,.,....    ......  ..,,..........,,---           	  ";
	npc.vecBigImage[37] = "          ...,....    ..,,..   .,,,,........,,-,,           	  ";
	npc.vecBigImage[38] = "           ..,....    ..,...   .,,,,........,,--.           	  ";
	npc.vecBigImage[39] = "           ..,....   ..,,...  .,,,,-,.......,,--.           	  ";
	npc.vecBigImage[40] = "            .......  ..,...~,.,-~,-,,......,,,,,            	  ";
	npc.vecBigImage[41] = "            .......  .....,,,,,,--,,,,.....,,,,,            	  ";
	npc.vecBigImage[42] = "            ....... ............,,,,,,.....,,,              	  ";
	npc.vecBigImage[43] = "               .................,,,,,,.....,,.              	  ";
	npc.vecBigImage[44] = "               ...............,,,,,,,,.....,,.              	  ";
	npc.vecBigImage[45] = "               ........,~,--,,-----~-,....,,,               	  ";
	npc.vecBigImage[46] = "                .......-:~~~~--~::::-,...,,,,               	  ";
	npc.vecBigImage[47] = "                ,.......,,-,.,,,,--,,,..,,,,.               	  ";
	npc.vecBigImage[48] = "                .,.......,,,.,,,,,,,,.,,,,,-                	  ";
	npc.vecBigImage[49] = "                 ,.........,,,,,,,,..,,,,,,                 	  ";
	npc.vecBigImage[50] = "                 ,,.........,,,,,....,,,,,-                 	  ";
	npc.vecBigImage[51] = "                 .,,,..............,.,,,,--                 	  ";
	npc.vecBigImage[52] = "                  ,,,,..............,,,,--~~                	  ";
	npc.vecBigImage[53] = "                 :.,,,,,...........,,,----~$.               	  ";
	npc.vecBigImage[54] = "                 $..,,-,,,.......,,,,-----~$;               	 =";
	npc.vecBigImage[55] = "                -$~..,,---,,,,,,,,--------;#$               	 #";
	npc.vecBigImage[56] = "                =$!,..,,----------~------~$#$;              	 #";
	npc.vecBigImage[57] = "               -$$$~,,,,,,-~~~~~~~---,--~*##$$.             	 #";
	npc.vecBigImage[58] = "               ;$$$$-,,,,,,---~~--,,,--~!####$:.            	 #";
	npc.vecBigImage[59] = "              .;$$$$$~,,,,,,,,-,,,,,--~;$####$:~-           	 #";
	npc.vecBigImage[60] = "              .:$$$$$=:,,,,,,,,,-----~;######=:~~~-,        	 #";
	npc.vecBigImage[61] = "          .---,-$$$$$$$~,,,,,,,-----~!#######*:~~~~:-       	 #";
	npc.vecBigImage[62] = "        --~~----;$#$$$#$:-,,,,,,,,-~!########;:~~~::~~~     	 #";
	npc.vecBigImage[63] = "     ,----~~----~$$$$$$$#;-,,,,,--~!########*:~~~~~:~~~:~,  	 #";
	npc.vecBigImage[64] = "  .-------~~-----:##$$$###!~-,,-~:*#########;:~~~~::~~~~~~~,	 #";
	npc.vecBigImage[65] = ",----------~------*#####@@#$~--~:*#########!~~~-~~:~~~~~~~~~	 #";
	npc.vecBigImage[66] = "-----------~------~###$#@@###!:;$#@#######$~~~-~~:~~~~~~~~~~	 #";
	npc.vecBigImage[67] = "-------------------;####@@###$=###@@######:----~~~-~~~-:~~~~	 #";
	npc.vecBigImage[68] = "------------~-------*###@@########@@#####;------~--~~~-~~~~-	 #";
	npc.vecBigImage[69] = "---------------------=##@@########@@####;~--------~~--~~~-~~	 #";
	npc.vecBigImage[70] = "----------------------=#@@#######@@@###;-----~~~-~-----~~~~-	 #";
	npc.vecBigImage[71] = "----------------------~$##########@@##!------~~~-~-~--~~~~~-	 #";
	npc.vecBigImage[72] = "-----------------------~#############!~-------~--~~--~~~~~--	 #";
	npc.vecBigImage[73] = "-----------------,------~###########;---------~---~~--~~~-~~	 #";
	npc.vecBigImage[74] = "-------------------------~$########:----~----~----~----~~~--	 #";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}