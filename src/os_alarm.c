
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */


















































































































































































#define OSi_ALARM_TIMER 1

void OS_InitAlarm(void)

{
  int iVar1;
  
  if (_data_02238d2c == 0) {
    _data_02238d2c = 1;
    iVar1 = func_020bbcb8();
    if (iVar1 == 0) {
      func_020b9a5c("os_alarm.c",192,"OS_InitAlarm: alarm system needs of tick system.");
    }
    if (!OSi_IsTimerReserved(OSi_ALARM_TIMER)) {
      func_020b9a5c("os_alarm.c",195,"Failed assertion !OSi_IsTimerReserved(OSi_ALARM_TIMER)");
    }
    func_020bbb10(1);
    _data_02238d30 = 0;
    uRam02238d34 = 0;
    func_020b88f4(0x10);
    return;
  }
  return;
}

