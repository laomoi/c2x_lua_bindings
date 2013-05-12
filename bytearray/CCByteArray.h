
#ifndef __CC_EXTRA_CCBYTEARRAY_H_
#define __CC_EXTRA_CCBYTEARRAY_H_



#include <string>

using namespace std;



class CCByteArray
{
public:
     static CCByteArray* create(char *buf, int len, int endian);

	 static void destroy(CCByteArray* ba) ;

	 static int checkCPUEndian();

	 static const int endianLittle = 1;
	 static const int endianBig = 0;



	 int readShort();
	 int readInt();
	 unsigned int readUnsignedInt();
	 int readUnsignedShort();
	 string readString(int len);
	 int readByte();
	 int readUnsignedByte();
	 string getBuffer();
	 int getLength();	 
	 int getCPUEndian();
	 int getPosition();
	 void setPosition(int pos);
	 //setEndian(int n)
	
private:
	 char *bytes;
	 int pos;
	 int length;
	 int endian;
	 
	 static int globalCPUEndian;
	 
};



#endif // __CC_EXTRA_CCBYTEARRAY_H_
