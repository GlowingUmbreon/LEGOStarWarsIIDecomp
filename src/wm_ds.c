
void func_020c5834(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r8;
  bool bVar7;
  
  iVar2 = func_020c3cb4();
  iVar2 = *(int *)(iVar2 + 4);
  uVar3 = FUN_020bbeb4();
  if (*(short *)(param_1 + (uint)*(ushort *)(param_1 + 0x808) * 0x200) != 0) {
    func_020bbec8();
    return;
  }
  func_020bb00c(iVar2 + 0x86,2);
  uVar6 = (uint)*(ushort *)(param_1 + 0x808);
  uVar1 = *(ushort *)(iVar2 + 0x86);
  bVar7 = *(short *)(param_1 + 0x818) == 1;
  uVar4 = uVar6 + 1 & 3;
  if (bVar7) {
    unaff_r8 = uVar4 + 1 & 3;
  }
  if (!bVar7) {
    unaff_r8 = uVar4;
  }
  bVar7 = false;
  if ((uVar4 != *(ushort *)(param_1 + 0x80c)) && (unaff_r8 != *(ushort *)(param_1 + 0x80c))) {
    bVar7 = true;
  }
  if (!bVar7) {
    Assert("wm_ds.c",843,
           "Failed assertion newWI != dsInfo->readIndex && resetWI != dsInfo->readIndex");
  }
  uVar5 = param_1 + unaff_r8 * 0x200;
  if ((uVar5 & 1) != 0) {
    Assert("memory.h",0xad,"source address must be in 2-byte alignment");
  }
  func_020bcfec(0,uVar5,0x200);
  *(ushort *)(param_1 + unaff_r8 * 0x200) = *(ushort *)(param_1 + 0x80e) & (uVar1 | 1);
  *(short *)(param_1 + 0x808) = (short)uVar4;
  iVar2 = uVar6 * 0x200;
  *(undefined2 *)(param_1 + iVar2) = *(undefined2 *)(param_1 + 0x80e);
  if (param_2 == 1) {
    *(ushort *)(param_1 + iVar2) = *(ushort *)(param_1 + iVar2) & 0xfffe;
  }
  func_020bbec8(uVar3);
  iVar2 = func_020c5218(func_020c5f90,param_1,param_1 + uVar6 * 0x200,
                        *(undefined2 *)(param_1 + 0x814),*(ushort *)(param_1 + 0x80e) & uVar1,
                        *(undefined2 *)(param_1 + 0x816),1);
  if (iVar2 == 7) {
    *(undefined2 *)(param_1 + uVar6 * 2 + 0x800) = 0xffff;
    *(ushort *)(param_1 + 0x80a) = *(short *)(param_1 + 0x80a) + 1U & 3;
    return;
  }
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 != 2) {
    func_020b9ac8("wm_ds.c",871,"WM_SetMPDataToPort failed during data-sharing. errcode=%x\n",iVar2)
    ;
    *(undefined2 *)(param_1 + 0x81c) = 5;
    return;
  }
  return;
}

