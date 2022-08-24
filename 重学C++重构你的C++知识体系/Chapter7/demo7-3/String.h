#pragma once
class String
{
public:
	String(const char *str = NULL);                              // ��ͨ���캯��
	String(const String &other);                                  // �������캯��
	String(String&& other);                                         // �ƶ����캯��
	~String(void);                                                         // ��������
	String& operator= (const String& other);             // ��ֵ����
	String& operator=(String&& rhs)noexcept;		   // �ƶ���ֵ�����

	friend ostream& operator<<(ostream& os, const String &c); // cout���
	
private:
	char *m_data; // ���ڱ����ַ���
};

