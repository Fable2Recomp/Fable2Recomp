#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82D74210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D74218;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-30464
	ctx.r4.s64 = ctx.r11.s64 + -30464;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d74290
	if (!ctx.cr6.eq) goto loc_82D74290;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r4,r10,-30480
	ctx.r4.s64 = ctx.r10.s64 + -30480;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74290:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d742e0
	if (ctx.cr6.lt) goto loc_82D742E0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,23004
	ctx.r27.s64 = ctx.r11.s64 + 23004;
loc_82D742AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D742D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82d742ac
	if (!ctx.cr6.lt) goto loc_82D742AC;
loc_82D742E0:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d74320
	if (!ctx.cr6.eq) goto loc_82D74320;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-30496
	ctx.r4.s64 = ctx.r11.s64 + -30496;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74320:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82d74370
	if (ctx.cr6.lt) goto loc_82D74370;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,-30508
	ctx.r27.s64 = ctx.r11.s64 + -30508;
loc_82D7433C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82d7433c
	if (!ctx.cr6.lt) goto loc_82D7433C;
loc_82D74370:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-11632
	ctx.r4.s64 = ctx.r11.s64 + -11632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d743d4
	if (!ctx.cr6.eq) goto loc_82D743D4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,228(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,224(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r4,r10,-30520
	ctx.r4.s64 = ctx.r10.s64 + -30520;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D743D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D743D4:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d74428
	if (!ctx.cr6.gt) goto loc_82D74428;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-30532
	ctx.r27.s64 = ctx.r11.s64 + -30532;
loc_82D743F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r6,r29,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d743f0
	if (ctx.cr6.lt) goto loc_82D743F0;
loc_82D74428:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,168(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-30564
	ctx.r4.s64 = ctx.r11.s64 + -30564;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,172(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-30576
	ctx.r4.s64 = ctx.r11.s64 + -30576;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,176(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-30608
	ctx.r4.s64 = ctx.r11.s64 + -30608;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D744AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-30628
	ctx.r4.s64 = ctx.r11.s64 + -30628;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D744D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-30660
	ctx.r4.s64 = ctx.r11.s64 + -30660;
	// li r7,20
	ctx.r7.s64 = 20;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d745bc
	if (ctx.cr6.eq) goto loc_82D745BC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-30688
	ctx.r29.s64 = ctx.r11.s64 + -30688;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-30712
	ctx.r28.s64 = ctx.r11.s64 + -30712;
loc_82D74524:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7454C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d745b0
	if (ctx.cr6.eq) goto loc_82D745B0;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d745b0
	if (!ctx.cr6.eq) goto loc_82D745B0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,8(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82D745B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D745B0:
	// lwz r27,8(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82d74524
	if (!ctx.cr6.eq) goto loc_82D74524;
loc_82D745BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30724
	ctx.r4.s64 = ctx.r11.s64 + -30724;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D745D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-30736
	ctx.r4.s64 = ctx.r11.s64 + -30736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D745FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7463c
	if (!ctx.cr6.eq) goto loc_82D7463C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r4,r10,-30748
	ctx.r4.s64 = ctx.r10.s64 + -30748;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7463C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7463C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-30760
	ctx.r4.s64 = ctx.r11.s64 + -30760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,-30768
	ctx.r29.s64 = ctx.r11.s64 + -30768;
	// li r7,88
	ctx.r7.s64 = 88;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D746A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d74700
	if (!ctx.cr6.eq) goto loc_82D74700;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r9,2
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r8,-30780
	ctx.r4.s64 = ctx.r8.s64 + -30780;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,8(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82D74700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,392(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-30800
	ctx.r4.s64 = ctx.r11.s64 + -30800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30808
	ctx.r4.s64 = ctx.r11.s64 + -30808;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-30820
	ctx.r4.s64 = ctx.r11.s64 + -30820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,-30832
	ctx.r29.s64 = ctx.r11.s64 + -30832;
	// li r7,268
	ctx.r7.s64 = 268;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D747A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,96(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D747D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D747F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-30844
	ctx.r4.s64 = ctx.r11.s64 + -30844;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,112
	ctx.r7.s64 = 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7484C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d74884
	if (ctx.cr6.eq) goto loc_82D74884;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,-30868
	ctx.r4.s64 = ctx.r10.s64 + -30868;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74884:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-30876
	ctx.r4.s64 = ctx.r11.s64 + -30876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D748A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-30896
	ctx.r4.s64 = ctx.r11.s64 + -30896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D748CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,116(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-30908
	ctx.r4.s64 = ctx.r11.s64 + -30908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D748F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30920
	ctx.r4.s64 = ctx.r11.s64 + -30920;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d74974
	if (!ctx.cr6.eq) goto loc_82D74974;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,252(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,248(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r4,r10,-30932
	ctx.r4.s64 = ctx.r10.s64 + -30932;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74974:
	// lwz r10,268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d749b4
	if (!ctx.cr6.eq) goto loc_82D749B4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-30944
	ctx.r4.s64 = ctx.r11.s64 + -30944;
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D749B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D749B4:
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d749f4
	if (!ctx.cr6.eq) goto loc_82D749F4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-30960
	ctx.r4.s64 = ctx.r11.s64 + -30960;
	// lwz r6,272(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D749F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D749F4:
	// lwz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d74a34
	if (!ctx.cr6.eq) goto loc_82D74A34;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,288(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-30976
	ctx.r4.s64 = ctx.r11.s64 + -30976;
	// lwz r6,284(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74A34:
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d74a74
	if (!ctx.cr6.eq) goto loc_82D74A74;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,300(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-30992
	ctx.r4.s64 = ctx.r11.s64 + -30992;
	// lwz r6,296(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74A74:
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d74ab4
	if (!ctx.cr6.eq) goto loc_82D74AB4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,312(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-31008
	ctx.r4.s64 = ctx.r11.s64 + -31008;
	// lwz r6,308(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74AB4:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r29,r10,-31024
	ctx.r29.s64 = ctx.r10.s64 + -31024;
	// bne cr6,0x82d74af8
	if (!ctx.cr6.eq) goto loc_82D74AF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,320(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74AF8:
	// lwz r10,340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d74b38
	if (!ctx.cr6.eq) goto loc_82D74B38;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,336(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-31040
	ctx.r4.s64 = ctx.r11.s64 + -31040;
	// lwz r6,332(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74B38:
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d74b74
	if (!ctx.cr6.eq) goto loc_82D74B74;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,348(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,344(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74B74:
	// lwz r10,376(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d74bb4
	if (!ctx.cr6.eq) goto loc_82D74BB4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,372(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-31052
	ctx.r4.s64 = ctx.r11.s64 + -31052;
	// lwz r6,368(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D74BB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D74210) {
	__imp__sub_82D74210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D74BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D74BF8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74f4
	ctx.lr = 0x82D74C00;
	__savefpr_23(ctx, base);
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r3.u32);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// stw r4,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r4.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r5,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r5.u32);
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// addi r8,r11,-30316
	ctx.r8.s64 = ctx.r11.s64 + -30316;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r8,-47
	ctx.r8.s64 = -47;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r31,1124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r7.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r6,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r6.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r4,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r4.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r28,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r28.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d74db0
	if (ctx.cr6.eq) goto loc_82D74DB0;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// b 0x82d74dbc
	goto loc_82D74DBC;
loc_82D74DB0:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x82D74DBC;
	sub_82D4EA30(ctx, base);
loc_82D74DBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d74dd0
	if (ctx.cr6.eq) goto loc_82D74DD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d86830
	ctx.lr = 0x82D74DCC;
	sub_82D86830(ctx, base);
	// b 0x82d74dd4
	goto loc_82D74DD4;
loc_82D74DD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D74DD4:
	// lwz r28,1132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r11,r31,720
	ctx.r11.s64 = ctx.r31.s64 + 720;
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r18,r28,48
	ctx.r18.s64 = ctx.r28.s64 + 48;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r16,r28,64
	ctx.r16.s64 = ctx.r28.s64 + 64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r4,r31,736
	ctx.r4.s64 = ctx.r31.s64 + 736;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stb r15,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r15.u8);
	// addi r14,r31,84
	ctx.r14.s64 = ctx.r31.s64 + 84;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r15,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r15.u32);
	// lvx128 v0,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// lwz r5,108(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r11,-15808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15808);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r29,1140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmplwi cr6,r29,50100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 50100, ctx.xer);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// stw r10,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r10.u32);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// beq cr6,0x82d74f10
	if (ctx.cr6.eq) goto loc_82D74F10;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d51440
	ctx.lr = 0x82D74E8C;
	sub_82D51440(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-30356
	ctx.r4.s64 = ctx.r11.s64 + -30356;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-30364
	ctx.r27.s64 = ctx.r11.s64 + -30364;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-30396
	ctx.r26.s64 = ctx.r11.s64 + -30396;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r25,r11,50100
	ctx.r25.u64 = ctx.r11.u64 | 50100;
	// bl 0x82d53c70
	ctx.lr = 0x82D74EB4;
	sub_82D53C70(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82d53da8
	ctx.lr = 0x82D74EBC;
	sub_82D53DA8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d53c70
	ctx.lr = 0x82D74EC4;
	sub_82D53C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d53e10
	ctx.lr = 0x82D74ECC;
	sub_82D53E10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d53c70
	ctx.lr = 0x82D74ED4;
	sub_82D53C70(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,21449
	ctx.r5.s64 = 1405681664;
	// li r8,2627
	ctx.r8.s64 = 2627;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// ori r5,r5,19266
	ctx.r5.u64 = ctx.r5.u64 | 19266;
	// lwz r3,29792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29792);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r7,r11,-30420
	ctx.r7.s64 = ctx.r11.s64 + -30420;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D74F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d542b0
	ctx.lr = 0x82D74F10;
	sub_82D542B0(ctx, base);
loc_82D74F10:
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,140(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,136(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82dbb8d0
	ctx.lr = 0x82D74F2C;
	sub_82DBB8D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,136(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// addi r11,r31,416
	ctx.r11.s64 = ctx.r31.s64 + 416;
	// lfs f0,136(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// addi r20,r28,168
	ctx.r20.s64 = ctx.r28.s64 + 168;
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// lbz r10,144(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 144);
	// addi r21,r11,288
	ctx.r21.s64 = ctx.r11.s64 + 288;
	// lfs f12,3056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// stb r10,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r10.u8);
	// lbz r10,167(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 167);
	// stb r10,198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 198, ctx.r10.u8);
	// lfs f0,172(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lfs f0,156(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f0,160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f0,168(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,116(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,120(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f10,80(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f0,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lwz r10,124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// lwz r10,124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// lwz r10,128(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// lwz r10,128(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,284(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// lbz r8,132(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 132);
	// stb r8,292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 292, ctx.r8.u8);
	// lbz r8,164(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 164);
	// stb r8,293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 293, ctx.r8.u8);
	// lbz r8,165(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 165);
	// stb r8,294(r11)
	PPC_STORE_U8(ctx.r11.u32 + 294, ctx.r8.u8);
	// lbz r8,166(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 166);
	// stb r8,295(r11)
	PPC_STORE_U8(ctx.r11.u32 + 295, ctx.r8.u8);
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f30,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f24,-30424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30424);
	ctx.f24.f64 = double(temp.f32);
	// bne cr6,0x82d750c0
	if (!ctx.cr6.eq) goto loc_82D750C0;
	// fmr f10,f24
	ctx.f10.f64 = ctx.f24.f64;
loc_82D750C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r23,-32252
	ctx.r23.s64 = -2113667072;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// lis r26,-32253
	ctx.r26.s64 = -2113732608;
	// lfs f0,3052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-32253
	ctx.r27.s64 = -2113732608;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f7,-16944(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -16944);
	ctx.f7.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f8,3140(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 3140);
	ctx.f8.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,2636(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2636);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f25,-30428(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -30428);
	ctx.f25.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,-30432(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -30432);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f27,2676(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2676);
	ctx.f27.f64 = double(temp.f32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfs f28,3176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3176);
	ctx.f28.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f1,2848(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2848);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,2936(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2936);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,2704(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2704);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f26,f10,f0
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f4,-30436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30436);
	ctx.f4.f64 = double(temp.f32);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lfs f5,-30440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30440);
	ctx.f5.f64 = double(temp.f32);
	// lfs f29,26348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26348);
	ctx.f29.f64 = double(temp.f32);
	// lfs f6,3120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3120);
	ctx.f6.f64 = double(temp.f32);
loc_82D75140:
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// bgt cr6,0x82d751a4
	if (ctx.cr6.gt) goto loc_82D751A4;
	// lis r12,-32041
	ctx.r12.s64 = -2099838976;
	// addi r12,r12,20832
	ctx.r12.s64 = ctx.r12.s64 + 20832;
	// rlwinm r0,r22,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r22.u64) {
	case 0:
		goto loc_82D75174;
	case 1:
		goto loc_82D75174;
	case 2:
		goto loc_82D75180;
	case 3:
		goto loc_82D7518C;
	case 4:
		goto loc_82D75198;
	default:
		__builtin_unreachable();
	}
	// lwz r22,20852(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20852);
	// lwz r22,20852(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20852);
	// lwz r22,20864(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20864);
	// lwz r22,20876(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20876);
	// lwz r22,20888(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20888);
loc_82D75174:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82d751ac
	goto loc_82D751AC;
loc_82D75180:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x82d751ac
	goto loc_82D751AC;
loc_82D7518C:
	// fmr f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f4.f64;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// b 0x82d751ac
	goto loc_82D751AC;
loc_82D75198:
	// fmr f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f2.f64;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// b 0x82d751ac
	goto loc_82D751AC;
loc_82D751A4:
	// fmr f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f28.f64;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
loc_82D751AC:
	// fmuls f13,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// mulli r10,r22,28
	ctx.r10.s64 = ctx.r22.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f23,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// fnmsubs f13,f13,f11,f31
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f31.f64)));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// ble cr6,0x82d75204
	if (!ctx.cr6.gt) goto loc_82D75204;
	// lfs f13,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// b 0x82d75208
	goto loc_82D75208;
loc_82D75204:
	// stfs f25,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_82D75208:
	// lfs f0,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// sth r9,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r9.u16);
	// sth r8,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r8.u16);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lhz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// sth r9,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r9.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r8,26(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// rotlwi r9,r8,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// sth r9,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r9.u16);
	// blt cr6,0x82d75140
	if (ctx.cr6.lt) goto loc_82D75140;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82d752ec
	if (ctx.cr6.eq) goto loc_82D752EC;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d752ec
	if (ctx.cr6.eq) goto loc_82D752EC;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_82D752EC:
	// lbz r11,178(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 178);
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
	// lbz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 176);
	// lbz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r11.u8);
	// bne cr6,0x82d75318
	if (!ctx.cr6.eq) goto loc_82D75318;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d75318
	if (ctx.cr6.eq) goto loc_82D75318;
	// stb r30,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r30.u8);
loc_82D75318:
	// lbz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 184);
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7534c
	if (ctx.cr6.eq) goto loc_82D7534C;
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// b 0x82d75358
	goto loc_82D75358;
loc_82D7534C:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x82D75358;
	sub_82D4EA30(ctx, base);
loc_82D75358:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d75368
	if (ctx.cr6.eq) goto loc_82D75368;
	// bl 0x82db8e98
	ctx.lr = 0x82D75364;
	sub_82DB8E98(ctx, base);
	// b 0x82d7536c
	goto loc_82D7536C;
loc_82D75368:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D7536C:
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82d4ec28
	ctx.lr = 0x82D75380;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r15,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r15.u16);
	// addi r29,r11,-31340
	ctx.r29.s64 = ctx.r11.s64 + -31340;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r27,12
	ctx.r27.s64 = 12;
	// addi r11,r11,-31268
	ctx.r11.s64 = ctx.r11.s64 + -31268;
	// addi r10,r10,4260
	ctx.r10.s64 = ctx.r10.s64 + 4260;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// sth r27,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r27.u16);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82d4ec28
	ctx.lr = 0x82D753C4;
	sub_82D4EC28(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d94ec0
	ctx.lr = 0x82D753D4;
	sub_82D94EC0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82d4ec28
	ctx.lr = 0x82D753E8;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// sth r27,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r27.u16);
	// addi r11,r11,-31236
	ctx.r11.s64 = ctx.r11.s64 + -31236;
	// sth r15,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r15.u16);
	// addi r10,r10,-31252
	ctx.r10.s64 = ctx.r10.s64 + -31252;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d75424
	if (!ctx.cr6.eq) goto loc_82D75424;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75424:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d75440
	if (!ctx.cr6.eq) goto loc_82D75440;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75440:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d7545c
	if (!ctx.cr6.eq) goto loc_82D7545C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7545C:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d75478
	if (!ctx.cr6.eq) goto loc_82D75478;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75478:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d75494
	if (!ctx.cr6.eq) goto loc_82D75494;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75494:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d754b0
	if (!ctx.cr6.eq) goto loc_82D754B0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D754B0:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d754cc
	if (!ctx.cr6.eq) goto loc_82D754CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D754CC:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d754e8
	if (!ctx.cr6.eq) goto loc_82D754E8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D754E8:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d75504
	if (!ctx.cr6.eq) goto loc_82D75504;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75504:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7551C;
	sub_82D4EC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r27,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r27.u16);
	// bl 0x82d8c6d0
	ctx.lr = 0x82D75528;
	sub_82D8C6D0(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,7760
	ctx.r4.s64 = 7760;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ec28
	ctx.lr = 0x82D75540;
	sub_82D4EC28(ctx, base);
	// li r10,7760
	ctx.r10.s64 = 7760;
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-18288
	ctx.r4.s64 = ctx.r11.s64 + -18288;
	// addi r21,r31,116
	ctx.r21.s64 = ctx.r31.s64 + 116;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// bl 0x82dba860
	ctx.lr = 0x82D7555C;
	sub_82DBA860(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7559c
	if (ctx.cr6.eq) goto loc_82D7559C;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7559c
	if (!ctx.cr6.eq) goto loc_82D7559C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7559C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7559C:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// li r17,48
	ctx.r17.s64 = 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7563c
	if (!ctx.cr6.eq) goto loc_82D7563C;
	// li r5,38
	ctx.r5.s64 = 38;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82d4ec28
	ctx.lr = 0x82D755BC;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// sth r17,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r17.u16);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// sth r15,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r15.u16);
	// addi r11,r11,-31352
	ctx.r11.s64 = ctx.r11.s64 + -31352;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r29,-32253
	ctx.r29.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r7,r7,-31144
	ctx.r7.s64 = ctx.r7.s64 + -31144;
	// addi r6,r6,-31156
	ctx.r6.s64 = ctx.r6.s64 + -31156;
	// addi r5,r5,-31176
	ctx.r5.s64 = ctx.r5.s64 + -31176;
	// addi r4,r4,-31188
	ctx.r4.s64 = ctx.r4.s64 + -31188;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r29,r29,-31200
	ctx.r29.s64 = ctx.r29.s64 + -31200;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r15,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r15.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// b 0x82d75658
	goto loc_82D75658;
loc_82D7563C:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d75658
	if (ctx.cr6.eq) goto loc_82D75658;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_82D75658:
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d75694
	if (!ctx.cr6.eq) goto loc_82D75694;
	// li r5,38
	ctx.r5.s64 = 38;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82d4ec28
	ctx.lr = 0x82D75674;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,8
	ctx.r10.s64 = 8;
	// sth r15,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r15.u16);
	// addi r11,r11,-31128
	ctx.r11.s64 = ctx.r11.s64 + -31128;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// b 0x82d756b0
	goto loc_82D756B0;
loc_82D75694:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d756b0
	if (ctx.cr6.eq) goto loc_82D756B0;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_82D756B0:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r29,112(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d756d8
	if (ctx.cr6.eq) goto loc_82D756D8;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x82d756e4
	goto loc_82D756E4;
loc_82D756D8:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d4ea30
	ctx.lr = 0x82D756E0;
	sub_82D4EA30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82D756E4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r20,r31,108
	ctx.r20.s64 = ctx.r31.s64 + 108;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lfs f0,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82d75710
	if (!ctx.cr6.eq) goto loc_82D75710;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75710:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d75748
	if (ctx.cr6.eq) goto loc_82D75748;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x82d75754
	goto loc_82D75754;
loc_82D75748:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x82D75754;
	sub_82D4EA30(ctx, base);
loc_82D75754:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d75770
	if (ctx.cr6.eq) goto loc_82D75770;
	// li r11,20
	ctx.r11.s64 = 20;
	// stfs f29,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82d75774
	goto loc_82D75774;
loc_82D75770:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82D75774:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f30,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r10,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r6,r29,64
	ctx.r6.s64 = ctx.r29.s64 + 64;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// lfs f0,-30444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30444);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r23,r28,112
	ctx.r23.s64 = ctx.r28.s64 + 112;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f0,-30448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30448);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 112);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// stb r11,768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 768, ctx.r11.u8);
	// lfs f0,148(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lbz r10,145(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 145);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stb r10,104(r29)
	PPC_STORE_U8(ctx.r29.u32 + 104, ctx.r10.u8);
	// lvx128 v10,r0,r16
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v12,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vmulfp128 v13,v10,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmaddfp v12,v12,v11,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v13,v0,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v13,v0,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v13,v0,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D758B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d72190
	ctx.lr = 0x82D758BC;
	sub_82D72190(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r22,3
	ctx.r22.s64 = 3;
	// lbz r11,-32196(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d758d4
	if (ctx.cr6.eq) goto loc_82D758D4;
	// stb r22,177(r28)
	PPC_STORE_U8(ctx.r28.u32 + 177, ctx.r22.u8);
loc_82D758D4:
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// addi r18,r28,177
	ctx.r18.s64 = ctx.r28.s64 + 177;
	// lbz r11,177(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 177);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// beq cr6,0x82d75a0c
	if (ctx.cr6.eq) goto loc_82D75A0C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d759e8
	if (ctx.cr6.eq) goto loc_82D759E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82d75a30
	if (!ctx.cr6.eq) goto loc_82D75A30;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7592c
	if (ctx.cr6.eq) goto loc_82D7592C;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x82d75938
	goto loc_82D75938;
loc_82D7592C:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x82D75938;
	sub_82D4EA30(ctx, base);
loc_82D75938:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d75950
	if (ctx.cr6.eq) goto loc_82D75950;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82d79e30
	ctx.lr = 0x82D7594C;
	sub_82D79E30(ctx, base);
	// b 0x82d75954
	goto loc_82D75954;
loc_82D75950:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D75954:
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d75988
	if (ctx.cr6.eq) goto loc_82D75988;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x82d75994
	goto loc_82D75994;
loc_82D75988:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x82D75994;
	sub_82D4EA30(ctx, base);
loc_82D75994:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d759ac
	if (ctx.cr6.eq) goto loc_82D759AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82d79e30
	ctx.lr = 0x82D759A8;
	sub_82D79E30(ctx, base);
	// b 0x82d759b0
	goto loc_82D759B0;
loc_82D759AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D759B0:
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82d4ec28
	ctx.lr = 0x82D759C8;
	sub_82D4EC28(ctx, base);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d8a8c8
	ctx.lr = 0x82D759D8;
	sub_82D8A8C8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// b 0x82d75a30
	goto loc_82D75A30;
loc_82D759E8:
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82d4ec28
	ctx.lr = 0x82D759F8;
	sub_82D4EC28(ctx, base);
	// li r11,80
	ctx.r11.s64 = 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82df3990
	ctx.lr = 0x82D75A08;
	sub_82DF3990(ctx, base);
	// b 0x82d75a2c
	goto loc_82D75A2C;
loc_82D75A0C:
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82d4ec28
	ctx.lr = 0x82D75A1C;
	sub_82D4EC28(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d87c78
	ctx.lr = 0x82D75A2C;
	sub_82D87C78(ctx, base);
loc_82D75A2C:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82D75A30:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r26,96(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d75a58
	if (ctx.cr6.eq) goto loc_82D75A58;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// b 0x82d75a64
	goto loc_82D75A64;
loc_82D75A58:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d4ea30
	ctx.lr = 0x82D75A60;
	sub_82D4EA30(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82D75A64:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r25,4000
	ctx.r25.s64 = 4000;
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r29,r11,-20792
	ctx.r29.s64 = ctx.r11.s64 + -20792;
	// beq cr6,0x82d75adc
	if (ctx.cr6.eq) goto loc_82D75ADC;
	// addi r27,r26,40
	ctx.r27.s64 = ctx.r26.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// bl 0x82184450
	ctx.lr = 0x82D75A94;
	sub_82184450(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75aac
	if (ctx.cr6.eq) goto loc_82D75AAC;
	// stw r26,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
loc_82D75AAC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r26.u32);
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// bl 0x832b226c
	ctx.lr = 0x82D75AC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832b259c
	ctx.lr = 0x82D75AD0;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// std r24,32(r26)
	PPC_STORE_U64(ctx.r26.u32 + 32, ctx.r24.u64);
	// b 0x82d75ae0
	goto loc_82D75AE0;
loc_82D75ADC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75AE0:
	// addi r10,r31,172
	ctx.r10.s64 = ctx.r31.s64 + 172;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r26,96(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d75b10
	if (ctx.cr6.eq) goto loc_82D75B10;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// b 0x82d75b1c
	goto loc_82D75B1C;
loc_82D75B10:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d4ea30
	ctx.lr = 0x82D75B18;
	sub_82D4EA30(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82D75B1C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d75b84
	if (ctx.cr6.eq) goto loc_82D75B84;
	// addi r27,r26,40
	ctx.r27.s64 = ctx.r26.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// bl 0x82184450
	ctx.lr = 0x82D75B3C;
	sub_82184450(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75b54
	if (ctx.cr6.eq) goto loc_82D75B54;
	// stw r26,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
loc_82D75B54:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r26.u32);
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// bl 0x832b226c
	ctx.lr = 0x82D75B6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832b259c
	ctx.lr = 0x82D75B78;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// std r24,32(r26)
	PPC_STORE_U64(ctx.r26.u32 + 32, ctx.r24.u64);
	// b 0x82d75b88
	goto loc_82D75B88;
loc_82D75B84:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75B88:
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lfs f0,188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82d75be0
	if (!ctx.cr6.eq) goto loc_82D75BE0;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
loc_82D75BE0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lbz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// lfs f0,100(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bge cr6,0x82d75c18
	if (!ctx.cr6.lt) goto loc_82D75C18;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75C18:
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r11.u8);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bge cr6,0x82d75c44
	if (!ctx.cr6.lt) goto loc_82D75C44;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D75C44:
	// stb r11,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r28,144
	ctx.r10.s64 = ctx.r28.s64 + 144;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// sth r15,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r15.u16);
	// sth r22,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r22.u16);
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// sth r11,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r11.u16);
	// stb r10,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r10.u8);
	// bl 0x82dba398
	ctx.lr = 0x82D75C78;
	sub_82DBA398(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r5,49
	ctx.r5.s64 = 49;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82d4ec28
	ctx.lr = 0x82D75C98;
	sub_82D4EC28(ctx, base);
	// li r29,112
	ctx.r29.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r29.u16);
	// bl 0x82d94230
	ctx.lr = 0x82D75CA8;
	sub_82D94230(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// andi. r10,r10,207
	ctx.r10.u64 = ctx.r10.u64 & 207;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d75d48
	if (!ctx.cr6.eq) goto loc_82D75D48;
	// li r5,49
	ctx.r5.s64 = 49;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82d4ec28
	ctx.lr = 0x82D75CF4;
	sub_82D4EC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r29.u16);
	// bl 0x82d94230
	ctx.lr = 0x82D75D00;
	sub_82D94230(ctx, base);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d75d28
	if (!ctx.cr6.eq) goto loc_82D75D28;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D75D28;
	sub_82D512F8(ctx, base);
loc_82D75D28:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// sth r30,32(r27)
	PPC_STORE_U16(ctx.r27.u32 + 32, ctx.r30.u16);
loc_82D75D48:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d7aaa8
	ctx.lr = 0x82D75D50;
	sub_82D7AAA8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,512
	ctx.r4.s64 = 512;
	// stfs f30,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stb r11,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r11.u8);
	// bl 0x82d4ec28
	ctx.lr = 0x82D75D6C;
	sub_82D4EC28(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d7b138
	ctx.lr = 0x82D75D7C;
	sub_82D7B138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// bl 0x82d723b0
	ctx.lr = 0x82D75D90;
	sub_82D723B0(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82d7a018
	ctx.lr = 0x82D75D98;
	sub_82D7A018(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// lfs f0,2716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2716);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,-30452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30452);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82d75dfc
	if (ctx.cr6.eq) goto loc_82D75DFC;
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82d4ec28
	ctx.lr = 0x82D75DE0;
	sub_82D4EC28(ctx, base);
	// sth r17,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r17.u16);
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82d949f8
	ctx.lr = 0x82D75DF4;
	sub_82D949F8(ctx, base);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// b 0x82d75e00
	goto loc_82D75E00;
loc_82D75DFC:
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
loc_82D75E00:
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82d4ec28
	ctx.lr = 0x82D75E10;
	sub_82D4EC28(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d943b8
	ctx.lr = 0x82D75E1C;
	sub_82D943B8(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D75E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82d75e48
	if (ctx.cr6.eq) goto loc_82D75E48;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x830c45f8
	ctx.lr = 0x82D75E48;
	sub_830C45F8(ctx, base);
loc_82D75E48:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75e70
	if (ctx.cr6.eq) goto loc_82D75E70;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// b 0x82d75e7c
	goto loc_82D75E7C;
loc_82D75E70:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4ea30
	ctx.lr = 0x82D75E78;
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D75E7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7540
	ctx.lr = 0x82D75E90;
	__restfpr_23(ctx, base);
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D74BF0) {
	__imp__sub_82D74BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D75E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D75EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-31060
	ctx.r10.s64 = ctx.r10.s64 + -31060;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,3120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3120);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d75edc
	if (!ctx.cr6.eq) goto loc_82D75EDC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82D75EDC:
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r9,108(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// bl 0x82dbb698
	ctx.lr = 0x82D75F04;
	sub_82DBB698(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D75E98) {
	__imp__sub_82D75E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D75F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D75F18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,4
	ctx.r28.s64 = 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D75F3C;
	sub_82D4EC28(ctx, base);
	// li r26,68
	ctx.r26.s64 = 68;
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r26.u16);
	// bl 0x82d7ff58
	ctx.lr = 0x82D75F48;
	sub_82D7FF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d73008
	ctx.lr = 0x82D75F5C;
	sub_82D73008(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75fb0
	if (ctx.cr6.eq) goto loc_82D75FB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d75f90
	if (!ctx.cr6.eq) goto loc_82D75F90;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D75F90;
	sub_82D512F8(ctx, base);
loc_82D75F90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82d75fb8
	goto loc_82D75FB8;
loc_82D75FB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d75fd4
	if (!ctx.cr6.eq) goto loc_82D75FD4;
loc_82D75FB8:
	// li r5,46
	ctx.r5.s64 = 46;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x82d4ec28
	ctx.lr = 0x82D75FC8;
	sub_82D4EC28(ctx, base);
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r26.u16);
	// bl 0x82d7ff58
	ctx.lr = 0x82D75FD0;
	sub_82D7FF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82D75FD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d75ff4
	if (!ctx.cr6.eq) goto loc_82D75FF4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D75FF4;
	sub_82D512F8(ctx, base);
loc_82D75FF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d73148
	ctx.lr = 0x82D76020;
	sub_82D73148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d734c0
	ctx.lr = 0x82D7602C;
	sub_82D734C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d73308
	ctx.lr = 0x82D76038;
	sub_82D73308(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d733b0
	ctx.lr = 0x82D76044;
	sub_82D733B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D75F10) {
	__imp__sub_82D75F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D76050) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D76058;
	__savegprlr_29(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30316
	ctx.r9.s64 = ctx.r11.s64 + -30316;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r10,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r10.u32);
	// li r8,-47
	ctx.r8.s64 = -47;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r8,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stw r7,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r7.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r4,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r31,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r31.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stw r30,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r30.u32);
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r29,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r29.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r10,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r10,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r11.u32);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// stw r10,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r10.u32);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// stw r10,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r10.u32);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stw r10,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r10.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stw r10,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r10.u32);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D76050) {
	__imp__sub_82D76050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D761A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D761A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d76208
	if (ctx.cr6.eq) goto loc_82D76208;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d761f0
	if (ctx.cr6.lt) goto loc_82D761F0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4eb08
	ctx.lr = 0x82D761EC;
	sub_82D4EB08(ctx, base);
	// b 0x82d76208
	goto loc_82D76208;
loc_82D761F0:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
loc_82D76208:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d76244
	if (ctx.cr6.eq) goto loc_82D76244;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d76244
	if (!ctx.cr6.eq) goto loc_82D76244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76244:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// beq cr6,0x82d76264
	if (ctx.cr6.eq) goto loc_82D76264;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d79ec0
	ctx.lr = 0x82D76260;
	sub_82D79EC0(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
loc_82D76264:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7627c
	if (ctx.cr6.eq) goto loc_82D7627C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d79ec0
	ctx.lr = 0x82D76278;
	sub_82D79EC0(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_82D7627C:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76294
	if (ctx.cr6.eq) goto loc_82D76294;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d79ec0
	ctx.lr = 0x82D76290;
	sub_82D79EC0(ctx, base);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
loc_82D76294:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d762ac
	if (ctx.cr6.eq) goto loc_82D762AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d79ec0
	ctx.lr = 0x82D762A8;
	sub_82D79EC0(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
loc_82D762AC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d762f4
	if (ctx.cr6.eq) goto loc_82D762F4;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d762f0
	if (ctx.cr6.eq) goto loc_82D762F0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d762f0
	if (!ctx.cr6.eq) goto loc_82D762F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D762F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D762F0:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82D762F4:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d76320
	if (!ctx.cr6.gt) goto loc_82D76320;
loc_82D76304:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72680
	ctx.lr = 0x82D76314;
	sub_82D72680(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82d76304
	if (ctx.cr6.gt) goto loc_82D76304;
loc_82D76320:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d76360
	if (!ctx.cr6.gt) goto loc_82D76360;
loc_82D7632C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d76360
	if (ctx.cr6.eq) goto loc_82D76360;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72550
	ctx.lr = 0x82D76354;
	sub_82D72550(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82d7632c
	if (ctx.cr6.gt) goto loc_82D7632C;
loc_82D76360:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d76394
	if (!ctx.cr6.gt) goto loc_82D76394;
loc_82D7636C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72550
	ctx.lr = 0x82D76388;
	sub_82D72550(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82d7636c
	if (ctx.cr6.gt) goto loc_82D7636C;
loc_82D76394:
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d763f8
	if (!ctx.cr6.eq) goto loc_82D763F8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82d8f7a0
	ctx.lr = 0x82D763BC;
	sub_82D8F7A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d763ec
	if (ctx.cr6.eq) goto loc_82D763EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D763EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D763EC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82D763F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d72550
	ctx.lr = 0x82D76408;
	sub_82D72550(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d76444
	if (!ctx.cr6.gt) goto loc_82D76444;
loc_82D7641C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72550
	ctx.lr = 0x82D76434;
	sub_82D72550(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82d7641c
	if (ctx.cr6.gt) goto loc_82D7641C;
loc_82D76444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82d8f7a0
	ctx.lr = 0x82D76450;
	sub_82D8F7A0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76470
	if (ctx.cr6.eq) goto loc_82D76470;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82d8e8d8
	ctx.lr = 0x82D7647C;
	sub_82D8E8D8(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d764b8
	if (ctx.cr6.eq) goto loc_82D764B8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d764b8
	if (!ctx.cr6.eq) goto loc_82D764B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D764B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D764B8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d764f8
	if (ctx.cr6.eq) goto loc_82D764F8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d764f8
	if (!ctx.cr6.eq) goto loc_82D764F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D764F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D764F8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76510
	if (ctx.cr6.eq) goto loc_82D76510;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d79a18
	ctx.lr = 0x82D76510;
	sub_82D79A18(ctx, base);
loc_82D76510:
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76554
	if (ctx.cr6.eq) goto loc_82D76554;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d76554
	if (ctx.cr6.eq) goto loc_82D76554;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d76554
	if (!ctx.cr6.eq) goto loc_82D76554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76554:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76574
	if (ctx.cr6.eq) goto loc_82D76574;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76574:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76594
	if (ctx.cr6.eq) goto loc_82D76594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76594:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d765b4
	if (ctx.cr6.eq) goto loc_82D765B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D765B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D765B4:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d765f0
	if (ctx.cr6.eq) goto loc_82D765F0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d765f0
	if (!ctx.cr6.eq) goto loc_82D765F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D765F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D765F0:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7662c
	if (ctx.cr6.eq) goto loc_82D7662C;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7662c
	if (!ctx.cr6.eq) goto loc_82D7662C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7662C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7662C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d7667c
	if (ctx.cr6.eq) goto loc_82D7667C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d76664
	if (ctx.cr6.lt) goto loc_82D76664;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4eb08
	ctx.lr = 0x82D76660;
	sub_82D4EB08(ctx, base);
	// b 0x82d7667c
	goto loc_82D7667C;
loc_82D76664:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
loc_82D7667C:
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d766c8
	if (ctx.cr6.eq) goto loc_82D766C8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d766b0
	if (ctx.cr6.lt) goto loc_82D766B0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d4eb08
	ctx.lr = 0x82D766AC;
	sub_82D4EB08(ctx, base);
	// b 0x82d766c8
	goto loc_82D766C8;
loc_82D766B0:
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
loc_82D766C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d76704
	if (ctx.cr6.eq) goto loc_82D76704;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d76704
	if (!ctx.cr6.eq) goto loc_82D76704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76704:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76718
	if (ctx.cr6.eq) goto loc_82D76718;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d79ab0
	ctx.lr = 0x82D76718;
	sub_82D79AB0(ctx, base);
loc_82D76718:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76744
	if (!ctx.cr6.eq) goto loc_82D76744;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76744;
	sub_82D4ECA8(ctx, base);
loc_82D76744:
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76770
	if (!ctx.cr6.eq) goto loc_82D76770;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76770;
	sub_82D4ECA8(ctx, base);
loc_82D76770:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7679c
	if (!ctx.cr6.eq) goto loc_82D7679C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7679C;
	sub_82D4ECA8(ctx, base);
loc_82D7679C:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d767c8
	if (!ctx.cr6.eq) goto loc_82D767C8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D767C8;
	sub_82D4ECA8(ctx, base);
loc_82D767C8:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d767f4
	if (!ctx.cr6.eq) goto loc_82D767F4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D767F4;
	sub_82D4ECA8(ctx, base);
loc_82D767F4:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76820
	if (!ctx.cr6.eq) goto loc_82D76820;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76820;
	sub_82D4ECA8(ctx, base);
loc_82D76820:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7684c
	if (!ctx.cr6.eq) goto loc_82D7684C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7684C;
	sub_82D4ECA8(ctx, base);
loc_82D7684C:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76878
	if (!ctx.cr6.eq) goto loc_82D76878;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76878;
	sub_82D4ECA8(ctx, base);
loc_82D76878:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d768a4
	if (!ctx.cr6.eq) goto loc_82D768A4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D768A4;
	sub_82D4ECA8(ctx, base);
loc_82D768A4:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d768d0
	if (!ctx.cr6.eq) goto loc_82D768D0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D768D0;
	sub_82D4ECA8(ctx, base);
loc_82D768D0:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d768fc
	if (!ctx.cr6.eq) goto loc_82D768FC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D768FC;
	sub_82D4ECA8(ctx, base);
loc_82D768FC:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76928
	if (!ctx.cr6.eq) goto loc_82D76928;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76928;
	sub_82D4ECA8(ctx, base);
loc_82D76928:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76954
	if (!ctx.cr6.eq) goto loc_82D76954;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76954;
	sub_82D4ECA8(ctx, base);
loc_82D76954:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76980
	if (!ctx.cr6.eq) goto loc_82D76980;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76980;
	sub_82D4ECA8(ctx, base);
loc_82D76980:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d769ac
	if (!ctx.cr6.eq) goto loc_82D769AC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D769AC;
	sub_82D4ECA8(ctx, base);
loc_82D769AC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d769d8
	if (!ctx.cr6.eq) goto loc_82D769D8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D769D8;
	sub_82D4ECA8(ctx, base);
loc_82D769D8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76a04
	if (!ctx.cr6.eq) goto loc_82D76A04;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76A04;
	sub_82D4ECA8(ctx, base);
loc_82D76A04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D761A0) {
	__imp__sub_82D761A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D76A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D76A20;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d76a60
	if (ctx.cr6.eq) goto loc_82D76A60;
	// li r11,19
	ctx.r11.s64 = 19;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stb r22,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r22.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D76A58;
	sub_82D86988(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82D76A60:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,8
	ctx.r24.s64 = 8;
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// lwzx r10,r27,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76aac
	if (!ctx.cr6.lt) goto loc_82D76AAC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-30248
	ctx.r9.s64 = ctx.r9.s64 + -30248;
	// addi r8,r8,-30264
	ctx.r8.s64 = ctx.r8.s64 + -30264;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D76AAC:
	// li r23,4
	ctx.r23.s64 = 4;
	// lwz r31,760(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 760);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// lwzx r11,r27,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r23.u32);
	// rlwinm r4,r10,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d76af4
	if (ctx.cr6.gt) goto loc_82D76AF4;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82d76b08
	goto loc_82D76B08;
loc_82D76AF4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76B08:
	// or r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 | ctx.r29.u64;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r27,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76b6c
	if (!ctx.cr6.lt) goto loc_82D76B6C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30284
	ctx.r9.s64 = ctx.r9.s64 + -30284;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82D76B6C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d76bc0
	if (!ctx.cr6.gt) goto loc_82D76BC0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82D76B80:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d76bac
	if (ctx.cr6.eq) goto loc_82D76BAC;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,112(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d71cc8
	ctx.lr = 0x82D76BAC;
	sub_82D71CC8(ctx, base);
loc_82D76BAC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d76b80
	if (ctx.cr6.lt) goto loc_82D76B80;
loc_82D76BC0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d76c0c
	if (ctx.cr6.eq) goto loc_82D76C0C;
	// lwzx r10,r27,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76bf8
	if (!ctx.cr6.lt) goto loc_82D76BF8;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30304
	ctx.r9.s64 = ctx.r9.s64 + -30304;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D76BF8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76C0C:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// bne 0x82d76c40
	if (!ctx.cr0.eq) goto loc_82D76C40;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d76c40
	if (ctx.cr6.eq) goto loc_82D76C40;
	// lbz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d76c40
	if (!ctx.cr6.eq) goto loc_82D76C40;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// stw r25,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r25.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D76C40;
	sub_82D86F78(ctx, base);
loc_82D76C40:
	// lwzx r10,r27,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76c70
	if (!ctx.cr6.lt) goto loc_82D76C70;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25592
	ctx.r9.s64 = ctx.r9.s64 + 25592;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D76C70:
	// lwzx r3,r27,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r23.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d76c98
	if (!ctx.cr6.eq) goto loc_82D76C98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76C98:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76cbc
	if (!ctx.cr6.eq) goto loc_82D76CBC;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r27,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r23.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76CBC;
	sub_82D4ECA8(ctx, base);
loc_82D76CBC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D76A18) {
	__imp__sub_82D76A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D76CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82D76CD0;
	__savegprlr_19(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r11,132(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d76d14
	if (ctx.cr6.eq) goto loc_82D76D14;
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r3,124(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// stb r21,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r21.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D76D0C;
	sub_82D86988(ctx, base);
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
loc_82D76D14:
	// lwz r22,0(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r20,8
	ctx.r20.s64 = 8;
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76d58
	if (!ctx.cr6.lt) goto loc_82D76D58;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-30188
	ctx.r9.s64 = ctx.r9.s64 + -30188;
	// addi r8,r8,25672
	ctx.r8.s64 = ctx.r8.s64 + 25672;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D76D58:
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// lwz r11,132(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 132);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// ori r28,r10,128
	ctx.r28.u64 = ctx.r10.u64 | 128;
	// stw r11,132(r24)
	PPC_STORE_U32(ctx.r24.u32 + 132, ctx.r11.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// bne cr6,0x82d76f9c
	if (!ctx.cr6.eq) goto loc_82D76F9C;
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76db8
	if (!ctx.cr6.lt) goto loc_82D76DB8;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30264
	ctx.r9.s64 = ctx.r9.s64 + -30264;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D76DB8:
	// lwz r3,84(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r23,36
	ctx.r4.s64 = ctx.r23.s64 + 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76e04
	if (!ctx.cr6.lt) goto loc_82D76E04;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30200
	ctx.r9.s64 = ctx.r9.s64 + -30200;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D76E04:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d76ec4
	if (!ctx.cr6.gt) goto loc_82D76EC4;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82D76E18:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82d76eb0
	if (!ctx.cr6.eq) goto loc_82D76EB0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d76eb0
	if (ctx.cr6.eq) goto loc_82D76EB0;
	// addi r4,r23,16
	ctx.r4.s64 = ctx.r23.s64 + 16;
	// lwz r5,112(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d71cc8
	ctx.lr = 0x82D76E60;
	sub_82D71CC8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82d76e7c
	if (ctx.cr6.eq) goto loc_82D76E7C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D76E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76E7C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82D76EB0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d76e18
	if (ctx.cr6.lt) goto loc_82D76E18;
loc_82D76EC4:
	// addi r11,r1,1164
	ctx.r11.s64 = ctx.r1.s64 + 1164;
	// stw r28,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r28.u32);
	// addi r30,r23,92
	ctx.r30.s64 = ctx.r23.s64 + 92;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r11,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d76f68
	if (!ctx.cr6.gt) goto loc_82D76F68;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// b 0x82d76ef8
	goto loc_82D76EF8;
loc_82D76EF4:
	// lwz r10,1156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
loc_82D76EF8:
	// lwz r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d76f18
	if (!ctx.cr6.eq) goto loc_82D76F18;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82d512f8
	ctx.lr = 0x82D76F14;
	sub_82D512F8(ctx, base);
	// lwz r10,1156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
loc_82D76F18:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,1152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r10.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d76ef4
	if (ctx.cr6.lt) goto loc_82D76EF4;
loc_82D76F68:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82db90f0
	ctx.lr = 0x82D76F74;
	sub_82DB90F0(ctx, base);
	// lwz r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d76f9c
	if (!ctx.cr6.eq) goto loc_82D76F9C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,1152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D76F9C;
	sub_82D4ECA8(ctx, base);
loc_82D76F9C:
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d76fcc
	if (!ctx.cr6.lt) goto loc_82D76FCC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30212
	ctx.r9.s64 = ctx.r9.s64 + -30212;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D76FCC:
	// addi r27,r23,92
	ctx.r27.s64 = ctx.r23.s64 + 92;
	// lhz r28,42(r23)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r23.u32 + 42);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d770c4
	if (!ctx.cr6.gt) goto loc_82D770C4;
	// addi r26,r23,16
	ctx.r26.s64 = ctx.r23.s64 + 16;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82D76FF0:
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7701C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77054
	if (ctx.cr6.eq) goto loc_82D77054;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,7088(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d77078
	if (!ctx.cr6.eq) goto loc_82D77078;
loc_82D77054:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d95498
	ctx.lr = 0x82D7705C;
	sub_82D95498(ctx, base);
	// lwz r11,184(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 184);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lbz r10,39(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// rlwimi r10,r25,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r25.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// b 0x82d770b0
	goto loc_82D770B0;
loc_82D77078:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x82d770b0
	if (!ctx.cr6.eq) goto loc_82D770B0;
	// lbz r10,216(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 216);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x82d770a0
	if (!ctx.cr6.eq) goto loc_82D770A0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x82d770a4
	goto loc_82D770A4;
loc_82D770A0:
	// lwz r5,184(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 184);
loc_82D770A4:
	// lwz r4,108(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82dff9b8
	ctx.lr = 0x82D770B0;
	sub_82DFF9B8(ctx, base);
loc_82D770B0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d76ff0
	if (ctx.cr6.lt) goto loc_82D76FF0;
loc_82D770C4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d77124
	if (!ctx.cr6.gt) goto loc_82D77124;
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d77100
	if (!ctx.cr6.lt) goto loc_82D77100;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30224
	ctx.r9.s64 = ctx.r9.s64 + -30224;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D77100:
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d77114
	if (!ctx.cr6.eq) goto loc_82D77114;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_82D77114:
	// lwz r3,88(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82db8fb8
	ctx.lr = 0x82D77124;
	sub_82DB8FB8(ctx, base);
loc_82D77124:
	// lwz r11,132(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r24)
	PPC_STORE_U32(ctx.r24.u32 + 132, ctx.r11.u32);
	// bne 0x82d77158
	if (!ctx.cr0.eq) goto loc_82D77158;
	// lwz r11,128(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d77158
	if (ctx.cr6.eq) goto loc_82D77158;
	// lbz r11,140(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d77158
	if (!ctx.cr6.eq) goto loc_82D77158;
	// lwz r3,124(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	// stw r19,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r19.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D77158;
	sub_82D86F78(ctx, base);
loc_82D77158:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d77180
	if (!ctx.cr6.eq) goto loc_82D77180;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D77180;
	sub_82D4ECA8(ctx, base);
loc_82D77180:
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d771b0
	if (!ctx.cr6.lt) goto loc_82D771B0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25592
	ctx.r9.s64 = ctx.r9.s64 + 25592;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D771B0:
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D76CC8) {
	__imp__sub_82D76CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D771B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82D771C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d771fc
	if (ctx.cr6.eq) goto loc_82D771FC;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D771F0;
	sub_82D86988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
loc_82D771FC:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77214
	if (ctx.cr6.eq) goto loc_82D77214;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_82D77214:
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r11,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r11.u32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d7731c
	if (!ctx.cr6.gt) goto loc_82D7731C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82D77270:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r31,r11,504
	ctx.r31.s64 = ctx.r11.s64 + 504;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7729c
	if (!ctx.cr6.eq) goto loc_82D7729C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54f78
	ctx.lr = 0x82D7729C;
	sub_82D54F78(ctx, base);
loc_82D7729C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,184(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 184);
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82d77300
	if (ctx.cr6.eq) goto loc_82D77300;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d772e8
	if (!ctx.cr6.eq) goto loc_82D772E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82d93dd0
	ctx.lr = 0x82D772E4;
	sub_82D93DD0(ctx, base);
	// b 0x82d77300
	goto loc_82D77300;
loc_82D772E8:
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82d77300
	if (ctx.cr6.eq) goto loc_82D77300;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d93098
	ctx.lr = 0x82D77300;
	sub_82D93098(ctx, base);
loc_82D77300:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77270
	if (ctx.cr6.lt) goto loc_82D77270;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d77330
	if (!ctx.cr6.eq) goto loc_82D77330;
loc_82D7731C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x82d93dd0
	ctx.lr = 0x82D77330;
	sub_82D93DD0(ctx, base);
loc_82D77330:
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r11.u32);
	// bne 0x82d77364
	if (!ctx.cr0.eq) goto loc_82D77364;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d77364
	if (ctx.cr6.eq) goto loc_82D77364;
	// lbz r11,140(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d77364
	if (!ctx.cr6.eq) goto loc_82D77364;
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// stw r25,128(r27)
	PPC_STORE_U32(ctx.r27.u32 + 128, ctx.r25.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D77364;
	sub_82D86F78(ctx, base);
loc_82D77364:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d8dc78
	ctx.lr = 0x82D77370;
	sub_82D8DC78(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7739c
	if (!ctx.cr6.eq) goto loc_82D7739C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7739C;
	sub_82D4ECA8(ctx, base);
loc_82D7739C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D771B8) {
	__imp__sub_82D771B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D773A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D773B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d773d4
	if (ctx.cr6.eq) goto loc_82D773D4;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r11.u16);
loc_82D773D4:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// bl 0x82d8dd58
	ctx.lr = 0x82D773EC;
	sub_82D8DD58(ctx, base);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d774b0
	if (!ctx.cr6.gt) goto loc_82D774B0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r5,r11,65535
	ctx.r5.u64 = ctx.r11.u64 | 65535;
loc_82D7743C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lhz r8,508(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 508);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82d77474
	if (!ctx.cr6.gt) goto loc_82D77474;
	// lwz r10,504(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 504);
loc_82D77458:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d77478
	if (ctx.cr6.eq) goto loc_82D77478;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d77458
	if (ctx.cr6.lt) goto loc_82D77458;
loc_82D77474:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D77478:
	// lhz r10,508(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 508);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,504(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 504);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r4,r10,2,14,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// sth r10,508(r9)
	PPC_STORE_U16(ctx.r9.u32 + 508, ctx.r10.u16);
	// lwzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d7743c
	if (ctx.cr6.lt) goto loc_82D7743C;
loc_82D774B0:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d93918
	ctx.lr = 0x82D774C0;
	sub_82D93918(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77500
	if (ctx.cr6.eq) goto loc_82D77500;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d77500
	if (!ctx.cr6.eq) goto loc_82D77500;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D77500:
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82d77558
	if (!ctx.cr6.eq) goto loc_82D77558;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// sth r11,34(r30)
	PPC_STORE_U16(ctx.r30.u32 + 34, ctx.r11.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d7753c
	if (!ctx.cr6.eq) goto loc_82D7753C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D7753C;
	sub_82D512F8(ctx, base);
loc_82D7753C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D77558:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d77584
	if (!ctx.cr6.eq) goto loc_82D77584;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D77584;
	sub_82D4ECA8(ctx, base);
loc_82D77584:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// bne 0x82d775b8
	if (!ctx.cr0.eq) goto loc_82D775B8;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d775b8
	if (ctx.cr6.eq) goto loc_82D775B8;
	// lbz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d775b8
	if (!ctx.cr6.eq) goto loc_82D775B8;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// stw r27,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r27.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D775B8;
	sub_82D86F78(ctx, base);
loc_82D775B8:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d775f4
	if (ctx.cr6.eq) goto loc_82D775F4;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d775f4
	if (!ctx.cr6.eq) goto loc_82D775F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D775F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D775F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D773A8) {
	__imp__sub_82D773A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D77600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D77608;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lhz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 508);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d77648
	if (!ctx.cr6.gt) goto loc_82D77648;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
loc_82D7762C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d7764c
	if (ctx.cr6.eq) goto loc_82D7764C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7762c
	if (ctx.cr6.lt) goto loc_82D7762C;
loc_82D77648:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D7764C:
	// lhz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 508);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// li r8,1
	ctx.r8.s64 = 1;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r7,r10,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// sth r10,508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 508, ctx.r10.u16);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lbz r10,39(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// rlwimi r10,r8,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D776B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d776fc
	if (!ctx.cr6.gt) goto loc_82D776FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D776CC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82d776ec
	if (ctx.cr6.eq) goto loc_82D776EC;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r29,184(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// lhz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bne cr6,0x82d776fc
	if (!ctx.cr6.eq) goto loc_82D776FC;
loc_82D776EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d776cc
	if (ctx.cr6.lt) goto loc_82D776CC;
loc_82D776FC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82d7771c
	if (ctx.cr6.eq) goto loc_82D7771C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d93918
	ctx.lr = 0x82D77710;
	sub_82D93918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d93dd0
	ctx.lr = 0x82D7771C;
	sub_82D93DD0(ctx, base);
loc_82D7771C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d77748
	if (!ctx.cr6.eq) goto loc_82D77748;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D77748;
	sub_82D4ECA8(ctx, base);
loc_82D77748:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D77600) {
	__imp__sub_82D77600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D77750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D77758;
	__savegprlr_22(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,8
	ctx.r23.s64 = 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d777b0
	if (!ctx.cr6.lt) goto loc_82D777B0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-30148
	ctx.r9.s64 = ctx.r9.s64 + -30148;
	// addi r8,r8,-30264
	ctx.r8.s64 = ctx.r8.s64 + -30264;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D777B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D777E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lwz r3,84(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7781C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r22,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d77858
	if (!ctx.cr6.lt) goto loc_82D77858;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30164
	ctx.r9.s64 = ctx.r9.s64 + -30164;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82D77858:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82d77914
	if (ctx.cr6.lt) goto loc_82D77914;
	// addi r26,r8,4
	ctx.r26.s64 = ctx.r8.s64 + 4;
loc_82D7786C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d77904
	if (ctx.cr6.eq) goto loc_82D77904;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D778A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77904
	if (ctx.cr6.eq) goto loc_82D77904;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d77904
	if (ctx.cr6.eq) goto loc_82D77904;
	// addi r8,r28,13
	ctx.r8.s64 = ctx.r28.s64 + 13;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,2472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D77904:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge cr6,0x82d7786c
	if (!ctx.cr6.lt) goto loc_82D7786C;
loc_82D77914:
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d77944
	if (!ctx.cr6.lt) goto loc_82D77944;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25592
	ctx.r9.s64 = ctx.r9.s64 + 25592;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D77944:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7796c
	if (!ctx.cr6.eq) goto loc_82D7796C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7796C;
	sub_82D4ECA8(ctx, base);
loc_82D7796C:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D77750) {
	__imp__sub_82D77750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D77978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D77980;
	__savegprlr_22(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,8
	ctx.r23.s64 = 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d779d8
	if (!ctx.cr6.lt) goto loc_82D779D8;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-30116
	ctx.r9.s64 = ctx.r9.s64 + -30116;
	// addi r8,r8,-30264
	ctx.r8.s64 = ctx.r8.s64 + -30264;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D779D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,108(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r22,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r27,12(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d77a80
	if (!ctx.cr6.lt) goto loc_82D77A80;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30164
	ctx.r9.s64 = ctx.r9.s64 + -30164;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82D77A80:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82d77b48
	if (ctx.cr6.lt) goto loc_82D77B48;
	// addi r25,r8,4
	ctx.r25.s64 = ctx.r8.s64 + 4;
loc_82D77A94:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d77b38
	if (ctx.cr6.eq) goto loc_82D77B38;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77b38
	if (ctx.cr6.eq) goto loc_82D77B38;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d77b38
	if (ctx.cr6.eq) goto loc_82D77B38;
	// addi r8,r27,13
	ctx.r8.s64 = ctx.r27.s64 + 13;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,2468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d77b48
	if (!ctx.cr6.eq) goto loc_82D77B48;
loc_82D77B38:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge cr6,0x82d77a94
	if (!ctx.cr6.lt) goto loc_82D77A94;
loc_82D77B48:
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d77b78
	if (!ctx.cr6.lt) goto loc_82D77B78;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25592
	ctx.r9.s64 = ctx.r9.s64 + 25592;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D77B78:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d77ba0
	if (!ctx.cr6.eq) goto loc_82D77BA0;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D77BA0;
	sub_82D4ECA8(ctx, base);
loc_82D77BA0:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D77978) {
	__imp__sub_82D77978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D77BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x82D77BB0;
	__savegprlr_15(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d77bf0
	if (ctx.cr6.eq) goto loc_82D77BF0;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r3,124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r18,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r18.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D77BE8;
	sub_82D86988(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82D77BF0:
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r16,0(r13)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r15,8
	ctx.r15.s64 = 8;
	// stb r24,140(r25)
	PPC_STORE_U8(ctx.r25.u32 + 140, ctx.r24.u8);
	// lwzx r10,r16,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r15.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d77c30
	if (!ctx.cr6.lt) goto loc_82D77C30;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30088
	ctx.r9.s64 = ctx.r9.s64 + -30088;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82D77C30:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r17,0
	ctx.r17.s64 = 0;
	// bne cr6,0x82d77dc4
	if (!ctx.cr6.eq) goto loc_82D77DC4;
	// addi r27,r25,40
	ctx.r27.s64 = ctx.r25.s64 + 40;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d77cb4
	if (!ctx.cr6.gt) goto loc_82D77CB4;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_82D77C54:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d77ca0
	if (!ctx.cr6.gt) goto loc_82D77CA0;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_82D77C74:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d76cc8
	ctx.lr = 0x82D77C8C;
	sub_82D76CC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77c74
	if (ctx.cr6.lt) goto loc_82D77C74;
loc_82D77CA0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77c54
	if (ctx.cr6.lt) goto loc_82D77C54;
loc_82D77CB4:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d77d28
	if (!ctx.cr6.gt) goto loc_82D77D28;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_82D77CC8:
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d77d14
	if (!ctx.cr6.gt) goto loc_82D77D14;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_82D77CE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d76cc8
	ctx.lr = 0x82D77D00;
	sub_82D76CC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77ce8
	if (ctx.cr6.lt) goto loc_82D77CE8;
loc_82D77D14:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77cc8
	if (ctx.cr6.lt) goto loc_82D77CC8;
loc_82D77D28:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d77d64
	if (!ctx.cr6.gt) goto loc_82D77D64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82D77D3C:
	// lwz r11,224(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82d76a18
	ctx.lr = 0x82D77D50;
	sub_82D76A18(ctx, base);
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77d3c
	if (ctx.cr6.lt) goto loc_82D77D3C;
loc_82D77D64:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// stb r17,140(r25)
	PPC_STORE_U8(ctx.r25.u32 + 140, ctx.r17.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d77d8c
	if (!ctx.cr6.eq) goto loc_82D77D8C;
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d77d8c
	if (ctx.cr6.eq) goto loc_82D77D8C;
	// lwz r3,124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// stw r17,128(r25)
	PPC_STORE_U32(ctx.r25.u32 + 128, ctx.r17.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D77D8C;
	sub_82D86F78(ctx, base);
loc_82D77D8C:
	// lwzx r10,r16,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r15.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d77dbc
	if (!ctx.cr6.lt) goto loc_82D77DBC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D77DBC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c04
	__restgprlr_15(ctx, base);
	return;
loc_82D77DC4:
	// addi r10,r25,40
	ctx.r10.s64 = ctx.r25.s64 + 40;
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// addi r20,r1,88
	ctx.r20.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r19,2
	ctx.r19.s64 = 2;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r10,r25,52
	ctx.r10.s64 = ctx.r25.s64 + 52;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82D77DE8:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r23,0(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d77fa4
	if (!ctx.cr6.gt) goto loc_82D77FA4;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
loc_82D77E18:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// lwzx r30,r22,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r28,r30,92
	ctx.r28.s64 = ctx.r30.s64 + 92;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d77f8c
	if (!ctx.cr6.gt) goto loc_82D77F8C;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
loc_82D77E40:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// lwzx r31,r26,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne cr6,0x82d77e68
	if (!ctx.cr6.eq) goto loc_82D77E68;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82d77e6c
	goto loc_82D77E6C;
loc_82D77E68:
	// addi r29,r31,512
	ctx.r29.s64 = ctx.r31.s64 + 512;
loc_82D77E6C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82d77f50
	if (!ctx.cr6.lt) goto loc_82D77F50;
loc_82D77E74:
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D77E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77ed8
	if (ctx.cr6.eq) goto loc_82D77ED8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// lhz r11,26(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r9,26(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 26);
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,7088(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d77f24
	if (!ctx.cr6.eq) goto loc_82D77F24;
loc_82D77ED8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d77ef8
	if (!ctx.cr6.eq) goto loc_82D77EF8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d512f8
	ctx.lr = 0x82D77EF8;
	sub_82D512F8(ctx, base);
loc_82D77EF8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lbz r11,39(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// rlwimi r11,r24,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,39(r30)
	PPC_STORE_U8(ctx.r30.u32 + 39, ctx.r11.u8);
	// b 0x82d77f3c
	goto loc_82D77F3C;
loc_82D77F24:
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// bne cr6,0x82d77f3c
	if (!ctx.cr6.eq) goto loc_82D77F3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dff9b8
	ctx.lr = 0x82D77F3C;
	sub_82DFF9B8(ctx, base);
loc_82D77F3C:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82d77e74
	if (ctx.cr6.lt) goto loc_82D77E74;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82D77F50:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77e40
	if (ctx.cr6.lt) goto loc_82D77E40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d77f8c
	if (ctx.cr6.eq) goto loc_82D77F8C;
loc_82D77F64:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d95498
	ctx.lr = 0x82D77F80;
	sub_82D95498(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d77f64
	if (!ctx.cr6.eq) goto loc_82D77F64;
loc_82D77F8C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d77e18
	if (ctx.cr6.lt) goto loc_82D77E18;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82D77FA4:
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d77fc8
	if (!ctx.cr6.eq) goto loc_82D77FC8;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r16,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D77FC8;
	sub_82D4ECA8(ctx, base);
loc_82D77FC8:
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82d77de8
	if (!ctx.cr6.eq) goto loc_82D77DE8;
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// b 0x82d77d64
	goto loc_82D77D64;
}

PPC_WEAK_FUNC(sub_82D77BA8) {
	__imp__sub_82D77BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D77FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82D77FF0;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82d78700
	if (ctx.cr6.eq) goto loc_82D78700;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d78050
	if (ctx.cr6.eq) goto loc_82D78050;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// sth r18,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r18.u16);
	// stb r17,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r17.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D78040;
	sub_82D86988(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82D78050:
	// lwz r19,0(r13)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r15,8
	ctx.r15.s64 = 8;
	// lwzx r10,r19,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r15.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d78094
	if (!ctx.cr6.lt) goto loc_82D78094;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-30020
	ctx.r9.s64 = ctx.r9.s64 + -30020;
	// addi r8,r8,25672
	ctx.r8.s64 = ctx.r8.s64 + 25672;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D78094:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// li r16,4
	ctx.r16.s64 = 4;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// addi r10,r18,4
	ctx.r10.s64 = ctx.r18.s64 + 4;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// lwzx r11,r19,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d780e0
	if (ctx.cr6.gt) goto loc_82D780E0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82d780f4
	goto loc_82D780F4;
loc_82D780E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D780F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D780F4:
	// rlwinm r10,r18,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r19,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// or r31,r18,r20
	ctx.r31.u64 = ctx.r18.u64 | ctx.r20.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// rlwinm r4,r10,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82d7813c
	if (ctx.cr6.gt) goto loc_82D7813C;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x82d78154
	goto loc_82D78154;
loc_82D7813C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D78154:
	// lbz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 184);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// beq cr6,0x82d781e0
	if (ctx.cr6.eq) goto loc_82D781E0;
	// li r5,49
	ctx.r5.s64 = 49;
	// lwzx r3,r19,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82d4ec28
	ctx.lr = 0x82D78184;
	sub_82D4EC28(ctx, base);
	// li r11,112
	ctx.r11.s64 = 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d94230
	ctx.lr = 0x82D78194;
	sub_82D94230(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// lbz r11,39(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 39);
	// rlwimi r11,r22,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,39(r27)
	PPC_STORE_U8(ctx.r27.u32 + 39, ctx.r11.u8);
	// bne cr6,0x82d781c8
	if (!ctx.cr6.eq) goto loc_82D781C8;
	// lbz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 40);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwimi r11,r10,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// sth r9,32(r27)
	PPC_STORE_U16(ctx.r27.u32 + 32, ctx.r9.u16);
	// stb r11,40(r27)
	PPC_STORE_U8(ctx.r27.u32 + 40, ctx.r11.u8);
	// b 0x82d78220
	goto loc_82D78220;
loc_82D781C8:
	// lbz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 40);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// sth r11,32(r27)
	PPC_STORE_U16(ctx.r27.u32 + 32, ctx.r11.u16);
	// stb r10,40(r27)
	PPC_STORE_U8(ctx.r27.u32 + 40, ctx.r10.u8);
	// b 0x82d78220
	goto loc_82D78220;
loc_82D781E0:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r27,76
	ctx.r3.s64 = ctx.r27.s64 + 76;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d78220
	if (!ctx.cr6.lt) goto loc_82D78220;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d78214
	if (!ctx.cr6.lt) goto loc_82D78214;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D78214:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82d51270
	ctx.lr = 0x82D78220;
	sub_82D51270(ctx, base);
loc_82D78220:
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ble cr6,0x82d783bc
	if (!ctx.cr6.gt) goto loc_82D783BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r29,709
	ctx.r25.s64 = ctx.r29.s64 + 709;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
loc_82D78250:
	// lwz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82d79ff8
	ctx.lr = 0x82D7826C;
	sub_82D79FF8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d78290
	if (!ctx.cr6.eq) goto loc_82D78290;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7828C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_82D78290:
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830c3860
	ctx.lr = 0x82D782A0;
	sub_830C3860(ctx, base);
	// sth r23,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r23.u16);
	// sth r23,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r23.u16);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lbz r11,711(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 711);
	// lbz r10,217(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 217);
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// lbz r8,1(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// lbz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82d782d0
	if (!ctx.cr6.lt) goto loc_82D782D0;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_82D782D0:
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d782e8
	if (!ctx.cr6.lt) goto loc_82D782E8;
	// not r11,r8
	ctx.r11.u64 = ~ctx.r8.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82d782ec
	goto loc_82D782EC;
loc_82D782E8:
	// rlwinm r11,r8,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
loc_82D782EC:
	// lhz r10,218(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 218);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 220);
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// clrlwi r8,r8,18
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// sth r10,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r10.u16);
	// sth r11,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r11.u16);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82d78324
	if (!ctx.cr6.eq) goto loc_82D78324;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// b 0x82d7832c
	goto loc_82D7832C;
loc_82D78324:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82D7832C:
	// bl 0x82d939c8
	ctx.lr = 0x82D78330;
	sub_82D939C8(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d783a4
	if (ctx.cr6.eq) goto loc_82D783A4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d7c198
	ctx.lr = 0x82D783A4;
	sub_82D7C198(ctx, base);
loc_82D783A4:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// stw r22,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r22.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stw r23,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r23.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82d78250
	if (!ctx.cr6.eq) goto loc_82D78250;
loc_82D783BC:
	// lbz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7844c
	if (ctx.cr6.eq) goto loc_82D7844C;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d78434
	if (ctx.cr6.eq) goto loc_82D78434;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stb r11,36(r27)
	PPC_STORE_U8(ctx.r27.u32 + 36, ctx.r11.u8);
	// beq cr6,0x82d783f4
	if (ctx.cr6.eq) goto loc_82D783F4;
	// addi r31,r29,52
	ctx.r31.s64 = ctx.r29.s64 + 52;
loc_82D783F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d78414
	if (!ctx.cr6.eq) goto loc_82D78414;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D78414;
	sub_82D512F8(ctx, base);
loc_82D78414:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82d7844c
	goto loc_82D7844C;
loc_82D78434:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7844C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7844C:
	// lwzx r11,r19,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// lwz r31,760(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 760);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r4,r9,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82d78488
	if (ctx.cr6.gt) goto loc_82D78488;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x82d7849c
	goto loc_82D7849C;
loc_82D78488:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7849C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7849C:
	// or r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 | ctx.r20.u64;
	// lwzx r10,r19,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r15.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d784dc
	if (!ctx.cr6.lt) goto loc_82D784DC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30036
	ctx.r9.s64 = ctx.r9.s64 + -30036;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D784DC:
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D784FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r10,r19,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r15.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d7852c
	if (!ctx.cr6.lt) goto loc_82D7852C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30052
	ctx.r9.s64 = ctx.r9.s64 + -30052;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D7852C:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d78540
	if (!ctx.cr6.eq) goto loc_82D78540;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_82D78540:
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82db8fb8
	ctx.lr = 0x82D78550;
	sub_82DB8FB8(ctx, base);
	// lwzx r10,r19,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r15.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d78580
	if (!ctx.cr6.lt) goto loc_82D78580;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30064
	ctx.r9.s64 = ctx.r9.s64 + -30064;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D78580:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82d785b8
	if (!ctx.cr6.gt) goto loc_82D785B8;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_82D78590:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d8de38
	ctx.lr = 0x82D785A0;
	sub_82D8DE38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d8d2c8
	ctx.lr = 0x82D785A8;
	sub_82D8D2C8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d78590
	if (!ctx.cr6.eq) goto loc_82D78590;
loc_82D785B8:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// bne 0x82d785ec
	if (!ctx.cr0.eq) goto loc_82D785EC;
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d785ec
	if (ctx.cr6.eq) goto loc_82D785EC;
	// lbz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d785ec
	if (!ctx.cr6.eq) goto loc_82D785EC;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// stw r23,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r23.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D785EC;
	sub_82D86F78(ctx, base);
loc_82D785EC:
	// lwzx r10,r19,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r15.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d7861c
	if (!ctx.cr6.lt) goto loc_82D7861C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25592
	ctx.r9.s64 = ctx.r9.s64 + 25592;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D7861C:
	// lwzx r3,r19,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d78644
	if (!ctx.cr6.eq) goto loc_82D78644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D78644:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d78668
	if (!ctx.cr6.eq) goto loc_82D78668;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r19,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82d4eca8
	ctx.lr = 0x82D78668;
	sub_82D4ECA8(ctx, base);
loc_82D78668:
	// lwzx r3,r19,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d78690
	if (!ctx.cr6.eq) goto loc_82D78690;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D78690:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d786b4
	if (!ctx.cr6.eq) goto loc_82D786B4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r19,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82d4eca8
	ctx.lr = 0x82D786B4;
	sub_82D4ECA8(ctx, base);
loc_82D786B4:
	// lwzx r3,r19,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d786dc
	if (!ctx.cr6.eq) goto loc_82D786DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D786DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D786DC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d78700
	if (!ctx.cr6.eq) goto loc_82D78700;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r19,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d4eca8
	ctx.lr = 0x82D78700;
	sub_82D4ECA8(ctx, base);
loc_82D78700:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D77FE8) {
	__imp__sub_82D77FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82D78718;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x82d78b08
	if (ctx.cr6.lt) goto loc_82D78B08;
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d78760
	if (ctx.cr6.eq) goto loc_82D78760;
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D78758;
	sub_82D86988(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
loc_82D78760:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,8
	ctx.r23.s64 = 8;
	// stw r9,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r9.u32);
	// lwzx r10,r28,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82d787ac
	if (!ctx.cr6.lt) goto loc_82D787AC;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r8,r8,-29948
	ctx.r8.s64 = ctx.r8.s64 + -29948;
	// addi r7,r7,-29964
	ctx.r7.s64 = ctx.r7.s64 + -29964;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82D787AC:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D787D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r4,r11,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82d78818
	if (ctx.cr6.gt) goto loc_82D78818;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x82d78830
	goto loc_82D78830;
loc_82D78818:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7882C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D78830:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
	// or r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 | ctx.r29.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82d78894
	if (ctx.cr6.eq) goto loc_82D78894;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82D78858:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d78888
	if (ctx.cr6.eq) goto loc_82D78888;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_82D78888:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82d78858
	if (!ctx.cr6.eq) goto loc_82D78858;
loc_82D78894:
	// lwzx r10,r28,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d788c4
	if (!ctx.cr6.lt) goto loc_82D788C4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-29980
	ctx.r9.s64 = ctx.r9.s64 + -29980;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D788C4:
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwz r30,760(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 760);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r4,r10,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d788fc
	if (ctx.cr6.gt) goto loc_82D788FC;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82d78910
	goto loc_82D78910;
loc_82D788FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D78910:
	// or r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 | ctx.r29.u64;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r28,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d78970
	if (!ctx.cr6.lt) goto loc_82D78970;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-29992
	ctx.r9.s64 = ctx.r9.s64 + -29992;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82D78970:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82db9078
	ctx.lr = 0x82D78980;
	sub_82DB9078(ctx, base);
	// lwzx r3,r28,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d789a8
	if (!ctx.cr6.eq) goto loc_82D789A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D789A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D789A8:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d789cc
	if (!ctx.cr6.eq) goto loc_82D789CC;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r28,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82d4eca8
	ctx.lr = 0x82D789CC;
	sub_82D4ECA8(ctx, base);
loc_82D789CC:
	// lwzx r3,r28,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d789f4
	if (!ctx.cr6.eq) goto loc_82D789F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D789F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D789F4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d78a18
	if (!ctx.cr6.eq) goto loc_82D78A18;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r28,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82d4eca8
	ctx.lr = 0x82D78A18;
	sub_82D4ECA8(ctx, base);
loc_82D78A18:
	// lwzx r10,r28,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d78a48
	if (!ctx.cr6.lt) goto loc_82D78A48;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-30004
	ctx.r9.s64 = ctx.r9.s64 + -30004;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D78A48:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82d78aa4
	if (ctx.cr6.eq) goto loc_82D78AA4;
loc_82D78A50:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d8df18
	ctx.lr = 0x82D78A5C;
	sub_82D8DF18(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d8d3a8
	ctx.lr = 0x82D78A64;
	sub_82D8D3A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d90990
	ctx.lr = 0x82D78A70;
	sub_82D90990(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d78a90
	if (!ctx.cr6.eq) goto loc_82D78A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D78A90:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d7a018
	ctx.lr = 0x82D78A98;
	sub_82D7A018(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82d78a50
	if (!ctx.cr6.eq) goto loc_82D78A50;
loc_82D78AA4:
	// lwzx r10,r28,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82d78ad4
	if (!ctx.cr6.lt) goto loc_82D78AD4;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25592
	ctx.r9.s64 = ctx.r9.s64 + 25592;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82D78AD4:
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r11.u32);
	// bne 0x82d78b08
	if (!ctx.cr0.eq) goto loc_82D78B08;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d78b08
	if (ctx.cr6.eq) goto loc_82D78B08;
	// lbz r11,140(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d78b08
	if (!ctx.cr6.eq) goto loc_82D78B08;
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// stw r24,128(r27)
	PPC_STORE_U32(ctx.r27.u32 + 128, ctx.r24.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D78B08;
	sub_82D86F78(ctx, base);
loc_82D78B08:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D78710) {
	__imp__sub_82D78710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D78B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d78b54
	if (ctx.cr6.eq) goto loc_82D78B54;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D78B48;
	sub_82D86988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82D78B54:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x82d78bb8
	if (!ctx.cr6.eq) goto loc_82D78BB8;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d78bb8
	if (!ctx.cr6.eq) goto loc_82D78BB8;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r11,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r11.u16);
	// sth r10,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r10.u16);
loc_82D78BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,140(r29)
	PPC_STORE_U8(ctx.r29.u32 + 140, ctx.r28.u8);
	// bl 0x82d80fb0
	ctx.lr = 0x82D78BC4;
	sub_82D80FB0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8f478
	ctx.lr = 0x82D78BD4;
	sub_82D8F478(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82d78c20
	if (!ctx.cr6.eq) goto loc_82D78C20;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d78c0c
	if (!ctx.cr6.eq) goto loc_82D78C0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d771b8
	ctx.lr = 0x82D78C0C;
	sub_82D771B8(ctx, base);
loc_82D78C0C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D78C20:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,140(r29)
	PPC_STORE_U8(ctx.r29.u32 + 140, ctx.r11.u8);
	// bne cr6,0x82d78c4c
	if (!ctx.cr6.eq) goto loc_82D78C4C;
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d78c4c
	if (ctx.cr6.eq) goto loc_82D78C4C;
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// stw r11,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r11.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D78C4C;
	sub_82D86F78(ctx, base);
loc_82D78C4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D78B10) {
	__imp__sub_82D78B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D78C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82d4ec28
	ctx.lr = 0x82D78C8C;
	sub_82D4EC28(ctx, base);
	// li r11,44
	ctx.r11.s64 = 44;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d80d60
	ctx.lr = 0x82D78CA8;
	sub_82D80D60(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82d78b10
	ctx.lr = 0x82D78CC0;
	sub_82D78B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D78C58) {
	__imp__sub_82D78C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D78CD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d78d20
	if (ctx.cr6.eq) goto loc_82D78D20;
	// li r11,9
	ctx.r11.s64 = 9;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D78D0C;
	sub_82D86988(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82D78D20:
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82d78d5c
	if (!ctx.cr6.eq) goto loc_82D78D5C;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82d78d5c
	if (!ctx.cr6.eq) goto loc_82D78D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d773a8
	ctx.lr = 0x82D78D5C;
	sub_82D773A8(ctx, base);
loc_82D78D5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8f530
	ctx.lr = 0x82D78D6C;
	sub_82D8F530(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bne 0x82d78da0
	if (!ctx.cr0.eq) goto loc_82D78DA0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d78da0
	if (ctx.cr6.eq) goto loc_82D78DA0;
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d78da0
	if (!ctx.cr6.eq) goto loc_82D78DA0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D78DA0;
	sub_82D86F78(ctx, base);
loc_82D78DA0:
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D78CD0) {
	__imp__sub_82D78CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d78df4
	if (ctx.cr6.eq) goto loc_82D78DF4;
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D78DE4;
	sub_82D86988(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D78DF4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82d773a8
	ctx.lr = 0x82D78DFC;
	sub_82D773A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D78DB0) {
	__imp__sub_82D78DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D78E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82D78E18;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwz r10,136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d78e5c
	if (ctx.cr0.eq) goto loc_82D78E5C;
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D78E54;
	sub_82D86988(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
loc_82D78E5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r22,0(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,4
	ctx.r23.s64 = 4;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// lwzx r11,r23,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d78ea8
	if (ctx.cr6.gt) goto loc_82D78EA8;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82d78ebc
	goto loc_82D78EBC;
loc_82D78EA8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D78EBC:
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r23,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// or r30,r31,r24
	ctx.r30.u64 = ctx.r31.u64 | ctx.r24.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// rlwinm r4,r10,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82d78f04
	if (ctx.cr6.gt) goto loc_82D78F04;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x82d78f1c
	goto loc_82D78F1C;
loc_82D78F04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D78F1C:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// ble cr6,0x82d79008
	if (!ctx.cr6.gt) goto loc_82D79008;
	// addi r30,r28,224
	ctx.r30.s64 = ctx.r28.s64 + 224;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82D78F48:
	// lwzx r31,r29,r21
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r21.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d78f70
	if (!ctx.cr6.eq) goto loc_82D78F70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_82D78F70:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D78F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d79ff8
	ctx.lr = 0x82D78FA4;
	sub_82D79FF8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d78fc4
	if (!ctx.cr6.eq) goto loc_82D78FC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D78FC4;
	sub_82D512F8(ctx, base);
loc_82D78FC4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82d8e0d8
	ctx.lr = 0x82D78FEC;
	sub_82D8E0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d85cc0
	ctx.lr = 0x82D78FF4;
	sub_82D85CC0(ctx, base);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d78f48
	if (!ctx.cr6.eq) goto loc_82D78F48;
loc_82D79008:
	// lwzx r11,r23,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r31,760(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 760);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r4,r9,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82d79040
	if (ctx.cr6.gt) goto loc_82D79040;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x82d79058
	goto loc_82D79058;
loc_82D79040:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D79054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D79058:
	// or r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 | ctx.r24.u64;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D79088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82d7909c
	if (!ctx.cr6.eq) goto loc_82D7909C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_82D7909C:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82db8fb8
	ctx.lr = 0x82D790AC;
	sub_82DB8FB8(ctx, base);
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// bne 0x82d790e0
	if (!ctx.cr0.eq) goto loc_82D790E0;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d790e0
	if (ctx.cr6.eq) goto loc_82D790E0;
	// lbz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d790e0
	if (!ctx.cr6.eq) goto loc_82D790E0;
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// stw r25,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r25.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D790E0;
	sub_82D86F78(ctx, base);
loc_82D790E0:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d79108
	if (!ctx.cr6.eq) goto loc_82D79108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D79108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79108:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7912c
	if (!ctx.cr6.eq) goto loc_82D7912C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7912C;
	sub_82D4ECA8(ctx, base);
loc_82D7912C:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d79154
	if (!ctx.cr6.eq) goto loc_82D79154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D79154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79154:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d79178
	if (!ctx.cr6.eq) goto loc_82D79178;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82d4eca8
	ctx.lr = 0x82D79178;
	sub_82D4ECA8(ctx, base);
loc_82D79178:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d791a0
	if (!ctx.cr6.eq) goto loc_82D791A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D791A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D791A0:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d791c4
	if (!ctx.cr6.eq) goto loc_82D791C4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82d4eca8
	ctx.lr = 0x82D791C4;
	sub_82D4ECA8(ctx, base);
loc_82D791C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D78E10) {
	__imp__sub_82D78E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D791D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82D791D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82d7921c
	if (ctx.cr0.eq) goto loc_82D7921C;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d86988
	ctx.lr = 0x82D79214;
	sub_82D86988(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82D7921C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r22,0(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,4
	ctx.r23.s64 = 4;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwzx r11,r23,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82d79268
	if (ctx.cr6.gt) goto loc_82D79268;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x82d79280
	goto loc_82D79280;
loc_82D79268:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7927C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D79280:
	// or r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 | ctx.r27.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ble cr6,0x82d792e8
	if (!ctx.cr6.gt) goto loc_82D792E8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82D792A0:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d8e1b8
	ctx.lr = 0x82D792D0;
	sub_82D8E1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d85c50
	ctx.lr = 0x82D792D8;
	sub_82D85C50(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d792a0
	if (!ctx.cr6.eq) goto loc_82D792A0;
loc_82D792E8:
	// lwzx r11,r23,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r30,760(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r4,r10,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d79320
	if (ctx.cr6.gt) goto loc_82D79320;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82d79334
	goto loc_82D79334;
loc_82D79320:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D79334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79334:
	// or r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 | ctx.r27.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D79364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82db9078
	ctx.lr = 0x82D79374;
	sub_82DB9078(ctx, base);
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7939c
	if (!ctx.cr6.eq) goto loc_82D7939C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7939C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7939C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d793c0
	if (!ctx.cr6.eq) goto loc_82D793C0;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82d4eca8
	ctx.lr = 0x82D793C0;
	sub_82D4ECA8(ctx, base);
loc_82D793C0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82d79460
	if (!ctx.cr6.gt) goto loc_82D79460;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82D793CC:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d79404
	if (!ctx.cr6.gt) goto loc_82D79404;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
loc_82D793E8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d79408
	if (ctx.cr6.eq) goto loc_82D79408;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d793e8
	if (ctx.cr6.lt) goto loc_82D793E8;
loc_82D79404:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D79408:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d79448
	if (!ctx.cr6.eq) goto loc_82D79448;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D79448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7a018
	ctx.lr = 0x82D79450;
	sub_82D7A018(ctx, base);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d793cc
	if (!ctx.cr6.eq) goto loc_82D793CC;
loc_82D79460:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bne 0x82d79494
	if (!ctx.cr0.eq) goto loc_82D79494;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d79494
	if (ctx.cr6.eq) goto loc_82D79494;
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d79494
	if (!ctx.cr6.eq) goto loc_82D79494;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// bl 0x82d86f78
	ctx.lr = 0x82D79494;
	sub_82D86F78(ctx, base);
loc_82D79494:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d794bc
	if (!ctx.cr6.eq) goto loc_82D794BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D794BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D794BC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d794e0
	if (!ctx.cr6.eq) goto loc_82D794E0;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d4eca8
	ctx.lr = 0x82D794E0;
	sub_82D4ECA8(ctx, base);
loc_82D794E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D791D0) {
	__imp__sub_82D791D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D794E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D794F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d795bc
	if (!ctx.cr6.gt) goto loc_82D795BC;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d79544
	if (!ctx.cr6.gt) goto loc_82D79544;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D7951C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d7953c
	if (ctx.cr6.eq) goto loc_82D7953C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7951c
	if (ctx.cr6.lt) goto loc_82D7951C;
	// b 0x82d79544
	goto loc_82D79544;
loc_82D7953C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82d79568
	if (!ctx.cr6.eq) goto loc_82D79568;
loc_82D79544:
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82d77fe8
	ctx.lr = 0x82D79564;
	sub_82D77FE8(ctx, base);
	// b 0x82d795bc
	goto loc_82D795BC;
loc_82D79568:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d795bc
	if (!ctx.cr6.gt) goto loc_82D795BC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D79578:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d795a8
	if (ctx.cr6.eq) goto loc_82D795A8;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82d723b0
	ctx.lr = 0x82D795A8;
	sub_82D723B0(ctx, base);
loc_82D795A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d79578
	if (ctx.cr6.lt) goto loc_82D79578;
loc_82D795BC:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d79660
	if (!ctx.cr6.gt) goto loc_82D79660;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d79610
	if (!ctx.cr6.gt) goto loc_82D79610;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_82D795DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d79608
	if (ctx.cr6.eq) goto loc_82D79608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d795dc
	if (ctx.cr6.lt) goto loc_82D795DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82d78e10
	ctx.lr = 0x82D79604;
	sub_82D78E10(ctx, base);
	// b 0x82d79660
	goto loc_82D79660;
loc_82D79608:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82d79620
	if (!ctx.cr6.eq) goto loc_82D79620;
loc_82D79610:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82d78e10
	ctx.lr = 0x82D7961C;
	sub_82D78E10(ctx, base);
	// b 0x82d79660
	goto loc_82D79660;
loc_82D79620:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82d79660
	if (!ctx.cr6.gt) goto loc_82D79660;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D79630:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7964c
	if (ctx.cr6.eq) goto loc_82D7964C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d73b40
	ctx.lr = 0x82D7964C;
	sub_82D73B40(ctx, base);
loc_82D7964C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d79630
	if (ctx.cr6.lt) goto loc_82D79630;
loc_82D79660:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d796a4
	if (!ctx.cr6.gt) goto loc_82D796A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D79674:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d79690
	if (ctx.cr6.eq) goto loc_82D79690;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d771b8
	ctx.lr = 0x82D79690;
	sub_82D771B8(ctx, base);
loc_82D79690:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d79674
	if (ctx.cr6.lt) goto loc_82D79674;
loc_82D796A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d79700
	if (!ctx.cr6.gt) goto loc_82D79700;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D796B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d796ec
	if (ctx.cr6.eq) goto loc_82D796EC;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d796e4
	if (!ctx.cr6.eq) goto loc_82D796E4;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d796ec
	if (ctx.cr6.eq) goto loc_82D796EC;
loc_82D796E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d78b10
	ctx.lr = 0x82D796EC;
	sub_82D78B10(ctx, base);
loc_82D796EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d796b8
	if (ctx.cr6.lt) goto loc_82D796B8;
loc_82D79700:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D794E8) {
	__imp__sub_82D794E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D79710;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d79764
	if (!ctx.cr6.gt) goto loc_82D79764;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D79730:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d79750
	if (ctx.cr6.eq) goto loc_82D79750;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d78cd0
	ctx.lr = 0x82D79750;
	sub_82D78CD0(ctx, base);
loc_82D79750:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d79730
	if (ctx.cr6.lt) goto loc_82D79730;
loc_82D79764:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d797d4
	if (!ctx.cr6.gt) goto loc_82D797D4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,11
	ctx.r28.s64 = 11;
loc_82D7977C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d797c0
	if (ctx.cr6.eq) goto loc_82D797C0;
	// lwz r10,132(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d797b4
	if (ctx.cr6.eq) goto loc_82D797B4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82d86988
	ctx.lr = 0x82D797B0;
	sub_82D86988(ctx, base);
	// b 0x82d797c0
	goto loc_82D797C0;
loc_82D797B4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d773a8
	ctx.lr = 0x82D797C0;
	sub_82D773A8(ctx, base);
loc_82D797C0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d7977c
	if (ctx.cr6.lt) goto loc_82D7977C;
loc_82D797D4:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d79820
	if (!ctx.cr6.gt) goto loc_82D79820;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82D797E8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d79818
	if (ctx.cr6.eq) goto loc_82D79818;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d797e8
	if (ctx.cr6.lt) goto loc_82D797E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d78710
	ctx.lr = 0x82D79814;
	sub_82D78710(ctx, base);
	// b 0x82d7987c
	goto loc_82D7987C;
loc_82D79818:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82d79834
	if (!ctx.cr6.eq) goto loc_82D79834;
loc_82D79820:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d78710
	ctx.lr = 0x82D79830;
	sub_82D78710(ctx, base);
	// b 0x82d7987c
	goto loc_82D7987C;
loc_82D79834:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d7987c
	if (!ctx.cr6.gt) goto loc_82D7987C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D79848:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d79868
	if (ctx.cr6.eq) goto loc_82D79868;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d72550
	ctx.lr = 0x82D79868;
	sub_82D72550(ctx, base);
loc_82D79868:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d79848
	if (ctx.cr6.lt) goto loc_82D79848;
loc_82D7987C:
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d798cc
	if (!ctx.cr6.gt) goto loc_82D798CC;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_82D79890:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d798c4
	if (ctx.cr6.eq) goto loc_82D798C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d79890
	if (ctx.cr6.lt) goto loc_82D79890;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82d791d0
	ctx.lr = 0x82D798BC;
	sub_82D791D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82D798C4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82d798e4
	if (!ctx.cr6.eq) goto loc_82D798E4;
loc_82D798CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82d791d0
	ctx.lr = 0x82D798DC;
	sub_82D791D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82D798E4:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d79928
	if (!ctx.cr6.gt) goto loc_82D79928;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D798F8:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d79914
	if (ctx.cr6.eq) goto loc_82D79914;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d72680
	ctx.lr = 0x82D79914;
	sub_82D72680(ctx, base);
loc_82D79914:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d798f8
	if (ctx.cr6.lt) goto loc_82D798F8;
loc_82D79928:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79708) {
	__imp__sub_82D79708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D79938;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d79984
	if (!ctx.cr6.eq) goto loc_82D79984;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D79970;
	sub_82D4EC28(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d79bc0
	ctx.lr = 0x82D7997C;
	sub_82D79BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d7999c
	goto loc_82D7999C;
loc_82D79984:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7999c
	if (ctx.cr6.eq) goto loc_82D7999C;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7999C:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d799d8
	if (ctx.cr6.eq) goto loc_82D799D8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d799d8
	if (!ctx.cr6.eq) goto loc_82D799D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D799D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D799D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne cr6,0x82d799ec
	if (!ctx.cr6.eq) goto loc_82D799EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D799EC:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// extsb r9,r29
	ctx.r9.s64 = ctx.r29.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82d79a10
	if (ctx.cr6.eq) goto loc_82D79A10;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d77ba8
	ctx.lr = 0x82D79A10;
	sub_82D77BA8(ctx, base);
loc_82D79A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79930) {
	__imp__sub_82D79930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82db8f88
	ctx.lr = 0x82D79A38;
	sub_82DB8F88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79a94
	if (ctx.cr6.eq) goto loc_82D79A94;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d79a94
	if (ctx.cr6.eq) goto loc_82D79A94;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d79a7c
	if (ctx.cr6.lt) goto loc_82D79A7C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4eb08
	ctx.lr = 0x82D79A78;
	sub_82D4EB08(ctx, base);
	// b 0x82d79a94
	goto loc_82D79A94;
loc_82D79A7C:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r31.u32);
loc_82D79A94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79A18) {
	__imp__sub_82D79A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d868e8
	ctx.lr = 0x82D79AD0;
	sub_82D868E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79b2c
	if (ctx.cr6.eq) goto loc_82D79B2C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d79b2c
	if (ctx.cr6.eq) goto loc_82D79B2C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d79b14
	if (ctx.cr6.lt) goto loc_82D79B14;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4eb08
	ctx.lr = 0x82D79B10;
	sub_82D4EB08(ctx, base);
	// b 0x82d79b2c
	goto loc_82D79B2C;
loc_82D79B14:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r31.u32);
loc_82D79B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79AB0) {
	__imp__sub_82D79AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79B48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82d79d30
	sub_82D79D30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79B48) {
	__imp__sub_82D79B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79B50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79B50) {
	__imp__sub_82D79B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d79ba4
	if (ctx.cr6.eq) goto loc_82D79BA4;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D79BA4;
	sub_82D4ECA8(ctx, base);
loc_82D79BA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79B58) {
	__imp__sub_82D79B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79BC0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-31352
	ctx.r11.s64 = ctx.r11.s64 + -31352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r7,r7,-31144
	ctx.r7.s64 = ctx.r7.s64 + -31144;
	// addi r6,r6,-31156
	ctx.r6.s64 = ctx.r6.s64 + -31156;
	// addi r5,r5,-31176
	ctx.r5.s64 = ctx.r5.s64 + -31176;
	// addi r11,r11,-31188
	ctx.r11.s64 = ctx.r11.s64 + -31188;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r4,r4,-31200
	ctx.r4.s64 = ctx.r4.s64 + -31200;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79BC0) {
	__imp__sub_82D79BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82db9610
	ctx.lr = 0x82D79C68;
	sub_82DB9610(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79c90
	if (ctx.cr6.eq) goto loc_82D79C90;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D79C90;
	sub_82D4ECA8(ctx, base);
loc_82D79C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79C48) {
	__imp__sub_82D79C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CB0) {
	__imp__sub_82D79CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CB8) {
	__imp__sub_82D79CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CC0) {
	__imp__sub_82D79CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82d79c48
	sub_82D79C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79CC8) {
	__imp__sub_82D79CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d79d18
	if (ctx.cr6.eq) goto loc_82D79D18;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D79D18;
	sub_82D4ECA8(ctx, base);
loc_82D79D18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79CD0) {
	__imp__sub_82D79CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// bne cr6,0x82d79d54
	if (!ctx.cr6.eq) goto loc_82D79D54;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D79D54:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-31340
	ctx.r11.s64 = ctx.r11.s64 + -31340;
	// addi r10,r10,14712
	ctx.r10.s64 = ctx.r10.s64 + 14712;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d79d94
	if (ctx.cr6.eq) goto loc_82D79D94;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D79D94;
	sub_82D4ECA8(ctx, base);
loc_82D79D94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79D30) {
	__imp__sub_82D79D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79e14
	if (ctx.cr6.eq) goto loc_82D79E14;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r11,-20792
	ctx.r30.s64 = ctx.r11.s64 + -20792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184450
	ctx.lr = 0x82D79DE4;
	sub_82184450(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79e04
	if (ctx.cr6.eq) goto loc_82D79E04;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_82D79E04:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
	// bl 0x832b226c
	ctx.lr = 0x82D79E14;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82D79E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79DB0) {
	__imp__sub_82D79DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D79E38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82d79ea0
	if (ctx.cr6.eq) goto loc_82D79EA0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r11,-20792
	ctx.r30.s64 = ctx.r11.s64 + -20792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184450
	ctx.lr = 0x82D79E70;
	sub_82184450(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79e88
	if (ctx.cr6.eq) goto loc_82D79E88;
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
loc_82D79E88:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
	// bl 0x832b226c
	ctx.lr = 0x82D79EA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82D79EA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b259c
	ctx.lr = 0x82D79EAC;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79E30) {
	__imp__sub_82D79E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82d79db0
	ctx.lr = 0x82D79EE4;
	sub_82D79DB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79f40
	if (ctx.cr6.eq) goto loc_82D79F40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d79f40
	if (ctx.cr6.eq) goto loc_82D79F40;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d79f28
	if (ctx.cr6.lt) goto loc_82D79F28;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4eb08
	ctx.lr = 0x82D79F24;
	sub_82D4EB08(ctx, base);
	// b 0x82d79f40
	goto loc_82D79F40;
loc_82D79F28:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r31.u32);
loc_82D79F40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79EC0) {
	__imp__sub_82D79EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d761a0
	ctx.lr = 0x82D79F80;
	sub_82D761A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79fa8
	if (ctx.cr6.eq) goto loc_82D79FA8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,46
	ctx.r6.s64 = 46;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D79FA8;
	sub_82D4ECA8(ctx, base);
loc_82D79FA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79F60) {
	__imp__sub_82D79F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79FC8) {
	__imp__sub_82D79FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D79FD0) {
	__imp__sub_82D79FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79FF4) {
	__imp__sub_82D79FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D79FF8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D79FF8) {
	__imp__sub_82D79FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A018) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7A018) {
	__imp__sub_82D7A018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A050) {
	__imp__sub_82D7A050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A058) {
	__imp__sub_82D7A058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A060) {
	__imp__sub_82D7A060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A068) {
	__imp__sub_82D7A068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7A078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7a0b4
	if (!ctx.cr6.gt) goto loc_82D7A0B4;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
loc_82D7A098:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d7a0f8
	if (ctx.cr6.eq) goto loc_82D7A0F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7a098
	if (ctx.cr6.lt) goto loc_82D7A098;
loc_82D7A0B4:
	// addi r31,r3,116
	ctx.r31.s64 = ctx.r3.s64 + 116;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d7a0d8
	if (!ctx.cr6.eq) goto loc_82D7A0D8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D7A0D8;
	sub_82D512F8(ctx, base);
loc_82D7A0D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82D7A0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A070) {
	__imp__sub_82D7A070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A100) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7a138
	if (!ctx.cr6.gt) goto loc_82D7A138;
	// lwz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// addi r7,r4,116
	ctx.r7.s64 = ctx.r4.s64 + 116;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D7A11C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82d7a144
	if (ctx.cr6.eq) goto loc_82D7A144;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7a11c
	if (ctx.cr6.lt) goto loc_82D7A11C;
loc_82D7A138:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_82D7A144:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bge cr6,0x82d7a1a4
	if (!ctx.cr6.lt) goto loc_82D7A1A4;
loc_82D7A174:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d7a174
	if (ctx.cr6.lt) goto loc_82D7A174;
loc_82D7A1A4:
	// ld r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A100) {
	__imp__sub_82D7A100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82D7A1C8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82d7a1e8
	if (ctx.cr6.eq) goto loc_82D7A1E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7a1c8
	if (ctx.cr6.lt) goto loc_82D7A1C8;
	// blr 
	return;
loc_82D7A1E8:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A1B0) {
	__imp__sub_82D7A1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A1F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82184450
	sub_82184450(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A1F8) {
	__imp__sub_82D7A1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A214) {
	__imp__sub_82D7A214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7a264
	if (ctx.cr6.eq) goto loc_82D7A264;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7a264
	if (ctx.cr6.eq) goto loc_82D7A264;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7A254;
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D7A264:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7a27c
	if (ctx.cr6.eq) goto loc_82D7A27C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_82D7A27C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A218) {
	__imp__sub_82D7A218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7a2dc
	if (ctx.cr6.eq) goto loc_82D7A2DC;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7a2dc
	if (ctx.cr6.eq) goto loc_82D7A2DC;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7A2CC;
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D7A2DC:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7a318
	if (ctx.cr6.eq) goto loc_82D7A318;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// bne cr6,0x82d7a318
	if (!ctx.cr6.eq) goto loc_82D7A318;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7A318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A290) {
	__imp__sub_82D7A290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29892
	ctx.r4.s64 = ctx.r11.s64 + -29892;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7a3a8
	if (!ctx.cr6.eq) goto loc_82D7A3A8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r10,-29904
	ctx.r4.s64 = ctx.r10.s64 + -29904;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7A3A8:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7a3e8
	if (!ctx.cr6.eq) goto loc_82D7A3E8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,-29916
	ctx.r4.s64 = ctx.r11.s64 + -29916;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7A3E8:
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d7a420
	if (ctx.cr6.eq) goto loc_82D7A420;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-29932
	ctx.r4.s64 = ctx.r11.s64 + -29932;
	// rotlwi r7,r9,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7A420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A328) {
	__imp__sub_82D7A328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7A440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29880
	ctx.r11.s64 = ctx.r11.s64 + -29880;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// bl 0x82daff88
	ctx.lr = 0x82D7A46C;
	sub_82DAFF88(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d7a480
	if (ctx.cr6.eq) goto loc_82D7A480;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
loc_82D7A480:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r9,-47
	ctx.r9.s64 = -47;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// beq cr6,0x82d7a4b4
	if (ctx.cr6.eq) goto loc_82D7A4B4;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
loc_82D7A4B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A438) {
	__imp__sub_82D7A438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D7A4C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-29880
	ctx.r11.s64 = ctx.r11.s64 + -29880;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// li r9,127
	ctx.r9.s64 = 127;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// sth r10,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r10.u16);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stb r5,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r5.u8);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stb r9,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r9.u8);
	// bl 0x82daff88
	ctx.lr = 0x82D7A530;
	sub_82DAFF88(ctx, base);
	// subf r9,r28,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r10,-47
	ctx.r10.s64 = -47;
	// subf r8,r31,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stb r9,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r9.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// sth r30,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r30.u16);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r10.u32);
	// sth r30,108(r29)
	PPC_STORE_U16(ctx.r29.u32 + 108, ctx.r30.u16);
	// stw r30,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r30.u32);
	// stw r30,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r30.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r30.u32);
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// beq cr6,0x82d7a598
	if (ctx.cr6.eq) goto loc_82D7A598;
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a598
	if (ctx.cr6.eq) goto loc_82D7A598;
	// lhz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r11.u16);
loc_82D7A598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A4C0) {
	__imp__sub_82D7A4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29880
	ctx.r11.s64 = ctx.r11.s64 + -29880;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7a604
	if (ctx.cr6.eq) goto loc_82D7A604;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a604
	if (ctx.cr6.eq) goto loc_82D7A604;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7a604
	if (!ctx.cr6.eq) goto loc_82D7A604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7A604:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7a630
	if (!ctx.cr6.eq) goto loc_82D7A630;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7A630;
	sub_82D4ECA8(ctx, base);
loc_82D7A630:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7a65c
	if (!ctx.cr6.eq) goto loc_82D7A65C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7A65C;
	sub_82D4ECA8(ctx, base);
loc_82D7A65C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A5A0) {
	__imp__sub_82D7A5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d7a5a0
	ctx.lr = 0x82D7A6A0;
	sub_82D7A5A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a6c8
	if (ctx.cr6.eq) goto loc_82D7A6C8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,20
	ctx.r6.s64 = 20;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7A6C8;
	sub_82D4ECA8(ctx, base);
loc_82D7A6C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A680) {
	__imp__sub_82D7A680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A6E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A6E8) {
	__imp__sub_82D7A6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A6F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d86028
	sub_82D86028(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A6F0) {
	__imp__sub_82D7A6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7a76c
	if (ctx.cr6.eq) goto loc_82D7A76C;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7a74c
	if (ctx.cr6.eq) goto loc_82D7A74C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7A744;
	sub_82D72148(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d7a830
	goto loc_82D7A830;
loc_82D7A74C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7a76c
	if (ctx.cr6.eq) goto loc_82D7A76C;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d91fa0
	ctx.lr = 0x82D7A76C;
	sub_82D91FA0(ctx, base);
loc_82D7A76C:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a784
	if (ctx.cr6.eq) goto loc_82D7A784;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_82D7A784:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7a7c8
	if (ctx.cr6.eq) goto loc_82D7A7C8;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a7c8
	if (ctx.cr6.eq) goto loc_82D7A7C8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7a7c8
	if (!ctx.cr6.eq) goto loc_82D7A7C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7A7C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7a7e0
	if (ctx.cr6.eq) goto loc_82D7A7E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8e298
	ctx.lr = 0x82D7A7E0;
	sub_82D8E298(ctx, base);
loc_82D7A7E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d85d30
	ctx.lr = 0x82D7A7E8;
	sub_82D85D30(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7a82c
	if (ctx.cr6.eq) goto loc_82D7A82C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d91d10
	ctx.lr = 0x82D7A7FC;
	sub_82D91D10(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// bne 0x82d7a82c
	if (!ctx.cr0.eq) goto loc_82D7A82C;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7a82c
	if (ctx.cr6.eq) goto loc_82D7A82C;
	// lbz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7a82c
	if (!ctx.cr6.eq) goto loc_82D7A82C;
	// bl 0x82d72130
	ctx.lr = 0x82D7A82C;
	sub_82D72130(ctx, base);
loc_82D7A82C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D7A830:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A6F8) {
	__imp__sub_82D7A6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a8d0
	if (ctx.cr6.eq) goto loc_82D7A8D0;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d86180
	ctx.lr = 0x82D7A8D0;
	sub_82D86180(ctx, base);
loc_82D7A8D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A848) {
	__imp__sub_82D7A848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stvx128 v0,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a950
	if (ctx.cr6.eq) goto loc_82D7A950;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7A944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d86180
	ctx.lr = 0x82D7A950;
	sub_82D86180(ctx, base);
loc_82D7A950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7A8E8) {
	__imp__sub_82D7A8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7A968) {
	__imp__sub_82D7A968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7A9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7A9A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d7a4c0
	ctx.lr = 0x82D7A9BC;
	sub_82D7A4C0(ctx, base);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// subf r28,r9,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r8,r8,-29796
	ctx.r8.s64 = ctx.r8.s64 + -29796;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r28.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r30,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r30,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r30,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7A9A0) {
	__imp__sub_82D7A9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d860e8
	ctx.lr = 0x82D7AA60;
	sub_82D860E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7aa88
	if (ctx.cr6.eq) goto loc_82D7AA88;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,48
	ctx.r6.s64 = 48;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7AA88;
	sub_82D4ECA8(ctx, base);
loc_82D7AA88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AA40) {
	__imp__sub_82D7AA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7AAB0;
	__savegprlr_28(ctx, base);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r3,64
	ctx.r7.s64 = ctx.r3.s64 + 64;
	// vxor v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r29,16
	ctx.r29.s64 = 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f9,2676(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2676);
	ctx.f9.f64 = double(temp.f32);
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// addi r9,r9,16976
	ctx.r9.s64 = ctx.r9.s64 + 16976;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// lfs f11,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r3,128
	ctx.r6.s64 = ctx.r3.s64 + 128;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,1
	ctx.r31.s64 = 1;
	// stvx128 v13,r3,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,2
	ctx.r4.s64 = 2;
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-1
	ctx.r28.s64 = -1;
	// vxor v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// lfs f13,2968(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2968);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// lfs f8,3800(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3800);
	ctx.f8.f64 = double(temp.f32);
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r31,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r31.u8);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stb r4,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r4.u8);
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r4,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r4.u8);
	// stfs f11,152(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stb r10,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r10.u8);
	// stfs f10,156(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// stfs f9,160(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// sth r28,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r28.u16);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f8,172(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stb r10,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r10.u8);
	// stb r10,181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 181, ctx.r10.u8);
	// stb r10,182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 182, ctx.r10.u8);
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7AAA8) {
	__imp__sub_82D7AAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ABC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7ABE8;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7AC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ABC8) {
	__imp__sub_82D7ABC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7AC38;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7AC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AC18) {
	__imp__sub_82D7AC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f11,f0,f13
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f0,f13,f12,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d7aca8
	if (!ctx.cr6.lt) goto loc_82D7ACA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2704);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
loc_82D7ACA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AC68) {
	__imp__sub_82D7AC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82d7d378
	sub_82D7D378(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7ACB8) {
	__imp__sub_82D7ACB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ACC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ACC8) {
	__imp__sub_82D7ACC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ACD0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82d7ad20
	if (ctx.cr6.eq) goto loc_82D7AD20;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,192(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ad0c
	if (ctx.cr6.eq) goto loc_82D7AD0C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// lbz r8,711(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 711);
	// lbz r7,710(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 710);
	// lbz r6,709(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 709);
	// b 0x82687fe8
	sub_82687FE8(ctx, base);
	return;
loc_82D7AD0C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// b 0x82687fe8
	sub_82687FE8(ctx, base);
	return;
loc_82D7AD20:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// b 0x82687fe8
	sub_82687FE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7ACD0) {
	__imp__sub_82D7ACD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AD3C) {
	__imp__sub_82D7AD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD40) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,217(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 217);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7AD40) {
	__imp__sub_82D7AD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7AD60) {
	__imp__sub_82D7AD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7AD78) {
	__imp__sub_82D7AD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AD90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7AD90) {
	__imp__sub_82D7AD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ADA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7ADA8) {
	__imp__sub_82D7ADA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r11,27936
	ctx.r4.s64 = ctx.r11.s64 + 27936;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7AE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r8,352
	ctx.r8.s64 = 352;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// vsubfp v0,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r31,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v0,v0,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx v0,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7ADC0) {
	__imp__sub_82D7ADC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7AEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7AED0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f3,204(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82d7b0a4
	if (ctx.cr6.gt) goto loc_82D7B0A4;
	// lis r12,-32040
	ctx.r12.s64 = -2099773440;
	// addi r12,r12,-20716
	ctx.r12.s64 = ctx.r12.s64 + -20716;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D7AFE0;
	case 1:
		goto loc_82D7AF38;
	case 2:
		goto loc_82D7AF98;
	case 3:
		goto loc_82D7AF68;
	case 4:
		goto loc_82D7AFC8;
	case 5:
		goto loc_82D7B04C;
	case 6:
		goto loc_82D7B0A4;
	case 7:
		goto loc_82D7AF80;
	case 8:
		goto loc_82D7B074;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-20512(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20512);
	// lwz r22,-20680(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20680);
	// lwz r22,-20584(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20584);
	// lwz r22,-20632(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20632);
	// lwz r22,-20536(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20536);
	// lwz r22,-20404(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20404);
	// lwz r22,-20316(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20316);
	// lwz r22,-20608(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20608);
	// lwz r22,-20364(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20364);
loc_82D7AF38:
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d846d0
	ctx.lr = 0x82D7AF50;
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-29692
	ctx.r11.s64 = ctx.r11.s64 + -29692;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AF68:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95f08
	ctx.lr = 0x82D7AF78;
	sub_82D95F08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AF80:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95ea0
	ctx.lr = 0x82D7AF90;
	sub_82D95EA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AF98:
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d846d0
	ctx.lr = 0x82D7AFB0;
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-29588
	ctx.r11.s64 = ctx.r11.s64 + -29588;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AFC8:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95e58
	ctx.lr = 0x82D7AFD8;
	sub_82D95E58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7AFE0:
	// lfs f12,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsel f10,f11,f13,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f12,f12,f0,f10
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fsel f13,f11,f13,f0
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f0,2860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d7af68
	if (!ctx.cr6.gt) goto loc_82D7AF68;
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d846d0
	ctx.lr = 0x82D7B034;
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-29692
	ctx.r11.s64 = ctx.r11.s64 + -29692;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B04C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,2632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95b90
	ctx.lr = 0x82D7B06C;
	sub_82D95B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B074:
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d846d0
	ctx.lr = 0x82D7B08C;
	sub_82D846D0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,-29484
	ctx.r11.s64 = ctx.r11.s64 + -29484;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B0A4:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b0bc
	if (ctx.cr6.eq) goto loc_82D7B0BC;
	// bl 0x82d95d38
	ctx.lr = 0x82D7B0B4;
	sub_82D95D38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d7b0c0
	goto loc_82D7B0C0;
loc_82D7B0BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D7B0C0:
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// beq cr6,0x82d7b110
	if (ctx.cr6.eq) goto loc_82D7B110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7B110:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x825142b0
	ctx.lr = 0x82D7B11C;
	sub_825142B0(ctx, base);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r31,189
	ctx.r3.s64 = ctx.r31.s64 + 189;
	// bl 0x825142b0
	ctx.lr = 0x82D7B128;
	sub_825142B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7AEC8) {
	__imp__sub_82D7AEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7B140;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d7c918
	ctx.lr = 0x82D7B158;
	sub_82D7C918(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// sth r11,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lbz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82d7b1fc
	if (!ctx.cr6.eq) goto loc_82D7B1FC;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b1b4
	if (ctx.cr6.eq) goto loc_82D7B1B4;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82d95d38
	ctx.lr = 0x82D7B1AC;
	sub_82D95D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82d7b1b8
	goto loc_82D7B1B8;
loc_82D7B1B4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D7B1B8:
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// addi r3,r29,188
	ctx.r3.s64 = ctx.r29.s64 + 188;
	// bl 0x825142b0
	ctx.lr = 0x82D7B1C4;
	sub_825142B0(ctx, base);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// addi r3,r29,189
	ctx.r3.s64 = ctx.r29.s64 + 189;
	// bl 0x825142b0
	ctx.lr = 0x82D7B1D0;
	sub_825142B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d84638
	ctx.lr = 0x82D7B1DC;
	sub_82D84638(ctx, base);
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82d7b290
	if (ctx.cr6.gt) goto loc_82D7B290;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82d7b290
	goto loc_82D7B290;
loc_82D7B1FC:
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// lfs f3,168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r30,128
	ctx.r8.s64 = ctx.r30.s64 + 128;
	// lfs f2,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r30,80
	ctx.r7.s64 = ctx.r30.s64 + 80;
	// lfs f1,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82d7aec8
	ctx.lr = 0x82D7B224;
	sub_82D7AEC8(ctx, base);
	// lbz r11,178(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 178);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82d84638
	ctx.lr = 0x82D7B234;
	sub_82D84638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7B23C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7B25C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r11,177(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 177);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82d7acd0
	ctx.lr = 0x82D7B28C;
	sub_82D7ACD0(ctx, base);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
loc_82D7B290:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f0,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// beq cr6,0x82d7b310
	if (ctx.cr6.eq) goto loc_82D7B310;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7adc0
	ctx.lr = 0x82D7B2BC;
	sub_82D7ADC0(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82d7b310
	if (ctx.cr6.gt) goto loc_82D7B310;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d7b304
	if (!ctx.cr6.lt) goto loc_82D7B304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2704);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82d7b30c
	goto loc_82D7B30C;
loc_82D7B304:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	ctx.f0.f64 = double(temp.f32);
loc_82D7B30C:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_82D7B310:
	// lbz r11,179(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 179);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7b324
	if (ctx.cr6.eq) goto loc_82D7B324;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82d7b34c
	goto loc_82D7B34C;
loc_82D7B324:
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82d7b338
	if (!ctx.cr6.eq) goto loc_82D7B338;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d7b34c
	goto loc_82D7B34C;
loc_82D7B338:
	// lbz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82d7b34c
	if (ctx.cr6.eq) goto loc_82D7B34C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82D7B34C:
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// lbz r11,181(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 181);
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
	// lbz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 180);
	// stb r11,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r11.u8);
	// lbz r11,182(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7b378
	if (ctx.cr6.eq) goto loc_82D7B378;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
loc_82D7B378:
	// lfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f0,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7B138) {
	__imp__sub_82D7B138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7b3f4
	if (ctx.cr6.eq) goto loc_82D7B3F4;
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d7b3f4
	if (ctx.cr6.eq) goto loc_82D7B3F4;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r5,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7B3E4;
	sub_82D72148(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D7B3F4:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d932d0
	ctx.lr = 0x82D7B400;
	sub_82D932D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B398) {
	__imp__sub_82D7B398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7B418;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b478
	if (ctx.cr6.eq) goto loc_82D7B478;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b460
	if (ctx.cr6.eq) goto loc_82D7B460;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7B454;
	sub_82D72148(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82D7B460:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b478
	if (ctx.cr6.eq) goto loc_82D7B478;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c198
	ctx.lr = 0x82D7B478;
	sub_82D7C198(ctx, base);
loc_82D7B478:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7b49c
	if (ctx.cr6.eq) goto loc_82D7B49C;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d91e50
	ctx.lr = 0x82D7B49C;
	sub_82D91E50(ctx, base);
loc_82D7B49C:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7b4bc
	if (ctx.cr6.eq) goto loc_82D7B4BC;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r11.u16);
loc_82D7B4BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d7b500
	if (ctx.cr6.eq) goto loc_82D7B500;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7b500
	if (ctx.cr6.eq) goto loc_82D7B500;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7b500
	if (!ctx.cr6.eq) goto loc_82D7B500;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7B500:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7adc0
	ctx.lr = 0x82D7B510;
	sub_82D7ADC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d7b538
	if (ctx.cr6.eq) goto loc_82D7B538;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d7b538
	if (ctx.cr6.eq) goto loc_82D7B538;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_82D7B538:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d7b594
	if (ctx.cr6.gt) goto loc_82D7B594;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d7b588
	if (!ctx.cr6.lt) goto loc_82D7B588;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2704);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82d7b590
	goto loc_82D7B590;
loc_82D7B588:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	ctx.f0.f64 = double(temp.f32);
loc_82D7B590:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_82D7B594:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b5a8
	if (ctx.cr6.eq) goto loc_82D7B5A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8dff8
	ctx.lr = 0x82D7B5A8;
	sub_82D8DFF8(ctx, base);
loc_82D7B5A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8d638
	ctx.lr = 0x82D7B5B0;
	sub_82D8D638(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7b5f4
	if (ctx.cr6.eq) goto loc_82D7B5F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d91ba0
	ctx.lr = 0x82D7B5C4;
	sub_82D91BA0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// bne 0x82d7b5f4
	if (!ctx.cr0.eq) goto loc_82D7B5F4;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b5f4
	if (ctx.cr6.eq) goto loc_82D7B5F4;
	// lbz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7b5f4
	if (!ctx.cr6.eq) goto loc_82D7B5F4;
	// bl 0x82d72130
	ctx.lr = 0x82D7B5F4;
	sub_82D72130(ctx, base);
loc_82D7B5F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7B410) {
	__imp__sub_82D7B410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d7adc0
	ctx.lr = 0x82D7B638;
	sub_82D7ADC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B600) {
	__imp__sub_82D7B600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B650) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82d7b66c
	if (ctx.cr6.eq) goto loc_82D7B66C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7b66c
	if (ctx.cr6.eq) goto loc_82D7B66C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7B66C:
	// lwz r3,488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B650) {
	__imp__sub_82D7B650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B678) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82d7b694
	if (ctx.cr6.eq) goto loc_82D7B694;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7b694
	if (ctx.cr6.eq) goto loc_82D7B694;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7B694:
	// lwz r3,488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B678) {
	__imp__sub_82D7B678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7b7b8
	if (ctx.cr6.eq) goto loc_82D7B7B8;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b6ec
	if (ctx.cr6.eq) goto loc_82D7B6EC;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7B6E8;
	sub_82D72148(ctx, base);
	// b 0x82d7b7b8
	goto loc_82D7B7B8;
loc_82D7B6EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b744
	if (ctx.cr6.eq) goto loc_82D7B744;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d892d8
	ctx.lr = 0x82D7B744;
	sub_82D892D8(ctx, base);
loc_82D7B744:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7c158
	ctx.lr = 0x82D7B750;
	sub_82D7C158(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7b788
	if (!ctx.cr6.eq) goto loc_82D7B788;
	// lbz r11,198(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 198);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7b77c
	if (ctx.cr6.eq) goto loc_82D7B77C;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7b77c
	if (ctx.cr6.eq) goto loc_82D7B77C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7B77C;
	sub_82D7C3A8(ctx, base);
loc_82D7B77C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8f350
	ctx.lr = 0x82D7B788;
	sub_82D8F350(ctx, base);
loc_82D7B788:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bne 0x82d7b7b8
	if (!ctx.cr0.eq) goto loc_82D7B7B8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b7b8
	if (ctx.cr6.eq) goto loc_82D7B7B8;
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7b7b8
	if (!ctx.cr6.eq) goto loc_82D7B7B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d72130
	ctx.lr = 0x82D7B7B8;
	sub_82D72130(ctx, base);
loc_82D7B7B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B6A0) {
	__imp__sub_82D7B6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B800;
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B7D0) {
	__imp__sub_82D7B7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B848;
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B818) {
	__imp__sub_82D7B818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B890;
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B860) {
	__imp__sub_82D7B860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B8D8;
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B8A8) {
	__imp__sub_82D7B8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7B8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b974
	if (ctx.cr6.eq) goto loc_82D7B974;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7b974
	if (ctx.cr6.eq) goto loc_82D7B974;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7B944;
	sub_82D4EC28(ctx, base);
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d72148
	ctx.lr = 0x82D7B96C;
	sub_82D72148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82D7B974:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7b6a0
	ctx.lr = 0x82D7B998;
	sub_82D7B6A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7B8F0) {
	__imp__sub_82D7B8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7B9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7ba04
	if (ctx.cr6.eq) goto loc_82D7BA04;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7ba04
	if (ctx.cr6.eq) goto loc_82D7BA04;
	// li r11,24
	ctx.r11.s64 = 24;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BA00;
	sub_82D72148(ctx, base);
	// b 0x82d7ba24
	goto loc_82D7BA24;
loc_82D7BA04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BA0C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BA24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7B9A0) {
	__imp__sub_82D7B9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7baa4
	if (ctx.cr6.eq) goto loc_82D7BAA4;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7baa4
	if (ctx.cr6.eq) goto loc_82D7BAA4;
	// li r11,25
	ctx.r11.s64 = 25;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BAA0;
	sub_82D72148(ctx, base);
	// b 0x82d7bac4
	goto loc_82D7BAC4;
loc_82D7BAA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BAAC;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BAC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7BA40) {
	__imp__sub_82D7BA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7bb44
	if (ctx.cr6.eq) goto loc_82D7BB44;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bb44
	if (ctx.cr6.eq) goto loc_82D7BB44;
	// li r11,26
	ctx.r11.s64 = 26;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BB40;
	sub_82D72148(ctx, base);
	// b 0x82d7bb64
	goto loc_82D7BB64;
loc_82D7BB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BB4C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BB64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7BAE0) {
	__imp__sub_82D7BAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7BB88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc04
	if (ctx.cr6.eq) goto loc_82D7BC04;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc04
	if (ctx.cr6.eq) goto loc_82D7BC04;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7BBD4;
	sub_82D4EC28(ctx, base);
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BBFC;
	sub_82D72148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82D7BC04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BC0C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7BB80) {
	__imp__sub_82D7BB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc94
	if (ctx.cr6.eq) goto loc_82D7BC94;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7bc94
	if (ctx.cr6.eq) goto loc_82D7BC94;
	// li r11,28
	ctx.r11.s64 = 28;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7BC90;
	sub_82D72148(ctx, base);
	// b 0x82d7bcb4
	goto loc_82D7BCB4;
loc_82D7BC94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7BC9C;
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BCB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7BC30) {
	__imp__sub_82D7BC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7BCD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7bdb4
	if (ctx.cr6.eq) goto loc_82D7BDB4;
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7bd08
	if (ctx.cr6.eq) goto loc_82D7BD08;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d7bd0c
	if (!ctx.cr6.eq) goto loc_82D7BD0C;
loc_82D7BD08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D7BD0C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7bd70
	if (!ctx.cr6.eq) goto loc_82D7BD70;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x82d7bd28
	if (ctx.cr6.eq) goto loc_82D7BD28;
	// cmpwi cr6,r30,21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 21, ctx.xer);
	// bne cr6,0x82d7bd4c
	if (!ctx.cr6.eq) goto loc_82D7BD4C;
loc_82D7BD28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BD4C:
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// bne cr6,0x82d7bd70
	if (!ctx.cr6.eq) goto loc_82D7BD70;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82D7BD70:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82d7bd98
	if (!ctx.cr6.eq) goto loc_82D7BD98;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82D7BD98:
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// bne cr6,0x82d7bdb4
	if (!ctx.cr6.eq) goto loc_82D7BDB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7BDB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7BCD0) {
	__imp__sub_82D7BCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7BDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,416
	ctx.r10.s64 = 416;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,432
	ctx.r8.s64 = 432;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,182(r30)
	PPC_STORE_U8(ctx.r30.u32 + 182, ctx.r11.u8);
	// lbz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// stb r11,180(r30)
	PPC_STORE_U8(ctx.r30.u32 + 180, ctx.r11.u8);
	// lbz r11,189(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// stb r11,181(r30)
	PPC_STORE_U8(ctx.r30.u32 + 181, ctx.r11.u8);
	// lhz r11,150(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 150);
	// sth r11,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r11.u16);
	// lbz r11,217(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 217);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,177(r30)
	PPC_STORE_U8(ctx.r30.u32 + 177, ctx.r11.u8);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lfs f0,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// lfs f0,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// lfs f0,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// lvx128 v0,r31,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82d84640
	ctx.lr = 0x82D7BE68;
	sub_82D84640(ctx, base);
	// stfs f1,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7BE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r11,14840
	ctx.r11.s64 = ctx.r11.s64 + 14840;
	// li r7,336
	ctx.r7.s64 = 336;
	// stb r10,176(r30)
	PPC_STORE_U8(ctx.r30.u32 + 176, ctx.r10.u8);
	// li r10,272
	ctx.r10.s64 = 272;
	// lbz r9,398(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 398);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,352
	ctx.r5.s64 = 352;
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r9,178(r30)
	PPC_STORE_U8(ctx.r30.u32 + 178, ctx.r9.u8);
	// lbz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// lbz r9,397(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 397);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f0,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// lvx128 v0,r31,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r31,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// lhz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// stb r11,179(r30)
	PPC_STORE_U8(ctx.r30.u32 + 179, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7BDC0) {
	__imp__sub_82D7BDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7BF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7BF20;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7aaa8
	ctx.lr = 0x82D7BF30;
	sub_82D7AAA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7bdc0
	ctx.lr = 0x82D7BF3C;
	sub_82D7BDC0(ctx, base);
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,4
	ctx.r29.s64 = 4;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7BF54;
	sub_82D4EC28(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82d7b138
	ctx.lr = 0x82D7BF64;
	sub_82D7B138(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82D7BF84:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82d7bf84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D7BF84;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c034
	if (ctx.cr6.eq) goto loc_82D7C034;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// li r4,288
	ctx.r4.s64 = 288;
	// bl 0x82d4ec28
	ctx.lr = 0x82D7BFCC;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,288
	ctx.r10.s64 = 288;
	// addi r11,r11,-29276
	ctx.r11.s64 = ctx.r11.s64 + -29276;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// stw r3,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r3.u32);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
loc_82D7C000:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x82d7c000
	if (ctx.cr6.gt) goto loc_82D7C000;
loc_82D7C034:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82d71a88
	ctx.lr = 0x82D7C05C;
	sub_82D71A88(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7BF18) {
	__imp__sub_82D7BF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82d7d378
	ctx.lr = 0x82D7C0A4;
	sub_82D7D378(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c0cc
	if (ctx.cr6.eq) goto loc_82D7C0CC;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7C0CC;
	sub_82D4ECA8(ctx, base);
loc_82D7C0CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C078) {
	__imp__sub_82D7C078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c120
	if (ctx.cr6.eq) goto loc_82D7C120;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7c120
	if (ctx.cr6.eq) goto loc_82D7C120;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x82d963f0
	ctx.lr = 0x82D7C120;
	sub_82D963F0(ctx, base);
loc_82D7C120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C0E8) {
	__imp__sub_82D7C0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c144
	if (!ctx.cr6.eq) goto loc_82D7C144;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82D7C144:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C130) {
	__imp__sub_82D7C130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c16c
	if (!ctx.cr6.eq) goto loc_82D7C16C;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82D7C16C:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C158) {
	__imp__sub_82D7C158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C180) {
	__imp__sub_82D7C180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C188) {
	__imp__sub_82D7C188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C190) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C190) {
	__imp__sub_82D7C190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7C1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d7c1e4
	if (ctx.cr6.eq) goto loc_82D7C1E4;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lhz r9,80(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// rotlwi r5,r9,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7C1DC;
	sub_82D4ECA8(ctx, base);
	// sth r28,80(r29)
	PPC_STORE_U16(ctx.r29.u32 + 80, ctx.r28.u16);
	// stw r28,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r28.u32);
loc_82D7C1E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d7c2b8
	if (ctx.cr6.eq) goto loc_82D7C2B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7c2b8
	if (ctx.cr6.eq) goto loc_82D7C2B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c230
	if (ctx.cr6.eq) goto loc_82D7C230;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d7c254
	goto loc_82D7C254;
loc_82D7C230:
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7c2b8
	if (ctx.cr6.eq) goto loc_82D7C2B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82D7C254:
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7c26c
	if (ctx.cr6.eq) goto loc_82D7C26C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x82d7c270
	if (!ctx.cr6.eq) goto loc_82D7C270;
loc_82D7C26C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D7C270:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d7c288
	if (ctx.cr6.eq) goto loc_82D7C288;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7c2b8
	if (!ctx.cr6.eq) goto loc_82D7C2B8;
loc_82D7C288:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r3,80(r29)
	PPC_STORE_U16(ctx.r29.u32 + 80, ctx.r3.u16);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D7C2B4;
	sub_82D4EC28(ctx, base);
	// stw r3,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r3.u32);
loc_82D7C2B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7C198) {
	__imp__sub_82D7C198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C2C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c2f4
	if (!ctx.cr6.gt) goto loc_82D7C2F4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82D7C2D8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82d7c2f8
	if (ctx.cr6.eq) goto loc_82D7C2F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c2d8
	if (ctx.cr6.lt) goto loc_82D7C2D8;
loc_82D7C2F4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D7C2F8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C2C0) {
	__imp__sub_82D7C2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C310) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,500(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c340
	if (!ctx.cr6.gt) goto loc_82D7C340;
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
loc_82D7C324:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82d7c344
	if (ctx.cr6.eq) goto loc_82D7C344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c324
	if (ctx.cr6.lt) goto loc_82D7C324;
loc_82D7C340:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D7C344:
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C310) {
	__imp__sub_82D7C310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C358) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c390
	if (!ctx.cr6.gt) goto loc_82D7C390;
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
loc_82D7C374:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82d7c398
	if (ctx.cr6.eq) goto loc_82D7C398;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c374
	if (ctx.cr6.lt) goto loc_82D7C374;
loc_82D7C390:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7C398:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C358) {
	__imp__sub_82D7C358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82d7c3d4
	if (!ctx.cr6.eq) goto loc_82D7C3D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82d7c3dc
	goto loc_82D7C3DC;
loc_82D7C3D4:
	// lbz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
loc_82D7C3DC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c424
	if (!ctx.cr6.eq) goto loc_82D7C424;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82d7c424
	if (ctx.cr6.eq) goto loc_82D7C424;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7c424
	if (ctx.cr6.eq) goto loc_82D7C424;
	// sth r10,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r10.u16);
	// sth r10,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r10.u16);
	// bl 0x82d90440
	ctx.lr = 0x82D7C40C;
	sub_82D90440(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// lbz r6,711(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 711);
	// lbz r5,710(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 710);
	// lbz r4,709(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 709);
	// bl 0x82688030
	ctx.lr = 0x82D7C424;
	sub_82688030(ctx, base);
loc_82D7C424:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C3A8) {
	__imp__sub_82D7C3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7c464
	if (!ctx.cr6.eq) goto loc_82D7C464;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d7c46c
	goto loc_82D7C46C;
loc_82D7C464:
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
loc_82D7C46C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c524
	if (ctx.cr6.eq) goto loc_82D7C524;
	// lbz r11,39(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7c494
	if (!ctx.cr6.eq) goto loc_82D7C494;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7c4dc
	if (ctx.cr6.eq) goto loc_82D7C4DC;
loc_82D7C494:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,164(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// andi. r9,r9,207
	ctx.r9.u64 = ctx.r9.u64 & 207;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r9,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r9.u8);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// rlwimi r9,r10,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r9.u8);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d92f48
	ctx.lr = 0x82D7C4D4;
	sub_82D92F48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r30.u32);
loc_82D7C4DC:
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d7c51c
	if (!ctx.cr6.gt) goto loc_82D7C51C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lfs f0,3164(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
loc_82D7C4FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,460(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// stfs f0,476(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 476, temp.u32);
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c4fc
	if (ctx.cr6.lt) goto loc_82D7C4FC;
loc_82D7C51C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d90318
	ctx.lr = 0x82D7C524;
	sub_82D90318(ctx, base);
loc_82D7C524:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C438) {
	__imp__sub_82D7C438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7c58c
	if (ctx.cr6.eq) goto loc_82D7C58C;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c58c
	if (ctx.cr6.eq) goto loc_82D7C58C;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7C57C;
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D7C58C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d7c3a8
	ctx.lr = 0x82D7C594;
	sub_82D7C3A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C540) {
	__imp__sub_82D7C540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7c5f4
	if (ctx.cr6.eq) goto loc_82D7C5F4;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7c5f4
	if (ctx.cr6.eq) goto loc_82D7C5F4;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82d72148
	ctx.lr = 0x82D7C5E4;
	sub_82D72148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D7C5F4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d7c438
	ctx.lr = 0x82D7C5FC;
	sub_82D7C438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C5A8) {
	__imp__sub_82D7C5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C610) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C610) {
	__imp__sub_82D7C610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C620) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d7c644
	if (!ctx.cr6.lt) goto loc_82D7C644;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82D7C644:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C620) {
	__imp__sub_82D7C620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C658) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d7c67c
	if (!ctx.cr6.lt) goto loc_82D7C67C;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82D7C67C:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C658) {
	__imp__sub_82D7C658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,30388
	ctx.r4.s64 = ctx.r11.s64 + 30388;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d567e8
	ctx.lr = 0x82D7C6E0;
	sub_82D567E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-28768
	ctx.r4.s64 = ctx.r11.s64 + -28768;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,502(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 502);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7c744
	if (!ctx.cr6.eq) goto loc_82D7C744;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lhz r7,500(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 500);
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwz r6,496(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// addi r4,r10,-28784
	ctx.r4.s64 = ctx.r10.s64 + -28784;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7C744:
	// lwz r6,204(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d7c800
	if (ctx.cr6.eq) goto loc_82D7C800;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-28808
	ctx.r4.s64 = ctx.r11.s64 + -28808;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7c7bc
	if (!ctx.cr6.eq) goto loc_82D7C7BC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r9,-28824
	ctx.r4.s64 = ctx.r9.s64 + -28824;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7C7BC:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7c800
	if (!ctx.cr6.eq) goto loc_82D7C800;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r9,-28844
	ctx.r4.s64 = ctx.r9.s64 + -28844;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7C800:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7a328
	ctx.lr = 0x82D7C80C;
	sub_82D7A328(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,488(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-28856
	ctx.r4.s64 = ctx.r11.s64 + -28856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7C844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C690) {
	__imp__sub_82D7C690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,496
	ctx.r31.s64 = ctx.r3.s64 + 496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7c8ac
	if (!ctx.cr6.gt) goto loc_82D7C8AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D7C890:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d7c900
	if (ctx.cr6.eq) goto loc_82D7C900;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7c890
	if (ctx.cr6.lt) goto loc_82D7C890;
loc_82D7C8AC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7c8cc
	if (!ctx.cr6.eq) goto loc_82D7C8CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54f78
	ctx.lr = 0x82D7C8CC;
	sub_82D54F78(ctx, base);
loc_82D7C8CC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_82D7C8E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D7C900:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d7c8ac
	if (ctx.cr6.lt) goto loc_82D7C8AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// b 0x82d7c8e8
	goto loc_82D7C8E8;
}

PPC_WEAK_FUNC(sub_82D7C860) {
	__imp__sub_82D7C860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7C918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d7a4c0
	ctx.lr = 0x82D7C934;
	sub_82D7A4C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// li r7,3
	ctx.r7.s64 = 3;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,2676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2676);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r9,r11,-28748
	ctx.r9.s64 = ctx.r11.s64 + -28748;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r9,r9,-29276
	ctx.r9.s64 = ctx.r9.s64 + -29276;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// sth r4,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r4.u16);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r4,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r4.u16);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// stb r9,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r9.u8);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// stb r7,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r7.u8);
	// sth r9,214(r31)
	PPC_STORE_U16(ctx.r31.u32 + 214, ctx.r9.u16);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// sth r11,500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 500, ctx.r11.u16);
	// sth r10,502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 502, ctx.r10.u16);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// sth r11,508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 508, ctx.r11.u16);
	// sth r10,510(r31)
	PPC_STORE_U16(ctx.r31.u32 + 510, ctx.r10.u16);
	// sth r6,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r6.u16);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r5,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r5.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7C918) {
	__imp__sub_82D7C918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d7a438
	ctx.lr = 0x82D7CA50;
	sub_82D7A438(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-28748
	ctx.r8.s64 = ctx.r11.s64 + -28748;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r7,r8,-29276
	ctx.r7.s64 = ctx.r8.s64 + -29276;
	// sth r11,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r9.u16);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// stb r5,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r5.u8);
	// stb r8,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r8.u8);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// sth r11,500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 500, ctx.r11.u16);
	// sth r9,502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 502, ctx.r9.u16);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// sth r11,508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 508, ctx.r11.u16);
	// sth r9,510(r31)
	PPC_STORE_U16(ctx.r31.u32 + 510, ctx.r9.u16);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d7cbc8
	if (ctx.cr6.gt) goto loc_82D7CBC8;
	// lis r12,-32040
	ctx.r12.s64 = -2099773440;
	// addi r12,r12,-13564
	ctx.r12.s64 = ctx.r12.s64 + -13564;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D7CB24;
	case 1:
		goto loc_82D7CB38;
	case 2:
		goto loc_82D7CB4C;
	case 3:
		goto loc_82D7CB60;
	case 4:
		goto loc_82D7CB74;
	case 5:
		goto loc_82D7CB88;
	case 6:
		goto loc_82D7CB9C;
	case 7:
		goto loc_82D7CBB0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-13532(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13532);
	// lwz r22,-13512(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13512);
	// lwz r22,-13492(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13492);
	// lwz r22,-13472(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13472);
	// lwz r22,-13452(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13452);
	// lwz r22,-13432(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13432);
	// lwz r22,-13412(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13412);
	// lwz r22,-13392(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13392);
loc_82D7CB24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29692
	ctx.r11.s64 = ctx.r11.s64 + -29692;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29588
	ctx.r11.s64 = ctx.r11.s64 + -29588;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB4C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29164
	ctx.r11.s64 = ctx.r11.s64 + -29164;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29060
	ctx.r11.s64 = ctx.r11.s64 + -29060;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB74:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,25548
	ctx.r11.s64 = ctx.r11.s64 + 25548;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB88:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26196
	ctx.r11.s64 = ctx.r11.s64 + 26196;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CB9C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-28956
	ctx.r11.s64 = ctx.r11.s64 + -28956;
	// b 0x82d7cbc0
	goto loc_82D7CBC0;
loc_82D7CBB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7cbc8
	if (ctx.cr6.eq) goto loc_82D7CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29484
	ctx.r11.s64 = ctx.r11.s64 + -29484;
loc_82D7CBC0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
loc_82D7CBC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7CA30) {
	__imp__sub_82D7CA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7CBF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cc7c
	if (!ctx.cr6.eq) goto loc_82D7CC7C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cc3c
	if (ctx.cr6.eq) goto loc_82D7CC3C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7cc48
	goto loc_82D7CC48;
loc_82D7CC3C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	ctx.lr = 0x82D7CC44;
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D7CC48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cc74
	if (ctx.cr6.eq) goto loc_82D7CC74;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// sth r31,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r31.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7cc78
	goto loc_82D7CC78;
loc_82D7CC74:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D7CC78:
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
loc_82D7CC7C:
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7ccbc
	if (!ctx.cr6.gt) goto loc_82D7CCBC;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82D7CC9C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d7ccfc
	if (ctx.cr6.eq) goto loc_82D7CCFC;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d7cc9c
	if (ctx.cr6.lt) goto loc_82D7CC9C;
loc_82D7CCBC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7ccd8
	if (!ctx.cr6.eq) goto loc_82D7CCD8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54f78
	ctx.lr = 0x82D7CCD8;
	sub_82D54F78(ctx, base);
loc_82D7CCD8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82D7CCFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d7ccbc
	if (ctx.cr6.lt) goto loc_82D7CCBC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7CBE8) {
	__imp__sub_82D7CBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7CD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cdac
	if (!ctx.cr6.eq) goto loc_82D7CDAC;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cd6c
	if (ctx.cr6.eq) goto loc_82D7CD6C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7cd78
	goto loc_82D7CD78;
loc_82D7CD6C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	ctx.lr = 0x82D7CD74;
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D7CD78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7cda4
	if (ctx.cr6.eq) goto loc_82D7CDA4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// sth r30,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r30.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7cda8
	goto loc_82D7CDA8;
loc_82D7CDA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7CDA8:
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_82D7CDAC:
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d7cde0
	if (!ctx.cr6.gt) goto loc_82D7CDE0;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_82D7CDC4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d7cde4
	if (ctx.cr6.eq) goto loc_82D7CDE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7cdc4
	if (ctx.cr6.lt) goto loc_82D7CDC4;
loc_82D7CDE0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D7CDE4:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7CD18) {
	__imp__sub_82D7CD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7CE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7ce8c
	if (!ctx.cr6.eq) goto loc_82D7CE8C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ce4c
	if (ctx.cr6.eq) goto loc_82D7CE4C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// b 0x82d7ce58
	goto loc_82D7CE58;
loc_82D7CE4C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ea30
	ctx.lr = 0x82D7CE54;
	sub_82D4EA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D7CE58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ce84
	if (ctx.cr6.eq) goto loc_82D7CE84;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// sth r30,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r30.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// b 0x82d7ce88
	goto loc_82D7CE88;
loc_82D7CE84:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7CE88:
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_82D7CE8C:
	// lwz r31,204(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82d7cec8
	if (!ctx.cr6.gt) goto loc_82D7CEC8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D7CEA8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d7cf08
	if (ctx.cr6.eq) goto loc_82D7CF08;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82d7cea8
	if (ctx.cr6.lt) goto loc_82D7CEA8;
loc_82D7CEC8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d7cee4
	if (!ctx.cr6.eq) goto loc_82D7CEE4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54f78
	ctx.lr = 0x82D7CEE4;
	sub_82D54F78(ctx, base);
loc_82D7CEE4:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82D7CF08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d7cec8
	if (ctx.cr6.lt) goto loc_82D7CEC8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7CDF8) {
	__imp__sub_82D7CDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7CF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82D7CF28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r28,92
	ctx.r31.s64 = ctx.r28.s64 + 92;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7cf88
	if (!ctx.cr6.eq) goto loc_82D7CF88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7cf74
	if (!ctx.cr6.eq) goto loc_82D7CF74;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7CF74;
	sub_82D4ECA8(ctx, base);
loc_82D7CF74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwimi r11,r26,31,2,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D7CF88:
	// lhz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7cfe8
	if (!ctx.cr6.eq) goto loc_82D7CFE8;
	// addi r31,r28,152
	ctx.r31.s64 = ctx.r28.s64 + 152;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7cfd0
	if (!ctx.cr6.eq) goto loc_82D7CFD0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	ctx.lr = 0x82D7CFD0;
	sub_82D4ECA8(ctx, base);
loc_82D7CFD0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7CFE8:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d038
	if (!ctx.cr6.eq) goto loc_82D7D038;
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d024
	if (!ctx.cr6.eq) goto loc_82D7D024;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D024;
	sub_82D4ECA8(ctx, base);
loc_82D7D024:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwimi r11,r26,31,2,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D7D038:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d088
	if (!ctx.cr6.eq) goto loc_82D7D088;
	// addi r31,r28,172
	ctx.r31.s64 = ctx.r28.s64 + 172;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d074
	if (!ctx.cr6.eq) goto loc_82D7D074;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D074;
	sub_82D4ECA8(ctx, base);
loc_82D7D074:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwimi r11,r26,31,2,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r11.u64 & 0x40000000);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D7D088:
	// lhz r10,500(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 500);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7d0c8
	if (ctx.cr6.eq) goto loc_82D7D0C8;
	// lwz r10,496(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 496);
loc_82D7D0A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82d7d0c4
	if (!ctx.cr6.eq) goto loc_82D7D0C4;
	// lhz r8,500(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 500);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d7d0a0
	if (ctx.cr6.lt) goto loc_82D7D0A0;
	// b 0x82d7d0c8
	goto loc_82D7D0C8;
loc_82D7D0C4:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82D7D0C8:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d11c
	if (!ctx.cr6.eq) goto loc_82D7D11C;
	// addi r31,r28,496
	ctx.r31.s64 = ctx.r28.s64 + 496;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d104
	if (!ctx.cr6.eq) goto loc_82D7D104;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D104;
	sub_82D4ECA8(ctx, base);
loc_82D7D104:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D11C:
	// lwz r31,204(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7d1b8
	if (ctx.cr6.eq) goto loc_82D7D1B8;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7d168
	if (ctx.cr6.eq) goto loc_82D7D168;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D7D140:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7d164
	if (!ctx.cr6.eq) goto loc_82D7D164;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7d140
	if (ctx.cr6.lt) goto loc_82D7D140;
	// b 0x82d7d168
	goto loc_82D7D168;
loc_82D7D164:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82D7D168:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d1b8
	if (!ctx.cr6.eq) goto loc_82D7D1B8;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d1a0
	if (!ctx.cr6.eq) goto loc_82D7D1A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D1A0;
	sub_82D4ECA8(ctx, base);
loc_82D7D1A0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D1B8:
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d258
	if (ctx.cr6.eq) goto loc_82D7D258;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d7d208
	if (ctx.cr6.eq) goto loc_82D7D208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D7D1E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7d204
	if (!ctx.cr6.eq) goto loc_82D7D204;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7d1e0
	if (ctx.cr6.lt) goto loc_82D7D1E0;
	// b 0x82d7d208
	goto loc_82D7D208;
loc_82D7D204:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82D7D208:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d258
	if (!ctx.cr6.eq) goto loc_82D7D258;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d240
	if (!ctx.cr6.eq) goto loc_82D7D240;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D240;
	sub_82D4ECA8(ctx, base);
loc_82D7D240:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D258:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d31c
	if (!ctx.cr6.eq) goto loc_82D7D31C;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d7d31c
	if (!ctx.cr6.eq) goto loc_82D7D31C;
	// lwz r31,204(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7d318
	if (ctx.cr6.eq) goto loc_82D7D318;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d2a8
	if (!ctx.cr6.eq) goto loc_82D7D2A8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D2A8;
	sub_82D4ECA8(ctx, base);
loc_82D7D2A8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d2d4
	if (!ctx.cr6.eq) goto loc_82D7D2D4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D2D4;
	sub_82D4ECA8(ctx, base);
loc_82D7D2D4:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d7d300
	if (ctx.cr6.lt) goto loc_82D7D300;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4eb08
	ctx.lr = 0x82D7D2FC;
	sub_82D4EB08(ctx, base);
	// b 0x82d7d318
	goto loc_82D7D318;
loc_82D7D300:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
loc_82D7D318:
	// stw r27,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r27.u32);
loc_82D7D31C:
	// lhz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7d370
	if (!ctx.cr6.eq) goto loc_82D7D370;
	// addi r31,r28,504
	ctx.r31.s64 = ctx.r28.s64 + 504;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d358
	if (!ctx.cr6.eq) goto loc_82D7D358;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D358;
	sub_82D4ECA8(ctx, base);
loc_82D7D358:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_82D7D370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7CF20) {
	__imp__sub_82D7CF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-28748
	ctx.r11.s64 = ctx.r11.s64 + -28748;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82d8d718
	ctx.lr = 0x82D7D39C;
	sub_82D8D718(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7d3b0
	if (ctx.cr6.eq) goto loc_82D7D3B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d7d608
	ctx.lr = 0x82D7D3B0;
	sub_82D7D608(ctx, base);
loc_82D7D3B0:
	// lhz r11,510(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 510);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d3dc
	if (!ctx.cr6.eq) goto loc_82D7D3DC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D3DC;
	sub_82D4ECA8(ctx, base);
loc_82D7D3DC:
	// lhz r11,502(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 502);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d408
	if (!ctx.cr6.eq) goto loc_82D7D408;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D408;
	sub_82D4ECA8(ctx, base);
loc_82D7D408:
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82d95bf8
	ctx.lr = 0x82D7D410;
	sub_82D95BF8(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d43c
	if (!ctx.cr6.eq) goto loc_82D7D43C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D43C;
	sub_82D4ECA8(ctx, base);
loc_82D7D43C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7d468
	if (!ctx.cr6.eq) goto loc_82D7D468;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D468;
	sub_82D4ECA8(ctx, base);
loc_82D7D468:
	// lhz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d4a0
	if (!ctx.cr6.eq) goto loc_82D7D4A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D4A0;
	sub_82D4ECA8(ctx, base);
loc_82D7D4A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7a5a0
	ctx.lr = 0x82D7D4A8;
	sub_82D7A5A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D378) {
	__imp__sub_82D7D378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d95bf8
	ctx.lr = 0x82D7D4E0;
	sub_82D95BF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d508
	if (ctx.cr6.eq) goto loc_82D7D508;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,45
	ctx.r6.s64 = 45;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D508;
	sub_82D4ECA8(ctx, base);
loc_82D7D508:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D4C0) {
	__imp__sub_82D7D4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7d570
	if (ctx.cr6.eq) goto loc_82D7D570;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,45
	ctx.r6.s64 = 45;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D570;
	sub_82D4ECA8(ctx, base);
loc_82D7D570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D528) {
	__imp__sub_82D7D528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d5c8
	if (!ctx.cr6.eq) goto loc_82D7D5C8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D5C8;
	sub_82D4ECA8(ctx, base);
loc_82D7D5C8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7d5f4
	if (!ctx.cr6.eq) goto loc_82D7D5F4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D5F4;
	sub_82D4ECA8(ctx, base);
loc_82D7D5F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D588) {
	__imp__sub_82D7D588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d7d588
	ctx.lr = 0x82D7D628;
	sub_82D7D588(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d684
	if (ctx.cr6.eq) goto loc_82D7D684;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7d684
	if (ctx.cr6.eq) goto loc_82D7D684;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d7d66c
	if (ctx.cr6.lt) goto loc_82D7D66C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4eb08
	ctx.lr = 0x82D7D668;
	sub_82D4EB08(ctx, base);
	// b 0x82d7d684
	goto loc_82D7D684;
loc_82D7D66C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
loc_82D7D684:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D608) {
	__imp__sub_82D7D608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d7d378
	ctx.lr = 0x82D7D6C0;
	sub_82D7D378(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d6e8
	if (ctx.cr6.eq) goto loc_82D7D6E8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7D6E8;
	sub_82D4ECA8(ctx, base);
loc_82D7D6E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D6A0) {
	__imp__sub_82D7D6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7D710;
	__savegprlr_28(ctx, base);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-64
	ctx.r31.s64 = ctx.r1.s64 + -64;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// li r28,80
	ctx.r28.s64 = 80;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lfs f0,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,3080(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v0,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// li r8,144
	ctx.r8.s64 = 144;
	// vpermwi128 v13,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r10,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vmulfp128 v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7D708) {
	__imp__sub_82D7D708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D890) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,298
	ctx.r4.s64 = 298;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d97098
	// ERROR 82D97098
	return;
}

PPC_WEAK_FUNC(sub_82D7D890) {
	__imp__sub_82D7D890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D8A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D8A0) {
	__imp__sub_82D7D8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D8B8) {
	__imp__sub_82D7D8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lfs f31,-16936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82d51130
	ctx.lr = 0x82D7D900;
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// beq cr6,0x82d7d944
	if (ctx.cr6.eq) goto loc_82D7D944;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51130
	ctx.lr = 0x82D7D934;
	sub_82D51130(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d7d948
	if (!ctx.cr6.eq) goto loc_82D7D948;
loc_82D7D944:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D948:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d970
	if (ctx.cr6.eq) goto loc_82D7D970;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f13,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d7d974
	if (ctx.cr6.eq) goto loc_82D7D974;
loc_82D7D970:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D974:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d99c
	if (ctx.cr6.eq) goto loc_82D7D99C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d7d9a0
	if (!ctx.cr6.lt) goto loc_82D7D9A0;
loc_82D7D99C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D9A0:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d9c8
	if (ctx.cr6.eq) goto loc_82D7D9C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d7d9cc
	if (ctx.cr6.lt) goto loc_82D7D9CC;
loc_82D7D9C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D9CC:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7d9f0
	if (ctx.cr6.eq) goto loc_82D7D9F0;
	// lfs f0,300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d7d9f4
	if (!ctx.cr6.gt) goto loc_82D7D9F4;
loc_82D7D9F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7D9F4:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d7da18
	if (ctx.cr6.eq) goto loc_82D7DA18;
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d7da1c
	if (!ctx.cr6.gt) goto loc_82D7DA1C;
loc_82D7DA18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7DA1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7D8C0) {
	__imp__sub_82D7D8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DA40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DA40) {
	__imp__sub_82D7DA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DA68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DA68) {
	__imp__sub_82D7DA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DA90) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DA90) {
	__imp__sub_82D7DA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAB8) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// b 0x82d593b8
	sub_82D593B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DAB8) {
	__imp__sub_82D7DAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DAC8) {
	__imp__sub_82D7DAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DAF0) {
	__imp__sub_82D7DAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7DB00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d7db2c
	if (ctx.cr6.eq) goto loc_82D7DB2C;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7db2c
	if (ctx.cr6.eq) goto loc_82D7DB2C;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_82D7DB2C:
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7db78
	if (ctx.cr6.eq) goto loc_82D7DB78;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7db78
	if (ctx.cr6.eq) goto loc_82D7DB78;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7db78
	if (!ctx.cr6.eq) goto loc_82D7DB78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7DB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DB78:
	// stwx r30,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DAF8) {
	__imp__sub_82D7DAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DB88) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DB88) {
	__imp__sub_82D7DB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DB98) {
	__imp__sub_82D7DB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBA0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DBA0) {
	__imp__sub_82D7DBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DBB0) {
	__imp__sub_82D7DBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBB8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d7daf8
	sub_82D7DAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DBB8) {
	__imp__sub_82D7DBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,162(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 162);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DBC8) {
	__imp__sub_82D7DBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DBD8) {
	__imp__sub_82D7DBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82D7DBE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,16
	ctx.r28.s64 = 16;
	// vmsum3fp128 v9,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v13,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r29,32
	ctx.r29.s64 = 32;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v11,r4,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lvx128 v10,r4,r29
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// stvx128 v9,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v9,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v13,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vpermwi128 v8,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v0,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v9,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v13,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v9,v8,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v0,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r8,r8,16896
	ctx.r8.s64 = ctx.r8.s64 + 16896;
loc_82D7DCBC:
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vmrghw v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d7dcbc
	if (!ctx.cr6.lt) goto loc_82D7DCBC;
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,2
	ctx.r11.s64 = 2;
	// lvx128 v11,r30,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r30,r29
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
loc_82D7DD0C:
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// vmsum3fp128 v9,v11,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vmrghw v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v0,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge cr6,0x82d7dd0c
	if (!ctx.cr6.lt) goto loc_82D7DD0C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82d4fe48
	ctx.lr = 0x82D7DD50;
	sub_82D4FE48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82d4fe48
	ctx.lr = 0x82D7DD60;
	sub_82D4FE48(ctx, base);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DBE0) {
	__imp__sub_82D7DBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7DD90;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// lfs f29,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fadds f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82d506f8
	ctx.lr = 0x82D7DDD4;
	sub_82D506F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v7,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// vpermwi128 v6,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltw v12,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v8,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r11,r11,17024
	ctx.r11.s64 = ctx.r11.s64 + 17024;
	// vpermwi128 v10,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v9,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v10,v10,v7
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)));
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v9,v9,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v11,v12,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v10,v9,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v13,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v8,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v0,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v13,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,284(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DD88) {
	__imp__sub_82D7DD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7DE80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-28700
	ctx.r11.s64 = ctx.r11.s64 + -28700;
	// addi r31,r29,224
	ctx.r31.s64 = ctx.r29.s64 + 224;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82D7DE9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7dee0
	if (ctx.cr6.eq) goto loc_82D7DEE0;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7dee0
	if (ctx.cr6.eq) goto loc_82D7DEE0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7dee0
	if (!ctx.cr6.eq) goto loc_82D7DEE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7DEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DEE0:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d7de9c
	if (!ctx.cr6.eq) goto loc_82D7DE9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DE78) {
	__imp__sub_82D7DE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,242(r3)
	PPC_STORE_U8(ctx.r3.u32 + 242, ctx.r11.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7DF08) {
	__imp__sub_82D7DF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7DF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D7DF80;
	__savegprlr_28(ctx, base);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,19
	ctx.r31.s64 = 19;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// addi r7,r10,-28700
	ctx.r7.s64 = ctx.r10.s64 + -28700;
	// lfs f0,3080(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// li r30,17
	ctx.r30.s64 = 17;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// vxor v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r7,r3,96
	ctx.r7.s64 = ctx.r3.s64 + 96;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
	// sth r31,144(r11)
	PPC_STORE_U16(ctx.r11.u32 + 144, ctx.r31.u16);
	// li r31,96
	ctx.r31.s64 = 96;
	// stb r9,146(r11)
	PPC_STORE_U8(ctx.r11.u32 + 146, ctx.r9.u8);
	// sth r10,148(r11)
	PPC_STORE_U16(ctx.r11.u32 + 148, ctx.r10.u16);
	// sth r10,150(r11)
	PPC_STORE_U16(ctx.r11.u32 + 150, ctx.r10.u16);
	// sth r30,224(r11)
	PPC_STORE_U16(ctx.r11.u32 + 224, ctx.r30.u16);
	// li r30,100
	ctx.r30.s64 = 100;
	// stb r9,226(r11)
	PPC_STORE_U8(ctx.r11.u32 + 226, ctx.r9.u8);
	// stb r9,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r9.u8);
	// sth r29,236(r11)
	PPC_STORE_U16(ctx.r11.u32 + 236, ctx.r29.u16);
	// stb r9,238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 238, ctx.r9.u8);
	// sth r6,256(r11)
	PPC_STORE_U16(ctx.r11.u32 + 256, ctx.r6.u16);
	// stb r9,258(r11)
	PPC_STORE_U8(ctx.r11.u32 + 258, ctx.r9.u8);
	// stb r10,262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 262, ctx.r10.u8);
	// sth r6,276(r11)
	PPC_STORE_U16(ctx.r11.u32 + 276, ctx.r6.u16);
	// stb r9,278(r11)
	PPC_STORE_U8(ctx.r11.u32 + 278, ctx.r9.u8);
	// stb r10,282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 282, ctx.r10.u8);
	// sth r28,296(r11)
	PPC_STORE_U16(ctx.r11.u32 + 296, ctx.r28.u16);
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r8,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// stvx128 v0,r8,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// addi r8,r7,48
	ctx.r8.s64 = ctx.r7.s64 + 48;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r7,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r7,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,40(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,3084(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// li r5,3
	ctx.r5.s64 = 3;
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f11,-28644(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28644);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,243(r3)
	PPC_STORE_U8(ctx.r3.u32 + 243, ctx.r10.u8);
	// lfs f10,-28648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28648);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,2860(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2860);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f9,1828(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1828);
	ctx.f9.f64 = double(temp.f32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stfs f12,248(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stb r5,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r5.u8);
	// stb r10,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r10.u8);
	// sth r31,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r31.u16);
	// sth r30,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r30.u16);
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// stfs f11,260(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stfs f10,264(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stfs f13,268(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stb r10,255(r3)
	PPC_STORE_U8(ctx.r3.u32 + 255, ctx.r10.u8);
	// lfs f0,-28652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28652);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f9,280(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stb r9,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r9.u8);
	// stfs f13,288(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stb r10,275(r3)
	PPC_STORE_U8(ctx.r3.u32 + 275, ctx.r10.u8);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stb r10,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, ctx.r10.u8);
	// stfs f13,308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stb r10,277(r3)
	PPC_STORE_U8(ctx.r3.u32 + 277, ctx.r10.u8);
	// lfs f12,3176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	ctx.f12.f64 = double(temp.f32);
	// stb r7,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r7.u8);
	// stfs f12,304(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stb r10,295(r3)
	PPC_STORE_U8(ctx.r3.u32 + 295, ctx.r10.u8);
	// stb r9,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r9.u8);
	// stb r9,297(r3)
	PPC_STORE_U8(ctx.r3.u32 + 297, ctx.r9.u8);
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7DF78) {
	__imp__sub_82D7DF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d7de78
	ctx.lr = 0x82D7E178;
	sub_82D7DE78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e1a0
	if (ctx.cr6.eq) goto loc_82D7E1A0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E1A0;
	sub_82D4ECA8(ctx, base);
loc_82D7E1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E158) {
	__imp__sub_82D7E158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E1C0) {
	__imp__sub_82D7E1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E1C8) {
	__imp__sub_82D7E1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E1E0) {
	__imp__sub_82D7E1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E1E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-28552
	ctx.r11.s64 = ctx.r11.s64 + -28552;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E1E8) {
	__imp__sub_82D7E1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28552
	ctx.r3.s64 = ctx.r11.s64 + -28552;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E208) {
	__imp__sub_82D7E208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E218) {
	__imp__sub_82D7E218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E220) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d97b60
	sub_82D97B60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E220) {
	__imp__sub_82D7E220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E230) {
	__imp__sub_82D7E230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E238) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d7e240
	sub_82D7E240(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E238) {
	__imp__sub_82D7E238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e280
	if (!ctx.cr6.eq) goto loc_82D7E280;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E280;
	sub_82D4ECA8(ctx, base);
loc_82D7E280:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e2ac
	if (!ctx.cr6.eq) goto loc_82D7E2AC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E2AC;
	sub_82D4ECA8(ctx, base);
loc_82D7E2AC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e2d8
	if (!ctx.cr6.eq) goto loc_82D7E2D8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E2D8;
	sub_82D4ECA8(ctx, base);
loc_82D7E2D8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e304
	if (!ctx.cr6.eq) goto loc_82D7E304;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E304;
	sub_82D4ECA8(ctx, base);
loc_82D7E304:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E240) {
	__imp__sub_82D7E240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E318) {
	__imp__sub_82D7E318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E330) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27820
	ctx.r11.s64 = ctx.r11.s64 + -27820;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E330) {
	__imp__sub_82D7E330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27820
	ctx.r3.s64 = ctx.r11.s64 + -27820;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E350) {
	__imp__sub_82D7E350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E360) {
	__imp__sub_82D7E360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E368) {
	__imp__sub_82D7E368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E380) {
	__imp__sub_82D7E380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E388) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27612
	ctx.r11.s64 = ctx.r11.s64 + -27612;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E388) {
	__imp__sub_82D7E388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27612
	ctx.r3.s64 = ctx.r11.s64 + -27612;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E3A8) {
	__imp__sub_82D7E3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7e400
	if (ctx.cr6.eq) goto loc_82D7E400;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E400;
	sub_82D4ECA8(ctx, base);
loc_82D7E400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E3B8) {
	__imp__sub_82D7E3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E418) {
	__imp__sub_82D7E418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E420) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d984b0
	sub_82D984B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E420) {
	__imp__sub_82D7E420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E430) {
	__imp__sub_82D7E430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E438) {
	__imp__sub_82D7E438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d984b0
	ctx.lr = 0x82D7E468;
	sub_82D984B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E450) {
	__imp__sub_82D7E450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E480) {
	__imp__sub_82D7E480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E488) {
	__imp__sub_82D7E488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4A0) {
	__imp__sub_82D7E4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-26700
	ctx.r11.s64 = ctx.r11.s64 + -26700;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4A8) {
	__imp__sub_82D7E4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-26700
	ctx.r3.s64 = ctx.r11.s64 + -26700;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4C8) {
	__imp__sub_82D7E4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4D8) {
	__imp__sub_82D7E4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E4E0) {
	__imp__sub_82D7E4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E4F8) {
	__imp__sub_82D7E4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E500) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-26284
	ctx.r11.s64 = ctx.r11.s64 + -26284;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E500) {
	__imp__sub_82D7E500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-26284
	ctx.r3.s64 = ctx.r11.s64 + -26284;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E520) {
	__imp__sub_82D7E520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d996e8
	ctx.lr = 0x82D7E550;
	sub_82D996E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e578
	if (ctx.cr6.eq) goto loc_82D7E578;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E578;
	sub_82D4ECA8(ctx, base);
loc_82D7E578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E530) {
	__imp__sub_82D7E530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E598) {
	__imp__sub_82D7E598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E5A0) {
	__imp__sub_82D7E5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5B8) {
	__imp__sub_82D7E5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25932
	ctx.r11.s64 = ctx.r11.s64 + -25932;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5C0) {
	__imp__sub_82D7E5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-25932
	ctx.r3.s64 = ctx.r11.s64 + -25932;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5E0) {
	__imp__sub_82D7E5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d85040
	ctx.lr = 0x82D7E610;
	sub_82D85040(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e638
	if (ctx.cr6.eq) goto loc_82D7E638;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E638;
	sub_82D4ECA8(ctx, base);
loc_82D7E638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E5F0) {
	__imp__sub_82D7E5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E658) {
	__imp__sub_82D7E658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E660) {
	__imp__sub_82D7E660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E678) {
	__imp__sub_82D7E678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E680) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25716
	ctx.r11.s64 = ctx.r11.s64 + -25716;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E680) {
	__imp__sub_82D7E680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-25716
	ctx.r3.s64 = ctx.r11.s64 + -25716;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6A0) {
	__imp__sub_82D7E6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6B0) {
	__imp__sub_82D7E6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6B8) {
	__imp__sub_82D7E6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E6C0) {
	__imp__sub_82D7E6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6D8) {
	__imp__sub_82D7E6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E6E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lbz r9,278(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 278);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-28700
	ctx.r11.s64 = ctx.r11.s64 + -28700;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,56
	ctx.r11.s64 = 56;
	// stb r11,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E6E0) {
	__imp__sub_82D7E6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28700
	ctx.r3.s64 = ctx.r11.s64 + -28700;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E718) {
	__imp__sub_82D7E718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E728) {
	__imp__sub_82D7E728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E730) {
	__imp__sub_82D7E730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E748) {
	__imp__sub_82D7E748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E750) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lbz r9,154(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24740
	ctx.r11.s64 = ctx.r11.s64 + -24740;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E750) {
	__imp__sub_82D7E750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-24740
	ctx.r3.s64 = ctx.r11.s64 + -24740;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E788) {
	__imp__sub_82D7E788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E798) {
	__imp__sub_82D7E798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7e7e0
	if (ctx.cr6.eq) goto loc_82D7E7E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d7ca30
	ctx.lr = 0x82D7E7D4;
	sub_82D7CA30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7E7E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E7B0) {
	__imp__sub_82D7E7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ca30
	ctx.lr = 0x82D7E810;
	sub_82D7CA30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29728
	ctx.r3.s64 = ctx.r11.s64 + -29728;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E7F8) {
	__imp__sub_82D7E7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E828) {
	__imp__sub_82D7E828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E830) {
	__imp__sub_82D7E830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E848) {
	__imp__sub_82D7E848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E850) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24564
	ctx.r11.s64 = ctx.r11.s64 + -24564;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E850) {
	__imp__sub_82D7E850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-24564
	ctx.r3.s64 = ctx.r11.s64 + -24564;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E870) {
	__imp__sub_82D7E870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E880) {
	__imp__sub_82D7E880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E888) {
	__imp__sub_82D7E888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E890) {
	__imp__sub_82D7E890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E898) {
	__imp__sub_82D7E898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8B0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7e8f8
	sub_82D7E8F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82D7E8B0) {
	__imp__sub_82D7E8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E8C0) {
	__imp__sub_82D7E8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e8f8
	ctx.lr = 0x82D7E8E0;
	sub_82D7E8F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E8C8) {
	__imp__sub_82D7E8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d7a438
	ctx.lr = 0x82D7E910;
	sub_82D7A438(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,19580
	ctx.r9.s64 = ctx.r11.s64 + 19580;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E8F8) {
	__imp__sub_82D7E8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7E960) {
	__imp__sub_82D7E960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E978) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23716
	ctx.r11.s64 = ctx.r11.s64 + -23716;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E978) {
	__imp__sub_82D7E978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-23716
	ctx.r3.s64 = ctx.r11.s64 + -23716;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E998) {
	__imp__sub_82D7E998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7E9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d87c18
	ctx.lr = 0x82D7E9C8;
	sub_82D87C18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e9f0
	if (ctx.cr6.eq) goto loc_82D7E9F0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,20
	ctx.r6.s64 = 20;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7E9F0;
	sub_82D4ECA8(ctx, base);
loc_82D7E9F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7E9A8) {
	__imp__sub_82D7E9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA10) {
	__imp__sub_82D7EA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EA18) {
	__imp__sub_82D7EA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-23124
	ctx.r11.s64 = ctx.r11.s64 + -23124;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA30) {
	__imp__sub_82D7EA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-23124
	ctx.r3.s64 = ctx.r11.s64 + -23124;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA50) {
	__imp__sub_82D7EA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7eaa8
	if (ctx.cr6.eq) goto loc_82D7EAA8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,42
	ctx.r6.s64 = 42;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7EAA8;
	sub_82D4ECA8(ctx, base);
loc_82D7EAA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EA60) {
	__imp__sub_82D7EA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EAC0) {
	__imp__sub_82D7EAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EAD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29692
	ctx.r11.s64 = ctx.r11.s64 + -29692;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EAD8) {
	__imp__sub_82D7EAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29692
	ctx.r3.s64 = ctx.r11.s64 + -29692;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EAF8) {
	__imp__sub_82D7EAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EB08) {
	__imp__sub_82D7EB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22928
	ctx.r11.s64 = ctx.r11.s64 + -22928;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB20) {
	__imp__sub_82D7EB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB40) {
	__imp__sub_82D7EB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EB50) {
	__imp__sub_82D7EB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29060
	ctx.r11.s64 = ctx.r11.s64 + -29060;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB68) {
	__imp__sub_82D7EB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29060
	ctx.r3.s64 = ctx.r11.s64 + -29060;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EB88) {
	__imp__sub_82D7EB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82D7EB98) {
	__imp__sub_82D7EB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82D7EBB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29588
	ctx.r11.s64 = ctx.r11.s64 + -29588;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82D7EBB0) {
	__imp__sub_82D7EBB0(ctx, base);
}

