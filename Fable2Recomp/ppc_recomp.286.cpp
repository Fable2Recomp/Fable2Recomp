#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831033E8"))) PPC_WEAK_FUNC(sub_831033E8);
PPC_FUNC_IMPL(__imp__sub_831033E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lbzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310343C"))) PPC_WEAK_FUNC(sub_8310343C);
PPC_FUNC_IMPL(__imp__sub_8310343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83103440"))) PPC_WEAK_FUNC(sub_83103440);
PPC_FUNC_IMPL(__imp__sub_83103440) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lbzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subfic r3,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r10.s64;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r5,r5,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r5.s64;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | ctx.r31.u64;
	// srw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// and r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
loc_831034B4:
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x831034b4
	if (ctx.cr6.lt) goto loc_831034B4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831034D8"))) PPC_WEAK_FUNC(sub_831034D8);
PPC_FUNC_IMPL(__imp__sub_831034D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831034E0;
	sub_82CA2BDC(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31946
	ctx.r25.s64 = -2093613056;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-16040(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83103530
	if (!ctx.cr6.eq) goto loc_83103530;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r11,r11,-16028
	ctx.r11.s64 = ctx.r11.s64 + -16028;
	// lwz r10,-16032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16032);
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8310370c
	goto loc_8310370C;
loc_83103530:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x8310355c
	if (ctx.cr6.lt) goto loc_8310355C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-16028
	ctx.r11.s64 = ctx.r11.s64 + -16028;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r5,r9,-6428
	ctx.r5.s64 = ctx.r9.s64 + -6428;
	// addi r4,r8,-6436
	ctx.r4.s64 = ctx.r8.s64 + -6436;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// b 0x83103634
	goto loc_83103634;
loc_8310355C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mulli r26,r29,12
	ctx.r26.s64 = ctx.r29.s64 * 12;
	// addi r11,r11,11856
	ctx.r11.s64 = ctx.r11.s64 + 11856;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83103588
	if (!ctx.cr6.eq) goto loc_83103588;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83103710
	if (!ctx.cr6.eq) goto loc_83103710;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83103710
	if (ctx.cr6.eq) goto loc_83103710;
loc_83103588:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,-17080
	ctx.r31.s64 = ctx.r11.s64 + -17080;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82caacc0
	ctx.lr = 0x831035B0;
	sub_82CAACC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stb r11,1022(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1022, ctx.r11.u8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-21148
	ctx.r5.s64 = ctx.r10.s64 + -21148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// bl 0x82ca3eb8
	ctx.lr = 0x831035D0;
	sub_82CA3EB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stb r11,1023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1023, ctx.r11.u8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r10,-16028
	ctx.r30.s64 = ctx.r10.s64 + -16028;
	// beq cr6,0x831035f0
	if (ctx.cr6.eq) goto loc_831035F0;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x83103614
	if (!ctx.cr6.eq) goto loc_83103614;
loc_831035F0:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83103614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83103614:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83103644
	if (!ctx.cr6.eq) goto loc_83103644;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-6436
	ctx.r4.s64 = ctx.r11.s64 + -6436;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_83103634:
	// lwz r10,-16040(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16040);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83103640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83103710
	goto loc_83103710;
loc_83103644:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x831036fc
	if (!ctx.cr6.eq) goto loc_831036FC;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,-16056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831036fc
	if (ctx.cr6.eq) goto loc_831036FC;
	// lis r27,-31946
	ctx.r27.s64 = -2093613056;
	// lwz r11,-16048(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831036fc
	if (ctx.cr6.eq) goto loc_831036FC;
	// lis r28,-31946
	ctx.r28.s64 = -2093613056;
	// lwz r11,-16052(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831036fc
	if (ctx.cr6.eq) goto loc_831036FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,-16056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16056);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83103698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83103710
	if (ctx.cr0.eq) goto loc_83103710;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_831036A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x831036a8
	if (!ctx.cr6.eq) goto loc_831036A8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,-16048(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16048);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831036E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,-16052(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16052);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831036F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83103710
	goto loc_83103710;
loc_831036FC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,-16032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8310370C:
	// bctrl 
	ctx.lr = 0x83103710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83103710:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83103718"))) PPC_WEAK_FUNC(sub_83103718);
PPC_FUNC_IMPL(__imp__sub_83103718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-16056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r10,-16048(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16048);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r10,-16052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16052);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,-16056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16056);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-16044(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83103768"))) PPC_WEAK_FUNC(sub_83103768);
PPC_FUNC_IMPL(__imp__sub_83103768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310376C"))) PPC_WEAK_FUNC(sub_8310376C);
PPC_FUNC_IMPL(__imp__sub_8310376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83103770"))) PPC_WEAK_FUNC(sub_83103770);
PPC_FUNC_IMPL(__imp__sub_83103770) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r10,-16052(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16052);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,-16052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16052);
	// lwz r3,-16044(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831037A0"))) PPC_WEAK_FUNC(sub_831037A0);
PPC_FUNC_IMPL(__imp__sub_831037A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831037A4"))) PPC_WEAK_FUNC(sub_831037A4);
PPC_FUNC_IMPL(__imp__sub_831037A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831037A8"))) PPC_WEAK_FUNC(sub_831037A8);
PPC_FUNC_IMPL(__imp__sub_831037A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831037B0;
	sub_82CA2BE8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r31,-31946
	ctx.r31.s64 = -2093613056;
	// addi r30,r11,-16028
	ctx.r30.s64 = ctx.r11.s64 + -16028;
	// lis r29,-31946
	ctx.r29.s64 = -2093613056;
	// lis r28,-31946
	ctx.r28.s64 = -2093613056;
	// stw r10,-16028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16028, ctx.r10.u32);
	// stw r5,-16056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16056, ctx.r5.u32);
	// stw r3,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r3.u32);
	// stw r4,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r4.u32);
	// stw r6,-16052(r29)
	PPC_STORE_U32(ctx.r29.u32 + -16052, ctx.r6.u32);
	// stw r7,-16048(r28)
	PPC_STORE_U32(ctx.r28.u32 + -16048, ctx.r7.u32);
	// stw r8,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r8.u32);
	// stw r9,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831037E8"))) PPC_WEAK_FUNC(sub_831037E8);
PPC_FUNC_IMPL(__imp__sub_831037E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83103834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83103844"))) PPC_WEAK_FUNC(sub_83103844);
PPC_FUNC_IMPL(__imp__sub_83103844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83103848"))) PPC_WEAK_FUNC(sub_83103848);
PPC_FUNC_IMPL(__imp__sub_83103848) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83103850;
	sub_82CA2BB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r9,r10,12816
	ctx.r9.s64 = ctx.r10.s64 + 12816;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r11,r11,-10116
	ctx.r11.s64 = ctx.r11.s64 + -10116;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -760, ctx.r11.u32);
	// addi r10,r10,-1004
	ctx.r10.s64 = ctx.r10.s64 + -1004;
	// addi r9,r9,10156
	ctx.r9.s64 = ctx.r9.s64 + 10156;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stw r10,-756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -756, ctx.r10.u32);
	// stw r9,-752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -752, ctx.r9.u32);
	// addi r10,r7,-5880
	ctx.r10.s64 = ctx.r7.s64 + -5880;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// addi r11,r8,10152
	ctx.r11.s64 = ctx.r8.s64 + 10152;
	// addi r9,r6,-5888
	ctx.r9.s64 = ctx.r6.s64 + -5888;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stw r11,-748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -748, ctx.r11.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r10,-744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -744, ctx.r10.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stw r9,-740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -740, ctx.r9.u32);
	// addi r11,r5,-5896
	ctx.r11.s64 = ctx.r5.s64 + -5896;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// addi r10,r4,-5904
	ctx.r10.s64 = ctx.r4.s64 + -5904;
	// addi r9,r3,-5912
	ctx.r9.s64 = ctx.r3.s64 + -5912;
	// stw r11,-736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -736, ctx.r11.u32);
	// lis r31,-32240
	ctx.r31.s64 = -2112880640;
	// stw r10,-732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -732, ctx.r10.u32);
	// lis r30,-32241
	ctx.r30.s64 = -2112946176;
	// stw r9,-728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -728, ctx.r9.u32);
	// lis r29,-32240
	ctx.r29.s64 = -2112880640;
	// addi r11,r31,-1032
	ctx.r11.s64 = ctx.r31.s64 + -1032;
	// addi r10,r30,10196
	ctx.r10.s64 = ctx.r30.s64 + 10196;
	// addi r9,r29,-1036
	ctx.r9.s64 = ctx.r29.s64 + -1036;
	// stw r11,-724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -724, ctx.r11.u32);
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// stw r10,-720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -720, ctx.r10.u32);
	// lis r27,-32240
	ctx.r27.s64 = -2112880640;
	// stw r9,-716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -716, ctx.r9.u32);
	// lis r26,-32240
	ctx.r26.s64 = -2112880640;
	// addi r11,r28,-5728
	ctx.r11.s64 = ctx.r28.s64 + -5728;
	// addi r10,r27,-1052
	ctx.r10.s64 = ctx.r27.s64 + -1052;
	// addi r9,r26,-1060
	ctx.r9.s64 = ctx.r26.s64 + -1060;
	// stw r11,-712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -712, ctx.r11.u32);
	// stw r10,-708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -708, ctx.r10.u32);
	// lis r31,-32248
	ctx.r31.s64 = -2113404928;
	// stw r9,-704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -704, ctx.r9.u32);
	// lis r30,-32248
	ctx.r30.s64 = -2113404928;
	// lis r29,-32248
	ctx.r29.s64 = -2113404928;
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// addi r31,r31,-5812
	ctx.r31.s64 = ctx.r31.s64 + -5812;
	// addi r30,r30,-5820
	ctx.r30.s64 = ctx.r30.s64 + -5820;
	// addi r29,r29,-5828
	ctx.r29.s64 = ctx.r29.s64 + -5828;
	// addi r28,r28,-5836
	ctx.r28.s64 = ctx.r28.s64 + -5836;
	// lis r27,-32240
	ctx.r27.s64 = -2112880640;
	// lis r26,-32240
	ctx.r26.s64 = -2112880640;
	// addi r11,r11,-1064
	ctx.r11.s64 = ctx.r11.s64 + -1064;
	// addi r10,r10,-1068
	ctx.r10.s64 = ctx.r10.s64 + -1068;
	// addi r9,r9,-1076
	ctx.r9.s64 = ctx.r9.s64 + -1076;
	// addi r8,r8,-1084
	ctx.r8.s64 = ctx.r8.s64 + -1084;
	// addi r7,r7,-1092
	ctx.r7.s64 = ctx.r7.s64 + -1092;
	// lwz r25,-192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r24,-31952
	ctx.r24.s64 = -2094006272;
	// addi r3,r3,-5628
	ctx.r3.s64 = ctx.r3.s64 + -5628;
	// stw r31,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// addi r23,r24,12176
	ctx.r23.s64 = ctx.r24.s64 + 12176;
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// addi r6,r6,-5744
	ctx.r6.s64 = ctx.r6.s64 + -5744;
	// stw r29,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r29.u32);
	// addi r5,r5,-5596
	ctx.r5.s64 = ctx.r5.s64 + -5596;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// stw r8,-688(r25)
	PPC_STORE_U32(ctx.r25.u32 + -688, ctx.r8.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,-668(r25)
	PPC_STORE_U32(ctx.r25.u32 + -668, ctx.r3.u32);
	// addi r4,r4,-5612
	ctx.r4.s64 = ctx.r4.s64 + -5612;
	// stw r31,-664(r25)
	PPC_STORE_U32(ctx.r25.u32 + -664, ctx.r31.u32);
	// addi r27,r27,-1192
	ctx.r27.s64 = ctx.r27.s64 + -1192;
	// stw r30,-660(r25)
	PPC_STORE_U32(ctx.r25.u32 + -660, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-656(r25)
	PPC_STORE_U32(ctx.r25.u32 + -656, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,-696(r25)
	PPC_STORE_U32(ctx.r25.u32 + -696, ctx.r10.u32);
	// addi r26,r26,-880
	ctx.r26.s64 = ctx.r26.s64 + -880;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r7,-684(r25)
	PPC_STORE_U32(ctx.r25.u32 + -684, ctx.r7.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r8,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,-652(r25)
	PPC_STORE_U32(ctx.r25.u32 + -652, ctx.r28.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r27,-648(r25)
	PPC_STORE_U32(ctx.r25.u32 + -648, ctx.r27.u32);
	// stw r6,-680(r25)
	PPC_STORE_U32(ctx.r25.u32 + -680, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,-676(r25)
	PPC_STORE_U32(ctx.r25.u32 + -676, ctx.r5.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r4,-672(r25)
	PPC_STORE_U32(ctx.r25.u32 + -672, ctx.r4.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r3,36(r23)
	PPC_STORE_U32(ctx.r23.u32 + 36, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,40(r23)
	PPC_STORE_U32(ctx.r23.u32 + 40, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,-700(r25)
	PPC_STORE_U32(ctx.r25.u32 + -700, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,-692(r25)
	PPC_STORE_U32(ctx.r25.u32 + -692, ctx.r9.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r31,-32248
	ctx.r31.s64 = -2113404928;
	// stw r26,-644(r25)
	PPC_STORE_U32(ctx.r25.u32 + -644, ctx.r26.u32);
	// stw r30,44(r23)
	PPC_STORE_U32(ctx.r23.u32 + 44, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// lis r30,-32240
	ctx.r30.s64 = -2112880640;
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
	// lis r29,-32240
	ctx.r29.s64 = -2112880640;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r7,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r7.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r8,76(r23)
	PPC_STORE_U32(ctx.r23.u32 + 76, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,80(r23)
	PPC_STORE_U32(ctx.r23.u32 + 80, ctx.r7.u32);
	// stw r28,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r28.u32);
	// addi r8,r3,-5860
	ctx.r8.s64 = ctx.r3.s64 + -5860;
	// stw r27,56(r23)
	PPC_STORE_U32(ctx.r23.u32 + 56, ctx.r27.u32);
	// addi r7,r31,-5872
	ctx.r7.s64 = ctx.r31.s64 + -5872;
	// stw r6,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r6.u32);
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// stw r5,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r5.u32);
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// stw r4,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r4.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stw r9,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r9.u32);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// stw r25,12176(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12176, ctx.r25.u32);
	// addi r3,r30,-1284
	ctx.r3.s64 = ctx.r30.s64 + -1284;
	// stw r26,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r26.u32);
	// addi r31,r29,-1292
	ctx.r31.s64 = ctx.r29.s64 + -1292;
	// stw r11,64(r23)
	PPC_STORE_U32(ctx.r23.u32 + 64, ctx.r11.u32);
	// stw r10,68(r23)
	PPC_STORE_U32(ctx.r23.u32 + 68, ctx.r10.u32);
	// stw r9,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r9.u32);
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r6,r6,-1232
	ctx.r6.s64 = ctx.r6.s64 + -1232;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// addi r30,r28,-5636
	ctx.r30.s64 = ctx.r28.s64 + -5636;
	// stw r11,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r11.u32);
	// addi r29,r27,-5644
	ctx.r29.s64 = ctx.r27.s64 + -5644;
	// stw r11,108(r23)
	PPC_STORE_U32(ctx.r23.u32 + 108, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,92(r23)
	PPC_STORE_U32(ctx.r23.u32 + 92, ctx.r9.u32);
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// stw r6,-400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -400, ctx.r6.u32);
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r9.u32);
	// lis r26,-32248
	ctx.r26.s64 = -2113404928;
	// stw r10,88(r23)
	PPC_STORE_U32(ctx.r23.u32 + 88, ctx.r10.u32);
	// lis r25,-32240
	ctx.r25.s64 = -2112880640;
	// stw r10,100(r23)
	PPC_STORE_U32(ctx.r23.u32 + 100, ctx.r10.u32);
	// lis r24,-32240
	ctx.r24.s64 = -2112880640;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r22,-32241
	ctx.r22.s64 = -2112946176;
	// stw r11,-520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -520, ctx.r11.u32);
	// lis r21,-32248
	ctx.r21.s64 = -2113404928;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r5,r5,-5848
	ctx.r5.s64 = ctx.r5.s64 + -5848;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
	// addi r4,r4,-1252
	ctx.r4.s64 = ctx.r4.s64 + -1252;
	// stw r10,112(r23)
	PPC_STORE_U32(ctx.r23.u32 + 112, ctx.r10.u32);
	// addi r28,r28,-5652
	ctx.r28.s64 = ctx.r28.s64 + -5652;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r27,r27,-5660
	ctx.r27.s64 = ctx.r27.s64 + -5660;
	// stw r11,-496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -496, ctx.r11.u32);
	// addi r26,r26,-5668
	ctx.r26.s64 = ctx.r26.s64 + -5668;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r9.u32);
	// lis r23,-32241
	ctx.r23.s64 = -2112946176;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r25,r25,-1340
	ctx.r25.s64 = ctx.r25.s64 + -1340;
	// stw r10,-516(r9)
	PPC_STORE_U32(ctx.r9.u32 + -516, ctx.r10.u32);
	// addi r24,r24,-1348
	ctx.r24.s64 = ctx.r24.s64 + -1348;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r23,r23,10204
	ctx.r23.s64 = ctx.r23.s64 + 10204;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r22,r22,10160
	ctx.r22.s64 = ctx.r22.s64 + 10160;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// addi r21,r21,-5936
	ctx.r21.s64 = ctx.r21.s64 + -5936;
	// lwz r6,-192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -484, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -472, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-460(r6)
	PPC_STORE_U32(ctx.r6.u32 + -460, ctx.r11.u32);
	// stw r11,-448(r6)
	PPC_STORE_U32(ctx.r6.u32 + -448, ctx.r11.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r9,-512(r6)
	PPC_STORE_U32(ctx.r6.u32 + -512, ctx.r9.u32);
	// addi r20,r11,-1376
	ctx.r20.s64 = ctx.r11.s64 + -1376;
	// stw r10,-504(r6)
	PPC_STORE_U32(ctx.r6.u32 + -504, ctx.r10.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r9,-500(r6)
	PPC_STORE_U32(ctx.r6.u32 + -500, ctx.r9.u32);
	// stw r10,-492(r6)
	PPC_STORE_U32(ctx.r6.u32 + -492, ctx.r10.u32);
	// addi r19,r11,-5680
	ctx.r19.s64 = ctx.r11.s64 + -5680;
	// stw r9,-488(r6)
	PPC_STORE_U32(ctx.r6.u32 + -488, ctx.r9.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r10,-480(r6)
	PPC_STORE_U32(ctx.r6.u32 + -480, ctx.r10.u32);
	// stw r9,-476(r6)
	PPC_STORE_U32(ctx.r6.u32 + -476, ctx.r9.u32);
	// addi r18,r11,-5688
	ctx.r18.s64 = ctx.r11.s64 + -5688;
	// stw r10,-468(r6)
	PPC_STORE_U32(ctx.r6.u32 + -468, ctx.r10.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r9,-464(r6)
	PPC_STORE_U32(ctx.r6.u32 + -464, ctx.r9.u32);
	// stw r10,-456(r6)
	PPC_STORE_U32(ctx.r6.u32 + -456, ctx.r10.u32);
	// addi r11,r11,-1396
	ctx.r11.s64 = ctx.r11.s64 + -1396;
	// stw r9,-452(r6)
	PPC_STORE_U32(ctx.r6.u32 + -452, ctx.r9.u32);
	// stw r10,-444(r6)
	PPC_STORE_U32(ctx.r6.u32 + -444, ctx.r10.u32);
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,-372(r6)
	PPC_STORE_U32(ctx.r6.u32 + -372, ctx.r30.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r17,-32248
	ctx.r17.s64 = -2113404928;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// lis r16,-32248
	ctx.r16.s64 = -2113404928;
	// stw r9,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// lis r30,-32248
	ctx.r30.s64 = -2113404928;
	// stw r5,-396(r6)
	PPC_STORE_U32(ctx.r6.u32 + -396, ctx.r5.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stw r8,-388(r6)
	PPC_STORE_U32(ctx.r6.u32 + -388, ctx.r8.u32);
	// lis r15,-32241
	ctx.r15.s64 = -2112946176;
	// addi r8,r5,-5700
	ctx.r8.s64 = ctx.r5.s64 + -5700;
	// stw r4,-392(r6)
	PPC_STORE_U32(ctx.r6.u32 + -392, ctx.r4.u32);
	// stw r3,-380(r6)
	PPC_STORE_U32(ctx.r6.u32 + -380, ctx.r3.u32);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// stw r31,-376(r6)
	PPC_STORE_U32(ctx.r6.u32 + -376, ctx.r31.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r31,-32248
	ctx.r31.s64 = -2113404928;
	// stw r7,-384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -384, ctx.r7.u32);
	// addi r7,r4,-1420
	ctx.r7.s64 = ctx.r4.s64 + -1420;
	// stw r10,-436(r6)
	PPC_STORE_U32(ctx.r6.u32 + -436, ctx.r10.u32);
	// addi r4,r31,-6068
	ctx.r4.s64 = ctx.r31.s64 + -6068;
	// stw r10,-424(r6)
	PPC_STORE_U32(ctx.r6.u32 + -424, ctx.r10.u32);
	// stw r10,-412(r6)
	PPC_STORE_U32(ctx.r6.u32 + -412, ctx.r10.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,-440(r6)
	PPC_STORE_U32(ctx.r6.u32 + -440, ctx.r11.u32);
	// lis r14,-32248
	ctx.r14.s64 = -2113404928;
	// stw r11,-428(r6)
	PPC_STORE_U32(ctx.r6.u32 + -428, ctx.r11.u32);
	// stw r11,-416(r6)
	PPC_STORE_U32(ctx.r6.u32 + -416, ctx.r11.u32);
	// stw r29,-368(r6)
	PPC_STORE_U32(ctx.r6.u32 + -368, ctx.r29.u32);
	// lis r29,-32248
	ctx.r29.s64 = -2113404928;
	// stw r9,-432(r6)
	PPC_STORE_U32(ctx.r6.u32 + -432, ctx.r9.u32);
	// stw r9,-420(r6)
	PPC_STORE_U32(ctx.r6.u32 + -420, ctx.r9.u32);
	// stw r9,-408(r6)
	PPC_STORE_U32(ctx.r6.u32 + -408, ctx.r9.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r28,-364(r6)
	PPC_STORE_U32(ctx.r6.u32 + -364, ctx.r28.u32);
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// lwz r5,-192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,-360(r6)
	PPC_STORE_U32(ctx.r6.u32 + -360, ctx.r27.u32);
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// lwz r31,-184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stw r26,-356(r6)
	PPC_STORE_U32(ctx.r6.u32 + -356, ctx.r26.u32);
	// lis r26,-32248
	ctx.r26.s64 = -2113404928;
	// stw r25,-352(r6)
	PPC_STORE_U32(ctx.r6.u32 + -352, ctx.r25.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stw r11,-404(r5)
	PPC_STORE_U32(ctx.r5.u32 + -404, ctx.r11.u32);
	// lis r25,-32248
	ctx.r25.s64 = -2113404928;
	// stw r24,-348(r5)
	PPC_STORE_U32(ctx.r5.u32 + -348, ctx.r24.u32);
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// addi r5,r3,-6056
	ctx.r5.s64 = ctx.r3.s64 + -6056;
	// lwz r3,-188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// stw r23,-344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -344, ctx.r23.u32);
	// stw r22,-336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -336, ctx.r22.u32);
	// addi r22,r16,-6168
	ctx.r22.s64 = ctx.r16.s64 + -6168;
	// stw r21,-340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -340, ctx.r21.u32);
	// stw r20,-324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -324, ctx.r20.u32);
	// stw r19,-332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -332, ctx.r19.u32);
	// addi r11,r10,-5712
	ctx.r11.s64 = ctx.r10.s64 + -5712;
	// lwz r10,-188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// stw r31,-312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -312, ctx.r31.u32);
	// addi r31,r29,-6092
	ctx.r31.s64 = ctx.r29.s64 + -6092;
	// stw r3,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r3.u32);
	// addi r3,r30,-6080
	ctx.r3.s64 = ctx.r30.s64 + -6080;
	// stw r18,-328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -328, ctx.r18.u32);
	// addi r30,r28,-6108
	ctx.r30.s64 = ctx.r28.s64 + -6108;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// addi r10,r9,-5720
	ctx.r10.s64 = ctx.r9.s64 + -5720;
	// addi r29,r27,-6124
	ctx.r29.s64 = ctx.r27.s64 + -6124;
	// lwz r24,-172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addi r9,r6,-864
	ctx.r9.s64 = ctx.r6.s64 + -864;
	// lwz r23,-168(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r28,r26,-6140
	ctx.r28.s64 = ctx.r26.s64 + -6140;
	// lwz r26,-180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// addi r27,r25,-6160
	ctx.r27.s64 = ctx.r25.s64 + -6160;
	// lwz r25,-176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r6,r17,-6044
	ctx.r6.s64 = ctx.r17.s64 + -6044;
	// lwz r19,-184(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lis r18,-31952
	ctx.r18.s64 = -2094006272;
	// addi r21,r15,10096
	ctx.r21.s64 = ctx.r15.s64 + 10096;
	// addi r17,r18,12616
	ctx.r17.s64 = ctx.r18.s64 + 12616;
	// addi r20,r14,-6180
	ctx.r20.s64 = ctx.r14.s64 + -6180;
	// stw r19,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r19.u32);
	// stw r11,-320(r19)
	PPC_STORE_U32(ctx.r19.u32 + -320, ctx.r11.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r8,-304(r19)
	PPC_STORE_U32(ctx.r19.u32 + -304, ctx.r8.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r7,-300(r19)
	PPC_STORE_U32(ctx.r19.u32 + -300, ctx.r7.u32);
	// addi r11,r11,-6204
	ctx.r11.s64 = ctx.r11.s64 + -6204;
	// stw r10,-316(r19)
	PPC_STORE_U32(ctx.r19.u32 + -316, ctx.r10.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,-308(r19)
	PPC_STORE_U32(ctx.r19.u32 + -308, ctx.r9.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r11,-232(r19)
	PPC_STORE_U32(ctx.r19.u32 + -232, ctx.r11.u32);
	// addi r8,r8,-6240
	ctx.r8.s64 = ctx.r8.s64 + -6240;
	// lwz r11,-188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r7,r7,10104
	ctx.r7.s64 = ctx.r7.s64 + 10104;
	// stw r6,-296(r19)
	PPC_STORE_U32(ctx.r19.u32 + -296, ctx.r6.u32);
	// addi r10,r10,-6216
	ctx.r10.s64 = ctx.r10.s64 + -6216;
	// stw r5,-292(r19)
	PPC_STORE_U32(ctx.r19.u32 + -292, ctx.r5.u32);
	// addi r9,r9,-6228
	ctx.r9.s64 = ctx.r9.s64 + -6228;
	// stw r4,-288(r19)
	PPC_STORE_U32(ctx.r19.u32 + -288, ctx.r4.u32);
	// stw r3,-284(r19)
	PPC_STORE_U32(ctx.r19.u32 + -284, ctx.r3.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r8,-228(r19)
	PPC_STORE_U32(ctx.r19.u32 + -228, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,-208(r19)
	PPC_STORE_U32(ctx.r19.u32 + -208, ctx.r7.u32);
	// addi r6,r6,10212
	ctx.r6.s64 = ctx.r6.s64 + 10212;
	// stw r31,-280(r19)
	PPC_STORE_U32(ctx.r19.u32 + -280, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,-276(r19)
	PPC_STORE_U32(ctx.r19.u32 + -276, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-272(r19)
	PPC_STORE_U32(ctx.r19.u32 + -272, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r28,-268(r19)
	PPC_STORE_U32(ctx.r19.u32 + -268, ctx.r28.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r27,-264(r19)
	PPC_STORE_U32(ctx.r19.u32 + -264, ctx.r27.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r26,-260(r19)
	PPC_STORE_U32(ctx.r19.u32 + -260, ctx.r26.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,-220(r19)
	PPC_STORE_U32(ctx.r19.u32 + -220, ctx.r10.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r9,-212(r19)
	PPC_STORE_U32(ctx.r19.u32 + -212, ctx.r9.u32);
	// addi r19,r11,-6192
	ctx.r19.s64 = ctx.r11.s64 + -6192;
	// lwz r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r5,12616(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12616, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r3.u32);
	// stw r31,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r31.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lwz r7,-168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// stw r6,-204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -204, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r25,-256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -256, ctx.r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,-252(r7)
	PPC_STORE_U32(ctx.r7.u32 + -252, ctx.r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r30.u32);
	// stw r6,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lwz r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r23,-248(r6)
	PPC_STORE_U32(ctx.r6.u32 + -248, ctx.r23.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r22,-244(r5)
	PPC_STORE_U32(ctx.r5.u32 + -244, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,-240(r4)
	PPC_STORE_U32(ctx.r4.u32 + -240, ctx.r21.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r10,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r10.u32);
	// stw r10,80(r17)
	PPC_STORE_U32(ctx.r17.u32 + 80, ctx.r10.u32);
	// stw r10,96(r17)
	PPC_STORE_U32(ctx.r17.u32 + 96, ctx.r10.u32);
	// stw r10,108(r17)
	PPC_STORE_U32(ctx.r17.u32 + 108, ctx.r10.u32);
	// stw r10,120(r17)
	PPC_STORE_U32(ctx.r17.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,44(r17)
	PPC_STORE_U32(ctx.r17.u32 + 44, ctx.r9.u32);
	// stw r10,132(r17)
	PPC_STORE_U32(ctx.r17.u32 + 132, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,84(r17)
	PPC_STORE_U32(ctx.r17.u32 + 84, ctx.r9.u32);
	// stw r10,144(r17)
	PPC_STORE_U32(ctx.r17.u32 + 144, ctx.r10.u32);
	// stw r10,156(r17)
	PPC_STORE_U32(ctx.r17.u32 + 156, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,100(r17)
	PPC_STORE_U32(ctx.r17.u32 + 100, ctx.r9.u32);
	// stw r10,184(r17)
	PPC_STORE_U32(ctx.r17.u32 + 184, ctx.r10.u32);
	// stw r10,188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 188, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,112(r17)
	PPC_STORE_U32(ctx.r17.u32 + 112, ctx.r9.u32);
	// stw r9,124(r17)
	PPC_STORE_U32(ctx.r17.u32 + 124, ctx.r9.u32);
	// stw r9,136(r17)
	PPC_STORE_U32(ctx.r17.u32 + 136, ctx.r9.u32);
	// stw r9,148(r17)
	PPC_STORE_U32(ctx.r17.u32 + 148, ctx.r9.u32);
	// stw r9,160(r17)
	PPC_STORE_U32(ctx.r17.u32 + 160, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,196(r17)
	PPC_STORE_U32(ctx.r17.u32 + 196, ctx.r10.u32);
	// lwz r31,-168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r11,36(r17)
	PPC_STORE_U32(ctx.r17.u32 + 36, ctx.r11.u32);
	// stw r11,88(r17)
	PPC_STORE_U32(ctx.r17.u32 + 88, ctx.r11.u32);
	// stw r11,92(r17)
	PPC_STORE_U32(ctx.r17.u32 + 92, ctx.r11.u32);
	// stw r31,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// stw r11,104(r17)
	PPC_STORE_U32(ctx.r17.u32 + 104, ctx.r11.u32);
	// stw r11,116(r17)
	PPC_STORE_U32(ctx.r17.u32 + 116, ctx.r11.u32);
	// stw r11,128(r17)
	PPC_STORE_U32(ctx.r17.u32 + 128, ctx.r11.u32);
	// stw r11,140(r17)
	PPC_STORE_U32(ctx.r17.u32 + 140, ctx.r11.u32);
	// stw r11,152(r17)
	PPC_STORE_U32(ctx.r17.u32 + 152, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,168(r17)
	PPC_STORE_U32(ctx.r17.u32 + 168, ctx.r9.u32);
	// stw r9,172(r17)
	PPC_STORE_U32(ctx.r17.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r8.u32);
	// stw r20,-224(r3)
	PPC_STORE_U32(ctx.r3.u32 + -224, ctx.r20.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r19,-216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -216, ctx.r19.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,176(r17)
	PPC_STORE_U32(ctx.r17.u32 + 176, ctx.r11.u32);
	// stw r11,180(r17)
	PPC_STORE_U32(ctx.r17.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,12816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12816, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r29.u32);
	// stw r28,24(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24, ctx.r28.u32);
	// stw r27,28(r17)
	PPC_STORE_U32(ctx.r17.u32 + 28, ctx.r27.u32);
	// stw r26,32(r17)
	PPC_STORE_U32(ctx.r17.u32 + 32, ctx.r26.u32);
	// stw r7,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r7.u32);
	// stw r6,56(r17)
	PPC_STORE_U32(ctx.r17.u32 + 56, ctx.r6.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,64(r17)
	PPC_STORE_U32(ctx.r17.u32 + 64, ctx.r5.u32);
	// stw r4,60(r17)
	PPC_STORE_U32(ctx.r17.u32 + 60, ctx.r4.u32);
	// stw r3,76(r17)
	PPC_STORE_U32(ctx.r17.u32 + 76, ctx.r3.u32);
	// stw r31,68(r17)
	PPC_STORE_U32(ctx.r17.u32 + 68, ctx.r31.u32);
	// stw r30,72(r17)
	PPC_STORE_U32(ctx.r17.u32 + 72, ctx.r30.u32);
	// stw r11,192(r17)
	PPC_STORE_U32(ctx.r17.u32 + 192, ctx.r11.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r9,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r9.u32);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r10,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r10.u32);
	// stw r9,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r9.u32);
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// stw r10,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r10.u32);
	// stw r9,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r9.u32);
	// stw r11,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// stw r10,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// stw r9,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r9.u32);
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r10,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r10.u32);
	// stw r9,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r9.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// stw r9,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r9.u32);
	// stw r11,116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 116, ctx.r11.u32);
	// stw r10,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r10.u32);
	// stw r9,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r9.u32);
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// stw r10,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r10.u32);
	// stw r9,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r9.u32);
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// stw r9,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r9.u32);
	// stw r11,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r11.u32);
	// stw r10,156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 156, ctx.r10.u32);
	// stw r9,160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 160, ctx.r9.u32);
	// stw r11,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// stw r10,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r10.u32);
	// stw r9,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r9.u32);
	// stw r11,180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 180, ctx.r11.u32);
	// stw r10,188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 188, ctx.r10.u32);
	// stw r9,172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 172, ctx.r9.u32);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104064"))) PPC_WEAK_FUNC(sub_83104064);
PPC_FUNC_IMPL(__imp__sub_83104064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83104068"))) PPC_WEAK_FUNC(sub_83104068);
PPC_FUNC_IMPL(__imp__sub_83104068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83104070;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-6332
	ctx.r30.s64 = ctx.r11.s64 + -6332;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831040a0
	if (ctx.cr0.eq) goto loc_831040A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-5572
	ctx.r5.s64 = ctx.r11.s64 + -5572;
	// bl 0x831037e8
	ctx.lr = 0x831040A0;
	sub_831037E8(ctx, base);
loc_831040A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831040B0;
	sub_831037E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831040d0
	if (ctx.cr0.eq) goto loc_831040D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-5580
	ctx.r5.s64 = ctx.r11.s64 + -5580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831040D0;
	sub_831037E8(ctx, base);
loc_831040D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831040D8"))) PPC_WEAK_FUNC(sub_831040D8);
PPC_FUNC_IMPL(__imp__sub_831040D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831040E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-6332
	ctx.r30.s64 = ctx.r11.s64 + -6332;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83104110
	if (ctx.cr0.eq) goto loc_83104110;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-5564
	ctx.r5.s64 = ctx.r11.s64 + -5564;
	// bl 0x831037e8
	ctx.lr = 0x83104110;
	sub_831037E8(ctx, base);
loc_83104110:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104120;
	sub_831037E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104140
	if (ctx.cr0.eq) goto loc_83104140;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-5580
	ctx.r5.s64 = ctx.r11.s64 + -5580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104140;
	sub_831037E8(ctx, base);
loc_83104140:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83104148"))) PPC_WEAK_FUNC(sub_83104148);
PPC_FUNC_IMPL(__imp__sub_83104148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x83104150;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// addi r4,r10,25232
	ctx.r4.s64 = ctx.r10.s64 + 25232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi r21,r9,31
	ctx.r21.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x831037e8
	ctx.lr = 0x8310418C;
	sub_831037E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r20,r11,-924
	ctx.r20.s64 = ctx.r11.s64 + -924;
	// beq cr6,0x831041a8
	if (ctx.cr6.eq) goto loc_831041A8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831041A8;
	sub_831037E8(ctx, base);
loc_831041A8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x831041bc
	if (!ctx.cr6.eq) goto loc_831041BC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x831041c0
	if (!ctx.cr6.eq) goto loc_831041C0;
loc_831041BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831041C0:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x831041d8
	if (!ctx.cr6.eq) goto loc_831041D8;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x831041dc
	if (!ctx.cr6.eq) goto loc_831041DC;
loc_831041D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831041DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r29,r10,-6332
	ctx.r29.s64 = ctx.r10.s64 + -6332;
	// beq 0x83104204
	if (ctx.cr0.eq) goto loc_83104204;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31244
	ctx.r4.s64 = ctx.r11.s64 + 31244;
	// bl 0x831037e8
	ctx.lr = 0x83104200;
	sub_831037E8(ctx, base);
	// b 0x8310422c
	goto loc_8310422C;
loc_83104204:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83104218
	if (ctx.cr6.eq) goto loc_83104218;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-960
	ctx.r5.s64 = ctx.r11.s64 + -960;
	// b 0x83104220
	goto loc_83104220;
loc_83104218:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11932
	ctx.r5.s64 = ctx.r11.s64 + 11932;
loc_83104220:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310422C;
	sub_831037E8(ctx, base);
loc_8310422C:
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x83104244
	if (ctx.cr0.eq) goto loc_83104244;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29656
	ctx.r4.s64 = ctx.r11.s64 + 29656;
	// bl 0x831037e8
	ctx.lr = 0x83104244;
	sub_831037E8(ctx, base);
loc_83104244:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83104294
	if (!ctx.cr6.eq) goto loc_83104294;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83104280
	if (ctx.cr6.eq) goto loc_83104280;
	// cmpwi cr6,r27,62
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 62, ctx.xer);
	// beq cr6,0x83104274
	if (ctx.cr6.eq) goto loc_83104274;
	// cmpwi cr6,r27,63
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 63, ctx.xer);
	// bne cr6,0x83104280
	if (!ctx.cr6.eq) goto loc_83104280;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,31744
	ctx.r5.s64 = ctx.r11.s64 + 31744;
loc_8310426C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8310428c
	goto loc_8310428C;
loc_83104274:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,31740
	ctx.r5.s64 = ctx.r11.s64 + 31740;
	// b 0x8310426c
	goto loc_8310426C;
loc_83104280:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
loc_8310428C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104294;
	sub_831037E8(ctx, base);
loc_83104294:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x831042b4
	if (!ctx.cr6.eq) goto loc_831042B4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x831042b4
	if (ctx.cr6.eq) goto loc_831042B4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-936
	ctx.r4.s64 = ctx.r11.s64 + -936;
	// bl 0x831037e8
	ctx.lr = 0x831042B4;
	sub_831037E8(ctx, base);
loc_831042B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831042cc
	if (ctx.cr6.eq) goto loc_831042CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
	// bl 0x831037e8
	ctx.lr = 0x831042CC;
	sub_831037E8(ctx, base);
loc_831042CC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x83104348
	if (!ctx.cr6.eq) goto loc_83104348;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x831044a0
	if (ctx.cr6.eq) goto loc_831044A0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x831037e8
	ctx.lr = 0x831042EC;
	sub_831037E8(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104304
	if (ctx.cr0.eq) goto loc_83104304;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9824
	ctx.r4.s64 = ctx.r11.s64 + -9824;
	// bl 0x831037e8
	ctx.lr = 0x83104304;
	sub_831037E8(ctx, base);
loc_83104304:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310431c
	if (ctx.cr0.eq) goto loc_8310431C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9820
	ctx.r4.s64 = ctx.r11.s64 + -9820;
	// bl 0x831037e8
	ctx.lr = 0x8310431C;
	sub_831037E8(ctx, base);
loc_8310431C:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104334
	if (ctx.cr0.eq) goto loc_83104334;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9816
	ctx.r4.s64 = ctx.r11.s64 + -9816;
	// bl 0x831037e8
	ctx.lr = 0x83104334;
	sub_831037E8(ctx, base);
loc_83104334:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831044a0
	if (ctx.cr0.eq) goto loc_831044A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11952
	ctx.r4.s64 = ctx.r11.s64 + 11952;
	// b 0x83104498
	goto loc_83104498;
loc_83104348:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x831037e8
	ctx.lr = 0x83104358;
	sub_831037E8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// clrlwi. r8,r24,31
	ctx.r8.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r28,r11,-10856
	ctx.r28.s64 = ctx.r11.s64 + -10856;
	// addi r30,r10,2924
	ctx.r30.s64 = ctx.r10.s64 + 2924;
	// addi r29,r9,-32012
	ctx.r29.s64 = ctx.r9.s64 + -32012;
	// beq 0x83104398
	if (ctx.cr0.eq) goto loc_83104398;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8310438c
	if (ctx.cr0.eq) goto loc_8310438C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x831043b8
	goto loc_831043B8;
loc_8310438C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-9824
	ctx.r4.s64 = ctx.r11.s64 + -9824;
	// b 0x831043b8
	goto loc_831043B8;
loc_83104398:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831043b0
	if (ctx.cr6.eq) goto loc_831043B0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x831043b4
	if (!ctx.cr6.eq) goto loc_831043B4;
loc_831043B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_831043B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831043B8:
	// bl 0x831037e8
	ctx.lr = 0x831043BC;
	sub_831037E8(ctx, base);
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831043e4
	if (ctx.cr0.eq) goto loc_831043E4;
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x831043d8
	if (ctx.cr0.eq) goto loc_831043D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x83104404
	goto loc_83104404;
loc_831043D8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-9820
	ctx.r4.s64 = ctx.r11.s64 + -9820;
	// b 0x83104404
	goto loc_83104404;
loc_831043E4:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x831043fc
	if (ctx.cr6.eq) goto loc_831043FC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x83104400
	if (!ctx.cr6.eq) goto loc_83104400;
loc_831043FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83104400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83104404:
	// bl 0x831037e8
	ctx.lr = 0x83104408;
	sub_831037E8(ctx, base);
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104430
	if (ctx.cr0.eq) goto loc_83104430;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x83104424
	if (ctx.cr0.eq) goto loc_83104424;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x83104450
	goto loc_83104450;
loc_83104424:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-9816
	ctx.r4.s64 = ctx.r11.s64 + -9816;
	// b 0x83104450
	goto loc_83104450;
loc_83104430:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83104448
	if (ctx.cr6.eq) goto loc_83104448;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x8310444c
	if (!ctx.cr6.eq) goto loc_8310444C;
loc_83104448:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8310444C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83104450:
	// bl 0x831037e8
	ctx.lr = 0x83104454;
	sub_831037E8(ctx, base);
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310447c
	if (ctx.cr0.eq) goto loc_8310447C;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x83104470
	if (ctx.cr0.eq) goto loc_83104470;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8310449c
	goto loc_8310449C;
loc_83104470:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11952
	ctx.r4.s64 = ctx.r11.s64 + 11952;
	// b 0x8310449c
	goto loc_8310449C;
loc_8310447C:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x83104494
	if (ctx.cr6.eq) goto loc_83104494;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x83104498
	if (!ctx.cr6.eq) goto loc_83104498;
loc_83104494:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83104498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8310449C:
	// bl 0x831037e8
	ctx.lr = 0x831044A0;
	sub_831037E8(ctx, base);
loc_831044A0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x831044b0
	if (ctx.cr6.eq) goto loc_831044B0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x831044b8
	goto loc_831044B8;
loc_831044B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_831044B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831044C0;
	sub_831037E8(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x831044d8
	if (ctx.cr6.eq) goto loc_831044D8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5548
	ctx.r4.s64 = ctx.r11.s64 + -5548;
	// bl 0x831037e8
	ctx.lr = 0x831044D8;
	sub_831037E8(ctx, base);
loc_831044D8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_831044E0"))) PPC_WEAK_FUNC(sub_831044E0);
PPC_FUNC_IMPL(__imp__sub_831044E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x831044E8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8310450c
	if (!ctx.cr6.eq) goto loc_8310450C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8310451c
	if (!ctx.cr6.eq) goto loc_8310451C;
loc_8310450C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x83104524
	if (!ctx.cr6.eq) goto loc_83104524;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104524
	if (ctx.cr0.eq) goto loc_83104524;
loc_8310451C:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x83104528
	goto loc_83104528;
loc_83104524:
	// li r21,0
	ctx.r21.s64 = 0;
loc_83104528:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r31
	ctx.r8.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r25,r10,r6
	ctx.r25.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83104570
	if (ctx.cr6.eq) goto loc_83104570;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,31244
	ctx.r4.s64 = ctx.r11.s64 + 31244;
	// bl 0x831037e8
	ctx.lr = 0x83104570;
	sub_831037E8(ctx, base);
loc_83104570:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r22,r11,-924
	ctx.r22.s64 = ctx.r11.s64 + -924;
	// beq cr6,0x8310458c
	if (ctx.cr6.eq) goto loc_8310458C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310458C;
	sub_831037E8(ctx, base);
loc_8310458C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x831045a0
	if (!ctx.cr6.eq) goto loc_831045A0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x831045a4
	if (ctx.cr6.eq) goto loc_831045A4;
loc_831045A0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_831045A4:
	// subfic r9,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r31.s64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r24,r11,12872
	ctx.r24.s64 = ctx.r11.s64 + 12872;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x831037e8
	ctx.lr = 0x831045CC;
	sub_831037E8(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x831045e8
	if (ctx.cr0.eq) goto loc_831045E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,29656
	ctx.r4.s64 = ctx.r11.s64 + 29656;
	// bl 0x831037e8
	ctx.lr = 0x831045E8;
	sub_831037E8(ctx, base);
loc_831045E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831037e8
	ctx.lr = 0x831045FC;
	sub_831037E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r11,-936
	ctx.r31.s64 = ctx.r11.s64 + -936;
	// beq cr6,0x83104618
	if (ctx.cr6.eq) goto loc_83104618;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104618;
	sub_831037E8(ctx, base);
loc_83104618:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x83104640
	if (ctx.cr6.eq) goto loc_83104640;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x83104630
	if (ctx.cr6.eq) goto loc_83104630;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x83104638
	goto loc_83104638;
loc_83104630:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-940
	ctx.r4.s64 = ctx.r11.s64 + -940;
loc_83104638:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104640;
	sub_831037E8(ctx, base);
loc_83104640:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83104658
	if (ctx.cr6.eq) goto loc_83104658;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
	// bl 0x831037e8
	ctx.lr = 0x83104658;
	sub_831037E8(ctx, base);
loc_83104658:
	// lwz r25,340(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x8310466c
	if (ctx.cr6.lt) goto loc_8310466C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310466C:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83104680
	if (!ctx.cr6.eq) goto loc_83104680;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104770
	if (ctx.cr0.eq) goto loc_83104770;
loc_83104680:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x831037e8
	ctx.lr = 0x83104690;
	sub_831037E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// srawi r9,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 2;
	// addi r30,r11,-932
	ctx.r30.s64 = ctx.r11.s64 + -932;
	// srawi r10,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 4;
	// srawi r11,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 6;
	// clrlwi r31,r29,30
	ctx.r31.u64 = ctx.r29.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r26,r11,30
	ctx.r26.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r29,r9,30
	ctx.r29.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	ctx.r27.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x831046D4;
	sub_831037E8(ctx, base);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x83104770
	if (!ctx.cr6.gt) goto loc_83104770;
	// clrlwi. r23,r23,24
	ctx.r23.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x831046fc
	if (!ctx.cr0.eq) goto loc_831046FC;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x831046fc
	if (!ctx.cr6.eq) goto loc_831046FC;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x831046fc
	if (!ctx.cr6.eq) goto loc_831046FC;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x83104770
	if (ctx.cr6.eq) goto loc_83104770;
loc_831046FC:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83104710;
	sub_831037E8(ctx, base);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x83104770
	if (!ctx.cr6.gt) goto loc_83104770;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x83104730
	if (!ctx.cr6.eq) goto loc_83104730;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x83104730
	if (!ctx.cr6.eq) goto loc_83104730;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x83104770
	if (ctx.cr6.eq) goto loc_83104770;
loc_83104730:
	// lbzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83104744;
	sub_831037E8(ctx, base);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// ble cr6,0x83104770
	if (!ctx.cr6.gt) goto loc_83104770;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8310475c
	if (!ctx.cr6.eq) goto loc_8310475C;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x83104770
	if (ctx.cr6.eq) goto loc_83104770;
loc_8310475C:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83104770;
	sub_831037E8(ctx, base);
loc_83104770:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x83104780
	if (ctx.cr6.eq) goto loc_83104780;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x83104788
	goto loc_83104788;
loc_83104780:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_83104788:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104790;
	sub_831037E8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_83104798"))) PPC_WEAK_FUNC(sub_83104798);
PPC_FUNC_IMPL(__imp__sub_83104798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831047A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	ctx.r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x831047cc
	if (ctx.cr6.eq) goto loc_831047CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,31244
	ctx.r4.s64 = ctx.r11.s64 + 31244;
	// bl 0x831037e8
	ctx.lr = 0x831047CC;
	sub_831037E8(ctx, base);
loc_831047CC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r11,-924
	ctx.r29.s64 = ctx.r11.s64 + -924;
	// beq cr6,0x831047e8
	if (ctx.cr6.eq) goto loc_831047E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831047E8;
	sub_831037E8(ctx, base);
loc_831047E8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-920
	ctx.r4.s64 = ctx.r11.s64 + -920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831047FC;
	sub_831037E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
	// bl 0x831037e8
	ctx.lr = 0x8310480C;
	sub_831037E8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x831048b8
	if (ctx.cr6.eq) goto loc_831048B8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x831037e8
	ctx.lr = 0x83104824;
	sub_831037E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// addi r11,r11,-932
	ctx.r11.s64 = ctx.r11.s64 + -932;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r9,12872
	ctx.r28.s64 = ctx.r9.s64 + 12872;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x8310484C;
	sub_831037E8(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-912
	ctx.r10.s64 = ctx.r10.s64 + -912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83104870;
	sub_831037E8(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-904
	ctx.r10.s64 = ctx.r10.s64 + -904;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83104894;
	sub_831037E8(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 6;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-896
	ctx.r10.s64 = ctx.r10.s64 + -896;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x831048B8;
	sub_831037E8(ctx, base);
loc_831048B8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x831048c8
	if (ctx.cr6.eq) goto loc_831048C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x831048d0
	goto loc_831048D0;
loc_831048C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_831048D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831048D8;
	sub_831037E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831048E0"))) PPC_WEAK_FUNC(sub_831048E0);
PPC_FUNC_IMPL(__imp__sub_831048E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831048E8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83104920
	if (!ctx.cr0.eq) goto loc_83104920;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83104924
	if (ctx.cr6.eq) goto loc_83104924;
loc_83104920:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83104924:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83104bb0
	if (!ctx.cr0.eq) goto loc_83104BB0;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,12056
	ctx.r10.s64 = ctx.r10.s64 + 12056;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83104068
	ctx.lr = 0x83104948;
	sub_83104068(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,8,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x83104148
	ctx.lr = 0x83104970;
	sub_83104148(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,7908
	ctx.r28.s64 = ctx.r11.s64 + 7908;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104984;
	sub_831037E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831049a4
	if (!ctx.cr0.eq) goto loc_831049A4;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831049a4
	if (!ctx.cr0.eq) goto loc_831049A4;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831049a4
	if (ctx.cr0.eq) goto loc_831049A4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_831049A4:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r30,r10,12176
	ctx.r30.s64 = ctx.r10.s64 + 12176;
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x83104a30
	if (ctx.cr6.lt) goto loc_83104A30;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bne 0x831049fc
	if (!ctx.cr0.eq) goto loc_831049FC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x831049fc
	if (ctx.cr6.eq) goto loc_831049FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x83104798
	ctx.lr = 0x831049F8;
	sub_83104798(ctx, base);
	// b 0x83104a30
	goto loc_83104A30;
loc_831049FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// bl 0x831044e0
	ctx.lr = 0x83104A30;
	sub_831044E0(ctx, base);
loc_83104A30:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x83104ae8
	if (ctx.cr6.lt) goto loc_83104AE8;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne 0x83104a5c
	if (!ctx.cr0.eq) goto loc_83104A5C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x83104a5c
	if (!ctx.cr6.eq) goto loc_83104A5C;
	// li r25,2
	ctx.r25.s64 = 2;
loc_83104A5C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104A74;
	sub_831037E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83104aa4
	if (!ctx.cr0.eq) goto loc_83104AA4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x83104aa4
	if (ctx.cr6.eq) goto loc_83104AA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x83104798
	ctx.lr = 0x83104AA0;
	sub_83104798(ctx, base);
	// b 0x83104ae8
	goto loc_83104AE8;
loc_83104AA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x83104ab8
	if (ctx.cr6.eq) goto loc_83104AB8;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_83104AB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x831044e0
	ctx.lr = 0x83104AE8;
	sub_831044E0(ctx, base);
loc_83104AE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x83104bb0
	if (ctx.cr6.lt) goto loc_83104BB0;
	// rlwinm. r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// bne 0x83104b14
	if (!ctx.cr0.eq) goto loc_83104B14;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x83104b14
	if (!ctx.cr6.eq) goto loc_83104B14;
	// li r25,3
	ctx.r25.s64 = 3;
loc_83104B14:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x831037e8
	ctx.lr = 0x83104B2C;
	sub_831037E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83104b5c
	if (!ctx.cr0.eq) goto loc_83104B5C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x83104b5c
	if (ctx.cr6.eq) goto loc_83104B5C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x83104798
	ctx.lr = 0x83104B58;
	sub_83104798(ctx, base);
	// b 0x83104bb0
	goto loc_83104BB0;
loc_83104B5C:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x83104b78
	if (ctx.cr6.eq) goto loc_83104B78;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x83104b78
	if (!ctx.cr6.eq) goto loc_83104B78;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x83104b80
	goto loc_83104B80;
loc_83104B78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_83104B80:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x831044e0
	ctx.lr = 0x83104BB0;
	sub_831044E0(ctx, base);
loc_83104BB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_83104BB8"))) PPC_WEAK_FUNC(sub_83104BB8);
PPC_FUNC_IMPL(__imp__sub_83104BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83104BC0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83104bf0
	if (!ctx.cr0.eq) goto loc_83104BF0;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83104bf0
	if (!ctx.cr0.eq) goto loc_83104BF0;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104bf0
	if (ctx.cr0.eq) goto loc_83104BF0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83104BF0:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,13016
	ctx.r29.s64 = ctx.r11.s64 + 13016;
	// rlwinm r11,r10,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// addi r10,r29,-600
	ctx.r10.s64 = ctx.r29.s64 + -600;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83104068
	ctx.lr = 0x83104C10;
	sub_83104068(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x83104c24
	if (!ctx.cr0.eq) goto loc_83104C24;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_83104C24:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x83104c34
	if (!ctx.cr6.eq) goto loc_83104C34;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_83104C34:
	// rlwinm r10,r11,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83104148
	ctx.lr = 0x83104C4C;
	sub_83104148(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,7908
	ctx.r4.s64 = ctx.r11.s64 + 7908;
	// bl 0x831037e8
	ctx.lr = 0x83104C5C;
	sub_831037E8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// rlwinm r8,r9,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// addi r11,r11,12616
	ctx.r11.s64 = ctx.r11.s64 + 12616;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x83104d48
	if (ctx.cr6.lt) goto loc_83104D48;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r10,r7,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1;
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// beq 0x83104ca0
	if (ctx.cr0.eq) goto loc_83104CA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83104cc4
	goto loc_83104CC4;
loc_83104CA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83104cb4
	if (ctx.cr0.eq) goto loc_83104CB4;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x83104cc4
	goto loc_83104CC4;
loc_83104CB4:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
loc_83104CC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r6,r11,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83104cf4
	if (!ctx.cr0.eq) goto loc_83104CF4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x83104cf4
	if (ctx.cr6.eq) goto loc_83104CF4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x83104798
	ctx.lr = 0x83104CF0;
	sub_83104798(ctx, base);
	// b 0x83104d48
	goto loc_83104D48;
loc_83104CF4:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x83104d10
	if (ctx.cr6.eq) goto loc_83104D10;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x83104d10
	if (!ctx.cr6.eq) goto loc_83104D10;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x83104d18
	goto loc_83104D18;
loc_83104D10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_83104D18:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831044e0
	ctx.lr = 0x83104D48;
	sub_831044E0(ctx, base);
loc_83104D48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83104D50"))) PPC_WEAK_FUNC(sub_83104D50);
PPC_FUNC_IMPL(__imp__sub_83104D50) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83104d9c
	if (!ctx.cr0.eq) goto loc_83104D9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104d88
	if (ctx.cr0.eq) goto loc_83104D88;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// b 0x83104d90
	goto loc_83104D90;
loc_83104D88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
loc_83104D90:
	// bl 0x830f1390
	ctx.lr = 0x83104D94;
	sub_830F1390(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_83104D9C:
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

__attribute__((alias("__imp__sub_83104DB0"))) PPC_WEAK_FUNC(sub_83104DB0);
PPC_FUNC_IMPL(__imp__sub_83104DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83104DB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x83103848
	ctx.lr = 0x83104DD0;
	sub_83103848(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_83104DD8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x83104e90
	if (ctx.cr6.eq) goto loc_83104E90;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831033e8
	ctx.lr = 0x83104DFC;
	sub_831033E8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x83104e84
	if (ctx.cr6.gt) goto loc_83104E84;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-5536
	ctx.r12.s64 = ctx.r12.s64 + -5536;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31984
	ctx.r12.s64 = -2096103424;
	// addi r12,r12,20016
	ctx.r12.s64 = ctx.r12.s64 + 20016;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83104E30;
	case 1:
		goto loc_83104E30;
	case 2:
		goto loc_83104E50;
	case 3:
		goto loc_83104E50;
	case 4:
		goto loc_83104E50;
	case 5:
		goto loc_83104E50;
	case 6:
		goto loc_83104E58;
	case 7:
		goto loc_83104E58;
	case 8:
		goto loc_83104E58;
	case 9:
		goto loc_83104E84;
	case 10:
		goto loc_83104E58;
	default:
		__builtin_unreachable();
	}
loc_83104E30:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831033e8
	ctx.lr = 0x83104E40;
	sub_831033E8(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x83104e84
	if (!ctx.cr6.eq) goto loc_83104E84;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x83104e84
	goto loc_83104E84;
loc_83104E50:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x83104e84
	goto loc_83104E84;
loc_83104E58:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831033e8
	ctx.lr = 0x83104E68;
	sub_831033E8(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_83104E84:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x83104dd8
	if (!ctx.cr0.eq) goto loc_83104DD8;
loc_83104E90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83104E98"))) PPC_WEAK_FUNC(sub_83104E98);
PPC_FUNC_IMPL(__imp__sub_83104E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x83104EA0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83104ef4
	if (!ctx.cr6.eq) goto loc_83104EF4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83104edc
	if (ctx.cr0.eq) goto loc_83104EDC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r11,-4768
	ctx.r5.s64 = ctx.r11.s64 + -4768;
	// b 0x83104ee4
	goto loc_83104EE4;
loc_83104EDC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r11,-4772
	ctx.r5.s64 = ctx.r11.s64 + -4772;
loc_83104EE4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28108
	ctx.r4.s64 = ctx.r11.s64 + -28108;
	// bl 0x831037e8
	ctx.lr = 0x83104EF4;
	sub_831037E8(ctx, base);
loc_83104EF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831053e8
	if (ctx.cr0.eq) goto loc_831053E8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x831053d4
	if (!ctx.cr6.gt) goto loc_831053D4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x83104f30
	if (!ctx.cr6.gt) goto loc_83104F30;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x831053d4
	if (!ctx.cr6.gt) goto loc_831053D4;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x83104f30
	if (!ctx.cr6.gt) goto loc_83104F30;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// ble cr6,0x831053d4
	if (!ctx.cr6.gt) goto loc_831053D4;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x831053d4
	if (ctx.cr6.gt) goto loc_831053D4;
loc_83104F30:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-568
	ctx.r4.s64 = ctx.r10.s64 + -568;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x83104ff8
	if (ctx.cr6.gt) goto loc_83104FF8;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-5520
	ctx.r12.s64 = ctx.r12.s64 + -5520;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31984
	ctx.r12.s64 = -2096103424;
	// addi r12,r12,20332
	ctx.r12.s64 = ctx.r12.s64 + 20332;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83104F6C;
	case 1:
		goto loc_83104F78;
	case 2:
		goto loc_83104F84;
	case 3:
		goto loc_83104F90;
	case 4:
		goto loc_83104FF8;
	case 5:
		goto loc_83104FF8;
	case 6:
		goto loc_83104FF8;
	case 7:
		goto loc_83104FF8;
	case 8:
		goto loc_83104FF8;
	case 9:
		goto loc_83104FF8;
	case 10:
		goto loc_83104FF8;
	case 11:
		goto loc_83104FF8;
	case 12:
		goto loc_83104FF8;
	case 13:
		goto loc_83104FF8;
	case 14:
		goto loc_83104FF8;
	case 15:
		goto loc_83104F9C;
	case 16:
		goto loc_83104FA8;
	case 17:
		goto loc_83104FB4;
	case 18:
		goto loc_83104FC0;
	case 19:
		goto loc_83104FF8;
	case 20:
		goto loc_83104FF8;
	case 21:
		goto loc_83104FF8;
	case 22:
		goto loc_83104FF8;
	case 23:
		goto loc_83104FCC;
	case 24:
		goto loc_83104FD8;
	case 25:
		goto loc_83104FE4;
	case 26:
		goto loc_83104FF0;
	default:
		__builtin_unreachable();
	}
loc_83104F6C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4780
	ctx.r4.s64 = ctx.r11.s64 + -4780;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104F78:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4796
	ctx.r4.s64 = ctx.r11.s64 + -4796;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104F84:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4812
	ctx.r4.s64 = ctx.r11.s64 + -4812;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104F90:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4832
	ctx.r4.s64 = ctx.r11.s64 + -4832;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104F9C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4856
	ctx.r4.s64 = ctx.r11.s64 + -4856;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104FA8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4872
	ctx.r4.s64 = ctx.r11.s64 + -4872;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104FB4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4884
	ctx.r4.s64 = ctx.r11.s64 + -4884;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104FC0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4896
	ctx.r4.s64 = ctx.r11.s64 + -4896;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104FCC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-536
	ctx.r4.s64 = ctx.r11.s64 + -536;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104FD8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-524
	ctx.r4.s64 = ctx.r11.s64 + -524;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104FE4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-508
	ctx.r4.s64 = ctx.r11.s64 + -508;
	// b 0x83104ff8
	goto loc_83104FF8;
loc_83104FF0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-4916
	ctx.r4.s64 = ctx.r11.s64 + -4916;
loc_83104FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104068
	ctx.lr = 0x83105000;
	sub_83104068(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x831037e8
	ctx.lr = 0x83105010;
	sub_831037E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x83105030
	if (ctx.cr0.eq) goto loc_83105030;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-848
	ctx.r4.s64 = ctx.r11.s64 + -848;
	// b 0x83105038
	goto loc_83105038;
loc_83105030:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-836
	ctx.r4.s64 = ctx.r11.s64 + -836;
loc_83105038:
	// bl 0x831037e8
	ctx.lr = 0x8310503C;
	sub_831037E8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-6348
	ctx.r27.s64 = ctx.r11.s64 + -6348;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105050;
	sub_831037E8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,12040
	ctx.r29.s64 = ctx.r11.s64 + 12040;
	// addi r28,r10,12872
	ctx.r28.s64 = ctx.r10.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x8310507C;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83105098;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x831050B4;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x831050D0;
	sub_831037E8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7908
	ctx.r4.s64 = ctx.r11.s64 + 7908;
	// bl 0x831037e8
	ctx.lr = 0x831050E0;
	sub_831037E8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x831044e0
	ctx.lr = 0x83105118;
	sub_831044E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105124;
	sub_831037E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83105140;
	sub_831037E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x8310515C;
	sub_831037E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x83105184
	if (ctx.cr6.eq) goto loc_83105184;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83105184;
	sub_831037E8(ctx, base);
loc_83105184:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-4924
	ctx.r4.s64 = ctx.r10.s64 + -4924;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// bl 0x831037e8
	ctx.lr = 0x8310519C;
	sub_831037E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831051b8
	if (ctx.cr0.eq) goto loc_831051B8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4960
	ctx.r4.s64 = ctx.r11.s64 + -4960;
	// bl 0x831037e8
	ctx.lr = 0x831051B8;
	sub_831037E8(ctx, base);
loc_831051B8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x831051e4
	if (ctx.cr6.eq) goto loc_831051E4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1176
	ctx.r10.s64 = ctx.r29.s64 + 1176;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-4976
	ctx.r4.s64 = ctx.r9.s64 + -4976;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x831051E4;
	sub_831037E8(ctx, base);
loc_831051E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83105210
	if (ctx.cr6.eq) goto loc_83105210;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1192
	ctx.r10.s64 = ctx.r29.s64 + 1192;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-4992
	ctx.r4.s64 = ctx.r9.s64 + -4992;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x83105210;
	sub_831037E8(ctx, base);
loc_83105210:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8310523c
	if (ctx.cr6.eq) goto loc_8310523C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1208
	ctx.r10.s64 = ctx.r29.s64 + 1208;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-5008
	ctx.r4.s64 = ctx.r9.s64 + -5008;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x8310523C;
	sub_831037E8(ctx, base);
loc_8310523C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x83105268
	if (ctx.cr6.eq) goto loc_83105268;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1224
	ctx.r10.s64 = ctx.r29.s64 + 1224;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-5028
	ctx.r4.s64 = ctx.r9.s64 + -5028;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x83105268;
	sub_831037E8(ctx, base);
loc_83105268:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x83105294
	if (ctx.cr6.eq) goto loc_83105294;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1256
	ctx.r10.s64 = ctx.r29.s64 + 1256;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-768
	ctx.r4.s64 = ctx.r9.s64 + -768;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x83105294;
	sub_831037E8(ctx, base);
loc_83105294:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x831052c0
	if (ctx.cr6.eq) goto loc_831052C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1288
	ctx.r10.s64 = ctx.r29.s64 + 1288;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-5048
	ctx.r4.s64 = ctx.r9.s64 + -5048;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x831052C0;
	sub_831037E8(ctx, base);
loc_831052C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x831052ec
	if (ctx.cr6.eq) goto loc_831052EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1304
	ctx.r10.s64 = ctx.r29.s64 + 1304;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-5068
	ctx.r4.s64 = ctx.r9.s64 + -5068;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x831052EC;
	sub_831037E8(ctx, base);
loc_831052EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x83105308
	if (ctx.cr0.eq) goto loc_83105308;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5088
	ctx.r4.s64 = ctx.r11.s64 + -5088;
	// bl 0x831037e8
	ctx.lr = 0x83105308;
	sub_831037E8(ctx, base);
loc_83105308:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105330
	if (ctx.cr0.eq) goto loc_83105330;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1320
	ctx.r10.s64 = ctx.r29.s64 + 1320;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-5108
	ctx.r4.s64 = ctx.r9.s64 + -5108;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x83105330;
	sub_831037E8(ctx, base);
loc_83105330:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8310534c
	if (ctx.cr0.eq) goto loc_8310534C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5136
	ctx.r4.s64 = ctx.r11.s64 + -5136;
	// bl 0x831037e8
	ctx.lr = 0x8310534C;
	sub_831037E8(ctx, base);
loc_8310534C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105368
	if (ctx.cr0.eq) goto loc_83105368;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5164
	ctx.r4.s64 = ctx.r11.s64 + -5164;
	// bl 0x831037e8
	ctx.lr = 0x83105368;
	sub_831037E8(ctx, base);
loc_83105368:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x83105384
	if (ctx.cr0.eq) goto loc_83105384;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5180
	ctx.r4.s64 = ctx.r11.s64 + -5180;
	// bl 0x831037e8
	ctx.lr = 0x83105384;
	sub_831037E8(ctx, base);
loc_83105384:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x831053a0
	if (ctx.cr0.eq) goto loc_831053A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5196
	ctx.r4.s64 = ctx.r11.s64 + -5196;
	// bl 0x831037e8
	ctx.lr = 0x831053A0;
	sub_831037E8(ctx, base);
loc_831053A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,11,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x831053bc
	if (ctx.cr0.eq) goto loc_831053BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5212
	ctx.r4.s64 = ctx.r11.s64 + -5212;
	// bl 0x831037e8
	ctx.lr = 0x831053BC;
	sub_831037E8(ctx, base);
loc_831053BC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,6,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x83105774
	if (ctx.cr0.eq) goto loc_83105774;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-5228
	ctx.r4.s64 = ctx.r11.s64 + -5228;
	// b 0x8310576c
	goto loc_8310576C;
loc_831053D4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5252
	ctx.r4.s64 = ctx.r11.s64 + -5252;
	// bl 0x831037e8
	ctx.lr = 0x831053E4;
	sub_831037E8(ctx, base);
	// b 0x83105774
	goto loc_83105774;
loc_831053E8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-800
	ctx.r4.s64 = ctx.r11.s64 + -800;
	// bl 0x83104068
	ctx.lr = 0x831053F8;
	sub_83104068(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x831037e8
	ctx.lr = 0x83105408;
	sub_831037E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x83105428
	if (ctx.cr0.eq) goto loc_83105428;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-848
	ctx.r4.s64 = ctx.r11.s64 + -848;
	// b 0x83105430
	goto loc_83105430;
loc_83105428:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-836
	ctx.r4.s64 = ctx.r11.s64 + -836;
loc_83105430:
	// bl 0x831037e8
	ctx.lr = 0x83105434;
	sub_831037E8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// bl 0x831037e8
	ctx.lr = 0x83105444;
	sub_831037E8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,12040
	ctx.r29.s64 = ctx.r11.s64 + 12040;
	// addi r28,r10,12872
	ctx.r28.s64 = ctx.r10.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83105470;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x8310548C;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x831054A8;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x831054C4;
	sub_831037E8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,7908
	ctx.r27.s64 = ctx.r11.s64 + 7908;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831037e8
	ctx.lr = 0x831054D8;
	sub_831037E8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x831044e0
	ctx.lr = 0x83105510;
	sub_831044E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-780
	ctx.r4.s64 = ctx.r11.s64 + -780;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x831037e8
	ctx.lr = 0x83105530;
	sub_831037E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83105564
	if (!ctx.cr0.eq) goto loc_83105564;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r10,r10,13620
	ctx.r10.s64 = ctx.r10.s64 + 13620;
	// rlwinm r8,r11,9,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xC;
	// addi r4,r9,-5264
	ctx.r4.s64 = ctx.r9.s64 + -5264;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x831037e8
	ctx.lr = 0x83105564;
	sub_831037E8(ctx, base);
loc_83105564:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,3180
	ctx.r26.s64 = ctx.r11.s64 + 3180;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105578;
	sub_831037E8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r25,r11,-6332
	ctx.r25.s64 = ctx.r11.s64 + -6332;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831055a0
	if (ctx.cr0.eq) goto loc_831055A0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,272
	ctx.r5.s64 = ctx.r11.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831055A0;
	sub_831037E8(ctx, base);
loc_831055A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,-832
	ctx.r28.s64 = ctx.r11.s64 + -832;
	// bne 0x83105604
	if (!ctx.cr0.eq) goto loc_83105604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104d50
	ctx.lr = 0x831055BC;
	sub_83104D50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831055C8;
	sub_831037E8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5292
	ctx.r4.s64 = ctx.r11.s64 + -5292;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r11,24,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7FFFFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831037e8
	ctx.lr = 0x831055E4;
	sub_831037E8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r29,1336
	ctx.r11.s64 = ctx.r29.s64 + 1336;
	// addi r4,r10,-5308
	ctx.r4.s64 = ctx.r10.s64 + -5308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x831037e8
	ctx.lr = 0x83105604;
	sub_831037E8(ctx, base);
loc_83105604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104d50
	ctx.lr = 0x8310560C;
	sub_83104D50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105618;
	sub_831037E8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r29,r11,26176
	ctx.r29.s64 = ctx.r11.s64 + 26176;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105640
	if (ctx.cr0.eq) goto loc_83105640;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-5320
	ctx.r4.s64 = ctx.r11.s64 + -5320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105640;
	sub_831037E8(ctx, base);
loc_83105640:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5332
	ctx.r4.s64 = ctx.r11.s64 + -5332;
	// bl 0x831037e8
	ctx.lr = 0x83105650;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310566c
	if (ctx.cr0.eq) goto loc_8310566C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-5356
	ctx.r4.s64 = ctx.r11.s64 + -5356;
	// b 0x83105674
	goto loc_83105674;
loc_8310566C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-5380
	ctx.r4.s64 = ctx.r11.s64 + -5380;
loc_83105674:
	// bl 0x831037e8
	ctx.lr = 0x83105678;
	sub_831037E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105684;
	sub_831037E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104d50
	ctx.lr = 0x8310568C;
	sub_83104D50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105698;
	sub_831037E8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5392
	ctx.r4.s64 = ctx.r11.s64 + -5392;
	// bl 0x831037e8
	ctx.lr = 0x831056A8;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831056c0
	if (ctx.cr0.eq) goto loc_831056C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x831056c8
	goto loc_831056C8;
loc_831056C0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,29968
	ctx.r4.s64 = ctx.r11.s64 + 29968;
loc_831056C8:
	// bl 0x831037e8
	ctx.lr = 0x831056CC;
	sub_831037E8(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x831056e8
	if (ctx.cr0.eq) goto loc_831056E8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5408
	ctx.r4.s64 = ctx.r11.s64 + -5408;
	// bl 0x831037e8
	ctx.lr = 0x831056E8;
	sub_831037E8(ctx, base);
loc_831056E8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x83105754
	if (ctx.cr6.eq) goto loc_83105754;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83105754
	if (!ctx.cr0.eq) goto loc_83105754;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105708;
	sub_831037E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104d50
	ctx.lr = 0x83105710;
	sub_83104D50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310571C;
	sub_831037E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83105748
	if (!ctx.cr0.eq) goto loc_83105748;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r4,r10,-5444
	ctx.r4.s64 = ctx.r10.s64 + -5444;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831037e8
	ctx.lr = 0x83105744;
	sub_831037E8(ctx, base);
	// b 0x83105754
	goto loc_83105754;
loc_83105748:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-5460
	ctx.r4.s64 = ctx.r11.s64 + -5460;
	// bl 0x831037e8
	ctx.lr = 0x83105754;
	sub_831037E8(ctx, base);
loc_83105754:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105774
	if (ctx.cr0.eq) goto loc_83105774;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
loc_8310576C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105774;
	sub_831037E8(ctx, base);
loc_83105774:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8310577C"))) PPC_WEAK_FUNC(sub_8310577C);
PPC_FUNC_IMPL(__imp__sub_8310577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83105780"))) PPC_WEAK_FUNC(sub_83105780);
PPC_FUNC_IMPL(__imp__sub_83105780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x83105788;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8310597c
	if (ctx.cr6.eq) goto loc_8310597C;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r23,r3,92
	ctx.r23.s64 = ctx.r3.s64 + 92;
	// addi r27,r4,-18548
	ctx.r27.s64 = ctx.r4.s64 + -18548;
	// addi r26,r5,5664
	ctx.r26.s64 = ctx.r5.s64 + 5664;
	// addi r25,r6,-4760
	ctx.r25.s64 = ctx.r6.s64 + -4760;
	// addi r22,r7,12176
	ctx.r22.s64 = ctx.r7.s64 + 12176;
	// addi r24,r8,-17232
	ctx.r24.s64 = ctx.r8.s64 + -17232;
	// addi r21,r9,-4772
	ctx.r21.s64 = ctx.r9.s64 + -4772;
	// addi r20,r10,-4768
	ctx.r20.s64 = ctx.r10.s64 + -4768;
	// addi r30,r11,-180
	ctx.r30.s64 = ctx.r11.s64 + -180;
loc_831057F0:
	// clrlwi r11,r17,31
	ctx.r11.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r31,r18,31
	ctx.r31.u64 = ctx.r18.u32 & 0x1;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83105830
	if (!ctx.cr6.eq) goto loc_83105830;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104d50
	ctx.lr = 0x83105810;
	sub_83104D50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310581C;
	sub_831037E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104e98
	ctx.lr = 0x8310582C;
	sub_83104E98(ctx, base);
	// b 0x83105970
	goto loc_83105970;
loc_83105830:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x83105864
	if (ctx.cr6.lt) goto loc_83105864;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83105858
	if (ctx.cr6.eq) goto loc_83105858;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_83105858:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105864;
	sub_831037E8(ctx, base);
loc_83105864:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83105884
	if (!ctx.cr0.eq) goto loc_83105884;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83105888
	if (ctx.cr6.eq) goto loc_83105888;
loc_83105884:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83105888:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831058b0
	if (!ctx.cr0.eq) goto loc_831058B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104d50
	ctx.lr = 0x83105898;
	sub_83104D50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831037e8
	ctx.lr = 0x831058A4;
	sub_831037E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831048e0
	ctx.lr = 0x831058B0;
	sub_831048E0(ctx, base);
loc_831058B0:
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x831058ec
	if (ctx.cr6.lt) goto loc_831058EC;
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105970
	if (ctx.cr0.eq) goto loc_83105970;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831058E8;
	sub_831034D8(ctx, base);
	// b 0x83105970
	goto loc_83105970;
loc_831058EC:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83105914
	if (!ctx.cr0.eq) goto loc_83105914;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83105914
	if (!ctx.cr6.eq) goto loc_83105914;
	// rlwinm r11,r11,0,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83105918
	if (!ctx.cr6.eq) goto loc_83105918;
loc_83105914:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83105918:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83105970
	if (!ctx.cr0.eq) goto loc_83105970;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104d50
	ctx.lr = 0x83105928;
	sub_83104D50(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83105948
	if (!ctx.cr0.eq) goto loc_83105948;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8310594c
	if (ctx.cr6.eq) goto loc_8310594C;
loc_83105948:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310594C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// beq 0x83105960
	if (ctx.cr0.eq) goto loc_83105960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83105960:
	// bl 0x831037e8
	ctx.lr = 0x83105964;
	sub_831037E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104bb8
	ctx.lr = 0x83105970;
	sub_83104BB8(ctx, base);
loc_83105970:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x831057f0
	if (!ctx.cr0.eq) goto loc_831057F0;
loc_8310597C:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_83105988"))) PPC_WEAK_FUNC(sub_83105988);
PPC_FUNC_IMPL(__imp__sub_83105988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83105990;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// stw r29,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r29.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// clrlwi r30,r10,31
	ctx.r30.u64 = ctx.r10.u32 & 0x1;
	// stw r28,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r28.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x83103848
	ctx.lr = 0x831059CC;
	sub_83103848(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x83104db0
	ctx.lr = 0x831059E8;
	sub_83104DB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r23,-31952
	ctx.r23.s64 = -2094006272;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r20,-32240
	ctx.r20.s64 = -2112880640;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r19,-32248
	ctx.r19.s64 = -2113404928;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r23,13632
	ctx.r7.s64 = ctx.r23.s64 + 13632;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r20,60
	ctx.r6.s64 = ctx.r20.s64 + 60;
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// addi r11,r11,-4296
	ctx.r11.s64 = ctx.r11.s64 + -4296;
	// addi r5,r19,-4316
	ctx.r5.s64 = ctx.r19.s64 + -4316;
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// lis r18,-32248
	ctx.r18.s64 = -2113404928;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r17,-32248
	ctx.r17.s64 = -2113404928;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// lis r14,-32240
	ctx.r14.s64 = -2112880640;
	// addi r11,r8,-4280
	ctx.r11.s64 = ctx.r8.s64 + -4280;
	// addi r7,r18,-4332
	ctx.r7.s64 = ctx.r18.s64 + -4332;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r6,r17,-4344
	ctx.r6.s64 = ctx.r17.s64 + -4344;
	// addi r5,r14,-4
	ctx.r5.s64 = ctx.r14.s64 + -4;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// addi r10,r10,-4272
	ctx.r10.s64 = ctx.r10.s64 + -4272;
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// addi r9,r9,7908
	ctx.r9.s64 = ctx.r9.s64 + 7908;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// lis r22,-32248
	ctx.r22.s64 = -2113404928;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lis r21,-32240
	ctx.r21.s64 = -2112880640;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r15,-32240
	ctx.r15.s64 = -2112880640;
	// lis r24,-32246
	ctx.r24.s64 = -2113273856;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// lis r26,-32240
	ctx.r26.s64 = -2112880640;
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// lis r28,-32240
	ctx.r28.s64 = -2112880640;
	// lis r29,-32240
	ctx.r29.s64 = -2112880640;
	// lis r30,-32248
	ctx.r30.s64 = -2113404928;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r23,r22,-5556
	ctx.r23.s64 = ctx.r22.s64 + -5556;
	// addi r30,r30,-4372
	ctx.r30.s64 = ctx.r30.s64 + -4372;
	// addi r28,r28,-36
	ctx.r28.s64 = ctx.r28.s64 + -36;
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r4,-4384
	ctx.r4.s64 = ctx.r4.s64 + -4384;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r5,r5,-4408
	ctx.r5.s64 = ctx.r5.s64 + -4408;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r6,r6,-4428
	ctx.r6.s64 = ctx.r6.s64 + -4428;
	// stw r4,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// addi r7,r7,-4448
	ctx.r7.s64 = ctx.r7.s64 + -4448;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r8,r8,-4468
	ctx.r8.s64 = ctx.r8.s64 + -4468;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// addi r9,r9,-4492
	ctx.r9.s64 = ctx.r9.s64 + -4492;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r17,r10,-4504
	ctx.r17.s64 = ctx.r10.s64 + -4504;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// addi r19,r15,16
	ctx.r19.s64 = ctx.r15.s64 + 16;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// addi r10,r24,5664
	ctx.r10.s64 = ctx.r24.s64 + 5664;
	// addi r14,r26,-144
	ctx.r14.s64 = ctx.r26.s64 + -144;
	// addi r15,r11,-104
	ctx.r15.s64 = ctx.r11.s64 + -104;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r27,r27,-4352
	ctx.r27.s64 = ctx.r27.s64 + -4352;
	// addi r29,r29,-40
	ctx.r29.s64 = ctx.r29.s64 + -40;
	// addi r30,r25,3900
	ctx.r30.s64 = ctx.r25.s64 + 3900;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// lis r26,-32248
	ctx.r26.s64 = -2113404928;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// lis r29,-32246
	ctx.r29.s64 = -2113273856;
	// lis r30,-32240
	ctx.r30.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r26,r26,-4528
	ctx.r26.s64 = ctx.r26.s64 + -4528;
	// addi r28,r28,-4552
	ctx.r28.s64 = ctx.r28.s64 + -4552;
	// addi r3,r3,-4564
	ctx.r3.s64 = ctx.r3.s64 + -4564;
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// addi r4,r4,-4572
	ctx.r4.s64 = ctx.r4.s64 + -4572;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r5,r5,-4584
	ctx.r5.s64 = ctx.r5.s64 + -4584;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r6,r6,-156
	ctx.r6.s64 = ctx.r6.s64 + -156;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r7,r7,-4640
	ctx.r7.s64 = ctx.r7.s64 + -4640;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// addi r8,r8,-4652
	ctx.r8.s64 = ctx.r8.s64 + -4652;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r9,r9,-888
	ctx.r9.s64 = ctx.r9.s64 + -888;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// addi r11,r11,-4660
	ctx.r11.s64 = ctx.r11.s64 + -4660;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// addi r20,r16,-6332
	ctx.r20.s64 = ctx.r16.s64 + -6332;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r21,r21,80
	ctx.r21.s64 = ctx.r21.s64 + 80;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r18,r27,-4676
	ctx.r18.s64 = ctx.r27.s64 + -4676;
	// addi r22,r29,25232
	ctx.r22.s64 = ctx.r29.s64 + 25232;
	// addi r16,r30,-132
	ctx.r16.s64 = ctx.r30.s64 + -132;
	// addi r24,r10,-180
	ctx.r24.s64 = ctx.r10.s64 + -180;
loc_83105BF0:
	// lwz r30,460(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83105c00
	goto loc_83105C00;
loc_83105BFC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_83105C00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x83105e38
	if (ctx.cr6.eq) goto loc_83105E38;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105C2C;
	sub_831033E8(ctx, base);
	// lbz r25,113(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x83105ca0
	if (ctx.cr0.eq) goto loc_83105CA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104d50
	ctx.lr = 0x83105C4C;
	sub_83104D50(ctx, base);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r27,27
	ctx.r10.u64 = ctx.r27.u32 & 0x1F;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105ca4
	if (ctx.cr0.eq) goto loc_83105CA4;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x831037e8
	ctx.lr = 0x83105C94;
	sub_831037E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104d50
	ctx.lr = 0x83105C9C;
	sub_83104D50(ctx, base);
	// b 0x83105ca4
	goto loc_83105CA4;
loc_83105CA0:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_83105CA4:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bgt cr6,0x831063cc
	if (ctx.cr6.gt) goto loc_831063CC;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-5488
	ctx.r12.s64 = ctx.r12.s64 + -5488;
	// rlwinm r0,r29,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31984
	ctx.r12.s64 = -2096103424;
	// addi r12,r12,23764
	ctx.r12.s64 = ctx.r12.s64 + 23764;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_83105CD4;
	case 1:
		goto loc_83105D30;
	case 2:
		goto loc_83105D04;
	case 3:
		goto loc_83105E70;
	case 4:
		goto loc_83105E9C;
	case 5:
		goto loc_83105EB8;
	case 6:
		goto loc_83105ED4;
	case 7:
		goto loc_83105EF0;
	case 8:
		goto loc_83105FE0;
	case 9:
		goto loc_83106124;
	case 10:
		goto loc_83106180;
	case 11:
		goto loc_8310619C;
	case 12:
		goto loc_831062F4;
	default:
		__builtin_unreachable();
	}
loc_83105CD4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105e20
	if (ctx.cr0.eq) goto loc_83105E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105CF4;
	sub_831037E8(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_83105CF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831040d8
	ctx.lr = 0x83105D00;
	sub_831040D8(ctx, base);
	// b 0x83105e20
	goto loc_83105E20;
loc_83105D04:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105d30
	if (ctx.cr6.eq) goto loc_83105D30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83105d30
	if (ctx.cr0.eq) goto loc_83105D30;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105D24;
	sub_831037E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x831037e8
	ctx.lr = 0x83105D30;
	sub_831037E8(ctx, base);
loc_83105D30:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105D40;
	sub_831033E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x83105d50
	if (!ctx.cr6.eq) goto loc_83105D50;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_83105D50:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105D60;
	sub_831033E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105D74;
	sub_831033E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105D88;
	sub_831033E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105D9C;
	sub_831033E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105DAC;
	sub_831033E8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83105df4
	if (ctx.cr6.eq) goto loc_83105DF4;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83105df4
	if (!ctx.cr6.gt) goto loc_83105DF4;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83105780
	ctx.lr = 0x83105DE8;
	sub_83105780(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_83105DF4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e1c
	if (ctx.cr6.eq) goto loc_83105E1C;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x83105e1c
	if (!ctx.cr6.gt) goto loc_83105E1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x831037e8
	ctx.lr = 0x83105E1C;
	sub_831037E8(ctx, base);
loc_83105E1C:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_83105E20:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83105bfc
	if (!ctx.cr0.eq) goto loc_83105BFC;
loc_83105E38:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// bne 0x83105bf0
	if (!ctx.cr0.eq) goto loc_83105BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104d50
	ctx.lr = 0x83105E64;
	sub_83104D50(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_83105E70:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e90
	if (ctx.cr6.eq) goto loc_83105E90;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105E84;
	sub_831037E8(ctx, base);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_83105E88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831040d8
	ctx.lr = 0x83105E90;
	sub_831040D8(ctx, base);
loc_83105E90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// b 0x83105e20
	goto loc_83105E20;
loc_83105E9C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e90
	if (ctx.cr6.eq) goto loc_83105E90;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105EB0;
	sub_831037E8(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// b 0x83105e88
	goto loc_83105E88;
loc_83105EB8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e90
	if (ctx.cr6.eq) goto loc_83105E90;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105ECC;
	sub_831037E8(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x83105e88
	goto loc_83105E88;
loc_83105ED4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e90
	if (ctx.cr6.eq) goto loc_83105E90;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105EE8;
	sub_831037E8(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x83105e88
	goto loc_83105E88;
loc_83105EF0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105F04;
	sub_831037E8(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831040d8
	ctx.lr = 0x83105F10;
	sub_831040D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105F1C;
	sub_831037E8(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105F2C;
	sub_831033E8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105F44;
	sub_831037E8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105F54;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83105f6c
	if (ctx.cr0.eq) goto loc_83105F6C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105F6C;
	sub_831037E8(ctx, base);
loc_83105F6C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105F7C;
	sub_831033E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105F8C;
	sub_831037E8(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105F9C;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83105fb4
	if (ctx.cr0.eq) goto loc_83105FB4;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
loc_83105FA8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105FB4;
	sub_831037E8(ctx, base);
loc_83105FB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83105FC4;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83105e20
	if (ctx.cr0.eq) goto loc_83105E20;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_83105FD0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_83105FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105FDC;
	sub_831037E8(ctx, base);
	// b 0x83105e20
	goto loc_83105E20;
loc_83105FE0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83105FF4;
	sub_831037E8(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831040d8
	ctx.lr = 0x83106000;
	sub_831040D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310600C;
	sub_831037E8(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x8310601C;
	sub_831033E8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106034;
	sub_831037E8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106044;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310605c
	if (ctx.cr0.eq) goto loc_8310605C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310605C;
	sub_831037E8(ctx, base);
loc_8310605C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x8310606C;
	sub_831033E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310607C;
	sub_831037E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x8310608C;
	sub_831033E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x831037e8
	ctx.lr = 0x8310609C;
	sub_831037E8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x831060AC;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831060c4
	if (ctx.cr0.eq) goto loc_831060C4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831060C4;
	sub_831037E8(ctx, base);
loc_831060C4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x831060D4;
	sub_831033E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x831037e8
	ctx.lr = 0x831060E4;
	sub_831037E8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x831060F4;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310610c
	if (ctx.cr0.eq) goto loc_8310610C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310610C;
	sub_831037E8(ctx, base);
loc_8310610C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x8310611C;
	sub_831033E8(ctx, base);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x83105fa8
	goto loc_83105FA8;
loc_83106124:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x8310613C;
	sub_831033E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x8310614C;
	sub_831037E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x831040d8
	ctx.lr = 0x83106158;
	sub_831040D8(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x831037e8
	ctx.lr = 0x8310617C;
	sub_831037E8(ctx, base);
	// b 0x83105e20
	goto loc_83105E20;
loc_83106180:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106194;
	sub_831037E8(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x83105cf8
	goto loc_83105CF8;
loc_8310619C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831061B0;
	sub_831037E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x831033e8
	ctx.lr = 0x831061C4;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831061d0
	if (ctx.cr0.eq) goto loc_831061D0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_831061D0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x831061ec
	if (ctx.cr0.eq) goto loc_831061EC;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x831040d8
	ctx.lr = 0x831061E4;
	sub_831040D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x83106250
	goto loc_83106250;
loc_831061EC:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x831040d8
	ctx.lr = 0x831061F4;
	sub_831040D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106200;
	sub_831037E8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106210;
	sub_831033E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106220;
	sub_831037E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106230;
	sub_831033E8(ctx, base);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83106240
	if (!ctx.cr0.eq) goto loc_83106240;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_83106240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x831037e8
	ctx.lr = 0x8310624C;
	sub_831037E8(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_83106250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106258;
	sub_831037E8(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106268;
	sub_831033E8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106280;
	sub_831037E8(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106290;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831062a8
	if (ctx.cr0.eq) goto loc_831062A8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831062A8;
	sub_831037E8(ctx, base);
loc_831062A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831062d4
	if (ctx.cr0.eq) goto loc_831062D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x831062C4;
	sub_831033E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x831037e8
	ctx.lr = 0x831062D4;
	sub_831037E8(ctx, base);
loc_831062D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x831062E4;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83105e20
	if (ctx.cr0.eq) goto loc_83105E20;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x83105fd0
	goto loc_83105FD0;
loc_831062F4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106308;
	sub_831037E8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831040d8
	ctx.lr = 0x83106314;
	sub_831040D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x83106320;
	sub_831037E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106330;
	sub_831033E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x831037e8
	ctx.lr = 0x8310635C;
	sub_831037E8(ctx, base);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x83106384
	if (!ctx.cr6.eq) goto loc_83106384;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106374;
	sub_831033E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x831037e8
	ctx.lr = 0x83106384;
	sub_831037E8(ctx, base);
loc_83106384:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x83106394;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831063ac
	if (ctx.cr0.eq) goto loc_831063AC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831063AC;
	sub_831037E8(ctx, base);
loc_831063AC:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831033e8
	ctx.lr = 0x831063BC;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83105e20
	if (ctx.cr0.eq) goto loc_83105E20;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x83105fd0
	goto loc_83105FD0;
loc_831063CC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83105e20
	if (ctx.cr6.eq) goto loc_83105E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831037e8
	ctx.lr = 0x831063E0;
	sub_831037E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x831040d8
	ctx.lr = 0x831063EC;
	sub_831040D8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x83105fd4
	goto loc_83105FD4;
}

__attribute__((alias("__imp__sub_831063F8"))) PPC_WEAK_FUNC(sub_831063F8);
PPC_FUNC_IMPL(__imp__sub_831063F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83106400;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-4200
	ctx.r29.s64 = ctx.r10.s64 + -4200;
	// bne cr6,0x8310644c
	if (!ctx.cr6.eq) goto loc_8310644C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4216
	ctx.r5.s64 = ctx.r11.s64 + -4216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310644C;
	sub_831034D8(ctx, base);
loc_8310644C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83106470
	if (!ctx.cr6.eq) goto loc_83106470;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4232
	ctx.r5.s64 = ctx.r11.s64 + -4232;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,266
	ctx.r7.s64 = 266;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106470;
	sub_831034D8(ctx, base);
loc_83106470:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x831064a0
	if (!ctx.cr6.eq) goto loc_831064A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4252
	ctx.r5.s64 = ctx.r11.s64 + -4252;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106494;
	sub_831034D8(ctx, base);
loc_83106494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83106498:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_831064A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83106494
	if (ctx.cr6.eq) goto loc_83106494;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83106494
	if (ctx.cr6.eq) goto loc_83106494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827942f8
	ctx.lr = 0x831064B8;
	sub_827942F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8310bad0
	ctx.lr = 0x831064C8;
	sub_8310BAD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x83106498
	if (!ctx.cr0.eq) goto loc_83106498;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83106498
	goto loc_83106498;
}

__attribute__((alias("__imp__sub_831064DC"))) PPC_WEAK_FUNC(sub_831064DC);
PPC_FUNC_IMPL(__imp__sub_831064DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831064E0"))) PPC_WEAK_FUNC(sub_831064E0);
PPC_FUNC_IMPL(__imp__sub_831064E0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83106524
	if (!ctx.cr6.eq) goto loc_83106524;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-4200
	ctx.r6.s64 = ctx.r11.s64 + -4200;
	// addi r5,r10,-4216
	ctx.r5.s64 = ctx.r10.s64 + -4216;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,391
	ctx.r7.s64 = 391;
	// bl 0x831034d8
	ctx.lr = 0x8310651C;
	sub_831034D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83106534
	goto loc_83106534;
loc_83106524:
	// bl 0x827942f8
	ctx.lr = 0x83106528;
	sub_827942F8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8310b4c8
	ctx.lr = 0x83106534;
	sub_8310B4C8(ctx, base);
loc_83106534:
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

__attribute__((alias("__imp__sub_83106548"))) PPC_WEAK_FUNC(sub_83106548);
PPC_FUNC_IMPL(__imp__sub_83106548) {
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
	// bne cr6,0x83106584
	if (!ctx.cr6.eq) goto loc_83106584;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-18208
	ctx.r6.s64 = ctx.r11.s64 + -18208;
	// addi r5,r10,-18224
	ctx.r5.s64 = ctx.r10.s64 + -18224;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,241
	ctx.r7.s64 = 241;
	// bl 0x831034d8
	ctx.lr = 0x83106584;
	sub_831034D8(ctx, base);
loc_83106584:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_8310659C"))) PPC_WEAK_FUNC(sub_8310659C);
PPC_FUNC_IMPL(__imp__sub_8310659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831065A0"))) PPC_WEAK_FUNC(sub_831065A0);
PPC_FUNC_IMPL(__imp__sub_831065A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x831065A8;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83106548
	ctx.lr = 0x831065BC;
	sub_83106548(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831065cc
	if (!ctx.cr0.eq) goto loc_831065CC;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831067c0
	goto loc_831067C0;
loc_831065CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x831065D4;
	sub_824C23D0(ctx, base);
	// bl 0x827942f8
	ctx.lr = 0x831065D8;
	sub_827942F8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x831065E4;
	sub_824C23D0(ctx, base);
	// bl 0x824f2cf0
	ctx.lr = 0x831065E8;
	sub_824F2CF0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x831065F4;
	sub_824C23D0(ctx, base);
	// bl 0x82224690
	ctx.lr = 0x831065F8;
	sub_82224690(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x83106604;
	sub_824C23D0(ctx, base);
	// bl 0x82431678
	ctx.lr = 0x83106608;
	sub_82431678(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x83106614;
	sub_824C23D0(ctx, base);
	// bl 0x8277be58
	ctx.lr = 0x83106618;
	sub_8277BE58(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x83106624;
	sub_824C23D0(ctx, base);
	// bl 0x829c5e60
	ctx.lr = 0x83106628;
	sub_829C5E60(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x83106634;
	sub_824C23D0(ctx, base);
	// bl 0x8274e438
	ctx.lr = 0x83106638;
	sub_8274E438(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c23d0
	ctx.lr = 0x83106644;
	sub_824C23D0(ctx, base);
	// bl 0x829ce870
	ctx.lr = 0x83106648;
	sub_829CE870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831b3138
	ctx.lr = 0x83106658;
	sub_831B3138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83106668
	if (!ctx.cr0.eq) goto loc_83106668;
loc_83106660:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831067c0
	goto loc_831067C0;
loc_83106668:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831b3138
	ctx.lr = 0x83106674;
	sub_831B3138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83106660
	if (!ctx.cr0.eq) goto loc_83106660;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8310b768
	ctx.lr = 0x83106688;
	sub_8310B768(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83108300
	ctx.lr = 0x83106690;
	sub_83108300(ctx, base);
	// b 0x831066b8
	goto loc_831066B8;
loc_83106694:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831086a8
	ctx.lr = 0x8310669C;
	sub_831086A8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83109610
	ctx.lr = 0x831066A4;
	sub_83109610(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83106660
	if (!ctx.cr0.eq) goto loc_83106660;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108600
	ctx.lr = 0x831066B8;
	sub_83108600(ctx, base);
loc_831066B8:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83106694
	if (!ctx.cr0.eq) goto loc_83106694;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831b2ef8
	ctx.lr = 0x831066CC;
	sub_831B2EF8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r10,-18548
	ctx.r29.s64 = ctx.r10.s64 + -18548;
	// addi r25,r9,-4108
	ctx.r25.s64 = ctx.r9.s64 + -4108;
	// addi r26,r11,-4200
	ctx.r26.s64 = ctx.r11.s64 + -4200;
	// beq 0x83106704
	if (ctx.cr0.eq) goto loc_83106704;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,520
	ctx.r7.s64 = 520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106704;
	sub_831034D8(ctx, base);
loc_83106704:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x831088f0
	ctx.lr = 0x83106728;
	sub_831088F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83106754
	if (!ctx.cr0.eq) goto loc_83106754;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,531
	ctx.r7.s64 = 531;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310674C;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x831067c0
	goto loc_831067C0;
loc_83106754:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108e50
	ctx.lr = 0x83106760;
	sub_83108E50(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8310c1f0
	ctx.lr = 0x83106774;
	sub_8310C1F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8310678c
	if (ctx.cr0.eq) goto loc_8310678C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108ac8
	ctx.lr = 0x83106784;
	sub_83108AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831067c0
	goto loc_831067C0;
loc_8310678C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8310b688
	ctx.lr = 0x8310679C;
	sub_8310B688(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x831067bc
	if (ctx.cr0.eq) goto loc_831067BC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831067BC;
	sub_831034D8(ctx, base);
loc_831067BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831067C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_831067C8"))) PPC_WEAK_FUNC(sub_831067C8);
PPC_FUNC_IMPL(__imp__sub_831067C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831067D0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-4200
	ctx.r28.s64 = ctx.r10.s64 + -4200;
	// bne cr6,0x83106810
	if (!ctx.cr6.eq) goto loc_83106810;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4084
	ctx.r5.s64 = ctx.r11.s64 + -4084;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106810;
	sub_831034D8(ctx, base);
loc_83106810:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b35f8
	ctx.lr = 0x8310681C;
	sub_831B35F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83106840
	if (!ctx.cr0.eq) goto loc_83106840;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4088
	ctx.r5.s64 = ctx.r11.s64 + -4088;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,623
	ctx.r7.s64 = 623;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106840;
	sub_831034D8(ctx, base);
loc_83106840:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831b3230
	ctx.lr = 0x83106848;
	sub_831B3230(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310afd8
	ctx.lr = 0x83106854;
	sub_8310AFD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83106860"))) PPC_WEAK_FUNC(sub_83106860);
PPC_FUNC_IMPL(__imp__sub_83106860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83106868;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-4200
	ctx.r29.s64 = ctx.r10.s64 + -4200;
	// bne cr6,0x831068a4
	if (!ctx.cr6.eq) goto loc_831068A4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4024
	ctx.r5.s64 = ctx.r11.s64 + -4024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,659
	ctx.r7.s64 = 659;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831068A4;
	sub_831034D8(ctx, base);
loc_831068A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83106548
	ctx.lr = 0x831068AC;
	sub_83106548(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x831068d0
	if (!ctx.cr0.eq) goto loc_831068D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4036
	ctx.r5.s64 = ctx.r11.s64 + -4036;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,663
	ctx.r7.s64 = 663;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831068D0;
	sub_831034D8(ctx, base);
loc_831068D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c23d0
	ctx.lr = 0x831068D8;
	sub_824C23D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831068f8
	if (!ctx.cr0.eq) goto loc_831068F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4076
	ctx.r5.s64 = ctx.r11.s64 + -4076;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// bl 0x831034d8
	ctx.lr = 0x831068F8;
	sub_831034D8(ctx, base);
loc_831068F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8310aff8
	ctx.lr = 0x83106904;
	sub_8310AFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b34a8
	ctx.lr = 0x8310690C;
	sub_831B34A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83106918"))) PPC_WEAK_FUNC(sub_83106918);
PPC_FUNC_IMPL(__imp__sub_83106918) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831b48e0
	ctx.lr = 0x83106934;
	sub_831B48E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83106960
	if (!ctx.cr0.eq) goto loc_83106960;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-4008
	ctx.r5.s64 = ctx.r10.s64 + -4008;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,73
	ctx.r7.s64 = 73;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106960;
	sub_831034D8(ctx, base);
loc_83106960:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8310698C"))) PPC_WEAK_FUNC(sub_8310698C);
PPC_FUNC_IMPL(__imp__sub_8310698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83106990"))) PPC_WEAK_FUNC(sub_83106990);
PPC_FUNC_IMPL(__imp__sub_83106990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83106998;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83106a70
	if (ctx.cr6.eq) goto loc_83106A70;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-18548
	ctx.r31.s64 = ctx.r11.s64 + -18548;
	// addi r30,r10,-3992
	ctx.r30.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831069e0
	if (!ctx.cr6.eq) goto loc_831069E0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3832
	ctx.r5.s64 = ctx.r11.s64 + -3832;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,115
	ctx.r7.s64 = 115;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831069E0;
	sub_831034D8(ctx, base);
loc_831069E0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83106a08
	if (!ctx.cr6.eq) goto loc_83106A08;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3852
	ctx.r5.s64 = ctx.r11.s64 + -3852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,116
	ctx.r7.s64 = 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106A08;
	sub_831034D8(ctx, base);
loc_83106A08:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83106a30
	if (ctx.cr6.eq) goto loc_83106A30;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3880
	ctx.r5.s64 = ctx.r11.s64 + -3880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106A30;
	sub_831034D8(ctx, base);
loc_83106A30:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83106a58
	if (ctx.cr6.eq) goto loc_83106A58;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3908
	ctx.r5.s64 = ctx.r11.s64 + -3908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106A58;
	sub_831034D8(ctx, base);
loc_83106A58:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_83106A70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83106A78"))) PPC_WEAK_FUNC(sub_83106A78);
PPC_FUNC_IMPL(__imp__sub_83106A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83106A80;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83106b54
	if (ctx.cr6.eq) goto loc_83106B54;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-18548
	ctx.r31.s64 = ctx.r11.s64 + -18548;
	// addi r30,r10,-3992
	ctx.r30.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83106ac8
	if (!ctx.cr6.eq) goto loc_83106AC8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3800
	ctx.r5.s64 = ctx.r11.s64 + -3800;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106AC8;
	sub_831034D8(ctx, base);
loc_83106AC8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83106af0
	if (!ctx.cr6.eq) goto loc_83106AF0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3820
	ctx.r5.s64 = ctx.r11.s64 + -3820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106AF0;
	sub_831034D8(ctx, base);
loc_83106AF0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83106b18
	if (ctx.cr6.eq) goto loc_83106B18;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3880
	ctx.r5.s64 = ctx.r11.s64 + -3880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106B18;
	sub_831034D8(ctx, base);
loc_83106B18:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83106b40
	if (ctx.cr6.eq) goto loc_83106B40;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-3908
	ctx.r5.s64 = ctx.r11.s64 + -3908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106B40;
	sub_831034D8(ctx, base);
loc_83106B40:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_83106B54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83106B5C"))) PPC_WEAK_FUNC(sub_83106B5C);
PPC_FUNC_IMPL(__imp__sub_83106B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83106B60"))) PPC_WEAK_FUNC(sub_83106B60);
PPC_FUNC_IMPL(__imp__sub_83106B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83106B68;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83106c00
	if (ctx.cr6.eq) goto loc_83106C00;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83106bb0
	if (!ctx.cr6.eq) goto loc_83106BB0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3788
	ctx.r5.s64 = ctx.r11.s64 + -3788;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,264
	ctx.r7.s64 = 264;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106BB0;
	sub_831034D8(ctx, base);
loc_83106BB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83106bd8
	if (!ctx.cr6.eq) goto loc_83106BD8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3772
	ctx.r5.s64 = ctx.r11.s64 + -3772;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106BD8;
	sub_831034D8(ctx, base);
loc_83106BD8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83106C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83106C08"))) PPC_WEAK_FUNC(sub_83106C08);
PPC_FUNC_IMPL(__imp__sub_83106C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83106C10;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-3992
	ctx.r26.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83106c58
	if (!ctx.cr6.eq) goto loc_83106C58;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3704
	ctx.r5.s64 = ctx.r11.s64 + -3704;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,449
	ctx.r7.s64 = 449;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106C58;
	sub_831034D8(ctx, base);
loc_83106C58:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83106c7c
	if (!ctx.cr6.eq) goto loc_83106C7C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3716
	ctx.r5.s64 = ctx.r11.s64 + -3716;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106C7C;
	sub_831034D8(ctx, base);
loc_83106C7C:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83106C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83106cb0
	if (!ctx.cr0.eq) goto loc_83106CB0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3728
	ctx.r5.s64 = ctx.r11.s64 + -3728;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,456
	ctx.r7.s64 = 456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106CB0;
	sub_831034D8(ctx, base);
loc_83106CB0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831b47b0
	ctx.lr = 0x83106CD4;
	sub_831B47B0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x83106918
	ctx.lr = 0x83106CDC;
	sub_83106918(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x83106d04
	if (!ctx.cr0.eq) goto loc_83106D04;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3748
	ctx.r5.s64 = ctx.r11.s64 + -3748;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,471
	ctx.r7.s64 = 471;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106D04;
	sub_831034D8(ctx, base);
loc_83106D04:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83106D40"))) PPC_WEAK_FUNC(sub_83106D40);
PPC_FUNC_IMPL(__imp__sub_83106D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83106D48;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r9,-3688
	ctx.r28.s64 = ctx.r9.s64 + -3688;
	// addi r27,r10,-3992
	ctx.r27.s64 = ctx.r10.s64 + -3992;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83106d7c
	if (!ctx.cr6.eq) goto loc_83106D7C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83106d88
	goto loc_83106D88;
loc_83106D7C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83106e00
	if (!ctx.cr6.eq) goto loc_83106E00;
loc_83106D88:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106DA0;
	sub_831034D8(ctx, base);
	// b 0x83106e00
	goto loc_83106E00;
loc_83106DA4:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83106dbc
	if (ctx.cr6.eq) goto loc_83106DBC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83106dd4
	if (!ctx.cr6.eq) goto loc_83106DD4;
loc_83106DBC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,524
	ctx.r7.s64 = 524;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106DD4;
	sub_831034D8(ctx, base);
loc_83106DD4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83106b60
	ctx.lr = 0x83106DDC;
	sub_83106B60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83106DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x83106E00;
	sub_831B49E0(ctx, base);
loc_83106E00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83106da4
	if (!ctx.cr6.eq) goto loc_83106DA4;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83106e20
	if (ctx.cr6.eq) goto loc_83106E20;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x83106E20;
	sub_831B49E0(ctx, base);
loc_83106E20:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831b4870
	ctx.lr = 0x83106E28;
	sub_831B4870(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83106E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83106E44"))) PPC_WEAK_FUNC(sub_83106E44);
PPC_FUNC_IMPL(__imp__sub_83106E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83106E48"))) PPC_WEAK_FUNC(sub_83106E48);
PPC_FUNC_IMPL(__imp__sub_83106E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83106E50;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83106e94
	if (!ctx.cr6.eq) goto loc_83106E94;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3676
	ctx.r5.s64 = ctx.r11.s64 + -3676;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106E94;
	sub_831034D8(ctx, base);
loc_83106E94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83106918
	ctx.lr = 0x83106E9C;
	sub_83106918(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83106ec0
	if (!ctx.cr0.eq) goto loc_83106EC0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4008
	ctx.r5.s64 = ctx.r11.s64 + -4008;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,575
	ctx.r7.s64 = 575;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106EC0;
	sub_831034D8(ctx, base);
loc_83106EC0:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83106a78
	ctx.lr = 0x83106ED4;
	sub_83106A78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83106ee8
	if (!ctx.cr6.eq) goto loc_83106EE8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_83106EE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83106EFC"))) PPC_WEAK_FUNC(sub_83106EFC);
PPC_FUNC_IMPL(__imp__sub_83106EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83106F00"))) PPC_WEAK_FUNC(sub_83106F00);
PPC_FUNC_IMPL(__imp__sub_83106F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83106F08;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83106f4c
	if (!ctx.cr6.eq) goto loc_83106F4C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3644
	ctx.r5.s64 = ctx.r11.s64 + -3644;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106F4C;
	sub_831034D8(ctx, base);
loc_83106F4C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83106f70
	if (!ctx.cr6.eq) goto loc_83106F70;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3656
	ctx.r5.s64 = ctx.r11.s64 + -3656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,622
	ctx.r7.s64 = 622;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106F70;
	sub_831034D8(ctx, base);
loc_83106F70:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83106fb8
	if (ctx.cr6.eq) goto loc_83106FB8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r11,-3668
	ctx.r27.s64 = ctx.r11.s64 + -3668;
loc_83106F80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83106fbc
	if (ctx.cr6.eq) goto loc_83106FBC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83106fb0
	if (!ctx.cr6.eq) goto loc_83106FB0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,636
	ctx.r7.s64 = 636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83106FB0;
	sub_831034D8(ctx, base);
loc_83106FB0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83106f80
	if (!ctx.cr6.eq) goto loc_83106F80;
loc_83106FB8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83106FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83106FC8"))) PPC_WEAK_FUNC(sub_83106FC8);
PPC_FUNC_IMPL(__imp__sub_83106FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83106FD0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83107010
	if (!ctx.cr6.eq) goto loc_83107010;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3676
	ctx.r5.s64 = ctx.r11.s64 + -3676;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107010;
	sub_831034D8(ctx, base);
loc_83107010:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107024
	if (!ctx.cr6.eq) goto loc_83107024;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83107030
	goto loc_83107030;
loc_83107024:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8310704c
	if (!ctx.cr6.eq) goto loc_8310704C;
loc_83107030:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3632
	ctx.r5.s64 = ctx.r11.s64 + -3632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310704C;
	sub_831034D8(ctx, base);
loc_8310704C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83106f00
	ctx.lr = 0x8310705C;
	sub_83106F00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83107068
	if (!ctx.cr0.eq) goto loc_83107068;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83107068:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83107078"))) PPC_WEAK_FUNC(sub_83107078);
PPC_FUNC_IMPL(__imp__sub_83107078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83107080;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831070c0
	if (!ctx.cr6.eq) goto loc_831070C0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3676
	ctx.r5.s64 = ctx.r11.s64 + -3676;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831070C0;
	sub_831034D8(ctx, base);
loc_831070C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831070d4
	if (!ctx.cr6.eq) goto loc_831070D4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831070e0
	goto loc_831070E0;
loc_831070D4:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831070fc
	if (!ctx.cr6.eq) goto loc_831070FC;
loc_831070E0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3632
	ctx.r5.s64 = ctx.r11.s64 + -3632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,765
	ctx.r7.s64 = 765;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831070FC;
	sub_831034D8(ctx, base);
loc_831070FC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83106f00
	ctx.lr = 0x8310710C;
	sub_83106F00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83107118
	if (!ctx.cr0.eq) goto loc_83107118;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83107118:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83107160
	if (ctx.cr6.eq) goto loc_83107160;
	// bl 0x83106b60
	ctx.lr = 0x8310712C;
	sub_83106B60(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83107144
	if (!ctx.cr6.eq) goto loc_83107144;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83107144:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83107154
	if (ctx.cr6.eq) goto loc_83107154;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x83107154;
	sub_831B49E0(ctx, base);
loc_83107154:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83107160:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8310716C"))) PPC_WEAK_FUNC(sub_8310716C);
PPC_FUNC_IMPL(__imp__sub_8310716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83107170"))) PPC_WEAK_FUNC(sub_83107170);
PPC_FUNC_IMPL(__imp__sub_83107170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83107178;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831071c4
	if (!ctx.cr6.eq) goto loc_831071C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3556
	ctx.r5.s64 = ctx.r11.s64 + -3556;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831071C4;
	sub_831034D8(ctx, base);
loc_831071C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x831071e8
	if (!ctx.cr6.eq) goto loc_831071E8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3564
	ctx.r5.s64 = ctx.r11.s64 + -3564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1011
	ctx.r7.s64 = 1011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831071E8;
	sub_831034D8(ctx, base);
loc_831071E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83107210
	if (ctx.cr6.eq) goto loc_83107210;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3584
	ctx.r5.s64 = ctx.r11.s64 + -3584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1014
	ctx.r7.s64 = 1014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107210;
	sub_831034D8(ctx, base);
loc_83107210:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83107238
	if (ctx.cr6.eq) goto loc_83107238;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3604
	ctx.r5.s64 = ctx.r11.s64 + -3604;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107238;
	sub_831034D8(ctx, base);
loc_83107238:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x83106918
	ctx.lr = 0x83107250;
	sub_83106918(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83107274
	if (!ctx.cr0.eq) goto loc_83107274;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3624
	ctx.r5.s64 = ctx.r11.s64 + -3624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1031
	ctx.r7.s64 = 1031;
	// bl 0x831034d8
	ctx.lr = 0x83107274;
	sub_831034D8(ctx, base);
loc_83107274:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831072B4"))) PPC_WEAK_FUNC(sub_831072B4);
PPC_FUNC_IMPL(__imp__sub_831072B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831072B8"))) PPC_WEAK_FUNC(sub_831072B8);
PPC_FUNC_IMPL(__imp__sub_831072B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831072C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-3992
	ctx.r26.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831072fc
	if (!ctx.cr6.eq) goto loc_831072FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3556
	ctx.r5.s64 = ctx.r11.s64 + -3556;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1076
	ctx.r7.s64 = 1076;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831072FC;
	sub_831034D8(ctx, base);
loc_831072FC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83107310
	if (ctx.cr0.eq) goto loc_83107310;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83107310:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83107388
	if (ctx.cr6.eq) goto loc_83107388;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r28,r11,-3688
	ctx.r28.s64 = ctx.r11.s64 + -3688;
loc_83107320:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83107338
	if (ctx.cr6.eq) goto loc_83107338;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83107350
	if (!ctx.cr6.eq) goto loc_83107350;
loc_83107338:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1088
	ctx.r7.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107350;
	sub_831034D8(ctx, base);
loc_83107350:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83106b60
	ctx.lr = 0x83107358;
	sub_83106B60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83107370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x8310737C;
	sub_831B49E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83107320
	if (!ctx.cr6.eq) goto loc_83107320;
loc_83107388:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8310739c
	if (ctx.cr6.eq) goto loc_8310739C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x8310739C;
	sub_831B49E0(ctx, base);
loc_8310739C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831073c4
	if (!ctx.cr6.eq) goto loc_831073C4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831b4870
	ctx.lr = 0x831073B0;
	sub_831B4870(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831073C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831073C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831073CC"))) PPC_WEAK_FUNC(sub_831073CC);
PPC_FUNC_IMPL(__imp__sub_831073CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831073D0"))) PPC_WEAK_FUNC(sub_831073D0);
PPC_FUNC_IMPL(__imp__sub_831073D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831073D8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-3992
	ctx.r26.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x8310741c
	if (!ctx.cr6.eq) goto loc_8310741C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3556
	ctx.r5.s64 = ctx.r11.s64 + -3556;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1143
	ctx.r7.s64 = 1143;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310741C;
	sub_831034D8(ctx, base);
loc_8310741C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83106918
	ctx.lr = 0x83107424;
	sub_83106918(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83107448
	if (!ctx.cr0.eq) goto loc_83107448;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4008
	ctx.r5.s64 = ctx.r11.s64 + -4008;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107448;
	sub_831034D8(ctx, base);
loc_83107448:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r28,r11,-3668
	ctx.r28.s64 = ctx.r11.s64 + -3668;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310746c
	if (!ctx.cr6.eq) goto loc_8310746C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83107478
	goto loc_83107478;
loc_8310746C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831074b0
	if (!ctx.cr6.eq) goto loc_831074B0;
loc_83107478:
	// li r7,1158
	ctx.r7.s64 = 1158;
	// b 0x8310749c
	goto loc_8310749C;
loc_83107480:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x831074bc
	if (ctx.cr6.gt) goto loc_831074BC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831074b0
	if (!ctx.cr6.eq) goto loc_831074B0;
	// li r7,1168
	ctx.r7.s64 = 1168;
loc_8310749C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831074B0;
	sub_831034D8(ctx, base);
loc_831074B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83107480
	if (!ctx.cr6.eq) goto loc_83107480;
loc_831074BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83106a78
	ctx.lr = 0x831074C8;
	sub_83106A78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831074dc
	if (!ctx.cr6.eq) goto loc_831074DC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_831074DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831074F0"))) PPC_WEAK_FUNC(sub_831074F0);
PPC_FUNC_IMPL(__imp__sub_831074F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831074F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x8310753c
	if (!ctx.cr6.eq) goto loc_8310753C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3644
	ctx.r5.s64 = ctx.r11.s64 + -3644;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1212
	ctx.r7.s64 = 1212;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310753C;
	sub_831034D8(ctx, base);
loc_8310753C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83107560
	if (!ctx.cr6.eq) goto loc_83107560;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3656
	ctx.r5.s64 = ctx.r11.s64 + -3656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1213
	ctx.r7.s64 = 1213;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107560;
	sub_831034D8(ctx, base);
loc_83107560:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x831075a8
	if (ctx.cr6.eq) goto loc_831075A8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r11,-3668
	ctx.r27.s64 = ctx.r11.s64 + -3668;
loc_83107570:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x831075ac
	if (ctx.cr6.eq) goto loc_831075AC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831075a0
	if (!ctx.cr6.eq) goto loc_831075A0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1227
	ctx.r7.s64 = 1227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831075A0;
	sub_831034D8(ctx, base);
loc_831075A0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83107570
	if (!ctx.cr6.eq) goto loc_83107570;
loc_831075A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_831075AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831075B8"))) PPC_WEAK_FUNC(sub_831075B8);
PPC_FUNC_IMPL(__imp__sub_831075B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831075C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83107600
	if (!ctx.cr6.eq) goto loc_83107600;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3556
	ctx.r5.s64 = ctx.r11.s64 + -3556;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107600;
	sub_831034D8(ctx, base);
loc_83107600:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107614
	if (!ctx.cr6.eq) goto loc_83107614;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83107620
	goto loc_83107620;
loc_83107614:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8310763c
	if (!ctx.cr6.eq) goto loc_8310763C;
loc_83107620:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3632
	ctx.r5.s64 = ctx.r11.s64 + -3632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1267
	ctx.r7.s64 = 1267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310763C;
	sub_831034D8(ctx, base);
loc_8310763C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831074f0
	ctx.lr = 0x8310764C;
	sub_831074F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83107658
	if (!ctx.cr0.eq) goto loc_83107658;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83107658:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83107668"))) PPC_WEAK_FUNC(sub_83107668);
PPC_FUNC_IMPL(__imp__sub_83107668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83107670;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831076ac
	if (!ctx.cr6.eq) goto loc_831076AC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3556
	ctx.r5.s64 = ctx.r11.s64 + -3556;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1304
	ctx.r7.s64 = 1304;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831076AC;
	sub_831034D8(ctx, base);
loc_831076AC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831076c0
	if (!ctx.cr6.eq) goto loc_831076C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831076cc
	goto loc_831076CC;
loc_831076C0:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831076e8
	if (!ctx.cr6.eq) goto loc_831076E8;
loc_831076CC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3644
	ctx.r5.s64 = ctx.r11.s64 + -3644;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1310
	ctx.r7.s64 = 1310;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831076E8;
	sub_831034D8(ctx, base);
loc_831076E8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x831074f0
	ctx.lr = 0x831076FC;
	sub_831074F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83107708
	if (!ctx.cr0.eq) goto loc_83107708;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83107708:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83107718"))) PPC_WEAK_FUNC(sub_83107718);
PPC_FUNC_IMPL(__imp__sub_83107718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83107720;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83107760
	if (!ctx.cr6.eq) goto loc_83107760;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3556
	ctx.r5.s64 = ctx.r11.s64 + -3556;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107760;
	sub_831034D8(ctx, base);
loc_83107760:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107774
	if (!ctx.cr6.eq) goto loc_83107774;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83107780
	goto loc_83107780;
loc_83107774:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8310779c
	if (!ctx.cr6.eq) goto loc_8310779C;
loc_83107780:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3632
	ctx.r5.s64 = ctx.r11.s64 + -3632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1427
	ctx.r7.s64 = 1427;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310779C;
	sub_831034D8(ctx, base);
loc_8310779C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83106f00
	ctx.lr = 0x831077AC;
	sub_83106F00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831077b8
	if (!ctx.cr0.eq) goto loc_831077B8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_831077B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83107800
	if (ctx.cr6.eq) goto loc_83107800;
	// bl 0x83106b60
	ctx.lr = 0x831077CC;
	sub_83106B60(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831077e4
	if (!ctx.cr6.eq) goto loc_831077E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_831077E4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831077f4
	if (ctx.cr6.eq) goto loc_831077F4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x831077F4;
	sub_831B49E0(ctx, base);
loc_831077F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83107800:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8310780C"))) PPC_WEAK_FUNC(sub_8310780C);
PPC_FUNC_IMPL(__imp__sub_8310780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83107810"))) PPC_WEAK_FUNC(sub_83107810);
PPC_FUNC_IMPL(__imp__sub_83107810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83107818;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83107854
	if (!ctx.cr6.eq) goto loc_83107854;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3556
	ctx.r5.s64 = ctx.r11.s64 + -3556;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1485
	ctx.r7.s64 = 1485;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107854;
	sub_831034D8(ctx, base);
loc_83107854:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107868
	if (!ctx.cr6.eq) goto loc_83107868;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83107874
	goto loc_83107874;
loc_83107868:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83107890
	if (!ctx.cr6.eq) goto loc_83107890;
loc_83107874:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3632
	ctx.r5.s64 = ctx.r11.s64 + -3632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1491
	ctx.r7.s64 = 1491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107890;
	sub_831034D8(ctx, base);
loc_83107890:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831078dc
	if (ctx.cr6.eq) goto loc_831078DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83106b60
	ctx.lr = 0x831078A8;
	sub_83106B60(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831078c0
	if (!ctx.cr6.eq) goto loc_831078C0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_831078C0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831078d0
	if (ctx.cr6.eq) goto loc_831078D0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x831078D0;
	sub_831B49E0(ctx, base);
loc_831078D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831078DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_831078E8"))) PPC_WEAK_FUNC(sub_831078E8);
PPC_FUNC_IMPL(__imp__sub_831078E8) {
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
	// bne cr6,0x83107924
	if (!ctx.cr6.eq) goto loc_83107924;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3556
	ctx.r5.s64 = ctx.r10.s64 + -3556;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// bl 0x831034d8
	ctx.lr = 0x83107924;
	sub_831034D8(ctx, base);
loc_83107924:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_8310793C"))) PPC_WEAK_FUNC(sub_8310793C);
PPC_FUNC_IMPL(__imp__sub_8310793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83107940"))) PPC_WEAK_FUNC(sub_83107940);
PPC_FUNC_IMPL(__imp__sub_83107940) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831b47b0
	ctx.lr = 0x8310796C;
	sub_831B47B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83107998
	if (!ctx.cr0.eq) goto loc_83107998;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3564
	ctx.r5.s64 = ctx.r10.s64 + -3564;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107998;
	sub_831034D8(ctx, base);
loc_83107998:
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

__attribute__((alias("__imp__sub_831079B0"))) PPC_WEAK_FUNC(sub_831079B0);
PPC_FUNC_IMPL(__imp__sub_831079B0) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831b47b0
	ctx.lr = 0x831079DC;
	sub_831B47B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83107a08
	if (!ctx.cr0.eq) goto loc_83107A08;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3564
	ctx.r5.s64 = ctx.r10.s64 + -3564;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107A08;
	sub_831034D8(ctx, base);
loc_83107A08:
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

__attribute__((alias("__imp__sub_83107A20"))) PPC_WEAK_FUNC(sub_83107A20);
PPC_FUNC_IMPL(__imp__sub_83107A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83107A28;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83107a68
	if (!ctx.cr6.eq) goto loc_83107A68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3484
	ctx.r5.s64 = ctx.r11.s64 + -3484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107A68;
	sub_831034D8(ctx, base);
loc_83107A68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83107a8c
	if (!ctx.cr6.eq) goto loc_83107A8C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3564
	ctx.r5.s64 = ctx.r11.s64 + -3564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2229
	ctx.r7.s64 = 2229;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107A8C;
	sub_831034D8(ctx, base);
loc_83107A8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83107ab4
	if (ctx.cr6.eq) goto loc_83107AB4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3508
	ctx.r5.s64 = ctx.r11.s64 + -3508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2232
	ctx.r7.s64 = 2232;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107AB4;
	sub_831034D8(ctx, base);
loc_83107AB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83107adc
	if (ctx.cr6.eq) goto loc_83107ADC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3528
	ctx.r5.s64 = ctx.r11.s64 + -3528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2233
	ctx.r7.s64 = 2233;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107ADC;
	sub_831034D8(ctx, base);
loc_83107ADC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83106918
	ctx.lr = 0x83107AE8;
	sub_83106918(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83107b0c
	if (!ctx.cr0.eq) goto loc_83107B0C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3548
	ctx.r5.s64 = ctx.r11.s64 + -3548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2242
	ctx.r7.s64 = 2242;
	// bl 0x831034d8
	ctx.lr = 0x83107B0C;
	sub_831034D8(ctx, base);
loc_83107B0C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83107B3C"))) PPC_WEAK_FUNC(sub_83107B3C);
PPC_FUNC_IMPL(__imp__sub_83107B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83107B40"))) PPC_WEAK_FUNC(sub_83107B40);
PPC_FUNC_IMPL(__imp__sub_83107B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83107B48;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r10,-18548
	ctx.r28.s64 = ctx.r10.s64 + -18548;
	// addi r27,r11,-3992
	ctx.r27.s64 = ctx.r11.s64 + -3992;
	// bne cr6,0x83107b84
	if (!ctx.cr6.eq) goto loc_83107B84;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3484
	ctx.r5.s64 = ctx.r11.s64 + -3484;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107B84;
	sub_831034D8(ctx, base);
loc_83107B84:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r25,r11,-3688
	ctx.r25.s64 = ctx.r11.s64 + -3688;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107ba0
	if (!ctx.cr6.eq) goto loc_83107BA0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83107bac
	goto loc_83107BAC;
loc_83107BA0:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83107bc4
	if (!ctx.cr6.eq) goto loc_83107BC4;
loc_83107BAC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2284
	ctx.r7.s64 = 2284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107BC4;
	sub_831034D8(ctx, base);
loc_83107BC4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83107c48
	if (ctx.cr6.eq) goto loc_83107C48;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r26,r11,-3472
	ctx.r26.s64 = ctx.r11.s64 + -3472;
loc_83107BD8:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83107bf0
	if (ctx.cr6.eq) goto loc_83107BF0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83107c08
	if (!ctx.cr6.eq) goto loc_83107C08;
loc_83107BF0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107C08;
	sub_831034D8(ctx, base);
loc_83107C08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83106b60
	ctx.lr = 0x83107C10;
	sub_83106B60(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83107c34
	if (!ctx.cr0.eq) goto loc_83107C34;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2297
	ctx.r7.s64 = 2297;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107C30;
	sub_831034D8(ctx, base);
	// b 0x83107c3c
	goto loc_83107C3C;
loc_83107C34:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x83107C3C;
	sub_831B49E0(ctx, base);
loc_83107C3C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83107bd8
	if (!ctx.cr6.eq) goto loc_83107BD8;
loc_83107C48:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83107c5c
	if (ctx.cr6.eq) goto loc_83107C5C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x83107C5C;
	sub_831B49E0(ctx, base);
loc_83107C5C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107c84
	if (!ctx.cr6.eq) goto loc_83107C84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831b4870
	ctx.lr = 0x83107C70;
	sub_831B4870(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83107C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83107C84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83107C8C"))) PPC_WEAK_FUNC(sub_83107C8C);
PPC_FUNC_IMPL(__imp__sub_83107C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83107C90"))) PPC_WEAK_FUNC(sub_83107C90);
PPC_FUNC_IMPL(__imp__sub_83107C90) {
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
	// bne cr6,0x83107ccc
	if (!ctx.cr6.eq) goto loc_83107CCC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3484
	ctx.r5.s64 = ctx.r10.s64 + -3484;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// bl 0x831034d8
	ctx.lr = 0x83107CCC;
	sub_831034D8(ctx, base);
loc_83107CCC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_83107CE4"))) PPC_WEAK_FUNC(sub_83107CE4);
PPC_FUNC_IMPL(__imp__sub_83107CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83107CE8"))) PPC_WEAK_FUNC(sub_83107CE8);
PPC_FUNC_IMPL(__imp__sub_83107CE8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831b47b0
	ctx.lr = 0x83107D14;
	sub_831B47B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83107d40
	if (!ctx.cr0.eq) goto loc_83107D40;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3564
	ctx.r5.s64 = ctx.r10.s64 + -3564;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2712
	ctx.r7.s64 = 2712;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107D40;
	sub_831034D8(ctx, base);
loc_83107D40:
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

__attribute__((alias("__imp__sub_83107D58"))) PPC_WEAK_FUNC(sub_83107D58);
PPC_FUNC_IMPL(__imp__sub_83107D58) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831b47b0
	ctx.lr = 0x83107D84;
	sub_831B47B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83107db0
	if (!ctx.cr0.eq) goto loc_83107DB0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3564
	ctx.r5.s64 = ctx.r10.s64 + -3564;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,2753
	ctx.r7.s64 = 2753;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107DB0;
	sub_831034D8(ctx, base);
loc_83107DB0:
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

__attribute__((alias("__imp__sub_83107DC8"))) PPC_WEAK_FUNC(sub_83107DC8);
PPC_FUNC_IMPL(__imp__sub_83107DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83107DD0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83107e10
	if (!ctx.cr6.eq) goto loc_83107E10;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2913
	ctx.r7.s64 = 2913;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107E10;
	sub_831034D8(ctx, base);
loc_83107E10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83107e34
	if (!ctx.cr6.eq) goto loc_83107E34;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3564
	ctx.r5.s64 = ctx.r11.s64 + -3564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2914
	ctx.r7.s64 = 2914;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107E34;
	sub_831034D8(ctx, base);
loc_83107E34:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83107e5c
	if (ctx.cr6.eq) goto loc_83107E5C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3420
	ctx.r5.s64 = ctx.r11.s64 + -3420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2917
	ctx.r7.s64 = 2917;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107E5C;
	sub_831034D8(ctx, base);
loc_83107E5C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83107e84
	if (ctx.cr6.eq) goto loc_83107E84;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3440
	ctx.r5.s64 = ctx.r11.s64 + -3440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107E84;
	sub_831034D8(ctx, base);
loc_83107E84:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83106918
	ctx.lr = 0x83107E90;
	sub_83106918(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83107eb4
	if (!ctx.cr0.eq) goto loc_83107EB4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3460
	ctx.r5.s64 = ctx.r11.s64 + -3460;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2927
	ctx.r7.s64 = 2927;
	// bl 0x831034d8
	ctx.lr = 0x83107EB4;
	sub_831034D8(ctx, base);
loc_83107EB4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83107EE4"))) PPC_WEAK_FUNC(sub_83107EE4);
PPC_FUNC_IMPL(__imp__sub_83107EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83107EE8"))) PPC_WEAK_FUNC(sub_83107EE8);
PPC_FUNC_IMPL(__imp__sub_83107EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83107EF0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r9,-3688
	ctx.r28.s64 = ctx.r9.s64 + -3688;
	// addi r27,r10,-3992
	ctx.r27.s64 = ctx.r10.s64 + -3992;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107f24
	if (!ctx.cr6.eq) goto loc_83107F24;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83107f30
	goto loc_83107F30;
loc_83107F24:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83107fa8
	if (!ctx.cr6.eq) goto loc_83107FA8;
loc_83107F30:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2964
	ctx.r7.s64 = 2964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107F48;
	sub_831034D8(ctx, base);
	// b 0x83107fa8
	goto loc_83107FA8;
loc_83107F4C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83107f64
	if (ctx.cr6.eq) goto loc_83107F64;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83107f7c
	if (!ctx.cr6.eq) goto loc_83107F7C;
loc_83107F64:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2973
	ctx.r7.s64 = 2973;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83107F7C;
	sub_831034D8(ctx, base);
loc_83107F7C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83106b60
	ctx.lr = 0x83107F84;
	sub_83106B60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83107F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x83107FA8;
	sub_831B49E0(ctx, base);
loc_83107FA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83107f4c
	if (!ctx.cr6.eq) goto loc_83107F4C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83107fc8
	if (ctx.cr6.eq) goto loc_83107FC8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x83107FC8;
	sub_831B49E0(ctx, base);
loc_83107FC8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83107ff0
	if (!ctx.cr6.eq) goto loc_83107FF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831b4870
	ctx.lr = 0x83107FDC;
	sub_831B4870(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83107FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83107FF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83107FF8"))) PPC_WEAK_FUNC(sub_83107FF8);
PPC_FUNC_IMPL(__imp__sub_83107FF8) {
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
	// bne cr6,0x83108034
	if (!ctx.cr6.eq) goto loc_83108034;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3396
	ctx.r5.s64 = ctx.r10.s64 + -3396;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3010
	ctx.r7.s64 = 3010;
	// bl 0x831034d8
	ctx.lr = 0x83108034;
	sub_831034D8(ctx, base);
loc_83108034:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_8310804C"))) PPC_WEAK_FUNC(sub_8310804C);
PPC_FUNC_IMPL(__imp__sub_8310804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83108050"))) PPC_WEAK_FUNC(sub_83108050);
PPC_FUNC_IMPL(__imp__sub_83108050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83108058;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83108098
	if (!ctx.cr6.eq) goto loc_83108098;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3031
	ctx.r7.s64 = 3031;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108098;
	sub_831034D8(ctx, base);
loc_83108098:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x831080bc
	if (!ctx.cr6.eq) goto loc_831080BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3756
	ctx.r5.s64 = ctx.r11.s64 + -3756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3032
	ctx.r7.s64 = 3032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831080BC;
	sub_831034D8(ctx, base);
loc_831080BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831080e4
	if (!ctx.cr6.eq) goto loc_831080E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3384
	ctx.r5.s64 = ctx.r11.s64 + -3384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3033
	ctx.r7.s64 = 3033;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831080E4;
	sub_831034D8(ctx, base);
loc_831080E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83106990
	ctx.lr = 0x831080F0;
	sub_83106990(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83108104
	if (!ctx.cr6.eq) goto loc_83108104;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_83108104:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83108118"))) PPC_WEAK_FUNC(sub_83108118);
PPC_FUNC_IMPL(__imp__sub_83108118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83108120;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83108160
	if (!ctx.cr6.eq) goto loc_83108160;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108160;
	sub_831034D8(ctx, base);
loc_83108160:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83106918
	ctx.lr = 0x83108168;
	sub_83106918(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310818c
	if (!ctx.cr0.eq) goto loc_8310818C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4008
	ctx.r5.s64 = ctx.r11.s64 + -4008;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3075
	ctx.r7.s64 = 3075;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310818C;
	sub_831034D8(ctx, base);
loc_8310818C:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108050
	ctx.lr = 0x8310819C;
	sub_83108050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_831081A8"))) PPC_WEAK_FUNC(sub_831081A8);
PPC_FUNC_IMPL(__imp__sub_831081A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831081B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831081f0
	if (!ctx.cr6.eq) goto loc_831081F0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3105
	ctx.r7.s64 = 3105;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831081F0;
	sub_831034D8(ctx, base);
loc_831081F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83108214
	if (!ctx.cr6.eq) goto loc_83108214;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3756
	ctx.r5.s64 = ctx.r11.s64 + -3756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3106
	ctx.r7.s64 = 3106;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108214;
	sub_831034D8(ctx, base);
loc_83108214:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8310823c
	if (!ctx.cr6.eq) goto loc_8310823C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3384
	ctx.r5.s64 = ctx.r11.s64 + -3384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3107
	ctx.r7.s64 = 3107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310823C;
	sub_831034D8(ctx, base);
loc_8310823C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83106a78
	ctx.lr = 0x83108248;
	sub_83106A78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310825c
	if (!ctx.cr6.eq) goto loc_8310825C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_8310825C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83108270"))) PPC_WEAK_FUNC(sub_83108270);
PPC_FUNC_IMPL(__imp__sub_83108270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83108278;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831082b8
	if (!ctx.cr6.eq) goto loc_831082B8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831082B8;
	sub_831034D8(ctx, base);
loc_831082B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83106918
	ctx.lr = 0x831082C0;
	sub_83106918(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x831082e4
	if (!ctx.cr0.eq) goto loc_831082E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4008
	ctx.r5.s64 = ctx.r11.s64 + -4008;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831082E4;
	sub_831034D8(ctx, base);
loc_831082E4:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831081a8
	ctx.lr = 0x831082F4;
	sub_831081A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83108300"))) PPC_WEAK_FUNC(sub_83108300);
PPC_FUNC_IMPL(__imp__sub_83108300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83108308;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83108344
	if (!ctx.cr6.eq) goto loc_83108344;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3202
	ctx.r7.s64 = 3202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108344;
	sub_831034D8(ctx, base);
loc_83108344:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83108358
	if (!ctx.cr6.eq) goto loc_83108358;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83108398
	goto loc_83108398;
loc_83108358:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310836c
	if (!ctx.cr6.eq) goto loc_8310836C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83108378
	goto loc_83108378;
loc_8310836C:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83108394
	if (!ctx.cr6.eq) goto loc_83108394;
loc_83108378:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3632
	ctx.r5.s64 = ctx.r11.s64 + -3632;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108394;
	sub_831034D8(ctx, base);
loc_83108394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83108398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_831083A0"))) PPC_WEAK_FUNC(sub_831083A0);
PPC_FUNC_IMPL(__imp__sub_831083A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831083A8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831083e4
	if (!ctx.cr6.eq) goto loc_831083E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3388
	ctx.r7.s64 = 3388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831083E4;
	sub_831034D8(ctx, base);
loc_831083E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831083f8
	if (!ctx.cr6.eq) goto loc_831083F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83108470
	goto loc_83108470;
loc_831083F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310840c
	if (!ctx.cr6.eq) goto loc_8310840C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83108418
	goto loc_83108418;
loc_8310840C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83108434
	if (!ctx.cr6.eq) goto loc_83108434;
loc_83108418:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3632
	ctx.r5.s64 = ctx.r11.s64 + -3632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3399
	ctx.r7.s64 = 3399;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108434;
	sub_831034D8(ctx, base);
loc_83108434:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8310845c
	if (!ctx.cr6.eq) goto loc_8310845C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3344
	ctx.r5.s64 = ctx.r11.s64 + -3344;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3402
	ctx.r7.s64 = 3402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310845C;
	sub_831034D8(ctx, base);
loc_8310845C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83106b60
	ctx.lr = 0x83108464;
	sub_83106B60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83108470:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83108478"))) PPC_WEAK_FUNC(sub_83108478);
PPC_FUNC_IMPL(__imp__sub_83108478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83108480;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3992
	ctx.r28.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x831084bc
	if (!ctx.cr6.eq) goto loc_831084BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3430
	ctx.r7.s64 = 3430;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831084BC;
	sub_831034D8(ctx, base);
loc_831084BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831084d0
	if (!ctx.cr6.eq) goto loc_831084D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83108548
	goto loc_83108548;
loc_831084D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831084e4
	if (!ctx.cr6.eq) goto loc_831084E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831084f0
	goto loc_831084F0;
loc_831084E4:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8310850c
	if (!ctx.cr6.eq) goto loc_8310850C;
loc_831084F0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3352
	ctx.r5.s64 = ctx.r11.s64 + -3352;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3441
	ctx.r7.s64 = 3441;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310850C;
	sub_831034D8(ctx, base);
loc_8310850C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83108534
	if (!ctx.cr6.eq) goto loc_83108534;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3312
	ctx.r5.s64 = ctx.r11.s64 + -3312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3444
	ctx.r7.s64 = 3444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108534;
	sub_831034D8(ctx, base);
loc_83108534:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83106b60
	ctx.lr = 0x8310853C;
	sub_83106B60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83108548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83108550"))) PPC_WEAK_FUNC(sub_83108550);
PPC_FUNC_IMPL(__imp__sub_83108550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83108558;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3992
	ctx.r29.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83108598
	if (!ctx.cr6.eq) goto loc_83108598;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3396
	ctx.r5.s64 = ctx.r11.s64 + -3396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108598;
	sub_831034D8(ctx, base);
loc_83108598:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x831085bc
	if (!ctx.cr6.eq) goto loc_831085BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3756
	ctx.r5.s64 = ctx.r11.s64 + -3756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831085BC;
	sub_831034D8(ctx, base);
loc_831085BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831085e4
	if (!ctx.cr6.eq) goto loc_831085E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3384
	ctx.r5.s64 = ctx.r11.s64 + -3384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831085E4;
	sub_831034D8(ctx, base);
loc_831085E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83106b60
	ctx.lr = 0x831085EC;
	sub_83106B60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83108600"))) PPC_WEAK_FUNC(sub_83108600);
PPC_FUNC_IMPL(__imp__sub_83108600) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83108648
	if (!ctx.cr6.eq) goto loc_83108648;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3756
	ctx.r5.s64 = ctx.r10.s64 + -3756;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3540
	ctx.r7.s64 = 3540;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108640;
	sub_831034D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310864c
	goto loc_8310864C;
loc_83108648:
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_8310864C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8310865c
	if (!ctx.cr6.eq) goto loc_8310865C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310865C:
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

__attribute__((alias("__imp__sub_83108670"))) PPC_WEAK_FUNC(sub_83108670);
PPC_FUNC_IMPL(__imp__sub_83108670) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8310869c
	if (!ctx.cr6.eq) goto loc_8310869C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3756
	ctx.r5.s64 = ctx.r10.s64 + -3756;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// b 0x831034d8
	sub_831034D8(ctx, base);
	return;
loc_8310869C:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x831b49e0
	sub_831B49E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831086A4"))) PPC_WEAK_FUNC(sub_831086A4);
PPC_FUNC_IMPL(__imp__sub_831086A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831086A8"))) PPC_WEAK_FUNC(sub_831086A8);
PPC_FUNC_IMPL(__imp__sub_831086A8) {
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
	// bne cr6,0x831086e4
	if (!ctx.cr6.eq) goto loc_831086E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3756
	ctx.r5.s64 = ctx.r10.s64 + -3756;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3596
	ctx.r7.s64 = 3596;
	// bl 0x831034d8
	ctx.lr = 0x831086E4;
	sub_831034D8(ctx, base);
loc_831086E4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_831086FC"))) PPC_WEAK_FUNC(sub_831086FC);
PPC_FUNC_IMPL(__imp__sub_831086FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83108700"))) PPC_WEAK_FUNC(sub_83108700);
PPC_FUNC_IMPL(__imp__sub_83108700) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831b47b0
	ctx.lr = 0x8310872C;
	sub_831B47B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83108758
	if (!ctx.cr0.eq) goto loc_83108758;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3564
	ctx.r5.s64 = ctx.r10.s64 + -3564;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3636
	ctx.r7.s64 = 3636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108758;
	sub_831034D8(ctx, base);
loc_83108758:
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

__attribute__((alias("__imp__sub_83108770"))) PPC_WEAK_FUNC(sub_83108770);
PPC_FUNC_IMPL(__imp__sub_83108770) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831b47b0
	ctx.lr = 0x8310879C;
	sub_831B47B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831087c8
	if (!ctx.cr0.eq) goto loc_831087C8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3992
	ctx.r6.s64 = ctx.r11.s64 + -3992;
	// addi r5,r10,-3564
	ctx.r5.s64 = ctx.r10.s64 + -3564;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831087C8;
	sub_831034D8(ctx, base);
loc_831087C8:
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

__attribute__((alias("__imp__sub_831087E0"))) PPC_WEAK_FUNC(sub_831087E0);
PPC_FUNC_IMPL(__imp__sub_831087E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831087E8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-3992
	ctx.r26.s64 = ctx.r10.s64 + -3992;
	// bne cr6,0x83108830
	if (!ctx.cr6.eq) goto loc_83108830;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3704
	ctx.r5.s64 = ctx.r11.s64 + -3704;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2860
	ctx.r7.s64 = 2860;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108830;
	sub_831034D8(ctx, base);
loc_83108830:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83108854
	if (!ctx.cr6.eq) goto loc_83108854;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3716
	ctx.r5.s64 = ctx.r11.s64 + -3716;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2861
	ctx.r7.s64 = 2861;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108854;
	sub_831034D8(ctx, base);
loc_83108854:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83108864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83108888
	if (!ctx.cr0.eq) goto loc_83108888;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3728
	ctx.r5.s64 = ctx.r11.s64 + -3728;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2867
	ctx.r7.s64 = 2867;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108888;
	sub_831034D8(ctx, base);
loc_83108888:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831b47b0
	ctx.lr = 0x831088AC;
	sub_831B47B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x831088d0
	if (!ctx.cr0.eq) goto loc_831088D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3564
	ctx.r5.s64 = ctx.r11.s64 + -3564;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2878
	ctx.r7.s64 = 2878;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831088D0;
	sub_831034D8(ctx, base);
loc_831088D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83107dc8
	ctx.lr = 0x831088DC;
	sub_83107DC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_831088F0"))) PPC_WEAK_FUNC(sub_831088F0);
PPC_FUNC_IMPL(__imp__sub_831088F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x831088F8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-3176
	ctx.r27.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83108950
	if (!ctx.cr6.eq) goto loc_83108950;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3704
	ctx.r5.s64 = ctx.r11.s64 + -3704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108950;
	sub_831034D8(ctx, base);
loc_83108950:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x83108974
	if (!ctx.cr6.eq) goto loc_83108974;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3716
	ctx.r5.s64 = ctx.r11.s64 + -3716;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108974;
	sub_831034D8(ctx, base);
loc_83108974:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83108998
	if (!ctx.cr6.eq) goto loc_83108998;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3188
	ctx.r5.s64 = ctx.r11.s64 + -3188;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108998;
	sub_831034D8(ctx, base);
loc_83108998:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x831089bc
	if (!ctx.cr6.eq) goto loc_831089BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3204
	ctx.r5.s64 = ctx.r11.s64 + -3204;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831089BC;
	sub_831034D8(ctx, base);
loc_831089BC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x831089e0
	if (!ctx.cr6.eq) goto loc_831089E0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3220
	ctx.r5.s64 = ctx.r11.s64 + -3220;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831089E0;
	sub_831034D8(ctx, base);
loc_831089E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83108a04
	if (!ctx.cr6.eq) goto loc_83108A04;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3236
	ctx.r5.s64 = ctx.r11.s64 + -3236;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108A04;
	sub_831034D8(ctx, base);
loc_83108A04:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83108A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83108a40
	if (!ctx.cr0.eq) goto loc_83108A40;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3280
	ctx.r5.s64 = ctx.r11.s64 + -3280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108A38;
	sub_831034D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83108ac0
	goto loc_83108AC0;
loc_83108A40:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x831b4f80
	ctx.lr = 0x83108A88;
	sub_831B4F80(ctx, base);
	// stw r3,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831b4f80
	ctx.lr = 0x83108A94;
	sub_831B4F80(ctx, base);
	// stw r3,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831b4f80
	ctx.lr = 0x83108AA0;
	sub_831B4F80(ctx, base);
	// stw r3,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831b4af0
	ctx.lr = 0x83108AAC;
	sub_831B4AF0(ctx, base);
	// stw r3,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831b4d40
	ctx.lr = 0x83108AB8;
	sub_831B4D40(ctx, base);
	// stw r3,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83108AC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_83108AC8"))) PPC_WEAK_FUNC(sub_83108AC8);
PPC_FUNC_IMPL(__imp__sub_83108AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83108AD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3176
	ctx.r29.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83108b0c
	if (!ctx.cr6.eq) goto loc_83108B0C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,230
	ctx.r7.s64 = 230;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108B0C;
	sub_831034D8(ctx, base);
loc_83108B0C:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bne 0x83108c90
	if (!ctx.cr0.eq) goto loc_83108C90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83108b40
	if (ctx.cr6.eq) goto loc_83108B40;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3080
	ctx.r5.s64 = ctx.r11.s64 + -3080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,241
	ctx.r7.s64 = 241;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108B40;
	sub_831034D8(ctx, base);
loc_83108B40:
	// lwz r4,2444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b4dd8
	ctx.lr = 0x83108B4C;
	sub_831B4DD8(ctx, base);
	// b 0x83108b74
	goto loc_83108B74;
loc_83108B50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831086a8
	ctx.lr = 0x83108B58;
	sub_831086A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83108B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108670
	ctx.lr = 0x83108B74;
	sub_83108670(ctx, base);
loc_83108B74:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x831083a0
	ctx.lr = 0x83108B7C;
	sub_831083A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83108b50
	if (!ctx.cr0.eq) goto loc_83108B50;
	// lwz r4,2440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831b5018
	ctx.lr = 0x83108B90;
	sub_831B5018(ctx, base);
	// b 0x83108bb8
	goto loc_83108BB8;
loc_83108B94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831086a8
	ctx.lr = 0x83108B9C;
	sub_831086A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83108BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108670
	ctx.lr = 0x83108BB8;
	sub_83108670(ctx, base);
loc_83108BB8:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x831083a0
	ctx.lr = 0x83108BC0;
	sub_831083A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83108b94
	if (!ctx.cr0.eq) goto loc_83108B94;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831b5018
	ctx.lr = 0x83108BD4;
	sub_831B5018(ctx, base);
	// b 0x83108bfc
	goto loc_83108BFC;
loc_83108BD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831086a8
	ctx.lr = 0x83108BE0;
	sub_831086A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83108BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108670
	ctx.lr = 0x83108BFC;
	sub_83108670(ctx, base);
loc_83108BFC:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x831083a0
	ctx.lr = 0x83108C04;
	sub_831083A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83108bd8
	if (!ctx.cr0.eq) goto loc_83108BD8;
	// lwz r4,2428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831b5018
	ctx.lr = 0x83108C18;
	sub_831B5018(ctx, base);
	// b 0x83108c2c
	goto loc_83108C2C;
loc_83108C1C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83108C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83108C2C:
	// lwz r3,2432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// bl 0x83107810
	ctx.lr = 0x83108C34;
	sub_83107810(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83108c1c
	if (!ctx.cr0.eq) goto loc_83108C1C;
	// lwz r4,2432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b4b98
	ctx.lr = 0x83108C48;
	sub_831B4B98(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8310a408
	ctx.lr = 0x83108C50;
	sub_8310A408(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83108c60
	if (ctx.cr6.eq) goto loc_83108C60;
	// bl 0x831b5730
	ctx.lr = 0x83108C60;
	sub_831B5730(ctx, base);
loc_83108C60:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83108c7c
	if (ctx.cr6.eq) goto loc_83108C7C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83108C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83108C7C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83108C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83108C90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83108C98"))) PPC_WEAK_FUNC(sub_83108C98);
PPC_FUNC_IMPL(__imp__sub_83108C98) {
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
	// bne cr6,0x83108cd4
	if (!ctx.cr6.eq) goto loc_83108CD4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,314
	ctx.r7.s64 = 314;
	// bl 0x831034d8
	ctx.lr = 0x83108CD4;
	sub_831034D8(ctx, base);
loc_83108CD4:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83108CF4"))) PPC_WEAK_FUNC(sub_83108CF4);
PPC_FUNC_IMPL(__imp__sub_83108CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83108CF8"))) PPC_WEAK_FUNC(sub_83108CF8);
PPC_FUNC_IMPL(__imp__sub_83108CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83108D00;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3176
	ctx.r28.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83108d40
	if (!ctx.cr6.eq) goto loc_83108D40;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108D40;
	sub_831034D8(ctx, base);
loc_83108D40:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x83108d68
	if (!ctx.cr6.eq) goto loc_83108D68;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x83108d90
	goto loc_83108D90;
loc_83108D68:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x83108d8c
	if (ctx.cr6.eq) goto loc_83108D8C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3060
	ctx.r5.s64 = ctx.r11.s64 + -3060;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,395
	ctx.r7.s64 = 395;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108D8C;
	sub_831034D8(ctx, base);
loc_83108D8C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_83108D90:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831b55e0
	ctx.lr = 0x83108DA8;
	sub_831B55E0(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83108DB4"))) PPC_WEAK_FUNC(sub_83108DB4);
PPC_FUNC_IMPL(__imp__sub_83108DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83108DB8"))) PPC_WEAK_FUNC(sub_83108DB8);
PPC_FUNC_IMPL(__imp__sub_83108DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83108dd4
	if (ctx.cr6.eq) goto loc_83108DD4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83108DD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108DDC"))) PPC_WEAK_FUNC(sub_83108DDC);
PPC_FUNC_IMPL(__imp__sub_83108DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83108DE0"))) PPC_WEAK_FUNC(sub_83108DE0);
PPC_FUNC_IMPL(__imp__sub_83108DE0) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83108e2c
	if (ctx.cr6.lt) goto loc_83108E2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-18208
	ctx.r6.s64 = ctx.r11.s64 + -18208;
	// addi r5,r10,-18280
	ctx.r5.s64 = ctx.r10.s64 + -18280;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,309
	ctx.r7.s64 = 309;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108E2C;
	sub_831034D8(ctx, base);
loc_83108E2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83108E50"))) PPC_WEAK_FUNC(sub_83108E50);
PPC_FUNC_IMPL(__imp__sub_83108E50) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83108e94
	if (!ctx.cr6.eq) goto loc_83108E94;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,452
	ctx.r7.s64 = 452;
	// bl 0x831034d8
	ctx.lr = 0x83108E94;
	sub_831034D8(ctx, base);
loc_83108E94:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83108EB0"))) PPC_WEAK_FUNC(sub_83108EB0);
PPC_FUNC_IMPL(__imp__sub_83108EB0) {
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
	// bne cr6,0x83108eec
	if (!ctx.cr6.eq) goto loc_83108EEC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,472
	ctx.r7.s64 = 472;
	// bl 0x831034d8
	ctx.lr = 0x83108EEC;
	sub_831034D8(ctx, base);
loc_83108EEC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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

__attribute__((alias("__imp__sub_83108F04"))) PPC_WEAK_FUNC(sub_83108F04);
PPC_FUNC_IMPL(__imp__sub_83108F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83108F08"))) PPC_WEAK_FUNC(sub_83108F08);
PPC_FUNC_IMPL(__imp__sub_83108F08) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83108f4c
	if (!ctx.cr6.eq) goto loc_83108F4C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,498
	ctx.r7.s64 = 498;
	// bl 0x831034d8
	ctx.lr = 0x83108F4C;
	sub_831034D8(ctx, base);
loc_83108F4C:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83108F68"))) PPC_WEAK_FUNC(sub_83108F68);
PPC_FUNC_IMPL(__imp__sub_83108F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83108F70;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3176
	ctx.r28.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83108fb8
	if (!ctx.cr6.eq) goto loc_83108FB8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,550
	ctx.r7.s64 = 550;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108FB8;
	sub_831034D8(ctx, base);
loc_83108FB8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83108FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne 0x83108ffc
	if (!ctx.cr0.eq) goto loc_83108FFC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-2944
	ctx.r5.s64 = ctx.r11.s64 + -2944;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83108FF4;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83109088
	goto loc_83109088;
loc_83108FFC:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83109044
	if (ctx.cr0.eq) goto loc_83109044;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-2988
	ctx.r5.s64 = ctx.r11.s64 + -2988;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,563
	ctx.r7.s64 = 563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109044;
	sub_831034D8(ctx, base);
loc_83109044:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// blt cr6,0x83109070
	if (ctx.cr6.lt) goto loc_83109070;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-3028
	ctx.r5.s64 = ctx.r11.s64 + -3028;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109070;
	sub_831034D8(ctx, base);
loc_83109070:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ca2c60
	ctx.lr = 0x83109084;
	sub_82CA2C60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83109088:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83109090"))) PPC_WEAK_FUNC(sub_83109090);
PPC_FUNC_IMPL(__imp__sub_83109090) {
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
	// bne cr6,0x831090cc
	if (!ctx.cr6.eq) goto loc_831090CC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,591
	ctx.r7.s64 = 591;
	// bl 0x831034d8
	ctx.lr = 0x831090CC;
	sub_831034D8(ctx, base);
loc_831090CC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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

__attribute__((alias("__imp__sub_831090E4"))) PPC_WEAK_FUNC(sub_831090E4);
PPC_FUNC_IMPL(__imp__sub_831090E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831090E8"))) PPC_WEAK_FUNC(sub_831090E8);
PPC_FUNC_IMPL(__imp__sub_831090E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831090F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-18208
	ctx.r27.s64 = ctx.r10.s64 + -18208;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83109138
	if (ctx.cr6.lt) goto loc_83109138;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-18056
	ctx.r5.s64 = ctx.r11.s64 + -18056;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109138;
	sub_831034D8(ctx, base);
loc_83109138:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310916c
	if (ctx.cr6.lt) goto loc_8310916C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-18128
	ctx.r5.s64 = ctx.r11.s64 + -18128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310916C;
	sub_831034D8(ctx, base);
loc_8310916C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83108de0
	ctx.lr = 0x8310918C;
	sub_83108DE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83109194"))) PPC_WEAK_FUNC(sub_83109194);
PPC_FUNC_IMPL(__imp__sub_83109194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109198"))) PPC_WEAK_FUNC(sub_83109198);
PPC_FUNC_IMPL(__imp__sub_83109198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831091A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3176
	ctx.r29.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x831091e4
	if (!ctx.cr6.eq) goto loc_831091E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,919
	ctx.r7.s64 = 919;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831091E4;
	sub_831034D8(ctx, base);
loc_831091E4:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x83109208
	if (ctx.cr6.lt) goto loc_83109208;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2748
	ctx.r5.s64 = ctx.r11.s64 + -2748;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,920
	ctx.r7.s64 = 920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109208;
	sub_831034D8(ctx, base);
loc_83109208:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8310922c
	if (!ctx.cr6.eq) goto loc_8310922C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2716
	ctx.r5.s64 = ctx.r11.s64 + -2716;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,921
	ctx.r7.s64 = 921;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310922C;
	sub_831034D8(ctx, base);
loc_8310922C:
	// mulli r11,r28,148
	ctx.r11.s64 = ctx.r28.s64 * 148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83109244;
	sub_82CA2C60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83109250"))) PPC_WEAK_FUNC(sub_83109250);
PPC_FUNC_IMPL(__imp__sub_83109250) {
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
	// bne cr6,0x8310928c
	if (!ctx.cr6.eq) goto loc_8310928C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,997
	ctx.r7.s64 = 997;
	// bl 0x831034d8
	ctx.lr = 0x8310928C;
	sub_831034D8(ctx, base);
loc_8310928C:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
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

__attribute__((alias("__imp__sub_831092A4"))) PPC_WEAK_FUNC(sub_831092A4);
PPC_FUNC_IMPL(__imp__sub_831092A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831092A8"))) PPC_WEAK_FUNC(sub_831092A8);
PPC_FUNC_IMPL(__imp__sub_831092A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831092B0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3176
	ctx.r29.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x831092f4
	if (!ctx.cr6.eq) goto loc_831092F4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831092F4;
	sub_831034D8(ctx, base);
loc_831092F4:
	// cmpwi cr6,r28,1966
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1966, ctx.xer);
	// bge cr6,0x83109318
	if (!ctx.cr6.lt) goto loc_83109318;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2528
	ctx.r5.s64 = ctx.r11.s64 + -2528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109318;
	sub_831034D8(ctx, base);
loc_83109318:
	// cmpwi cr6,r28,2086
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2086, ctx.xer);
	// blt cr6,0x8310933c
	if (ctx.cr6.lt) goto loc_8310933C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2556
	ctx.r5.s64 = ctx.r11.s64 + -2556;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310933C;
	sub_831034D8(ctx, base);
loc_8310933C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83109350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8310937c
	if (!ctx.cr0.eq) goto loc_8310937C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2616
	ctx.r5.s64 = ctx.r11.s64 + -2616;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1110
	ctx.r7.s64 = 1110;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109374;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83109390
	goto loc_83109390;
loc_8310937C:
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r27.u32);
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x83108270
	ctx.lr = 0x8310938C;
	sub_83108270(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83109390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83109398"))) PPC_WEAK_FUNC(sub_83109398);
PPC_FUNC_IMPL(__imp__sub_83109398) {
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
	// bne cr6,0x831093d4
	if (!ctx.cr6.eq) goto loc_831093D4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// bl 0x831034d8
	ctx.lr = 0x831093D4;
	sub_831034D8(ctx, base);
loc_831093D4:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
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

__attribute__((alias("__imp__sub_831093EC"))) PPC_WEAK_FUNC(sub_831093EC);
PPC_FUNC_IMPL(__imp__sub_831093EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831093F0"))) PPC_WEAK_FUNC(sub_831093F0);
PPC_FUNC_IMPL(__imp__sub_831093F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831093F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3176
	ctx.r29.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83109440
	if (!ctx.cr6.eq) goto loc_83109440;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109440;
	sub_831034D8(ctx, base);
loc_83109440:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83109454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83109480
	if (!ctx.cr0.eq) goto loc_83109480;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2504
	ctx.r5.s64 = ctx.r11.s64 + -2504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109478;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x831094a0
	goto loc_831094A0;
loc_83109480:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x83108270
	ctx.lr = 0x8310949C;
	sub_83108270(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831094A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831094A8"))) PPC_WEAK_FUNC(sub_831094A8);
PPC_FUNC_IMPL(__imp__sub_831094A8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831094ec
	if (ctx.cr6.eq) goto loc_831094EC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-2400
	ctx.r6.s64 = ctx.r11.s64 + -2400;
	// addi r5,r10,-2436
	ctx.r5.s64 = ctx.r10.s64 + -2436;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,268
	ctx.r7.s64 = 268;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831094E4;
	sub_831034D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831094f0
	goto loc_831094F0;
loc_831094EC:
	// li r3,32
	ctx.r3.s64 = 32;
loc_831094F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109500"))) PPC_WEAK_FUNC(sub_83109500);
PPC_FUNC_IMPL(__imp__sub_83109500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83109508;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3176
	ctx.r29.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83109550
	if (!ctx.cr6.eq) goto loc_83109550;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109550;
	sub_831034D8(ctx, base);
loc_83109550:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83109564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83109590
	if (!ctx.cr0.eq) goto loc_83109590;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2504
	ctx.r5.s64 = ctx.r11.s64 + -2504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109588;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x831095b0
	goto loc_831095B0;
loc_83109590:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x83108270
	ctx.lr = 0x831095AC;
	sub_83108270(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831095B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_831095B8"))) PPC_WEAK_FUNC(sub_831095B8);
PPC_FUNC_IMPL(__imp__sub_831095B8) {
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
	// bne cr6,0x831095f4
	if (!ctx.cr6.eq) goto loc_831095F4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1327
	ctx.r7.s64 = 1327;
	// bl 0x831034d8
	ctx.lr = 0x831095F4;
	sub_831034D8(ctx, base);
loc_831095F4:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
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

__attribute__((alias("__imp__sub_8310960C"))) PPC_WEAK_FUNC(sub_8310960C);
PPC_FUNC_IMPL(__imp__sub_8310960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109610"))) PPC_WEAK_FUNC(sub_83109610);
PPC_FUNC_IMPL(__imp__sub_83109610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x83109618;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-3176
	ctx.r26.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x8310965c
	if (!ctx.cr6.eq) goto loc_8310965C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310965C;
	sub_831034D8(ctx, base);
loc_8310965C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83109680
	if (!ctx.cr6.eq) goto loc_83109680;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4088
	ctx.r5.s64 = ctx.r11.s64 + -4088;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1534
	ctx.r7.s64 = 1534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109680;
	sub_831034D8(ctx, base);
loc_83109680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831095b8
	ctx.lr = 0x83109688;
	sub_831095B8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x831096ac
	if (!ctx.cr0.eq) goto loc_831096AC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-2296
	ctx.r5.s64 = ctx.r11.s64 + -2296;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831096AC;
	sub_831034D8(ctx, base);
loc_831096AC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83108300
	ctx.lr = 0x831096B4;
	sub_83108300(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8310977c
	if (ctx.cr0.eq) goto loc_8310977C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r25,r11,-2308
	ctx.r25.s64 = ctx.r11.s64 + -2308;
loc_831096C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831086a8
	ctx.lr = 0x831096CC;
	sub_831086A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831096ec
	if (!ctx.cr0.eq) goto loc_831096EC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831096EC;
	sub_831034D8(ctx, base);
loc_831096EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8310973c
	if (ctx.cr6.lt) goto loc_8310973C;
	// beq cr6,0x83109728
	if (ctx.cr6.eq) goto loc_83109728;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x83109760
	if (!ctx.cr6.lt) goto loc_83109760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831090e8
	ctx.lr = 0x83109714;
	sub_831090E8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_83109718:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83109788
	if (!ctx.cr6.eq) goto loc_83109788;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83109768
	goto loc_83109768;
loc_83109728:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83108de0
	ctx.lr = 0x83109734;
	sub_83108DE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83109718
	goto loc_83109718;
loc_8310973C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x831b5f80
	ctx.lr = 0x83109750;
	sub_831B5F80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83109760
	if (ctx.cr6.eq) goto loc_83109760;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83109760:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83109788
	if (ctx.cr6.eq) goto loc_83109788;
loc_83109768:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83108600
	ctx.lr = 0x83109774;
	sub_83108600(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831096c4
	if (!ctx.cr0.eq) goto loc_831096C4;
loc_8310977C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83109780:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_83109788:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83109780
	goto loc_83109780;
}

__attribute__((alias("__imp__sub_83109790"))) PPC_WEAK_FUNC(sub_83109790);
PPC_FUNC_IMPL(__imp__sub_83109790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83109798;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3176
	ctx.r29.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x831097e4
	if (!ctx.cr6.eq) goto loc_831097E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831097E4;
	sub_831034D8(ctx, base);
loc_831097E4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310980c
	if (!ctx.cr6.eq) goto loc_8310980C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2280
	ctx.r5.s64 = ctx.r11.s64 + -2280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310980C;
	sub_831034D8(ctx, base);
loc_8310980C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831b5750
	ctx.lr = 0x83109824;
	sub_831B5750(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310982C"))) PPC_WEAK_FUNC(sub_8310982C);
PPC_FUNC_IMPL(__imp__sub_8310982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109830"))) PPC_WEAK_FUNC(sub_83109830);
PPC_FUNC_IMPL(__imp__sub_83109830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x83109838;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-18548
	ctx.r29.s64 = ctx.r11.s64 + -18548;
	// addi r28,r10,-3176
	ctx.r28.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83109888
	if (!ctx.cr6.eq) goto loc_83109888;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109888;
	sub_831034D8(ctx, base);
loc_83109888:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831098b0
	if (!ctx.cr6.eq) goto loc_831098B0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-2280
	ctx.r5.s64 = ctx.r11.s64 + -2280;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1757
	ctx.r7.s64 = 1757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831098B0;
	sub_831034D8(ctx, base);
loc_831098B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x831098d4
	if (!ctx.cr6.eq) goto loc_831098D4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-4088
	ctx.r5.s64 = ctx.r11.s64 + -4088;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1758
	ctx.r7.s64 = 1758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831098D4;
	sub_831034D8(ctx, base);
loc_831098D4:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831b5e48
	ctx.lr = 0x831098F0;
	sub_831B5E48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x83109904
	if (ctx.cr6.eq) goto loc_83109904;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8310993c
	if (!ctx.cr6.eq) goto loc_8310993C;
loc_83109904:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8310993c
	if (!ctx.cr6.eq) goto loc_8310993C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310993c
	if (!ctx.cr6.eq) goto loc_8310993C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831090e8
	ctx.lr = 0x83109928;
	sub_831090E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83109500
	ctx.lr = 0x8310993C;
	sub_83109500(ctx, base);
loc_8310993C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_83109948"))) PPC_WEAK_FUNC(sub_83109948);
PPC_FUNC_IMPL(__imp__sub_83109948) {
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
	// bne cr6,0x83109984
	if (!ctx.cr6.eq) goto loc_83109984;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1795
	ctx.r7.s64 = 1795;
	// bl 0x831034d8
	ctx.lr = 0x83109984;
	sub_831034D8(ctx, base);
loc_83109984:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
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

__attribute__((alias("__imp__sub_8310999C"))) PPC_WEAK_FUNC(sub_8310999C);
PPC_FUNC_IMPL(__imp__sub_8310999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831099A0"))) PPC_WEAK_FUNC(sub_831099A0);
PPC_FUNC_IMPL(__imp__sub_831099A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831099A8;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831099e8
	if (!ctx.cr6.eq) goto loc_831099E8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1830
	ctx.r7.s64 = 1830;
	// bl 0x831034d8
	ctx.lr = 0x831099E8;
	sub_831034D8(ctx, base);
loc_831099E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8310a0f0
	ctx.lr = 0x831099FC;
	sub_8310A0F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83109A08"))) PPC_WEAK_FUNC(sub_83109A08);
PPC_FUNC_IMPL(__imp__sub_83109A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83109A10;
	sub_82CA2BE4(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83109a50
	if (!ctx.cr6.eq) goto loc_83109A50;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1870
	ctx.r7.s64 = 1870;
	// bl 0x831034d8
	ctx.lr = 0x83109A50;
	sub_831034D8(ctx, base);
loc_83109A50:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8310a158
	ctx.lr = 0x83109A68;
	sub_8310A158(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83109A70"))) PPC_WEAK_FUNC(sub_83109A70);
PPC_FUNC_IMPL(__imp__sub_83109A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83109A78;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83109ab0
	if (!ctx.cr6.eq) goto loc_83109AB0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1903
	ctx.r7.s64 = 1903;
	// bl 0x831034d8
	ctx.lr = 0x83109AB0;
	sub_831034D8(ctx, base);
loc_83109AB0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8310a1e0
	ctx.lr = 0x83109AC0;
	sub_8310A1E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83109AC8"))) PPC_WEAK_FUNC(sub_83109AC8);
PPC_FUNC_IMPL(__imp__sub_83109AC8) {
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
	// bne cr6,0x83109b04
	if (!ctx.cr6.eq) goto loc_83109B04;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-3176
	ctx.r6.s64 = ctx.r11.s64 + -3176;
	// addi r5,r10,-4112
	ctx.r5.s64 = ctx.r10.s64 + -4112;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1962
	ctx.r7.s64 = 1962;
	// bl 0x831034d8
	ctx.lr = 0x83109B04;
	sub_831034D8(ctx, base);
loc_83109B04:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

__attribute__((alias("__imp__sub_83109B1C"))) PPC_WEAK_FUNC(sub_83109B1C);
PPC_FUNC_IMPL(__imp__sub_83109B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109B20"))) PPC_WEAK_FUNC(sub_83109B20);
PPC_FUNC_IMPL(__imp__sub_83109B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83109B28;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-3176
	ctx.r29.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83109b64
	if (!ctx.cr6.eq) goto loc_83109B64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2014
	ctx.r7.s64 = 2014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109B64;
	sub_831034D8(ctx, base);
loc_83109B64:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83109b8c
	if (!ctx.cr6.eq) goto loc_83109B8C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-2268
	ctx.r5.s64 = ctx.r11.s64 + -2268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2018
	ctx.r7.s64 = 2018;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109B8C;
	sub_831034D8(ctx, base);
loc_83109B8C:
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8310a208
	ctx.lr = 0x83109B98;
	sub_8310A208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83109BA8"))) PPC_WEAK_FUNC(sub_83109BA8);
PPC_FUNC_IMPL(__imp__sub_83109BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x83109BB0;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r21,r11,-18548
	ctx.r21.s64 = ctx.r11.s64 + -18548;
	// addi r20,r10,-3176
	ctx.r20.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83109c0c
	if (!ctx.cr6.eq) goto loc_83109C0C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,657
	ctx.r7.s64 = 657;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109C0C;
	sub_831034D8(ctx, base);
loc_83109C0C:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x83109c30
	if (ctx.cr6.lt) goto loc_83109C30;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-2748
	ctx.r5.s64 = ctx.r11.s64 + -2748;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,658
	ctx.r7.s64 = 658;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109C30;
	sub_831034D8(ctx, base);
loc_83109C30:
	// mulli r11,r29,148
	ctx.r11.s64 = ctx.r29.s64 * 148;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r27,112
	ctx.r11.s64 = ctx.r27.s64 + 112;
	// subf r7,r10,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r10.s64;
	// stw r19,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r19.u32);
	// subf r6,r10,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r31,192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 192, ctx.r31.u32);
	// li r8,4
	ctx.r8.s64 = 4;
loc_83109C60:
	// stw r26,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r26.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83109c78
	if (ctx.cr6.eq) goto loc_83109C78;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x83109c7c
	goto loc_83109C7C;
loc_83109C78:
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_83109C7C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83109c8c
	if (ctx.cr6.eq) goto loc_83109C8C;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x83109c90
	goto loc_83109C90;
loc_83109C8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83109C90:
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83109ca8
	if (ctx.cr6.eq) goto loc_83109CA8;
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// b 0x83109cac
	goto loc_83109CAC;
loc_83109CA8:
	// stw r19,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r19.u32);
loc_83109CAC:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83109c60
	if (!ctx.cr0.eq) goto loc_83109C60;
	// mulli r10,r29,37
	ctx.r10.s64 = ctx.r29.s64 * 37;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
loc_83109CD4:
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stwx r24,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r24.u32);
	// stwx r22,r5,r30
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, ctx.r22.u32);
	// stwx r11,r4,r30
	PPC_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r11.u32);
	// blt cr6,0x83109d34
	if (ctx.cr6.lt) goto loc_83109D34;
	// beq cr6,0x83109d2c
	if (ctx.cr6.eq) goto loc_83109D2C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83109d24
	if (ctx.cr6.lt) goto loc_83109D24;
	// beq cr6,0x83109d1c
	if (ctx.cr6.eq) goto loc_83109D1C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x83109d54
	if (ctx.cr6.lt) goto loc_83109D54;
	// b 0x83109d38
	goto loc_83109D38;
loc_83109D1C:
	// clrlwi r25,r23,24
	ctx.r25.u64 = ctx.r23.u32 & 0xFF;
	// b 0x83109d38
	goto loc_83109D38;
loc_83109D24:
	// rlwinm r25,r23,24,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 24) & 0xFF;
	// b 0x83109d38
	goto loc_83109D38;
loc_83109D2C:
	// rlwinm r25,r23,16,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFF;
	// b 0x83109d38
	goto loc_83109D38;
loc_83109D34:
	// rlwinm r25,r23,8,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFF;
loc_83109D38:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bne cr6,0x83109d48
	if (!ctx.cr6.eq) goto loc_83109D48;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// b 0x83109d58
	goto loc_83109D58;
loc_83109D48:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r25,2
	ctx.r25.s64 = 2;
	// beq cr6,0x83109d58
	if (ctx.cr6.eq) goto loc_83109D58;
loc_83109D54:
	// li r25,0
	ctx.r25.s64 = 0;
loc_83109D58:
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stwx r25,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r25.u32);
	// blt cr6,0x83109cd4
	if (ctx.cr6.lt) goto loc_83109CD4;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x83109e34
	if (ctx.cr6.eq) goto loc_83109E34;
	// ble cr6,0x83109ddc
	if (!ctx.cr6.gt) goto loc_83109DDC;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bgt cr6,0x83109ddc
	if (ctx.cr6.gt) goto loc_83109DDC;
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83109dac
	if (ctx.cr6.eq) goto loc_83109DAC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-2804
	ctx.r5.s64 = ctx.r11.s64 + -2804;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,742
	ctx.r7.s64 = 742;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109DAC;
	sub_831034D8(ctx, base);
loc_83109DAC:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83109dd4
	if (ctx.cr6.eq) goto loc_83109DD4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-2856
	ctx.r5.s64 = ctx.r11.s64 + -2856;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,743
	ctx.r7.s64 = 743;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109DD4;
	sub_831034D8(ctx, base);
loc_83109DD4:
	// stw r19,196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 196, ctx.r19.u32);
	// b 0x83109e88
	goto loc_83109E88;
loc_83109DDC:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83109e04
	if (ctx.cr6.eq) goto loc_83109E04;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-2908
	ctx.r5.s64 = ctx.r11.s64 + -2908;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,758
	ctx.r7.s64 = 758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109E04;
	sub_831034D8(ctx, base);
loc_83109E04:
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83109e2c
	if (ctx.cr6.eq) goto loc_83109E2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-2804
	ctx.r5.s64 = ctx.r11.s64 + -2804;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109E2C;
	sub_831034D8(ctx, base);
loc_83109E2C:
	// stw r19,204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 204, ctx.r19.u32);
	// b 0x83109e88
	goto loc_83109E88;
loc_83109E34:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83109e5c
	if (ctx.cr6.eq) goto loc_83109E5C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-2908
	ctx.r5.s64 = ctx.r11.s64 + -2908;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,750
	ctx.r7.s64 = 750;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109E5C;
	sub_831034D8(ctx, base);
loc_83109E5C:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83109e84
	if (ctx.cr6.eq) goto loc_83109E84;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-2856
	ctx.r5.s64 = ctx.r11.s64 + -2856;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,751
	ctx.r7.s64 = 751;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109E84;
	sub_831034D8(ctx, base);
loc_83109E84:
	// stw r19,200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 200, ctx.r19.u32);
loc_83109E88:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_83109E90"))) PPC_WEAK_FUNC(sub_83109E90);
PPC_FUNC_IMPL(__imp__sub_83109E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83109E98;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-3176
	ctx.r27.s64 = ctx.r10.s64 + -3176;
	// bne cr6,0x83109ed8
	if (!ctx.cr6.eq) goto loc_83109ED8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109ED8;
	sub_831034D8(ctx, base);
loc_83109ED8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83109efc
	if (!ctx.cr6.eq) goto loc_83109EFC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-2628
	ctx.r5.s64 = ctx.r11.s64 + -2628;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,957
	ctx.r7.s64 = 957;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109EFC;
	sub_831034D8(ctx, base);
loc_83109EFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831094a8
	ctx.lr = 0x83109F04;
	sub_831094A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83109F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83109f44
	if (!ctx.cr0.eq) goto loc_83109F44;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-2696
	ctx.r5.s64 = ctx.r11.s64 + -2696;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109F3C;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83109f6c
	goto loc_83109F6C;
loc_83109F44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831094a8
	ctx.lr = 0x83109F4C;
	sub_831094A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83109F5C;
	sub_82CA2C60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x83108270
	ctx.lr = 0x83109F68;
	sub_83108270(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83109F6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83109F74"))) PPC_WEAK_FUNC(sub_83109F74);
PPC_FUNC_IMPL(__imp__sub_83109F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109F78"))) PPC_WEAK_FUNC(sub_83109F78);
PPC_FUNC_IMPL(__imp__sub_83109F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83109F80;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-2248
	ctx.r27.s64 = ctx.r10.s64 + -2248;
	// bne cr6,0x83109fc8
	if (!ctx.cr6.eq) goto loc_83109FC8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3704
	ctx.r5.s64 = ctx.r11.s64 + -3704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,74
	ctx.r7.s64 = 74;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109FC8;
	sub_831034D8(ctx, base);
loc_83109FC8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x83109fec
	if (!ctx.cr6.eq) goto loc_83109FEC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3716
	ctx.r5.s64 = ctx.r11.s64 + -3716;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,75
	ctx.r7.s64 = 75;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83109FEC;
	sub_831034D8(ctx, base);
loc_83109FEC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8310a010
	if (!ctx.cr6.eq) goto loc_8310A010;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-3188
	ctx.r5.s64 = ctx.r11.s64 + -3188;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A010;
	sub_831034D8(ctx, base);
loc_8310A010:
	// li r4,2704
	ctx.r4.s64 = 2704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8310A020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8310a048
	if (!ctx.cr0.eq) goto loc_8310A048;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-2256
	ctx.r5.s64 = ctx.r11.s64 + -2256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A044;
	sub_831034D8(ctx, base);
	// b 0x8310a098
	goto loc_8310A098;
loc_8310A048:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8310A060:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8310a060
	if (ctx.cr6.lt) goto loc_8310A060;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,1168
	ctx.r10.s64 = ctx.r31.s64 + 1168;
loc_8310A080:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8310a080
	if (ctx.cr6.lt) goto loc_8310A080;
loc_8310A098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310A0A4"))) PPC_WEAK_FUNC(sub_8310A0A4);
PPC_FUNC_IMPL(__imp__sub_8310A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A0A8"))) PPC_WEAK_FUNC(sub_8310A0A8);
PPC_FUNC_IMPL(__imp__sub_8310A0A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,32
	ctx.r10.s64 = 32;
loc_8310A0B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x8310a0b0
	if (!ctx.cr0.eq) goto loc_8310A0B0;
	// addi r11,r3,1168
	ctx.r11.s64 = ctx.r3.s64 + 1168;
	// li r10,128
	ctx.r10.s64 = 128;
loc_8310A0D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x8310a0d0
	if (!ctx.cr0.eq) goto loc_8310A0D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A0EC"))) PPC_WEAK_FUNC(sub_8310A0EC);
PPC_FUNC_IMPL(__imp__sub_8310A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A0F0"))) PPC_WEAK_FUNC(sub_8310A0F0);
PPC_FUNC_IMPL(__imp__sub_8310A0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,3
	ctx.r6.s64 = 3;
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r7,20,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xF00000;
	// not r6,r6
	ctx.r6.u64 = ~ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r6,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// slw r6,r4,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwimi r9,r8,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A158"))) PPC_WEAK_FUNC(sub_8310A158);
PPC_FUNC_IMPL(__imp__sub_8310A158) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mulli r9,r4,36
	ctx.r9.s64 = ctx.r4.s64 * 36;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// slw r31,r8,r5
	ctx.r31.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// slw r3,r3,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
	// rlwinm r31,r31,20,8,11
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0xF00000;
	// slw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// rlwinm r3,r3,12,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & ctx.r31.u64;
	// rlwinm r4,r4,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwimi r4,r31,0,20,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r4.u64 & 0xFF000);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r6,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A1E0"))) PPC_WEAK_FUNC(sub_8310A1E0);
PPC_FUNC_IMPL(__imp__sub_8310A1E0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// rlwimi r10,r9,13,8,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0xFFF000) | (ctx.r10.u64 & 0xFFFFFFFFFF000FFF);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A204"))) PPC_WEAK_FUNC(sub_8310A204);
PPC_FUNC_IMPL(__imp__sub_8310A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A208"))) PPC_WEAK_FUNC(sub_8310A208);
PPC_FUNC_IMPL(__imp__sub_8310A208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x8310A210;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-2248
	ctx.r26.s64 = ctx.r10.s64 + -2248;
	// bne cr6,0x8310a260
	if (!ctx.cr6.eq) goto loc_8310A260;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-2256
	ctx.r5.s64 = ctx.r11.s64 + -2256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,401
	ctx.r7.s64 = 401;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A260;
	sub_831034D8(ctx, base);
loc_8310A260:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8310a284
	if (!ctx.cr6.eq) goto loc_8310A284;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-2136
	ctx.r5.s64 = ctx.r11.s64 + -2136;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,402
	ctx.r7.s64 = 402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A284;
	sub_831034D8(ctx, base);
loc_8310A284:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8310a3fc
	if (ctx.cr6.eq) goto loc_8310A3FC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8310a3fc
	if (ctx.cr6.eq) goto loc_8310A3FC;
	// addi r24,r31,16
	ctx.r24.s64 = ctx.r31.s64 + 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8310A2A0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8310a2b0
	if (ctx.cr0.eq) goto loc_8310A2B0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8310A2B0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bne 0x8310a2a0
	if (!ctx.cr0.eq) goto loc_8310A2A0;
	// addi r25,r31,1168
	ctx.r25.s64 = ctx.r31.s64 + 1168;
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8310A2C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8310a2d8
	if (ctx.cr0.eq) goto loc_8310A2D8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8310A2D8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x8310a2c8
	if (!ctx.cr0.eq) goto loc_8310A2C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8310a2f4
	if (!ctx.cr6.eq) goto loc_8310A2F4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8310a33c
	if (ctx.cr6.eq) goto loc_8310A33C;
loc_8310A2F4:
	// mulli r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 * 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310A314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310a348
	if (!ctx.cr0.eq) goto loc_8310A348;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-2144
	ctx.r5.s64 = ctx.r11.s64 + -2144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A338;
	sub_831034D8(ctx, base);
	// li r23,16
	ctx.r23.s64 = 16;
loc_8310A33C:
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8310a400
	goto loc_8310A400;
loc_8310A348:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// beq cr6,0x8310a3a0
	if (ctx.cr6.eq) goto loc_8310A3A0;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8310A370:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310a394
	if (ctx.cr0.eq) goto loc_8310A394;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8310A38C;
	sub_82CA2C60(ctx, base);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_8310A394:
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8310a370
	if (!ctx.cr6.eq) goto loc_8310A370;
loc_8310A3A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8310a33c
	if (ctx.cr6.eq) goto loc_8310A33C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x8310a33c
	if (ctx.cr6.eq) goto loc_8310A33C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8310A3C8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8310a3f0
	if (ctx.cr0.eq) goto loc_8310A3F0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
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
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8310A3F0:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x8310a3c8
	goto loc_8310A3C8;
loc_8310A3FC:
	// li r3,25
	ctx.r3.s64 = 25;
loc_8310A400:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_8310A408"))) PPC_WEAK_FUNC(sub_8310A408);
PPC_FUNC_IMPL(__imp__sub_8310A408) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8310A424"))) PPC_WEAK_FUNC(sub_8310A424);
PPC_FUNC_IMPL(__imp__sub_8310A424) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A428"))) PPC_WEAK_FUNC(sub_8310A428);
PPC_FUNC_IMPL(__imp__sub_8310A428) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8310a448
	if (ctx.cr6.eq) goto loc_8310A448;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8310a440
	if (ctx.cr6.eq) goto loc_8310A440;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8310A440:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_8310A448:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A450"))) PPC_WEAK_FUNC(sub_8310A450);
PPC_FUNC_IMPL(__imp__sub_8310A450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A458"))) PPC_WEAK_FUNC(sub_8310A458);
PPC_FUNC_IMPL(__imp__sub_8310A458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A464"))) PPC_WEAK_FUNC(sub_8310A464);
PPC_FUNC_IMPL(__imp__sub_8310A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A468"))) PPC_WEAK_FUNC(sub_8310A468);
PPC_FUNC_IMPL(__imp__sub_8310A468) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r4.u32);
	// b 0x83106e48
	sub_83106E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A484"))) PPC_WEAK_FUNC(sub_8310A484);
PPC_FUNC_IMPL(__imp__sub_8310A484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A488"))) PPC_WEAK_FUNC(sub_8310A488);
PPC_FUNC_IMPL(__imp__sub_8310A488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8310A490;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8310a4ec
	if (ctx.cr6.eq) goto loc_8310A4EC;
loc_8310A4AC:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8310a4d0
	if (ctx.cr6.gt) goto loc_8310A4D0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83106fc8
	ctx.lr = 0x8310A4C8;
	sub_83106FC8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8310a4ac
	if (!ctx.cr6.eq) goto loc_8310A4AC;
loc_8310A4D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8310a4ec
	if (ctx.cr6.eq) goto loc_8310A4EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8310a4ec
	if (ctx.cr6.eq) goto loc_8310A4EC;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8310a510
	if (!ctx.cr6.gt) goto loc_8310A510;
loc_8310A4EC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-2016
	ctx.r6.s64 = ctx.r11.s64 + -2016;
	// addi r5,r10,-2076
	ctx.r5.s64 = ctx.r10.s64 + -2076;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A510;
	sub_831034D8(ctx, base);
loc_8310A510:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x83107078
	ctx.lr = 0x8310A51C;
	sub_83107078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8310A524"))) PPC_WEAK_FUNC(sub_8310A524);
PPC_FUNC_IMPL(__imp__sub_8310A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A528"))) PPC_WEAK_FUNC(sub_8310A528);
PPC_FUNC_IMPL(__imp__sub_8310A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310A530;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r8,-4108
	ctx.r26.s64 = ctx.r8.s64 + -4108;
	// addi r29,r9,-18548
	ctx.r29.s64 = ctx.r9.s64 + -18548;
	// addi r25,r10,-1928
	ctx.r25.s64 = ctx.r10.s64 + -1928;
	// addi r28,r11,-2016
	ctx.r28.s64 = ctx.r11.s64 + -2016;
loc_8310A55C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x83106fc8
	ctx.lr = 0x8310A568;
	sub_83106FC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8310a5d0
	if (ctx.cr0.eq) goto loc_8310A5D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8310a584
	if (ctx.cr6.eq) goto loc_8310A584;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8310a59c
	if (!ctx.cr6.gt) goto loc_8310A59C;
loc_8310A584:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A59C;
	sub_831034D8(ctx, base);
loc_8310A59C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x83107078
	ctx.lr = 0x8310A5A8;
	sub_83107078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310b180
	ctx.lr = 0x8310A5B0;
	sub_8310B180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310a5d0
	if (ctx.cr0.eq) goto loc_8310A5D0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A5D0;
	sub_831034D8(ctx, base);
loc_8310A5D0:
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8310a55c
	if (!ctx.cr6.gt) goto loc_8310A55C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310A5EC"))) PPC_WEAK_FUNC(sub_8310A5EC);
PPC_FUNC_IMPL(__imp__sub_8310A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A5F0"))) PPC_WEAK_FUNC(sub_8310A5F0);
PPC_FUNC_IMPL(__imp__sub_8310A5F0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lis r5,-31952
	ctx.r5.s64 = -2094006272;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r10.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// addi r5,r5,32580
	ctx.r5.s64 = ctx.r5.s64 + 32580;
	// stw r9,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r9.u32);
	// li r31,224
	ctx.r31.s64 = 224;
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r11.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r11,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r11.u32);
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// stw r10,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r10.u32);
	// stw r4,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r4.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r10.u32);
	// stw r11,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r11.u32);
	// stw r8,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stw r11,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A678"))) PPC_WEAK_FUNC(sub_8310A678);
PPC_FUNC_IMPL(__imp__sub_8310A678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310A680;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x8310a698
	if (ctx.cr6.eq) goto loc_8310A698;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bne cr6,0x8310ac4c
	if (!ctx.cr6.eq) goto loc_8310AC4C;
loc_8310A698:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8310ac4c
	if (ctx.cr6.eq) goto loc_8310AC4C;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8310ac4c
	if (ctx.cr6.eq) goto loc_8310AC4C;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831037a8
	ctx.lr = 0x8310A6CC;
	sub_831037A8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-2016
	ctx.r26.s64 = ctx.r10.s64 + -2016;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310a704
	if (!ctx.cr6.eq) goto loc_8310A704;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1376
	ctx.r5.s64 = ctx.r11.s64 + -1376;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,291
	ctx.r7.s64 = 291;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A704;
	sub_831034D8(ctx, base);
loc_8310A704:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310a780
	if (ctx.cr6.eq) goto loc_8310A780;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r11,r11,11856
	ctx.r11.s64 = ctx.r11.s64 + 11856;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r28,r11,-1512
	ctx.r28.s64 = ctx.r11.s64 + -1512;
loc_8310A728:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310A740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8310a774
	if (ctx.cr6.eq) goto loc_8310A774;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8310a774
	if (ctx.cr6.eq) goto loc_8310A774;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8310a774
	if (ctx.cr6.eq) goto loc_8310A774;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,306
	ctx.r7.s64 = 306;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A774;
	sub_831034D8(ctx, base);
loc_8310A774:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8310a728
	if (!ctx.cr0.eq) goto loc_8310A728;
loc_8310A780:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x8310a7a8
	if (ctx.cr6.eq) goto loc_8310A7A8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1560
	ctx.r5.s64 = ctx.r11.s64 + -1560;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A7A8;
	sub_831034D8(ctx, base);
loc_8310A7A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310a7d0
	if (!ctx.cr6.eq) goto loc_8310A7D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1596
	ctx.r5.s64 = ctx.r11.s64 + -1596;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A7D0;
	sub_831034D8(ctx, base);
loc_8310A7D0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310a7f8
	if (!ctx.cr6.eq) goto loc_8310A7F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1628
	ctx.r5.s64 = ctx.r11.s64 + -1628;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,317
	ctx.r7.s64 = 317;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A7F8;
	sub_831034D8(ctx, base);
loc_8310A7F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310ac4c
	if (ctx.cr6.eq) goto loc_8310AC4C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8310ac4c
	if (ctx.cr6.eq) goto loc_8310AC4C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,312
	ctx.r4.s64 = 312;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310A820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8310ac4c
	if (ctx.cr0.eq) goto loc_8310AC4C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r30,204
	ctx.r10.s64 = ctx.r30.s64 + 204;
	// addi r6,r11,13672
	ctx.r6.s64 = ctx.r11.s64 + 13672;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8310A838:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8310A848:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8310a848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8310A848;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r6,100
	ctx.r9.s64 = ctx.r6.s64 + 100;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8310a838
	if (ctx.cr6.lt) goto loc_8310A838;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8310A894;
	sub_82CA2C60(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b5118
	ctx.lr = 0x8310A8AC;
	sub_831B5118(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b52b0
	ctx.lr = 0x8310A8C8;
	sub_831B52B0(ctx, base);
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b5448
	ctx.lr = 0x8310A8E4;
	sub_831B5448(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310a910
	if (!ctx.cr6.eq) goto loc_8310A910;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1652
	ctx.r5.s64 = ctx.r11.s64 + -1652;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,382
	ctx.r7.s64 = 382;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A910;
	sub_831034D8(ctx, base);
loc_8310A910:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310a938
	if (!ctx.cr6.eq) goto loc_8310A938;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1680
	ctx.r5.s64 = ctx.r11.s64 + -1680;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,383
	ctx.r7.s64 = 383;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A938;
	sub_831034D8(ctx, base);
loc_8310A938:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310a960
	if (!ctx.cr6.eq) goto loc_8310A960;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1708
	ctx.r5.s64 = ctx.r11.s64 + -1708;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310A960;
	sub_831034D8(ctx, base);
loc_8310A960:
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b2f78
	ctx.lr = 0x8310A974;
	sub_831B2F78(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x8310a5f0
	ctx.lr = 0x8310A980;
	sub_8310A5F0(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83106c08
	ctx.lr = 0x8310A994;
	sub_83106C08(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x831b7658
	ctx.lr = 0x8310A9D8;
	sub_831B7658(ctx, base);
	// stw r3,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,304(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// lwz r28,120(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r25,116(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x831b72c0
	ctx.lr = 0x8310AA28;
	sub_831B72C0(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lwz r7,308(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8310b920
	ctx.lr = 0x8310AA44;
	sub_8310B920(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b42c0
	ctx.lr = 0x8310AA6C;
	sub_831B42C0(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b6330
	ctx.lr = 0x8310AA88;
	sub_831B6330(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8310c328
	ctx.lr = 0x8310AABC;
	sub_8310C328(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b43f0
	ctx.lr = 0x8310AAE4;
	sub_831B43F0(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831b2ae8
	ctx.lr = 0x8310AB00;
	sub_831B2AE8(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310ab2c
	if (!ctx.cr6.eq) goto loc_8310AB2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1728
	ctx.r5.s64 = ctx.r11.s64 + -1728;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,487
	ctx.r7.s64 = 487;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AB2C;
	sub_831034D8(ctx, base);
loc_8310AB2C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310ab54
	if (!ctx.cr6.eq) goto loc_8310AB54;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1748
	ctx.r5.s64 = ctx.r11.s64 + -1748;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,488
	ctx.r7.s64 = 488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AB54;
	sub_831034D8(ctx, base);
loc_8310AB54:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310ab7c
	if (!ctx.cr6.eq) goto loc_8310AB7C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1772
	ctx.r5.s64 = ctx.r11.s64 + -1772;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AB7C;
	sub_831034D8(ctx, base);
loc_8310AB7C:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310aba4
	if (!ctx.cr6.eq) goto loc_8310ABA4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1796
	ctx.r5.s64 = ctx.r11.s64 + -1796;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,490
	ctx.r7.s64 = 490;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310ABA4;
	sub_831034D8(ctx, base);
loc_8310ABA4:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310abcc
	if (!ctx.cr6.eq) goto loc_8310ABCC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1820
	ctx.r5.s64 = ctx.r11.s64 + -1820;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,491
	ctx.r7.s64 = 491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310ABCC;
	sub_831034D8(ctx, base);
loc_8310ABCC:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310abf4
	if (!ctx.cr6.eq) goto loc_8310ABF4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1844
	ctx.r5.s64 = ctx.r11.s64 + -1844;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,492
	ctx.r7.s64 = 492;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310ABF4;
	sub_831034D8(ctx, base);
loc_8310ABF4:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310ac1c
	if (!ctx.cr6.eq) goto loc_8310AC1C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1868
	ctx.r5.s64 = ctx.r11.s64 + -1868;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AC1C;
	sub_831034D8(ctx, base);
loc_8310AC1C:
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310ac44
	if (!ctx.cr6.eq) goto loc_8310AC44;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1888
	ctx.r5.s64 = ctx.r11.s64 + -1888;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,494
	ctx.r7.s64 = 494;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AC44;
	sub_831034D8(ctx, base);
loc_8310AC44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8310ac50
	goto loc_8310AC50;
loc_8310AC4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310AC50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310AC58"))) PPC_WEAK_FUNC(sub_8310AC58);
PPC_FUNC_IMPL(__imp__sub_8310AC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8310AC60;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8310ae30
	if (ctx.cr6.eq) goto loc_8310AE30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8310a528
	ctx.lr = 0x8310AC78;
	sub_8310A528(ctx, base);
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x83106d40
	ctx.lr = 0x8310AC80;
	sub_83106D40(ctx, base);
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x831c1950
	ctx.lr = 0x8310AC88;
	sub_831C1950(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r9,-18548
	ctx.r31.s64 = ctx.r9.s64 + -18548;
	// addi r30,r10,-1336
	ctx.r30.s64 = ctx.r10.s64 + -1336;
	// addi r29,r11,-2016
	ctx.r29.s64 = ctx.r11.s64 + -2016;
	// beq 0x8310acc0
	if (ctx.cr0.eq) goto loc_8310ACC0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,546
	ctx.r7.s64 = 546;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310ACC0;
	sub_831034D8(ctx, base);
loc_8310ACC0:
	// lwz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x831b6028
	ctx.lr = 0x8310ACC8;
	sub_831B6028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310ace8
	if (ctx.cr0.eq) goto loc_8310ACE8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,549
	ctx.r7.s64 = 549;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310ACE8;
	sub_831034D8(ctx, base);
loc_8310ACE8:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x831b45a0
	ctx.lr = 0x8310ACF0;
	sub_831B45A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310ad10
	if (ctx.cr0.eq) goto loc_8310AD10;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,552
	ctx.r7.s64 = 552;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AD10;
	sub_831034D8(ctx, base);
loc_8310AD10:
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x8310bbf0
	ctx.lr = 0x8310AD18;
	sub_8310BBF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310ad38
	if (ctx.cr0.eq) goto loc_8310AD38;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AD38;
	sub_831034D8(ctx, base);
loc_8310AD38:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x831c1950
	ctx.lr = 0x8310AD40;
	sub_831C1950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310ad60
	if (ctx.cr0.eq) goto loc_8310AD60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,558
	ctx.r7.s64 = 558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AD60;
	sub_831034D8(ctx, base);
loc_8310AD60:
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// bl 0x8310b3a0
	ctx.lr = 0x8310AD68;
	sub_8310B3A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310ad88
	if (ctx.cr0.eq) goto loc_8310AD88;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AD88;
	sub_831034D8(ctx, base);
loc_8310AD88:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x831b70f0
	ctx.lr = 0x8310AD90;
	sub_831B70F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310adb0
	if (ctx.cr0.eq) goto loc_8310ADB0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310ADB0;
	sub_831034D8(ctx, base);
loc_8310ADB0:
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// bl 0x831b7960
	ctx.lr = 0x8310ADB8;
	sub_831B7960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310add8
	if (ctx.cr0.eq) goto loc_8310ADD8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,567
	ctx.r7.s64 = 567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310ADD8;
	sub_831034D8(ctx, base);
loc_8310ADD8:
	// lwz r3,92(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// bl 0x831b30d0
	ctx.lr = 0x8310ADE0;
	sub_831B30D0(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x831b4a48
	ctx.lr = 0x8310ADE8;
	sub_831B4A48(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831b4c98
	ctx.lr = 0x8310ADF0;
	sub_831B4C98(ctx, base);
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x831b4ed8
	ctx.lr = 0x8310ADF8;
	sub_831B4ED8(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310AE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8310ae2c
	if (ctx.cr0.eq) goto loc_8310AE2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AE2C;
	sub_831034D8(ctx, base);
loc_8310AE2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8310AE30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8310AE38"))) PPC_WEAK_FUNC(sub_8310AE38);
PPC_FUNC_IMPL(__imp__sub_8310AE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8310AE40;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-1144
	ctx.r27.s64 = ctx.r10.s64 + -1144;
	// bne cr6,0x8310ae80
	if (!ctx.cr6.eq) goto loc_8310AE80;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-4216
	ctx.r5.s64 = ctx.r11.s64 + -4216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AE80;
	sub_831034D8(ctx, base);
loc_8310AE80:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8310aea4
	if (!ctx.cr6.eq) goto loc_8310AEA4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-1164
	ctx.r5.s64 = ctx.r11.s64 + -1164;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,133
	ctx.r7.s64 = 133;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AEA4;
	sub_831034D8(ctx, base);
loc_8310AEA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8310afc8
	if (ctx.cr6.eq) goto loc_8310AFC8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8310afc8
	if (ctx.cr6.eq) goto loc_8310AFC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x8310AEBC;
	sub_829CE870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310AED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8310afc8
	if (ctx.cr0.eq) goto loc_8310AFC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310af14
	if (!ctx.cr6.eq) goto loc_8310AF14;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-1200
	ctx.r5.s64 = ctx.r11.s64 + -1200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AF14;
	sub_831034D8(ctx, base);
loc_8310AF14:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310af3c
	if (!ctx.cr6.eq) goto loc_8310AF3C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-1240
	ctx.r5.s64 = ctx.r11.s64 + -1240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,170
	ctx.r7.s64 = 170;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AF3C;
	sub_831034D8(ctx, base);
loc_8310AF3C:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310af64
	if (!ctx.cr6.eq) goto loc_8310AF64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-1276
	ctx.r5.s64 = ctx.r11.s64 + -1276;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,171
	ctx.r7.s64 = 171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AF64;
	sub_831034D8(ctx, base);
loc_8310AF64:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310af8c
	if (!ctx.cr6.eq) goto loc_8310AF8C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-1316
	ctx.r5.s64 = ctx.r11.s64 + -1316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,172
	ctx.r7.s64 = 172;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310AF8C;
	sub_831034D8(ctx, base);
loc_8310AF8C:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8310AF9C;
	sub_82CA2C60(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83106c08
	ctx.lr = 0x8310AFB0;
	sub_83106C08(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310a468
	ctx.lr = 0x8310AFC0;
	sub_8310A468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8310afcc
	goto loc_8310AFCC;
loc_8310AFC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310AFCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8310AFD4"))) PPC_WEAK_FUNC(sub_8310AFD4);
PPC_FUNC_IMPL(__imp__sub_8310AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310AFD8"))) PPC_WEAK_FUNC(sub_8310AFD8);
PPC_FUNC_IMPL(__imp__sub_8310AFD8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
	// b 0x83106e48
	sub_83106E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310AFF4"))) PPC_WEAK_FUNC(sub_8310AFF4);
PPC_FUNC_IMPL(__imp__sub_8310AFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310AFF8"))) PPC_WEAK_FUNC(sub_8310AFF8);
PPC_FUNC_IMPL(__imp__sub_8310AFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8310B000;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-1144
	ctx.r26.s64 = ctx.r10.s64 + -1144;
	// bne cr6,0x8310b048
	if (!ctx.cr6.eq) goto loc_8310B048;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4084
	ctx.r5.s64 = ctx.r11.s64 + -4084;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,301
	ctx.r7.s64 = 301;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B048;
	sub_831034D8(ctx, base);
loc_8310B048:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8310b094
	if (ctx.cr6.eq) goto loc_8310B094;
loc_8310B050:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8310b078
	if (ctx.cr6.gt) goto loc_8310B078;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83106fc8
	ctx.lr = 0x8310B06C;
	sub_83106FC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8310b050
	if (!ctx.cr6.eq) goto loc_8310B050;
loc_8310B078:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8310b094
	if (!ctx.cr6.eq) goto loc_8310B094;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8310b094
	if (ctx.cr6.eq) goto loc_8310B094;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8310b0b0
	if (!ctx.cr6.gt) goto loc_8310B0B0;
loc_8310B094:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-1056
	ctx.r5.s64 = ctx.r11.s64 + -1056;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B0B0;
	sub_831034D8(ctx, base);
loc_8310B0B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x83107078
	ctx.lr = 0x8310B0BC;
	sub_83107078(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8310B0C4"))) PPC_WEAK_FUNC(sub_8310B0C4);
PPC_FUNC_IMPL(__imp__sub_8310B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B0C8"))) PPC_WEAK_FUNC(sub_8310B0C8);
PPC_FUNC_IMPL(__imp__sub_8310B0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310B0D0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r8,-4108
	ctx.r27.s64 = ctx.r8.s64 + -4108;
	// addi r31,r9,-18548
	ctx.r31.s64 = ctx.r9.s64 + -18548;
	// addi r26,r10,-996
	ctx.r26.s64 = ctx.r10.s64 + -996;
	// addi r30,r11,-1144
	ctx.r30.s64 = ctx.r11.s64 + -1144;
loc_8310B0FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// bl 0x83106fc8
	ctx.lr = 0x8310B108;
	sub_83106FC8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8310b164
	if (ctx.cr0.eq) goto loc_8310B164;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8310b124
	if (ctx.cr6.eq) goto loc_8310B124;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8310b13c
	if (!ctx.cr6.gt) goto loc_8310B13C;
loc_8310B124:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,340
	ctx.r7.s64 = 340;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B13C;
	sub_831034D8(ctx, base);
loc_8310B13C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83106860
	ctx.lr = 0x8310B144;
	sub_83106860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310b164
	if (ctx.cr0.eq) goto loc_8310B164;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,345
	ctx.r7.s64 = 345;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B164;
	sub_831034D8(ctx, base);
loc_8310B164:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8310b0fc
	if (!ctx.cr6.gt) goto loc_8310B0FC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310B180"))) PPC_WEAK_FUNC(sub_8310B180);
PPC_FUNC_IMPL(__imp__sub_8310B180) {
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
	// bne cr6,0x8310b1a4
	if (!ctx.cr6.eq) goto loc_8310B1A4;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x8310b210
	goto loc_8310B210;
loc_8310B1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b0c8
	ctx.lr = 0x8310B1AC;
	sub_8310B0C8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83106d40
	ctx.lr = 0x8310B1B4;
	sub_83106D40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8310a488
	ctx.lr = 0x8310B1C0;
	sub_8310A488(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x829ce870
	ctx.lr = 0x8310B1C8;
	sub_829CE870(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310B1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8310b20c
	if (ctx.cr0.eq) goto loc_8310B20C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-1144
	ctx.r6.s64 = ctx.r11.s64 + -1144;
	// addi r5,r10,-1336
	ctx.r5.s64 = ctx.r10.s64 + -1336;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,253
	ctx.r7.s64 = 253;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B20C;
	sub_831034D8(ctx, base);
loc_8310B20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8310B210:
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

__attribute__((alias("__imp__sub_8310B224"))) PPC_WEAK_FUNC(sub_8310B224);
PPC_FUNC_IMPL(__imp__sub_8310B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B228"))) PPC_WEAK_FUNC(sub_8310B228);
PPC_FUNC_IMPL(__imp__sub_8310B228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310B230;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-928
	ctx.r27.s64 = ctx.r10.s64 + -928;
	// bne cr6,0x8310b270
	if (!ctx.cr6.eq) goto loc_8310B270;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-944
	ctx.r5.s64 = ctx.r11.s64 + -944;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,193
	ctx.r7.s64 = 193;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B270;
	sub_831034D8(ctx, base);
loc_8310B270:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8310b294
	if (!ctx.cr6.eq) goto loc_8310B294;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-952
	ctx.r5.s64 = ctx.r11.s64 + -952;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,194
	ctx.r7.s64 = 194;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B294;
	sub_831034D8(ctx, base);
loc_8310B294:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8310b304
	if (ctx.cr6.eq) goto loc_8310B304;
	// bl 0x831083a0
	ctx.lr = 0x8310B2A4;
	sub_831083A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8310b2fc
	if (ctx.cr0.eq) goto loc_8310B2FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r26,r11,-4112
	ctx.r26.s64 = ctx.r11.s64 + -4112;
loc_8310B2B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831086a8
	ctx.lr = 0x8310B2BC;
	sub_831086A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310b2dc
	if (!ctx.cr0.eq) goto loc_8310B2DC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,203
	ctx.r7.s64 = 203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B2DC;
	sub_831034D8(ctx, base);
loc_8310B2DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108ac8
	ctx.lr = 0x8310B2E4;
	sub_83108AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108670
	ctx.lr = 0x8310B2EC;
	sub_83108670(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x831083a0
	ctx.lr = 0x8310B2F4;
	sub_831083A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8310b2b4
	if (!ctx.cr0.eq) goto loc_8310B2B4;
loc_8310B2FC:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83107ee8
	ctx.lr = 0x8310B304;
	sub_83107EE8(ctx, base);
loc_8310B304:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8310b320
	if (ctx.cr6.eq) goto loc_8310B320;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310B320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8310B320:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x831b49e0
	ctx.lr = 0x8310B32C;
	sub_831B49E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310B334"))) PPC_WEAK_FUNC(sub_8310B334);
PPC_FUNC_IMPL(__imp__sub_8310B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B338"))) PPC_WEAK_FUNC(sub_8310B338);
PPC_FUNC_IMPL(__imp__sub_8310B338) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8310b37c
	if (!ctx.cr6.eq) goto loc_8310B37C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-928
	ctx.r6.s64 = ctx.r11.s64 + -928;
	// addi r5,r10,-944
	ctx.r5.s64 = ctx.r10.s64 + -944;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,250
	ctx.r7.s64 = 250;
	// bl 0x831034d8
	ctx.lr = 0x8310B37C;
	sub_831034D8(ctx, base);
loc_8310B37C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b7c00
	ctx.lr = 0x8310B388;
	sub_831B7C00(ctx, base);
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

__attribute__((alias("__imp__sub_8310B3A0"))) PPC_WEAK_FUNC(sub_8310B3A0);
PPC_FUNC_IMPL(__imp__sub_8310B3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8310B3A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r10,-18548
	ctx.r27.s64 = ctx.r10.s64 + -18548;
	// addi r26,r11,-928
	ctx.r26.s64 = ctx.r11.s64 + -928;
	// bne cr6,0x8310b3e4
	if (!ctx.cr6.eq) goto loc_8310B3E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-944
	ctx.r5.s64 = ctx.r11.s64 + -944;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B3E4;
	sub_831034D8(ctx, base);
loc_8310B3E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310b474
	if (ctx.cr6.eq) goto loc_8310B474;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310b474
	if (ctx.cr6.eq) goto loc_8310B474;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8310b474
	if (!ctx.cr6.gt) goto loc_8310B474;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r28,r11,-952
	ctx.r28.s64 = ctx.r11.s64 + -952;
loc_8310B414:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b7ce0
	ctx.lr = 0x8310B420;
	sub_831B7CE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8310b464
	if (ctx.cr0.eq) goto loc_8310B464;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831b80e8
	ctx.lr = 0x8310B438;
	sub_831B80E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310b458
	if (!ctx.cr0.eq) goto loc_8310B458;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,423
	ctx.r7.s64 = 423;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B458;
	sub_831034D8(ctx, base);
loc_8310B458:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b228
	ctx.lr = 0x8310B464;
	sub_8310B228(ctx, base);
loc_8310B464:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310b414
	if (ctx.cr6.lt) goto loc_8310B414;
loc_8310B474:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8310b484
	if (ctx.cr6.eq) goto loc_8310B484;
	// bl 0x831b7ab8
	ctx.lr = 0x8310B484;
	sub_831B7AB8(ctx, base);
loc_8310B484:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8310b494
	if (ctx.cr6.eq) goto loc_8310B494;
	// bl 0x831b7e90
	ctx.lr = 0x8310B494;
	sub_831B7E90(ctx, base);
loc_8310B494:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8310b4a4
	if (ctx.cr6.eq) goto loc_8310B4A4;
	// bl 0x831b4870
	ctx.lr = 0x8310B4A4;
	sub_831B4870(ctx, base);
loc_8310B4A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310B4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8310B4C4"))) PPC_WEAK_FUNC(sub_8310B4C4);
PPC_FUNC_IMPL(__imp__sub_8310B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B4C8"))) PPC_WEAK_FUNC(sub_8310B4C8);
PPC_FUNC_IMPL(__imp__sub_8310B4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8310B4D0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-928
	ctx.r27.s64 = ctx.r10.s64 + -928;
	// bne cr6,0x8310b514
	if (!ctx.cr6.eq) goto loc_8310B514;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-944
	ctx.r5.s64 = ctx.r11.s64 + -944;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,575
	ctx.r7.s64 = 575;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B514;
	sub_831034D8(ctx, base);
loc_8310B514:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b7c00
	ctx.lr = 0x8310B520;
	sub_831B7C00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8310b5f8
	if (ctx.cr0.eq) goto loc_8310B5F8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8310b550
	if (ctx.cr6.gt) goto loc_8310B550;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-840
	ctx.r5.s64 = ctx.r11.s64 + -840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,589
	ctx.r7.s64 = 589;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B550;
	sub_831034D8(ctx, base);
loc_8310B550:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bne 0x8310b5e0
	if (!ctx.cr0.eq) goto loc_8310B5E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b7ce0
	ctx.lr = 0x8310B56C;
	sub_831B7CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r11,-952
	ctx.r29.s64 = ctx.r11.s64 + -952;
	// bne 0x8310b594
	if (!ctx.cr0.eq) goto loc_8310B594;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,600
	ctx.r7.s64 = 600;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B594;
	sub_831034D8(ctx, base);
loc_8310B594:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831b80e8
	ctx.lr = 0x8310B5A4;
	sub_831B80E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310b5c4
	if (!ctx.cr0.eq) goto loc_8310B5C4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,608
	ctx.r7.s64 = 608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B5C4;
	sub_831034D8(ctx, base);
loc_8310B5C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b228
	ctx.lr = 0x8310B5D0;
	sub_8310B228(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8310b5f0
	if (ctx.cr6.eq) goto loc_8310B5F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8310b5ec
	goto loc_8310B5EC;
loc_8310B5E0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8310b5f0
	if (ctx.cr6.eq) goto loc_8310B5F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310B5EC:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8310B5F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310b5fc
	goto loc_8310B5FC;
loc_8310B5F8:
	// li r3,19
	ctx.r3.s64 = 19;
loc_8310B5FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8310B604"))) PPC_WEAK_FUNC(sub_8310B604);
PPC_FUNC_IMPL(__imp__sub_8310B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B608"))) PPC_WEAK_FUNC(sub_8310B608);
PPC_FUNC_IMPL(__imp__sub_8310B608) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8310b64c
	if (!ctx.cr6.eq) goto loc_8310B64C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-928
	ctx.r6.s64 = ctx.r11.s64 + -928;
	// addi r5,r10,-944
	ctx.r5.s64 = ctx.r10.s64 + -944;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,662
	ctx.r7.s64 = 662;
	// bl 0x831034d8
	ctx.lr = 0x8310B64C;
	sub_831034D8(ctx, base);
loc_8310B64C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b338
	ctx.lr = 0x8310B658;
	sub_8310B338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8310b668
	if (ctx.cr0.eq) goto loc_8310B668;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8310b66c
	goto loc_8310B66C;
loc_8310B668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310B66C:
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

__attribute__((alias("__imp__sub_8310B684"))) PPC_WEAK_FUNC(sub_8310B684);
PPC_FUNC_IMPL(__imp__sub_8310B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B688"))) PPC_WEAK_FUNC(sub_8310B688);
PPC_FUNC_IMPL(__imp__sub_8310B688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8310B690;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-928
	ctx.r29.s64 = ctx.r10.s64 + -928;
	// bne cr6,0x8310b6d4
	if (!ctx.cr6.eq) goto loc_8310B6D4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-944
	ctx.r5.s64 = ctx.r11.s64 + -944;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,747
	ctx.r7.s64 = 747;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B6D4;
	sub_831034D8(ctx, base);
loc_8310B6D4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8310b6f8
	if (!ctx.cr6.eq) goto loc_8310B6F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4112
	ctx.r5.s64 = ctx.r11.s64 + -4112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,748
	ctx.r7.s64 = 748;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B6F8;
	sub_831034D8(ctx, base);
loc_8310B6F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b338
	ctx.lr = 0x8310B704;
	sub_8310B338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310b72c
	if (!ctx.cr0.eq) goto loc_8310B72C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-952
	ctx.r5.s64 = ctx.r11.s64 + -952;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,756
	ctx.r7.s64 = 756;
	// bl 0x831034d8
	ctx.lr = 0x8310B724;
	sub_831034D8(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8310b760
	goto loc_8310B760;
loc_8310B72C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83108270
	ctx.lr = 0x8310B738;
	sub_83108270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x8310b760
	if (!ctx.cr0.eq) goto loc_8310B760;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-816
	ctx.r5.s64 = ctx.r11.s64 + -816;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,766
	ctx.r7.s64 = 766;
	// bl 0x831034d8
	ctx.lr = 0x8310B75C;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
loc_8310B760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8310B768"))) PPC_WEAK_FUNC(sub_8310B768);
PPC_FUNC_IMPL(__imp__sub_8310B768) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8310b7ac
	if (!ctx.cr6.eq) goto loc_8310B7AC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-928
	ctx.r6.s64 = ctx.r11.s64 + -928;
	// addi r5,r10,-944
	ctx.r5.s64 = ctx.r10.s64 + -944;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,798
	ctx.r7.s64 = 798;
	// bl 0x831034d8
	ctx.lr = 0x8310B7AC;
	sub_831034D8(ctx, base);
loc_8310B7AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b338
	ctx.lr = 0x8310B7B8;
	sub_8310B338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8310b7c8
	if (ctx.cr0.eq) goto loc_8310B7C8;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8310b7cc
	goto loc_8310B7CC;
loc_8310B7C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310B7CC:
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

__attribute__((alias("__imp__sub_8310B7E4"))) PPC_WEAK_FUNC(sub_8310B7E4);
PPC_FUNC_IMPL(__imp__sub_8310B7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B7E8"))) PPC_WEAK_FUNC(sub_8310B7E8);
PPC_FUNC_IMPL(__imp__sub_8310B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8310B7F0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-928
	ctx.r27.s64 = ctx.r10.s64 + -928;
	// bne cr6,0x8310b834
	if (!ctx.cr6.eq) goto loc_8310B834;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-944
	ctx.r5.s64 = ctx.r11.s64 + -944;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,113
	ctx.r7.s64 = 113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B834;
	sub_831034D8(ctx, base);
loc_8310B834:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831b48e0
	ctx.lr = 0x8310B83C;
	sub_831B48E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310b868
	if (!ctx.cr0.eq) goto loc_8310B868;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-760
	ctx.r5.s64 = ctx.r11.s64 + -760;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,121
	ctx.r7.s64 = 121;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B860;
	sub_831034D8(ctx, base);
loc_8310B860:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310b918
	goto loc_8310B918;
loc_8310B868:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r29,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310B8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310b8d8
	if (!ctx.cr0.eq) goto loc_8310B8D8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r5,r11,-780
	ctx.r5.s64 = ctx.r11.s64 + -780;
loc_8310B8B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B8C8;
	sub_831034D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b228
	ctx.lr = 0x8310B8D4;
	sub_8310B228(ctx, base);
	// b 0x8310b860
	goto loc_8310B860;
loc_8310B8D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8310B8E4;
	sub_82CA2C60(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831087e0
	ctx.lr = 0x8310B8F8;
	sub_831087E0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310b914
	if (!ctx.cr0.eq) goto loc_8310B914;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,155
	ctx.r7.s64 = 155;
	// addi r5,r11,-800
	ctx.r5.s64 = ctx.r11.s64 + -800;
	// b 0x8310b8b8
	goto loc_8310B8B8;
loc_8310B914:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8310B918:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8310B920"))) PPC_WEAK_FUNC(sub_8310B920);
PPC_FUNC_IMPL(__imp__sub_8310B920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8310B928;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-928
	ctx.r26.s64 = ctx.r10.s64 + -928;
	// bne cr6,0x8310b974
	if (!ctx.cr6.eq) goto loc_8310B974;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3704
	ctx.r5.s64 = ctx.r11.s64 + -3704;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,298
	ctx.r7.s64 = 298;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B974;
	sub_831034D8(ctx, base);
loc_8310B974:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8310b998
	if (!ctx.cr6.eq) goto loc_8310B998;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3716
	ctx.r5.s64 = ctx.r11.s64 + -3716;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,299
	ctx.r7.s64 = 299;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B998;
	sub_831034D8(ctx, base);
loc_8310B998:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8310b9bc
	if (!ctx.cr6.eq) goto loc_8310B9BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-3204
	ctx.r5.s64 = ctx.r11.s64 + -3204;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B9BC;
	sub_831034D8(ctx, base);
loc_8310B9BC:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8310B9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8310b9f8
	if (!ctx.cr0.eq) goto loc_8310B9F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-684
	ctx.r5.s64 = ctx.r11.s64 + -684;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,308
	ctx.r7.s64 = 308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310B9F0;
	sub_831034D8(ctx, base);
loc_8310B9F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310bac4
	goto loc_8310BAC4;
loc_8310B9F8:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831b47b0
	ctx.lr = 0x8310BA1C;
	sub_831B47B0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310ba50
	if (!ctx.cr0.eq) goto loc_8310BA50;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,326
	ctx.r7.s64 = 326;
	// addi r5,r11,-712
	ctx.r5.s64 = ctx.r11.s64 + -712;
loc_8310BA34:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BA44;
	sub_831034D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b3a0
	ctx.lr = 0x8310BA4C;
	sub_8310B3A0(ctx, base);
	// b 0x8310b9f0
	goto loc_8310B9F0;
loc_8310BA50:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831b79c8
	ctx.lr = 0x8310BA68;
	sub_831B79C8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310ba84
	if (!ctx.cr0.eq) goto loc_8310BA84;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r5,r11,-732
	ctx.r5.s64 = ctx.r11.s64 + -732;
	// b 0x8310ba34
	goto loc_8310BA34;
loc_8310BA84:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831b7d80
	ctx.lr = 0x8310BA9C;
	sub_831B7D80(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310bab8
	if (!ctx.cr0.eq) goto loc_8310BAB8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,352
	ctx.r7.s64 = 352;
	// addi r5,r11,-748
	ctx.r5.s64 = ctx.r11.s64 + -748;
	// b 0x8310ba34
	goto loc_8310BA34;
loc_8310BAB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8310BAC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8310BACC"))) PPC_WEAK_FUNC(sub_8310BACC);
PPC_FUNC_IMPL(__imp__sub_8310BACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310BAD0"))) PPC_WEAK_FUNC(sub_8310BAD0);
PPC_FUNC_IMPL(__imp__sub_8310BAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310BAD8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rlwinm r28,r30,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// addi r26,r10,-928
	ctx.r26.s64 = ctx.r10.s64 + -928;
	// bne cr6,0x8310bb24
	if (!ctx.cr6.eq) goto loc_8310BB24;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-944
	ctx.r5.s64 = ctx.r11.s64 + -944;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BB24;
	sub_831034D8(ctx, base);
loc_8310BB24:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831b7ff0
	ctx.lr = 0x8310BB34;
	sub_831B7FF0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310bb54
	if (ctx.cr0.eq) goto loc_8310BB54;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// b 0x8310bbe4
	goto loc_8310BBE4;
loc_8310BB54:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b7e8
	ctx.lr = 0x8310BB64;
	sub_8310B7E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310bb90
	if (!ctx.cr0.eq) goto loc_8310BB90;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-760
	ctx.r5.s64 = ctx.r11.s64 + -760;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,521
	ctx.r7.s64 = 521;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BB88;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8310bbe8
	goto loc_8310BBE8;
loc_8310BB90:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b7b58
	ctx.lr = 0x8310BBA0;
	sub_831B7B58(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831b7f30
	ctx.lr = 0x8310BBB4;
	sub_831B7F30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8310bbdc
	if (ctx.cr6.gt) goto loc_8310BBDC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-676
	ctx.r5.s64 = ctx.r11.s64 + -676;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,535
	ctx.r7.s64 = 535;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BBDC;
	sub_831034D8(ctx, base);
loc_8310BBDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8310BBE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310BBE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310BBF0"))) PPC_WEAK_FUNC(sub_8310BBF0);
PPC_FUNC_IMPL(__imp__sub_8310BBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310BBF8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-18548
	ctx.r30.s64 = ctx.r11.s64 + -18548;
	// addi r29,r10,-616
	ctx.r29.s64 = ctx.r10.s64 + -616;
	// bne cr6,0x8310bc34
	if (!ctx.cr6.eq) goto loc_8310BC34;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-632
	ctx.r5.s64 = ctx.r11.s64 + -632;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BC34;
	sub_831034D8(ctx, base);
loc_8310BC34:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831b3138
	ctx.lr = 0x8310BC40;
	sub_831B3138(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x831b5730
	ctx.lr = 0x8310BC4C;
	sub_831B5730(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x831b5730
	ctx.lr = 0x8310BC54;
	sub_831B5730(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r28,r11,-652
	ctx.r28.s64 = ctx.r11.s64 + -652;
	// bne cr6,0x8310bc90
	if (!ctx.cr6.eq) goto loc_8310BC90;
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,1436(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1436);
	// lwz r25,1444(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1444);
	// bl 0x831c60b8
	ctx.lr = 0x8310BC7C;
	sub_831C60B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8310BC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8310bcc0
	goto loc_8310BCC0;
loc_8310BC90:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8310bcc0
	if (ctx.cr6.eq) goto loc_8310BCC0;
	// bl 0x831c1950
	ctx.lr = 0x8310BCA0;
	sub_831C1950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310bcc0
	if (ctx.cr0.eq) goto loc_8310BCC0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,293
	ctx.r7.s64 = 293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BCC0;
	sub_831034D8(ctx, base);
loc_8310BCC0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8310BCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8310bcf4
	if (ctx.cr0.eq) goto loc_8310BCF4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BCF4;
	sub_831034D8(ctx, base);
loc_8310BCF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310BD00"))) PPC_WEAK_FUNC(sub_8310BD00);
PPC_FUNC_IMPL(__imp__sub_8310BD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8310BD08;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831b3138
	ctx.lr = 0x8310BD2C;
	sub_831B3138(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108de0
	ctx.lr = 0x8310BD3C;
	sub_83108DE0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8310b608
	ctx.lr = 0x8310BD4C;
	sub_8310B608(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8310bd80
	if (!ctx.cr0.eq) goto loc_8310BD80;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r7,350
	ctx.r7.s64 = 350;
	// addi r5,r10,-400
	ctx.r5.s64 = ctx.r10.s64 + -400;
loc_8310BD60:
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// addi r6,r11,-616
	ctx.r6.s64 = ctx.r11.s64 + -616;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310BD78;
	sub_831034D8(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8310bfc0
	goto loc_8310BFC0;
loc_8310BD80:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108de0
	ctx.lr = 0x8310BD8C;
	sub_83108DE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8310b608
	ctx.lr = 0x8310BD9C;
	sub_8310B608(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8310bdb4
	if (!ctx.cr0.eq) goto loc_8310BDB4;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r7,359
	ctx.r7.s64 = 359;
	// addi r5,r10,-416
	ctx.r5.s64 = ctx.r10.s64 + -416;
	// b 0x8310bd60
	goto loc_8310BD60;
loc_8310BDB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831b6bc0
	ctx.lr = 0x8310BDC0;
	sub_831B6BC0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310bdf4
	if (!ctx.cr0.eq) goto loc_8310BDF4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-616
	ctx.r6.s64 = ctx.r11.s64 + -616;
	// addi r5,r10,-464
	ctx.r5.s64 = ctx.r10.s64 + -464;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,370
	ctx.r7.s64 = 370;
	// bl 0x831034d8
	ctx.lr = 0x8310BDEC;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8310bfc0
	goto loc_8310BFC0;
loc_8310BDF4:
	// bl 0x831c8fe8
	ctx.lr = 0x8310BDF8;
	sub_831C8FE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83108e50
	ctx.lr = 0x8310BE00;
	sub_83108E50(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8f90
	ctx.lr = 0x8310BE08;
	sub_831C8F90(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83108e50
	ctx.lr = 0x8310BE10;
	sub_83108E50(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8310bf40
	if (!ctx.cr6.eq) goto loc_8310BF40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b6788
	ctx.lr = 0x8310BE28;
	sub_831B6788(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310bfb0
	if (!ctx.cr0.eq) goto loc_8310BFB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b6918
	ctx.lr = 0x8310BE40;
	sub_831B6918(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310bf08
	if (!ctx.cr0.eq) goto loc_8310BF08;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8310a0a8
	ctx.lr = 0x8310BE50;
	sub_8310A0A8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8310a0a8
	ctx.lr = 0x8310BE58;
	sub_8310A0A8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r23,40(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x831c8fe8
	ctx.lr = 0x8310BE64;
	sub_831C8FE8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83108f08
	ctx.lr = 0x8310BE6C;
	sub_83108F08(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r23,44(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x831c8f90
	ctx.lr = 0x8310BE78;
	sub_831C8F90(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83108f08
	ctx.lr = 0x8310BE80;
	sub_83108F08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-492
	ctx.r4.s64 = ctx.r11.s64 + -492;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829ce870
	ctx.lr = 0x8310BE94;
	sub_829CE870(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-520
	ctx.r4.s64 = ctx.r11.s64 + -520;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829ce870
	ctx.lr = 0x8310BEA8;
	sub_829CE870(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8f90
	ctx.lr = 0x8310BEB0;
	sub_831C8F90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8fe8
	ctx.lr = 0x8310BEBC;
	sub_831C8FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x831c6f68
	ctx.lr = 0x8310BED8;
	sub_831C6F68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310bfc0
	if (!ctx.cr0.eq) goto loc_8310BFC0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8fe8
	ctx.lr = 0x8310BEE8;
	sub_831C8FE8(ctx, base);
	// bl 0x83109b20
	ctx.lr = 0x8310BEEC;
	sub_83109B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310bfc0
	if (!ctx.cr0.eq) goto loc_8310BFC0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8f90
	ctx.lr = 0x8310BEFC;
	sub_831C8F90(ctx, base);
	// bl 0x83109b20
	ctx.lr = 0x8310BF00;
	sub_83109B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310bfc0
	if (!ctx.cr0.eq) goto loc_8310BFC0;
loc_8310BF08:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c9ca8
	ctx.lr = 0x8310BF10;
	sub_831C9CA8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c9d30
	ctx.lr = 0x8310BF18;
	sub_831C9D30(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8fe8
	ctx.lr = 0x8310BF20;
	sub_831C8FE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8f90
	ctx.lr = 0x8310BF2C;
	sub_831C8F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831b6128
	ctx.lr = 0x8310BF3C;
	sub_831B6128(ctx, base);
	// b 0x8310bfb0
	goto loc_8310BFB0;
loc_8310BF40:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8310a0a8
	ctx.lr = 0x8310BF48;
	sub_8310A0A8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8310a0a8
	ctx.lr = 0x8310BF50;
	sub_8310A0A8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x831c8fe8
	ctx.lr = 0x8310BF5C;
	sub_831C8FE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83108f08
	ctx.lr = 0x8310BF64;
	sub_83108F08(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x831c8f90
	ctx.lr = 0x8310BF70;
	sub_831C8F90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83108f08
	ctx.lr = 0x8310BF78;
	sub_83108F08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831c5330
	ctx.lr = 0x8310BF88;
	sub_831C5330(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8fe8
	ctx.lr = 0x8310BF90;
	sub_831C8FE8(ctx, base);
	// bl 0x83109b20
	ctx.lr = 0x8310BF94;
	sub_83109B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310bfc0
	if (!ctx.cr0.eq) goto loc_8310BFC0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8f90
	ctx.lr = 0x8310BFA4;
	sub_831C8F90(ctx, base);
	// bl 0x83109b20
	ctx.lr = 0x8310BFA8;
	sub_83109B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310bfc0
	if (!ctx.cr0.eq) goto loc_8310BFC0;
loc_8310BFB0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831c8018
	ctx.lr = 0x8310BFBC;
	sub_831C8018(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310BFC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8310BFC8"))) PPC_WEAK_FUNC(sub_8310BFC8);
PPC_FUNC_IMPL(__imp__sub_8310BFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310BFD0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x831b6bc0
	ctx.lr = 0x8310BFF8;
	sub_831B6BC0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8310c02c
	if (!ctx.cr0.eq) goto loc_8310C02C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-616
	ctx.r6.s64 = ctx.r11.s64 + -616;
	// addi r5,r10,-464
	ctx.r5.s64 = ctx.r10.s64 + -464;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C024;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8310c0b8
	goto loc_8310C0B8;
loc_8310C02C:
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x830f7fd0
	ctx.lr = 0x8310C048;
	sub_830F7FD0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8310a0a8
	ctx.lr = 0x8310C050;
	sub_8310A0A8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8310a0a8
	ctx.lr = 0x8310C058;
	sub_8310A0A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x831c8fe8
	ctx.lr = 0x8310C064;
	sub_831C8FE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83108f08
	ctx.lr = 0x8310C06C;
	sub_83108F08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x831c8f90
	ctx.lr = 0x8310C078;
	sub_831C8F90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83108f08
	ctx.lr = 0x8310C080;
	sub_83108F08(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831c55b0
	ctx.lr = 0x8310C094;
	sub_831C55B0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8310c0a8
	if (!ctx.cr6.eq) goto loc_8310C0A8;
	// bl 0x831c8fe8
	ctx.lr = 0x8310C0A4;
	sub_831C8FE8(ctx, base);
	// b 0x8310c0ac
	goto loc_8310C0AC;
loc_8310C0A8:
	// bl 0x831c8f90
	ctx.lr = 0x8310C0AC;
	sub_831C8F90(ctx, base);
loc_8310C0AC:
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x83109b20
	ctx.lr = 0x8310C0B8;
	sub_83109B20(ctx, base);
loc_8310C0B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310C0C0"))) PPC_WEAK_FUNC(sub_8310C0C0);
PPC_FUNC_IMPL(__imp__sub_8310C0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8310C0C8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83108de0
	ctx.lr = 0x8310C0EC;
	sub_83108DE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8310b608
	ctx.lr = 0x8310C0FC;
	sub_8310B608(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8310c130
	if (!ctx.cr0.eq) goto loc_8310C130;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-616
	ctx.r6.s64 = ctx.r11.s64 + -616;
	// addi r5,r10,-416
	ctx.r5.s64 = ctx.r10.s64 + -416;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,562
	ctx.r7.s64 = 562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C128;
	sub_831034D8(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8310c1e4
	goto loc_8310C1E4;
loc_8310C130:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831b6bc0
	ctx.lr = 0x8310C13C;
	sub_831B6BC0(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310c170
	if (!ctx.cr0.eq) goto loc_8310C170;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-616
	ctx.r6.s64 = ctx.r11.s64 + -616;
	// addi r5,r10,-464
	ctx.r5.s64 = ctx.r10.s64 + -464;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,573
	ctx.r7.s64 = 573;
	// bl 0x831034d8
	ctx.lr = 0x8310C168;
	sub_831034D8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8310c1e4
	goto loc_8310C1E4;
loc_8310C170:
	// bl 0x831c8f90
	ctx.lr = 0x8310C174;
	sub_831C8F90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83108e50
	ctx.lr = 0x8310C180;
	sub_83108E50(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8310a0a8
	ctx.lr = 0x8310C188;
	sub_8310A0A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83108f08
	ctx.lr = 0x8310C194;
	sub_83108F08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-492
	ctx.r4.s64 = ctx.r11.s64 + -492;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829ce870
	ctx.lr = 0x8310C1A8;
	sub_829CE870(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c7538
	ctx.lr = 0x8310C1BC;
	sub_831C7538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310c1e4
	if (!ctx.cr0.eq) goto loc_8310C1E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109b20
	ctx.lr = 0x8310C1CC;
	sub_83109B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310c1e4
	if (!ctx.cr0.eq) goto loc_8310C1E4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x831c8018
	ctx.lr = 0x8310C1E0;
	sub_831C8018(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C1E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8310C1EC"))) PPC_WEAK_FUNC(sub_8310C1EC);
PPC_FUNC_IMPL(__imp__sub_8310C1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C1F0"))) PPC_WEAK_FUNC(sub_8310C1F0);
PPC_FUNC_IMPL(__imp__sub_8310C1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8310C1F8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r24,r11,-18548
	ctx.r24.s64 = ctx.r11.s64 + -18548;
	// addi r23,r10,-616
	ctx.r23.s64 = ctx.r10.s64 + -616;
	// bne cr6,0x8310c240
	if (!ctx.cr6.eq) goto loc_8310C240;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-632
	ctx.r5.s64 = ctx.r11.s64 + -632;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C240;
	sub_831034D8(ctx, base);
loc_8310C240:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8310c264
	if (!ctx.cr6.eq) goto loc_8310C264;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-384
	ctx.r5.s64 = ctx.r11.s64 + -384;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,643
	ctx.r7.s64 = 643;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C264;
	sub_831034D8(ctx, base);
loc_8310C264:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x8310b608
	ctx.lr = 0x8310C278;
	sub_8310B608(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8310c2a4
	if (!ctx.cr0.eq) goto loc_8310C2A4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-336
	ctx.r5.s64 = ctx.r11.s64 + -336;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,656
	ctx.r7.s64 = 656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C29C;
	sub_831034D8(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8310c320
	goto loc_8310C320;
loc_8310C2A4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8310a0a8
	ctx.lr = 0x8310C2AC;
	sub_8310A0A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83108f08
	ctx.lr = 0x8310C2B8;
	sub_83108F08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-356
	ctx.r4.s64 = ctx.r11.s64 + -356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x8310C2CC;
	sub_829CE870(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c7538
	ctx.lr = 0x8310C2E0;
	sub_831C7538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310c2ec
	if (ctx.cr0.eq) goto loc_8310C2EC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8310C2EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83109b20
	ctx.lr = 0x8310C2F4;
	sub_83109B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8310c320
	if (!ctx.cr0.eq) goto loc_8310C320;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8310c31c
	if (ctx.cr6.eq) goto loc_8310C31C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-376
	ctx.r5.s64 = ctx.r11.s64 + -376;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,682
	ctx.r7.s64 = 682;
	// bl 0x831034d8
	ctx.lr = 0x8310C31C;
	sub_831034D8(ctx, base);
loc_8310C31C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8310C320:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8310C328"))) PPC_WEAK_FUNC(sub_8310C328);
PPC_FUNC_IMPL(__imp__sub_8310C328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x8310C330;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r21,r11,-18548
	ctx.r21.s64 = ctx.r11.s64 + -18548;
	// addi r20,r10,-616
	ctx.r20.s64 = ctx.r10.s64 + -616;
	// bne cr6,0x8310c388
	if (!ctx.cr6.eq) goto loc_8310C388;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-224
	ctx.r5.s64 = ctx.r11.s64 + -224;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,139
	ctx.r7.s64 = 139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C388;
	sub_831034D8(ctx, base);
loc_8310C388:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8310c3ac
	if (!ctx.cr6.eq) goto loc_8310C3AC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-3704
	ctx.r5.s64 = ctx.r11.s64 + -3704;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,140
	ctx.r7.s64 = 140;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C3AC;
	sub_831034D8(ctx, base);
loc_8310C3AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8310c3d0
	if (!ctx.cr6.eq) goto loc_8310C3D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-3716
	ctx.r5.s64 = ctx.r11.s64 + -3716;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,141
	ctx.r7.s64 = 141;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C3D0;
	sub_831034D8(ctx, base);
loc_8310C3D0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8310c3f4
	if (!ctx.cr6.eq) goto loc_8310C3F4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-240
	ctx.r5.s64 = ctx.r11.s64 + -240;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,142
	ctx.r7.s64 = 142;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C3F4;
	sub_831034D8(ctx, base);
loc_8310C3F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8310c418
	if (!ctx.cr6.eq) goto loc_8310C418;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-944
	ctx.r5.s64 = ctx.r11.s64 + -944;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,143
	ctx.r7.s64 = 143;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C418;
	sub_831034D8(ctx, base);
loc_8310C418:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8310c43c
	if (!ctx.cr6.eq) goto loc_8310C43C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-256
	ctx.r5.s64 = ctx.r11.s64 + -256;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C43C;
	sub_831034D8(ctx, base);
loc_8310C43C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8310c460
	if (!ctx.cr6.eq) goto loc_8310C460;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-3188
	ctx.r5.s64 = ctx.r11.s64 + -3188;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,145
	ctx.r7.s64 = 145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C460;
	sub_831034D8(ctx, base);
loc_8310C460:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8310c484
	if (!ctx.cr6.eq) goto loc_8310C484;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-268
	ctx.r5.s64 = ctx.r11.s64 + -268;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,146
	ctx.r7.s64 = 146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C484;
	sub_831034D8(ctx, base);
loc_8310C484:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831b3138
	ctx.lr = 0x8310C490;
	sub_831B3138(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8310C4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8310c4d0
	if (!ctx.cr0.eq) goto loc_8310C4D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-632
	ctx.r5.s64 = ctx.r11.s64 + -632;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C4C8;
	sub_831034D8(ctx, base);
loc_8310C4C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310c634
	goto loc_8310C634;
loc_8310C4D0:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x83109f78
	ctx.lr = 0x8310C500;
	sub_83109F78(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109f78
	ctx.lr = 0x8310C518;
	sub_83109F78(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310c5dc
	if (!ctx.cr6.eq) goto loc_8310C5DC;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r11,r11,-17152
	ctx.r11.s64 = ctx.r11.s64 + -17152;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne cr6,0x8310c5a8
	if (!ctx.cr6.eq) goto loc_8310C5A8;
	// li r4,2752
	ctx.r4.s64 = 2752;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8310C54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8310c570
	if (ctx.cr0.eq) goto loc_8310C570;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831c67b8
	ctx.lr = 0x8310C56C;
	sub_831C67B8(ctx, base);
	// b 0x8310c574
	goto loc_8310C574;
loc_8310C570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C574:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8310c630
	if (!ctx.cr6.eq) goto loc_8310C630;
	// li r7,201
	ctx.r7.s64 = 201;
loc_8310C584:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r11,-300
	ctx.r5.s64 = ctx.r11.s64 + -300;
loc_8310C58C:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x8310C59C;
	sub_831034D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310bbf0
	ctx.lr = 0x8310C5A4;
	sub_8310BBF0(ctx, base);
	// b 0x8310c4c8
	goto loc_8310C4C8;
loc_8310C5A8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831c1810
	ctx.lr = 0x8310C5C0;
	sub_831C1810(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8310c630
	if (!ctx.cr0.eq) goto loc_8310C630;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,220
	ctx.r7.s64 = 220;
	// addi r5,r11,-324
	ctx.r5.s64 = ctx.r11.s64 + -324;
	// b 0x8310c58c
	goto loc_8310C58C;
loc_8310C5DC:
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r4,2752
	ctx.r4.s64 = 2752;
	// addi r11,r11,-16192
	ctx.r11.s64 = ctx.r11.s64 + -16192;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8310C5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8310c618
	if (ctx.cr0.eq) goto loc_8310C618;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831c67b8
	ctx.lr = 0x8310C614;
	sub_831C67B8(ctx, base);
	// b 0x8310c61c
	goto loc_8310C61C;
loc_8310C618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C61C:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8310c630
	if (!ctx.cr6.eq) goto loc_8310C630;
	// li r7,242
	ctx.r7.s64 = 242;
	// b 0x8310c584
	goto loc_8310C584;
loc_8310C630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8310C634:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_8310C63C"))) PPC_WEAK_FUNC(sub_8310C63C);
PPC_FUNC_IMPL(__imp__sub_8310C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C640"))) PPC_WEAK_FUNC(sub_8310C640);
PPC_FUNC_IMPL(__imp__sub_8310C640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x8310C648;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// clrlwi r10,r29,21
	ctx.r10.u64 = ctx.r29.u32 & 0x7FF;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// rlwinm r25,r29,0,12,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0000;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8310c794
	if (ctx.cr6.eq) goto loc_8310C794;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8310c75c
	if (ctx.cr6.eq) goto loc_8310C75C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8310c748
	if (ctx.cr6.eq) goto loc_8310C748;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8310c6b4
	if (ctx.cr6.eq) goto loc_8310C6B4;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r31,4
	ctx.r31.s64 = 4;
	// bne cr6,0x8310c79c
	if (!ctx.cr6.eq) goto loc_8310C79C;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x8310c79c
	goto loc_8310C79C;
loc_8310C6B4:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bge cr6,0x8310c6d8
	if (!ctx.cr6.lt) goto loc_8310C6D8;
	// lwz r11,1600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1600);
	// li r31,17
	ctx.r31.s64 = 17;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8310c79c
	if (!ctx.cr6.gt) goto loc_8310C79C;
	// stw r10,1600(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1600, ctx.r10.u32);
	// b 0x8310c79c
	goto loc_8310C79C;
loc_8310C6D8:
	// li r31,11
	ctx.r31.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r26,1604
	ctx.r9.s64 = ctx.r26.s64 + 1604;
loc_8310C6E4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,27,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310c708
	if (ctx.cr6.eq) goto loc_8310C708;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x8310c6e4
	if (ctx.cr6.lt) goto loc_8310C6E4;
	// b 0x8310c714
	goto loc_8310C714;
loc_8310C708:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r30,1605(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1605);
loc_8310C714:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8310c79c
	if (!ctx.cr6.eq) goto loc_8310C79C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lis r22,128
	ctx.r22.s64 = 8388608;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x8310c740
	if (ctx.cr6.eq) goto loc_8310C740;
	// bl 0x82cbbb58
	ctx.lr = 0x8310C73C;
	sub_82CBBB58(ctx, base);
	// b 0x8310c79c
	goto loc_8310C79C;
loc_8310C740:
	// lis r23,1
	ctx.r23.s64 = 65536;
	// b 0x8310c79c
	goto loc_8310C79C;
loc_8310C748:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r31,r11,18
	ctx.r31.s64 = ctx.r11.s64 + 18;
	// b 0x8310c798
	goto loc_8310C798;
loc_8310C75C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8310c78c
	if (ctx.cr6.eq) goto loc_8310C78C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8310c774
	if (ctx.cr6.eq) goto loc_8310C774;
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x8310c798
	goto loc_8310C798;
loc_8310C774:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r31,4
	ctx.r31.s64 = 4;
	// li r30,50
	ctx.r30.s64 = 50;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// b 0x8310c79c
	goto loc_8310C79C;
loc_8310C78C:
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x8310c798
	goto loc_8310C798;
loc_8310C794:
	// li r31,3
	ctx.r31.s64 = 3;
loc_8310C798:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8310C79C:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8310c7b0
	if (!ctx.cr6.eq) goto loc_8310C7B0;
	// li r9,85
	ctx.r9.s64 = 85;
	// b 0x8310c7e4
	goto loc_8310C7E4;
loc_8310C7B0:
	// rlwinm. r11,r25,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8310c7c0
	if (ctx.cr0.eq) goto loc_8310C7C0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8310C7C0:
	// rlwinm. r11,r25,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310c7cc
	if (ctx.cr0.eq) goto loc_8310C7CC;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_8310C7CC:
	// rlwinm. r11,r25,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310c7d8
	if (ctx.cr0.eq) goto loc_8310C7D8;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_8310C7D8:
	// rlwinm. r11,r25,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310c7e4
	if (ctx.cr0.eq) goto loc_8310C7E4;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_8310C7E4:
	// rlwinm r10,r29,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100000;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8310c7fc
	if (!ctx.cr6.eq) goto loc_8310C7FC;
	// li r11,256
	ctx.r11.s64 = 256;
loc_8310C7FC:
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// beq cr6,0x8310c824
	if (ctx.cr6.eq) goto loc_8310C824;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// beq cr6,0x8310c888
	if (ctx.cr6.eq) goto loc_8310C888;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x8310c880
	if (!ctx.cr6.gt) goto loc_8310C880;
	// cmplwi cr6,r31,19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 19, ctx.xer);
	// ble cr6,0x8310c870
	if (!ctx.cr6.gt) goto loc_8310C870;
	// cmplwi cr6,r31,50
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 50, ctx.xer);
	// bne cr6,0x8310c880
	if (!ctx.cr6.eq) goto loc_8310C880;
loc_8310C824:
	// li r9,169
	ctx.r9.s64 = 169;
	// ori r10,r11,169
	ctx.r10.u64 = ctx.r11.u64 | 169;
loc_8310C82C:
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8310c8d4
	if (!ctx.cr6.eq) goto loc_8310C8D4;
	// cmplwi cr6,r9,85
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x8310c898
	if (!ctx.cr6.eq) goto loc_8310C898;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310c898
	if (!ctx.cr6.eq) goto loc_8310C898;
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// clrlwi r9,r24,21
	ctx.r9.u64 = ctx.r24.u32 & 0x7FF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | ctx.r23.u64;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// b 0x8310c918
	goto loc_8310C918;
loc_8310C870:
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r10,768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// bge cr6,0x8310c880
	if (!ctx.cr6.lt) goto loc_8310C880;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_8310C880:
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x8310c82c
	goto loc_8310C82C;
loc_8310C888:
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// b 0x8310c82c
	goto loc_8310C82C;
loc_8310C898:
	// rlwinm r9,r31,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 12582912;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r7,r24,21
	ctx.r7.u64 = ctx.r24.u32 & 0x7FF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r8,r7,r23
	ctx.r8.u64 = ctx.r7.u64 | ctx.r23.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x8310c928
	goto loc_8310C928;
loc_8310C8D4:
	// cmplwi cr6,r9,85
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x8310c900
	if (!ctx.cr6.eq) goto loc_8310C900;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310c900
	if (!ctx.cr6.eq) goto loc_8310C900;
	// rlwimi r30,r31,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r30,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8310c928
	goto loc_8310C928;
loc_8310C900:
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r8,r11,64
	ctx.r8.u64 = ctx.r11.u64 | 4194304;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_8310C918:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8310C928:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_8310C934"))) PPC_WEAK_FUNC(sub_8310C934);
PPC_FUNC_IMPL(__imp__sub_8310C934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C938"))) PPC_WEAK_FUNC(sub_8310C938);
PPC_FUNC_IMPL(__imp__sub_8310C938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8310C940;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8310c95c
	if (!ctx.cr6.eq) goto loc_8310C95C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310C95C;
	sub_82CBBB58(ctx, base);
loc_8310C95C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8310c968
	if (!ctx.cr6.eq) goto loc_8310C968;
	// bl 0x82cbbb58
	ctx.lr = 0x8310C968;
	sub_82CBBB58(ctx, base);
loc_8310C968:
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,308(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8310ca38
	if (!ctx.cr6.gt) goto loc_8310CA38;
	// addi r29,r28,54
	ctx.r29.s64 = ctx.r28.s64 + 54;
loc_8310C994:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8310c9a4
	if (ctx.cr6.lt) goto loc_8310C9A4;
	// bl 0x82cbbb58
	ctx.lr = 0x8310C9A4;
	sub_82CBBB58(ctx, base);
loc_8310C9A4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r11,r11,26
	ctx.r11.u64 = ctx.r11.u64 | 26;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwimi r11,r30,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,-2(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2);
	// rlwinm r11,r11,12,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8310c9d4
	if (!ctx.cr6.eq) goto loc_8310C9D4;
	// li r10,85
	ctx.r10.s64 = 85;
	// b 0x8310ca08
	goto loc_8310CA08;
loc_8310C9D4:
	// rlwinm. r8,r11,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8310c9e4
	if (ctx.cr0.eq) goto loc_8310C9E4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8310C9E4:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8310c9f0
	if (ctx.cr0.eq) goto loc_8310C9F0;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_8310C9F0:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8310c9fc
	if (ctx.cr0.eq) goto loc_8310C9FC;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_8310C9FC:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310ca08
	if (ctx.cr0.eq) goto loc_8310CA08;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_8310CA08:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// oris r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 327680;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310c994
	if (ctx.cr6.lt) goto loc_8310C994;
loc_8310CA38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8310CA44"))) PPC_WEAK_FUNC(sub_8310CA44);
PPC_FUNC_IMPL(__imp__sub_8310CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CA48"))) PPC_WEAK_FUNC(sub_8310CA48);
PPC_FUNC_IMPL(__imp__sub_8310CA48) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8310CA54:
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8310ca8c
	if (ctx.cr6.lt) goto loc_8310CA8C;
	// beq cr6,0x8310ca84
	if (ctx.cr6.eq) goto loc_8310CA84;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8310ca7c
	if (ctx.cr6.lt) goto loc_8310CA7C;
	// bne cr6,0x8310ca8c
	if (!ctx.cr6.eq) goto loc_8310CA8C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8310ca90
	goto loc_8310CA90;
loc_8310CA7C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8310ca90
	goto loc_8310CA90;
loc_8310CA84:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8310ca90
	goto loc_8310CA90;
loc_8310CA8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310CA90:
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// blt cr6,0x8310ca54
	if (ctx.cr6.lt) goto loc_8310CA54;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CAB0"))) PPC_WEAK_FUNC(sub_8310CAB0);
PPC_FUNC_IMPL(__imp__sub_8310CAB0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,401
	ctx.r11.s64 = ctx.r4.s64 + 401;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r9,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,8,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xF;
	// rlwinm r4,r9,15,12,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xF0000;
	// rlwinm r7,r9,27,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FF;
	// beq 0x8310cb28
	if (ctx.cr0.eq) goto loc_8310CB28;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8310cb18
	if (ctx.cr6.eq) goto loc_8310CB18;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8310cb10
	if (ctx.cr6.eq) goto loc_8310CB10;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8310cb08
	if (ctx.cr6.eq) goto loc_8310CB08;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8310cb30
	if (!ctx.cr6.eq) goto loc_8310CB30;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8310cb30
	if (!ctx.cr6.eq) goto loc_8310CB30;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8310cb48
	goto loc_8310CB48;
loc_8310CB08:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8310cb4c
	goto loc_8310CB4C;
loc_8310CB10:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8310cb4c
	goto loc_8310CB4C;
loc_8310CB18:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8310cb30
	if (!ctx.cr6.eq) goto loc_8310CB30;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8310cb48
	goto loc_8310CB48;
loc_8310CB28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8310cb44
	if (ctx.cr6.eq) goto loc_8310CB44;
loc_8310CB30:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x8310cb4c
	goto loc_8310CB4C;
loc_8310CB44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310CB48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310CB4C:
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8310cb60
	if (!ctx.cr6.eq) goto loc_8310CB60;
	// li r9,85
	ctx.r9.s64 = 85;
	// b 0x8310cb94
	goto loc_8310CB94;
loc_8310CB60:
	// rlwinm. r3,r4,0,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8310cb70
	if (ctx.cr0.eq) goto loc_8310CB70;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8310CB70:
	// rlwinm. r3,r4,0,14,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310cb7c
	if (ctx.cr0.eq) goto loc_8310CB7C;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_8310CB7C:
	// rlwinm. r3,r4,0,13,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8310cb88
	if (ctx.cr0.eq) goto loc_8310CB88;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_8310CB88:
	// rlwinm. r4,r4,0,12,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8310cb94
	if (ctx.cr0.eq) goto loc_8310CB94;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_8310CB94:
	// rlwimi r11,r10,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// clrlwi r4,r11,19
	ctx.r4.u64 = ctx.r11.u32 & 0x1FFF;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// ori r10,r10,27
	ctx.r10.u64 = ctx.r10.u64 | 27;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,11
	ctx.r3.s64 = 11;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// rlwimi r10,r4,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r31,r3,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CBE4"))) PPC_WEAK_FUNC(sub_8310CBE4);
PPC_FUNC_IMPL(__imp__sub_8310CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CBE8"))) PPC_WEAK_FUNC(sub_8310CBE8);
PPC_FUNC_IMPL(__imp__sub_8310CBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x8310CBF0;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// clrlwi r27,r31,21
	ctx.r27.u64 = ctx.r31.u32 & 0x7FF;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8310cd38
	if (ctx.cr6.eq) goto loc_8310CD38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8310cc94
	if (ctx.cr6.eq) goto loc_8310CC94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8310cc8c
	if (ctx.cr6.eq) goto loc_8310CC8C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8310cc84
	if (ctx.cr6.eq) goto loc_8310CC84;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8310cc78
	if (ctx.cr6.eq) goto loc_8310CC78;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8310cc70
	if (ctx.cr6.eq) goto loc_8310CC70;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r25,4
	ctx.r25.s64 = 4;
	// bne cr6,0x8310cd78
	if (!ctx.cr6.eq) goto loc_8310CD78;
	// li r27,32
	ctx.r27.s64 = 32;
	// b 0x8310cd78
	goto loc_8310CD78;
loc_8310CC70:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8310cd78
	goto loc_8310CD78;
loc_8310CC78:
	// bl 0x82cbbb58
	ctx.lr = 0x8310CC7C;
	sub_82CBBB58(ctx, base);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8310cd78
	goto loc_8310CD78;
loc_8310CC84:
	// li r25,2
	ctx.r25.s64 = 2;
	// b 0x8310cd78
	goto loc_8310CD78;
loc_8310CC8C:
	// li r25,3
	ctx.r25.s64 = 3;
	// b 0x8310cd78
	goto loc_8310CD78;
loc_8310CC94:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8310cd1c
	if (!ctx.cr6.eq) goto loc_8310CD1C;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// lis r24,128
	ctx.r24.s64 = 8388608;
	// blt cr6,0x8310ccdc
	if (ctx.cr6.lt) goto loc_8310CCDC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// rlwimi r11,r23,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8310cce4
	if (ctx.cr6.eq) goto loc_8310CCE4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x8310ccd4
	if (ctx.cr6.eq) goto loc_8310CCD4;
	// bl 0x82cbbb58
	ctx.lr = 0x8310CCD0;
	sub_82CBBB58(ctx, base);
	// b 0x8310ccdc
	goto loc_8310CCDC;
loc_8310CCD4:
	// lis r22,1
	ctx.r22.s64 = 65536;
loc_8310CCD8:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8310CCDC:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// b 0x8310cd30
	goto loc_8310CD30;
loc_8310CCE4:
	// rlwinm r11,r23,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x3;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8310ccd8
	if (ctx.cr6.lt) goto loc_8310CCD8;
	// beq cr6,0x8310cd14
	if (ctx.cr6.eq) goto loc_8310CD14;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8310cd0c
	if (ctx.cr6.lt) goto loc_8310CD0C;
	// bne cr6,0x8310ccd8
	if (!ctx.cr6.eq) goto loc_8310CCD8;
	// lis r26,6
	ctx.r26.s64 = 393216;
	// b 0x8310ccdc
	goto loc_8310CCDC;
loc_8310CD0C:
	// lis r26,4
	ctx.r26.s64 = 262144;
	// b 0x8310ccdc
	goto loc_8310CCDC;
loc_8310CD14:
	// lis r26,2
	ctx.r26.s64 = 131072;
	// b 0x8310ccdc
	goto loc_8310CCDC;
loc_8310CD1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310cd30
	if (ctx.cr6.lt) goto loc_8310CD30;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8310CD30:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8310cd78
	goto loc_8310CD78;
loc_8310CD38:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// li r25,5
	ctx.r25.s64 = 5;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8310cd78
	if (!ctx.cr6.eq) goto loc_8310CD78;
	// cmplwi cr6,r10,768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// blt cr6,0x8310cd78
	if (ctx.cr6.lt) goto loc_8310CD78;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lis r24,128
	ctx.r24.s64 = 8388608;
	// rlwimi r11,r23,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x8310cd70
	if (ctx.cr6.eq) goto loc_8310CD70;
	// bl 0x82cbbb58
	ctx.lr = 0x8310CD6C;
	sub_82CBBB58(ctx, base);
	// b 0x8310cd78
	goto loc_8310CD78;
loc_8310CD70:
	// lis r22,1
	ctx.r22.s64 = 65536;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8310CD78:
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8310cd90
	if (!ctx.cr6.eq) goto loc_8310CD90;
	// li r3,12816
	ctx.r3.s64 = 12816;
	// b 0x8310cd98
	goto loc_8310CD98;
loc_8310CD90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310ca48
	ctx.lr = 0x8310CD98;
	sub_8310CA48(ctx, base);
loc_8310CD98:
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// rlwinm r11,r31,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8310ce2c
	if (ctx.cr6.gt) goto loc_8310CE2C;
	// beq cr6,0x8310ce24
	if (ctx.cr6.eq) goto loc_8310CE24;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce1c
	if (ctx.cr6.eq) goto loc_8310CE1C;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce14
	if (ctx.cr6.eq) goto loc_8310CE14;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce0c
	if (ctx.cr6.eq) goto loc_8310CE0C;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce04
	if (ctx.cr6.eq) goto loc_8310CE04;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310cdfc
	if (ctx.cr6.eq) goto loc_8310CDFC;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8310ce68
	if (!ctx.cr6.eq) goto loc_8310CE68;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CDFC:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// b 0x8310ce94
	goto loc_8310CE94;
loc_8310CE04:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CE0C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x8310ce94
	goto loc_8310CE94;
loc_8310CE14:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CE1C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// b 0x8310ce94
	goto loc_8310CE94;
loc_8310CE24:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CE2C:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce90
	if (ctx.cr6.eq) goto loc_8310CE90;
	// lis r10,2304
	ctx.r10.s64 = 150994944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce88
	if (ctx.cr6.eq) goto loc_8310CE88;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce80
	if (ctx.cr6.eq) goto loc_8310CE80;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce78
	if (ctx.cr6.eq) goto loc_8310CE78;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310ce70
	if (ctx.cr6.eq) goto loc_8310CE70;
loc_8310CE68:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CE70:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// b 0x8310ce94
	goto loc_8310CE94;
loc_8310CE78:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CE80:
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CE88:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// b 0x8310ce98
	goto loc_8310CE98;
loc_8310CE90:
	// lis r11,4
	ctx.r11.s64 = 262144;
loc_8310CE94:
	// ori r11,r11,34952
	ctx.r11.u64 = ctx.r11.u64 | 34952;
loc_8310CE98:
	// cmplwi cr6,r21,9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 9, ctx.xer);
	// beq cr6,0x8310cfd0
	if (ctx.cr6.eq) goto loc_8310CFD0;
	// cmplwi cr6,r21,53
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 53, ctx.xer);
	// beq cr6,0x8310cfd0
	if (ctx.cr6.eq) goto loc_8310CFD0;
	// cmplwi cr6,r21,59
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 59, ctx.xer);
	// ble cr6,0x8310cee0
	if (!ctx.cr6.gt) goto loc_8310CEE0;
	// cmplwi cr6,r21,61
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 61, ctx.xer);
	// ble cr6,0x8310cedc
	if (!ctx.cr6.gt) goto loc_8310CEDC;
	// cmplwi cr6,r21,62
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 62, ctx.xer);
	// beq cr6,0x8310cfd0
	if (ctx.cr6.eq) goto loc_8310CFD0;
	// cmplwi cr6,r21,78
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 78, ctx.xer);
	// beq cr6,0x8310ced4
	if (ctx.cr6.eq) goto loc_8310CED4;
	// cmplwi cr6,r21,85
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 85, ctx.xer);
	// beq cr6,0x8310cedc
	if (ctx.cr6.eq) goto loc_8310CEDC;
	// b 0x8310cee0
	goto loc_8310CEE0;
loc_8310CED4:
	// clrlwi. r10,r20,24
	ctx.r10.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310cee0
	if (!ctx.cr0.eq) goto loc_8310CEE0;
loc_8310CEDC:
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
loc_8310CEE0:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8310cf70
	if (!ctx.cr6.eq) goto loc_8310CF70;
	// cmplwi cr6,r3,12816
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12816, ctx.xer);
	// bne cr6,0x8310cf28
	if (!ctx.cr6.eq) goto loc_8310CF28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310cf28
	if (!ctx.cr6.eq) goto loc_8310CF28;
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r23,21
	ctx.r9.u64 = ctx.r23.u32 & 0x7FF;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// or r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 | ctx.r26.u64;
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 | ctx.r22.u64;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// b 0x8310cfb4
	goto loc_8310CFB4;
loc_8310CF28:
	// rlwinm r9,r25,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// or r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 | ctx.r3.u64;
	// clrlwi r7,r23,21
	ctx.r7.u64 = ctx.r23.u32 & 0x7FF;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// clrlwi r6,r27,16
	ctx.r6.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 12582912;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 | ctx.r26.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 | ctx.r22.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x8310cfc8
	goto loc_8310CFC8;
loc_8310CF70:
	// cmplwi cr6,r3,12816
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12816, ctx.xer);
	// bne cr6,0x8310cf94
	if (!ctx.cr6.eq) goto loc_8310CF94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310cf94
	if (!ctx.cr6.eq) goto loc_8310CF94;
	// rlwimi r27,r25,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r27,r24
	ctx.r10.u64 = ctx.r27.u64 | ctx.r24.u64;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x8310cfd8
	goto loc_8310CFD8;
loc_8310CF94:
	// rlwinm r9,r25,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 | ctx.r24.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
loc_8310CFB4:
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8310CFC8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8310cfec
	goto loc_8310CFEC;
loc_8310CFD0:
	// rlwimi r27,r25,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_8310CFD8:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8310CFEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_8310CFF4"))) PPC_WEAK_FUNC(sub_8310CFF4);
PPC_FUNC_IMPL(__imp__sub_8310CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CFF8"))) PPC_WEAK_FUNC(sub_8310CFF8);
PPC_FUNC_IMPL(__imp__sub_8310CFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8310D000;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x8310c640
	ctx.lr = 0x8310D030;
	sub_8310C640(ctx, base);
	// rlwinm r10,r31,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x8310d04c
	if (!ctx.cr6.eq) goto loc_8310D04C;
	// lis r6,1
	ctx.r6.s64 = 65536;
loc_8310D04C:
	// rlwinm r10,r31,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8310d084
	if (!ctx.cr6.eq) goto loc_8310D084;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r8,r6,12816
	ctx.r8.u64 = ctx.r6.u64 | 12816;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8310d0a4
	goto loc_8310D0A4;
loc_8310D084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// bl 0x8310ca48
	ctx.lr = 0x8310D090;
	sub_8310CA48(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_8310D0A4:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8310d0c4
	if (!ctx.cr6.eq) goto loc_8310D0C4;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8310d0e8
	goto loc_8310D0E8;
loc_8310D0C4:
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8310ca48
	ctx.lr = 0x8310D0DC;
	sub_8310CA48(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
loc_8310D0E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8310D0FC"))) PPC_WEAK_FUNC(sub_8310D0FC);
PPC_FUNC_IMPL(__imp__sub_8310D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D100"))) PPC_WEAK_FUNC(sub_8310D100);
PPC_FUNC_IMPL(__imp__sub_8310D100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x8310D108;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r26,16(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310d140
	if (!ctx.cr0.eq) goto loc_8310D140;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D140;
	sub_82CBBB58(ctx, base);
loc_8310D140:
	// lwz r11,1580(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310d150
	if (!ctx.cr6.eq) goto loc_8310D150;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D150;
	sub_82CBBB58(ctx, base);
loc_8310D150:
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r30,1580(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bgt cr6,0x8310da9c
	if (ctx.cr6.gt) goto loc_8310DA9C;
	// beq cr6,0x8310da1c
	if (ctx.cr6.eq) goto loc_8310DA1C;
	// addi r10,r10,-25
	ctx.r10.s64 = ctx.r10.s64 + -25;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bgt cr6,0x8310da9c
	if (ctx.cr6.gt) goto loc_8310DA9C;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-200
	ctx.r12.s64 = ctx.r12.s64 + -200;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31983
	ctx.r12.s64 = -2096037888;
	// addi r12,r12,-11872
	ctx.r12.s64 = ctx.r12.s64 + -11872;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8310D4F0;
	case 1:
		goto loc_8310D5D4;
	case 2:
		goto loc_8310D40C;
	case 3:
		goto loc_8310D518;
	case 4:
		goto loc_8310D554;
	case 5:
		goto loc_8310D4AC;
	case 6:
		goto loc_8310DA9C;
	case 7:
		goto loc_8310DA9C;
	case 8:
		goto loc_8310DA9C;
	case 9:
		goto loc_8310DA9C;
	case 10:
		goto loc_8310DA9C;
	case 11:
		goto loc_8310DA9C;
	case 12:
		goto loc_8310DA9C;
	case 13:
		goto loc_8310D560;
	case 14:
		goto loc_8310D554;
	case 15:
		goto loc_8310D1A0;
	case 16:
		goto loc_8310D7B4;
	case 17:
		goto loc_8310D338;
	case 18:
		goto loc_8310D3E0;
	case 19:
		goto loc_8310D7AC;
	case 20:
		goto loc_8310D8E8;
	default:
		__builtin_unreachable();
	}
loc_8310D1A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,24,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bne cr6,0x8310d268
	if (!ctx.cr6.eq) goto loc_8310D268;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8310d1dc
	if (!ctx.cr6.eq) goto loc_8310D1DC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// b 0x8310d1e0
	goto loc_8310D1E0;
loc_8310D1DC:
	// li r11,52
	ctx.r11.s64 = 52;
loc_8310D1E0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D214;
	sub_8310CBE8(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r8,17476
	ctx.r8.s64 = 17476;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r23,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D268:
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x8310d274
	if (ctx.cr6.eq) goto loc_8310D274;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D274;
	sub_82CBBB58(ctx, base);
loc_8310D274:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310d28c
	if (ctx.cr6.eq) goto loc_8310D28C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D28C;
	sub_82CBBB58(ctx, base);
loc_8310D28C:
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D2C8;
	sub_8310CBE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8310d3ac
	if (!ctx.cr6.eq) goto loc_8310D3AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,39
	ctx.r8.s64 = 39;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8310D330:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D338:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8310d3d0
	if (ctx.cr6.eq) goto loc_8310D3D0;
	// li r10,41
	ctx.r10.s64 = 41;
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D3A8;
	sub_8310CBE8(ctx, base);
loc_8310D3A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8310D3AC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8310D3B0:
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_8310D3D0:
	// li r10,39
	ctx.r10.s64 = 39;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8310d330
	goto loc_8310D330;
loc_8310D3E0:
	// li r11,41
	ctx.r11.s64 = 41;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8310d3b0
	if (ctx.cr6.eq) goto loc_8310D3B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D40C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x8310d42c
	if (ctx.cr6.eq) goto loc_8310D42C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D42C;
	sub_82CBBB58(ctx, base);
loc_8310D42C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310d43c
	if (ctx.cr0.eq) goto loc_8310D43C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D43C;
	sub_82CBBB58(ctx, base);
loc_8310D43C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x8310d458
	if (ctx.cr6.eq) goto loc_8310D458;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D458;
	sub_82CBBB58(ctx, base);
loc_8310D458:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8310d46c
	if (ctx.cr6.lt) goto loc_8310D46C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D46C;
	sub_82CBBB58(ctx, base);
loc_8310D46C:
	// li r11,62
	ctx.r11.s64 = 62;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8310cbe8
	ctx.lr = 0x8310D4A8;
	sub_8310CBE8(ctx, base);
	// b 0x8310d3a8
	goto loc_8310D3A8;
loc_8310D4AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x8310d4cc
	if (ctx.cr6.eq) goto loc_8310D4CC;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D4CC;
	sub_82CBBB58(ctx, base);
loc_8310D4CC:
	// li r11,50
	ctx.r11.s64 = 50;
loc_8310D4D0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8310D4E8:
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D4F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x8310d510
	if (ctx.cr6.eq) goto loc_8310D510;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D510;
	sub_82CBBB58(ctx, base);
loc_8310D510:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8310d4d0
	goto loc_8310D4D0;
loc_8310D518:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310d540
	if (!ctx.cr0.eq) goto loc_8310D540;
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// b 0x8310d548
	goto loc_8310D548;
loc_8310D540:
	// li r11,83
	ctx.r11.s64 = 83;
loc_8310D544:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8310D548:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D554:
	// li r11,42
	ctx.r11.s64 = 42;
loc_8310D558:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8310d544
	goto loc_8310D544;
loc_8310D560:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x8310d580
	if (ctx.cr6.eq) goto loc_8310D580;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D580;
	sub_82CBBB58(ctx, base);
loc_8310D580:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8310d594
	if (ctx.cr6.lt) goto loc_8310D594;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D594;
	sub_82CBBB58(ctx, base);
loc_8310D594:
	// li r11,62
	ctx.r11.s64 = 62;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,62
	ctx.r8.s64 = 62;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8310cbe8
	ctx.lr = 0x8310D5D0;
	sub_8310CBE8(ctx, base);
	// b 0x8310d3a8
	goto loc_8310D3A8;
loc_8310D5D4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// bne cr6,0x8310d698
	if (!ctx.cr6.eq) goto loc_8310D698;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x8310d60c
	if (ctx.cr6.eq) goto loc_8310D60C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D60C;
	sub_82CBBB58(ctx, base);
loc_8310D60C:
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,52
	ctx.r8.s64 = 52;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D648;
	sub_8310CBE8(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r8,17476
	ctx.r8.s64 = 17476;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r9,5
	ctx.r11.s64 = ctx.r9.s64 + 5;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r8,41
	ctx.r8.s64 = 41;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D698:
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x8310d6a4
	if (ctx.cr6.eq) goto loc_8310D6A4;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D6A4;
	sub_82CBBB58(ctx, base);
loc_8310D6A4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x8310d6c0
	if (ctx.cr6.eq) goto loc_8310D6C0;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D6C0;
	sub_82CBBB58(ctx, base);
loc_8310D6C0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8310d6d4
	if (ctx.cr6.lt) goto loc_8310D6D4;
	// bl 0x82cbbb58
	ctx.lr = 0x8310D6D4;
	sub_82CBBB58(ctx, base);
loc_8310D6D4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8310d764
	if (!ctx.cr6.eq) goto loc_8310D764;
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D724;
	sub_8310CBE8(ctx, base);
	// li r11,39
	ctx.r11.s64 = 39;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r7,41
	ctx.r7.s64 = 41;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D764:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8310cbe8
	ctx.lr = 0x8310D790;
	sub_8310CBE8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// clrlwi r9,r11,21
	ctx.r9.u64 = ctx.r11.u32 & 0x7FF;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8310d3b0
	goto loc_8310D3B0;
loc_8310D7AC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8310d558
	goto loc_8310D558;
loc_8310D7B4:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x7;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8310d810
	if (ctx.cr6.eq) goto loc_8310D810;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8310d808
	if (ctx.cr6.eq) goto loc_8310D808;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8310d800
	if (ctx.cr6.eq) goto loc_8310D800;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x8310d7f8
	if (ctx.cr6.eq) goto loc_8310D7F8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8310d7f0
	if (ctx.cr6.eq) goto loc_8310D7F0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x8310d818
	goto loc_8310D818;
loc_8310D7F0:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x8310d818
	goto loc_8310D818;
loc_8310D7F8:
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x8310d81c
	goto loc_8310D81C;
loc_8310D800:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x8310d814
	goto loc_8310D814;
loc_8310D808:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x8310d814
	goto loc_8310D814;
loc_8310D810:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_8310D814:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_8310D818:
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
loc_8310D81C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8310D82C:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,512
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 512, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x8310d880
	if (ctx.cr6.lt) goto loc_8310D880;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8192, ctx.xer);
	// bne cr6,0x8310d880
	if (!ctx.cr6.eq) goto loc_8310D880;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x8310d880
	if (!ctx.cr6.eq) goto loc_8310D880;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x8310d888
	goto loc_8310D888;
loc_8310D880:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8310D888:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8310d82c
	if (ctx.cr6.lt) goto loc_8310D82C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D8BC;
	sub_8310CBE8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D8E4;
	sub_8310CBE8(ctx, base);
	// b 0x8310d3a8
	goto loc_8310D3A8;
loc_8310D8E8:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x7;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8310d944
	if (ctx.cr6.eq) goto loc_8310D944;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8310d93c
	if (ctx.cr6.eq) goto loc_8310D93C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8310d934
	if (ctx.cr6.eq) goto loc_8310D934;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x8310d92c
	if (ctx.cr6.eq) goto loc_8310D92C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8310d924
	if (ctx.cr6.eq) goto loc_8310D924;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x8310d94c
	goto loc_8310D94C;
loc_8310D924:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x8310d94c
	goto loc_8310D94C;
loc_8310D92C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8310d950
	goto loc_8310D950;
loc_8310D934:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x8310d948
	goto loc_8310D948;
loc_8310D93C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x8310d948
	goto loc_8310D948;
loc_8310D944:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_8310D948:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_8310D94C:
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
loc_8310D950:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8310D960:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,512
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 512, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x8310d9b4
	if (ctx.cr6.lt) goto loc_8310D9B4;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8192, ctx.xer);
	// bne cr6,0x8310d9b4
	if (!ctx.cr6.eq) goto loc_8310D9B4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x8310d9b4
	if (!ctx.cr6.eq) goto loc_8310D9B4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x8310d9bc
	goto loc_8310D9BC;
loc_8310D9B4:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8310D9BC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8310d960
	if (ctx.cr6.lt) goto loc_8310D960;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310D9F0;
	sub_8310CBE8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310DA18;
	sub_8310CBE8(ctx, base);
	// b 0x8310d3a8
	goto loc_8310D3A8;
loc_8310DA1C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x8310da3c
	if (ctx.cr6.eq) goto loc_8310DA3C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DA3C;
	sub_82CBBB58(ctx, base);
loc_8310DA3C:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8310cbe8
	ctx.lr = 0x8310DA78;
	sub_8310CBE8(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,17476
	ctx.r8.s64 = 17476;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x8310d4e8
	goto loc_8310D4E8;
loc_8310DA9C:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8310d3b0
	goto loc_8310D3B0;
}

__attribute__((alias("__imp__sub_8310DAA4"))) PPC_WEAK_FUNC(sub_8310DAA4);
PPC_FUNC_IMPL(__imp__sub_8310DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310DAA8"))) PPC_WEAK_FUNC(sub_8310DAA8);
PPC_FUNC_IMPL(__imp__sub_8310DAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x8310DAB0;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r10,r30,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r25,16(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x8310db0c
	if (!ctx.cr6.eq) goto loc_8310DB0C;
	// cmplwi cr6,r25,768
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 768, ctx.xer);
	// blt cr6,0x8310db0c
	if (ctx.cr6.lt) goto loc_8310DB0C;
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8310db10
	goto loc_8310DB10;
loc_8310DB0C:
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_8310DB10:
	// lwz r26,356(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8310db34
	if (ctx.cr6.eq) goto loc_8310DB34;
	// li r10,33
	ctx.r10.s64 = 33;
	// lwz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,0,19,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1FFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r30,r10,0,1,3
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x70000000) | (ctx.r30.u64 & 0xFFFFFFFF8FFFFFFF);
loc_8310DB34:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_8310DB38:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r8,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// beq 0x8310db9c
	if (ctx.cr0.eq) goto loc_8310DB9C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmplwi cr6,r25,512
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 512, ctx.xer);
	// blt cr6,0x8310db94
	if (ctx.cr6.lt) goto loc_8310DB94;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,8192
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8192, ctx.xer);
	// bne cr6,0x8310db94
	if (!ctx.cr6.eq) goto loc_8310DB94;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r9,r8,0,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// bne cr6,0x8310db94
	if (!ctx.cr6.eq) goto loc_8310DB94;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x8310dba8
	goto loc_8310DBA8;
loc_8310DB94:
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// b 0x8310dba4
	goto loc_8310DBA4;
loc_8310DB9C:
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stwx r18,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r18.u32);
loc_8310DBA4:
	// stwx r18,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r18.u32);
loc_8310DBA8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x8310db38
	if (ctx.cr6.lt) goto loc_8310DB38;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x8310dcf0
	if (ctx.cr6.eq) goto loc_8310DCF0;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x8310dbd0
	if (ctx.cr6.eq) goto loc_8310DBD0;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// b 0x8310dda8
	goto loc_8310DDA8;
loc_8310DBD0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// rlwimi r11,r20,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310dbe4
	if (ctx.cr0.eq) goto loc_8310DBE4;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DBE4;
	sub_82CBBB58(ctx, base);
loc_8310DBE4:
	// cmplwi cr6,r25,768
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 768, ctx.xer);
	// bge cr6,0x8310dc2c
	if (!ctx.cr6.lt) goto loc_8310DC2C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x8310dc08
	if (ctx.cr6.eq) goto loc_8310DC08;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DC08;
	sub_82CBBB58(ctx, base);
loc_8310DC08:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x8310dc24
	if (ctx.cr6.eq) goto loc_8310DC24;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DC24;
	sub_82CBBB58(ctx, base);
loc_8310DC24:
	// addi r23,r28,4
	ctx.r23.s64 = ctx.r28.s64 + 4;
	// b 0x8310dc44
	goto loc_8310DC44;
loc_8310DC2C:
	// rlwinm r11,r29,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310dc40
	if (ctx.cr6.eq) goto loc_8310DC40;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DC40;
	sub_82CBBB58(ctx, base);
loc_8310DC40:
	// addi r23,r28,2
	ctx.r23.s64 = ctx.r28.s64 + 2;
loc_8310DC44:
	// li r29,3
	ctx.r29.s64 = 3;
	// li r11,89
	ctx.r11.s64 = 89;
	// rlwimi r30,r29,16,12,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xF0000) | (ctx.r30.u64 & 0xFFFFFFFFFFF0FFFF);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x8310dc7c
	if (!ctx.cr6.eq) goto loc_8310DC7C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_8310DC7C:
	// bl 0x8310c640
	ctx.lr = 0x8310DC80;
	sub_8310C640(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,89
	ctx.r8.s64 = 89;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310DCA8;
	sub_8310CBE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8310dda4
	if (ctx.cr6.eq) goto loc_8310DDA4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rlwimi r4,r29,16,12,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xF0000) | (ctx.r4.u64 & 0xFFFFFFFFFFF0FFFF);
loc_8310DCBC:
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310cff8
	ctx.lr = 0x8310DCDC;
	sub_8310CFF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8310dda8
	goto loc_8310DDA8;
loc_8310DCF0:
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r23,r28,4
	ctx.r23.s64 = ctx.r28.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310dd0c
	if (ctx.cr0.eq) goto loc_8310DD0C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DD0C;
	sub_82CBBB58(ctx, base);
loc_8310DD0C:
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310dd24
	if (ctx.cr0.eq) goto loc_8310DD24;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DD24;
	sub_82CBBB58(ctx, base);
loc_8310DD24:
	// xor r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310dd34
	if (!ctx.cr0.eq) goto loc_8310DD34;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DD34;
	sub_82CBBB58(ctx, base);
loc_8310DD34:
	// li r11,87
	ctx.r11.s64 = 87;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x8310dd64
	if (!ctx.cr6.eq) goto loc_8310DD64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_8310DD64:
	// bl 0x8310c640
	ctx.lr = 0x8310DD68;
	sub_8310C640(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,87
	ctx.r8.s64 = 87;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310DD90;
	sub_8310CBE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8310dda4
	if (ctx.cr6.eq) goto loc_8310DDA4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x8310dcbc
	goto loc_8310DCBC;
loc_8310DDA4:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8310DDA8:
	// stw r23,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_8310DDC4"))) PPC_WEAK_FUNC(sub_8310DDC4);
PPC_FUNC_IMPL(__imp__sub_8310DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310DDC8"))) PPC_WEAK_FUNC(sub_8310DDC8);
PPC_FUNC_IMPL(__imp__sub_8310DDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x8310DDD0;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// lwz r24,16(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmplwi cr6,r24,768
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 768, ctx.xer);
	// bge cr6,0x8310de00
	if (!ctx.cr6.lt) goto loc_8310DE00;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DE00;
	sub_82CBBB58(ctx, base);
loc_8310DE00:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310de28
	if (ctx.cr0.eq) goto loc_8310DE28;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DE28;
	sub_82CBBB58(ctx, base);
loc_8310DE28:
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310de34
	if (ctx.cr0.eq) goto loc_8310DE34;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DE34;
	sub_82CBBB58(ctx, base);
loc_8310DE34:
	// lwz r22,356(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// li r17,33
	ctx.r17.s64 = 33;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8310de5c
	if (ctx.cr6.eq) goto loc_8310DE5C;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r19,0(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwimi r28,r11,0,19,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r11,0,1,3
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x70000000) | (ctx.r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_8310DE5C:
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_8310DE64:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// beq 0x8310ded4
	if (ctx.cr0.eq) goto loc_8310DED4;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x8310decc
	if (!ctx.cr6.eq) goto loc_8310DECC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8310dea8
	if (ctx.cr6.eq) goto loc_8310DEA8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8310decc
	if (!ctx.cr6.eq) goto loc_8310DECC;
loc_8310DEA8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8310deb4
	if (ctx.cr6.eq) goto loc_8310DEB4;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DEB4;
	sub_82CBBB58(ctx, base);
loc_8310DEB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8310dee0
	goto loc_8310DEE0;
loc_8310DECC:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// b 0x8310dedc
	goto loc_8310DEDC;
loc_8310DED4:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r18,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r18.u32);
loc_8310DEDC:
	// stwx r18,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r18.u32);
loc_8310DEE0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8310de64
	if (ctx.cr6.lt) goto loc_8310DE64;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r15,r27,3
	ctx.r15.s64 = ctx.r27.s64 + 3;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// beq cr6,0x8310df10
	if (ctx.cr6.eq) goto loc_8310DF10;
	// bl 0x82cbbb58
	ctx.lr = 0x8310DF10;
	sub_82CBBB58(ctx, base);
loc_8310DF10:
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// ori r11,r11,94
	ctx.r11.u64 = ctx.r11.u64 | 94;
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r29,r31,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// rlwimi r11,r10,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8310df54
	if (ctx.cr6.eq) goto loc_8310DF54;
	// oris r28,r28,15
	ctx.r28.u64 = ctx.r28.u64 | 983040;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8310df54
	if (!ctx.cr6.eq) goto loc_8310DF54;
	// rlwimi r28,r17,0,19,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r17.u32, 0) & 0x1FFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r17,0,1,3
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r17.u32, 0) & 0x70000000) | (ctx.r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_8310DF54:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8310c640
	ctx.lr = 0x8310DF68;
	sub_8310C640(ctx, base);
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310DF98;
	sub_8310CBE8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310DFC0;
	sub_8310CBE8(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8310dff8
	if (ctx.cr6.eq) goto loc_8310DFF8;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8310cff8
	ctx.lr = 0x8310DFE8;
	sub_8310CFF8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8310DFEC:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8310e058
	goto loc_8310E058;
loc_8310DFF8:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8310e054
	if (ctx.cr6.eq) goto loc_8310E054;
	// li r11,71
	ctx.r11.s64 = 71;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8310c640
	ctx.lr = 0x8310E024;
	sub_8310C640(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8310ca48
	ctx.lr = 0x8310E040;
	sub_8310CA48(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8310dfec
	goto loc_8310DFEC;
loc_8310E054:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8310E058:
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r15,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E074"))) PPC_WEAK_FUNC(sub_8310E074);
PPC_FUNC_IMPL(__imp__sub_8310E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E078"))) PPC_WEAK_FUNC(sub_8310E078);
PPC_FUNC_IMPL(__imp__sub_8310E078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x8310E080;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// stw r19,1600(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1600, ctx.r19.u32);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r10,28(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r28,r14,4
	ctx.r28.s64 = ctx.r14.s64 + 4;
	// lwz r17,16(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bne cr6,0x8310e0ec
	if (!ctx.cr6.eq) goto loc_8310E0EC;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// b 0x8310e0f4
	goto loc_8310E0F4;
loc_8310E0EC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8310E0F4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310e110
	if (ctx.cr0.eq) goto loc_8310E110;
	// lwz r11,1580(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310e110
	if (ctx.cr6.eq) goto loc_8310E110;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
loc_8310E110:
	// cmplwi cr6,r17,768
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// blt cr6,0x8310e130
	if (ctx.cr6.lt) goto loc_8310E130;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r23,1604
	ctx.r3.s64 = ctx.r23.s64 + 1604;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// bl 0x82ca3190
	ctx.lr = 0x8310E12C;
	sub_82CA3190(ctx, base);
	// b 0x8310e134
	goto loc_8310E134;
loc_8310E130:
	// lwz r18,104(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8310E134:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x8310e6d4
	if (ctx.cr6.eq) goto loc_8310E6D4;
	// addi r11,r18,401
	ctx.r11.s64 = ctx.r18.s64 + 401;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r11,r23
	ctx.r21.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_8310E14C:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x8310e79c
	if (!ctx.cr6.lt) goto loc_8310E79C;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r22,r4,0,3,3
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bgt cr6,0x8310e6c8
	if (ctx.cr6.gt) goto loc_8310E6C8;
	// beq cr6,0x8310e5d8
	if (ctx.cr6.eq) goto loc_8310E5D8;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bgt cr6,0x8310e6c8
	if (ctx.cr6.gt) goto loc_8310E6C8;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-152
	ctx.r12.s64 = ctx.r12.s64 + -152;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31983
	ctx.r12.s64 = -2096037888;
	// addi r12,r12,-7772
	ctx.r12.s64 = ctx.r12.s64 + -7772;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8310E6C8;
	case 1:
		goto loc_8310E1A4;
	case 2:
		goto loc_8310E200;
	case 3:
		goto loc_8310E20C;
	case 4:
		goto loc_8310E218;
	case 5:
		goto loc_8310E224;
	case 6:
		goto loc_8310E230;
	case 7:
		goto loc_8310E23C;
	case 8:
		goto loc_8310E248;
	case 9:
		goto loc_8310E254;
	case 10:
		goto loc_8310E260;
	case 11:
		goto loc_8310E26C;
	case 12:
		goto loc_8310E278;
	case 13:
		goto loc_8310E288;
	case 14:
		goto loc_8310E2C0;
	case 15:
		goto loc_8310E2D8;
	case 16:
		goto loc_8310E290;
	case 17:
		goto loc_8310E29C;
	case 18:
		goto loc_8310E570;
	case 19:
		goto loc_8310E2CC;
	case 20:
		goto loc_8310E2E4;
	case 21:
		goto loc_8310E2F0;
	case 22:
		goto loc_8310E300;
	case 23:
		goto loc_8310E308;
	case 24:
		goto loc_8310E310;
	case 25:
		goto loc_8310E548;
	case 26:
		goto loc_8310E548;
	case 27:
		goto loc_8310E548;
	case 28:
		goto loc_8310E548;
	case 29:
		goto loc_8310E548;
	case 30:
		goto loc_8310E548;
	case 31:
		goto loc_8310E3D0;
	case 32:
		goto loc_8310E57C;
	case 33:
		goto loc_8310E588;
	case 34:
		goto loc_8310E594;
	case 35:
		goto loc_8310E5C0;
	case 36:
		goto loc_8310E5CC;
	case 37:
		goto loc_8310E594;
	case 38:
		goto loc_8310E548;
	case 39:
		goto loc_8310E548;
	case 40:
		goto loc_8310E548;
	case 41:
		goto loc_8310E548;
	case 42:
		goto loc_8310E548;
	case 43:
		goto loc_8310E548;
	case 44:
		goto loc_8310E548;
	case 45:
		goto loc_8310E548;
	case 46:
		goto loc_8310E318;
	case 47:
		goto loc_8310E538;
	case 48:
		goto loc_8310E540;
	case 49:
		goto loc_8310E6C8;
	case 50:
		goto loc_8310E6C8;
	case 51:
		goto loc_8310E6C8;
	case 52:
		goto loc_8310E6C8;
	case 53:
		goto loc_8310E6C8;
	case 54:
		goto loc_8310E6C8;
	case 55:
		goto loc_8310E6C8;
	case 56:
		goto loc_8310E6C8;
	case 57:
		goto loc_8310E6C8;
	case 58:
		goto loc_8310E6C8;
	case 59:
		goto loc_8310E6C8;
	case 60:
		goto loc_8310E6C8;
	case 61:
		goto loc_8310E6C8;
	case 62:
		goto loc_8310E6C8;
	case 63:
		goto loc_8310E6C8;
	case 64:
		goto loc_8310E6C8;
	case 65:
		goto loc_8310E6C8;
	case 66:
		goto loc_8310E6C8;
	case 67:
		goto loc_8310E6C8;
	case 68:
		goto loc_8310E6C8;
	case 69:
		goto loc_8310E6C8;
	case 70:
		goto loc_8310E6C8;
	case 71:
		goto loc_8310E6C8;
	case 72:
		goto loc_8310E6C8;
	case 73:
		goto loc_8310E6C8;
	case 74:
		goto loc_8310E6C8;
	case 75:
		goto loc_8310E6C8;
	case 76:
		goto loc_8310E6C8;
	case 77:
		goto loc_8310E6C8;
	case 78:
		goto loc_8310E2A8;
	case 79:
		goto loc_8310E2B4;
	case 80:
		goto loc_8310E6C8;
	case 81:
		goto loc_8310E540;
	case 82:
		goto loc_8310E6C8;
	case 83:
		goto loc_8310E6C8;
	case 84:
		goto loc_8310E6C8;
	case 85:
		goto loc_8310E6C8;
	case 86:
		goto loc_8310E6C8;
	case 87:
		goto loc_8310E6C8;
	case 88:
		goto loc_8310E6C8;
	case 89:
		goto loc_8310E6C8;
	case 90:
		goto loc_8310E6C8;
	case 91:
		goto loc_8310E6C8;
	case 92:
		goto loc_8310E6C8;
	case 93:
		goto loc_8310E6C8;
	case 94:
		goto loc_8310E328;
	case 95:
		goto loc_8310E390;
	case 96:
		goto loc_8310E548;
	default:
		__builtin_unreachable();
	}
loc_8310E1A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// addi r11,r11,-768
	ctx.r11.s64 = ctx.r11.s64 + -768;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r31,r11,71
	ctx.r31.s64 = ctx.r11.s64 + 71;
loc_8310E1C8:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r27,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2000;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x8310e5e0
	if (!ctx.cr6.eq) goto loc_8310E5E0;
	// cmplwi cr6,r17,768
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// blt cr6,0x8310e5e0
	if (ctx.cr6.lt) goto loc_8310E5E0;
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x8310e5e4
	goto loc_8310E5E4;
loc_8310E200:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E20C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,91
	ctx.r31.s64 = 91;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E218:
	// li r30,3
	ctx.r30.s64 = 3;
	// li r31,64
	ctx.r31.s64 = 64;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E224:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,73
	ctx.r31.s64 = 73;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E230:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,81
	ctx.r31.s64 = 81;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E23C:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,85
	ctx.r31.s64 = 85;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E248:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E254:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,35
	ctx.r31.s64 = 35;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E260:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,68
	ctx.r31.s64 = 68;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E26C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,65
	ctx.r31.s64 = 65;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E278:
	// lis r31,5
	ctx.r31.s64 = 327680;
loc_8310E27C:
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r31,r31,86
	ctx.r31.u64 = ctx.r31.u64 | 86;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E288:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x8310e27c
	goto loc_8310E27C;
loc_8310E290:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,57
	ctx.r31.s64 = 57;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E29C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,36
	ctx.r31.s64 = 36;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E2A8:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,46
	ctx.r31.s64 = 46;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E2B4:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,61
	ctx.r31.s64 = 61;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E2C0:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,45
	ctx.r31.s64 = 45;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E2CC:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,49
	ctx.r31.s64 = 49;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E2D8:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,60
	ctx.r31.s64 = 60;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E2E4:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,69
	ctx.r31.s64 = 69;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E2F0:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_8310E2F4:
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r31,r31,69
	ctx.r31.u64 = ctx.r31.u64 | 69;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E300:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x8310e2f4
	goto loc_8310E2F4;
loc_8310E308:
	// lis r31,3
	ctx.r31.s64 = 196608;
	// b 0x8310e2f4
	goto loc_8310E2F4;
loc_8310E310:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x8310e2f4
	goto loc_8310E2F4;
loc_8310E318:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r31,r31,72
	ctx.r31.u64 = ctx.r31.u64 | 72;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E328:
	// rlwinm r11,r4,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0x7;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8310e380
	if (ctx.cr6.eq) goto loc_8310E380;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8310e378
	if (ctx.cr6.eq) goto loc_8310E378;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8310e370
	if (ctx.cr6.eq) goto loc_8310E370;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8310e368
	if (ctx.cr6.eq) goto loc_8310E368;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8310e360
	if (ctx.cr6.eq) goto loc_8310E360;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x8310e384
	goto loc_8310E384;
loc_8310E360:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x8310e384
	goto loc_8310E384;
loc_8310E368:
	// li r31,86
	ctx.r31.s64 = 86;
	// b 0x8310e388
	goto loc_8310E388;
loc_8310E370:
	// lis r31,5
	ctx.r31.s64 = 327680;
	// b 0x8310e384
	goto loc_8310E384;
loc_8310E378:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x8310e384
	goto loc_8310E384;
loc_8310E380:
	// lis r31,3
	ctx.r31.s64 = 196608;
loc_8310E384:
	// ori r31,r31,86
	ctx.r31.u64 = ctx.r31.u64 | 86;
loc_8310E388:
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E390:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8310ddc8
	ctx.lr = 0x8310E3B8;
	sub_8310DDC8(ctx, base);
loc_8310E3B8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8310E3C8:
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x8310e6c8
	goto loc_8310E6C8;
loc_8310E3D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8310e538
	if (ctx.cr6.eq) goto loc_8310E538;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// bne cr6,0x8310e49c
	if (!ctx.cr6.eq) goto loc_8310E49C;
	// cmplwi cr6,r17,768
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// bge cr6,0x8310e40c
	if (!ctx.cr6.lt) goto loc_8310E40C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310E40C;
	sub_82CBBB58(ctx, base);
loc_8310E40C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x8310e428
	if (ctx.cr6.eq) goto loc_8310E428;
	// bl 0x82cbbb58
	ctx.lr = 0x8310E428;
	sub_82CBBB58(ctx, base);
loc_8310E428:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwimi r11,r10,8,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwimi r10,r11,5,16,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xFFE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFF001F);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwimi r11,r10,17,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// bl 0x8310cab0
	ctx.lr = 0x8310E488;
	sub_8310CAB0(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// b 0x8310e538
	goto loc_8310E538;
loc_8310E49C:
	// cmplwi cr6,r17,768
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// bge cr6,0x8310e4a8
	if (!ctx.cr6.lt) goto loc_8310E4A8;
	// bl 0x82cbbb58
	ctx.lr = 0x8310E4A8;
	sub_82CBBB58(ctx, base);
loc_8310E4A8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// beq cr6,0x8310e4c4
	if (ctx.cr6.eq) goto loc_8310E4C4;
	// bl 0x82cbbb58
	ctx.lr = 0x8310E4C4;
	sub_82CBBB58(ctx, base);
loc_8310E4C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310e508
	if (ctx.cr6.eq) goto loc_8310E508;
	// lis r10,6144
	ctx.r10.s64 = 402653184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310e500
	if (ctx.cr6.eq) goto loc_8310E500;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310e4f8
	if (ctx.cr6.eq) goto loc_8310E4F8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x8310e50c
	goto loc_8310E50C;
loc_8310E4F8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8310e50c
	goto loc_8310E50C;
loc_8310E500:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8310e50c
	goto loc_8310E50C;
loc_8310E508:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8310E50C:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,24,5,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7000000;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// rlwinm r10,r10,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_8310E538:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// b 0x8310e6c8
	goto loc_8310E6C8;
loc_8310E540:
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// b 0x8310e6c8
	goto loc_8310E6C8;
loc_8310E548:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8310d100
	ctx.lr = 0x8310E56C;
	sub_8310D100(ctx, base);
	// b 0x8310e3b8
	goto loc_8310E3B8;
loc_8310E570:
	// li r30,3
	ctx.r30.s64 = 3;
	// li r31,63
	ctx.r31.s64 = 63;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E57C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,78
	ctx.r31.s64 = 78;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E588:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,19
	ctx.r31.s64 = 19;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E594:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8310daa8
	ctx.lr = 0x8310E5BC;
	sub_8310DAA8(ctx, base);
	// b 0x8310e3b8
	goto loc_8310E3B8;
loc_8310E5C0:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E5CC:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,76
	ctx.r31.s64 = 76;
	// b 0x8310e1c8
	goto loc_8310E1C8;
loc_8310E5D8:
	// rlwinm r11,r4,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x1FFFC;
	// b 0x8310e3c8
	goto loc_8310E3C8;
loc_8310E5E0:
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
loc_8310E5E4:
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8310e618
	if (ctx.cr6.eq) goto loc_8310E618;
	// li r11,33
	ctx.r11.s64 = 33;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r4,r11,0,19,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE000);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwimi r4,r11,0,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x8310e61c
	goto loc_8310E61C;
loc_8310E618:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_8310E61C:
	// bl 0x8310c640
	ctx.lr = 0x8310E620;
	sub_8310C640(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_8310E628:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8310e690
	if (!ctx.cr6.lt) goto loc_8310E690;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r4,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8310e658
	if (!ctx.cr6.eq) goto loc_8310E658;
	// cmplwi cr6,r17,512
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 512, ctx.xer);
	// blt cr6,0x8310e658
	if (ctx.cr6.lt) goto loc_8310E658;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x8310e65c
	goto loc_8310E65C;
loc_8310E658:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_8310E65C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8310cbe8
	ctx.lr = 0x8310E680;
	sub_8310CBE8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x8310e628
	if (ctx.cr6.lt) goto loc_8310E628;
loc_8310E690:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8310e6c4
	if (ctx.cr6.eq) goto loc_8310E6C4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8310cff8
	ctx.lr = 0x8310E6B8;
	sub_8310CFF8(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x8310e6c8
	goto loc_8310E6C8;
loc_8310E6C4:
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8310E6C8:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x8310e14c
	if (!ctx.cr6.eq) goto loc_8310E14C;
loc_8310E6D4:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x8310e79c
	if (!ctx.cr6.lt) goto loc_8310E79C;
	// cmplwi cr6,r17,768
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// bge cr6,0x8310e740
	if (!ctx.cr6.lt) goto loc_8310E740;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8310e738
	if (ctx.cr0.eq) goto loc_8310E738;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
	// li r10,71
	ctx.r10.s64 = 71;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,77
	ctx.r9.s64 = 5046272;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,50
	ctx.r9.u64 = ctx.r9.u64 | 50;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8310E738:
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8310E740:
	// li r11,40
	ctx.r11.s64 = 40;
	// addic. r31,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r31.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bne 0x8310e758
	if (!ctx.cr0.eq) goto loc_8310E758;
	// bl 0x82cbbb58
	ctx.lr = 0x8310E758;
	sub_82CBBB58(ctx, base);
loc_8310E758:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// subf r10,r14,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r14.s64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8310e774
	if (ctx.cr6.eq) goto loc_8310E774;
	// bl 0x82cbbb58
	ctx.lr = 0x8310E774;
	sub_82CBBB58(ctx, base);
loc_8310E774:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8310E794:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_8310E79C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2921
	ctx.r3.u64 = ctx.r3.u64 | 2921;
	// b 0x8310e794
	goto loc_8310E794;
}

__attribute__((alias("__imp__sub_8310E7A8"))) PPC_WEAK_FUNC(sub_8310E7A8);
PPC_FUNC_IMPL(__imp__sub_8310E7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8310E7B0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,1140
	ctx.r5.s64 = 1140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82ca3190
	ctx.lr = 0x8310E7E0;
	sub_82CA3190(ctx, base);
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r25,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r25.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8310e804
	if (ctx.cr6.eq) goto loc_8310E804;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x82ca2c60
	ctx.lr = 0x8310E804;
	sub_82CA2C60(ctx, base);
loc_8310E804:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// beq cr6,0x8310e83c
	if (ctx.cr6.eq) goto loc_8310E83C;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x82ca3190
	ctx.lr = 0x8310E82C;
	sub_82CA3190(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8310E83C;
	sub_82CA2C60(ctx, base);
loc_8310E83C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8310e85c
	if (ctx.cr6.eq) goto loc_8310E85C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8310E85C;
	sub_82CA2C60(ctx, base);
loc_8310E85C:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// stw r10,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r10.u32);
	// beq cr6,0x8310e89c
	if (ctx.cr6.eq) goto loc_8310E89C;
	// rlwinm. r11,r27,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310e894
	if (ctx.cr0.eq) goto loc_8310E894;
	// rlwinm r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8310e8a0
	goto loc_8310E8A0;
loc_8310E894:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8310e8a0
	goto loc_8310E8A0;
loc_8310E89C:
	// rlwinm r11,r27,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 15) & 0x1;
loc_8310E8A0:
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8310E8B0"))) PPC_WEAK_FUNC(sub_8310E8B0);
PPC_FUNC_IMPL(__imp__sub_8310E8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8310e8e0
	if (ctx.cr6.eq) goto loc_8310E8E0;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca3190
	ctx.lr = 0x8310E8DC;
	sub_82CA3190(ctx, base);
	// b 0x8310ee24
	goto loc_8310EE24;
loc_8310E8E0:
	// lwz r10,1084(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1076(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1076);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,3056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3056);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,1088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r10,1060(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,1068(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8310e990
	if (ctx.cr6.gt) goto loc_8310E990;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8310E990:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r9,1056(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// lwz r10,1064(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x8310e9d4
	if (!ctx.cr6.gt) goto loc_8310E9D4;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_8310E9D4:
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,1076(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1076);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f9,3216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,1072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1072);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8310ea30
	if (ctx.cr6.eq) goto loc_8310EA30;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8310eaa0
	goto loc_8310EAA0;
loc_8310EA30:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x8310ea7c
	if (!ctx.cr6.eq) goto loc_8310EA7C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,2636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2636);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// bgt cr6,0x8310ea8c
	if (ctx.cr6.gt) goto loc_8310EA8C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2680);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8310eaa0
	goto loc_8310EAA0;
loc_8310EA7C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,3140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x8310ea98
	if (!ctx.cr6.gt) goto loc_8310EA98;
loc_8310EA8C:
	// fmuls f13,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8310eaa4
	goto loc_8310EAA4;
loc_8310EA98:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,3128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	ctx.f10.f64 = double(temp.f32);
loc_8310EAA0:
	// stfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8310EAA4:
	// lfs f8,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310eabc
	if (!ctx.cr6.gt) goto loc_8310EABC;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x8310eac0
	goto loc_8310EAC0;
loc_8310EABC:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_8310EAC0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8310ead0
	if (!ctx.cr6.gt) goto loc_8310EAD0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x8310eae4
	goto loc_8310EAE4;
loc_8310EAD0:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310eae0
	if (!ctx.cr6.gt) goto loc_8310EAE0;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x8310eae4
	goto loc_8310EAE4;
loc_8310EAE0:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_8310EAE4:
	// lfs f6,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f10
	ctx.cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x8310eaf8
	if (!ctx.cr6.gt) goto loc_8310EAF8;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x8310eb30
	goto loc_8310EB30;
loc_8310EAF8:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310eb08
	if (!ctx.cr6.gt) goto loc_8310EB08;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x8310eb0c
	goto loc_8310EB0C;
loc_8310EB08:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_8310EB0C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8310eb1c
	if (!ctx.cr6.gt) goto loc_8310EB1C;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x8310eb30
	goto loc_8310EB30;
loc_8310EB1C:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310eb2c
	if (!ctx.cr6.gt) goto loc_8310EB2C;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x8310eb30
	goto loc_8310EB30;
loc_8310EB2C:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_8310EB30:
	// lfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x8310eb44
	if (!ctx.cr6.gt) goto loc_8310EB44;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x8310ebbc
	goto loc_8310EBBC;
loc_8310EB44:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310eb54
	if (!ctx.cr6.gt) goto loc_8310EB54;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x8310eb58
	goto loc_8310EB58;
loc_8310EB54:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_8310EB58:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8310eb68
	if (!ctx.cr6.gt) goto loc_8310EB68;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x8310eb7c
	goto loc_8310EB7C;
loc_8310EB68:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310eb78
	if (!ctx.cr6.gt) goto loc_8310EB78;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x8310eb7c
	goto loc_8310EB7C;
loc_8310EB78:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_8310EB7C:
	// fcmpu cr6,f6,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x8310eb8c
	if (!ctx.cr6.gt) goto loc_8310EB8C;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x8310ebbc
	goto loc_8310EBBC;
loc_8310EB8C:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310eb9c
	if (!ctx.cr6.gt) goto loc_8310EB9C;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x8310eba0
	goto loc_8310EBA0;
loc_8310EB9C:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_8310EBA0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x8310ebbc
	if (ctx.cr6.gt) goto loc_8310EBBC;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x8310ebb8
	if (!ctx.cr6.gt) goto loc_8310EBB8;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// b 0x8310ebbc
	goto loc_8310EBBC;
loc_8310EBB8:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310EBBC:
	// lfs f10,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fcmpu cr6,f10,f7
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310ebd4
	if (!ctx.cr6.gt) goto loc_8310EBD4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8310ebd8
	goto loc_8310EBD8;
loc_8310EBD4:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310EBD8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8310ebe8
	if (!ctx.cr6.gt) goto loc_8310EBE8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8310ebfc
	goto loc_8310EBFC;
loc_8310EBE8:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310ebf8
	if (!ctx.cr6.gt) goto loc_8310EBF8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8310ebfc
	goto loc_8310EBFC;
loc_8310EBF8:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310EBFC:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x8310ec0c
	if (!ctx.cr6.gt) goto loc_8310EC0C;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// b 0x8310ec44
	goto loc_8310EC44;
loc_8310EC0C:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310ec1c
	if (!ctx.cr6.gt) goto loc_8310EC1C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8310ec20
	goto loc_8310EC20;
loc_8310EC1C:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310EC20:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8310ec30
	if (!ctx.cr6.gt) goto loc_8310EC30;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x8310ec44
	goto loc_8310EC44;
loc_8310EC30:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310ec40
	if (!ctx.cr6.gt) goto loc_8310EC40;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x8310ec44
	goto loc_8310EC44;
loc_8310EC40:
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
loc_8310EC44:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8310ecd0
	if (ctx.cr6.gt) goto loc_8310ECD0;
	// fcmpu cr6,f10,f7
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310ec60
	if (!ctx.cr6.gt) goto loc_8310EC60;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8310ec64
	goto loc_8310EC64;
loc_8310EC60:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310EC64:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8310ec74
	if (!ctx.cr6.gt) goto loc_8310EC74;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8310ec88
	goto loc_8310EC88;
loc_8310EC74:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310ec84
	if (!ctx.cr6.gt) goto loc_8310EC84;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8310ec88
	goto loc_8310EC88;
loc_8310EC84:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310EC88:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x8310ec98
	if (!ctx.cr6.gt) goto loc_8310EC98;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x8310ecd0
	goto loc_8310ECD0;
loc_8310EC98:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310eca8
	if (!ctx.cr6.gt) goto loc_8310ECA8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8310ecac
	goto loc_8310ECAC;
loc_8310ECA8:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310ECAC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8310ecbc
	if (!ctx.cr6.gt) goto loc_8310ECBC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8310ecd0
	goto loc_8310ECD0;
loc_8310ECBC:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x8310eccc
	if (!ctx.cr6.gt) goto loc_8310ECCC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8310ecd0
	goto loc_8310ECD0;
loc_8310ECCC:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_8310ECD0:
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8310ed04
	if (!ctx.cr6.lt) goto loc_8310ED04;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,3132(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3132);
	ctx.f0.f64 = double(temp.f32);
loc_8310ECEC:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8310ecec
	if (ctx.cr6.lt) goto loc_8310ECEC;
loc_8310ED04:
	// lwz r10,1036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r10,1028(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,1032(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,1040(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,1044(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,1048(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8310ed4c
	if (ctx.cr6.eq) goto loc_8310ED4C;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// b 0x8310ed50
	goto loc_8310ED50;
loc_8310ED4C:
	// rlwinm r10,r10,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
loc_8310ED50:
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r10,1112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// lwz r9,1108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r10,1132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,1136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r9,1104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// lwz r10,1100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1100);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r10,1128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,1124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
loc_8310EE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EE34"))) PPC_WEAK_FUNC(sub_8310EE34);
PPC_FUNC_IMPL(__imp__sub_8310EE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310EE38"))) PPC_WEAK_FUNC(sub_8310EE38);
PPC_FUNC_IMPL(__imp__sub_8310EE38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8310eef0
	if (!ctx.cr6.eq) goto loc_8310EEF0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8310ee98
	if (ctx.cr6.lt) goto loc_8310EE98;
	// beq cr6,0x8310eef0
	if (ctx.cr6.eq) goto loc_8310EEF0;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x8310ee60
	if (ctx.cr6.lt) goto loc_8310EE60;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8310EE60:
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r6,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
	// clrlwi r8,r6,27
	ctx.r8.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x8310eef0
	goto loc_8310EEF0;
loc_8310EE98:
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// andc r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_8310EEF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EEF8"))) PPC_WEAK_FUNC(sub_8310EEF8);
PPC_FUNC_IMPL(__imp__sub_8310EEF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8310efe0
	if (ctx.cr6.eq) goto loc_8310EFE0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8310ef74
	if (ctx.cr6.lt) goto loc_8310EF74;
	// bne cr6,0x8310efe0
	if (!ctx.cr6.eq) goto loc_8310EFE0;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,244
	ctx.r6.s64 = ctx.r10.s64 + 244;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r10,254
	ctx.r5.s64 = ctx.r10.s64 + 254;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x8310efe0
	goto loc_8310EFE0;
loc_8310EF74:
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r5,r10,236
	ctx.r5.s64 = ctx.r10.s64 + 236;
	// addi r10,r10,246
	ctx.r10.s64 = ctx.r10.s64 + 246;
	// andc r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_8310EFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EFE8"))) PPC_WEAK_FUNC(sub_8310EFE8);
PPC_FUNC_IMPL(__imp__sub_8310EFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f404
	if (ctx.cr0.eq) goto loc_8310F404;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f228
	if (!ctx.cr0.eq) goto loc_8310F228;
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f0b8
	if (!ctx.cr0.eq) goto loc_8310F0B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1096, ctx.r11.u32);
	// bne 0x8310f060
	if (!ctx.cr0.eq) goto loc_8310F060;
	// lwz r11,1076(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1076);
	// lwz r10,1100(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1100);
	// lwz r9,1108(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1108);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,1116(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r8,1076(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1076, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r10,1100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1100, ctx.r10.u32);
	// stw r11,1108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
	// beq cr6,0x8310f060
	if (ctx.cr6.eq) goto loc_8310F060;
	// lwz r10,1120(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8310f060
	if (ctx.cr6.eq) goto loc_8310F060;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
loc_8310F060:
	// lwz r11,1072(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1072);
	// lwz r10,1104(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1104);
	// lwz r9,1112(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1112);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,1116(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r8,1072(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1072, ctx.r8.u32);
	// stw r10,1104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1104, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,1112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1112, ctx.r11.u32);
	// beq cr6,0x8310f0a4
	if (ctx.cr6.eq) goto loc_8310F0A4;
	// lwz r10,1120(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8310f0a4
	if (ctx.cr6.eq) goto loc_8310F0A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1112, ctx.r11.u32);
loc_8310F0A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1116, ctx.r10.u32);
	// b 0x8310f570
	goto loc_8310F570;
loc_8310F0B8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r3,r3,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,1120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1120, ctx.r31.u32);
	// stw r30,1096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1096, ctx.r30.u32);
	// bne 0x8310f0e8
	if (!ctx.cr0.eq) goto loc_8310F0E8;
	// lwz r11,1124(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1124);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,1132(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1124, ctx.r10.u32);
	// stw r11,1132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1132, ctx.r11.u32);
loc_8310F0E8:
	// lwz r11,1128(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1128);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,1136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1128(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1128, ctx.r10.u32);
	// stw r11,1136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1136, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r10,0,10,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f1b4
	if (!ctx.cr0.eq) goto loc_8310F1B4;
	// lwz r11,1020(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310f1b4
	if (ctx.cr6.eq) goto loc_8310F1B4;
	// lwz r9,1024(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8310F128:
	// stw r30,1048(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1048, ctx.r30.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8310f144
	if (!ctx.cr6.eq) goto loc_8310F144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8310F144:
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8310f180
	if (ctx.cr6.eq) goto loc_8310F180;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8310f164
	if (ctx.cr6.eq) goto loc_8310F164;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8310f168
	if (!ctx.cr6.eq) goto loc_8310F168;
loc_8310F164:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8310F168:
	// lwz r11,1020(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310f128
	if (ctx.cr6.lt) goto loc_8310F128;
	// b 0x8310f570
	goto loc_8310F570;
loc_8310F180:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8310f190
	if (ctx.cr6.eq) goto loc_8310F190;
	// clrlwi. r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f570
	if (!ctx.cr0.eq) goto loc_8310F570;
loc_8310F190:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8310f1a4
	if (!ctx.cr6.eq) goto loc_8310F1A4;
	// lwz r11,1060(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1060(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1060, ctx.r11.u32);
loc_8310F1A4:
	// lwz r11,1056(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1056, ctx.r11.u32);
	// b 0x8310f570
	goto loc_8310F570;
loc_8310F1B4:
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f1dc
	if (!ctx.cr0.eq) goto loc_8310F1DC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8310f1d0
	if (!ctx.cr6.eq) goto loc_8310F1D0;
	// lwz r11,1060(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1060(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1060, ctx.r11.u32);
loc_8310F1D0:
	// lwz r11,1056(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1056, ctx.r11.u32);
loc_8310F1DC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-1224
	ctx.r11.s64 = ctx.r11.s64 + -1224;
	// bne cr6,0x8310f208
	if (!ctx.cr6.eq) goto loc_8310F208;
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r9,1068(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1068);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,1068(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1068, ctx.r10.u32);
loc_8310F208:
	// lhz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r10,1064(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1064);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1064(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1064, ctx.r11.u32);
	// b 0x8310f570
	goto loc_8310F570;
loc_8310F228:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm. r3,r3,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,1096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1096, ctx.r11.u32);
	// bne 0x8310f270
	if (!ctx.cr0.eq) goto loc_8310F270;
	// lwz r10,1100(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1100);
	// lwz r11,1108(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1108);
	// lwz r9,1116(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,1100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1100, ctx.r10.u32);
	// stw r11,1108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
	// beq cr6,0x8310f270
	if (ctx.cr6.eq) goto loc_8310F270;
	// lwz r10,1120(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8310f270
	if (ctx.cr6.eq) goto loc_8310F270;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
loc_8310F270:
	// lwz r10,1104(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1104);
	// lwz r11,1112(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1112);
	// lwz r9,1116(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1104, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,1112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1112, ctx.r11.u32);
	// beq cr6,0x8310f2ac
	if (ctx.cr6.eq) goto loc_8310F2AC;
	// lwz r11,1120(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8310f2ac
	if (ctx.cr6.eq) goto loc_8310F2AC;
	// lwz r11,1108(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
loc_8310F2AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,980(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 980);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,1120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1120, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,1116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1116, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,12,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,180(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x8310f3dc
	if (ctx.cr6.eq) goto loc_8310F3DC;
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bgt cr6,0x8310f330
	if (ctx.cr6.gt) goto loc_8310F330;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,48
	ctx.r12.s64 = ctx.r12.s64 + 48;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// lis r12,-31983
	ctx.r12.s64 = -2096037888;
	// addi r12,r12,-3308
	ctx.r12.s64 = ctx.r12.s64 + -3308;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8310F314;
	case 1:
		goto loc_8310F314;
	case 2:
		goto loc_8310F314;
	case 3:
		goto loc_8310F314;
	case 4:
		goto loc_8310F314;
	case 5:
		goto loc_8310F314;
	case 6:
		goto loc_8310F314;
	case 7:
		goto loc_8310F314;
	case 8:
		goto loc_8310F314;
	case 9:
		goto loc_8310F314;
	case 10:
		goto loc_8310F314;
	case 11:
		goto loc_8310F314;
	case 12:
		goto loc_8310F314;
	case 13:
		goto loc_8310F314;
	case 14:
		goto loc_8310F314;
	case 15:
		goto loc_8310F314;
	case 16:
		goto loc_8310F314;
	case 17:
		goto loc_8310F314;
	case 18:
		goto loc_8310F314;
	case 19:
		goto loc_8310F314;
	case 20:
		goto loc_8310F314;
	case 21:
		goto loc_8310F31C;
	case 22:
		goto loc_8310F314;
	case 23:
		goto loc_8310F314;
	case 24:
		goto loc_8310F314;
	case 25:
		goto loc_8310F314;
	case 26:
		goto loc_8310F31C;
	case 27:
		goto loc_8310F314;
	case 28:
		goto loc_8310F31C;
	case 29:
		goto loc_8310F32C;
	case 30:
		goto loc_8310F314;
	case 31:
		goto loc_8310F314;
	case 32:
		goto loc_8310F31C;
	case 33:
		goto loc_8310F314;
	case 34:
		goto loc_8310F31C;
	case 35:
		goto loc_8310F32C;
	case 36:
		goto loc_8310F314;
	case 37:
		goto loc_8310F31C;
	case 38:
		goto loc_8310F32C;
	case 39:
		goto loc_8310F314;
	case 40:
		goto loc_8310F314;
	case 41:
		goto loc_8310F314;
	case 42:
		goto loc_8310F314;
	case 43:
		goto loc_8310F314;
	case 44:
		goto loc_8310F314;
	case 45:
		goto loc_8310F314;
	case 46:
		goto loc_8310F314;
	case 47:
		goto loc_8310F314;
	case 48:
		goto loc_8310F314;
	case 49:
		goto loc_8310F314;
	case 50:
		goto loc_8310F31C;
	case 51:
		goto loc_8310F31C;
	case 52:
		goto loc_8310F31C;
	case 53:
		goto loc_8310F31C;
	case 54:
		goto loc_8310F31C;
	case 55:
		goto loc_8310F31C;
	case 56:
		goto loc_8310F31C;
	case 57:
		goto loc_8310F324;
	case 58:
		goto loc_8310F314;
	case 59:
		goto loc_8310F314;
	case 60:
		goto loc_8310F314;
	case 61:
		goto loc_8310F314;
	case 62:
		goto loc_8310F314;
	case 63:
		goto loc_8310F314;
	default:
		__builtin_unreachable();
	}
loc_8310F314:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x8310f330
	goto loc_8310F330;
loc_8310F31C:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x8310f330
	goto loc_8310F330;
loc_8310F324:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x8310f330
	goto loc_8310F330;
loc_8310F32C:
	// li r9,4
	ctx.r9.s64 = 4;
loc_8310F330:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r8,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8310f348
	if (!ctx.cr6.eq) goto loc_8310F348;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r10,r11,11,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3;
loc_8310F348:
	// rlwinm r11,r8,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8310f35c
	if (!ctx.cr6.eq) goto loc_8310F35C;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,11,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3;
loc_8310F35C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8310f378
	if (!ctx.cr6.eq) goto loc_8310F378;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8310f378
	if (!ctx.cr6.eq) goto loc_8310F378;
	// cmplwi cr6,r4,38
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 38, ctx.xer);
	// bne cr6,0x8310f378
	if (!ctx.cr6.eq) goto loc_8310F378;
	// li r9,2
	ctx.r9.s64 = 2;
loc_8310F378:
	// rlwinm r11,r8,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8310f38c
	if (!ctx.cr6.eq) goto loc_8310F38C;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_8310F38C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310f3a4
	if (ctx.cr6.eq) goto loc_8310F3A4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
loc_8310F3A4:
	// rlwinm r11,r8,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8310f3b8
	if (!ctx.cr6.eq) goto loc_8310F3B8;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,9,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
loc_8310F3B8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8310f3e0
	if (!ctx.cr6.eq) goto loc_8310F3E0;
	// lwz r11,192(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f3e0
	if (ctx.cr0.eq) goto loc_8310F3E0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8310f3e0
	goto loc_8310F3E0;
loc_8310F3DC:
	// stw r30,1044(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1044, ctx.r30.u32);
loc_8310F3E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8310f3f4
	if (!ctx.cr6.eq) goto loc_8310F3F4;
	// lwz r11,1076(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1076);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,1076(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1076, ctx.r11.u32);
loc_8310F3F4:
	// lwz r11,1072(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1072);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,1072(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1072, ctx.r11.u32);
	// b 0x8310f570
	goto loc_8310F570;
loc_8310F404:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f43c
	if (ctx.cr0.eq) goto loc_8310F43C;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,1120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1120, ctx.r31.u32);
	// stw r31,1096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1096, ctx.r31.u32);
	// bne 0x8310f42c
	if (!ctx.cr0.eq) goto loc_8310F42C;
	// lwz r11,1084(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1084);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1084(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1084, ctx.r11.u32);
loc_8310F42C:
	// lwz r11,1080(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1080);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1080(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1080, ctx.r11.u32);
	// b 0x8310f570
	goto loc_8310F570;
loc_8310F43C:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f570
	if (ctx.cr0.eq) goto loc_8310F570;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bne cr6,0x8310f45c
	if (!ctx.cr6.eq) goto loc_8310F45C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1096, ctx.r11.u32);
loc_8310F45C:
	// lwz r11,1096(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1096);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8310f488
	if (!ctx.cr6.eq) goto loc_8310F488;
	// lwz r10,1132(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1132);
	// lwz r11,1136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1132, ctx.r10.u32);
	// stw r11,1136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1136, ctx.r11.u32);
	// b 0x8310f494
	goto loc_8310F494;
loc_8310F488:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8310f494
	if (!ctx.cr6.eq) goto loc_8310F494;
	// stw r30,1120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1120, ctx.r30.u32);
loc_8310F494:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8310f598
	if (ctx.cr6.eq) goto loc_8310F598;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8310f598
	if (ctx.cr6.eq) goto loc_8310F598;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8310f5a8
	if (ctx.cr6.eq) goto loc_8310F5A8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x8310f598
	if (ctx.cr6.eq) goto loc_8310F598;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8310f598
	if (ctx.cr6.eq) goto loc_8310F598;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x8310f598
	if (ctx.cr6.eq) goto loc_8310F598;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8310f4dc
	if (ctx.cr6.eq) goto loc_8310F4DC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8310f514
	if (!ctx.cr6.eq) goto loc_8310F514;
loc_8310F4DC:
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,976(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 976);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f4f8
	if (!ctx.cr0.eq) goto loc_8310F4F8;
	// stw r30,1028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1028, ctx.r30.u32);
loc_8310F4F8:
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,1016(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1016);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f514
	if (ctx.cr0.eq) goto loc_8310F514;
	// stw r30,1032(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1032, ctx.r30.u32);
loc_8310F514:
	// lwz r11,1088(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8310F51C:
	// stw r11,1088(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1088, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8310f538
	if (ctx.cr6.eq) goto loc_8310F538;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8310f550
	if (!ctx.cr6.eq) goto loc_8310F550;
loc_8310F538:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310f550
	if (!ctx.cr0.eq) goto loc_8310F550;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f550
	if (ctx.cr0.eq) goto loc_8310F550;
	// stw r30,1036(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1036, ctx.r30.u32);
loc_8310F550:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x8310f570
	if (!ctx.cr6.eq) goto loc_8310F570;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f570
	if (ctx.cr0.eq) goto loc_8310F570;
	// stw r30,1040(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1040, ctx.r30.u32);
loc_8310F570:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,1088(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// ori r11,r11,34464
	ctx.r11.u64 = ctx.r11.u64 | 34464;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r3,r3,0,27,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8310F598:
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8310f5a8
	if (ctx.cr6.eq) goto loc_8310F5A8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8310f5bc
	if (!ctx.cr6.eq) goto loc_8310F5BC;
loc_8310F5A8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310f514
	if (!ctx.cr0.eq) goto loc_8310F514;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f514
	if (!ctx.cr0.eq) goto loc_8310F514;
loc_8310F5BC:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r10,25,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7;
	// rlwinm r10,r10,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1F;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310f5e4
	if (!ctx.cr0.eq) goto loc_8310F5E4;
	// stw r30,1028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1028, ctx.r30.u32);
loc_8310F5E4:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r10,25,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7;
	// rlwinm r10,r10,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1F;
	// addi r11,r11,246
	ctx.r11.s64 = ctx.r11.s64 + 246;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f60c
	if (ctx.cr0.eq) goto loc_8310F60C;
	// stw r30,1032(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1032, ctx.r30.u32);
loc_8310F60C:
	// lwz r11,1088(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8310f51c
	goto loc_8310F51C;
}

__attribute__((alias("__imp__sub_8310F618"))) PPC_WEAK_FUNC(sub_8310F618);
PPC_FUNC_IMPL(__imp__sub_8310F618) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r10,r11,-4120
	ctx.r10.s64 = ctx.r11.s64 + -4120;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82b97fe0
	ctx.lr = 0x8310F658;
	sub_82B97FE0(ctx, base);
	// li r11,-1000
	ctx.r11.s64 = -1000;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8310F680"))) PPC_WEAK_FUNC(sub_8310F680);
PPC_FUNC_IMPL(__imp__sub_8310F680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x8310F688;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// bl 0x82b92af0
	ctx.lr = 0x8310F6A4;
	sub_82B92AF0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310f6cc
	if (ctx.cr6.eq) goto loc_8310F6CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8310f6cc
	if (ctx.cr6.eq) goto loc_8310F6CC;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8310f6cc
	if (ctx.cr0.eq) goto loc_8310F6CC;
	// addic. r21,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r21.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x8310f6d4
	if (!ctx.cr0.eq) goto loc_8310F6D4;
loc_8310F6CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8310f844
	goto loc_8310F844;
loc_8310F6D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r17,12(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// clrlwi r18,r10,31
	ctx.r18.u64 = ctx.r10.u32 & 0x1;
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8310f840
	if (ctx.cr6.eq) goto loc_8310F840;
loc_8310F6F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lhz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// add r19,r11,r21
	ctx.r19.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lhz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// bne cr6,0x8310f73c
	if (!ctx.cr6.eq) goto loc_8310F73C;
	// rlwinm. r9,r31,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8310f73c
	if (ctx.cr0.eq) goto loc_8310F73C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8310f72c
	if (!ctx.cr6.eq) goto loc_8310F72C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// xori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 ^ 128;
loc_8310F72C:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8310f73c
	if (!ctx.cr6.eq) goto loc_8310F73C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// xori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 ^ 16;
loc_8310F73C:
	// clrlwi r9,r31,31
	ctx.r9.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8310f808
	if (ctx.cr6.lt) goto loc_8310F808;
	// bne cr6,0x8310f830
	if (!ctx.cr6.eq) goto loc_8310F830;
	// subfic r9,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r27.s64;
	// lwz r24,16(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// clrlwi. r22,r11,16
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// beq 0x8310f830
	if (ctx.cr0.eq) goto loc_8310F830;
	// add r25,r24,r21
	ctx.r25.u64 = ctx.r24.u64 + ctx.r21.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// rlwinm r23,r29,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8310F78C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8310f7c8
	if (ctx.cr6.eq) goto loc_8310F7C8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8310f7c0
	if (!ctx.cr6.gt) goto loc_8310F7C0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8310F7A8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8310f7a8
	if (!ctx.cr0.eq) goto loc_8310F7A8;
loc_8310F7C0:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// b 0x8310f7cc
	goto loc_8310F7CC;
loc_8310F7C8:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_8310F7CC:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8310F7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8310f844
	if (ctx.cr0.lt) goto loc_8310F844;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8310f78c
	if (ctx.cr6.lt) goto loc_8310F78C;
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// b 0x8310f830
	goto loc_8310F830;
loc_8310F808:
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8310F828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8310f844
	if (ctx.cr0.lt) goto loc_8310F844;
loc_8310F830:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r16,r17
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x8310f6f8
	if (ctx.cr6.lt) goto loc_8310F6F8;
loc_8310F840:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310F844:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310F84C"))) PPC_WEAK_FUNC(sub_8310F84C);
PPC_FUNC_IMPL(__imp__sub_8310F84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310F850"))) PPC_WEAK_FUNC(sub_8310F850);
PPC_FUNC_IMPL(__imp__sub_8310F850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8310F858;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82b92af0
	ctx.lr = 0x8310F870;
	sub_82B92AF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq 0x8310f8b0
	if (ctx.cr0.eq) goto loc_8310F8B0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8310f8b8
	goto loc_8310F8B8;
loc_8310F8B0:
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310F8B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8310f910
	if (!ctx.cr6.eq) goto loc_8310F910;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r30,r5,12,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xF;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// rlwinm. r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310f90c
	if (ctx.cr0.eq) goto loc_8310F90C;
loc_8310F8EC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,24,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8310f900
	if (ctx.cr6.gt) goto loc_8310F900;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8310F900:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8310f8ec
	if (!ctx.cr0.eq) goto loc_8310F8EC;
loc_8310F90C:
	// rlwimi r5,r30,20,8,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 20) & 0xF00000) | (ctx.r5.u64 & 0xFFFFFFFFFF0FFFFF);
loc_8310F910:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8310e7a8
	ctx.lr = 0x8310F930;
	sub_8310E7A8(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-4552
	ctx.r5.s64 = ctx.r11.s64 + -4552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b983d8
	ctx.lr = 0x8310F944;
	sub_82B983D8(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r6,r11,-4360
	ctx.r6.s64 = ctx.r11.s64 + -4360;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310f680
	ctx.lr = 0x8310F95C;
	sub_8310F680(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8310f618
	ctx.lr = 0x8310F964;
	sub_8310F618(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8310e8b0
	ctx.lr = 0x8310F970;
	sub_8310E8B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8310F97C"))) PPC_WEAK_FUNC(sub_8310F97C);
PPC_FUNC_IMPL(__imp__sub_8310F97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310F980"))) PPC_WEAK_FUNC(sub_8310F980);
PPC_FUNC_IMPL(__imp__sub_8310F980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310f994
	if (!ctx.cr0.eq) goto loc_8310F994;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310F994:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8310f9a8
	if (ctx.cr6.lt) goto loc_8310F9A8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// ble cr6,0x8310f9b8
	if (!ctx.cr6.gt) goto loc_8310F9B8;
loc_8310F9A8:
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// blt cr6,0x8310f9c0
	if (ctx.cr6.lt) goto loc_8310F9C0;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// bgt cr6,0x8310f9c0
	if (ctx.cr6.gt) goto loc_8310F9C0;
loc_8310F9B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F9C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310F9C4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F9CC"))) PPC_WEAK_FUNC(sub_8310F9CC);
PPC_FUNC_IMPL(__imp__sub_8310F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310F9D0"))) PPC_WEAK_FUNC(sub_8310F9D0);
PPC_FUNC_IMPL(__imp__sub_8310F9D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310f9e4
	if (!ctx.cr0.eq) goto loc_8310F9E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310F9E4:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8310fa04
	if (ctx.cr6.eq) goto loc_8310FA04;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x8310fa04
	if (ctx.cr6.eq) goto loc_8310FA04;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8310fa08
	if (!ctx.cr6.eq) goto loc_8310FA08;
loc_8310FA04:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8310FA08:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FA10"))) PPC_WEAK_FUNC(sub_8310FA10);
PPC_FUNC_IMPL(__imp__sub_8310FA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8310fa2c
	if (ctx.cr6.lt) goto loc_8310FA2C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8310fa30
	if (!ctx.cr6.gt) goto loc_8310FA30;
loc_8310FA2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310FA30:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310fa5c
	if (!ctx.cr0.eq) goto loc_8310FA5C;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// blt cr6,0x8310fa48
	if (ctx.cr6.lt) goto loc_8310FA48;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// ble cr6,0x8310fa5c
	if (!ctx.cr6.gt) goto loc_8310FA5C;
loc_8310FA48:
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x8310fa5c
	if (ctx.cr6.eq) goto loc_8310FA5C;
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8310fa60
	if (!ctx.cr6.eq) goto loc_8310FA60;
loc_8310FA5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8310FA60:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FA68"))) PPC_WEAK_FUNC(sub_8310FA68);
PPC_FUNC_IMPL(__imp__sub_8310FA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8310fa84
	if (ctx.cr6.lt) goto loc_8310FA84;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8310fa88
	if (!ctx.cr6.gt) goto loc_8310FA88;
loc_8310FA84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310FA88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310fabc
	if (!ctx.cr0.eq) goto loc_8310FABC;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8310faa4
	if (ctx.cr6.lt) goto loc_8310FAA4;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8310faa8
	if (!ctx.cr6.gt) goto loc_8310FAA8;
loc_8310FAA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310FAA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310fabc
	if (!ctx.cr0.eq) goto loc_8310FABC;
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8310fac0
	if (!ctx.cr6.eq) goto loc_8310FAC0;
loc_8310FABC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8310FAC0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FAC8"))) PPC_WEAK_FUNC(sub_8310FAC8);
PPC_FUNC_IMPL(__imp__sub_8310FAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8310fb04
	if (ctx.cr6.eq) goto loc_8310FB04;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8310fb04
	if (ctx.cr6.eq) goto loc_8310FB04;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8310fb04
	if (ctx.cr6.eq) goto loc_8310FB04;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8310fb04
	if (ctx.cr6.eq) goto loc_8310FB04;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8310fb04
	if (ctx.cr6.eq) goto loc_8310FB04;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8310fb08
	if (!ctx.cr6.eq) goto loc_8310FB08;
loc_8310FB04:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8310FB08:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FB10"))) PPC_WEAK_FUNC(sub_8310FB10);
PPC_FUNC_IMPL(__imp__sub_8310FB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8310fb6c
	if (ctx.cr6.eq) goto loc_8310FB6C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// bne cr6,0x8310fbc8
	if (!ctx.cr6.eq) goto loc_8310FBC8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// bne cr6,0x8310fbc8
	if (!ctx.cr6.eq) goto loc_8310FBC8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8310fbc8
	if (!ctx.cr6.eq) goto loc_8310FBC8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8310fb6c
	if (ctx.cr6.eq) goto loc_8310FB6C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310fbc8
	if (!ctx.cr0.eq) goto loc_8310FBC8;
loc_8310FB6C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8310fbc8
	if (!ctx.cr0.eq) goto loc_8310FBC8;
	// rlwinm r9,r11,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8310fbc8
	if (!ctx.cr6.eq) goto loc_8310FBC8;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310fbcc
	if (ctx.cr0.eq) goto loc_8310FBCC;
loc_8310FBC8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8310FBCC:
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FBD4"))) PPC_WEAK_FUNC(sub_8310FBD4);
PPC_FUNC_IMPL(__imp__sub_8310FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FBD8"))) PPC_WEAK_FUNC(sub_8310FBD8);
PPC_FUNC_IMPL(__imp__sub_8310FBD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8310fc14
	if (ctx.cr0.eq) goto loc_8310FC14;
	// b 0x8310fbf8
	goto loc_8310FBF8;
loc_8310FBEC:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8310fc04
	if (ctx.cr0.eq) goto loc_8310FC04;
loc_8310FBF8:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8310fbec
	if (!ctx.cr6.eq) goto loc_8310FBEC;
loc_8310FC04:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310fbf8
	if (!ctx.cr0.eq) goto loc_8310FBF8;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_8310FC14:
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC1C"))) PPC_WEAK_FUNC(sub_8310FC1C);
PPC_FUNC_IMPL(__imp__sub_8310FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FC20"))) PPC_WEAK_FUNC(sub_8310FC20);
PPC_FUNC_IMPL(__imp__sub_8310FC20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310fc38
	if (ctx.cr6.eq) goto loc_8310FC38;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8310fc54
	if (!ctx.cr0.eq) goto loc_8310FC54;
loc_8310FC38:
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8310fc5c
	if (ctx.cr0.eq) goto loc_8310FC5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310fc54
	if (ctx.cr6.eq) goto loc_8310FC54;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310fc5c
	if (!ctx.cr0.eq) goto loc_8310FC5C;
loc_8310FC54:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8310fc60
	goto loc_8310FC60;
loc_8310FC5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310FC60:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC68"))) PPC_WEAK_FUNC(sub_8310FC68);
PPC_FUNC_IMPL(__imp__sub_8310FC68) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r5,11
	ctx.r10.s64 = ctx.r5.s64 + 11;
	// addi r11,r4,-84
	ctx.r11.s64 = ctx.r4.s64 + -84;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,112
	ctx.r12.s64 = ctx.r12.s64 + 112;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31983
	ctx.r12.s64 = -2096037888;
	// addi r12,r12,-860
	ctx.r12.s64 = ctx.r12.s64 + -860;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8310FCD8
		return;
	case 1:
		// ERROR: 0x8310FCC0
		return;
	case 2:
		// ERROR: 0x8310FCD0
		return;
	case 3:
		// ERROR: 0x8310FCD0
		return;
	case 4:
		// ERROR: 0x8310FCE4
		return;
	case 5:
		// ERROR: 0x8310FCD0
		return;
	case 6:
		// ERROR: 0x8310FCD0
		return;
	case 7:
		// ERROR: 0x8310FCE4
		return;
	case 8:
		// ERROR: 0x8310FCE4
		return;
	case 9:
		// ERROR: 0x8310FCE4
		return;
	case 10:
		// ERROR: 0x8310FCB0
		return;
	case 11:
		// ERROR: 0x8310FCE4
		return;
	case 12:
		// ERROR: 0x8310FCC0
		return;
	case 13:
		// ERROR: 0x8310FCC8
		return;
	case 14:
		// ERROR: 0x8310FCE4
		return;
	case 15:
		// ERROR: 0x8310FCC8
		return;
	case 16:
		// ERROR: 0x8310FCC8
		return;
	case 17:
		// ERROR: 0x8310FCE4
		return;
	case 18:
		// ERROR: 0x8310FCE4
		return;
	case 19:
		// ERROR: 0x8310FCE0
		return;
	case 20:
		// ERROR: 0x8310FCB8
		return;
	case 21:
		// ERROR: 0x8310FCE4
		return;
	case 22:
		// ERROR: 0x8310FCE4
		return;
	case 23:
		// ERROR: 0x8310FCE4
		return;
	case 24:
		// ERROR: 0x8310FCE4
		return;
	case 25:
		// ERROR: 0x8310FCE4
		return;
	case 26:
		// ERROR: 0x8310FCE4
		return;
	case 27:
		// ERROR: 0x8310FCE4
		return;
	case 28:
		// ERROR: 0x8310FCB8
		return;
	case 29:
		// ERROR: 0x8310FCE4
		return;
	case 30:
		// ERROR: 0x8310FCE4
		return;
	case 31:
		// ERROR: 0x8310FCE4
		return;
	case 32:
		// ERROR: 0x8310FCE0
		return;
	case 33:
		// ERROR: 0x8310FCD0
		return;
	case 34:
		// ERROR: 0x8310FCE4
		return;
	case 35:
		// ERROR: 0x8310FCB0
		return;
	case 36:
		// ERROR: 0x8310FCE0
		return;
	case 37:
		// ERROR: 0x8310FCE4
		return;
	case 38:
		// ERROR: 0x8310FCE4
		return;
	case 39:
		// ERROR: 0x8310FCE4
		return;
	case 40:
		// ERROR: 0x8310FCB8
		return;
	case 41:
		// ERROR: 0x8310FCA4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8310FCA4"))) PPC_WEAK_FUNC(sub_8310FCA4);
PPC_FUNC_IMPL(__imp__sub_8310FCA4) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCB0"))) PPC_WEAK_FUNC(sub_8310FCB0);
PPC_FUNC_IMPL(__imp__sub_8310FCB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCB8"))) PPC_WEAK_FUNC(sub_8310FCB8);
PPC_FUNC_IMPL(__imp__sub_8310FCB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCC0"))) PPC_WEAK_FUNC(sub_8310FCC0);
PPC_FUNC_IMPL(__imp__sub_8310FCC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCC8"))) PPC_WEAK_FUNC(sub_8310FCC8);
PPC_FUNC_IMPL(__imp__sub_8310FCC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCD0"))) PPC_WEAK_FUNC(sub_8310FCD0);
PPC_FUNC_IMPL(__imp__sub_8310FCD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCD8"))) PPC_WEAK_FUNC(sub_8310FCD8);
PPC_FUNC_IMPL(__imp__sub_8310FCD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCE0"))) PPC_WEAK_FUNC(sub_8310FCE0);
PPC_FUNC_IMPL(__imp__sub_8310FCE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCE8"))) PPC_WEAK_FUNC(sub_8310FCE8);
PPC_FUNC_IMPL(__imp__sub_8310FCE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_8310FD08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8310fd08
	if (ctx.cr6.eq) goto loc_8310FD08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FD30"))) PPC_WEAK_FUNC(sub_8310FD30);
PPC_FUNC_IMPL(__imp__sub_8310FD30) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831fd318
	ctx.lr = 0x8310FD50;
	sub_831FD318(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8310fd7c
	if (ctx.cr0.eq) goto loc_8310FD7C;
	// bl 0x8302d228
	ctx.lr = 0x8310FD5C;
	sub_8302D228(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310fd7c
	if (ctx.cr0.eq) goto loc_8310FD7C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8310fd80
	goto loc_8310FD80;
loc_8310FD7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310FD80:
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

__attribute__((alias("__imp__sub_8310FD98"))) PPC_WEAK_FUNC(sub_8310FD98);
PPC_FUNC_IMPL(__imp__sub_8310FD98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8310fdd8
	if (ctx.cr6.eq) goto loc_8310FDD8;
	// lwz r11,744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310fdd8
	if (ctx.cr6.eq) goto loc_8310FDD8;
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310fdd0
	if (ctx.cr6.eq) goto loc_8310FDD0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8310fdd0
	if (!ctx.cr6.lt) goto loc_8310FDD0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_8310FDD0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x830fd318
	sub_830FD318(ctx, base);
	return;
loc_8310FDD8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FDE0"))) PPC_WEAK_FUNC(sub_8310FDE0);
PPC_FUNC_IMPL(__imp__sub_8310FDE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8310fe18
	if (!ctx.cr6.eq) goto loc_8310FE18;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8310fe18
	if (ctx.cr0.eq) goto loc_8310FE18;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x8310fe18
	if (ctx.cr6.eq) goto loc_8310FE18;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8310fe1c
	if (!ctx.cr6.eq) goto loc_8310FE1C;
loc_8310FE18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310FE1C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE24"))) PPC_WEAK_FUNC(sub_8310FE24);
PPC_FUNC_IMPL(__imp__sub_8310FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FE28"))) PPC_WEAK_FUNC(sub_8310FE28);
PPC_FUNC_IMPL(__imp__sub_8310FE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8310FE30;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// b 0x8310fe60
	goto loc_8310FE60;
loc_8310FE44:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8310fee4
	if (!ctx.cr6.eq) goto loc_8310FEE4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8310FE60:
	// cmplwi cr6,r11,132
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 132, ctx.xer);
	// ble cr6,0x8310fe44
	if (!ctx.cr6.gt) goto loc_8310FE44;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic. r10,r10,4096
	ctx.xer.ca = ctx.r10.u32 > 4294963199;
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8310fe94
	if (ctx.cr0.eq) goto loc_8310FE94;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8310FE94:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bne cr6,0x8310fecc
	if (!ctx.cr6.eq) goto loc_8310FECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd550
	ctx.lr = 0x8310FEB0;
	sub_830FD550(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8310fec4
	if (ctx.cr6.eq) goto loc_8310FEC4;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_8310FEC4:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_8310FECC:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_8310FEDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8310FEE4:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// ble cr6,0x8310ff18
	if (!ctx.cr6.gt) goto loc_8310FF18;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stwx r9,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8310FF18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3190
	ctx.lr = 0x8310FF28;
	sub_82CA3190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8310fedc
	goto loc_8310FEDC;
}

__attribute__((alias("__imp__sub_8310FF30"))) PPC_WEAK_FUNC(sub_8310FF30);
PPC_FUNC_IMPL(__imp__sub_8310FF30) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x8310FF5C;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8310FF78"))) PPC_WEAK_FUNC(sub_8310FF78);
PPC_FUNC_IMPL(__imp__sub_8310FF78) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x8310FFA4;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8310FFC0"))) PPC_WEAK_FUNC(sub_8310FFC0);
PPC_FUNC_IMPL(__imp__sub_8310FFC0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x8310FFEC;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83110008
	if (!ctx.cr0.eq) goto loc_83110008;
	// rlwinm r3,r11,30,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
loc_83110008:
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

__attribute__((alias("__imp__sub_8311001C"))) PPC_WEAK_FUNC(sub_8311001C);
PPC_FUNC_IMPL(__imp__sub_8311001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110020"))) PPC_WEAK_FUNC(sub_83110020);
PPC_FUNC_IMPL(__imp__sub_83110020) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x8310fc68
	ctx.lr = 0x83110048;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
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

