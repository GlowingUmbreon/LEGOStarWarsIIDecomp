// TODO: Make this print condition
#define ASSERT2(condition) if (condition) _Panic2(__FILE__, __LINE__, "Failed assertion ")

void _Panic2(char* file, long line, char* message, ...);