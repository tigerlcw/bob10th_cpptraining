#include "pch.h"
#include "QuestInfo.h"
#include "MiniGame.h"

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
	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 12;
		npc.y = 2;
		npc.z = 20;

		npc.nNpcID = 128;
		npc.strTrack = "보안개발트랙";
		npc.strName = "방황하는상현";
		npc.nAge = 25;
		npc.strMBTI = "UNKNOWN";
		npc.cPatch = 'P';
		npc.strMessage = "으으...\n"
			"게임 개발 지긋지긋해..\n"
			"두번 다시 안할거야.";

		npc.vecBigImage.push_back("                                                  ");
		npc.vecBigImage.push_back("                                                  ");
		npc.vecBigImage.push_back("                    ........                      ");
		npc.vecBigImage.push_back("                  .,,.-.,.,,,,                    ");
		npc.vecBigImage.push_back("                 -.,. ,...-~~~-,                  ");
		npc.vecBigImage.push_back("                ,-:, .  .,.,..  -,                ");
		npc.vecBigImage.push_back("                ~-.. .... ..,.... .               ");
		npc.vecBigImage.push_back("              ..,,,...,-,-.......-.               ");
		npc.vecBigImage.push_back("             .,: -.   ..,,,..   .-,.              ");
		npc.vecBigImage.push_back("             .~,~.     ..,-,,..    ..             ");
		npc.vecBigImage.push_back("              ,!-~-..  .... :~.-,   .             ");
		npc.vecBigImage.push_back("            -,    . ..   ,, -,.,~..               ");
		npc.vecBigImage.push_back("           .-.   . .,,., ., ,-,.,--..             ");
		npc.vecBigImage.push_back("           ,.    -.,,.-,..,. ~,.,,--,             ");
		npc.vecBigImage.push_back("           ., .  --,~,,,,,,,..,-,~-.-,            ");
		npc.vecBigImage.push_back("           ,,    -~,~...,,.~--~-:.-,,,            ");
		npc.vecBigImage.push_back("            ,  ,.,,,-~~..,,.~;:;~~---,            ");
		npc.vecBigImage.push_back("           ..  ,-.,,,~~-.,-:;:----,,,             ");
		npc.vecBigImage.push_back("           .. .-:-..-:~::-,~~!-.,,,..             ");
		npc.vecBigImage.push_back("              ,-~~,;;;~,--~,.:~...,-.             ");
		npc.vecBigImage.push_back("             ..-,;;,.;!-  --- .   ,.              ");
		npc.vecBigImage.push_back("              .~-~-~;;-..-. -     ~               ");
		npc.vecBigImage.push_back("             ..~.~~~,-..          ~               ");
		npc.vecBigImage.push_back("             .,-, ,,,             ~               ");
		npc.vecBigImage.push_back("   -,         .,...,              .               ");
		npc.vecBigImage.push_back("      ,         ..-:,      ~.    .            .~, ");
		npc.vecBigImage.push_back("       ...         ..         .  !         . ~    ");
		npc.vecBigImage.push_back("         .          ,~   .  .   ,:       ..,      ");
		npc.vecBigImage.push_back("            ,        ~-         ,~      ,.        ");
		npc.vecBigImage.push_back("             .      ,, .       ...    -           ");
		npc.vecBigImage.push_back("              .::      ~,.    ,...   .            ");
		npc.vecBigImage.push_back("                --.      :!-,-~....,~:~:          ");
		npc.vecBigImage.push_back("                 -,      :=*;*;.    ~;:~,.        ");
		npc.vecBigImage.push_back("                 -,.     :*=:*:     .,.~,.        ");
		npc.vecBigImage.push_back("                 -,-.    ~*=**~        -.,.       ");
		npc.vecBigImage.push_back("                 ---  . ,!***!-         .         ");
		npc.vecBigImage.push_back("                 ..,    -!***!-  .      -         ");
		npc.vecBigImage.push_back("                  ..    -!!*!;-         . .       ");
		npc.vecBigImage.push_back("                        ,;;~;:,                   ");
		npc.vecBigImage.push_back("               . .-     ,:; :~,          .        ");
		npc.vecBigImage.push_back("                 ,      ,::.~-.          . ,      ");
		npc.vecBigImage.push_back("                .       .~:---.            .      ");
		npc.vecBigImage.push_back("               ..       .,-~,,.          ..       ");
		npc.vecBigImage.push_back("                         ..-..           .        ");
		npc.vecBigImage.push_back("                                                  ");

		npc.vecSmallImage.push_back("            ......            ");
		npc.vecSmallImage.push_back("          ,,.-..-~.           ");
		npc.vecSmallImage.push_back("         .-,  . ,, ,.         ");
		npc.vecSmallImage.push_back("         ., .,,~....,         ");
		npc.vecSmallImage.push_back("        -~,    ..  ...        ");
		npc.vecSmallImage.push_back("       ..~-.. .-.~ -..        ");
		npc.vecSmallImage.push_back("       -  . ,. , -.,-.        ");
		npc.vecSmallImage.push_back("       .  -,~-,.,-,,-,.       ");
		npc.vecSmallImage.push_back("       , .-,~,,.,-::--,       ");
		npc.vecSmallImage.push_back("       . -..,~,,:;---~        ");
		npc.vecSmallImage.push_back("       ..~~-:~~,,;,,,,        ");
		npc.vecSmallImage.push_back("        .~:,::.,,   -         ");
		npc.vecSmallImage.push_back("        ,~~~..      ~         ");
		npc.vecSmallImage.push_back("  ,     ., ,        ,         ");
		npc.vecSmallImage.push_back("    .     .-    ,   .      ., ");
		npc.vecSmallImage.push_back("     .      -  , . ,.    .    ");
		npc.vecSmallImage.push_back("       ,.   ,,     .          ");
		npc.vecSmallImage.push_back("         -,   .-  -. ,--      ");
		npc.vecSmallImage.push_back("          -    =**:   ;~,     ");
		npc.vecSmallImage.push_back("          --   *=*.    -.     ");
		npc.vecSmallImage.push_back("          ,~ . **!.     .     ");
		npc.vecSmallImage.push_back("           .   !*;      ..    ");
		npc.vecSmallImage.push_back("          .    ;.~      .     ");
		npc.vecSmallImage.push_back("          .    :,-      .     ");
		npc.vecSmallImage.push_back("         .     -~.       .    ");

		npc.strContents1 =
			"으윽...\n"
			"아이고.. 아야...\n"
			"...\n"
			"여.. 여긴?\n"
			"타임머신이 성공한건가?\n"
			"정신이 몽롱하군...\n"
			"...\n"
			"......\n"
			"(바깥 경치를 바라본다.)\n"
			"여기 2004년 맞는거지?\n"
			"뭔가 낯설어.\n"
			"저건 뭐지?\n"
			"사람들 옷차림도 특이하고...\n"
			"(저 멀리 전광판 시계가 빛난다)\n"
			"?!?! 2022년도?\n"
			"설마...\n"
			"나 과거가 아니라 미래로 온건가?\n"
			"아---아!!\n"
			"아--------아!!!!\n"
			"아--------------악!!!!!!!!\n"
			"2022년이라니!!!\n"
			"아직 타임머신이 불완전한건가!! 2004년으로 가야 했었는데...\n"
			"...\n"
			"... 망했다 ㅠㅠ\n"
			"여길 어떻게든 벗어나보자.\n"
			;

		npc.strContents2 = 
			"어쩌다보니 보안인이 돼버렸네.\n"
			"난 보안이 뭔지도 모르는데?\n"
			"어쩌다...? 이렇게...?\n"
			"타임머신이 고장나서?\n"
			"아니...\n"
			"원래 보안공부하게 될 운명이었나보다.\n"
			"그래서 미래의 내가 이곳 광장에 있는지 모르지.\n"
			"대학교 수업도 안들어서 그런지 정말 힘들다.\n"
			"...\n"
			"어떤일이든 쉬운 것은 없지.\n"
			"기왕 시작했으니 목숨걸고 해보자.?\n"
			"한 번 걸어봤으니.. 쿨럭 ㅠ\n"
			"이제 팀 프로젝트랬나?\n"
			"맘에 맞는 친구들 모아서 타임머신이나 고쳐봐야겠다.\n"
			"근데 내가 친구가 누가 있더라...\n"
			"...\n"
			"......\n"
			"힝 친구가 없네 ㅠㅠ\n"
			"괴팍한 성격좀 고쳐놓을걸\n"
			"미래의 나는 좀 달라졌으려나?\n"
			"혼자라도 고고.. 외롭다. ㅠㅠ\n"
			;
		npc.strContents3 =
			"헉헉....\n"
			"헉헉헉헉....\n"
			"헉헉헉헉헉헉헉헉....\n"
			"헉헉헉헉헉헉헉헉헉헉헉헉헉헉헉헉헉헉....\n"
			"목숨걸고 했더니 목숨 날아갈 뻔...\n"
			"특히 마지막 발표 때 똥싸서 영 찜찜해...\n"
			"하긴 생각해보면 모든 발표를 잘한 적이 없어.\n"
			"혼나기만 하고 어흑흑.\n"
			"타임머신 고치기 주제를 잘못잡았나봐.\n"
			"막판까지 데모를 못했네.. 도대체 왜 안된거지?\n"
			"(... 갑자기 못찾던 버그를 발견한다.)\n"
			"어 이거 뭐여. if문 조건이 뒤집혔네?\n"
			"다시 돌려보자.\n"
			"(잠시후...)\n"
			"아나...\n"
			"아나......\n"
			"아나...............\n"
			"!@(%!(@&(#$*!@(*!@$*($@!*%&%!!\n"
			"타임머신 잘도는데? 내가 완전 잘못한게 아니네!!\n"
			"아 발표 울렁증... 데모의 법칙만 아니었어도 으아...\n"
			"지금 당장 과거로 가버릴까?\n"
			"...\n"
			"......\n"
			"..........아냐\n"
			"기왕 여기까지 온거 수료는 하고가자.\n"
			"3차 교육은 좀 쉽겠지 머.\n"
			;
		npc.strContents4 = 
			"컥...~~~~~~~ 나 살아있는건가?\n"
			"(여기저기 손발을 살짝씩 움직여본다.)\n"
			"큭... 몸이 말을 잘 안듣네.\n"
			"날을 너무 많이 샜나봐...\n"
			"아이고 머리가 무식하면 고생한다고\n"
			"미안하다 내 몸아 ㅠㅠ\n"
			"...\n"
			"으응?\n"
			"근데 뭔가 이상한데.\n"
			"갑자기 이건 뭐지? 주변의 세상이 0과 1로 보이기 시작해\n"
			"이거 매트릭스 네오가 돼버린건가?\n"
			"타이머신 정도는 이제 가볍게 만들 수 있을 것 같은데?\n"
			"이게 BoB 수료생의 힘인건가..!! 나 뭔가 엄청 강해진것 같아!!\n"
			"와 이대로 다시 과거로 돌아간다면 난 편히 살 수 있겠지?\n"
			"그래도 게임은 다신 개발안할거야 우우우우...\n"
			"와 나 계탔어!! 이제 개발로 연봉 1억 2억 3억 받을래!!\n"
			"(이때 뒤에서 코웃음 치는 전상현 멘토)\n"
			"(흥 내가 저랬었지.. 하지만 현실은...)\n"
			;
		vecNPC.push_back(npc);
	}
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 256;
	stObject.strName = "낙서한 듯한 쪽지";
	stObject.cPatch = '+';	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
	stObject.x = 24;
	stObject.y = 3;
	stObject.z = 20;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
	ST_QUEST_ITEM_DATA item;
	item.btId = 135;
	item.nHP = 0;
	item.nMP = 0;
	item.strName = "어린상현쪽지";
	item.strDesc = "2005년 그 때의 기억만 떠올리면 아직도 두렵다.. 미래의 나는 잘 지내고 있니?";
	vecQuestItem.push_back(item);
}

void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("우우... 지친다 지쳐...");
		stQuest.vecMessages.push_back("게임 개발 정말 지긋지긋해");
		stQuest.vecMessages.push_back("48시간 동안 꼼짝도 못하고 코딩만 했다구");
		stQuest.vecMessages.push_back("나를 위해 음료 하나만 사다주겠어?");
		stQuest.vecMessages.push_back("참 난 커피를 못먹어서 다른걸로...");
		stQuest.ClearCondition = ST_FILTER(128, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// 분수대
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 10011;
		stQuest.StartCondition = ST_FILTER(128, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("어서옵쇼!");
		stQuest.vecMessages.push_back("어떤 커피 드실건가요?");
		stQuest.vecMessages.push_back("(커피는 못먹는다는데요?)");
		stQuest.vecMessages.push_back("갑자기요? 근데 여기 커피숍인데요?");
		stQuest.vecMessages.push_back("(커피 말고 아무거나 시원한거 주세요)");
		stQuest.vecMessages.push_back("아.무.거.나 알겠습니다.");
		stQuest.vecMessages.push_back("뚝딱");
		stQuest.vecMessages.push_back("뚝딱뚝딱");
		stQuest.vecMessages.push_back("뚝딱뚝딱뚝딱뚝딱");
		stQuest.vecMessages.push_back("자요!");
		stQuest.vecMessages.push_back("[뭔가 대충 만든듯한 음료]를 받았다.");
		stQuest.vecMessages.push_back("이제 다시 방황하는상현에게로 돌아가자.");
		stQuest.ClearCondition = ST_FILTER(128, 0x0007);
		vecQuest.push_back(stQuest);
	}
	

	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("엇? 정말 사온거야");
		stQuest.vecMessages.push_back("[뭔가 대충 만든듯한 음료]를 전달했습니다.");
		stQuest.vecMessages.push_back("정말 고마워 잘 마실게.");
		stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽");
		stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽");
		stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽");
		stQuest.vecMessages.push_back("...");
		stQuest.vecMessages.push_back("푸핫~ 살것 같다. 나 방금 죽을 뻔 했었어.");
		stQuest.vecMessages.push_back("맛이 좀 이상하긴 하지만.. 미래의 맛인가 보지.");
		stQuest.vecMessages.push_back("응?");
		stQuest.vecMessages.push_back("도대체 왜 그지경이 될 때까지 코딩했냐고?");
		stQuest.vecMessages.push_back("그건... 전상현 멘토님께 여쭤봐.");
		stQuest.ClearCondition = ST_FILTER(128, 0x000F);
		vecQuest.push_back(stQuest);
	}

	// 전상현 멘토
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 27;
		stQuest.StartCondition = ST_FILTER(128, 0x0007, 0x000F);
		stQuest.vecMessages.push_back("뭐야? C++ 공부하러 온거야?");;
		stQuest.vecMessages.push_back("...");
		stQuest.vecMessages.push_back("... 아니 그렇게까지 머리를 거칠게 흔들 필요는 없잖아.");
		stQuest.vecMessages.push_back("뭐? 누가 나한테 물어보라고 했다고?");
		stQuest.vecMessages.push_back("그게 또다른 전상현이라고?");
		stQuest.vecMessages.push_back("하하하하");
		stQuest.vecMessages.push_back("하하하하하하하하");
		stQuest.vecMessages.push_back("하하하하하하하하하하하하하하하하");
		stQuest.vecMessages.push_back("말 같잖은 소리. 자네는 아무래도 공상과학 영화를 너무 많이 본것 같네.");
		stQuest.vecMessages.push_back("혹시 모르지 어떤 증거가 있으면 내가 믿을지도.");
		stQuest.ClearCondition = ST_FILTER(128, 0x001F);
		vecQuest.push_back(stQuest);
	}

	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x000F, 0x001F);
		stQuest.vecMessages.push_back("사정은 잘 들어봤어?");
		stQuest.vecMessages.push_back("전상현 멘토님이 날 안 믿는다고?");
		stQuest.vecMessages.push_back("뭐야 미래에는 물리학과 생물학이 아직 발달하지 않은거야?");
		stQuest.vecMessages.push_back("2022년쯤 되면 얼마든지 시공간을 자유자재로 다닐 수 있어야 하는것 아니던가.");
		stQuest.vecMessages.push_back("멍게소리냐고?");
		stQuest.vecMessages.push_back("난 사실 과거에서 왔어.");
		stQuest.vecMessages.push_back("저 구석에 쪽지를 가지고 전상현 멘토님께 가봐.");
		stQuest.vecMessages.push_back("20층의 (24, 3) 지점을 조사해보자.");
		stQuest.ClearCondition = ST_FILTER(128, 0x003F);
		vecQuest.push_back(stQuest);
	}
	// 쪽지
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 256;
		stQuest.StartCondition = ST_FILTER(128, 0x001F, 0x003F);
		stQuest.vecMessages.push_back("엇!?");
		stQuest.vecMessages.push_back("뭔가 바닥에 떨어져 있어!!");
		stQuest.vecMessages.push_back("이게 그 쪽지인가보다.");
		stQuest.vecRewardItems.push_back(135);
		stQuest.ClearCondition = ST_FILTER(128, 0x003F);
		vecQuest.push_back(stQuest);
	}
	// 전상현 멘토
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 27;
		stQuest.StartCondition = ST_FILTER(128, 0x003F, 0x007F);
		stQuest.vecMessages.push_back("또 왔네?");
		stQuest.vecMessages.push_back("이번엔 증거를 들고 왔다고?");
		stQuest.vecMessages.push_back("아까 주운 쪽지를 건네준다.");
		stQuest.vecMessages.push_back("앗 이건...");
		stQuest.vecMessages.push_back("이... 지렁이가 기어가는 악필");
		stQuest.vecMessages.push_back("형편없는 글 솜씨...");
		stQuest.vecMessages.push_back("분명 내가 맞군. 믿을 수가 없지만 사실이야..!!");
		stQuest.vecMessages.push_back("응? 그래서 그 친구가 왜 48시간동안 코딩하다 왔냐고 대답들어보라 했다고?");
		stQuest.vecMessages.push_back("아 그 시절인가.");
		stQuest.vecMessages.push_back("내가 갓 25살이 되던 때 외주 개발로 게임을 만들었지.");
		stQuest.vecMessages.push_back("일정이 한참이나 지났지만 버그가 득실득실해서 도저히 오픈할 수가 없었어.");
		stQuest.vecMessages.push_back("그래.. 도저히.");
		stQuest.vecMessages.push_back("그러던 중 조폭들이 움직인거야.");
		stQuest.vecMessages.push_back("알고보니 우리가 맡았던 프로젝트가 조폭들의 돈으로 굴러가던 것이었지.");
		stQuest.vecMessages.push_back("아마 그당시는 48시간 동안 죽도록 코딩하고 간신히 탈출해온 그 시점인 것 같다.");
		stQuest.vecMessages.push_back("아마도 타임머신 기술이 불완전해서 과거가 아니라 미래로 와버렸나보군.");
		stQuest.vecMessages.push_back("난 그 이후로 같은 상황을 또 겪을지도 모른다는 생각에 열심히 살아왔다구.");
		stQuest.vecMessages.push_back("지금도 그때만 생각하면 으으...");
		stQuest.vecMessages.push_back("너도 코딩공부 안해뒀다간 앞으로 어떤 일을 당할지 모른다구.");
		stQuest.vecMessages.push_back("그나저나 그 녀석과 같이 플젝해봐.");
		stQuest.vecMessages.push_back("쓸만할지도..?");
		stQuest.vecMessages.push_back("무식해도 노력파니까.");
		stQuest.ClearCondition = ST_FILTER(128, 0x00FF);
		vecQuest.push_back(stQuest);
	}

	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x007F, 0x00FF);
		stQuest.vecMessages.push_back("후후 그 놀란 표정을 보니 잘 확인하고 왔나보군.");
		stQuest.vecMessages.push_back("진짜 어린 전상현이 맞다구.");
		stQuest.vecMessages.push_back("난 25살이야.");
		stQuest.vecMessages.push_back("너희와 같은 또래지.");
		stQuest.vecMessages.push_back("즉 BoB 교육과정을 멘티로서 같이 보낼 수 있다는 말이야.");
		stQuest.vecMessages.push_back("나와 팀하자. C++ 개발은 확실히 서포트 해줄게.");
		stQuest.vecMessages.push_back("못 믿겠다고? 나의 Helloworld를 받아랏(ESC로 창을 닫아본다.)");
		stQuest.pClearGame = new CMiniGame();
		stQuest.ClearCondition = ST_FILTER(128, 0x01FF);
		vecQuest.push_back(stQuest);
	}

	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x01FF, 0xFFFF);
		stQuest.vecMessages.push_back("흥, 이정도라구 ㅋ");
		stQuest.vecMessages.push_back("나를 캐릭터로 선택하면 나와 함께 BoB를 수료할 수 있어.");
		stQuest.vecMessages.push_back("다음번엔 [방황하는상현] 캐릭으로 게임해보자.");
		stQuest.ClearCondition = ST_FILTER(128, 0xFFFF);
		vecQuest.push_back(stQuest);
	}
}
