#include "pch.h"
#include "PictureUI.h"
#include "HelperFunc.h"

CPictureUI::CPictureUI(void)
	: CUISuper()
{
}

CPictureUI::~CPictureUI(void)
{
}

void CPictureUI::SetImage(std::vector<std::string> vecImage)
{
	CDisplayBuffer vecTempImage;
	for(std::string& strLine : vecImage)
		vecTempImage.push_back(unicode::WCSFromMBS(strLine));

	SetImage(vecTempImage);
}

void CPictureUI::SetImage(CDisplayBuffer vecImage)
{
	m_vecImageData.clear();
	for (std::wstring& strLine : vecImage)
	{
		Replace(strLine, L"\t", L"    ");
		m_vecImageData.push_back(strLine);
	}
}

void CPictureUI::OnDraw(CDisplayBuffer& vecBuffer)
{
	__super::OnDraw(vecBuffer);
	int nBufferY = m_nTop + 1;

	for (const std::wstring& strSrcLine : m_vecImageData)
	{
		int y = nBufferY++;
		if (m_nBottom <= y)
			break;

		const size_t tMaxBuffLength = vecBuffer[y].size() - (m_nLeft + 1);
		int w = std::min<int>(std::min<int>(m_nRight - (m_nLeft + 1), strSrcLine.size()), tMaxBuffLength);
		memcpy((void*)&vecBuffer[y][m_nLeft+1], strSrcLine.c_str(), w * sizeof(wchar_t));
	}
}
