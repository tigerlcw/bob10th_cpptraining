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

void CQuestInfo::QueryNpc(std::vector<ST_NPC_INFO>& vecNPC)
{
    ST_NPC_INFO npc;
    strcpy_s(npc.szName, 21, "김민정");
    npc.patch = 'N';
    strcpy_s(npc.szGreetMessage, 61, "git 어려워요..");

    npc.vecBuffer.resize(60);

    npc.vecBuffer[0] = "                      ,,,,,,,,                    ";
    npc.vecBuffer[1] = "                    ,;#######$-,                  ";
    npc.vecBuffer[2] = "                  ,~$@#@@@@@@#@=,                 ";
    npc.vecBuffer[3] = "                 ,=#@@@@@@@@@@@@=,                ";
    npc.vecBuffer[4] = "                ,=#@@@@@@@#@@@@@@*,               ";
    npc.vecBuffer[5] = "               .!#@@@@@@@#=#@@@@@#*,              ";
    npc.vecBuffer[6] = "               ~=$#@@@@#$*;*$@@@@@#:              ";
    npc.vecBuffer[7] = "              ,!$$#@@#$*!~~:!#@@###*,             ";
    npc.vecBuffer[8] = "              :=$#@@#=*:--,-~=##@@#$:             ";
    npc.vecBuffer[9] = "             -*$$#@#=!:-,,,,-;=#@@##*,            ";
    npc.vecBuffer[10] = "             ~=####=!:-,,..,,~*$#@##$~            ";
    npc.vecBuffer[11] = "             :$#@#$*;~,,...,,-;$####$:            ";
    npc.vecBuffer[12] = "            -*$@@$*;~,......,,~*#####;.           ";
    npc.vecBuffer[13] = "            ~=#@@$!:-.......,,~!$#@##=-           ";
    npc.vecBuffer[14] = "            ~=#@#$*!;;~,..,-:;*$##@@#$~           ";
    npc.vecBuffer[15] = "            :$##=;-,,-,,.,,---,~!#@@@#~           ";
    npc.vecBuffer[16] = "           ,!###!-,,,,,,,,,,,,,-;$#@@#:           ";
    npc.vecBuffer[17] = "           -*##$:-;:!#~,..,,~$;*!=#@@@:           ";
    npc.vecBuffer[18] = "           -=##*-,,-~~-...,,--~-~;*###;           ";
    npc.vecBuffer[19] = "           ~$##!,...,,,...,,,,,,,-;$##$~          ";
    npc.vecBuffer[20] = "           ~$##;,.........,,.....,~*#@#~          ";
    npc.vecBuffer[21] = "           :###;,.  .......,......,!@##~          ";
    npc.vecBuffer[22] = "          ,*###*-.  .......,,....,,!@##~          ";
    npc.vecBuffer[23] = "          -=###$:.....,.,.-,,....,-!@##~          ";
    npc.vecBuffer[24] = "          :$####;,.....,-,--,...,,-*@##~          ";
    npc.vecBuffer[25] = "         ,!$###@;,,.......,,,,,,,-:$@##~          ";
    npc.vecBuffer[26] = "         ,*$###@*-,,,,-,,.,--,,,,-;@##$:          ";
    npc.vecBuffer[27] = "         ~=####@#:,,,,-,,.,--,,,--!@##$;.         ";
    npc.vecBuffer[28] = "        .!$####@@!-,,,,,..,,,,,,-:$@##$;.         ";
    npc.vecBuffer[29] = "        ,=#####@@#:,,,,..,,,,,--:$@@@#$!,         ";
    npc.vecBuffer[30] = "        -$$####@@@*~,,,....,,--:$@@@@#$*,         ";
    npc.vecBuffer[31] = "        -$$$###@@@$:-,,....,,-~*@@@@###*,         ";
    npc.vecBuffer[32] = "        ,=$$###@@@$:---,,,,--~!#@@@@###=-         ";
    npc.vecBuffer[33] = "        -$$#$#@@@@#:------~~~:*#@@@@@@@$:.        ";
    npc.vecBuffer[34] = "        ,=$#$#@@@@#:-,,---~~~:=@@@@@@@@#*,        ";
    npc.vecBuffer[35] = "        ,*$$$#@@@#$:-,,,,---~;=#@@@@@@@@$!.       ";
    npc.vecBuffer[36] = "        .:$$##@@#$=:,,,,,,---;=##@@@@@@@@$:       ";
    npc.vecBuffer[37] = "       .!###@@@@$=!:,,,,,,,,-;=##@@@@@@@@@#:      ";
    npc.vecBuffer[38] = "     ---!##@@@@#=!:~,,.,,,,,-:*=$#@@@@@@@@@$,     ";
    npc.vecBuffer[39] = "   ,,,--:=#@@@#=!;~-,..,,,,,-~:!=$#@@@@@@@@@*~-   ";
    npc.vecBuffer[40] = ",,,,,,--;=$#@@=!:~--,......,,-~:*$$@@@@@@@@@=~--  ";
    npc.vecBuffer[41] = ";-,,-----:*=*=!:--,,........,,,~:*$#@@@@@@@@=~-,. ";
    npc.vecBuffer[42] = ",--,,,--,--:!;~,,.............,-~;=#@@@@@@@#;-,-, ";
    npc.vecBuffer[43] = ",,-,,,,-,,,,,,,,,.............,-~;*#@@@@###=;--,-,";
    npc.vecBuffer[44] = ",-,,,,,,,,,,,,,,,,...........,,-~;*#@##@$=!;-,~---";
    npc.vecBuffer[45] = ",;,,,,,,,,,---,,,,,.........,,,-~*$$$=#=;:~--,~---";
    npc.vecBuffer[46] = ",;,-,-,,,,,---,,,,,,.......,,,,,-:;;!**;~---,,-,--";
    npc.vecBuffer[47] = ",:,,--,,,---,,,,,,,,,,,..,,,,,,,-----~----,-,,-,--";
    npc.vecBuffer[48] = "-:,,--,----,,,,,,,,,~:-,,-,,,,,,,,,,,,,,-------,--";
    npc.vecBuffer[49] = ",~,,,-,,,,,,,,,,,,,-:=:,,-,,,,,,,,,,,,,,----,--,--";
    npc.vecBuffer[50] = ",~----,,,,,,,,,,,,,,-;~,~,,,,,,,,,,,,,,,---,,~-,--";
    npc.vecBuffer[51] = "-~-~~,,,,,,,,,,,,,,,,-,,~-,,,,,,,,,,,,,,-,-,,-,,--";
    npc.vecBuffer[52] = "---:--,,,,,,,,,,,,,,,,,,~,,,-,,,,,,,,,,,-,,-~-,---";
    npc.vecBuffer[53] = "--~~--,,,,,,,,,,,,,,,,,,-,,,,,,,,,,,,,,,,,-~;~--,,";
    npc.vecBuffer[54] = "---:----,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,---:~----";
    npc.vecBuffer[55] = "--~;-~,-,,,,,,,,,,,,,,,,,-,,,,,,,,,,,,,-----~~,,,-";
    npc.vecBuffer[56] = "-,-;-~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,---,---~~~-,,--";
    npc.vecBuffer[57] = ",,-~~-,,,,,,,,,,,,,-,,,,,,,,,,,,,,,-------~~~-,---";
    npc.vecBuffer[58] = "-,-~~-,,,,,,,,,,,-,,,,,.,,,,,,,,,,,,,------;:---,-";
    npc.vecBuffer[59] = "-,-:*--,,,,,,,,,,,,,,,,.,-,,,,,,,,,,,------;;--,,-";

    vecNPC.push_back(npc);

}


void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 14;
    npc.y = 23;
    npc.z = 5;  // 5층
    npc.nNpcID = 155;
    npc.strTrack = "디지털포렌식";
    npc.strName = "김민정";
    npc.nAge = 22;
    npc.strMBTI = "INFP";
    npc.cPatch = 'N';
    npc.strMessage = "자네 나와 함께 MBTI 과몰입해볼 생각 없나?";

    npc.vecSmallImage.resize(25);
    npc.vecSmallImage[0]  = "          .~!!~.         ";
    npc.vecSmallImage[1]  = "         ;#@@@@#:        ";
    npc.vecSmallImage[2]  = "        :@@@##@@#-       ";
    npc.vecSmallImage[3]  = "       -$@#$!!$@@;.      ";
    npc.vecSmallImage[4]  = "      .!##=:--;$##,      ";
    npc.vecSmallImage[5]  = "      ,$#=:,,,-*##;.     ";
    npc.vecSmallImage[6]  = "      ~##!-...,!##$,     ";
    npc.vecSmallImage[7]  = "     .*#=-,..,,~=@#,     ";
    npc.vecSmallImage[8]  = "     ,$$;:!~.,;*=##,     ";
    npc.vecSmallImage[9]  = "     ,#=--~,.,~~~*#,     ";
    npc.vecSmallImage[10] = "     ,#*.........;$*.    ";
    npc.vecSmallImage[11] = "     ~#*,....,..,!#=.    ";
    npc.vecSmallImage[12] = "    .!#=~,...,..,=#=.    ";
    npc.vecSmallImage[13] = "    .=##=,,,,--,-=@=.    ";
    npc.vecSmallImage[14] = "    .*#@=-,,,,,-;$#*.    ";
    npc.vecSmallImage[15] = "    ;$#@@=,..,-~=@#$.    ";
    npc.vecSmallImage[16] = "    ;$#@@=--,-:=@@@#,    ";
    npc.vecSmallImage[17] = "    -#$@@*,,--:$@@@@!    ";
    npc.vecSmallImage[18] = "   .~###$;,,,,:$@@#@#-   ";
    npc.vecSmallImage[19] = " ..:$#@$!~,,,,~!$@@@@$,. ";
    npc.vecSmallImage[20] = ",,,-!=$!~,....,~!#@@@@:-.";
    npc.vecSmallImage[21] = ",,,-,~:,,......-:$@@@$~,,";
    npc.vecSmallImage[22] = ",--,,,,,,.....,-;=$#*;,,-";
    npc.vecSmallImage[23] = "---,,,,,,,...,,,~:::--,--";
    npc.vecSmallImage[24] = "--,-,,,,,--.,,,,,,,,--,--";


    vecNPC.push_back(npc);
}


void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}

// 미리 컴파일된 헤더를 사용하는 경우 컴파일이 성공하려면 이 소스 파일이 필요합니다.