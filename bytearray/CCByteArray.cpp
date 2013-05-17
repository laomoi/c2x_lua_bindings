
 #include "bytearray/CCByteArray.h"

int CCByteArray::globalCPUEndian = -1;

CCByteArray* CCByteArray::create(char* buffer, int len, int endian) {
	CCByteArray* ba = new CCByteArray();
	ba->bytes = buffer;
	ba->pos = 0;
	ba->length = len;
	ba->endian = endian; 

	if (globalCPUEndian == -1){
		globalCPUEndian  =  CCByteArray::checkCPUEndian();
	}

	return ba;
}

void CCByteArray::destroy(CCByteArray* ba) {
	delete ba;
}
//0: big 1:little
int CCByteArray::checkCPUEndian() {
	union w      
	{        
            int a;      
            char b;         
    } c;             
	c.a = 1;    
    return  (c.b ==1 ? endianLittle : endianBig);      
}
 
int CCByteArray::getCPUEndian() {
	return globalCPUEndian;     
}
 

int CCByteArray::readShort() {
    short n;
	char* p = (char*)&n;
	if (globalCPUEndian == endian){
		//endian the same ,just copy memory
		p[0] = this->bytes[this->pos];
		p[1] = this->bytes[this->pos+1];
	} else {
		p[0] = this->bytes[this->pos+1];
		p[1] = this->bytes[this->pos];
	}
    
    this->pos += 2;
    return n; 
}

int CCByteArray::readInt() {
    int n;
	char* p = (char*)&n;
	if (globalCPUEndian == endian){
		//endian the same ,just copy memory
		p[0] = this->bytes[this->pos];
		p[1] = this->bytes[this->pos+1];
		p[2] = this->bytes[this->pos+2];
		p[3] = this->bytes[this->pos+3];
	} else {
		p[0] = this->bytes[this->pos+3];
		p[1] = this->bytes[this->pos+2];
		p[2] = this->bytes[this->pos+1];
		p[3] = this->bytes[this->pos];
	}
   
    this->pos += 4;
    return n; 
 }

unsigned int CCByteArray::readUnsignedInt() {
    unsigned int n;
	char* p = (char*)&n;
	if (globalCPUEndian == endian){
		//endian the same ,just copy memory
		p[0] = this->bytes[this->pos];
		p[1] = this->bytes[this->pos+1];
		p[2] = this->bytes[this->pos+2];
		p[3] = this->bytes[this->pos+3];
	} else {
		p[0] = this->bytes[this->pos+3];
		p[1] = this->bytes[this->pos+2];
		p[2] = this->bytes[this->pos+1];
		p[3] = this->bytes[this->pos];
		
	}
    this->pos += 4;
    return n;
 }

int CCByteArray::readUnsignedShort() {
    unsigned short n;
	char* p = (char*)&n;

    if (globalCPUEndian == endian){
		//endian the same ,just copy memory
		p[0] = this->bytes[this->pos];
		p[1] = this->bytes[this->pos+1];
	} else {
		p[0] = this->bytes[this->pos+1];
		p[1] = this->bytes[this->pos];
	}
    
    this->pos += 2;
    return n;
 }


int CCByteArray::readByte() {
	signed char val = this->bytes[this->pos];
    if (val > 127){
        val = val - 255;
    }
	this->pos += 1;
	return val;
 }

int CCByteArray::readUnsignedByte() {
    unsigned char val = this->bytes[this->pos];
	this->pos += 1;
	return val;
 }

string CCByteArray::readString(int len) {

    char* value = new char[len + 1];
    
    value[len] = 0;
    memcpy(value, this->bytes + this->pos, len);
    this->pos += len;
    
    string str(value);
    delete [] value;

	return str;
 }

int CCByteArray::getPosition() {

    return this->pos;
}

void CCByteArray::setPosition(int pos) {

   this->pos = pos;
}


int CCByteArray::getLength() {

    return this->length;
}


int CCByteArray::getBytesAvailable() {
	return this->length - this->pos;
}


