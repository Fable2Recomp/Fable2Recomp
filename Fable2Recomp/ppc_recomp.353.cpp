#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832AF6A8"))) PPC_WEAK_FUNC(sub_832AF6A8);
PPC_FUNC_IMPL(__imp__sub_832AF6A8) {
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
	// addi r31,r11,-9228
	ctx.r31.s64 = ctx.r11.s64 + -9228;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af6d0
	if (ctx.cr6.eq) goto loc_832AF6D0;
	// bl 0x8221be68
	ctx.lr = 0x832AF6D0;
	sub_8221BE68(ctx, base);
loc_832AF6D0:
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

__attribute__((alias("__imp__sub_832AF6FC"))) PPC_WEAK_FUNC(sub_832AF6FC);
PPC_FUNC_IMPL(__imp__sub_832AF6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF700"))) PPC_WEAK_FUNC(sub_832AF700);
PPC_FUNC_IMPL(__imp__sub_832AF700) {
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
	// addi r31,r11,-9212
	ctx.r31.s64 = ctx.r11.s64 + -9212;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af728
	if (ctx.cr6.eq) goto loc_832AF728;
	// bl 0x8221be68
	ctx.lr = 0x832AF728;
	sub_8221BE68(ctx, base);
loc_832AF728:
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

__attribute__((alias("__imp__sub_832AF754"))) PPC_WEAK_FUNC(sub_832AF754);
PPC_FUNC_IMPL(__imp__sub_832AF754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF758"))) PPC_WEAK_FUNC(sub_832AF758);
PPC_FUNC_IMPL(__imp__sub_832AF758) {
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
	// addi r31,r11,-9196
	ctx.r31.s64 = ctx.r11.s64 + -9196;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af780
	if (ctx.cr6.eq) goto loc_832AF780;
	// bl 0x8221be68
	ctx.lr = 0x832AF780;
	sub_8221BE68(ctx, base);
loc_832AF780:
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

__attribute__((alias("__imp__sub_832AF7AC"))) PPC_WEAK_FUNC(sub_832AF7AC);
PPC_FUNC_IMPL(__imp__sub_832AF7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF7B0"))) PPC_WEAK_FUNC(sub_832AF7B0);
PPC_FUNC_IMPL(__imp__sub_832AF7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-9180
	ctx.r3.s64 = ctx.r11.s64 + -9180;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF7BC"))) PPC_WEAK_FUNC(sub_832AF7BC);
PPC_FUNC_IMPL(__imp__sub_832AF7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF7C0"))) PPC_WEAK_FUNC(sub_832AF7C0);
PPC_FUNC_IMPL(__imp__sub_832AF7C0) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-9176
	ctx.r11.s64 = ctx.r11.s64 + -9176;
	// addi r31,r11,200
	ctx.r31.s64 = ctx.r11.s64 + 200;
loc_832AF7E4:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832af7f8
	if (ctx.cr6.eq) goto loc_832AF7F8;
	// bl 0x821fc1f0
	ctx.lr = 0x832AF7F8;
	sub_821FC1F0(ctx, base);
loc_832AF7F8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832af7e4
	if (!ctx.cr0.lt) goto loc_832AF7E4;
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

__attribute__((alias("__imp__sub_832AF818"))) PPC_WEAK_FUNC(sub_832AF818);
PPC_FUNC_IMPL(__imp__sub_832AF818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF824"))) PPC_WEAK_FUNC(sub_832AF824);
PPC_FUNC_IMPL(__imp__sub_832AF824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF828"))) PPC_WEAK_FUNC(sub_832AF828);
PPC_FUNC_IMPL(__imp__sub_832AF828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832AF830;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-8968
	ctx.r11.s64 = ctx.r11.s64 + -8968;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,1080
	ctx.r31.s64 = ctx.r11.s64 + 1080;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832AF850:
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832AF85C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832AF860:
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
	// bne 0x832af860
	if (!ctx.cr0.eq) goto loc_832AF860;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832af850
	if (!ctx.cr0.lt) goto loc_832AF850;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_832AF890"))) PPC_WEAK_FUNC(sub_832AF890);
PPC_FUNC_IMPL(__imp__sub_832AF890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r11,-20388
	ctx.r11.s64 = ctx.r11.s64 + -20388;
	// addi r9,r10,-28868
	ctx.r9.s64 = ctx.r10.s64 + -28868;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832af8c0
	if (ctx.cr6.eq) goto loc_832AF8C0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82b55128
	sub_82B55128(ctx, base);
	return;
loc_832AF8C0:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82b52500
	sub_82B52500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF8C8"))) PPC_WEAK_FUNC(sub_832AF8C8);
PPC_FUNC_IMPL(__imp__sub_832AF8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF8CC"))) PPC_WEAK_FUNC(sub_832AF8CC);
PPC_FUNC_IMPL(__imp__sub_832AF8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF8D0"))) PPC_WEAK_FUNC(sub_832AF8D0);
PPC_FUNC_IMPL(__imp__sub_832AF8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7888
	ctx.r3.s64 = ctx.r11.s64 + -7888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF8DC"))) PPC_WEAK_FUNC(sub_832AF8DC);
PPC_FUNC_IMPL(__imp__sub_832AF8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF8E0"))) PPC_WEAK_FUNC(sub_832AF8E0);
PPC_FUNC_IMPL(__imp__sub_832AF8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7884
	ctx.r3.s64 = ctx.r11.s64 + -7884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF8EC"))) PPC_WEAK_FUNC(sub_832AF8EC);
PPC_FUNC_IMPL(__imp__sub_832AF8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF8F0"))) PPC_WEAK_FUNC(sub_832AF8F0);
PPC_FUNC_IMPL(__imp__sub_832AF8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7880
	ctx.r3.s64 = ctx.r11.s64 + -7880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF8FC"))) PPC_WEAK_FUNC(sub_832AF8FC);
PPC_FUNC_IMPL(__imp__sub_832AF8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF900"))) PPC_WEAK_FUNC(sub_832AF900);
PPC_FUNC_IMPL(__imp__sub_832AF900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7876
	ctx.r3.s64 = ctx.r11.s64 + -7876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF90C"))) PPC_WEAK_FUNC(sub_832AF90C);
PPC_FUNC_IMPL(__imp__sub_832AF90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF910"))) PPC_WEAK_FUNC(sub_832AF910);
PPC_FUNC_IMPL(__imp__sub_832AF910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF91C"))) PPC_WEAK_FUNC(sub_832AF91C);
PPC_FUNC_IMPL(__imp__sub_832AF91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF920"))) PPC_WEAK_FUNC(sub_832AF920);
PPC_FUNC_IMPL(__imp__sub_832AF920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7868
	ctx.r3.s64 = ctx.r11.s64 + -7868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF92C"))) PPC_WEAK_FUNC(sub_832AF92C);
PPC_FUNC_IMPL(__imp__sub_832AF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF930"))) PPC_WEAK_FUNC(sub_832AF930);
PPC_FUNC_IMPL(__imp__sub_832AF930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7864
	ctx.r3.s64 = ctx.r11.s64 + -7864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF93C"))) PPC_WEAK_FUNC(sub_832AF93C);
PPC_FUNC_IMPL(__imp__sub_832AF93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF940"))) PPC_WEAK_FUNC(sub_832AF940);
PPC_FUNC_IMPL(__imp__sub_832AF940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7860
	ctx.r3.s64 = ctx.r11.s64 + -7860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF94C"))) PPC_WEAK_FUNC(sub_832AF94C);
PPC_FUNC_IMPL(__imp__sub_832AF94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF950"))) PPC_WEAK_FUNC(sub_832AF950);
PPC_FUNC_IMPL(__imp__sub_832AF950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7856
	ctx.r3.s64 = ctx.r11.s64 + -7856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF95C"))) PPC_WEAK_FUNC(sub_832AF95C);
PPC_FUNC_IMPL(__imp__sub_832AF95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF960"))) PPC_WEAK_FUNC(sub_832AF960);
PPC_FUNC_IMPL(__imp__sub_832AF960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7852
	ctx.r3.s64 = ctx.r11.s64 + -7852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF96C"))) PPC_WEAK_FUNC(sub_832AF96C);
PPC_FUNC_IMPL(__imp__sub_832AF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF970"))) PPC_WEAK_FUNC(sub_832AF970);
PPC_FUNC_IMPL(__imp__sub_832AF970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF97C"))) PPC_WEAK_FUNC(sub_832AF97C);
PPC_FUNC_IMPL(__imp__sub_832AF97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF980"))) PPC_WEAK_FUNC(sub_832AF980);
PPC_FUNC_IMPL(__imp__sub_832AF980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7844
	ctx.r3.s64 = ctx.r11.s64 + -7844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF98C"))) PPC_WEAK_FUNC(sub_832AF98C);
PPC_FUNC_IMPL(__imp__sub_832AF98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF990"))) PPC_WEAK_FUNC(sub_832AF990);
PPC_FUNC_IMPL(__imp__sub_832AF990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7840
	ctx.r3.s64 = ctx.r11.s64 + -7840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF99C"))) PPC_WEAK_FUNC(sub_832AF99C);
PPC_FUNC_IMPL(__imp__sub_832AF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF9A0"))) PPC_WEAK_FUNC(sub_832AF9A0);
PPC_FUNC_IMPL(__imp__sub_832AF9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7836
	ctx.r3.s64 = ctx.r11.s64 + -7836;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9AC"))) PPC_WEAK_FUNC(sub_832AF9AC);
PPC_FUNC_IMPL(__imp__sub_832AF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF9B0"))) PPC_WEAK_FUNC(sub_832AF9B0);
PPC_FUNC_IMPL(__imp__sub_832AF9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9BC"))) PPC_WEAK_FUNC(sub_832AF9BC);
PPC_FUNC_IMPL(__imp__sub_832AF9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF9C0"))) PPC_WEAK_FUNC(sub_832AF9C0);
PPC_FUNC_IMPL(__imp__sub_832AF9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7764
	ctx.r3.s64 = ctx.r11.s64 + -7764;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9CC"))) PPC_WEAK_FUNC(sub_832AF9CC);
PPC_FUNC_IMPL(__imp__sub_832AF9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF9D0"))) PPC_WEAK_FUNC(sub_832AF9D0);
PPC_FUNC_IMPL(__imp__sub_832AF9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-7728
	ctx.r3.s64 = ctx.r11.s64 + -7728;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9DC"))) PPC_WEAK_FUNC(sub_832AF9DC);
PPC_FUNC_IMPL(__imp__sub_832AF9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF9E0"))) PPC_WEAK_FUNC(sub_832AF9E0);
PPC_FUNC_IMPL(__imp__sub_832AF9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-5536
	ctx.r3.s64 = ctx.r11.s64 + -5536;
	// b 0x82ba8d90
	sub_82BA8D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9EC"))) PPC_WEAK_FUNC(sub_832AF9EC);
PPC_FUNC_IMPL(__imp__sub_832AF9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF9F0"))) PPC_WEAK_FUNC(sub_832AF9F0);
PPC_FUNC_IMPL(__imp__sub_832AF9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,28560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28560);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,28560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFA04"))) PPC_WEAK_FUNC(sub_832AFA04);
PPC_FUNC_IMPL(__imp__sub_832AFA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFA08"))) PPC_WEAK_FUNC(sub_832AFA08);
PPC_FUNC_IMPL(__imp__sub_832AFA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFA0C"))) PPC_WEAK_FUNC(sub_832AFA0C);
PPC_FUNC_IMPL(__imp__sub_832AFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFA10"))) PPC_WEAK_FUNC(sub_832AFA10);
PPC_FUNC_IMPL(__imp__sub_832AFA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x82be4090
	sub_82BE4090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFA1C"))) PPC_WEAK_FUNC(sub_832AFA1C);
PPC_FUNC_IMPL(__imp__sub_832AFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFA20"))) PPC_WEAK_FUNC(sub_832AFA20);
PPC_FUNC_IMPL(__imp__sub_832AFA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// b 0x82be41a8
	sub_82BE41A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFA2C"))) PPC_WEAK_FUNC(sub_832AFA2C);
PPC_FUNC_IMPL(__imp__sub_832AFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFA30"))) PPC_WEAK_FUNC(sub_832AFA30);
PPC_FUNC_IMPL(__imp__sub_832AFA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// b 0x82be42c0
	sub_82BE42C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFA3C"))) PPC_WEAK_FUNC(sub_832AFA3C);
PPC_FUNC_IMPL(__imp__sub_832AFA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFA40"))) PPC_WEAK_FUNC(sub_832AFA40);
PPC_FUNC_IMPL(__imp__sub_832AFA40) {
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
	// addi r31,r11,-6720
	ctx.r31.s64 = ctx.r11.s64 + -6720;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afa68
	if (ctx.cr6.eq) goto loc_832AFA68;
	// bl 0x8221be68
	ctx.lr = 0x832AFA68;
	sub_8221BE68(ctx, base);
loc_832AFA68:
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

__attribute__((alias("__imp__sub_832AFA94"))) PPC_WEAK_FUNC(sub_832AFA94);
PPC_FUNC_IMPL(__imp__sub_832AFA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFA98"))) PPC_WEAK_FUNC(sub_832AFA98);
PPC_FUNC_IMPL(__imp__sub_832AFA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24148
	ctx.r3.s64 = ctx.r11.s64 + 24148;
	// b 0x82bed368
	sub_82BED368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFAA4"))) PPC_WEAK_FUNC(sub_832AFAA4);
PPC_FUNC_IMPL(__imp__sub_832AFAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFAA8"))) PPC_WEAK_FUNC(sub_832AFAA8);
PPC_FUNC_IMPL(__imp__sub_832AFAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24188
	ctx.r3.s64 = ctx.r11.s64 + 24188;
	// b 0x82bee7b8
	sub_82BEE7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFAB4"))) PPC_WEAK_FUNC(sub_832AFAB4);
PPC_FUNC_IMPL(__imp__sub_832AFAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFAB8"))) PPC_WEAK_FUNC(sub_832AFAB8);
PPC_FUNC_IMPL(__imp__sub_832AFAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24168
	ctx.r3.s64 = ctx.r11.s64 + 24168;
	// b 0x82bef8e8
	sub_82BEF8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFAC4"))) PPC_WEAK_FUNC(sub_832AFAC4);
PPC_FUNC_IMPL(__imp__sub_832AFAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFAC8"))) PPC_WEAK_FUNC(sub_832AFAC8);
PPC_FUNC_IMPL(__imp__sub_832AFAC8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,18468
	ctx.r31.s64 = ctx.r11.s64 + 18468;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afaf0
	if (ctx.cr6.eq) goto loc_832AFAF0;
	// bl 0x82bf2158
	ctx.lr = 0x832AFAF0;
	sub_82BF2158(ctx, base);
loc_832AFAF0:
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

__attribute__((alias("__imp__sub_832AFB1C"))) PPC_WEAK_FUNC(sub_832AFB1C);
PPC_FUNC_IMPL(__imp__sub_832AFB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFB20"))) PPC_WEAK_FUNC(sub_832AFB20);
PPC_FUNC_IMPL(__imp__sub_832AFB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24416
	ctx.r3.s64 = ctx.r11.s64 + 24416;
	// b 0x82befe78
	sub_82BEFE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFB2C"))) PPC_WEAK_FUNC(sub_832AFB2C);
PPC_FUNC_IMPL(__imp__sub_832AFB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFB30"))) PPC_WEAK_FUNC(sub_832AFB30);
PPC_FUNC_IMPL(__imp__sub_832AFB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24444
	ctx.r3.s64 = ctx.r11.s64 + 24444;
	// b 0x82bf1bc8
	sub_82BF1BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFB3C"))) PPC_WEAK_FUNC(sub_832AFB3C);
PPC_FUNC_IMPL(__imp__sub_832AFB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFB40"))) PPC_WEAK_FUNC(sub_832AFB40);
PPC_FUNC_IMPL(__imp__sub_832AFB40) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,18508
	ctx.r31.s64 = ctx.r11.s64 + 18508;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afb68
	if (ctx.cr6.eq) goto loc_832AFB68;
	// bl 0x82bf2158
	ctx.lr = 0x832AFB68;
	sub_82BF2158(ctx, base);
loc_832AFB68:
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

__attribute__((alias("__imp__sub_832AFB94"))) PPC_WEAK_FUNC(sub_832AFB94);
PPC_FUNC_IMPL(__imp__sub_832AFB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFB98"))) PPC_WEAK_FUNC(sub_832AFB98);
PPC_FUNC_IMPL(__imp__sub_832AFB98) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,18900
	ctx.r31.s64 = ctx.r11.s64 + 18900;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82bfc6a8
	ctx.lr = 0x832AFBDC;
	sub_82BFC6A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFBE4;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFC08"))) PPC_WEAK_FUNC(sub_832AFC08);
PPC_FUNC_IMPL(__imp__sub_832AFC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18924
	ctx.r3.s64 = ctx.r11.s64 + 18924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFC14"))) PPC_WEAK_FUNC(sub_832AFC14);
PPC_FUNC_IMPL(__imp__sub_832AFC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFC18"))) PPC_WEAK_FUNC(sub_832AFC18);
PPC_FUNC_IMPL(__imp__sub_832AFC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18940
	ctx.r3.s64 = ctx.r11.s64 + 18940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFC24"))) PPC_WEAK_FUNC(sub_832AFC24);
PPC_FUNC_IMPL(__imp__sub_832AFC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFC28"))) PPC_WEAK_FUNC(sub_832AFC28);
PPC_FUNC_IMPL(__imp__sub_832AFC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFC34"))) PPC_WEAK_FUNC(sub_832AFC34);
PPC_FUNC_IMPL(__imp__sub_832AFC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFC38"))) PPC_WEAK_FUNC(sub_832AFC38);
PPC_FUNC_IMPL(__imp__sub_832AFC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,24548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832AFC58"))) PPC_WEAK_FUNC(sub_832AFC58);
PPC_FUNC_IMPL(__imp__sub_832AFC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFC5C"))) PPC_WEAK_FUNC(sub_832AFC5C);
PPC_FUNC_IMPL(__imp__sub_832AFC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFC60"))) PPC_WEAK_FUNC(sub_832AFC60);
PPC_FUNC_IMPL(__imp__sub_832AFC60) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,18928
	ctx.r31.s64 = ctx.r11.s64 + 18928;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82309298
	ctx.lr = 0x832AFCA4;
	sub_82309298(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFCAC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFCD0"))) PPC_WEAK_FUNC(sub_832AFCD0);
PPC_FUNC_IMPL(__imp__sub_832AFCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFCDC"))) PPC_WEAK_FUNC(sub_832AFCDC);
PPC_FUNC_IMPL(__imp__sub_832AFCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFCE0"))) PPC_WEAK_FUNC(sub_832AFCE0);
PPC_FUNC_IMPL(__imp__sub_832AFCE0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,19052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19052);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afd0c
	if (ctx.cr6.eq) goto loc_832AFD0C;
	// bl 0x824fe010
	ctx.lr = 0x832AFD04;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19052, ctx.r11.u32);
loc_832AFD0C:
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

__attribute__((alias("__imp__sub_832AFD20"))) PPC_WEAK_FUNC(sub_832AFD20);
PPC_FUNC_IMPL(__imp__sub_832AFD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19104
	ctx.r3.s64 = ctx.r11.s64 + 19104;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFD2C"))) PPC_WEAK_FUNC(sub_832AFD2C);
PPC_FUNC_IMPL(__imp__sub_832AFD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFD30"))) PPC_WEAK_FUNC(sub_832AFD30);
PPC_FUNC_IMPL(__imp__sub_832AFD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19192
	ctx.r3.s64 = ctx.r11.s64 + 19192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFD3C"))) PPC_WEAK_FUNC(sub_832AFD3C);
PPC_FUNC_IMPL(__imp__sub_832AFD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFD40"))) PPC_WEAK_FUNC(sub_832AFD40);
PPC_FUNC_IMPL(__imp__sub_832AFD40) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19196
	ctx.r31.s64 = ctx.r11.s64 + 19196;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82376898
	ctx.lr = 0x832AFD84;
	sub_82376898(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFD8C;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFDB0"))) PPC_WEAK_FUNC(sub_832AFDB0);
PPC_FUNC_IMPL(__imp__sub_832AFDB0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19208
	ctx.r31.s64 = ctx.r11.s64 + 19208;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c067c0
	ctx.lr = 0x832AFDF4;
	sub_82C067C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFDFC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFE20"))) PPC_WEAK_FUNC(sub_832AFE20);
PPC_FUNC_IMPL(__imp__sub_832AFE20) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19220
	ctx.r31.s64 = ctx.r11.s64 + 19220;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c068a8
	ctx.lr = 0x832AFE64;
	sub_82C068A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFE6C;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFE90"))) PPC_WEAK_FUNC(sub_832AFE90);
PPC_FUNC_IMPL(__imp__sub_832AFE90) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19232
	ctx.r31.s64 = ctx.r11.s64 + 19232;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c06990
	ctx.lr = 0x832AFED4;
	sub_82C06990(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFEDC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFF00"))) PPC_WEAK_FUNC(sub_832AFF00);
PPC_FUNC_IMPL(__imp__sub_832AFF00) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,19312
	ctx.r11.s64 = ctx.r11.s64 + 19312;
	// addi r31,r11,140
	ctx.r31.s64 = ctx.r11.s64 + 140;
loc_832AFF24:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x832AFF30;
	sub_829CE870(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832aff24
	if (!ctx.cr0.lt) goto loc_832AFF24;
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

__attribute__((alias("__imp__sub_832AFF50"))) PPC_WEAK_FUNC(sub_832AFF50);
PPC_FUNC_IMPL(__imp__sub_832AFF50) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,19452
	ctx.r11.s64 = ctx.r11.s64 + 19452;
	// addi r31,r11,180
	ctx.r31.s64 = ctx.r11.s64 + 180;
loc_832AFF74:
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b38688
	ctx.lr = 0x832AFF80;
	sub_82B38688(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832aff74
	if (!ctx.cr0.lt) goto loc_832AFF74;
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

__attribute__((alias("__imp__sub_832AFFA0"))) PPC_WEAK_FUNC(sub_832AFFA0);
PPC_FUNC_IMPL(__imp__sub_832AFFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832AFFA8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r11,r11,19252
	ctx.r11.s64 = ctx.r11.s64 + 19252;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_832AFFC0:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// beq cr6,0x832b0000
	if (ctx.cr6.eq) goto loc_832B0000;
loc_832AFFE8:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x832AFFF0;
	sub_824FE010(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832affe8
	if (!ctx.cr6.eq) goto loc_832AFFE8;
loc_832B0000:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x832B0008;
	sub_824FE010(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832affc0
	if (!ctx.cr0.lt) goto loc_832AFFC0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_832B001C"))) PPC_WEAK_FUNC(sub_832B001C);
PPC_FUNC_IMPL(__imp__sub_832B001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0020"))) PPC_WEAK_FUNC(sub_832B0020);
PPC_FUNC_IMPL(__imp__sub_832B0020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19636
	ctx.r3.s64 = ctx.r11.s64 + 19636;
	// b 0x82c08b20
	sub_82C08B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B002C"))) PPC_WEAK_FUNC(sub_832B002C);
PPC_FUNC_IMPL(__imp__sub_832B002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0030"))) PPC_WEAK_FUNC(sub_832B0030);
PPC_FUNC_IMPL(__imp__sub_832B0030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19696
	ctx.r3.s64 = ctx.r11.s64 + 19696;
	// b 0x82c08b20
	sub_82C08B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B003C"))) PPC_WEAK_FUNC(sub_832B003C);
PPC_FUNC_IMPL(__imp__sub_832B003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0040"))) PPC_WEAK_FUNC(sub_832B0040);
PPC_FUNC_IMPL(__imp__sub_832B0040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19768
	ctx.r3.s64 = ctx.r11.s64 + 19768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B004C"))) PPC_WEAK_FUNC(sub_832B004C);
PPC_FUNC_IMPL(__imp__sub_832B004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0050"))) PPC_WEAK_FUNC(sub_832B0050);
PPC_FUNC_IMPL(__imp__sub_832B0050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19772
	ctx.r3.s64 = ctx.r11.s64 + 19772;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B005C"))) PPC_WEAK_FUNC(sub_832B005C);
PPC_FUNC_IMPL(__imp__sub_832B005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0060"))) PPC_WEAK_FUNC(sub_832B0060);
PPC_FUNC_IMPL(__imp__sub_832B0060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19776
	ctx.r3.s64 = ctx.r11.s64 + 19776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B006C"))) PPC_WEAK_FUNC(sub_832B006C);
PPC_FUNC_IMPL(__imp__sub_832B006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0070"))) PPC_WEAK_FUNC(sub_832B0070);
PPC_FUNC_IMPL(__imp__sub_832B0070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19780
	ctx.r3.s64 = ctx.r11.s64 + 19780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B007C"))) PPC_WEAK_FUNC(sub_832B007C);
PPC_FUNC_IMPL(__imp__sub_832B007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0080"))) PPC_WEAK_FUNC(sub_832B0080);
PPC_FUNC_IMPL(__imp__sub_832B0080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19784
	ctx.r3.s64 = ctx.r11.s64 + 19784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B008C"))) PPC_WEAK_FUNC(sub_832B008C);
PPC_FUNC_IMPL(__imp__sub_832B008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0090"))) PPC_WEAK_FUNC(sub_832B0090);
PPC_FUNC_IMPL(__imp__sub_832B0090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19788
	ctx.r3.s64 = ctx.r11.s64 + 19788;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B009C"))) PPC_WEAK_FUNC(sub_832B009C);
PPC_FUNC_IMPL(__imp__sub_832B009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B00A0"))) PPC_WEAK_FUNC(sub_832B00A0);
PPC_FUNC_IMPL(__imp__sub_832B00A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00AC"))) PPC_WEAK_FUNC(sub_832B00AC);
PPC_FUNC_IMPL(__imp__sub_832B00AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B00B0"))) PPC_WEAK_FUNC(sub_832B00B0);
PPC_FUNC_IMPL(__imp__sub_832B00B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19796
	ctx.r3.s64 = ctx.r11.s64 + 19796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00BC"))) PPC_WEAK_FUNC(sub_832B00BC);
PPC_FUNC_IMPL(__imp__sub_832B00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B00C0"))) PPC_WEAK_FUNC(sub_832B00C0);
PPC_FUNC_IMPL(__imp__sub_832B00C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00CC"))) PPC_WEAK_FUNC(sub_832B00CC);
PPC_FUNC_IMPL(__imp__sub_832B00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B00D0"))) PPC_WEAK_FUNC(sub_832B00D0);
PPC_FUNC_IMPL(__imp__sub_832B00D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19804
	ctx.r3.s64 = ctx.r11.s64 + 19804;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00DC"))) PPC_WEAK_FUNC(sub_832B00DC);
PPC_FUNC_IMPL(__imp__sub_832B00DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B00E0"))) PPC_WEAK_FUNC(sub_832B00E0);
PPC_FUNC_IMPL(__imp__sub_832B00E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00EC"))) PPC_WEAK_FUNC(sub_832B00EC);
PPC_FUNC_IMPL(__imp__sub_832B00EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B00F0"))) PPC_WEAK_FUNC(sub_832B00F0);
PPC_FUNC_IMPL(__imp__sub_832B00F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19812
	ctx.r3.s64 = ctx.r11.s64 + 19812;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00FC"))) PPC_WEAK_FUNC(sub_832B00FC);
PPC_FUNC_IMPL(__imp__sub_832B00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0100"))) PPC_WEAK_FUNC(sub_832B0100);
PPC_FUNC_IMPL(__imp__sub_832B0100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B010C"))) PPC_WEAK_FUNC(sub_832B010C);
PPC_FUNC_IMPL(__imp__sub_832B010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0110"))) PPC_WEAK_FUNC(sub_832B0110);
PPC_FUNC_IMPL(__imp__sub_832B0110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19820
	ctx.r3.s64 = ctx.r11.s64 + 19820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B011C"))) PPC_WEAK_FUNC(sub_832B011C);
PPC_FUNC_IMPL(__imp__sub_832B011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0120"))) PPC_WEAK_FUNC(sub_832B0120);
PPC_FUNC_IMPL(__imp__sub_832B0120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19824
	ctx.r3.s64 = ctx.r11.s64 + 19824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B012C"))) PPC_WEAK_FUNC(sub_832B012C);
PPC_FUNC_IMPL(__imp__sub_832B012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0130"))) PPC_WEAK_FUNC(sub_832B0130);
PPC_FUNC_IMPL(__imp__sub_832B0130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19828
	ctx.r3.s64 = ctx.r11.s64 + 19828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B013C"))) PPC_WEAK_FUNC(sub_832B013C);
PPC_FUNC_IMPL(__imp__sub_832B013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0140"))) PPC_WEAK_FUNC(sub_832B0140);
PPC_FUNC_IMPL(__imp__sub_832B0140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19832
	ctx.r3.s64 = ctx.r11.s64 + 19832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B014C"))) PPC_WEAK_FUNC(sub_832B014C);
PPC_FUNC_IMPL(__imp__sub_832B014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0150"))) PPC_WEAK_FUNC(sub_832B0150);
PPC_FUNC_IMPL(__imp__sub_832B0150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19836
	ctx.r3.s64 = ctx.r11.s64 + 19836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B015C"))) PPC_WEAK_FUNC(sub_832B015C);
PPC_FUNC_IMPL(__imp__sub_832B015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0160"))) PPC_WEAK_FUNC(sub_832B0160);
PPC_FUNC_IMPL(__imp__sub_832B0160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19840
	ctx.r3.s64 = ctx.r11.s64 + 19840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B016C"))) PPC_WEAK_FUNC(sub_832B016C);
PPC_FUNC_IMPL(__imp__sub_832B016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0170"))) PPC_WEAK_FUNC(sub_832B0170);
PPC_FUNC_IMPL(__imp__sub_832B0170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19844
	ctx.r3.s64 = ctx.r11.s64 + 19844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B017C"))) PPC_WEAK_FUNC(sub_832B017C);
PPC_FUNC_IMPL(__imp__sub_832B017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0180"))) PPC_WEAK_FUNC(sub_832B0180);
PPC_FUNC_IMPL(__imp__sub_832B0180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19848
	ctx.r3.s64 = ctx.r11.s64 + 19848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B018C"))) PPC_WEAK_FUNC(sub_832B018C);
PPC_FUNC_IMPL(__imp__sub_832B018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0190"))) PPC_WEAK_FUNC(sub_832B0190);
PPC_FUNC_IMPL(__imp__sub_832B0190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19852
	ctx.r3.s64 = ctx.r11.s64 + 19852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B019C"))) PPC_WEAK_FUNC(sub_832B019C);
PPC_FUNC_IMPL(__imp__sub_832B019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B01A0"))) PPC_WEAK_FUNC(sub_832B01A0);
PPC_FUNC_IMPL(__imp__sub_832B01A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19856
	ctx.r3.s64 = ctx.r11.s64 + 19856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01AC"))) PPC_WEAK_FUNC(sub_832B01AC);
PPC_FUNC_IMPL(__imp__sub_832B01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B01B0"))) PPC_WEAK_FUNC(sub_832B01B0);
PPC_FUNC_IMPL(__imp__sub_832B01B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19860
	ctx.r3.s64 = ctx.r11.s64 + 19860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01BC"))) PPC_WEAK_FUNC(sub_832B01BC);
PPC_FUNC_IMPL(__imp__sub_832B01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B01C0"))) PPC_WEAK_FUNC(sub_832B01C0);
PPC_FUNC_IMPL(__imp__sub_832B01C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19864
	ctx.r3.s64 = ctx.r11.s64 + 19864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01CC"))) PPC_WEAK_FUNC(sub_832B01CC);
PPC_FUNC_IMPL(__imp__sub_832B01CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B01D0"))) PPC_WEAK_FUNC(sub_832B01D0);
PPC_FUNC_IMPL(__imp__sub_832B01D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19868
	ctx.r3.s64 = ctx.r11.s64 + 19868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01DC"))) PPC_WEAK_FUNC(sub_832B01DC);
PPC_FUNC_IMPL(__imp__sub_832B01DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B01E0"))) PPC_WEAK_FUNC(sub_832B01E0);
PPC_FUNC_IMPL(__imp__sub_832B01E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01EC"))) PPC_WEAK_FUNC(sub_832B01EC);
PPC_FUNC_IMPL(__imp__sub_832B01EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B01F0"))) PPC_WEAK_FUNC(sub_832B01F0);
PPC_FUNC_IMPL(__imp__sub_832B01F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19876
	ctx.r3.s64 = ctx.r11.s64 + 19876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01FC"))) PPC_WEAK_FUNC(sub_832B01FC);
PPC_FUNC_IMPL(__imp__sub_832B01FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0200"))) PPC_WEAK_FUNC(sub_832B0200);
PPC_FUNC_IMPL(__imp__sub_832B0200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19880
	ctx.r3.s64 = ctx.r11.s64 + 19880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B020C"))) PPC_WEAK_FUNC(sub_832B020C);
PPC_FUNC_IMPL(__imp__sub_832B020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0210"))) PPC_WEAK_FUNC(sub_832B0210);
PPC_FUNC_IMPL(__imp__sub_832B0210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19884
	ctx.r3.s64 = ctx.r11.s64 + 19884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B021C"))) PPC_WEAK_FUNC(sub_832B021C);
PPC_FUNC_IMPL(__imp__sub_832B021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0220"))) PPC_WEAK_FUNC(sub_832B0220);
PPC_FUNC_IMPL(__imp__sub_832B0220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B022C"))) PPC_WEAK_FUNC(sub_832B022C);
PPC_FUNC_IMPL(__imp__sub_832B022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0230"))) PPC_WEAK_FUNC(sub_832B0230);
PPC_FUNC_IMPL(__imp__sub_832B0230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19892
	ctx.r3.s64 = ctx.r11.s64 + 19892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B023C"))) PPC_WEAK_FUNC(sub_832B023C);
PPC_FUNC_IMPL(__imp__sub_832B023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0240"))) PPC_WEAK_FUNC(sub_832B0240);
PPC_FUNC_IMPL(__imp__sub_832B0240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B024C"))) PPC_WEAK_FUNC(sub_832B024C);
PPC_FUNC_IMPL(__imp__sub_832B024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0250"))) PPC_WEAK_FUNC(sub_832B0250);
PPC_FUNC_IMPL(__imp__sub_832B0250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19900
	ctx.r3.s64 = ctx.r11.s64 + 19900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B025C"))) PPC_WEAK_FUNC(sub_832B025C);
PPC_FUNC_IMPL(__imp__sub_832B025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0260"))) PPC_WEAK_FUNC(sub_832B0260);
PPC_FUNC_IMPL(__imp__sub_832B0260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19904
	ctx.r3.s64 = ctx.r11.s64 + 19904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B026C"))) PPC_WEAK_FUNC(sub_832B026C);
PPC_FUNC_IMPL(__imp__sub_832B026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0270"))) PPC_WEAK_FUNC(sub_832B0270);
PPC_FUNC_IMPL(__imp__sub_832B0270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19908
	ctx.r3.s64 = ctx.r11.s64 + 19908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B027C"))) PPC_WEAK_FUNC(sub_832B027C);
PPC_FUNC_IMPL(__imp__sub_832B027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0280"))) PPC_WEAK_FUNC(sub_832B0280);
PPC_FUNC_IMPL(__imp__sub_832B0280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19924
	ctx.r3.s64 = ctx.r11.s64 + 19924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B028C"))) PPC_WEAK_FUNC(sub_832B028C);
PPC_FUNC_IMPL(__imp__sub_832B028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0290"))) PPC_WEAK_FUNC(sub_832B0290);
PPC_FUNC_IMPL(__imp__sub_832B0290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B029C"))) PPC_WEAK_FUNC(sub_832B029C);
PPC_FUNC_IMPL(__imp__sub_832B029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B02A0"))) PPC_WEAK_FUNC(sub_832B02A0);
PPC_FUNC_IMPL(__imp__sub_832B02A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19932
	ctx.r3.s64 = ctx.r11.s64 + 19932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02AC"))) PPC_WEAK_FUNC(sub_832B02AC);
PPC_FUNC_IMPL(__imp__sub_832B02AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B02B0"))) PPC_WEAK_FUNC(sub_832B02B0);
PPC_FUNC_IMPL(__imp__sub_832B02B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02BC"))) PPC_WEAK_FUNC(sub_832B02BC);
PPC_FUNC_IMPL(__imp__sub_832B02BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B02C0"))) PPC_WEAK_FUNC(sub_832B02C0);
PPC_FUNC_IMPL(__imp__sub_832B02C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19940
	ctx.r3.s64 = ctx.r11.s64 + 19940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02CC"))) PPC_WEAK_FUNC(sub_832B02CC);
PPC_FUNC_IMPL(__imp__sub_832B02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B02D0"))) PPC_WEAK_FUNC(sub_832B02D0);
PPC_FUNC_IMPL(__imp__sub_832B02D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19944
	ctx.r3.s64 = ctx.r11.s64 + 19944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02DC"))) PPC_WEAK_FUNC(sub_832B02DC);
PPC_FUNC_IMPL(__imp__sub_832B02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B02E0"))) PPC_WEAK_FUNC(sub_832B02E0);
PPC_FUNC_IMPL(__imp__sub_832B02E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19948
	ctx.r3.s64 = ctx.r11.s64 + 19948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02EC"))) PPC_WEAK_FUNC(sub_832B02EC);
PPC_FUNC_IMPL(__imp__sub_832B02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B02F0"))) PPC_WEAK_FUNC(sub_832B02F0);
PPC_FUNC_IMPL(__imp__sub_832B02F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02FC"))) PPC_WEAK_FUNC(sub_832B02FC);
PPC_FUNC_IMPL(__imp__sub_832B02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0300"))) PPC_WEAK_FUNC(sub_832B0300);
PPC_FUNC_IMPL(__imp__sub_832B0300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19956
	ctx.r3.s64 = ctx.r11.s64 + 19956;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B030C"))) PPC_WEAK_FUNC(sub_832B030C);
PPC_FUNC_IMPL(__imp__sub_832B030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0310"))) PPC_WEAK_FUNC(sub_832B0310);
PPC_FUNC_IMPL(__imp__sub_832B0310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B031C"))) PPC_WEAK_FUNC(sub_832B031C);
PPC_FUNC_IMPL(__imp__sub_832B031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0320"))) PPC_WEAK_FUNC(sub_832B0320);
PPC_FUNC_IMPL(__imp__sub_832B0320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19964
	ctx.r3.s64 = ctx.r11.s64 + 19964;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B032C"))) PPC_WEAK_FUNC(sub_832B032C);
PPC_FUNC_IMPL(__imp__sub_832B032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0330"))) PPC_WEAK_FUNC(sub_832B0330);
PPC_FUNC_IMPL(__imp__sub_832B0330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19968
	ctx.r3.s64 = ctx.r11.s64 + 19968;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B033C"))) PPC_WEAK_FUNC(sub_832B033C);
PPC_FUNC_IMPL(__imp__sub_832B033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0340"))) PPC_WEAK_FUNC(sub_832B0340);
PPC_FUNC_IMPL(__imp__sub_832B0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19972
	ctx.r3.s64 = ctx.r11.s64 + 19972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B034C"))) PPC_WEAK_FUNC(sub_832B034C);
PPC_FUNC_IMPL(__imp__sub_832B034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0350"))) PPC_WEAK_FUNC(sub_832B0350);
PPC_FUNC_IMPL(__imp__sub_832B0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19976
	ctx.r3.s64 = ctx.r11.s64 + 19976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B035C"))) PPC_WEAK_FUNC(sub_832B035C);
PPC_FUNC_IMPL(__imp__sub_832B035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0360"))) PPC_WEAK_FUNC(sub_832B0360);
PPC_FUNC_IMPL(__imp__sub_832B0360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19992
	ctx.r3.s64 = ctx.r11.s64 + 19992;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B036C"))) PPC_WEAK_FUNC(sub_832B036C);
PPC_FUNC_IMPL(__imp__sub_832B036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0370"))) PPC_WEAK_FUNC(sub_832B0370);
PPC_FUNC_IMPL(__imp__sub_832B0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19996
	ctx.r3.s64 = ctx.r11.s64 + 19996;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B037C"))) PPC_WEAK_FUNC(sub_832B037C);
PPC_FUNC_IMPL(__imp__sub_832B037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0380"))) PPC_WEAK_FUNC(sub_832B0380);
PPC_FUNC_IMPL(__imp__sub_832B0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x82b45680
	sub_82B45680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B038C"))) PPC_WEAK_FUNC(sub_832B038C);
PPC_FUNC_IMPL(__imp__sub_832B038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0390"))) PPC_WEAK_FUNC(sub_832B0390);
PPC_FUNC_IMPL(__imp__sub_832B0390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B039C"))) PPC_WEAK_FUNC(sub_832B039C);
PPC_FUNC_IMPL(__imp__sub_832B039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B03A0"))) PPC_WEAK_FUNC(sub_832B03A0);
PPC_FUNC_IMPL(__imp__sub_832B03A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20044
	ctx.r3.s64 = ctx.r11.s64 + 20044;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B03AC"))) PPC_WEAK_FUNC(sub_832B03AC);
PPC_FUNC_IMPL(__imp__sub_832B03AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B03B0"))) PPC_WEAK_FUNC(sub_832B03B0);
PPC_FUNC_IMPL(__imp__sub_832B03B0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,20048
	ctx.r31.s64 = ctx.r11.s64 + 20048;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82b45680
	ctx.lr = 0x832B03D0;
	sub_82B45680(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82b45680
	ctx.lr = 0x832B03D8;
	sub_82B45680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c045b8
	ctx.lr = 0x832B03E0;
	sub_82C045B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832B03E8;
	sub_824FE010(ctx, base);
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

__attribute__((alias("__imp__sub_832B0404"))) PPC_WEAK_FUNC(sub_832B0404);
PPC_FUNC_IMPL(__imp__sub_832B0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0408"))) PPC_WEAK_FUNC(sub_832B0408);
PPC_FUNC_IMPL(__imp__sub_832B0408) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,20168
	ctx.r31.s64 = ctx.r11.s64 + 20168;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82b45680
	ctx.lr = 0x832B0428;
	sub_82B45680(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82b45680
	ctx.lr = 0x832B0430;
	sub_82B45680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c045b8
	ctx.lr = 0x832B0438;
	sub_82C045B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832B0440;
	sub_824FE010(ctx, base);
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

__attribute__((alias("__imp__sub_832B045C"))) PPC_WEAK_FUNC(sub_832B045C);
PPC_FUNC_IMPL(__imp__sub_832B045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0460"))) PPC_WEAK_FUNC(sub_832B0460);
PPC_FUNC_IMPL(__imp__sub_832B0460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B046C"))) PPC_WEAK_FUNC(sub_832B046C);
PPC_FUNC_IMPL(__imp__sub_832B046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0470"))) PPC_WEAK_FUNC(sub_832B0470);
PPC_FUNC_IMPL(__imp__sub_832B0470) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,20420
	ctx.r31.s64 = ctx.r11.s64 + 20420;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c82dc0
	ctx.lr = 0x832B04B4;
	sub_82C82DC0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832B04BC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832B04E0"))) PPC_WEAK_FUNC(sub_832B04E0);
PPC_FUNC_IMPL(__imp__sub_832B04E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B04EC"))) PPC_WEAK_FUNC(sub_832B04EC);
PPC_FUNC_IMPL(__imp__sub_832B04EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B04F0"))) PPC_WEAK_FUNC(sub_832B04F0);
PPC_FUNC_IMPL(__imp__sub_832B04F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,22468
	ctx.r3.s64 = ctx.r11.s64 + 22468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B04FC"))) PPC_WEAK_FUNC(sub_832B04FC);
PPC_FUNC_IMPL(__imp__sub_832B04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0500"))) PPC_WEAK_FUNC(sub_832B0500);
PPC_FUNC_IMPL(__imp__sub_832B0500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832B0520"))) PPC_WEAK_FUNC(sub_832B0520);
PPC_FUNC_IMPL(__imp__sub_832B0520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0524"))) PPC_WEAK_FUNC(sub_832B0524);
PPC_FUNC_IMPL(__imp__sub_832B0524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0528"))) PPC_WEAK_FUNC(sub_832B0528);
PPC_FUNC_IMPL(__imp__sub_832B0528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832B0548"))) PPC_WEAK_FUNC(sub_832B0548);
PPC_FUNC_IMPL(__imp__sub_832B0548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B054C"))) PPC_WEAK_FUNC(sub_832B054C);
PPC_FUNC_IMPL(__imp__sub_832B054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0550"))) PPC_WEAK_FUNC(sub_832B0550);
PPC_FUNC_IMPL(__imp__sub_832B0550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832B0570"))) PPC_WEAK_FUNC(sub_832B0570);
PPC_FUNC_IMPL(__imp__sub_832B0570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0574"))) PPC_WEAK_FUNC(sub_832B0574);
PPC_FUNC_IMPL(__imp__sub_832B0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0578"))) PPC_WEAK_FUNC(sub_832B0578);
PPC_FUNC_IMPL(__imp__sub_832B0578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832B0598"))) PPC_WEAK_FUNC(sub_832B0598);
PPC_FUNC_IMPL(__imp__sub_832B0598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B059C"))) PPC_WEAK_FUNC(sub_832B059C);
PPC_FUNC_IMPL(__imp__sub_832B059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B05A0"))) PPC_WEAK_FUNC(sub_832B05A0);
PPC_FUNC_IMPL(__imp__sub_832B05A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832B05C0"))) PPC_WEAK_FUNC(sub_832B05C0);
PPC_FUNC_IMPL(__imp__sub_832B05C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B05C4"))) PPC_WEAK_FUNC(sub_832B05C4);
PPC_FUNC_IMPL(__imp__sub_832B05C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B05C8"))) PPC_WEAK_FUNC(sub_832B05C8);
PPC_FUNC_IMPL(__imp__sub_832B05C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22492);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B05D4"))) PPC_WEAK_FUNC(sub_832B05D4);
PPC_FUNC_IMPL(__imp__sub_832B05D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B05D8"))) PPC_WEAK_FUNC(sub_832B05D8);
PPC_FUNC_IMPL(__imp__sub_832B05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-6252
	ctx.r3.s64 = ctx.r11.s64 + -6252;
	// b 0x82c725a8
	sub_82C725A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B05E4"))) PPC_WEAK_FUNC(sub_832B05E4);
PPC_FUNC_IMPL(__imp__sub_832B05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B05E8"))) PPC_WEAK_FUNC(sub_832B05E8);
PPC_FUNC_IMPL(__imp__sub_832B05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,22508
	ctx.r3.s64 = ctx.r11.s64 + 22508;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B05F4"))) PPC_WEAK_FUNC(sub_832B05F4);
PPC_FUNC_IMPL(__imp__sub_832B05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B05F8"))) PPC_WEAK_FUNC(sub_832B05F8);
PPC_FUNC_IMPL(__imp__sub_832B05F8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// addi r30,r31,22632
	ctx.r30.s64 = ctx.r31.s64 + 22632;
	// lwz r3,22632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22632);
	// bl 0x82c87a68
	ctx.lr = 0x832B061C;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,22632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22632, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832B064C"))) PPC_WEAK_FUNC(sub_832B064C);
PPC_FUNC_IMPL(__imp__sub_832B064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0650"))) PPC_WEAK_FUNC(sub_832B0650);
PPC_FUNC_IMPL(__imp__sub_832B0650) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// addi r30,r31,22620
	ctx.r30.s64 = ctx.r31.s64 + 22620;
	// lwz r3,22620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22620);
	// bl 0x82c87a68
	ctx.lr = 0x832B0674;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,22620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22620, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832B06A4"))) PPC_WEAK_FUNC(sub_832B06A4);
PPC_FUNC_IMPL(__imp__sub_832B06A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B06A8"))) PPC_WEAK_FUNC(sub_832B06A8);
PPC_FUNC_IMPL(__imp__sub_832B06A8) {
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
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r31,r11,-6040
	ctx.r31.s64 = ctx.r11.s64 + -6040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c82038
	ctx.lr = 0x832B06C8;
	sub_82C82038(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c87a68
	ctx.lr = 0x832B06D0;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832B06FC"))) PPC_WEAK_FUNC(sub_832B06FC);
PPC_FUNC_IMPL(__imp__sub_832B06FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0700"))) PPC_WEAK_FUNC(sub_832B0700);
PPC_FUNC_IMPL(__imp__sub_832B0700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22696(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22696);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

