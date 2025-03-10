#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832AC718"))) PPC_WEAK_FUNC(sub_832AC718);
PPC_FUNC_IMPL(__imp__sub_832AC718) {
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
	// addi r31,r11,-1892
	ctx.r31.s64 = ctx.r11.s64 + -1892;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a5e0d8
	ctx.lr = 0x832AC738;
	sub_82A5E0D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832AC740;
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

__attribute__((alias("__imp__sub_832AC75C"))) PPC_WEAK_FUNC(sub_832AC75C);
PPC_FUNC_IMPL(__imp__sub_832AC75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC760"))) PPC_WEAK_FUNC(sub_832AC760);
PPC_FUNC_IMPL(__imp__sub_832AC760) {
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
	// li r30,49
	ctx.r30.s64 = 49;
	// addi r11,r11,-1840
	ctx.r11.s64 = ctx.r11.s64 + -1840;
	// addi r31,r11,4800
	ctx.r31.s64 = ctx.r11.s64 + 4800;
loc_832AC784:
	// addi r31,r31,-96
	ctx.r31.s64 = ctx.r31.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a5c9e0
	ctx.lr = 0x832AC790;
	sub_82A5C9E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ac784
	if (!ctx.cr0.lt) goto loc_832AC784;
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

__attribute__((alias("__imp__sub_832AC7B0"))) PPC_WEAK_FUNC(sub_832AC7B0);
PPC_FUNC_IMPL(__imp__sub_832AC7B0) {
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
	// lwz r3,2960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ac7dc
	if (ctx.cr6.eq) goto loc_832AC7DC;
	// bl 0x82b84288
	ctx.lr = 0x832AC7D4;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r11.u32);
loc_832AC7DC:
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

__attribute__((alias("__imp__sub_832AC7F0"))) PPC_WEAK_FUNC(sub_832AC7F0);
PPC_FUNC_IMPL(__imp__sub_832AC7F0) {
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
	// lwz r3,-22072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22072);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ac81c
	if (ctx.cr6.eq) goto loc_832AC81C;
	// bl 0x82b84288
	ctx.lr = 0x832AC814;
	sub_82B84288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-22072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22072, ctx.r11.u32);
loc_832AC81C:
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

__attribute__((alias("__imp__sub_832AC830"))) PPC_WEAK_FUNC(sub_832AC830);
PPC_FUNC_IMPL(__imp__sub_832AC830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,-1880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1880);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC844"))) PPC_WEAK_FUNC(sub_832AC844);
PPC_FUNC_IMPL(__imp__sub_832AC844) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AC848"))) PPC_WEAK_FUNC(sub_832AC848);
PPC_FUNC_IMPL(__imp__sub_832AC848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,-1860(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1860);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC85C"))) PPC_WEAK_FUNC(sub_832AC85C);
PPC_FUNC_IMPL(__imp__sub_832AC85C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AC860"))) PPC_WEAK_FUNC(sub_832AC860);
PPC_FUNC_IMPL(__imp__sub_832AC860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,2972
	ctx.r3.s64 = ctx.r11.s64 + 2972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC86C"))) PPC_WEAK_FUNC(sub_832AC86C);
PPC_FUNC_IMPL(__imp__sub_832AC86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC870"))) PPC_WEAK_FUNC(sub_832AC870);
PPC_FUNC_IMPL(__imp__sub_832AC870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,2976
	ctx.r3.s64 = ctx.r11.s64 + 2976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC87C"))) PPC_WEAK_FUNC(sub_832AC87C);
PPC_FUNC_IMPL(__imp__sub_832AC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC880"))) PPC_WEAK_FUNC(sub_832AC880);
PPC_FUNC_IMPL(__imp__sub_832AC880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832AC888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,2980
	ctx.r11.s64 = ctx.r11.s64 + 2980;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r10,7552
	ctx.r29.s64 = ctx.r10.s64 + 7552;
	// addi r28,r11,7536
	ctx.r28.s64 = ctx.r11.s64 + 7536;
loc_832AC8AC:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AC8BC;
	sub_821FBED8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fbed8
	ctx.lr = 0x832AC8C8;
	sub_821FBED8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ac8ac
	if (!ctx.cr0.lt) goto loc_832AC8AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC8D8"))) PPC_WEAK_FUNC(sub_832AC8D8);
PPC_FUNC_IMPL(__imp__sub_832AC8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832AC8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,3168
	ctx.r11.s64 = ctx.r11.s64 + 3168;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r10,7552
	ctx.r29.s64 = ctx.r10.s64 + 7552;
	// addi r28,r11,7536
	ctx.r28.s64 = ctx.r11.s64 + 7536;
loc_832AC904:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832AC914;
	sub_821FBED8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fbed8
	ctx.lr = 0x832AC920;
	sub_821FBED8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ac904
	if (!ctx.cr0.lt) goto loc_832AC904;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC930"))) PPC_WEAK_FUNC(sub_832AC930);
PPC_FUNC_IMPL(__imp__sub_832AC930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3192
	ctx.r3.s64 = ctx.r11.s64 + 3192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC93C"))) PPC_WEAK_FUNC(sub_832AC93C);
PPC_FUNC_IMPL(__imp__sub_832AC93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC940"))) PPC_WEAK_FUNC(sub_832AC940);
PPC_FUNC_IMPL(__imp__sub_832AC940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3196
	ctx.r3.s64 = ctx.r11.s64 + 3196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC94C"))) PPC_WEAK_FUNC(sub_832AC94C);
PPC_FUNC_IMPL(__imp__sub_832AC94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC950"))) PPC_WEAK_FUNC(sub_832AC950);
PPC_FUNC_IMPL(__imp__sub_832AC950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC95C"))) PPC_WEAK_FUNC(sub_832AC95C);
PPC_FUNC_IMPL(__imp__sub_832AC95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC960"))) PPC_WEAK_FUNC(sub_832AC960);
PPC_FUNC_IMPL(__imp__sub_832AC960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3204
	ctx.r3.s64 = ctx.r11.s64 + 3204;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC96C"))) PPC_WEAK_FUNC(sub_832AC96C);
PPC_FUNC_IMPL(__imp__sub_832AC96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC970"))) PPC_WEAK_FUNC(sub_832AC970);
PPC_FUNC_IMPL(__imp__sub_832AC970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3208
	ctx.r3.s64 = ctx.r11.s64 + 3208;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC97C"))) PPC_WEAK_FUNC(sub_832AC97C);
PPC_FUNC_IMPL(__imp__sub_832AC97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC980"))) PPC_WEAK_FUNC(sub_832AC980);
PPC_FUNC_IMPL(__imp__sub_832AC980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3212
	ctx.r3.s64 = ctx.r11.s64 + 3212;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC98C"))) PPC_WEAK_FUNC(sub_832AC98C);
PPC_FUNC_IMPL(__imp__sub_832AC98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC990"))) PPC_WEAK_FUNC(sub_832AC990);
PPC_FUNC_IMPL(__imp__sub_832AC990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3216
	ctx.r3.s64 = ctx.r11.s64 + 3216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC99C"))) PPC_WEAK_FUNC(sub_832AC99C);
PPC_FUNC_IMPL(__imp__sub_832AC99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC9A0"))) PPC_WEAK_FUNC(sub_832AC9A0);
PPC_FUNC_IMPL(__imp__sub_832AC9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3220
	ctx.r3.s64 = ctx.r11.s64 + 3220;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9AC"))) PPC_WEAK_FUNC(sub_832AC9AC);
PPC_FUNC_IMPL(__imp__sub_832AC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC9B0"))) PPC_WEAK_FUNC(sub_832AC9B0);
PPC_FUNC_IMPL(__imp__sub_832AC9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9BC"))) PPC_WEAK_FUNC(sub_832AC9BC);
PPC_FUNC_IMPL(__imp__sub_832AC9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC9C0"))) PPC_WEAK_FUNC(sub_832AC9C0);
PPC_FUNC_IMPL(__imp__sub_832AC9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3228
	ctx.r3.s64 = ctx.r11.s64 + 3228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9CC"))) PPC_WEAK_FUNC(sub_832AC9CC);
PPC_FUNC_IMPL(__imp__sub_832AC9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC9D0"))) PPC_WEAK_FUNC(sub_832AC9D0);
PPC_FUNC_IMPL(__imp__sub_832AC9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3232
	ctx.r3.s64 = ctx.r11.s64 + 3232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9DC"))) PPC_WEAK_FUNC(sub_832AC9DC);
PPC_FUNC_IMPL(__imp__sub_832AC9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC9E0"))) PPC_WEAK_FUNC(sub_832AC9E0);
PPC_FUNC_IMPL(__imp__sub_832AC9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3236
	ctx.r3.s64 = ctx.r11.s64 + 3236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9EC"))) PPC_WEAK_FUNC(sub_832AC9EC);
PPC_FUNC_IMPL(__imp__sub_832AC9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC9F0"))) PPC_WEAK_FUNC(sub_832AC9F0);
PPC_FUNC_IMPL(__imp__sub_832AC9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9FC"))) PPC_WEAK_FUNC(sub_832AC9FC);
PPC_FUNC_IMPL(__imp__sub_832AC9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACA00"))) PPC_WEAK_FUNC(sub_832ACA00);
PPC_FUNC_IMPL(__imp__sub_832ACA00) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-22004
	ctx.r31.s64 = ctx.r11.s64 + -22004;
	// addi r11,r10,7532
	ctx.r11.s64 = ctx.r10.s64 + 7532;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832aca44
	if (ctx.cr6.eq) goto loc_832ACA44;
	// bl 0x821fc1f0
	ctx.lr = 0x832ACA34;
	sub_821FC1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_832ACA44:
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

__attribute__((alias("__imp__sub_832ACA58"))) PPC_WEAK_FUNC(sub_832ACA58);
PPC_FUNC_IMPL(__imp__sub_832ACA58) {
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
	// addi r31,r11,3312
	ctx.r31.s64 = ctx.r11.s64 + 3312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217c870
	ctx.lr = 0x832ACA78;
	sub_8217C870(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832ACA80;
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

__attribute__((alias("__imp__sub_832ACA9C"))) PPC_WEAK_FUNC(sub_832ACA9C);
PPC_FUNC_IMPL(__imp__sub_832ACA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACAA0"))) PPC_WEAK_FUNC(sub_832ACAA0);
PPC_FUNC_IMPL(__imp__sub_832ACAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3324
	ctx.r3.s64 = ctx.r11.s64 + 3324;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAAC"))) PPC_WEAK_FUNC(sub_832ACAAC);
PPC_FUNC_IMPL(__imp__sub_832ACAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACAB0"))) PPC_WEAK_FUNC(sub_832ACAB0);
PPC_FUNC_IMPL(__imp__sub_832ACAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3400
	ctx.r3.s64 = ctx.r11.s64 + 3400;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACABC"))) PPC_WEAK_FUNC(sub_832ACABC);
PPC_FUNC_IMPL(__imp__sub_832ACABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACAC0"))) PPC_WEAK_FUNC(sub_832ACAC0);
PPC_FUNC_IMPL(__imp__sub_832ACAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3476
	ctx.r3.s64 = ctx.r11.s64 + 3476;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACACC"))) PPC_WEAK_FUNC(sub_832ACACC);
PPC_FUNC_IMPL(__imp__sub_832ACACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACAD0"))) PPC_WEAK_FUNC(sub_832ACAD0);
PPC_FUNC_IMPL(__imp__sub_832ACAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3480
	ctx.r3.s64 = ctx.r11.s64 + 3480;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACADC"))) PPC_WEAK_FUNC(sub_832ACADC);
PPC_FUNC_IMPL(__imp__sub_832ACADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACAE0"))) PPC_WEAK_FUNC(sub_832ACAE0);
PPC_FUNC_IMPL(__imp__sub_832ACAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3484
	ctx.r3.s64 = ctx.r11.s64 + 3484;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAEC"))) PPC_WEAK_FUNC(sub_832ACAEC);
PPC_FUNC_IMPL(__imp__sub_832ACAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACAF0"))) PPC_WEAK_FUNC(sub_832ACAF0);
PPC_FUNC_IMPL(__imp__sub_832ACAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAFC"))) PPC_WEAK_FUNC(sub_832ACAFC);
PPC_FUNC_IMPL(__imp__sub_832ACAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACB00"))) PPC_WEAK_FUNC(sub_832ACB00);
PPC_FUNC_IMPL(__imp__sub_832ACB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,-21992
	ctx.r3.s64 = ctx.r11.s64 + -21992;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACB0C"))) PPC_WEAK_FUNC(sub_832ACB0C);
PPC_FUNC_IMPL(__imp__sub_832ACB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACB10"))) PPC_WEAK_FUNC(sub_832ACB10);
PPC_FUNC_IMPL(__imp__sub_832ACB10) {
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
	// addi r30,r31,-21948
	ctx.r30.s64 = ctx.r31.s64 + -21948;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-21948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21948, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832ACB40;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-21948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21948, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832ACB54;
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

__attribute__((alias("__imp__sub_832ACB6C"))) PPC_WEAK_FUNC(sub_832ACB6C);
PPC_FUNC_IMPL(__imp__sub_832ACB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACB70"))) PPC_WEAK_FUNC(sub_832ACB70);
PPC_FUNC_IMPL(__imp__sub_832ACB70) {
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
	// addi r30,r31,-21940
	ctx.r30.s64 = ctx.r31.s64 + -21940;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-21940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21940, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832ACBA0;
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// stw r11,-21940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21940, ctx.r11.u32);
	// bl 0x821fbed8
	ctx.lr = 0x832ACBB4;
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

__attribute__((alias("__imp__sub_832ACBCC"))) PPC_WEAK_FUNC(sub_832ACBCC);
PPC_FUNC_IMPL(__imp__sub_832ACBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACBD0"))) PPC_WEAK_FUNC(sub_832ACBD0);
PPC_FUNC_IMPL(__imp__sub_832ACBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3500
	ctx.r3.s64 = ctx.r11.s64 + 3500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACBDC"))) PPC_WEAK_FUNC(sub_832ACBDC);
PPC_FUNC_IMPL(__imp__sub_832ACBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACBE0"))) PPC_WEAK_FUNC(sub_832ACBE0);
PPC_FUNC_IMPL(__imp__sub_832ACBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3504
	ctx.r3.s64 = ctx.r11.s64 + 3504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACBEC"))) PPC_WEAK_FUNC(sub_832ACBEC);
PPC_FUNC_IMPL(__imp__sub_832ACBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACBF0"))) PPC_WEAK_FUNC(sub_832ACBF0);
PPC_FUNC_IMPL(__imp__sub_832ACBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,12860
	ctx.r3.s64 = ctx.r11.s64 + 12860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACBFC"))) PPC_WEAK_FUNC(sub_832ACBFC);
PPC_FUNC_IMPL(__imp__sub_832ACBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACC00"))) PPC_WEAK_FUNC(sub_832ACC00);
PPC_FUNC_IMPL(__imp__sub_832ACC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3508
	ctx.r3.s64 = ctx.r11.s64 + 3508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACC0C"))) PPC_WEAK_FUNC(sub_832ACC0C);
PPC_FUNC_IMPL(__imp__sub_832ACC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACC10"))) PPC_WEAK_FUNC(sub_832ACC10);
PPC_FUNC_IMPL(__imp__sub_832ACC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3512
	ctx.r3.s64 = ctx.r11.s64 + 3512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACC1C"))) PPC_WEAK_FUNC(sub_832ACC1C);
PPC_FUNC_IMPL(__imp__sub_832ACC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACC20"))) PPC_WEAK_FUNC(sub_832ACC20);
PPC_FUNC_IMPL(__imp__sub_832ACC20) {
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
	// lwz r3,3516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832acc80
	if (ctx.cr6.eq) goto loc_832ACC80;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACC44:
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
	// bne 0x832acc44
	if (!ctx.cr0.eq) goto loc_832ACC44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832acc78
	if (!ctx.cr6.eq) goto loc_832ACC78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACC78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r11.u32);
loc_832ACC80:
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

__attribute__((alias("__imp__sub_832ACC94"))) PPC_WEAK_FUNC(sub_832ACC94);
PPC_FUNC_IMPL(__imp__sub_832ACC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACC98"))) PPC_WEAK_FUNC(sub_832ACC98);
PPC_FUNC_IMPL(__imp__sub_832ACC98) {
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
	// lwz r3,3520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832accf8
	if (ctx.cr6.eq) goto loc_832ACCF8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACCBC:
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
	// bne 0x832accbc
	if (!ctx.cr0.eq) goto loc_832ACCBC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832accf0
	if (!ctx.cr6.eq) goto loc_832ACCF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACCF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r11.u32);
loc_832ACCF8:
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

__attribute__((alias("__imp__sub_832ACD0C"))) PPC_WEAK_FUNC(sub_832ACD0C);
PPC_FUNC_IMPL(__imp__sub_832ACD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACD10"))) PPC_WEAK_FUNC(sub_832ACD10);
PPC_FUNC_IMPL(__imp__sub_832ACD10) {
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
	// lwz r3,3524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832acd70
	if (ctx.cr6.eq) goto loc_832ACD70;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACD34:
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
	// bne 0x832acd34
	if (!ctx.cr0.eq) goto loc_832ACD34;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832acd68
	if (!ctx.cr6.eq) goto loc_832ACD68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACD68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r11.u32);
loc_832ACD70:
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

__attribute__((alias("__imp__sub_832ACD84"))) PPC_WEAK_FUNC(sub_832ACD84);
PPC_FUNC_IMPL(__imp__sub_832ACD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACD88"))) PPC_WEAK_FUNC(sub_832ACD88);
PPC_FUNC_IMPL(__imp__sub_832ACD88) {
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
	// lwz r3,3528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832acde8
	if (ctx.cr6.eq) goto loc_832ACDE8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACDAC:
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
	// bne 0x832acdac
	if (!ctx.cr0.eq) goto loc_832ACDAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832acde0
	if (!ctx.cr6.eq) goto loc_832ACDE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACDE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r11.u32);
loc_832ACDE8:
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

__attribute__((alias("__imp__sub_832ACDFC"))) PPC_WEAK_FUNC(sub_832ACDFC);
PPC_FUNC_IMPL(__imp__sub_832ACDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACE00"))) PPC_WEAK_FUNC(sub_832ACE00);
PPC_FUNC_IMPL(__imp__sub_832ACE00) {
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
	// lwz r3,3532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ace60
	if (ctx.cr6.eq) goto loc_832ACE60;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACE24:
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
	// bne 0x832ace24
	if (!ctx.cr0.eq) goto loc_832ACE24;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ace58
	if (!ctx.cr6.eq) goto loc_832ACE58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACE58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r11.u32);
loc_832ACE60:
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

__attribute__((alias("__imp__sub_832ACE74"))) PPC_WEAK_FUNC(sub_832ACE74);
PPC_FUNC_IMPL(__imp__sub_832ACE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACE78"))) PPC_WEAK_FUNC(sub_832ACE78);
PPC_FUNC_IMPL(__imp__sub_832ACE78) {
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
	// lwz r3,3536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832aced8
	if (ctx.cr6.eq) goto loc_832ACED8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACE9C:
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
	// bne 0x832ace9c
	if (!ctx.cr0.eq) goto loc_832ACE9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832aced0
	if (!ctx.cr6.eq) goto loc_832ACED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3536, ctx.r11.u32);
loc_832ACED8:
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

__attribute__((alias("__imp__sub_832ACEEC"))) PPC_WEAK_FUNC(sub_832ACEEC);
PPC_FUNC_IMPL(__imp__sub_832ACEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACEF0"))) PPC_WEAK_FUNC(sub_832ACEF0);
PPC_FUNC_IMPL(__imp__sub_832ACEF0) {
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
	// lwz r3,3540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832acf50
	if (ctx.cr6.eq) goto loc_832ACF50;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACF14:
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
	// bne 0x832acf14
	if (!ctx.cr0.eq) goto loc_832ACF14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832acf48
	if (!ctx.cr6.eq) goto loc_832ACF48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACF48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3540, ctx.r11.u32);
loc_832ACF50:
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

__attribute__((alias("__imp__sub_832ACF64"))) PPC_WEAK_FUNC(sub_832ACF64);
PPC_FUNC_IMPL(__imp__sub_832ACF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACF68"))) PPC_WEAK_FUNC(sub_832ACF68);
PPC_FUNC_IMPL(__imp__sub_832ACF68) {
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
	// lwz r3,3544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832acfc8
	if (ctx.cr6.eq) goto loc_832ACFC8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACF8C:
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
	// bne 0x832acf8c
	if (!ctx.cr0.eq) goto loc_832ACF8C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832acfc0
	if (!ctx.cr6.eq) goto loc_832ACFC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832ACFC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3544, ctx.r11.u32);
loc_832ACFC8:
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

__attribute__((alias("__imp__sub_832ACFDC"))) PPC_WEAK_FUNC(sub_832ACFDC);
PPC_FUNC_IMPL(__imp__sub_832ACFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACFE0"))) PPC_WEAK_FUNC(sub_832ACFE0);
PPC_FUNC_IMPL(__imp__sub_832ACFE0) {
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
	// lwz r3,3548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad040
	if (ctx.cr6.eq) goto loc_832AD040;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD004:
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
	// bne 0x832ad004
	if (!ctx.cr0.eq) goto loc_832AD004;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ad038
	if (!ctx.cr6.eq) goto loc_832AD038;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AD038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AD038:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3548, ctx.r11.u32);
loc_832AD040:
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

__attribute__((alias("__imp__sub_832AD054"))) PPC_WEAK_FUNC(sub_832AD054);
PPC_FUNC_IMPL(__imp__sub_832AD054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD058"))) PPC_WEAK_FUNC(sub_832AD058);
PPC_FUNC_IMPL(__imp__sub_832AD058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,-21932
	ctx.r3.s64 = ctx.r11.s64 + -21932;
	// b 0x82be5050
	sub_82BE5050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD064"))) PPC_WEAK_FUNC(sub_832AD064);
PPC_FUNC_IMPL(__imp__sub_832AD064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD068"))) PPC_WEAK_FUNC(sub_832AD068);
PPC_FUNC_IMPL(__imp__sub_832AD068) {
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
	// lwz r3,3552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad0c8
	if (ctx.cr6.eq) goto loc_832AD0C8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD08C:
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
	// bne 0x832ad08c
	if (!ctx.cr0.eq) goto loc_832AD08C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ad0c0
	if (!ctx.cr6.eq) goto loc_832AD0C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AD0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AD0C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3552, ctx.r11.u32);
loc_832AD0C8:
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

__attribute__((alias("__imp__sub_832AD0DC"))) PPC_WEAK_FUNC(sub_832AD0DC);
PPC_FUNC_IMPL(__imp__sub_832AD0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD0E0"))) PPC_WEAK_FUNC(sub_832AD0E0);
PPC_FUNC_IMPL(__imp__sub_832AD0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3584
	ctx.r3.s64 = ctx.r11.s64 + 3584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD0EC"))) PPC_WEAK_FUNC(sub_832AD0EC);
PPC_FUNC_IMPL(__imp__sub_832AD0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD0F0"))) PPC_WEAK_FUNC(sub_832AD0F0);
PPC_FUNC_IMPL(__imp__sub_832AD0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3588
	ctx.r3.s64 = ctx.r11.s64 + 3588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD0FC"))) PPC_WEAK_FUNC(sub_832AD0FC);
PPC_FUNC_IMPL(__imp__sub_832AD0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD100"))) PPC_WEAK_FUNC(sub_832AD100);
PPC_FUNC_IMPL(__imp__sub_832AD100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3592
	ctx.r3.s64 = ctx.r11.s64 + 3592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD10C"))) PPC_WEAK_FUNC(sub_832AD10C);
PPC_FUNC_IMPL(__imp__sub_832AD10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD110"))) PPC_WEAK_FUNC(sub_832AD110);
PPC_FUNC_IMPL(__imp__sub_832AD110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3596
	ctx.r3.s64 = ctx.r11.s64 + 3596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD11C"))) PPC_WEAK_FUNC(sub_832AD11C);
PPC_FUNC_IMPL(__imp__sub_832AD11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD120"))) PPC_WEAK_FUNC(sub_832AD120);
PPC_FUNC_IMPL(__imp__sub_832AD120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,3600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD134"))) PPC_WEAK_FUNC(sub_832AD134);
PPC_FUNC_IMPL(__imp__sub_832AD134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD138"))) PPC_WEAK_FUNC(sub_832AD138);
PPC_FUNC_IMPL(__imp__sub_832AD138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,3620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3620);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD14C"))) PPC_WEAK_FUNC(sub_832AD14C);
PPC_FUNC_IMPL(__imp__sub_832AD14C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD150"))) PPC_WEAK_FUNC(sub_832AD150);
PPC_FUNC_IMPL(__imp__sub_832AD150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,3640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD164"))) PPC_WEAK_FUNC(sub_832AD164);
PPC_FUNC_IMPL(__imp__sub_832AD164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD168"))) PPC_WEAK_FUNC(sub_832AD168);
PPC_FUNC_IMPL(__imp__sub_832AD168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3660
	ctx.r3.s64 = ctx.r11.s64 + 3660;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD174"))) PPC_WEAK_FUNC(sub_832AD174);
PPC_FUNC_IMPL(__imp__sub_832AD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD178"))) PPC_WEAK_FUNC(sub_832AD178);
PPC_FUNC_IMPL(__imp__sub_832AD178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3664
	ctx.r3.s64 = ctx.r11.s64 + 3664;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD184"))) PPC_WEAK_FUNC(sub_832AD184);
PPC_FUNC_IMPL(__imp__sub_832AD184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD188"))) PPC_WEAK_FUNC(sub_832AD188);
PPC_FUNC_IMPL(__imp__sub_832AD188) {
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
	// addi r11,r11,3688
	ctx.r11.s64 = ctx.r11.s64 + 3688;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_832AD1AC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad1c0
	if (ctx.cr6.eq) goto loc_832AD1C0;
	// bl 0x821fc1f0
	ctx.lr = 0x832AD1C0;
	sub_821FC1F0(ctx, base);
loc_832AD1C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ad1ac
	if (!ctx.cr0.lt) goto loc_832AD1AC;
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

__attribute__((alias("__imp__sub_832AD1E0"))) PPC_WEAK_FUNC(sub_832AD1E0);
PPC_FUNC_IMPL(__imp__sub_832AD1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,3668(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD1F4"))) PPC_WEAK_FUNC(sub_832AD1F4);
PPC_FUNC_IMPL(__imp__sub_832AD1F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD1F8"))) PPC_WEAK_FUNC(sub_832AD1F8);
PPC_FUNC_IMPL(__imp__sub_832AD1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,3768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD20C"))) PPC_WEAK_FUNC(sub_832AD20C);
PPC_FUNC_IMPL(__imp__sub_832AD20C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD210"))) PPC_WEAK_FUNC(sub_832AD210);
PPC_FUNC_IMPL(__imp__sub_832AD210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3828
	ctx.r3.s64 = ctx.r11.s64 + 3828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD21C"))) PPC_WEAK_FUNC(sub_832AD21C);
PPC_FUNC_IMPL(__imp__sub_832AD21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD220"))) PPC_WEAK_FUNC(sub_832AD220);
PPC_FUNC_IMPL(__imp__sub_832AD220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3832
	ctx.r3.s64 = ctx.r11.s64 + 3832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD22C"))) PPC_WEAK_FUNC(sub_832AD22C);
PPC_FUNC_IMPL(__imp__sub_832AD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD230"))) PPC_WEAK_FUNC(sub_832AD230);
PPC_FUNC_IMPL(__imp__sub_832AD230) {
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
	// addi r11,r11,3856
	ctx.r11.s64 = ctx.r11.s64 + 3856;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_832AD254:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad268
	if (ctx.cr6.eq) goto loc_832AD268;
	// bl 0x821fc1f0
	ctx.lr = 0x832AD268;
	sub_821FC1F0(ctx, base);
loc_832AD268:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ad254
	if (!ctx.cr0.lt) goto loc_832AD254;
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

__attribute__((alias("__imp__sub_832AD288"))) PPC_WEAK_FUNC(sub_832AD288);
PPC_FUNC_IMPL(__imp__sub_832AD288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,3836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD29C"))) PPC_WEAK_FUNC(sub_832AD29C);
PPC_FUNC_IMPL(__imp__sub_832AD29C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD2A0"))) PPC_WEAK_FUNC(sub_832AD2A0);
PPC_FUNC_IMPL(__imp__sub_832AD2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3936
	ctx.r3.s64 = ctx.r11.s64 + 3936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2AC"))) PPC_WEAK_FUNC(sub_832AD2AC);
PPC_FUNC_IMPL(__imp__sub_832AD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD2B0"))) PPC_WEAK_FUNC(sub_832AD2B0);
PPC_FUNC_IMPL(__imp__sub_832AD2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,3940
	ctx.r3.s64 = ctx.r11.s64 + 3940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2BC"))) PPC_WEAK_FUNC(sub_832AD2BC);
PPC_FUNC_IMPL(__imp__sub_832AD2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD2C0"))) PPC_WEAK_FUNC(sub_832AD2C0);
PPC_FUNC_IMPL(__imp__sub_832AD2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,3944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2D4"))) PPC_WEAK_FUNC(sub_832AD2D4);
PPC_FUNC_IMPL(__imp__sub_832AD2D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD2D8"))) PPC_WEAK_FUNC(sub_832AD2D8);
PPC_FUNC_IMPL(__imp__sub_832AD2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,4072
	ctx.r3.s64 = ctx.r11.s64 + 4072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2E4"))) PPC_WEAK_FUNC(sub_832AD2E4);
PPC_FUNC_IMPL(__imp__sub_832AD2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD2E8"))) PPC_WEAK_FUNC(sub_832AD2E8);
PPC_FUNC_IMPL(__imp__sub_832AD2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,4076
	ctx.r3.s64 = ctx.r11.s64 + 4076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2F4"))) PPC_WEAK_FUNC(sub_832AD2F4);
PPC_FUNC_IMPL(__imp__sub_832AD2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD2F8"))) PPC_WEAK_FUNC(sub_832AD2F8);
PPC_FUNC_IMPL(__imp__sub_832AD2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16368
	ctx.r3.s64 = ctx.r11.s64 + 16368;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD304"))) PPC_WEAK_FUNC(sub_832AD304);
PPC_FUNC_IMPL(__imp__sub_832AD304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD308"))) PPC_WEAK_FUNC(sub_832AD308);
PPC_FUNC_IMPL(__imp__sub_832AD308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16372
	ctx.r3.s64 = ctx.r11.s64 + 16372;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD314"))) PPC_WEAK_FUNC(sub_832AD314);
PPC_FUNC_IMPL(__imp__sub_832AD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD318"))) PPC_WEAK_FUNC(sub_832AD318);
PPC_FUNC_IMPL(__imp__sub_832AD318) {
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
	// addi r11,r11,16376
	ctx.r11.s64 = ctx.r11.s64 + 16376;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_832AD33C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad350
	if (ctx.cr6.eq) goto loc_832AD350;
	// bl 0x821fc1f0
	ctx.lr = 0x832AD350;
	sub_821FC1F0(ctx, base);
loc_832AD350:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ad33c
	if (!ctx.cr0.lt) goto loc_832AD33C;
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

__attribute__((alias("__imp__sub_832AD370"))) PPC_WEAK_FUNC(sub_832AD370);
PPC_FUNC_IMPL(__imp__sub_832AD370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16496
	ctx.r3.s64 = ctx.r11.s64 + 16496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD37C"))) PPC_WEAK_FUNC(sub_832AD37C);
PPC_FUNC_IMPL(__imp__sub_832AD37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD380"))) PPC_WEAK_FUNC(sub_832AD380);
PPC_FUNC_IMPL(__imp__sub_832AD380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16500
	ctx.r3.s64 = ctx.r11.s64 + 16500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD38C"))) PPC_WEAK_FUNC(sub_832AD38C);
PPC_FUNC_IMPL(__imp__sub_832AD38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD390"))) PPC_WEAK_FUNC(sub_832AD390);
PPC_FUNC_IMPL(__imp__sub_832AD390) {
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
	// addi r31,r11,8144
	ctx.r31.s64 = ctx.r11.s64 + 8144;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad3b8
	if (ctx.cr6.eq) goto loc_832AD3B8;
	// bl 0x8221be68
	ctx.lr = 0x832AD3B8;
	sub_8221BE68(ctx, base);
loc_832AD3B8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// beq cr6,0x832ad3e0
	if (ctx.cr6.eq) goto loc_832AD3E0;
	// bl 0x8221be68
	ctx.lr = 0x832AD3E0;
	sub_8221BE68(ctx, base);
loc_832AD3E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832AD40C"))) PPC_WEAK_FUNC(sub_832AD40C);
PPC_FUNC_IMPL(__imp__sub_832AD40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD410"))) PPC_WEAK_FUNC(sub_832AD410);
PPC_FUNC_IMPL(__imp__sub_832AD410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16504
	ctx.r3.s64 = ctx.r11.s64 + 16504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD41C"))) PPC_WEAK_FUNC(sub_832AD41C);
PPC_FUNC_IMPL(__imp__sub_832AD41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD420"))) PPC_WEAK_FUNC(sub_832AD420);
PPC_FUNC_IMPL(__imp__sub_832AD420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16508
	ctx.r3.s64 = ctx.r11.s64 + 16508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD42C"))) PPC_WEAK_FUNC(sub_832AD42C);
PPC_FUNC_IMPL(__imp__sub_832AD42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD430"))) PPC_WEAK_FUNC(sub_832AD430);
PPC_FUNC_IMPL(__imp__sub_832AD430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD43C"))) PPC_WEAK_FUNC(sub_832AD43C);
PPC_FUNC_IMPL(__imp__sub_832AD43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD440"))) PPC_WEAK_FUNC(sub_832AD440);
PPC_FUNC_IMPL(__imp__sub_832AD440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16532
	ctx.r3.s64 = ctx.r11.s64 + 16532;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD44C"))) PPC_WEAK_FUNC(sub_832AD44C);
PPC_FUNC_IMPL(__imp__sub_832AD44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD450"))) PPC_WEAK_FUNC(sub_832AD450);
PPC_FUNC_IMPL(__imp__sub_832AD450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16536
	ctx.r3.s64 = ctx.r11.s64 + 16536;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD45C"))) PPC_WEAK_FUNC(sub_832AD45C);
PPC_FUNC_IMPL(__imp__sub_832AD45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD460"))) PPC_WEAK_FUNC(sub_832AD460);
PPC_FUNC_IMPL(__imp__sub_832AD460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16540
	ctx.r3.s64 = ctx.r11.s64 + 16540;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD46C"))) PPC_WEAK_FUNC(sub_832AD46C);
PPC_FUNC_IMPL(__imp__sub_832AD46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD470"))) PPC_WEAK_FUNC(sub_832AD470);
PPC_FUNC_IMPL(__imp__sub_832AD470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16544
	ctx.r3.s64 = ctx.r11.s64 + 16544;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD47C"))) PPC_WEAK_FUNC(sub_832AD47C);
PPC_FUNC_IMPL(__imp__sub_832AD47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD480"))) PPC_WEAK_FUNC(sub_832AD480);
PPC_FUNC_IMPL(__imp__sub_832AD480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16548
	ctx.r3.s64 = ctx.r11.s64 + 16548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD48C"))) PPC_WEAK_FUNC(sub_832AD48C);
PPC_FUNC_IMPL(__imp__sub_832AD48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD490"))) PPC_WEAK_FUNC(sub_832AD490);
PPC_FUNC_IMPL(__imp__sub_832AD490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16552
	ctx.r3.s64 = ctx.r11.s64 + 16552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD49C"))) PPC_WEAK_FUNC(sub_832AD49C);
PPC_FUNC_IMPL(__imp__sub_832AD49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD4A0"))) PPC_WEAK_FUNC(sub_832AD4A0);
PPC_FUNC_IMPL(__imp__sub_832AD4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16556
	ctx.r3.s64 = ctx.r11.s64 + 16556;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4AC"))) PPC_WEAK_FUNC(sub_832AD4AC);
PPC_FUNC_IMPL(__imp__sub_832AD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD4B0"))) PPC_WEAK_FUNC(sub_832AD4B0);
PPC_FUNC_IMPL(__imp__sub_832AD4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16560
	ctx.r3.s64 = ctx.r11.s64 + 16560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4BC"))) PPC_WEAK_FUNC(sub_832AD4BC);
PPC_FUNC_IMPL(__imp__sub_832AD4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD4C0"))) PPC_WEAK_FUNC(sub_832AD4C0);
PPC_FUNC_IMPL(__imp__sub_832AD4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16564
	ctx.r3.s64 = ctx.r11.s64 + 16564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4CC"))) PPC_WEAK_FUNC(sub_832AD4CC);
PPC_FUNC_IMPL(__imp__sub_832AD4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD4D0"))) PPC_WEAK_FUNC(sub_832AD4D0);
PPC_FUNC_IMPL(__imp__sub_832AD4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4DC"))) PPC_WEAK_FUNC(sub_832AD4DC);
PPC_FUNC_IMPL(__imp__sub_832AD4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD4E0"))) PPC_WEAK_FUNC(sub_832AD4E0);
PPC_FUNC_IMPL(__imp__sub_832AD4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16572
	ctx.r3.s64 = ctx.r11.s64 + 16572;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4EC"))) PPC_WEAK_FUNC(sub_832AD4EC);
PPC_FUNC_IMPL(__imp__sub_832AD4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD4F0"))) PPC_WEAK_FUNC(sub_832AD4F0);
PPC_FUNC_IMPL(__imp__sub_832AD4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16576
	ctx.r3.s64 = ctx.r11.s64 + 16576;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4FC"))) PPC_WEAK_FUNC(sub_832AD4FC);
PPC_FUNC_IMPL(__imp__sub_832AD4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD500"))) PPC_WEAK_FUNC(sub_832AD500);
PPC_FUNC_IMPL(__imp__sub_832AD500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16580
	ctx.r3.s64 = ctx.r11.s64 + 16580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD50C"))) PPC_WEAK_FUNC(sub_832AD50C);
PPC_FUNC_IMPL(__imp__sub_832AD50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD510"))) PPC_WEAK_FUNC(sub_832AD510);
PPC_FUNC_IMPL(__imp__sub_832AD510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD51C"))) PPC_WEAK_FUNC(sub_832AD51C);
PPC_FUNC_IMPL(__imp__sub_832AD51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD520"))) PPC_WEAK_FUNC(sub_832AD520);
PPC_FUNC_IMPL(__imp__sub_832AD520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16588
	ctx.r3.s64 = ctx.r11.s64 + 16588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD52C"))) PPC_WEAK_FUNC(sub_832AD52C);
PPC_FUNC_IMPL(__imp__sub_832AD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD530"))) PPC_WEAK_FUNC(sub_832AD530);
PPC_FUNC_IMPL(__imp__sub_832AD530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16592
	ctx.r3.s64 = ctx.r11.s64 + 16592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD53C"))) PPC_WEAK_FUNC(sub_832AD53C);
PPC_FUNC_IMPL(__imp__sub_832AD53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD540"))) PPC_WEAK_FUNC(sub_832AD540);
PPC_FUNC_IMPL(__imp__sub_832AD540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16596
	ctx.r3.s64 = ctx.r11.s64 + 16596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD54C"))) PPC_WEAK_FUNC(sub_832AD54C);
PPC_FUNC_IMPL(__imp__sub_832AD54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD550"))) PPC_WEAK_FUNC(sub_832AD550);
PPC_FUNC_IMPL(__imp__sub_832AD550) {
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
	// addi r11,r11,16600
	ctx.r11.s64 = ctx.r11.s64 + 16600;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_832AD574:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad588
	if (ctx.cr6.eq) goto loc_832AD588;
	// bl 0x821fc1f0
	ctx.lr = 0x832AD588;
	sub_821FC1F0(ctx, base);
loc_832AD588:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832ad574
	if (!ctx.cr0.lt) goto loc_832AD574;
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

__attribute__((alias("__imp__sub_832AD5A8"))) PPC_WEAK_FUNC(sub_832AD5A8);
PPC_FUNC_IMPL(__imp__sub_832AD5A8) {
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
	// lwz r3,16680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ad608
	if (ctx.cr6.eq) goto loc_832AD608;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD5CC:
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
	// bne 0x832ad5cc
	if (!ctx.cr0.eq) goto loc_832AD5CC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ad600
	if (!ctx.cr6.eq) goto loc_832AD600;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AD600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AD600:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16680, ctx.r11.u32);
loc_832AD608:
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

__attribute__((alias("__imp__sub_832AD61C"))) PPC_WEAK_FUNC(sub_832AD61C);
PPC_FUNC_IMPL(__imp__sub_832AD61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD620"))) PPC_WEAK_FUNC(sub_832AD620);
PPC_FUNC_IMPL(__imp__sub_832AD620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16684
	ctx.r3.s64 = ctx.r11.s64 + 16684;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD62C"))) PPC_WEAK_FUNC(sub_832AD62C);
PPC_FUNC_IMPL(__imp__sub_832AD62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD630"))) PPC_WEAK_FUNC(sub_832AD630);
PPC_FUNC_IMPL(__imp__sub_832AD630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,16688
	ctx.r3.s64 = ctx.r11.s64 + 16688;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD63C"))) PPC_WEAK_FUNC(sub_832AD63C);
PPC_FUNC_IMPL(__imp__sub_832AD63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD640"))) PPC_WEAK_FUNC(sub_832AD640);
PPC_FUNC_IMPL(__imp__sub_832AD640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,16692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD654"))) PPC_WEAK_FUNC(sub_832AD654);
PPC_FUNC_IMPL(__imp__sub_832AD654) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

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
	__savegprlr_24(ctx, base);
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
	__restgprlr_24(ctx, base);
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

