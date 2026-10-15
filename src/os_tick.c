



















































































































#define OSi_TICK_TIMER 0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_020bbcc8(void)

{
  int iVar1;
  
  if (OSi_UseTick == 0) {
    OSi_UseTick = 1;
	ASSERT2(!OSi_IsTimerReserved(OSi_TICK_TIMER))
    func_020bbb10(0);
    _data_02238d24 = 0;
    uRam02238d28 = 0;
    _REG_TIM0CNT_L = 0;
    _REG_TIM0CNT_H = 0xc1;
    func_020b8a40(8,func_020bbc30);
    func_020b893c(8);
    _data_02238d20 = 0;
    return;
  }
  return;
}

