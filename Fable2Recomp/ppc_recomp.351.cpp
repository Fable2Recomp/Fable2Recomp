#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832AD658"))) PPC_WEAK_FUNC(sub_832AD658);
PPC_FUNC_IMPL(__imp__sub_832AD658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,16712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD66C"))) PPC_WEAK_FUNC(sub_832AD66C);
PPC_FUNC_IMPL(__imp__sub_832AD66C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD670"))) PPC_WEAK_FUNC(sub_832AD670);
PPC_FUNC_IMPL(__imp__sub_832AD670) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,16732
	ctx.r31.s64 = ctx.r11.s64 + 16732;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad698
	if (ctx.cr6.eq) goto loc_832AD698;
	// bl 0x8221be68
	ctx.lr = 0x832AD698;
	sub_8221BE68(ctx, base);
loc_832AD698:
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

__attribute__((alias("__imp__sub_832AD6C4"))) PPC_WEAK_FUNC(sub_832AD6C4);
PPC_FUNC_IMPL(__imp__sub_832AD6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD6C8"))) PPC_WEAK_FUNC(sub_832AD6C8);
PPC_FUNC_IMPL(__imp__sub_832AD6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16748
	ctx.r3.s64 = ctx.r11.s64 + 16748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD6D4"))) PPC_WEAK_FUNC(sub_832AD6D4);
PPC_FUNC_IMPL(__imp__sub_832AD6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD6D8"))) PPC_WEAK_FUNC(sub_832AD6D8);
PPC_FUNC_IMPL(__imp__sub_832AD6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16752
	ctx.r3.s64 = ctx.r11.s64 + 16752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD6E4"))) PPC_WEAK_FUNC(sub_832AD6E4);
PPC_FUNC_IMPL(__imp__sub_832AD6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD6E8"))) PPC_WEAK_FUNC(sub_832AD6E8);
PPC_FUNC_IMPL(__imp__sub_832AD6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,16756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD6FC"))) PPC_WEAK_FUNC(sub_832AD6FC);
PPC_FUNC_IMPL(__imp__sub_832AD6FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD700"))) PPC_WEAK_FUNC(sub_832AD700);
PPC_FUNC_IMPL(__imp__sub_832AD700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,16776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD714"))) PPC_WEAK_FUNC(sub_832AD714);
PPC_FUNC_IMPL(__imp__sub_832AD714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD718"))) PPC_WEAK_FUNC(sub_832AD718);
PPC_FUNC_IMPL(__imp__sub_832AD718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16796
	ctx.r3.s64 = ctx.r11.s64 + 16796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD724"))) PPC_WEAK_FUNC(sub_832AD724);
PPC_FUNC_IMPL(__imp__sub_832AD724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD728"))) PPC_WEAK_FUNC(sub_832AD728);
PPC_FUNC_IMPL(__imp__sub_832AD728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16800
	ctx.r3.s64 = ctx.r11.s64 + 16800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD734"))) PPC_WEAK_FUNC(sub_832AD734);
PPC_FUNC_IMPL(__imp__sub_832AD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD738"))) PPC_WEAK_FUNC(sub_832AD738);
PPC_FUNC_IMPL(__imp__sub_832AD738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x832AD740;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,16880
	ctx.r11.s64 = ctx.r11.s64 + 16880;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r30,r11,2208
	ctx.r30.s64 = ctx.r11.s64 + 2208;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r28,22
	ctx.r28.s64 = 22;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r8,7552
	ctx.r27.s64 = ctx.r8.s64 + 7552;
	// addi r26,r9,7536
	ctx.r26.s64 = ctx.r9.s64 + 7536;
	// addi r25,r10,7532
	ctx.r25.s64 = ctx.r10.s64 + 7532;
	// addi r29,r11,-23720
	ctx.r29.s64 = ctx.r11.s64 + -23720;
loc_832AD778:
	// addi r30,r30,-96
	ctx.r30.s64 = ctx.r30.s64 + -96;
	// addic. r31,r30,16
	ctx.xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r31.s64 = ctx.r30.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x832ad78c
	if (!ctx.cr0.eq) goto loc_832AD78C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_832AD78C:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// beq cr6,0x832ad7ac
	if (ctx.cr6.eq) goto loc_832AD7AC;
	// bl 0x821fc1f0
	ctx.lr = 0x832AD7A4;
	sub_821FC1F0(ctx, base);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
loc_832AD7AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// bne cr6,0x832ad7bc
	if (!ctx.cr6.eq) goto loc_832AD7BC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_832AD7BC:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AD7CC;
	sub_821FBED8(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fbed8
	ctx.lr = 0x832AD7D8;
	sub_821FBED8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x832ad778
	if (!ctx.cr0.lt) goto loc_832AD778;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_832AD7E8"))) PPC_WEAK_FUNC(sub_832AD7E8);
PPC_FUNC_IMPL(__imp__sub_832AD7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16804
	ctx.r3.s64 = ctx.r11.s64 + 16804;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD7F4"))) PPC_WEAK_FUNC(sub_832AD7F4);
PPC_FUNC_IMPL(__imp__sub_832AD7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD7F8"))) PPC_WEAK_FUNC(sub_832AD7F8);
PPC_FUNC_IMPL(__imp__sub_832AD7F8) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19088);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad858
	if (ctx.cr6.eq) goto loc_832AD858;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD81C:
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
	// bne 0x832ad81c
	if (!ctx.cr0.eq) goto loc_832AD81C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ad850
	if (!ctx.cr6.eq) goto loc_832AD850;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AD850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AD850:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19088, ctx.r11.u32);
loc_832AD858:
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

__attribute__((alias("__imp__sub_832AD86C"))) PPC_WEAK_FUNC(sub_832AD86C);
PPC_FUNC_IMPL(__imp__sub_832AD86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD870"))) PPC_WEAK_FUNC(sub_832AD870);
PPC_FUNC_IMPL(__imp__sub_832AD870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,-21816
	ctx.r3.s64 = ctx.r11.s64 + -21816;
	// b 0x82b18a20
	sub_82B18A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD87C"))) PPC_WEAK_FUNC(sub_832AD87C);
PPC_FUNC_IMPL(__imp__sub_832AD87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD880"))) PPC_WEAK_FUNC(sub_832AD880);
PPC_FUNC_IMPL(__imp__sub_832AD880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19168
	ctx.r3.s64 = ctx.r11.s64 + 19168;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD88C"))) PPC_WEAK_FUNC(sub_832AD88C);
PPC_FUNC_IMPL(__imp__sub_832AD88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD890"))) PPC_WEAK_FUNC(sub_832AD890);
PPC_FUNC_IMPL(__imp__sub_832AD890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19172
	ctx.r3.s64 = ctx.r11.s64 + 19172;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD89C"))) PPC_WEAK_FUNC(sub_832AD89C);
PPC_FUNC_IMPL(__imp__sub_832AD89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD8A0"))) PPC_WEAK_FUNC(sub_832AD8A0);
PPC_FUNC_IMPL(__imp__sub_832AD8A0) {
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
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,-21784
	ctx.r30.s64 = ctx.r31.s64 + -21784;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-21784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21784, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AD8D0;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-21784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21784, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AD8E4;
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832AD8FC"))) PPC_WEAK_FUNC(sub_832AD8FC);
PPC_FUNC_IMPL(__imp__sub_832AD8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD900"))) PPC_WEAK_FUNC(sub_832AD900);
PPC_FUNC_IMPL(__imp__sub_832AD900) {
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
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,-21776
	ctx.r30.s64 = ctx.r31.s64 + -21776;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-21776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21776, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AD930;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-21776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21776, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AD944;
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832AD95C"))) PPC_WEAK_FUNC(sub_832AD95C);
PPC_FUNC_IMPL(__imp__sub_832AD95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD960"))) PPC_WEAK_FUNC(sub_832AD960);
PPC_FUNC_IMPL(__imp__sub_832AD960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19216
	ctx.r3.s64 = ctx.r11.s64 + 19216;
	// b 0x82a84538
	sub_82A84538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD96C"))) PPC_WEAK_FUNC(sub_832AD96C);
PPC_FUNC_IMPL(__imp__sub_832AD96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD970"))) PPC_WEAK_FUNC(sub_832AD970);
PPC_FUNC_IMPL(__imp__sub_832AD970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,19292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD984"))) PPC_WEAK_FUNC(sub_832AD984);
PPC_FUNC_IMPL(__imp__sub_832AD984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD988"))) PPC_WEAK_FUNC(sub_832AD988);
PPC_FUNC_IMPL(__imp__sub_832AD988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,19312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD99C"))) PPC_WEAK_FUNC(sub_832AD99C);
PPC_FUNC_IMPL(__imp__sub_832AD99C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD9A0"))) PPC_WEAK_FUNC(sub_832AD9A0);
PPC_FUNC_IMPL(__imp__sub_832AD9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,19332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD9B4"))) PPC_WEAK_FUNC(sub_832AD9B4);
PPC_FUNC_IMPL(__imp__sub_832AD9B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD9B8"))) PPC_WEAK_FUNC(sub_832AD9B8);
PPC_FUNC_IMPL(__imp__sub_832AD9B8) {
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
	// addi r31,r11,5936
	ctx.r31.s64 = ctx.r11.s64 + 5936;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad9e0
	if (ctx.cr6.eq) goto loc_832AD9E0;
	// bl 0x8221be68
	ctx.lr = 0x832AD9E0;
	sub_8221BE68(ctx, base);
loc_832AD9E0:
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

__attribute__((alias("__imp__sub_832ADA0C"))) PPC_WEAK_FUNC(sub_832ADA0C);
PPC_FUNC_IMPL(__imp__sub_832ADA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADA10"))) PPC_WEAK_FUNC(sub_832ADA10);
PPC_FUNC_IMPL(__imp__sub_832ADA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19352
	ctx.r3.s64 = ctx.r11.s64 + 19352;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADA1C"))) PPC_WEAK_FUNC(sub_832ADA1C);
PPC_FUNC_IMPL(__imp__sub_832ADA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADA20"))) PPC_WEAK_FUNC(sub_832ADA20);
PPC_FUNC_IMPL(__imp__sub_832ADA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19356
	ctx.r3.s64 = ctx.r11.s64 + 19356;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADA2C"))) PPC_WEAK_FUNC(sub_832ADA2C);
PPC_FUNC_IMPL(__imp__sub_832ADA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADA30"))) PPC_WEAK_FUNC(sub_832ADA30);
PPC_FUNC_IMPL(__imp__sub_832ADA30) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,19360
	ctx.r31.s64 = ctx.r11.s64 + 19360;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ada58
	if (ctx.cr6.eq) goto loc_832ADA58;
	// bl 0x8221be68
	ctx.lr = 0x832ADA58;
	sub_8221BE68(ctx, base);
loc_832ADA58:
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

__attribute__((alias("__imp__sub_832ADA84"))) PPC_WEAK_FUNC(sub_832ADA84);
PPC_FUNC_IMPL(__imp__sub_832ADA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADA88"))) PPC_WEAK_FUNC(sub_832ADA88);
PPC_FUNC_IMPL(__imp__sub_832ADA88) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,19376
	ctx.r31.s64 = ctx.r11.s64 + 19376;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832adab0
	if (ctx.cr6.eq) goto loc_832ADAB0;
	// bl 0x8221be68
	ctx.lr = 0x832ADAB0;
	sub_8221BE68(ctx, base);
loc_832ADAB0:
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

__attribute__((alias("__imp__sub_832ADADC"))) PPC_WEAK_FUNC(sub_832ADADC);
PPC_FUNC_IMPL(__imp__sub_832ADADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADAE0"))) PPC_WEAK_FUNC(sub_832ADAE0);
PPC_FUNC_IMPL(__imp__sub_832ADAE0) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,19392
	ctx.r31.s64 = ctx.r11.s64 + 19392;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832adb08
	if (ctx.cr6.eq) goto loc_832ADB08;
	// bl 0x8221be68
	ctx.lr = 0x832ADB08;
	sub_8221BE68(ctx, base);
loc_832ADB08:
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

__attribute__((alias("__imp__sub_832ADB34"))) PPC_WEAK_FUNC(sub_832ADB34);
PPC_FUNC_IMPL(__imp__sub_832ADB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADB38"))) PPC_WEAK_FUNC(sub_832ADB38);
PPC_FUNC_IMPL(__imp__sub_832ADB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19408
	ctx.r3.s64 = ctx.r11.s64 + 19408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADB44"))) PPC_WEAK_FUNC(sub_832ADB44);
PPC_FUNC_IMPL(__imp__sub_832ADB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADB48"))) PPC_WEAK_FUNC(sub_832ADB48);
PPC_FUNC_IMPL(__imp__sub_832ADB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19412
	ctx.r3.s64 = ctx.r11.s64 + 19412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADB54"))) PPC_WEAK_FUNC(sub_832ADB54);
PPC_FUNC_IMPL(__imp__sub_832ADB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADB58"))) PPC_WEAK_FUNC(sub_832ADB58);
PPC_FUNC_IMPL(__imp__sub_832ADB58) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832adb7c
	if (ctx.cr6.eq) goto loc_832ADB7C;
	// bl 0x8221be68
	ctx.lr = 0x832ADB7C;
	sub_8221BE68(ctx, base);
loc_832ADB7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19416, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832ADB98"))) PPC_WEAK_FUNC(sub_832ADB98);
PPC_FUNC_IMPL(__imp__sub_832ADB98) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,19420
	ctx.r31.s64 = ctx.r11.s64 + 19420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f5c0
	ctx.lr = 0x832ADBB8;
	sub_82A0F5C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832ADBC0;
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

__attribute__((alias("__imp__sub_832ADBDC"))) PPC_WEAK_FUNC(sub_832ADBDC);
PPC_FUNC_IMPL(__imp__sub_832ADBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADBE0"))) PPC_WEAK_FUNC(sub_832ADBE0);
PPC_FUNC_IMPL(__imp__sub_832ADBE0) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,19432
	ctx.r31.s64 = ctx.r11.s64 + 19432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f5c0
	ctx.lr = 0x832ADC00;
	sub_82A0F5C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832ADC08;
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

__attribute__((alias("__imp__sub_832ADC24"))) PPC_WEAK_FUNC(sub_832ADC24);
PPC_FUNC_IMPL(__imp__sub_832ADC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADC28"))) PPC_WEAK_FUNC(sub_832ADC28);
PPC_FUNC_IMPL(__imp__sub_832ADC28) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,19444
	ctx.r31.s64 = ctx.r11.s64 + 19444;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832adc88
	if (ctx.cr6.eq) goto loc_832ADC88;
loc_832ADC6C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x832ADC78;
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x832adc6c
	if (!ctx.cr6.eq) goto loc_832ADC6C;
loc_832ADC88:
	// bl 0x8221be68
	ctx.lr = 0x832ADC8C;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_832ADCAC"))) PPC_WEAK_FUNC(sub_832ADCAC);
PPC_FUNC_IMPL(__imp__sub_832ADCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADCB0"))) PPC_WEAK_FUNC(sub_832ADCB0);
PPC_FUNC_IMPL(__imp__sub_832ADCB0) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,19456
	ctx.r31.s64 = ctx.r11.s64 + 19456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8bc88
	ctx.lr = 0x832ADCD0;
	sub_82A8BC88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832ADCD8;
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

__attribute__((alias("__imp__sub_832ADCF4"))) PPC_WEAK_FUNC(sub_832ADCF4);
PPC_FUNC_IMPL(__imp__sub_832ADCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADCF8"))) PPC_WEAK_FUNC(sub_832ADCF8);
PPC_FUNC_IMPL(__imp__sub_832ADCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADD04"))) PPC_WEAK_FUNC(sub_832ADD04);
PPC_FUNC_IMPL(__imp__sub_832ADD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADD08"))) PPC_WEAK_FUNC(sub_832ADD08);
PPC_FUNC_IMPL(__imp__sub_832ADD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19492
	ctx.r3.s64 = ctx.r11.s64 + 19492;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADD14"))) PPC_WEAK_FUNC(sub_832ADD14);
PPC_FUNC_IMPL(__imp__sub_832ADD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADD18"))) PPC_WEAK_FUNC(sub_832ADD18);
PPC_FUNC_IMPL(__imp__sub_832ADD18) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19648);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832add44
	if (ctx.cr6.eq) goto loc_832ADD44;
	// bl 0x82b84288
	ctx.lr = 0x832ADD3C;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19648, ctx.r11.u32);
loc_832ADD44:
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

__attribute__((alias("__imp__sub_832ADD58"))) PPC_WEAK_FUNC(sub_832ADD58);
PPC_FUNC_IMPL(__imp__sub_832ADD58) {
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
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lwz r3,-21616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832add84
	if (ctx.cr6.eq) goto loc_832ADD84;
	// bl 0x82b84288
	ctx.lr = 0x832ADD7C;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21616, ctx.r11.u32);
loc_832ADD84:
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

__attribute__((alias("__imp__sub_832ADD98"))) PPC_WEAK_FUNC(sub_832ADD98);
PPC_FUNC_IMPL(__imp__sub_832ADD98) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832addc4
	if (ctx.cr6.eq) goto loc_832ADDC4;
	// bl 0x82b84288
	ctx.lr = 0x832ADDBC;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19660, ctx.r11.u32);
loc_832ADDC4:
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

__attribute__((alias("__imp__sub_832ADDD8"))) PPC_WEAK_FUNC(sub_832ADDD8);
PPC_FUNC_IMPL(__imp__sub_832ADDD8) {
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
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lwz r3,-21604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ade04
	if (ctx.cr6.eq) goto loc_832ADE04;
	// bl 0x82b84288
	ctx.lr = 0x832ADDFC;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21604, ctx.r11.u32);
loc_832ADE04:
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

__attribute__((alias("__imp__sub_832ADE18"))) PPC_WEAK_FUNC(sub_832ADE18);
PPC_FUNC_IMPL(__imp__sub_832ADE18) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,19672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ade44
	if (ctx.cr6.eq) goto loc_832ADE44;
	// bl 0x82b84288
	ctx.lr = 0x832ADE3C;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19672, ctx.r11.u32);
loc_832ADE44:
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

__attribute__((alias("__imp__sub_832ADE58"))) PPC_WEAK_FUNC(sub_832ADE58);
PPC_FUNC_IMPL(__imp__sub_832ADE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,19684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADE6C"))) PPC_WEAK_FUNC(sub_832ADE6C);
PPC_FUNC_IMPL(__imp__sub_832ADE6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADE70"))) PPC_WEAK_FUNC(sub_832ADE70);
PPC_FUNC_IMPL(__imp__sub_832ADE70) {
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
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,-21592
	ctx.r3.s64 = ctx.r31.s64 + -21592;
	// addi r11,r11,26596
	ctx.r11.s64 = ctx.r11.s64 + 26596;
	// stw r11,-21592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21592, ctx.r11.u32);
	// bl 0x82be4d50
	ctx.lr = 0x832ADE98;
	sub_82BE4D50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-21592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21592, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832ADEB8"))) PPC_WEAK_FUNC(sub_832ADEB8);
PPC_FUNC_IMPL(__imp__sub_832ADEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19704
	ctx.r3.s64 = ctx.r11.s64 + 19704;
	// b 0x82a8dd30
	sub_82A8DD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADEC4"))) PPC_WEAK_FUNC(sub_832ADEC4);
PPC_FUNC_IMPL(__imp__sub_832ADEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADEC8"))) PPC_WEAK_FUNC(sub_832ADEC8);
PPC_FUNC_IMPL(__imp__sub_832ADEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19716
	ctx.r3.s64 = ctx.r11.s64 + 19716;
	// b 0x82a8dee0
	sub_82A8DEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADED4"))) PPC_WEAK_FUNC(sub_832ADED4);
PPC_FUNC_IMPL(__imp__sub_832ADED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADED8"))) PPC_WEAK_FUNC(sub_832ADED8);
PPC_FUNC_IMPL(__imp__sub_832ADED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// b 0x82a8e090
	sub_82A8E090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADEE4"))) PPC_WEAK_FUNC(sub_832ADEE4);
PPC_FUNC_IMPL(__imp__sub_832ADEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADEE8"))) PPC_WEAK_FUNC(sub_832ADEE8);
PPC_FUNC_IMPL(__imp__sub_832ADEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19740
	ctx.r3.s64 = ctx.r11.s64 + 19740;
	// b 0x82a8e240
	sub_82A8E240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADEF4"))) PPC_WEAK_FUNC(sub_832ADEF4);
PPC_FUNC_IMPL(__imp__sub_832ADEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADEF8"))) PPC_WEAK_FUNC(sub_832ADEF8);
PPC_FUNC_IMPL(__imp__sub_832ADEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19752
	ctx.r3.s64 = ctx.r11.s64 + 19752;
	// b 0x82a8e3f0
	sub_82A8E3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF04"))) PPC_WEAK_FUNC(sub_832ADF04);
PPC_FUNC_IMPL(__imp__sub_832ADF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF08"))) PPC_WEAK_FUNC(sub_832ADF08);
PPC_FUNC_IMPL(__imp__sub_832ADF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19764
	ctx.r3.s64 = ctx.r11.s64 + 19764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF14"))) PPC_WEAK_FUNC(sub_832ADF14);
PPC_FUNC_IMPL(__imp__sub_832ADF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF18"))) PPC_WEAK_FUNC(sub_832ADF18);
PPC_FUNC_IMPL(__imp__sub_832ADF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,19768
	ctx.r3.s64 = ctx.r11.s64 + 19768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF24"))) PPC_WEAK_FUNC(sub_832ADF24);
PPC_FUNC_IMPL(__imp__sub_832ADF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF28"))) PPC_WEAK_FUNC(sub_832ADF28);
PPC_FUNC_IMPL(__imp__sub_832ADF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ADF2C"))) PPC_WEAK_FUNC(sub_832ADF2C);
PPC_FUNC_IMPL(__imp__sub_832ADF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF30"))) PPC_WEAK_FUNC(sub_832ADF30);
PPC_FUNC_IMPL(__imp__sub_832ADF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF3C"))) PPC_WEAK_FUNC(sub_832ADF3C);
PPC_FUNC_IMPL(__imp__sub_832ADF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF40"))) PPC_WEAK_FUNC(sub_832ADF40);
PPC_FUNC_IMPL(__imp__sub_832ADF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20020
	ctx.r3.s64 = ctx.r11.s64 + 20020;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF4C"))) PPC_WEAK_FUNC(sub_832ADF4C);
PPC_FUNC_IMPL(__imp__sub_832ADF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF50"))) PPC_WEAK_FUNC(sub_832ADF50);
PPC_FUNC_IMPL(__imp__sub_832ADF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// b 0x82275238
	sub_82275238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF5C"))) PPC_WEAK_FUNC(sub_832ADF5C);
PPC_FUNC_IMPL(__imp__sub_832ADF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF60"))) PPC_WEAK_FUNC(sub_832ADF60);
PPC_FUNC_IMPL(__imp__sub_832ADF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20980
	ctx.r3.s64 = ctx.r11.s64 + 20980;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF6C"))) PPC_WEAK_FUNC(sub_832ADF6C);
PPC_FUNC_IMPL(__imp__sub_832ADF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF70"))) PPC_WEAK_FUNC(sub_832ADF70);
PPC_FUNC_IMPL(__imp__sub_832ADF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF7C"))) PPC_WEAK_FUNC(sub_832ADF7C);
PPC_FUNC_IMPL(__imp__sub_832ADF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF80"))) PPC_WEAK_FUNC(sub_832ADF80);
PPC_FUNC_IMPL(__imp__sub_832ADF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21060
	ctx.r3.s64 = ctx.r11.s64 + 21060;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF8C"))) PPC_WEAK_FUNC(sub_832ADF8C);
PPC_FUNC_IMPL(__imp__sub_832ADF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADF90"))) PPC_WEAK_FUNC(sub_832ADF90);
PPC_FUNC_IMPL(__imp__sub_832ADF90) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21064
	ctx.r31.s64 = ctx.r11.s64 + 21064;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832adfb8
	if (ctx.cr6.eq) goto loc_832ADFB8;
	// bl 0x8221be68
	ctx.lr = 0x832ADFB8;
	sub_8221BE68(ctx, base);
loc_832ADFB8:
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

__attribute__((alias("__imp__sub_832ADFE4"))) PPC_WEAK_FUNC(sub_832ADFE4);
PPC_FUNC_IMPL(__imp__sub_832ADFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADFE8"))) PPC_WEAK_FUNC(sub_832ADFE8);
PPC_FUNC_IMPL(__imp__sub_832ADFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADFF4"))) PPC_WEAK_FUNC(sub_832ADFF4);
PPC_FUNC_IMPL(__imp__sub_832ADFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ADFF8"))) PPC_WEAK_FUNC(sub_832ADFF8);
PPC_FUNC_IMPL(__imp__sub_832ADFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21084
	ctx.r3.s64 = ctx.r11.s64 + 21084;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE004"))) PPC_WEAK_FUNC(sub_832AE004);
PPC_FUNC_IMPL(__imp__sub_832AE004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE008"))) PPC_WEAK_FUNC(sub_832AE008);
PPC_FUNC_IMPL(__imp__sub_832AE008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE014"))) PPC_WEAK_FUNC(sub_832AE014);
PPC_FUNC_IMPL(__imp__sub_832AE014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE018"))) PPC_WEAK_FUNC(sub_832AE018);
PPC_FUNC_IMPL(__imp__sub_832AE018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21092
	ctx.r3.s64 = ctx.r11.s64 + 21092;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE024"))) PPC_WEAK_FUNC(sub_832AE024);
PPC_FUNC_IMPL(__imp__sub_832AE024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE028"))) PPC_WEAK_FUNC(sub_832AE028);
PPC_FUNC_IMPL(__imp__sub_832AE028) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,21096
	ctx.r11.s64 = ctx.r11.s64 + 21096;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_832AE04C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae060
	if (ctx.cr6.eq) goto loc_832AE060;
	// bl 0x821fc1f0
	ctx.lr = 0x832AE060;
	sub_821FC1F0(ctx, base);
loc_832AE060:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae04c
	if (!ctx.cr0.lt) goto loc_832AE04C;
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

__attribute__((alias("__imp__sub_832AE080"))) PPC_WEAK_FUNC(sub_832AE080);
PPC_FUNC_IMPL(__imp__sub_832AE080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,21176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE094"))) PPC_WEAK_FUNC(sub_832AE094);
PPC_FUNC_IMPL(__imp__sub_832AE094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE098"))) PPC_WEAK_FUNC(sub_832AE098);
PPC_FUNC_IMPL(__imp__sub_832AE098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,21196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0AC"))) PPC_WEAK_FUNC(sub_832AE0AC);
PPC_FUNC_IMPL(__imp__sub_832AE0AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE0B0"))) PPC_WEAK_FUNC(sub_832AE0B0);
PPC_FUNC_IMPL(__imp__sub_832AE0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21216
	ctx.r3.s64 = ctx.r11.s64 + 21216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0BC"))) PPC_WEAK_FUNC(sub_832AE0BC);
PPC_FUNC_IMPL(__imp__sub_832AE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0C0"))) PPC_WEAK_FUNC(sub_832AE0C0);
PPC_FUNC_IMPL(__imp__sub_832AE0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21220
	ctx.r3.s64 = ctx.r11.s64 + 21220;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0CC"))) PPC_WEAK_FUNC(sub_832AE0CC);
PPC_FUNC_IMPL(__imp__sub_832AE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0D0"))) PPC_WEAK_FUNC(sub_832AE0D0);
PPC_FUNC_IMPL(__imp__sub_832AE0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0DC"))) PPC_WEAK_FUNC(sub_832AE0DC);
PPC_FUNC_IMPL(__imp__sub_832AE0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0E0"))) PPC_WEAK_FUNC(sub_832AE0E0);
PPC_FUNC_IMPL(__imp__sub_832AE0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21228
	ctx.r3.s64 = ctx.r11.s64 + 21228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0EC"))) PPC_WEAK_FUNC(sub_832AE0EC);
PPC_FUNC_IMPL(__imp__sub_832AE0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE0F0"))) PPC_WEAK_FUNC(sub_832AE0F0);
PPC_FUNC_IMPL(__imp__sub_832AE0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21232
	ctx.r3.s64 = ctx.r11.s64 + 21232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE0FC"))) PPC_WEAK_FUNC(sub_832AE0FC);
PPC_FUNC_IMPL(__imp__sub_832AE0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE100"))) PPC_WEAK_FUNC(sub_832AE100);
PPC_FUNC_IMPL(__imp__sub_832AE100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21236
	ctx.r3.s64 = ctx.r11.s64 + 21236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE10C"))) PPC_WEAK_FUNC(sub_832AE10C);
PPC_FUNC_IMPL(__imp__sub_832AE10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE110"))) PPC_WEAK_FUNC(sub_832AE110);
PPC_FUNC_IMPL(__imp__sub_832AE110) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21240
	ctx.r31.s64 = ctx.r11.s64 + 21240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bcc8
	ctx.lr = 0x832AE130;
	sub_8217BCC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE138;
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

__attribute__((alias("__imp__sub_832AE154"))) PPC_WEAK_FUNC(sub_832AE154);
PPC_FUNC_IMPL(__imp__sub_832AE154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE158"))) PPC_WEAK_FUNC(sub_832AE158);
PPC_FUNC_IMPL(__imp__sub_832AE158) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21252
	ctx.r31.s64 = ctx.r11.s64 + 21252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bf20
	ctx.lr = 0x832AE178;
	sub_8217BF20(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE180;
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

__attribute__((alias("__imp__sub_832AE19C"))) PPC_WEAK_FUNC(sub_832AE19C);
PPC_FUNC_IMPL(__imp__sub_832AE19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE1A0"))) PPC_WEAK_FUNC(sub_832AE1A0);
PPC_FUNC_IMPL(__imp__sub_832AE1A0) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21264
	ctx.r31.s64 = ctx.r11.s64 + 21264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bdb8
	ctx.lr = 0x832AE1C0;
	sub_8217BDB8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE1C8;
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

__attribute__((alias("__imp__sub_832AE1E4"))) PPC_WEAK_FUNC(sub_832AE1E4);
PPC_FUNC_IMPL(__imp__sub_832AE1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE1E8"))) PPC_WEAK_FUNC(sub_832AE1E8);
PPC_FUNC_IMPL(__imp__sub_832AE1E8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21276
	ctx.r31.s64 = ctx.r11.s64 + 21276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bea8
	ctx.lr = 0x832AE208;
	sub_8217BEA8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE210;
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

__attribute__((alias("__imp__sub_832AE22C"))) PPC_WEAK_FUNC(sub_832AE22C);
PPC_FUNC_IMPL(__imp__sub_832AE22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE230"))) PPC_WEAK_FUNC(sub_832AE230);
PPC_FUNC_IMPL(__imp__sub_832AE230) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21288
	ctx.r31.s64 = ctx.r11.s64 + 21288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217bd40
	ctx.lr = 0x832AE250;
	sub_8217BD40(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE258;
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

__attribute__((alias("__imp__sub_832AE274"))) PPC_WEAK_FUNC(sub_832AE274);
PPC_FUNC_IMPL(__imp__sub_832AE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE278"))) PPC_WEAK_FUNC(sub_832AE278);
PPC_FUNC_IMPL(__imp__sub_832AE278) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21300
	ctx.r31.s64 = ctx.r11.s64 + 21300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217be30
	ctx.lr = 0x832AE298;
	sub_8217BE30(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AE2A0;
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

__attribute__((alias("__imp__sub_832AE2BC"))) PPC_WEAK_FUNC(sub_832AE2BC);
PPC_FUNC_IMPL(__imp__sub_832AE2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE2C0"))) PPC_WEAK_FUNC(sub_832AE2C0);
PPC_FUNC_IMPL(__imp__sub_832AE2C0) {
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
	// lis r30,-31926
	ctx.r30.s64 = -2092302336;
	// lwz r31,21312(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21312);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832ae2f4
	if (ctx.cr6.eq) goto loc_832AE2F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d940
	ctx.lr = 0x832AE2EC;
	sub_8233D940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x832AE2F4;
	sub_8221BE68(ctx, base);
loc_832AE2F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21312, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832AE314"))) PPC_WEAK_FUNC(sub_832AE314);
PPC_FUNC_IMPL(__imp__sub_832AE314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE318"))) PPC_WEAK_FUNC(sub_832AE318);
PPC_FUNC_IMPL(__imp__sub_832AE318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21316
	ctx.r3.s64 = ctx.r11.s64 + 21316;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE324"))) PPC_WEAK_FUNC(sub_832AE324);
PPC_FUNC_IMPL(__imp__sub_832AE324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE328"))) PPC_WEAK_FUNC(sub_832AE328);
PPC_FUNC_IMPL(__imp__sub_832AE328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE334"))) PPC_WEAK_FUNC(sub_832AE334);
PPC_FUNC_IMPL(__imp__sub_832AE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE338"))) PPC_WEAK_FUNC(sub_832AE338);
PPC_FUNC_IMPL(__imp__sub_832AE338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21324
	ctx.r3.s64 = ctx.r11.s64 + 21324;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE344"))) PPC_WEAK_FUNC(sub_832AE344);
PPC_FUNC_IMPL(__imp__sub_832AE344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE348"))) PPC_WEAK_FUNC(sub_832AE348);
PPC_FUNC_IMPL(__imp__sub_832AE348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE354"))) PPC_WEAK_FUNC(sub_832AE354);
PPC_FUNC_IMPL(__imp__sub_832AE354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE358"))) PPC_WEAK_FUNC(sub_832AE358);
PPC_FUNC_IMPL(__imp__sub_832AE358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21332
	ctx.r3.s64 = ctx.r11.s64 + 21332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE364"))) PPC_WEAK_FUNC(sub_832AE364);
PPC_FUNC_IMPL(__imp__sub_832AE364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE368"))) PPC_WEAK_FUNC(sub_832AE368);
PPC_FUNC_IMPL(__imp__sub_832AE368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE374"))) PPC_WEAK_FUNC(sub_832AE374);
PPC_FUNC_IMPL(__imp__sub_832AE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE378"))) PPC_WEAK_FUNC(sub_832AE378);
PPC_FUNC_IMPL(__imp__sub_832AE378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21340
	ctx.r3.s64 = ctx.r11.s64 + 21340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE384"))) PPC_WEAK_FUNC(sub_832AE384);
PPC_FUNC_IMPL(__imp__sub_832AE384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE388"))) PPC_WEAK_FUNC(sub_832AE388);
PPC_FUNC_IMPL(__imp__sub_832AE388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE394"))) PPC_WEAK_FUNC(sub_832AE394);
PPC_FUNC_IMPL(__imp__sub_832AE394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE398"))) PPC_WEAK_FUNC(sub_832AE398);
PPC_FUNC_IMPL(__imp__sub_832AE398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21348
	ctx.r3.s64 = ctx.r11.s64 + 21348;
	// b 0x82aa36f8
	sub_82AA36F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3A4"))) PPC_WEAK_FUNC(sub_832AE3A4);
PPC_FUNC_IMPL(__imp__sub_832AE3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3A8"))) PPC_WEAK_FUNC(sub_832AE3A8);
PPC_FUNC_IMPL(__imp__sub_832AE3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21364
	ctx.r3.s64 = ctx.r11.s64 + 21364;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3B4"))) PPC_WEAK_FUNC(sub_832AE3B4);
PPC_FUNC_IMPL(__imp__sub_832AE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3B8"))) PPC_WEAK_FUNC(sub_832AE3B8);
PPC_FUNC_IMPL(__imp__sub_832AE3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// b 0x821de318
	sub_821DE318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3C4"))) PPC_WEAK_FUNC(sub_832AE3C4);
PPC_FUNC_IMPL(__imp__sub_832AE3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3C8"))) PPC_WEAK_FUNC(sub_832AE3C8);
PPC_FUNC_IMPL(__imp__sub_832AE3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE3CC"))) PPC_WEAK_FUNC(sub_832AE3CC);
PPC_FUNC_IMPL(__imp__sub_832AE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3D0"))) PPC_WEAK_FUNC(sub_832AE3D0);
PPC_FUNC_IMPL(__imp__sub_832AE3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21408
	ctx.r3.s64 = ctx.r11.s64 + 21408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3DC"))) PPC_WEAK_FUNC(sub_832AE3DC);
PPC_FUNC_IMPL(__imp__sub_832AE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3E0"))) PPC_WEAK_FUNC(sub_832AE3E0);
PPC_FUNC_IMPL(__imp__sub_832AE3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21412
	ctx.r3.s64 = ctx.r11.s64 + 21412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE3EC"))) PPC_WEAK_FUNC(sub_832AE3EC);
PPC_FUNC_IMPL(__imp__sub_832AE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE3F0"))) PPC_WEAK_FUNC(sub_832AE3F0);
PPC_FUNC_IMPL(__imp__sub_832AE3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,21416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE404"))) PPC_WEAK_FUNC(sub_832AE404);
PPC_FUNC_IMPL(__imp__sub_832AE404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE408"))) PPC_WEAK_FUNC(sub_832AE408);
PPC_FUNC_IMPL(__imp__sub_832AE408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21436
	ctx.r3.s64 = ctx.r11.s64 + 21436;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE414"))) PPC_WEAK_FUNC(sub_832AE414);
PPC_FUNC_IMPL(__imp__sub_832AE414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE418"))) PPC_WEAK_FUNC(sub_832AE418);
PPC_FUNC_IMPL(__imp__sub_832AE418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE424"))) PPC_WEAK_FUNC(sub_832AE424);
PPC_FUNC_IMPL(__imp__sub_832AE424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE428"))) PPC_WEAK_FUNC(sub_832AE428);
PPC_FUNC_IMPL(__imp__sub_832AE428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21444
	ctx.r3.s64 = ctx.r11.s64 + 21444;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE434"))) PPC_WEAK_FUNC(sub_832AE434);
PPC_FUNC_IMPL(__imp__sub_832AE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE438"))) PPC_WEAK_FUNC(sub_832AE438);
PPC_FUNC_IMPL(__imp__sub_832AE438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE444"))) PPC_WEAK_FUNC(sub_832AE444);
PPC_FUNC_IMPL(__imp__sub_832AE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE448"))) PPC_WEAK_FUNC(sub_832AE448);
PPC_FUNC_IMPL(__imp__sub_832AE448) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21452
	ctx.r11.s64 = ctx.r11.s64 + 21452;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE46C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE478;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae46c
	if (!ctx.cr0.lt) goto loc_832AE46C;
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

__attribute__((alias("__imp__sub_832AE498"))) PPC_WEAK_FUNC(sub_832AE498);
PPC_FUNC_IMPL(__imp__sub_832AE498) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21468
	ctx.r11.s64 = ctx.r11.s64 + 21468;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE4BC:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE4C8;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae4bc
	if (!ctx.cr0.lt) goto loc_832AE4BC;
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

__attribute__((alias("__imp__sub_832AE4E8"))) PPC_WEAK_FUNC(sub_832AE4E8);
PPC_FUNC_IMPL(__imp__sub_832AE4E8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21484
	ctx.r11.s64 = ctx.r11.s64 + 21484;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE50C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE518;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae50c
	if (!ctx.cr0.lt) goto loc_832AE50C;
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

__attribute__((alias("__imp__sub_832AE538"))) PPC_WEAK_FUNC(sub_832AE538);
PPC_FUNC_IMPL(__imp__sub_832AE538) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21500
	ctx.r11.s64 = ctx.r11.s64 + 21500;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE55C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE568;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae55c
	if (!ctx.cr0.lt) goto loc_832AE55C;
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

__attribute__((alias("__imp__sub_832AE588"))) PPC_WEAK_FUNC(sub_832AE588);
PPC_FUNC_IMPL(__imp__sub_832AE588) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21516
	ctx.r11.s64 = ctx.r11.s64 + 21516;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE5AC:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE5B8;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae5ac
	if (!ctx.cr0.lt) goto loc_832AE5AC;
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

__attribute__((alias("__imp__sub_832AE5D8"))) PPC_WEAK_FUNC(sub_832AE5D8);
PPC_FUNC_IMPL(__imp__sub_832AE5D8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,21532
	ctx.r11.s64 = ctx.r11.s64 + 21532;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_832AE5FC:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x832AE608;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ae5fc
	if (!ctx.cr0.lt) goto loc_832AE5FC;
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

__attribute__((alias("__imp__sub_832AE628"))) PPC_WEAK_FUNC(sub_832AE628);
PPC_FUNC_IMPL(__imp__sub_832AE628) {
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
	// lis r31,-31950
	ctx.r31.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,-21524
	ctx.r30.s64 = ctx.r31.s64 + -21524;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-21524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21524, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AE658;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-21524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21524, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AE66C;
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832AE684"))) PPC_WEAK_FUNC(sub_832AE684);
PPC_FUNC_IMPL(__imp__sub_832AE684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE688"))) PPC_WEAK_FUNC(sub_832AE688);
PPC_FUNC_IMPL(__imp__sub_832AE688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21548
	ctx.r3.s64 = ctx.r11.s64 + 21548;
	// b 0x82aa7b20
	sub_82AA7B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE694"))) PPC_WEAK_FUNC(sub_832AE694);
PPC_FUNC_IMPL(__imp__sub_832AE694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE698"))) PPC_WEAK_FUNC(sub_832AE698);
PPC_FUNC_IMPL(__imp__sub_832AE698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6A4"))) PPC_WEAK_FUNC(sub_832AE6A4);
PPC_FUNC_IMPL(__imp__sub_832AE6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6A8"))) PPC_WEAK_FUNC(sub_832AE6A8);
PPC_FUNC_IMPL(__imp__sub_832AE6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21560
	ctx.r3.s64 = ctx.r11.s64 + 21560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6B4"))) PPC_WEAK_FUNC(sub_832AE6B4);
PPC_FUNC_IMPL(__imp__sub_832AE6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6B8"))) PPC_WEAK_FUNC(sub_832AE6B8);
PPC_FUNC_IMPL(__imp__sub_832AE6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21564
	ctx.r3.s64 = ctx.r11.s64 + 21564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6C4"))) PPC_WEAK_FUNC(sub_832AE6C4);
PPC_FUNC_IMPL(__imp__sub_832AE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6C8"))) PPC_WEAK_FUNC(sub_832AE6C8);
PPC_FUNC_IMPL(__imp__sub_832AE6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21568
	ctx.r3.s64 = ctx.r11.s64 + 21568;
	// b 0x82aa8c38
	sub_82AA8C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6D4"))) PPC_WEAK_FUNC(sub_832AE6D4);
PPC_FUNC_IMPL(__imp__sub_832AE6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6D8"))) PPC_WEAK_FUNC(sub_832AE6D8);
PPC_FUNC_IMPL(__imp__sub_832AE6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21580
	ctx.r3.s64 = ctx.r11.s64 + 21580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6E4"))) PPC_WEAK_FUNC(sub_832AE6E4);
PPC_FUNC_IMPL(__imp__sub_832AE6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6E8"))) PPC_WEAK_FUNC(sub_832AE6E8);
PPC_FUNC_IMPL(__imp__sub_832AE6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21584
	ctx.r3.s64 = ctx.r11.s64 + 21584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE6F4"))) PPC_WEAK_FUNC(sub_832AE6F4);
PPC_FUNC_IMPL(__imp__sub_832AE6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE6F8"))) PPC_WEAK_FUNC(sub_832AE6F8);
PPC_FUNC_IMPL(__imp__sub_832AE6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21588
	ctx.r3.s64 = ctx.r11.s64 + 21588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE704"))) PPC_WEAK_FUNC(sub_832AE704);
PPC_FUNC_IMPL(__imp__sub_832AE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE708"))) PPC_WEAK_FUNC(sub_832AE708);
PPC_FUNC_IMPL(__imp__sub_832AE708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21592
	ctx.r3.s64 = ctx.r11.s64 + 21592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE714"))) PPC_WEAK_FUNC(sub_832AE714);
PPC_FUNC_IMPL(__imp__sub_832AE714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE718"))) PPC_WEAK_FUNC(sub_832AE718);
PPC_FUNC_IMPL(__imp__sub_832AE718) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21596
	ctx.r31.s64 = ctx.r11.s64 + 21596;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae740
	if (ctx.cr6.eq) goto loc_832AE740;
	// bl 0x8221be68
	ctx.lr = 0x832AE740;
	sub_8221BE68(ctx, base);
loc_832AE740:
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

__attribute__((alias("__imp__sub_832AE76C"))) PPC_WEAK_FUNC(sub_832AE76C);
PPC_FUNC_IMPL(__imp__sub_832AE76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE770"))) PPC_WEAK_FUNC(sub_832AE770);
PPC_FUNC_IMPL(__imp__sub_832AE770) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21612
	ctx.r31.s64 = ctx.r11.s64 + 21612;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae798
	if (ctx.cr6.eq) goto loc_832AE798;
	// bl 0x8221be68
	ctx.lr = 0x832AE798;
	sub_8221BE68(ctx, base);
loc_832AE798:
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

__attribute__((alias("__imp__sub_832AE7C4"))) PPC_WEAK_FUNC(sub_832AE7C4);
PPC_FUNC_IMPL(__imp__sub_832AE7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE7C8"))) PPC_WEAK_FUNC(sub_832AE7C8);
PPC_FUNC_IMPL(__imp__sub_832AE7C8) {
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
	// addi r31,r11,7976
	ctx.r31.s64 = ctx.r11.s64 + 7976;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae7f0
	if (ctx.cr6.eq) goto loc_832AE7F0;
	// bl 0x8221be68
	ctx.lr = 0x832AE7F0;
	sub_8221BE68(ctx, base);
loc_832AE7F0:
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

__attribute__((alias("__imp__sub_832AE81C"))) PPC_WEAK_FUNC(sub_832AE81C);
PPC_FUNC_IMPL(__imp__sub_832AE81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE820"))) PPC_WEAK_FUNC(sub_832AE820);
PPC_FUNC_IMPL(__imp__sub_832AE820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// b 0x82aac270
	sub_82AAC270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE82C"))) PPC_WEAK_FUNC(sub_832AE82C);
PPC_FUNC_IMPL(__imp__sub_832AE82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE830"))) PPC_WEAK_FUNC(sub_832AE830);
PPC_FUNC_IMPL(__imp__sub_832AE830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21628
	ctx.r3.s64 = ctx.r11.s64 + 21628;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE83C"))) PPC_WEAK_FUNC(sub_832AE83C);
PPC_FUNC_IMPL(__imp__sub_832AE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE840"))) PPC_WEAK_FUNC(sub_832AE840);
PPC_FUNC_IMPL(__imp__sub_832AE840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21632
	ctx.r3.s64 = ctx.r11.s64 + 21632;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE84C"))) PPC_WEAK_FUNC(sub_832AE84C);
PPC_FUNC_IMPL(__imp__sub_832AE84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE850"))) PPC_WEAK_FUNC(sub_832AE850);
PPC_FUNC_IMPL(__imp__sub_832AE850) {
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
	// addi r31,r11,5796
	ctx.r31.s64 = ctx.r11.s64 + 5796;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae878
	if (ctx.cr6.eq) goto loc_832AE878;
	// bl 0x8221be68
	ctx.lr = 0x832AE878;
	sub_8221BE68(ctx, base);
loc_832AE878:
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

__attribute__((alias("__imp__sub_832AE8A4"))) PPC_WEAK_FUNC(sub_832AE8A4);
PPC_FUNC_IMPL(__imp__sub_832AE8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8A8"))) PPC_WEAK_FUNC(sub_832AE8A8);
PPC_FUNC_IMPL(__imp__sub_832AE8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21636
	ctx.r3.s64 = ctx.r11.s64 + 21636;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8B4"))) PPC_WEAK_FUNC(sub_832AE8B4);
PPC_FUNC_IMPL(__imp__sub_832AE8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8B8"))) PPC_WEAK_FUNC(sub_832AE8B8);
PPC_FUNC_IMPL(__imp__sub_832AE8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21640
	ctx.r3.s64 = ctx.r11.s64 + 21640;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8C4"))) PPC_WEAK_FUNC(sub_832AE8C4);
PPC_FUNC_IMPL(__imp__sub_832AE8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8C8"))) PPC_WEAK_FUNC(sub_832AE8C8);
PPC_FUNC_IMPL(__imp__sub_832AE8C8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,21644
	ctx.r31.s64 = ctx.r11.s64 + 21644;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae8f0
	if (ctx.cr6.eq) goto loc_832AE8F0;
	// bl 0x8221be68
	ctx.lr = 0x832AE8F0;
	sub_8221BE68(ctx, base);
loc_832AE8F0:
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

__attribute__((alias("__imp__sub_832AE91C"))) PPC_WEAK_FUNC(sub_832AE91C);
PPC_FUNC_IMPL(__imp__sub_832AE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE920"))) PPC_WEAK_FUNC(sub_832AE920);
PPC_FUNC_IMPL(__imp__sub_832AE920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// b 0x82ab0b80
	sub_82AB0B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE92C"))) PPC_WEAK_FUNC(sub_832AE92C);
PPC_FUNC_IMPL(__imp__sub_832AE92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE930"))) PPC_WEAK_FUNC(sub_832AE930);
PPC_FUNC_IMPL(__imp__sub_832AE930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE93C"))) PPC_WEAK_FUNC(sub_832AE93C);
PPC_FUNC_IMPL(__imp__sub_832AE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE940"))) PPC_WEAK_FUNC(sub_832AE940);
PPC_FUNC_IMPL(__imp__sub_832AE940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21780
	ctx.r3.s64 = ctx.r11.s64 + 21780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE94C"))) PPC_WEAK_FUNC(sub_832AE94C);
PPC_FUNC_IMPL(__imp__sub_832AE94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE950"))) PPC_WEAK_FUNC(sub_832AE950);
PPC_FUNC_IMPL(__imp__sub_832AE950) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,21784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ae984
	if (ctx.cr6.eq) goto loc_832AE984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AE984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AE984:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21784, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832AE9A0"))) PPC_WEAK_FUNC(sub_832AE9A0);
PPC_FUNC_IMPL(__imp__sub_832AE9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21788
	ctx.r3.s64 = ctx.r11.s64 + 21788;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9AC"))) PPC_WEAK_FUNC(sub_832AE9AC);
PPC_FUNC_IMPL(__imp__sub_832AE9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9B0"))) PPC_WEAK_FUNC(sub_832AE9B0);
PPC_FUNC_IMPL(__imp__sub_832AE9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21792
	ctx.r3.s64 = ctx.r11.s64 + 21792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9BC"))) PPC_WEAK_FUNC(sub_832AE9BC);
PPC_FUNC_IMPL(__imp__sub_832AE9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9C0"))) PPC_WEAK_FUNC(sub_832AE9C0);
PPC_FUNC_IMPL(__imp__sub_832AE9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21796
	ctx.r3.s64 = ctx.r11.s64 + 21796;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9CC"))) PPC_WEAK_FUNC(sub_832AE9CC);
PPC_FUNC_IMPL(__imp__sub_832AE9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9D0"))) PPC_WEAK_FUNC(sub_832AE9D0);
PPC_FUNC_IMPL(__imp__sub_832AE9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9DC"))) PPC_WEAK_FUNC(sub_832AE9DC);
PPC_FUNC_IMPL(__imp__sub_832AE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9E0"))) PPC_WEAK_FUNC(sub_832AE9E0);
PPC_FUNC_IMPL(__imp__sub_832AE9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21836
	ctx.r3.s64 = ctx.r11.s64 + 21836;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9EC"))) PPC_WEAK_FUNC(sub_832AE9EC);
PPC_FUNC_IMPL(__imp__sub_832AE9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE9F0"))) PPC_WEAK_FUNC(sub_832AE9F0);
PPC_FUNC_IMPL(__imp__sub_832AE9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9FC"))) PPC_WEAK_FUNC(sub_832AE9FC);
PPC_FUNC_IMPL(__imp__sub_832AE9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA00"))) PPC_WEAK_FUNC(sub_832AEA00);
PPC_FUNC_IMPL(__imp__sub_832AEA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21876
	ctx.r3.s64 = ctx.r11.s64 + 21876;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA0C"))) PPC_WEAK_FUNC(sub_832AEA0C);
PPC_FUNC_IMPL(__imp__sub_832AEA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA10"))) PPC_WEAK_FUNC(sub_832AEA10);
PPC_FUNC_IMPL(__imp__sub_832AEA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21896
	ctx.r3.s64 = ctx.r11.s64 + 21896;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA1C"))) PPC_WEAK_FUNC(sub_832AEA1C);
PPC_FUNC_IMPL(__imp__sub_832AEA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA20"))) PPC_WEAK_FUNC(sub_832AEA20);
PPC_FUNC_IMPL(__imp__sub_832AEA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21916
	ctx.r3.s64 = ctx.r11.s64 + 21916;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA2C"))) PPC_WEAK_FUNC(sub_832AEA2C);
PPC_FUNC_IMPL(__imp__sub_832AEA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA30"))) PPC_WEAK_FUNC(sub_832AEA30);
PPC_FUNC_IMPL(__imp__sub_832AEA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// b 0x82b131d8
	sub_82B131D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA3C"))) PPC_WEAK_FUNC(sub_832AEA3C);
PPC_FUNC_IMPL(__imp__sub_832AEA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

