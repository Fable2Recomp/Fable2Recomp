#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832A0780"))) PPC_WEAK_FUNC(sub_832A0780);
PPC_FUNC_IMPL(__imp__sub_832A0780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29992
	ctx.r3.s64 = ctx.r11.s64 + 29992;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A078C"))) PPC_WEAK_FUNC(sub_832A078C);
PPC_FUNC_IMPL(__imp__sub_832A078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0790"))) PPC_WEAK_FUNC(sub_832A0790);
PPC_FUNC_IMPL(__imp__sub_832A0790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29996
	ctx.r3.s64 = ctx.r11.s64 + 29996;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A079C"))) PPC_WEAK_FUNC(sub_832A079C);
PPC_FUNC_IMPL(__imp__sub_832A079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A07A0"))) PPC_WEAK_FUNC(sub_832A07A0);
PPC_FUNC_IMPL(__imp__sub_832A07A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30000
	ctx.r3.s64 = ctx.r11.s64 + 30000;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A07AC"))) PPC_WEAK_FUNC(sub_832A07AC);
PPC_FUNC_IMPL(__imp__sub_832A07AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A07B0"))) PPC_WEAK_FUNC(sub_832A07B0);
PPC_FUNC_IMPL(__imp__sub_832A07B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30004
	ctx.r3.s64 = ctx.r11.s64 + 30004;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A07BC"))) PPC_WEAK_FUNC(sub_832A07BC);
PPC_FUNC_IMPL(__imp__sub_832A07BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A07C0"))) PPC_WEAK_FUNC(sub_832A07C0);
PPC_FUNC_IMPL(__imp__sub_832A07C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30008
	ctx.r3.s64 = ctx.r11.s64 + 30008;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A07CC"))) PPC_WEAK_FUNC(sub_832A07CC);
PPC_FUNC_IMPL(__imp__sub_832A07CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A07D0"))) PPC_WEAK_FUNC(sub_832A07D0);
PPC_FUNC_IMPL(__imp__sub_832A07D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30012
	ctx.r3.s64 = ctx.r11.s64 + 30012;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A07DC"))) PPC_WEAK_FUNC(sub_832A07DC);
PPC_FUNC_IMPL(__imp__sub_832A07DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A07E0"))) PPC_WEAK_FUNC(sub_832A07E0);
PPC_FUNC_IMPL(__imp__sub_832A07E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30016
	ctx.r3.s64 = ctx.r11.s64 + 30016;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A07EC"))) PPC_WEAK_FUNC(sub_832A07EC);
PPC_FUNC_IMPL(__imp__sub_832A07EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A07F0"))) PPC_WEAK_FUNC(sub_832A07F0);
PPC_FUNC_IMPL(__imp__sub_832A07F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30020
	ctx.r3.s64 = ctx.r11.s64 + 30020;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A07FC"))) PPC_WEAK_FUNC(sub_832A07FC);
PPC_FUNC_IMPL(__imp__sub_832A07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0800"))) PPC_WEAK_FUNC(sub_832A0800);
PPC_FUNC_IMPL(__imp__sub_832A0800) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r31,r11,13832
	ctx.r31.s64 = ctx.r11.s64 + 13832;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a0834
	if (ctx.cr6.eq) goto loc_832A0834;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A0834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832A0834:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a0850
	if (ctx.cr6.eq) goto loc_832A0850;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A0850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832A0850:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8236a750
	ctx.lr = 0x832A0858;
	sub_8236A750(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832a0878
	if (ctx.cr6.eq) goto loc_832A0878;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822f6b68
	ctx.lr = 0x832A0870;
	sub_822F6B68(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8221be68
	ctx.lr = 0x832A0878;
	sub_8221BE68(ctx, base);
loc_832A0878:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bl 0x82c6c420
	ctx.lr = 0x832A0898;
	sub_82C6C420(ctx, base);
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

__attribute__((alias("__imp__sub_832A08AC"))) PPC_WEAK_FUNC(sub_832A08AC);
PPC_FUNC_IMPL(__imp__sub_832A08AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A08B0"))) PPC_WEAK_FUNC(sub_832A08B0);
PPC_FUNC_IMPL(__imp__sub_832A08B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lwz r3,29484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29484);
	// b 0x8221be68
	sub_8221BE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A08BC"))) PPC_WEAK_FUNC(sub_832A08BC);
PPC_FUNC_IMPL(__imp__sub_832A08BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A08C0"))) PPC_WEAK_FUNC(sub_832A08C0);
PPC_FUNC_IMPL(__imp__sub_832A08C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A08C4"))) PPC_WEAK_FUNC(sub_832A08C4);
PPC_FUNC_IMPL(__imp__sub_832A08C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A08C8"))) PPC_WEAK_FUNC(sub_832A08C8);
PPC_FUNC_IMPL(__imp__sub_832A08C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A08D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r29,5
	ctx.r29.s64 = 5;
	// addi r11,r11,30024
	ctx.r11.s64 = ctx.r11.s64 + 30024;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,136
	ctx.r31.s64 = ctx.r11.s64 + 136;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r30,r11,28344
	ctx.r30.s64 = ctx.r11.s64 + 28344;
loc_832A08F0:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a0910
	if (ctx.cr6.eq) goto loc_832A0910;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A0910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832A0910:
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x821c67d8
	ctx.lr = 0x832A0918;
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_832A091C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a091c
	if (!ctx.cr0.eq) goto loc_832A091C;
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x821c67d8
	ctx.lr = 0x832A0944;
	sub_821C67D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_832A0948:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a0948
	if (!ctx.cr0.eq) goto loc_832A0948;
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x821c67d8
	ctx.lr = 0x832A0970;
	sub_821C67D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832A0974:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a0974
	if (!ctx.cr0.eq) goto loc_832A0974;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r28.u32);
	// bge 0x832a08f0
	if (!ctx.cr0.lt) goto loc_832A08F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A09A4"))) PPC_WEAK_FUNC(sub_832A09A4);
PPC_FUNC_IMPL(__imp__sub_832A09A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A09A8"))) PPC_WEAK_FUNC(sub_832A09A8);
PPC_FUNC_IMPL(__imp__sub_832A09A8) {
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
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r31,r11,-26692
	ctx.r31.s64 = ctx.r11.s64 + -26692;
	// lwz r3,-26692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a09fc
	if (ctx.cr6.eq) goto loc_832A09FC;
	// bl 0x8221be68
	ctx.lr = 0x832A09D0;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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
loc_832A09FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832A0A20"))) PPC_WEAK_FUNC(sub_832A0A20);
PPC_FUNC_IMPL(__imp__sub_832A0A20) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r31,r11,7724
	ctx.r31.s64 = ctx.r11.s64 + 7724;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a0a54
	if (ctx.cr6.eq) goto loc_832A0A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A0A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832A0A54:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82376980
	ctx.lr = 0x832A0A5C;
	sub_82376980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82375bc8
	ctx.lr = 0x832A0A64;
	sub_82375BC8(ctx, base);
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

__attribute__((alias("__imp__sub_832A0A78"))) PPC_WEAK_FUNC(sub_832A0A78);
PPC_FUNC_IMPL(__imp__sub_832A0A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0A84"))) PPC_WEAK_FUNC(sub_832A0A84);
PPC_FUNC_IMPL(__imp__sub_832A0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0A88"))) PPC_WEAK_FUNC(sub_832A0A88);
PPC_FUNC_IMPL(__imp__sub_832A0A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30148
	ctx.r3.s64 = ctx.r11.s64 + 30148;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0A94"))) PPC_WEAK_FUNC(sub_832A0A94);
PPC_FUNC_IMPL(__imp__sub_832A0A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0A98"))) PPC_WEAK_FUNC(sub_832A0A98);
PPC_FUNC_IMPL(__imp__sub_832A0A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30152
	ctx.r3.s64 = ctx.r11.s64 + 30152;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0AA4"))) PPC_WEAK_FUNC(sub_832A0AA4);
PPC_FUNC_IMPL(__imp__sub_832A0AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0AA8"))) PPC_WEAK_FUNC(sub_832A0AA8);
PPC_FUNC_IMPL(__imp__sub_832A0AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30156
	ctx.r3.s64 = ctx.r11.s64 + 30156;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0AB4"))) PPC_WEAK_FUNC(sub_832A0AB4);
PPC_FUNC_IMPL(__imp__sub_832A0AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0AB8"))) PPC_WEAK_FUNC(sub_832A0AB8);
PPC_FUNC_IMPL(__imp__sub_832A0AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30160
	ctx.r3.s64 = ctx.r11.s64 + 30160;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0AC4"))) PPC_WEAK_FUNC(sub_832A0AC4);
PPC_FUNC_IMPL(__imp__sub_832A0AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0AC8"))) PPC_WEAK_FUNC(sub_832A0AC8);
PPC_FUNC_IMPL(__imp__sub_832A0AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30164
	ctx.r3.s64 = ctx.r11.s64 + 30164;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0AD4"))) PPC_WEAK_FUNC(sub_832A0AD4);
PPC_FUNC_IMPL(__imp__sub_832A0AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0AD8"))) PPC_WEAK_FUNC(sub_832A0AD8);
PPC_FUNC_IMPL(__imp__sub_832A0AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0AE4"))) PPC_WEAK_FUNC(sub_832A0AE4);
PPC_FUNC_IMPL(__imp__sub_832A0AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0AE8"))) PPC_WEAK_FUNC(sub_832A0AE8);
PPC_FUNC_IMPL(__imp__sub_832A0AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30172
	ctx.r3.s64 = ctx.r11.s64 + 30172;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0AF4"))) PPC_WEAK_FUNC(sub_832A0AF4);
PPC_FUNC_IMPL(__imp__sub_832A0AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0AF8"))) PPC_WEAK_FUNC(sub_832A0AF8);
PPC_FUNC_IMPL(__imp__sub_832A0AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0AFC"))) PPC_WEAK_FUNC(sub_832A0AFC);
PPC_FUNC_IMPL(__imp__sub_832A0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B00"))) PPC_WEAK_FUNC(sub_832A0B00);
PPC_FUNC_IMPL(__imp__sub_832A0B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0B04"))) PPC_WEAK_FUNC(sub_832A0B04);
PPC_FUNC_IMPL(__imp__sub_832A0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B08"))) PPC_WEAK_FUNC(sub_832A0B08);
PPC_FUNC_IMPL(__imp__sub_832A0B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0B0C"))) PPC_WEAK_FUNC(sub_832A0B0C);
PPC_FUNC_IMPL(__imp__sub_832A0B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B10"))) PPC_WEAK_FUNC(sub_832A0B10);
PPC_FUNC_IMPL(__imp__sub_832A0B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0B14"))) PPC_WEAK_FUNC(sub_832A0B14);
PPC_FUNC_IMPL(__imp__sub_832A0B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B18"))) PPC_WEAK_FUNC(sub_832A0B18);
PPC_FUNC_IMPL(__imp__sub_832A0B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30224
	ctx.r3.s64 = ctx.r11.s64 + 30224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B24"))) PPC_WEAK_FUNC(sub_832A0B24);
PPC_FUNC_IMPL(__imp__sub_832A0B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B28"))) PPC_WEAK_FUNC(sub_832A0B28);
PPC_FUNC_IMPL(__imp__sub_832A0B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30228
	ctx.r3.s64 = ctx.r11.s64 + 30228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B34"))) PPC_WEAK_FUNC(sub_832A0B34);
PPC_FUNC_IMPL(__imp__sub_832A0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B38"))) PPC_WEAK_FUNC(sub_832A0B38);
PPC_FUNC_IMPL(__imp__sub_832A0B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30232
	ctx.r3.s64 = ctx.r11.s64 + 30232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B44"))) PPC_WEAK_FUNC(sub_832A0B44);
PPC_FUNC_IMPL(__imp__sub_832A0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B48"))) PPC_WEAK_FUNC(sub_832A0B48);
PPC_FUNC_IMPL(__imp__sub_832A0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30236
	ctx.r3.s64 = ctx.r11.s64 + 30236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B54"))) PPC_WEAK_FUNC(sub_832A0B54);
PPC_FUNC_IMPL(__imp__sub_832A0B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B58"))) PPC_WEAK_FUNC(sub_832A0B58);
PPC_FUNC_IMPL(__imp__sub_832A0B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B64"))) PPC_WEAK_FUNC(sub_832A0B64);
PPC_FUNC_IMPL(__imp__sub_832A0B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B68"))) PPC_WEAK_FUNC(sub_832A0B68);
PPC_FUNC_IMPL(__imp__sub_832A0B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30244
	ctx.r3.s64 = ctx.r11.s64 + 30244;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B74"))) PPC_WEAK_FUNC(sub_832A0B74);
PPC_FUNC_IMPL(__imp__sub_832A0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B78"))) PPC_WEAK_FUNC(sub_832A0B78);
PPC_FUNC_IMPL(__imp__sub_832A0B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30256
	ctx.r3.s64 = ctx.r11.s64 + 30256;
	// b 0x8264edf8
	sub_8264EDF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B84"))) PPC_WEAK_FUNC(sub_832A0B84);
PPC_FUNC_IMPL(__imp__sub_832A0B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B88"))) PPC_WEAK_FUNC(sub_832A0B88);
PPC_FUNC_IMPL(__imp__sub_832A0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30268
	ctx.r3.s64 = ctx.r11.s64 + 30268;
	// b 0x8264edf8
	sub_8264EDF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0B94"))) PPC_WEAK_FUNC(sub_832A0B94);
PPC_FUNC_IMPL(__imp__sub_832A0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0B98"))) PPC_WEAK_FUNC(sub_832A0B98);
PPC_FUNC_IMPL(__imp__sub_832A0B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0BA4"))) PPC_WEAK_FUNC(sub_832A0BA4);
PPC_FUNC_IMPL(__imp__sub_832A0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0BA8"))) PPC_WEAK_FUNC(sub_832A0BA8);
PPC_FUNC_IMPL(__imp__sub_832A0BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30284
	ctx.r3.s64 = ctx.r11.s64 + 30284;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0BB4"))) PPC_WEAK_FUNC(sub_832A0BB4);
PPC_FUNC_IMPL(__imp__sub_832A0BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0BB8"))) PPC_WEAK_FUNC(sub_832A0BB8);
PPC_FUNC_IMPL(__imp__sub_832A0BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0BC4"))) PPC_WEAK_FUNC(sub_832A0BC4);
PPC_FUNC_IMPL(__imp__sub_832A0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0BC8"))) PPC_WEAK_FUNC(sub_832A0BC8);
PPC_FUNC_IMPL(__imp__sub_832A0BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30292
	ctx.r3.s64 = ctx.r11.s64 + 30292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0BD4"))) PPC_WEAK_FUNC(sub_832A0BD4);
PPC_FUNC_IMPL(__imp__sub_832A0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0BD8"))) PPC_WEAK_FUNC(sub_832A0BD8);
PPC_FUNC_IMPL(__imp__sub_832A0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30296
	ctx.r3.s64 = ctx.r11.s64 + 30296;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0BE4"))) PPC_WEAK_FUNC(sub_832A0BE4);
PPC_FUNC_IMPL(__imp__sub_832A0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0BE8"))) PPC_WEAK_FUNC(sub_832A0BE8);
PPC_FUNC_IMPL(__imp__sub_832A0BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30300
	ctx.r3.s64 = ctx.r11.s64 + 30300;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0BF4"))) PPC_WEAK_FUNC(sub_832A0BF4);
PPC_FUNC_IMPL(__imp__sub_832A0BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0BF8"))) PPC_WEAK_FUNC(sub_832A0BF8);
PPC_FUNC_IMPL(__imp__sub_832A0BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832A0C00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,30304
	ctx.r29.s64 = ctx.r11.s64 + 30304;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// beq cr6,0x832a0ca4
	if (ctx.cr6.eq) goto loc_832A0CA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r11,5732
	ctx.r26.s64 = ctx.r11.s64 + 5732;
loc_832A0C40:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832a0c88
	if (ctx.cr6.eq) goto loc_832A0C88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832a0c84
	if (!ctx.cr6.eq) goto loc_832A0C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832a0c84
	if (!ctx.cr6.eq) goto loc_832A0C84;
	// bl 0x8221be68
	ctx.lr = 0x832A0C84;
	sub_8221BE68(ctx, base);
loc_832A0C84:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_832A0C88:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x832A0C94;
	sub_8221BE68(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x832a0c40
	if (!ctx.cr6.eq) goto loc_832A0C40;
loc_832A0CA4:
	// bl 0x8221be68
	ctx.lr = 0x832A0CA8;
	sub_8221BE68(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0CB8"))) PPC_WEAK_FUNC(sub_832A0CB8);
PPC_FUNC_IMPL(__imp__sub_832A0CB8) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r31,r11,30316
	ctx.r31.s64 = ctx.r11.s64 + 30316;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a0ce0
	if (ctx.cr6.eq) goto loc_832A0CE0;
	// bl 0x8221be68
	ctx.lr = 0x832A0CE0;
	sub_8221BE68(ctx, base);
loc_832A0CE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A0D0C"))) PPC_WEAK_FUNC(sub_832A0D0C);
PPC_FUNC_IMPL(__imp__sub_832A0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D10"))) PPC_WEAK_FUNC(sub_832A0D10);
PPC_FUNC_IMPL(__imp__sub_832A0D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30336
	ctx.r3.s64 = ctx.r11.s64 + 30336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D1C"))) PPC_WEAK_FUNC(sub_832A0D1C);
PPC_FUNC_IMPL(__imp__sub_832A0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D20"))) PPC_WEAK_FUNC(sub_832A0D20);
PPC_FUNC_IMPL(__imp__sub_832A0D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30340
	ctx.r3.s64 = ctx.r11.s64 + 30340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D2C"))) PPC_WEAK_FUNC(sub_832A0D2C);
PPC_FUNC_IMPL(__imp__sub_832A0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D30"))) PPC_WEAK_FUNC(sub_832A0D30);
PPC_FUNC_IMPL(__imp__sub_832A0D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30344
	ctx.r3.s64 = ctx.r11.s64 + 30344;
	// b 0x82394830
	sub_82394830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D3C"))) PPC_WEAK_FUNC(sub_832A0D3C);
PPC_FUNC_IMPL(__imp__sub_832A0D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D40"))) PPC_WEAK_FUNC(sub_832A0D40);
PPC_FUNC_IMPL(__imp__sub_832A0D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30356
	ctx.r3.s64 = ctx.r11.s64 + 30356;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D4C"))) PPC_WEAK_FUNC(sub_832A0D4C);
PPC_FUNC_IMPL(__imp__sub_832A0D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D50"))) PPC_WEAK_FUNC(sub_832A0D50);
PPC_FUNC_IMPL(__imp__sub_832A0D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D5C"))) PPC_WEAK_FUNC(sub_832A0D5C);
PPC_FUNC_IMPL(__imp__sub_832A0D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D60"))) PPC_WEAK_FUNC(sub_832A0D60);
PPC_FUNC_IMPL(__imp__sub_832A0D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30364
	ctx.r3.s64 = ctx.r11.s64 + 30364;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D6C"))) PPC_WEAK_FUNC(sub_832A0D6C);
PPC_FUNC_IMPL(__imp__sub_832A0D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D70"))) PPC_WEAK_FUNC(sub_832A0D70);
PPC_FUNC_IMPL(__imp__sub_832A0D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30368
	ctx.r3.s64 = ctx.r11.s64 + 30368;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D7C"))) PPC_WEAK_FUNC(sub_832A0D7C);
PPC_FUNC_IMPL(__imp__sub_832A0D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D80"))) PPC_WEAK_FUNC(sub_832A0D80);
PPC_FUNC_IMPL(__imp__sub_832A0D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30372
	ctx.r3.s64 = ctx.r11.s64 + 30372;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D8C"))) PPC_WEAK_FUNC(sub_832A0D8C);
PPC_FUNC_IMPL(__imp__sub_832A0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D90"))) PPC_WEAK_FUNC(sub_832A0D90);
PPC_FUNC_IMPL(__imp__sub_832A0D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30376
	ctx.r3.s64 = ctx.r11.s64 + 30376;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D9C"))) PPC_WEAK_FUNC(sub_832A0D9C);
PPC_FUNC_IMPL(__imp__sub_832A0D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0DA0"))) PPC_WEAK_FUNC(sub_832A0DA0);
PPC_FUNC_IMPL(__imp__sub_832A0DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x82343b10
	sub_82343B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0DAC"))) PPC_WEAK_FUNC(sub_832A0DAC);
PPC_FUNC_IMPL(__imp__sub_832A0DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0DB0"))) PPC_WEAK_FUNC(sub_832A0DB0);
PPC_FUNC_IMPL(__imp__sub_832A0DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// b 0x82343b10
	sub_82343B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0DBC"))) PPC_WEAK_FUNC(sub_832A0DBC);
PPC_FUNC_IMPL(__imp__sub_832A0DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0DC0"))) PPC_WEAK_FUNC(sub_832A0DC0);
PPC_FUNC_IMPL(__imp__sub_832A0DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0DCC"))) PPC_WEAK_FUNC(sub_832A0DCC);
PPC_FUNC_IMPL(__imp__sub_832A0DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0DD0"))) PPC_WEAK_FUNC(sub_832A0DD0);
PPC_FUNC_IMPL(__imp__sub_832A0DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30444
	ctx.r3.s64 = ctx.r11.s64 + 30444;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0DDC"))) PPC_WEAK_FUNC(sub_832A0DDC);
PPC_FUNC_IMPL(__imp__sub_832A0DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0DE0"))) PPC_WEAK_FUNC(sub_832A0DE0);
PPC_FUNC_IMPL(__imp__sub_832A0DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30448
	ctx.r3.s64 = ctx.r11.s64 + 30448;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0DEC"))) PPC_WEAK_FUNC(sub_832A0DEC);
PPC_FUNC_IMPL(__imp__sub_832A0DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0DF0"))) PPC_WEAK_FUNC(sub_832A0DF0);
PPC_FUNC_IMPL(__imp__sub_832A0DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// b 0x82343b10
	sub_82343B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0DFC"))) PPC_WEAK_FUNC(sub_832A0DFC);
PPC_FUNC_IMPL(__imp__sub_832A0DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E00"))) PPC_WEAK_FUNC(sub_832A0E00);
PPC_FUNC_IMPL(__imp__sub_832A0E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30472
	ctx.r3.s64 = ctx.r11.s64 + 30472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E0C"))) PPC_WEAK_FUNC(sub_832A0E0C);
PPC_FUNC_IMPL(__imp__sub_832A0E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E10"))) PPC_WEAK_FUNC(sub_832A0E10);
PPC_FUNC_IMPL(__imp__sub_832A0E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30476
	ctx.r3.s64 = ctx.r11.s64 + 30476;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E1C"))) PPC_WEAK_FUNC(sub_832A0E1C);
PPC_FUNC_IMPL(__imp__sub_832A0E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E20"))) PPC_WEAK_FUNC(sub_832A0E20);
PPC_FUNC_IMPL(__imp__sub_832A0E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30480
	ctx.r3.s64 = ctx.r11.s64 + 30480;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E2C"))) PPC_WEAK_FUNC(sub_832A0E2C);
PPC_FUNC_IMPL(__imp__sub_832A0E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E30"))) PPC_WEAK_FUNC(sub_832A0E30);
PPC_FUNC_IMPL(__imp__sub_832A0E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30484
	ctx.r3.s64 = ctx.r11.s64 + 30484;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E3C"))) PPC_WEAK_FUNC(sub_832A0E3C);
PPC_FUNC_IMPL(__imp__sub_832A0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E40"))) PPC_WEAK_FUNC(sub_832A0E40);
PPC_FUNC_IMPL(__imp__sub_832A0E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E4C"))) PPC_WEAK_FUNC(sub_832A0E4C);
PPC_FUNC_IMPL(__imp__sub_832A0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E50"))) PPC_WEAK_FUNC(sub_832A0E50);
PPC_FUNC_IMPL(__imp__sub_832A0E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30492
	ctx.r3.s64 = ctx.r11.s64 + 30492;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E5C"))) PPC_WEAK_FUNC(sub_832A0E5C);
PPC_FUNC_IMPL(__imp__sub_832A0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E60"))) PPC_WEAK_FUNC(sub_832A0E60);
PPC_FUNC_IMPL(__imp__sub_832A0E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E6C"))) PPC_WEAK_FUNC(sub_832A0E6C);
PPC_FUNC_IMPL(__imp__sub_832A0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E70"))) PPC_WEAK_FUNC(sub_832A0E70);
PPC_FUNC_IMPL(__imp__sub_832A0E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30500
	ctx.r3.s64 = ctx.r11.s64 + 30500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E7C"))) PPC_WEAK_FUNC(sub_832A0E7C);
PPC_FUNC_IMPL(__imp__sub_832A0E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E80"))) PPC_WEAK_FUNC(sub_832A0E80);
PPC_FUNC_IMPL(__imp__sub_832A0E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30504
	ctx.r3.s64 = ctx.r11.s64 + 30504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E8C"))) PPC_WEAK_FUNC(sub_832A0E8C);
PPC_FUNC_IMPL(__imp__sub_832A0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0E90"))) PPC_WEAK_FUNC(sub_832A0E90);
PPC_FUNC_IMPL(__imp__sub_832A0E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30508
	ctx.r3.s64 = ctx.r11.s64 + 30508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0E9C"))) PPC_WEAK_FUNC(sub_832A0E9C);
PPC_FUNC_IMPL(__imp__sub_832A0E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0EA0"))) PPC_WEAK_FUNC(sub_832A0EA0);
PPC_FUNC_IMPL(__imp__sub_832A0EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0EAC"))) PPC_WEAK_FUNC(sub_832A0EAC);
PPC_FUNC_IMPL(__imp__sub_832A0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0EB0"))) PPC_WEAK_FUNC(sub_832A0EB0);
PPC_FUNC_IMPL(__imp__sub_832A0EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30516
	ctx.r3.s64 = ctx.r11.s64 + 30516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0EBC"))) PPC_WEAK_FUNC(sub_832A0EBC);
PPC_FUNC_IMPL(__imp__sub_832A0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0EC0"))) PPC_WEAK_FUNC(sub_832A0EC0);
PPC_FUNC_IMPL(__imp__sub_832A0EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0ECC"))) PPC_WEAK_FUNC(sub_832A0ECC);
PPC_FUNC_IMPL(__imp__sub_832A0ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0ED0"))) PPC_WEAK_FUNC(sub_832A0ED0);
PPC_FUNC_IMPL(__imp__sub_832A0ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30524
	ctx.r3.s64 = ctx.r11.s64 + 30524;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0EDC"))) PPC_WEAK_FUNC(sub_832A0EDC);
PPC_FUNC_IMPL(__imp__sub_832A0EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0EE0"))) PPC_WEAK_FUNC(sub_832A0EE0);
PPC_FUNC_IMPL(__imp__sub_832A0EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0EEC"))) PPC_WEAK_FUNC(sub_832A0EEC);
PPC_FUNC_IMPL(__imp__sub_832A0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0EF0"))) PPC_WEAK_FUNC(sub_832A0EF0);
PPC_FUNC_IMPL(__imp__sub_832A0EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30532
	ctx.r3.s64 = ctx.r11.s64 + 30532;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0EFC"))) PPC_WEAK_FUNC(sub_832A0EFC);
PPC_FUNC_IMPL(__imp__sub_832A0EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F00"))) PPC_WEAK_FUNC(sub_832A0F00);
PPC_FUNC_IMPL(__imp__sub_832A0F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0F0C"))) PPC_WEAK_FUNC(sub_832A0F0C);
PPC_FUNC_IMPL(__imp__sub_832A0F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F10"))) PPC_WEAK_FUNC(sub_832A0F10);
PPC_FUNC_IMPL(__imp__sub_832A0F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30540
	ctx.r3.s64 = ctx.r11.s64 + 30540;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0F1C"))) PPC_WEAK_FUNC(sub_832A0F1C);
PPC_FUNC_IMPL(__imp__sub_832A0F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F20"))) PPC_WEAK_FUNC(sub_832A0F20);
PPC_FUNC_IMPL(__imp__sub_832A0F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0F2C"))) PPC_WEAK_FUNC(sub_832A0F2C);
PPC_FUNC_IMPL(__imp__sub_832A0F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F30"))) PPC_WEAK_FUNC(sub_832A0F30);
PPC_FUNC_IMPL(__imp__sub_832A0F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30548
	ctx.r3.s64 = ctx.r11.s64 + 30548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0F3C"))) PPC_WEAK_FUNC(sub_832A0F3C);
PPC_FUNC_IMPL(__imp__sub_832A0F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F40"))) PPC_WEAK_FUNC(sub_832A0F40);
PPC_FUNC_IMPL(__imp__sub_832A0F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30552
	ctx.r3.s64 = ctx.r11.s64 + 30552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0F4C"))) PPC_WEAK_FUNC(sub_832A0F4C);
PPC_FUNC_IMPL(__imp__sub_832A0F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F50"))) PPC_WEAK_FUNC(sub_832A0F50);
PPC_FUNC_IMPL(__imp__sub_832A0F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30556
	ctx.r3.s64 = ctx.r11.s64 + 30556;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0F5C"))) PPC_WEAK_FUNC(sub_832A0F5C);
PPC_FUNC_IMPL(__imp__sub_832A0F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F60"))) PPC_WEAK_FUNC(sub_832A0F60);
PPC_FUNC_IMPL(__imp__sub_832A0F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0F64"))) PPC_WEAK_FUNC(sub_832A0F64);
PPC_FUNC_IMPL(__imp__sub_832A0F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F68"))) PPC_WEAK_FUNC(sub_832A0F68);
PPC_FUNC_IMPL(__imp__sub_832A0F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0F6C"))) PPC_WEAK_FUNC(sub_832A0F6C);
PPC_FUNC_IMPL(__imp__sub_832A0F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F70"))) PPC_WEAK_FUNC(sub_832A0F70);
PPC_FUNC_IMPL(__imp__sub_832A0F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0F74"))) PPC_WEAK_FUNC(sub_832A0F74);
PPC_FUNC_IMPL(__imp__sub_832A0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F78"))) PPC_WEAK_FUNC(sub_832A0F78);
PPC_FUNC_IMPL(__imp__sub_832A0F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0F7C"))) PPC_WEAK_FUNC(sub_832A0F7C);
PPC_FUNC_IMPL(__imp__sub_832A0F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F80"))) PPC_WEAK_FUNC(sub_832A0F80);
PPC_FUNC_IMPL(__imp__sub_832A0F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0F84"))) PPC_WEAK_FUNC(sub_832A0F84);
PPC_FUNC_IMPL(__imp__sub_832A0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F88"))) PPC_WEAK_FUNC(sub_832A0F88);
PPC_FUNC_IMPL(__imp__sub_832A0F88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0F8C"))) PPC_WEAK_FUNC(sub_832A0F8C);
PPC_FUNC_IMPL(__imp__sub_832A0F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0F90"))) PPC_WEAK_FUNC(sub_832A0F90);
PPC_FUNC_IMPL(__imp__sub_832A0F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30588
	ctx.r3.s64 = ctx.r11.s64 + 30588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0F9C"))) PPC_WEAK_FUNC(sub_832A0F9C);
PPC_FUNC_IMPL(__imp__sub_832A0F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0FA0"))) PPC_WEAK_FUNC(sub_832A0FA0);
PPC_FUNC_IMPL(__imp__sub_832A0FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30592
	ctx.r3.s64 = ctx.r11.s64 + 30592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0FAC"))) PPC_WEAK_FUNC(sub_832A0FAC);
PPC_FUNC_IMPL(__imp__sub_832A0FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0FB0"))) PPC_WEAK_FUNC(sub_832A0FB0);
PPC_FUNC_IMPL(__imp__sub_832A0FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30596
	ctx.r3.s64 = ctx.r11.s64 + 30596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0FBC"))) PPC_WEAK_FUNC(sub_832A0FBC);
PPC_FUNC_IMPL(__imp__sub_832A0FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0FC0"))) PPC_WEAK_FUNC(sub_832A0FC0);
PPC_FUNC_IMPL(__imp__sub_832A0FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30600
	ctx.r3.s64 = ctx.r11.s64 + 30600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0FCC"))) PPC_WEAK_FUNC(sub_832A0FCC);
PPC_FUNC_IMPL(__imp__sub_832A0FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0FD0"))) PPC_WEAK_FUNC(sub_832A0FD0);
PPC_FUNC_IMPL(__imp__sub_832A0FD0) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r31,r11,30604
	ctx.r31.s64 = ctx.r11.s64 + 30604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823091a8
	ctx.lr = 0x832A0FF0;
	sub_823091A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A0FF8;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832A1014"))) PPC_WEAK_FUNC(sub_832A1014);
PPC_FUNC_IMPL(__imp__sub_832A1014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1018"))) PPC_WEAK_FUNC(sub_832A1018);
PPC_FUNC_IMPL(__imp__sub_832A1018) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r31,r11,30616
	ctx.r31.s64 = ctx.r11.s64 + 30616;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a1040
	if (ctx.cr6.eq) goto loc_832A1040;
	// bl 0x8221be68
	ctx.lr = 0x832A1040;
	sub_8221BE68(ctx, base);
loc_832A1040:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A106C"))) PPC_WEAK_FUNC(sub_832A106C);
PPC_FUNC_IMPL(__imp__sub_832A106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1070"))) PPC_WEAK_FUNC(sub_832A1070);
PPC_FUNC_IMPL(__imp__sub_832A1070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30632
	ctx.r3.s64 = ctx.r11.s64 + 30632;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A107C"))) PPC_WEAK_FUNC(sub_832A107C);
PPC_FUNC_IMPL(__imp__sub_832A107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1080"))) PPC_WEAK_FUNC(sub_832A1080);
PPC_FUNC_IMPL(__imp__sub_832A1080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30636
	ctx.r3.s64 = ctx.r11.s64 + 30636;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A108C"))) PPC_WEAK_FUNC(sub_832A108C);
PPC_FUNC_IMPL(__imp__sub_832A108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1090"))) PPC_WEAK_FUNC(sub_832A1090);
PPC_FUNC_IMPL(__imp__sub_832A1090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30640
	ctx.r3.s64 = ctx.r11.s64 + 30640;
	// b 0x82343b10
	sub_82343B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A109C"))) PPC_WEAK_FUNC(sub_832A109C);
PPC_FUNC_IMPL(__imp__sub_832A109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A10A0"))) PPC_WEAK_FUNC(sub_832A10A0);
PPC_FUNC_IMPL(__imp__sub_832A10A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A10AC"))) PPC_WEAK_FUNC(sub_832A10AC);
PPC_FUNC_IMPL(__imp__sub_832A10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A10B0"))) PPC_WEAK_FUNC(sub_832A10B0);
PPC_FUNC_IMPL(__imp__sub_832A10B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30660
	ctx.r3.s64 = ctx.r11.s64 + 30660;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A10BC"))) PPC_WEAK_FUNC(sub_832A10BC);
PPC_FUNC_IMPL(__imp__sub_832A10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A10C0"))) PPC_WEAK_FUNC(sub_832A10C0);
PPC_FUNC_IMPL(__imp__sub_832A10C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30688
	ctx.r3.s64 = ctx.r11.s64 + 30688;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A10CC"))) PPC_WEAK_FUNC(sub_832A10CC);
PPC_FUNC_IMPL(__imp__sub_832A10CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A10D0"))) PPC_WEAK_FUNC(sub_832A10D0);
PPC_FUNC_IMPL(__imp__sub_832A10D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30696
	ctx.r3.s64 = ctx.r11.s64 + 30696;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A10DC"))) PPC_WEAK_FUNC(sub_832A10DC);
PPC_FUNC_IMPL(__imp__sub_832A10DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A10E0"))) PPC_WEAK_FUNC(sub_832A10E0);
PPC_FUNC_IMPL(__imp__sub_832A10E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30700
	ctx.r3.s64 = ctx.r11.s64 + 30700;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A10EC"))) PPC_WEAK_FUNC(sub_832A10EC);
PPC_FUNC_IMPL(__imp__sub_832A10EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A10F0"))) PPC_WEAK_FUNC(sub_832A10F0);
PPC_FUNC_IMPL(__imp__sub_832A10F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30704
	ctx.r3.s64 = ctx.r11.s64 + 30704;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A10FC"))) PPC_WEAK_FUNC(sub_832A10FC);
PPC_FUNC_IMPL(__imp__sub_832A10FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1100"))) PPC_WEAK_FUNC(sub_832A1100);
PPC_FUNC_IMPL(__imp__sub_832A1100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30708
	ctx.r3.s64 = ctx.r11.s64 + 30708;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A110C"))) PPC_WEAK_FUNC(sub_832A110C);
PPC_FUNC_IMPL(__imp__sub_832A110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1110"))) PPC_WEAK_FUNC(sub_832A1110);
PPC_FUNC_IMPL(__imp__sub_832A1110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30712
	ctx.r3.s64 = ctx.r11.s64 + 30712;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A111C"))) PPC_WEAK_FUNC(sub_832A111C);
PPC_FUNC_IMPL(__imp__sub_832A111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1120"))) PPC_WEAK_FUNC(sub_832A1120);
PPC_FUNC_IMPL(__imp__sub_832A1120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,21208
	ctx.r3.s64 = ctx.r11.s64 + 21208;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A112C"))) PPC_WEAK_FUNC(sub_832A112C);
PPC_FUNC_IMPL(__imp__sub_832A112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1130"))) PPC_WEAK_FUNC(sub_832A1130);
PPC_FUNC_IMPL(__imp__sub_832A1130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,21212
	ctx.r3.s64 = ctx.r11.s64 + 21212;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A113C"))) PPC_WEAK_FUNC(sub_832A113C);
PPC_FUNC_IMPL(__imp__sub_832A113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1140"))) PPC_WEAK_FUNC(sub_832A1140);
PPC_FUNC_IMPL(__imp__sub_832A1140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30732
	ctx.r3.s64 = ctx.r11.s64 + 30732;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A114C"))) PPC_WEAK_FUNC(sub_832A114C);
PPC_FUNC_IMPL(__imp__sub_832A114C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1150"))) PPC_WEAK_FUNC(sub_832A1150);
PPC_FUNC_IMPL(__imp__sub_832A1150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A115C"))) PPC_WEAK_FUNC(sub_832A115C);
PPC_FUNC_IMPL(__imp__sub_832A115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1160"))) PPC_WEAK_FUNC(sub_832A1160);
PPC_FUNC_IMPL(__imp__sub_832A1160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30740
	ctx.r3.s64 = ctx.r11.s64 + 30740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A116C"))) PPC_WEAK_FUNC(sub_832A116C);
PPC_FUNC_IMPL(__imp__sub_832A116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1170"))) PPC_WEAK_FUNC(sub_832A1170);
PPC_FUNC_IMPL(__imp__sub_832A1170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A117C"))) PPC_WEAK_FUNC(sub_832A117C);
PPC_FUNC_IMPL(__imp__sub_832A117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1180"))) PPC_WEAK_FUNC(sub_832A1180);
PPC_FUNC_IMPL(__imp__sub_832A1180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30748
	ctx.r3.s64 = ctx.r11.s64 + 30748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A118C"))) PPC_WEAK_FUNC(sub_832A118C);
PPC_FUNC_IMPL(__imp__sub_832A118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1190"))) PPC_WEAK_FUNC(sub_832A1190);
PPC_FUNC_IMPL(__imp__sub_832A1190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A119C"))) PPC_WEAK_FUNC(sub_832A119C);
PPC_FUNC_IMPL(__imp__sub_832A119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A11A0"))) PPC_WEAK_FUNC(sub_832A11A0);
PPC_FUNC_IMPL(__imp__sub_832A11A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30756
	ctx.r3.s64 = ctx.r11.s64 + 30756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A11AC"))) PPC_WEAK_FUNC(sub_832A11AC);
PPC_FUNC_IMPL(__imp__sub_832A11AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A11B0"))) PPC_WEAK_FUNC(sub_832A11B0);
PPC_FUNC_IMPL(__imp__sub_832A11B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A11BC"))) PPC_WEAK_FUNC(sub_832A11BC);
PPC_FUNC_IMPL(__imp__sub_832A11BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A11C0"))) PPC_WEAK_FUNC(sub_832A11C0);
PPC_FUNC_IMPL(__imp__sub_832A11C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30764
	ctx.r3.s64 = ctx.r11.s64 + 30764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A11CC"))) PPC_WEAK_FUNC(sub_832A11CC);
PPC_FUNC_IMPL(__imp__sub_832A11CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A11D0"))) PPC_WEAK_FUNC(sub_832A11D0);
PPC_FUNC_IMPL(__imp__sub_832A11D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A11DC"))) PPC_WEAK_FUNC(sub_832A11DC);
PPC_FUNC_IMPL(__imp__sub_832A11DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A11E0"))) PPC_WEAK_FUNC(sub_832A11E0);
PPC_FUNC_IMPL(__imp__sub_832A11E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30772
	ctx.r3.s64 = ctx.r11.s64 + 30772;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A11EC"))) PPC_WEAK_FUNC(sub_832A11EC);
PPC_FUNC_IMPL(__imp__sub_832A11EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A11F0"))) PPC_WEAK_FUNC(sub_832A11F0);
PPC_FUNC_IMPL(__imp__sub_832A11F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A11FC"))) PPC_WEAK_FUNC(sub_832A11FC);
PPC_FUNC_IMPL(__imp__sub_832A11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1200"))) PPC_WEAK_FUNC(sub_832A1200);
PPC_FUNC_IMPL(__imp__sub_832A1200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30780
	ctx.r3.s64 = ctx.r11.s64 + 30780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A120C"))) PPC_WEAK_FUNC(sub_832A120C);
PPC_FUNC_IMPL(__imp__sub_832A120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1210"))) PPC_WEAK_FUNC(sub_832A1210);
PPC_FUNC_IMPL(__imp__sub_832A1210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30784
	ctx.r3.s64 = ctx.r11.s64 + 30784;
	// b 0x823d2b90
	sub_823D2B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A121C"))) PPC_WEAK_FUNC(sub_832A121C);
PPC_FUNC_IMPL(__imp__sub_832A121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1220"))) PPC_WEAK_FUNC(sub_832A1220);
PPC_FUNC_IMPL(__imp__sub_832A1220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30796
	ctx.r3.s64 = ctx.r11.s64 + 30796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A122C"))) PPC_WEAK_FUNC(sub_832A122C);
PPC_FUNC_IMPL(__imp__sub_832A122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1230"))) PPC_WEAK_FUNC(sub_832A1230);
PPC_FUNC_IMPL(__imp__sub_832A1230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30800
	ctx.r3.s64 = ctx.r11.s64 + 30800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A123C"))) PPC_WEAK_FUNC(sub_832A123C);
PPC_FUNC_IMPL(__imp__sub_832A123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1240"))) PPC_WEAK_FUNC(sub_832A1240);
PPC_FUNC_IMPL(__imp__sub_832A1240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30804
	ctx.r3.s64 = ctx.r11.s64 + 30804;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A124C"))) PPC_WEAK_FUNC(sub_832A124C);
PPC_FUNC_IMPL(__imp__sub_832A124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1250"))) PPC_WEAK_FUNC(sub_832A1250);
PPC_FUNC_IMPL(__imp__sub_832A1250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A125C"))) PPC_WEAK_FUNC(sub_832A125C);
PPC_FUNC_IMPL(__imp__sub_832A125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1260"))) PPC_WEAK_FUNC(sub_832A1260);
PPC_FUNC_IMPL(__imp__sub_832A1260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30812
	ctx.r3.s64 = ctx.r11.s64 + 30812;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A126C"))) PPC_WEAK_FUNC(sub_832A126C);
PPC_FUNC_IMPL(__imp__sub_832A126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1270"))) PPC_WEAK_FUNC(sub_832A1270);
PPC_FUNC_IMPL(__imp__sub_832A1270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A127C"))) PPC_WEAK_FUNC(sub_832A127C);
PPC_FUNC_IMPL(__imp__sub_832A127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1280"))) PPC_WEAK_FUNC(sub_832A1280);
PPC_FUNC_IMPL(__imp__sub_832A1280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30820
	ctx.r3.s64 = ctx.r11.s64 + 30820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A128C"))) PPC_WEAK_FUNC(sub_832A128C);
PPC_FUNC_IMPL(__imp__sub_832A128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1290"))) PPC_WEAK_FUNC(sub_832A1290);
PPC_FUNC_IMPL(__imp__sub_832A1290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30828
	ctx.r3.s64 = ctx.r11.s64 + 30828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A129C"))) PPC_WEAK_FUNC(sub_832A129C);
PPC_FUNC_IMPL(__imp__sub_832A129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A12A0"))) PPC_WEAK_FUNC(sub_832A12A0);
PPC_FUNC_IMPL(__imp__sub_832A12A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// b 0x823f4870
	sub_823F4870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A12AC"))) PPC_WEAK_FUNC(sub_832A12AC);
PPC_FUNC_IMPL(__imp__sub_832A12AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A12B0"))) PPC_WEAK_FUNC(sub_832A12B0);
PPC_FUNC_IMPL(__imp__sub_832A12B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30844
	ctx.r3.s64 = ctx.r11.s64 + 30844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A12BC"))) PPC_WEAK_FUNC(sub_832A12BC);
PPC_FUNC_IMPL(__imp__sub_832A12BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A12C0"))) PPC_WEAK_FUNC(sub_832A12C0);
PPC_FUNC_IMPL(__imp__sub_832A12C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30848
	ctx.r3.s64 = ctx.r11.s64 + 30848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A12CC"))) PPC_WEAK_FUNC(sub_832A12CC);
PPC_FUNC_IMPL(__imp__sub_832A12CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A12D0"))) PPC_WEAK_FUNC(sub_832A12D0);
PPC_FUNC_IMPL(__imp__sub_832A12D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,30852
	ctx.r3.s64 = ctx.r11.s64 + 30852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

