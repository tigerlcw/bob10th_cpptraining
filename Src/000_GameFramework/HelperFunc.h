#pragma once

void TokenizeMessage(std::string strContext, std::vector<std::wstring>& outMessages, size_t tMaxTextLen = 60);
void TokenizeMessage(std::wstring strContext, std::vector<std::wstring>& outMessages, size_t tMaxTextLen = 60);