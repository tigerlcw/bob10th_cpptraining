#pragma once

#include "../_QuestFramework/_QuestFramework.h"
class QuestInfo : public IQuestInfo
{
public:
	QuestInfo(void);
	~QuestInfo(void);

	void QueryNpc(std::vector<ST_NPC_INFO>& vecNPC);
	void QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC);
	void QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest);
};

