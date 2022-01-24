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
    strcpy_s(npc.szName, 21, "���ֿ�");
    npc.patch = 'p';
    strcpy_s(npc.szGreetMessage, 61, "�ȳ� ~");

    npc.vecBuffer.resize(50);

    npc.vecBuffer[0]    = "                                           r1@@@@@@@@@@6G4kw6@@@@kk % @@@@@@@n!                                      ";
    npc.vecBuffer[1]    = "                                        h@@@@kF11oy * kVwEAHHHW@@@@@@k2F2k@@@@@@c`                                   ";
    npc.vecBuffer[2]    = "                                    L@@31F * 4dGGGd3w4VVkkkkkP * 4@@@@@@UUEw6@@@@@@                                  ";
    npc.vecBuffer[3]    = "                                   `!!v@624Hd4kkkkkkkVV444kkkkVV4Pk@@@@@wkdG@@@@@@@@(                                ";
    npc.vecBuffer[4]    = "                                )V@@@@@@& W4kVV4ww444VVVV44kkkkkkkkVPH@@@@6P444@@@@@@@@.                             ";
    npc.vecBuffer[5]    = "                              s@@@@U6W@@Gw33wE3wE33444VVVVVVVkkkkPkVkk@@@@@PVd4@@@@@@@@<                             ";
    npc.vecBuffer[6]    = "                            , @@@@@@@@@@6HGE3dd@@Gdd33444VVVVVVkkkkkkkVk@@@@@k46W@@@@@@@@*                           ";
    npc.vecBuffer[7]    = "                           -@@@@@@@@@@@@6HHHHH@@@HHGG33ww4VVVVVVVkkkkkw3@@@@W4H@@@@@@@@@@Q                           ";
    npc.vecBuffer[8]    = "                           @@@@@@@@@@@@@@WW6 % 0@@@@WH6HGdd344444444VVV4wG0@@@@d6@@@@@@@@@@n                         ";
    npc.vecBuffer[9]    = "                          *@@@@@@@@@@@@@@@@@@@@@@@H@W@@HAGE33333EEEEEEdHH@@@@@W@@@@@@@@@@@@_                         ";
    npc.vecBuffer[10]   = "                        `@@@@@@@@@@@@@@@@@@@@@@ & @d@W@@0WH % HHHHHGHHHHH6 & @@@@@@@@@@@@@@@                         ";
    npc.vecBuffer[11]   = "                        c@@@@@@@@@@@@@@@@@@@@@@n@W@@@@@@W@@WWW@WW@@@@@@@@@@@@@@@@@@@@@@@@@@,                         ";
    npc.vecBuffer[12]   = "                        @@@@@@@@@@@@@@@@@@@@@@@f@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@c                         ";
    npc.vecBuffer[13]   = "                        @@@@@@@@@@@@@@@@@@@@@@0_Q@@@@6@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@C                         ";
    npc.vecBuffer[14]   = "                       @@@@@@@@@@@@@@@@@@@@@@K - E@@@@I@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                         ";
    npc.vecBuffer[15]   = "                       @@@@@@@@@@@@@@@@@@@@@@2.2@@@0>@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@V                          ";
    npc.vecBuffer[16]   = "                       @@@@@@@@@@@@@@@@@@@@@@u.v@@@6f@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@7                          ";
    npc.vecBuffer[17]   = "                        @@@@@@@@@@@%>F6&Q0#&%F`''+C2+!)x*ykkE$$$$EVyP%&KQ@@K6K@@@@@@@@@@@@@+                         ";
    npc.vecBuffer[18]   = "                        ?@@@@@@Ky7<'-(&@@@@@@@6?f!'r_,,;frrf((+LLcY%Q@@@@@@@@kun7x1#@@@@@@@-                         ";
    npc.vecBuffer[19]   = "                       :@@@@#<('!_-+Gu](rrff)L]><:,,........,-::Lv?>]+)frr+n62';;'<7@@@@@@                           ";
    npc.vecBuffer[20]   = "                        @@@@6)('_:-:,.'`` ``''''.,,,,.'''''..,,,,'''``````'..--:_;f(4@@@@@                           ";
    npc.vecBuffer[21]   = "                        C@@@o(('_:-,.`'',:.'''',-,,,,.'''''.,,,,-,.'.....''`',-:_;ffI@@@@f                           ";
    npc.vecBuffer[22]   = "                         @@@C(('_:-.:<vK3x@@QIf-.---,.''``'.,---.,;?7W@@@Qh>'.,-_;f)c@@@#                            ";
    npc.vecBuffer[23]   = "                       ._-@@v+(;_::Lv:f@' @@@@@@n;::-.'```'.,::_c6@P @@@@@s.<?!-:;f)]K@k!_                           ";
    npc.vecBuffer[24]   = "                       r?r;:_cf'_--,  +@@@@@@@@?,]f!:,'`  `.-!']:'@@@@@@@@x  `:,_;fL(.Lf<<                           ";
    npc.vecBuffer[25]   = "                       ,:(+;'));_:,`` `4@@@@@P7`  _:,'`   `',-_`  u@@@@@Fu- ``.-_;r],_))_:                           ";
    npc.vecBuffer[26]   = "                       ',-fc_')'_:-,'`  '.,.``   ``''`     ``'```  .,,.`   `',-:_!+:.L)_,,                           ";
    npc.vecBuffer[27]   = "                        ,-r<?:,'_:-,.'``                                  ``.,-:_;!,L[f:,                            ";
    npc.vecBuffer[28]   = "                           ``                                                       ``                               ";
    npc.vecBuffer[29]   = "                 ,'``````````````````````````                                                  '                     ";
    npc.vecBuffer[30]   = "                 ..``````````````````````                                                      `                     ";
    npc.vecBuffer[31]   = "                 ..'''''''''``````````````````````````                                        ``                     ";
    npc.vecBuffer[32]   = "                 ',''''''''''''''````````````````````````````                                 `                      ";
    npc.vecBuffer[33]   = "                  -'...'.'''''''''''''''''''```````````````````````````                       '                      ";
    npc.vecBuffer[34]   = "                  :............'..'''''''''''''''''`````````````````````````````              .                      ";
    npc.vecBuffer[35]   = "                  _.,......................''''''''''''''''''`````````````````````````````  ` .                      ";
    npc.vecBuffer[36]   = "                  _,,,,,,,..,...................'...''''''`''''''''''''`````````````````````` ,                      ";
    npc.vecBuffer[37]   = "                  _,-,,,,,,,,,,,,,,..,,.................'  ...'''''''''''''''''```````````````,                      ";
    npc.vecBuffer[38]   = "                  !--------,,,,,,,,,,,,,,,.,,,.......`       .......''''''''''''''''''''''```',                      ";
    npc.vecBuffer[39]   = "                  !:-----------------,,,,,,,,,,,,,,.        `.................''.''''''''''''',                      ";
    npc.vecBuffer[40]   = "                  __-:-----------------------,,,,,,,        .,,,.......................'..'''.,                      ";
    npc.vecBuffer[41]   = "                  :!::::::::::----------------------.        .,,,,,,,,,,,,,.................',.                      ";
    npc.vecBuffer[42]   = "                  -;:_::_:::::::::::::-:-------------,``'` `,-,-,,,,,,,,,,,,,,,,,............-'                      ";
    npc.vecBuffer[43]   = "                  ,':___________:::::::::::::::::----:--:--:------------,,,,,,,,,,,,,,,,,,,,.:'                      ";
    npc.vecBuffer[44]   = "                  'r_!________________:__:_:::::::::::---------------------------,,-,,,,,,,,._`                      ";
    npc.vecBuffer[45]   = "                  `f_!__________________________:_::::::::::::::::--------------------------,_'                      ";
    npc.vecBuffer[46]   = "                  _'!!!!!!!!!!!!!!!_____________________:::::::::::::::::::-:----------------_!                      ";
    npc.vecBuffer[47]   = "                 '_';!!!!!!!!!!!!!!!!!!!____!______________________::::::::::::::::::--------!,-                     ";
    npc.vecBuffer[48]   = "                 -,f;!!!!!!!!!!!!!!!!!!!!!!!!__________________________:___::::::::::::::::-:;...                    ";
    npc.vecBuffer[49]   = "                -..r;;;;;;;;;;;;;;;;;;;;;;;;;;;;!!!!!!!!!!!!!!!!!!!!!!!!!!!__________________!.`:                    ";
    
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
