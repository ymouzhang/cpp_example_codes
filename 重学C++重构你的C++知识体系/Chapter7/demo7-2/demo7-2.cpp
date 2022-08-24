// demo7-2.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

static const int bufferLen = 2048;
bool CopyFile(const string& src, const string& dst)
{
	// ��Դ�ļ���Ŀ���ļ�
	// Դ�ļ��Զ����ƶ��ķ�ʽ��
	// Ŀ���ļ��Զ�����д�ķ�ʽ��
	ifstream in(src.c_str(), ios::in | ios::binary);
	ofstream out(dst.c_str(), ios::out | ios::binary | ios::trunc);

	// �ж��ļ����Ƿ�ɹ���ʧ�ܷ���false
	if (!in || !out)
	{
		return false;
	}

	// ��Դ�ļ��ж�ȡ���ݣ�д��Ŀ���ļ���
	// ͨ����ȡԴ�ļ���EOF���ж϶�д�Ƿ����
	char temp[bufferLen];
	while (!in.eof())
	{
		in.read(temp, bufferLen);
		streamsize count = in.gcount();
		out.write(temp, count);
	}

	// �ر�Դ�ļ���Ŀ���ļ�
	in.close();
	out.close();

	return true;
}

int main()
{
	cout << CopyFile("Blue Daube.mp3", "Blue Daube2.mp3") << endl;

	//int a;
	//int index = 0;
	//fstream fout;
	//fout.open("testBuffer.txt", ios::app);
	////if (fout.fail())
	//if (!fout)
	//{
	//	cout << "open file failed" << endl;
	//}
	//while (cin >> a)
	//{
	//	//cout << "The numbers are: " << a << endl;
	//	fout << "The numbers are: " << a << endl;
	//	index++;
	//	if (index == 5)
	//	{
	//		break;
	//	}
	//}
	//cin.ignore(numeric_limits<std::streamsize>::max(), '\n');  // ��ջ�����������
	//char ch;
	//cin >> ch;
	////cout << "the last char is: " << ch << endl;
	//fout << "the last char is: " << ch << endl;
	//fout.close();



    return 0;

}

