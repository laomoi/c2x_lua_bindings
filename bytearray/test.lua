local str = "\002\139\02\03\0\0\255\255\255\255abcd"
local ba = CCByteArray:create(str, #str)

echo(ba:getCPUEndian())
echo(ba:getLength())
echo(ba:readByte())
echo(ba:readUnsignedByte())

echo("pos:" .. ba:getPosition())
echo(ba:readInt()) 
echo(ba:readUnsignedInt())
echo(ba:readString(4))

ba:setPosition(0)
echo("pos:" .. ba:getPosition())
echo(ba:readByte())
echo(ba:readUnsignedByte())