inline void _UnknownCheck() {
    // Below are asserts
    if ((gameInfoSize & 1) != 0) {
    _Panic2("memory.h",0xbf,"size & 1 must be 0");
  }
  if ((gameInfo & 1) != 0) {
    _Panic2("memory.h",0xc0,"source address must be in 2-byte alignment");
  }
}