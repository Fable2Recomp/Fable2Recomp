#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8327D458"))) PPC_WEAK_FUNC(sub_8327D458);
PPC_FUNC_IMPL(__imp__sub_8327D458) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19512
	ctx.r4.s64 = ctx.r11.s64 + -19512;
	// addi r3,r10,-7648
	ctx.r3.s64 = ctx.r10.s64 + -7648;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D47C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24880
	ctx.r3.s64 = ctx.r9.s64 + -24880;
	// bl 0x82ca3700
	ctx.lr = 0x8327D488;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D498"))) PPC_WEAK_FUNC(sub_8327D498);
PPC_FUNC_IMPL(__imp__sub_8327D498) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19504
	ctx.r4.s64 = ctx.r11.s64 + -19504;
	// addi r3,r10,-7644
	ctx.r3.s64 = ctx.r10.s64 + -7644;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D4BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24864
	ctx.r3.s64 = ctx.r9.s64 + -24864;
	// bl 0x82ca3700
	ctx.lr = 0x8327D4C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D4D8"))) PPC_WEAK_FUNC(sub_8327D4D8);
PPC_FUNC_IMPL(__imp__sub_8327D4D8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19488
	ctx.r4.s64 = ctx.r11.s64 + -19488;
	// addi r3,r10,-7640
	ctx.r3.s64 = ctx.r10.s64 + -7640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D4FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24848
	ctx.r3.s64 = ctx.r9.s64 + -24848;
	// bl 0x82ca3700
	ctx.lr = 0x8327D508;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D518"))) PPC_WEAK_FUNC(sub_8327D518);
PPC_FUNC_IMPL(__imp__sub_8327D518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-7632
	ctx.r10.s64 = ctx.r11.s64 + -7632;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D52C"))) PPC_WEAK_FUNC(sub_8327D52C);
PPC_FUNC_IMPL(__imp__sub_8327D52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D530"))) PPC_WEAK_FUNC(sub_8327D530);
PPC_FUNC_IMPL(__imp__sub_8327D530) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19740
	ctx.r4.s64 = ctx.r11.s64 + -19740;
	// addi r3,r10,-7616
	ctx.r3.s64 = ctx.r10.s64 + -7616;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D554;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24832
	ctx.r3.s64 = ctx.r9.s64 + -24832;
	// bl 0x82ca3700
	ctx.lr = 0x8327D560;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D570"))) PPC_WEAK_FUNC(sub_8327D570);
PPC_FUNC_IMPL(__imp__sub_8327D570) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19732
	ctx.r4.s64 = ctx.r11.s64 + -19732;
	// addi r3,r10,-7612
	ctx.r3.s64 = ctx.r10.s64 + -7612;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D594;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24816
	ctx.r3.s64 = ctx.r9.s64 + -24816;
	// bl 0x82ca3700
	ctx.lr = 0x8327D5A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D5B0"))) PPC_WEAK_FUNC(sub_8327D5B0);
PPC_FUNC_IMPL(__imp__sub_8327D5B0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19712
	ctx.r4.s64 = ctx.r11.s64 + -19712;
	// addi r3,r10,-7608
	ctx.r3.s64 = ctx.r10.s64 + -7608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D5D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24800
	ctx.r3.s64 = ctx.r9.s64 + -24800;
	// bl 0x82ca3700
	ctx.lr = 0x8327D5E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D5F0"))) PPC_WEAK_FUNC(sub_8327D5F0);
PPC_FUNC_IMPL(__imp__sub_8327D5F0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19692
	ctx.r4.s64 = ctx.r11.s64 + -19692;
	// addi r3,r10,-7604
	ctx.r3.s64 = ctx.r10.s64 + -7604;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D614;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24784
	ctx.r3.s64 = ctx.r9.s64 + -24784;
	// bl 0x82ca3700
	ctx.lr = 0x8327D620;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D630"))) PPC_WEAK_FUNC(sub_8327D630);
PPC_FUNC_IMPL(__imp__sub_8327D630) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19836
	ctx.r4.s64 = ctx.r11.s64 + -19836;
	// addi r3,r10,-7600
	ctx.r3.s64 = ctx.r10.s64 + -7600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D654;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24768
	ctx.r3.s64 = ctx.r9.s64 + -24768;
	// bl 0x82ca3700
	ctx.lr = 0x8327D660;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D670"))) PPC_WEAK_FUNC(sub_8327D670);
PPC_FUNC_IMPL(__imp__sub_8327D670) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19828
	ctx.r4.s64 = ctx.r11.s64 + -19828;
	// addi r3,r10,-7596
	ctx.r3.s64 = ctx.r10.s64 + -7596;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D694;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24752
	ctx.r3.s64 = ctx.r9.s64 + -24752;
	// bl 0x82ca3700
	ctx.lr = 0x8327D6A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D6B0"))) PPC_WEAK_FUNC(sub_8327D6B0);
PPC_FUNC_IMPL(__imp__sub_8327D6B0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19808
	ctx.r4.s64 = ctx.r11.s64 + -19808;
	// addi r3,r10,-7592
	ctx.r3.s64 = ctx.r10.s64 + -7592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D6D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24736
	ctx.r3.s64 = ctx.r9.s64 + -24736;
	// bl 0x82ca3700
	ctx.lr = 0x8327D6E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D6F0"))) PPC_WEAK_FUNC(sub_8327D6F0);
PPC_FUNC_IMPL(__imp__sub_8327D6F0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19788
	ctx.r4.s64 = ctx.r11.s64 + -19788;
	// addi r3,r10,-7588
	ctx.r3.s64 = ctx.r10.s64 + -7588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D714;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24720
	ctx.r3.s64 = ctx.r9.s64 + -24720;
	// bl 0x82ca3700
	ctx.lr = 0x8327D720;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D730"))) PPC_WEAK_FUNC(sub_8327D730);
PPC_FUNC_IMPL(__imp__sub_8327D730) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19752
	ctx.r4.s64 = ctx.r11.s64 + -19752;
	// addi r3,r10,-7584
	ctx.r3.s64 = ctx.r10.s64 + -7584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D754;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24704
	ctx.r3.s64 = ctx.r9.s64 + -24704;
	// bl 0x82ca3700
	ctx.lr = 0x8327D760;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D770"))) PPC_WEAK_FUNC(sub_8327D770);
PPC_FUNC_IMPL(__imp__sub_8327D770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-7568
	ctx.r10.s64 = ctx.r11.s64 + -7568;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D784"))) PPC_WEAK_FUNC(sub_8327D784);
PPC_FUNC_IMPL(__imp__sub_8327D784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D788"))) PPC_WEAK_FUNC(sub_8327D788);
PPC_FUNC_IMPL(__imp__sub_8327D788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-7552
	ctx.r10.s64 = ctx.r11.s64 + -7552;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D79C"))) PPC_WEAK_FUNC(sub_8327D79C);
PPC_FUNC_IMPL(__imp__sub_8327D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D7A0"))) PPC_WEAK_FUNC(sub_8327D7A0);
PPC_FUNC_IMPL(__imp__sub_8327D7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-7536
	ctx.r3.s64 = ctx.r11.s64 + -7536;
	// b 0x8223bd98
	sub_8223BD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D7AC"))) PPC_WEAK_FUNC(sub_8327D7AC);
PPC_FUNC_IMPL(__imp__sub_8327D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D7B0"))) PPC_WEAK_FUNC(sub_8327D7B0);
PPC_FUNC_IMPL(__imp__sub_8327D7B0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19916
	ctx.r4.s64 = ctx.r11.s64 + -19916;
	// addi r3,r10,-7472
	ctx.r3.s64 = ctx.r10.s64 + -7472;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D7D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24336
	ctx.r3.s64 = ctx.r9.s64 + -24336;
	// bl 0x82ca3700
	ctx.lr = 0x8327D7E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D7F0"))) PPC_WEAK_FUNC(sub_8327D7F0);
PPC_FUNC_IMPL(__imp__sub_8327D7F0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19908
	ctx.r4.s64 = ctx.r11.s64 + -19908;
	// addi r3,r10,-7468
	ctx.r3.s64 = ctx.r10.s64 + -7468;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D814;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24320
	ctx.r3.s64 = ctx.r9.s64 + -24320;
	// bl 0x82ca3700
	ctx.lr = 0x8327D820;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D830"))) PPC_WEAK_FUNC(sub_8327D830);
PPC_FUNC_IMPL(__imp__sub_8327D830) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19888
	ctx.r4.s64 = ctx.r11.s64 + -19888;
	// addi r3,r10,-7464
	ctx.r3.s64 = ctx.r10.s64 + -7464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D854;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24304
	ctx.r3.s64 = ctx.r9.s64 + -24304;
	// bl 0x82ca3700
	ctx.lr = 0x8327D860;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D870"))) PPC_WEAK_FUNC(sub_8327D870);
PPC_FUNC_IMPL(__imp__sub_8327D870) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19868
	ctx.r4.s64 = ctx.r11.s64 + -19868;
	// addi r3,r10,-7460
	ctx.r3.s64 = ctx.r10.s64 + -7460;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D894;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-24288
	ctx.r3.s64 = ctx.r9.s64 + -24288;
	// bl 0x82ca3700
	ctx.lr = 0x8327D8A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D8B0"))) PPC_WEAK_FUNC(sub_8327D8B0);
PPC_FUNC_IMPL(__imp__sub_8327D8B0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20040
	ctx.r4.s64 = ctx.r11.s64 + -20040;
	// addi r3,r10,-7456
	ctx.r3.s64 = ctx.r10.s64 + -7456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D8D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23920
	ctx.r3.s64 = ctx.r9.s64 + -23920;
	// bl 0x82ca3700
	ctx.lr = 0x8327D8E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D8F0"))) PPC_WEAK_FUNC(sub_8327D8F0);
PPC_FUNC_IMPL(__imp__sub_8327D8F0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20032
	ctx.r4.s64 = ctx.r11.s64 + -20032;
	// addi r3,r10,-7452
	ctx.r3.s64 = ctx.r10.s64 + -7452;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D914;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23904
	ctx.r3.s64 = ctx.r9.s64 + -23904;
	// bl 0x82ca3700
	ctx.lr = 0x8327D920;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D930"))) PPC_WEAK_FUNC(sub_8327D930);
PPC_FUNC_IMPL(__imp__sub_8327D930) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20012
	ctx.r4.s64 = ctx.r11.s64 + -20012;
	// addi r3,r10,-7448
	ctx.r3.s64 = ctx.r10.s64 + -7448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D954;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23888
	ctx.r3.s64 = ctx.r9.s64 + -23888;
	// bl 0x82ca3700
	ctx.lr = 0x8327D960;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D970"))) PPC_WEAK_FUNC(sub_8327D970);
PPC_FUNC_IMPL(__imp__sub_8327D970) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19992
	ctx.r4.s64 = ctx.r11.s64 + -19992;
	// addi r3,r10,-7444
	ctx.r3.s64 = ctx.r10.s64 + -7444;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D994;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23872
	ctx.r3.s64 = ctx.r9.s64 + -23872;
	// bl 0x82ca3700
	ctx.lr = 0x8327D9A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D9B0"))) PPC_WEAK_FUNC(sub_8327D9B0);
PPC_FUNC_IMPL(__imp__sub_8327D9B0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19948
	ctx.r4.s64 = ctx.r11.s64 + -19948;
	// addi r3,r10,-7440
	ctx.r3.s64 = ctx.r10.s64 + -7440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327D9D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23856
	ctx.r3.s64 = ctx.r9.s64 + -23856;
	// bl 0x82ca3700
	ctx.lr = 0x8327D9E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327D9F0"))) PPC_WEAK_FUNC(sub_8327D9F0);
PPC_FUNC_IMPL(__imp__sub_8327D9F0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-19924
	ctx.r4.s64 = ctx.r11.s64 + -19924;
	// addi r3,r10,-7436
	ctx.r3.s64 = ctx.r10.s64 + -7436;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DA14;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23840
	ctx.r3.s64 = ctx.r9.s64 + -23840;
	// bl 0x82ca3700
	ctx.lr = 0x8327DA20;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA30"))) PPC_WEAK_FUNC(sub_8327DA30);
PPC_FUNC_IMPL(__imp__sub_8327DA30) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-7432
	ctx.r3.s64 = ctx.r11.s64 + -7432;
	// bl 0x8323a270
	ctx.lr = 0x8327DA48;
	sub_8323A270(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-23824
	ctx.r3.s64 = ctx.r10.s64 + -23824;
	// bl 0x82ca3700
	ctx.lr = 0x8327DA54;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DA64"))) PPC_WEAK_FUNC(sub_8327DA64);
PPC_FUNC_IMPL(__imp__sub_8327DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DA68"))) PPC_WEAK_FUNC(sub_8327DA68);
PPC_FUNC_IMPL(__imp__sub_8327DA68) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20208
	ctx.r4.s64 = ctx.r11.s64 + -20208;
	// addi r3,r10,-7416
	ctx.r3.s64 = ctx.r10.s64 + -7416;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DA8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23752
	ctx.r3.s64 = ctx.r9.s64 + -23752;
	// bl 0x82ca3700
	ctx.lr = 0x8327DA98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAA8"))) PPC_WEAK_FUNC(sub_8327DAA8);
PPC_FUNC_IMPL(__imp__sub_8327DAA8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20200
	ctx.r4.s64 = ctx.r11.s64 + -20200;
	// addi r3,r10,-7412
	ctx.r3.s64 = ctx.r10.s64 + -7412;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DACC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23736
	ctx.r3.s64 = ctx.r9.s64 + -23736;
	// bl 0x82ca3700
	ctx.lr = 0x8327DAD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DAE8"))) PPC_WEAK_FUNC(sub_8327DAE8);
PPC_FUNC_IMPL(__imp__sub_8327DAE8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20180
	ctx.r4.s64 = ctx.r11.s64 + -20180;
	// addi r3,r10,-7408
	ctx.r3.s64 = ctx.r10.s64 + -7408;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DB0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23720
	ctx.r3.s64 = ctx.r9.s64 + -23720;
	// bl 0x82ca3700
	ctx.lr = 0x8327DB18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DB28"))) PPC_WEAK_FUNC(sub_8327DB28);
PPC_FUNC_IMPL(__imp__sub_8327DB28) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20160
	ctx.r4.s64 = ctx.r11.s64 + -20160;
	// addi r3,r10,-7404
	ctx.r3.s64 = ctx.r10.s64 + -7404;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DB4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23704
	ctx.r3.s64 = ctx.r9.s64 + -23704;
	// bl 0x82ca3700
	ctx.lr = 0x8327DB58;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DB68"))) PPC_WEAK_FUNC(sub_8327DB68);
PPC_FUNC_IMPL(__imp__sub_8327DB68) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20132
	ctx.r4.s64 = ctx.r11.s64 + -20132;
	// addi r3,r10,-7400
	ctx.r3.s64 = ctx.r10.s64 + -7400;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DB8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23688
	ctx.r3.s64 = ctx.r9.s64 + -23688;
	// bl 0x82ca3700
	ctx.lr = 0x8327DB98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DBA8"))) PPC_WEAK_FUNC(sub_8327DBA8);
PPC_FUNC_IMPL(__imp__sub_8327DBA8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20116
	ctx.r4.s64 = ctx.r11.s64 + -20116;
	// addi r3,r10,-7396
	ctx.r3.s64 = ctx.r10.s64 + -7396;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DBCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23672
	ctx.r3.s64 = ctx.r9.s64 + -23672;
	// bl 0x82ca3700
	ctx.lr = 0x8327DBD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DBE8"))) PPC_WEAK_FUNC(sub_8327DBE8);
PPC_FUNC_IMPL(__imp__sub_8327DBE8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20096
	ctx.r4.s64 = ctx.r11.s64 + -20096;
	// addi r3,r10,-7392
	ctx.r3.s64 = ctx.r10.s64 + -7392;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DC0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23656
	ctx.r3.s64 = ctx.r9.s64 + -23656;
	// bl 0x82ca3700
	ctx.lr = 0x8327DC18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DC28"))) PPC_WEAK_FUNC(sub_8327DC28);
PPC_FUNC_IMPL(__imp__sub_8327DC28) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20088
	ctx.r4.s64 = ctx.r11.s64 + -20088;
	// addi r3,r10,-7388
	ctx.r3.s64 = ctx.r10.s64 + -7388;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DC4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23640
	ctx.r3.s64 = ctx.r9.s64 + -23640;
	// bl 0x82ca3700
	ctx.lr = 0x8327DC58;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DC68"))) PPC_WEAK_FUNC(sub_8327DC68);
PPC_FUNC_IMPL(__imp__sub_8327DC68) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20076
	ctx.r4.s64 = ctx.r11.s64 + -20076;
	// addi r3,r10,-7384
	ctx.r3.s64 = ctx.r10.s64 + -7384;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DC8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23624
	ctx.r3.s64 = ctx.r9.s64 + -23624;
	// bl 0x82ca3700
	ctx.lr = 0x8327DC98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DCA8"))) PPC_WEAK_FUNC(sub_8327DCA8);
PPC_FUNC_IMPL(__imp__sub_8327DCA8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20056
	ctx.r4.s64 = ctx.r11.s64 + -20056;
	// addi r3,r10,-7380
	ctx.r3.s64 = ctx.r10.s64 + -7380;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DCCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23608
	ctx.r3.s64 = ctx.r9.s64 + -23608;
	// bl 0x82ca3700
	ctx.lr = 0x8327DCD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DCE8"))) PPC_WEAK_FUNC(sub_8327DCE8);
PPC_FUNC_IMPL(__imp__sub_8327DCE8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20268
	ctx.r4.s64 = ctx.r11.s64 + -20268;
	// addi r3,r10,-7376
	ctx.r3.s64 = ctx.r10.s64 + -7376;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DD0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23592
	ctx.r3.s64 = ctx.r9.s64 + -23592;
	// bl 0x82ca3700
	ctx.lr = 0x8327DD18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DD28"))) PPC_WEAK_FUNC(sub_8327DD28);
PPC_FUNC_IMPL(__imp__sub_8327DD28) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20248
	ctx.r4.s64 = ctx.r11.s64 + -20248;
	// addi r3,r10,-7372
	ctx.r3.s64 = ctx.r10.s64 + -7372;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DD4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23576
	ctx.r3.s64 = ctx.r9.s64 + -23576;
	// bl 0x82ca3700
	ctx.lr = 0x8327DD58;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DD68"))) PPC_WEAK_FUNC(sub_8327DD68);
PPC_FUNC_IMPL(__imp__sub_8327DD68) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20232
	ctx.r4.s64 = ctx.r11.s64 + -20232;
	// addi r3,r10,-7368
	ctx.r3.s64 = ctx.r10.s64 + -7368;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DD8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23560
	ctx.r3.s64 = ctx.r9.s64 + -23560;
	// bl 0x82ca3700
	ctx.lr = 0x8327DD98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DDA8"))) PPC_WEAK_FUNC(sub_8327DDA8);
PPC_FUNC_IMPL(__imp__sub_8327DDA8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-7364
	ctx.r3.s64 = ctx.r11.s64 + -7364;
	// bl 0x8323a270
	ctx.lr = 0x8327DDC0;
	sub_8323A270(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-23544
	ctx.r3.s64 = ctx.r10.s64 + -23544;
	// bl 0x82ca3700
	ctx.lr = 0x8327DDCC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DDDC"))) PPC_WEAK_FUNC(sub_8327DDDC);
PPC_FUNC_IMPL(__imp__sub_8327DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DDE0"))) PPC_WEAK_FUNC(sub_8327DDE0);
PPC_FUNC_IMPL(__imp__sub_8327DDE0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20328
	ctx.r4.s64 = ctx.r11.s64 + -20328;
	// addi r3,r10,-7348
	ctx.r3.s64 = ctx.r10.s64 + -7348;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DE04;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23472
	ctx.r3.s64 = ctx.r9.s64 + -23472;
	// bl 0x82ca3700
	ctx.lr = 0x8327DE10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DE20"))) PPC_WEAK_FUNC(sub_8327DE20);
PPC_FUNC_IMPL(__imp__sub_8327DE20) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// addi r3,r10,-7344
	ctx.r3.s64 = ctx.r10.s64 + -7344;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DE44;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23456
	ctx.r3.s64 = ctx.r9.s64 + -23456;
	// bl 0x82ca3700
	ctx.lr = 0x8327DE50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DE60"))) PPC_WEAK_FUNC(sub_8327DE60);
PPC_FUNC_IMPL(__imp__sub_8327DE60) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20276
	ctx.r4.s64 = ctx.r11.s64 + -20276;
	// addi r3,r10,-7340
	ctx.r3.s64 = ctx.r10.s64 + -7340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DE84;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23440
	ctx.r3.s64 = ctx.r9.s64 + -23440;
	// bl 0x82ca3700
	ctx.lr = 0x8327DE90;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DEA0"))) PPC_WEAK_FUNC(sub_8327DEA0);
PPC_FUNC_IMPL(__imp__sub_8327DEA0) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// bl 0x8323a270
	ctx.lr = 0x8327DEB8;
	sub_8323A270(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-23424
	ctx.r3.s64 = ctx.r10.s64 + -23424;
	// bl 0x82ca3700
	ctx.lr = 0x8327DEC4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DED4"))) PPC_WEAK_FUNC(sub_8327DED4);
PPC_FUNC_IMPL(__imp__sub_8327DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DED8"))) PPC_WEAK_FUNC(sub_8327DED8);
PPC_FUNC_IMPL(__imp__sub_8327DED8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20468
	ctx.r4.s64 = ctx.r11.s64 + -20468;
	// addi r3,r10,-7320
	ctx.r3.s64 = ctx.r10.s64 + -7320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DEFC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23352
	ctx.r3.s64 = ctx.r9.s64 + -23352;
	// bl 0x82ca3700
	ctx.lr = 0x8327DF08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DF18"))) PPC_WEAK_FUNC(sub_8327DF18);
PPC_FUNC_IMPL(__imp__sub_8327DF18) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20460
	ctx.r4.s64 = ctx.r11.s64 + -20460;
	// addi r3,r10,-7316
	ctx.r3.s64 = ctx.r10.s64 + -7316;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DF3C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23336
	ctx.r3.s64 = ctx.r9.s64 + -23336;
	// bl 0x82ca3700
	ctx.lr = 0x8327DF48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DF58"))) PPC_WEAK_FUNC(sub_8327DF58);
PPC_FUNC_IMPL(__imp__sub_8327DF58) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20440
	ctx.r4.s64 = ctx.r11.s64 + -20440;
	// addi r3,r10,-7312
	ctx.r3.s64 = ctx.r10.s64 + -7312;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DF7C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23320
	ctx.r3.s64 = ctx.r9.s64 + -23320;
	// bl 0x82ca3700
	ctx.lr = 0x8327DF88;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DF98"))) PPC_WEAK_FUNC(sub_8327DF98);
PPC_FUNC_IMPL(__imp__sub_8327DF98) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20420
	ctx.r4.s64 = ctx.r11.s64 + -20420;
	// addi r3,r10,-7308
	ctx.r3.s64 = ctx.r10.s64 + -7308;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327DFBC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23304
	ctx.r3.s64 = ctx.r9.s64 + -23304;
	// bl 0x82ca3700
	ctx.lr = 0x8327DFC8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DFD8"))) PPC_WEAK_FUNC(sub_8327DFD8);
PPC_FUNC_IMPL(__imp__sub_8327DFD8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7308
	ctx.r4.s64 = ctx.r11.s64 + -7308;
	// bl 0x821eea00
	ctx.lr = 0x8327DFF4;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x8327DFFC;
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-7304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7304, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8327E010;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r9,28344
	ctx.r6.s64 = ctx.r9.s64 + 28344;
loc_8327E018:
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
	// bne 0x8327e018
	if (!ctx.cr0.eq) goto loc_8327E018;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-31957
	ctx.r4.s64 = -2094333952;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r4,-23288
	ctx.r3.s64 = ctx.r4.s64 + -23288;
	// bl 0x82ca3700
	ctx.lr = 0x8327E048;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E058"))) PPC_WEAK_FUNC(sub_8327E058);
PPC_FUNC_IMPL(__imp__sub_8327E058) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20396
	ctx.r4.s64 = ctx.r11.s64 + -20396;
	// addi r3,r10,-7300
	ctx.r3.s64 = ctx.r10.s64 + -7300;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E07C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23280
	ctx.r3.s64 = ctx.r9.s64 + -23280;
	// bl 0x82ca3700
	ctx.lr = 0x8327E088;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E098"))) PPC_WEAK_FUNC(sub_8327E098);
PPC_FUNC_IMPL(__imp__sub_8327E098) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20360
	ctx.r4.s64 = ctx.r11.s64 + -20360;
	// addi r3,r10,-7296
	ctx.r3.s64 = ctx.r10.s64 + -7296;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E0BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23264
	ctx.r3.s64 = ctx.r9.s64 + -23264;
	// bl 0x82ca3700
	ctx.lr = 0x8327E0C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E0D8"))) PPC_WEAK_FUNC(sub_8327E0D8);
PPC_FUNC_IMPL(__imp__sub_8327E0D8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20336
	ctx.r4.s64 = ctx.r11.s64 + -20336;
	// addi r3,r10,-7292
	ctx.r3.s64 = ctx.r10.s64 + -7292;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E0FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23248
	ctx.r3.s64 = ctx.r9.s64 + -23248;
	// bl 0x82ca3700
	ctx.lr = 0x8327E108;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E118"))) PPC_WEAK_FUNC(sub_8327E118);
PPC_FUNC_IMPL(__imp__sub_8327E118) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// bl 0x8323a270
	ctx.lr = 0x8327E130;
	sub_8323A270(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-23232
	ctx.r3.s64 = ctx.r10.s64 + -23232;
	// bl 0x82ca3700
	ctx.lr = 0x8327E13C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E14C"))) PPC_WEAK_FUNC(sub_8327E14C);
PPC_FUNC_IMPL(__imp__sub_8327E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E150"))) PPC_WEAK_FUNC(sub_8327E150);
PPC_FUNC_IMPL(__imp__sub_8327E150) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20824
	ctx.r4.s64 = ctx.r11.s64 + -20824;
	// addi r3,r10,-7272
	ctx.r3.s64 = ctx.r10.s64 + -7272;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E174;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23160
	ctx.r3.s64 = ctx.r9.s64 + -23160;
	// bl 0x82ca3700
	ctx.lr = 0x8327E180;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E190"))) PPC_WEAK_FUNC(sub_8327E190);
PPC_FUNC_IMPL(__imp__sub_8327E190) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20816
	ctx.r4.s64 = ctx.r11.s64 + -20816;
	// addi r3,r10,-7268
	ctx.r3.s64 = ctx.r10.s64 + -7268;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E1B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23144
	ctx.r3.s64 = ctx.r9.s64 + -23144;
	// bl 0x82ca3700
	ctx.lr = 0x8327E1C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E1D0"))) PPC_WEAK_FUNC(sub_8327E1D0);
PPC_FUNC_IMPL(__imp__sub_8327E1D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20796
	ctx.r4.s64 = ctx.r11.s64 + -20796;
	// addi r3,r10,-7264
	ctx.r3.s64 = ctx.r10.s64 + -7264;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E1F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23128
	ctx.r3.s64 = ctx.r9.s64 + -23128;
	// bl 0x82ca3700
	ctx.lr = 0x8327E200;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E210"))) PPC_WEAK_FUNC(sub_8327E210);
PPC_FUNC_IMPL(__imp__sub_8327E210) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20776
	ctx.r4.s64 = ctx.r11.s64 + -20776;
	// addi r3,r10,-7260
	ctx.r3.s64 = ctx.r10.s64 + -7260;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E234;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23112
	ctx.r3.s64 = ctx.r9.s64 + -23112;
	// bl 0x82ca3700
	ctx.lr = 0x8327E240;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E250"))) PPC_WEAK_FUNC(sub_8327E250);
PPC_FUNC_IMPL(__imp__sub_8327E250) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20740
	ctx.r4.s64 = ctx.r11.s64 + -20740;
	// addi r3,r10,-7256
	ctx.r3.s64 = ctx.r10.s64 + -7256;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E274;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23096
	ctx.r3.s64 = ctx.r9.s64 + -23096;
	// bl 0x82ca3700
	ctx.lr = 0x8327E280;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E290"))) PPC_WEAK_FUNC(sub_8327E290);
PPC_FUNC_IMPL(__imp__sub_8327E290) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20732
	ctx.r4.s64 = ctx.r11.s64 + -20732;
	// addi r3,r10,-7252
	ctx.r3.s64 = ctx.r10.s64 + -7252;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E2B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23080
	ctx.r3.s64 = ctx.r9.s64 + -23080;
	// bl 0x82ca3700
	ctx.lr = 0x8327E2C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E2D0"))) PPC_WEAK_FUNC(sub_8327E2D0);
PPC_FUNC_IMPL(__imp__sub_8327E2D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20696
	ctx.r4.s64 = ctx.r11.s64 + -20696;
	// addi r3,r10,-7248
	ctx.r3.s64 = ctx.r10.s64 + -7248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E2F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23064
	ctx.r3.s64 = ctx.r9.s64 + -23064;
	// bl 0x82ca3700
	ctx.lr = 0x8327E300;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E310"))) PPC_WEAK_FUNC(sub_8327E310);
PPC_FUNC_IMPL(__imp__sub_8327E310) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20660
	ctx.r4.s64 = ctx.r11.s64 + -20660;
	// addi r3,r10,-7244
	ctx.r3.s64 = ctx.r10.s64 + -7244;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E334;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23048
	ctx.r3.s64 = ctx.r9.s64 + -23048;
	// bl 0x82ca3700
	ctx.lr = 0x8327E340;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E350"))) PPC_WEAK_FUNC(sub_8327E350);
PPC_FUNC_IMPL(__imp__sub_8327E350) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20652
	ctx.r4.s64 = ctx.r11.s64 + -20652;
	// addi r3,r10,-7240
	ctx.r3.s64 = ctx.r10.s64 + -7240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E374;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23032
	ctx.r3.s64 = ctx.r9.s64 + -23032;
	// bl 0x82ca3700
	ctx.lr = 0x8327E380;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E390"))) PPC_WEAK_FUNC(sub_8327E390);
PPC_FUNC_IMPL(__imp__sub_8327E390) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20620
	ctx.r4.s64 = ctx.r11.s64 + -20620;
	// addi r3,r10,-7236
	ctx.r3.s64 = ctx.r10.s64 + -7236;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E3B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23016
	ctx.r3.s64 = ctx.r9.s64 + -23016;
	// bl 0x82ca3700
	ctx.lr = 0x8327E3C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E3D0"))) PPC_WEAK_FUNC(sub_8327E3D0);
PPC_FUNC_IMPL(__imp__sub_8327E3D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20604
	ctx.r4.s64 = ctx.r11.s64 + -20604;
	// addi r3,r10,-7232
	ctx.r3.s64 = ctx.r10.s64 + -7232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E3F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-23000
	ctx.r3.s64 = ctx.r9.s64 + -23000;
	// bl 0x82ca3700
	ctx.lr = 0x8327E400;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E410"))) PPC_WEAK_FUNC(sub_8327E410);
PPC_FUNC_IMPL(__imp__sub_8327E410) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20592
	ctx.r4.s64 = ctx.r11.s64 + -20592;
	// addi r3,r10,-7228
	ctx.r3.s64 = ctx.r10.s64 + -7228;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E434;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22984
	ctx.r3.s64 = ctx.r9.s64 + -22984;
	// bl 0x82ca3700
	ctx.lr = 0x8327E440;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E450"))) PPC_WEAK_FUNC(sub_8327E450);
PPC_FUNC_IMPL(__imp__sub_8327E450) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20580
	ctx.r4.s64 = ctx.r11.s64 + -20580;
	// addi r3,r10,-7224
	ctx.r3.s64 = ctx.r10.s64 + -7224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E474;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22968
	ctx.r3.s64 = ctx.r9.s64 + -22968;
	// bl 0x82ca3700
	ctx.lr = 0x8327E480;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E490"))) PPC_WEAK_FUNC(sub_8327E490);
PPC_FUNC_IMPL(__imp__sub_8327E490) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20572
	ctx.r4.s64 = ctx.r11.s64 + -20572;
	// addi r3,r10,-7220
	ctx.r3.s64 = ctx.r10.s64 + -7220;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E4B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22952
	ctx.r3.s64 = ctx.r9.s64 + -22952;
	// bl 0x82ca3700
	ctx.lr = 0x8327E4C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E4D0"))) PPC_WEAK_FUNC(sub_8327E4D0);
PPC_FUNC_IMPL(__imp__sub_8327E4D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20556
	ctx.r4.s64 = ctx.r11.s64 + -20556;
	// addi r3,r10,-7216
	ctx.r3.s64 = ctx.r10.s64 + -7216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E4F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22936
	ctx.r3.s64 = ctx.r9.s64 + -22936;
	// bl 0x82ca3700
	ctx.lr = 0x8327E500;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E510"))) PPC_WEAK_FUNC(sub_8327E510);
PPC_FUNC_IMPL(__imp__sub_8327E510) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20544
	ctx.r4.s64 = ctx.r11.s64 + -20544;
	// addi r3,r10,-7212
	ctx.r3.s64 = ctx.r10.s64 + -7212;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E534;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22920
	ctx.r3.s64 = ctx.r9.s64 + -22920;
	// bl 0x82ca3700
	ctx.lr = 0x8327E540;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E550"))) PPC_WEAK_FUNC(sub_8327E550);
PPC_FUNC_IMPL(__imp__sub_8327E550) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20536
	ctx.r4.s64 = ctx.r11.s64 + -20536;
	// addi r3,r10,-7208
	ctx.r3.s64 = ctx.r10.s64 + -7208;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E574;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22904
	ctx.r3.s64 = ctx.r9.s64 + -22904;
	// bl 0x82ca3700
	ctx.lr = 0x8327E580;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E590"))) PPC_WEAK_FUNC(sub_8327E590);
PPC_FUNC_IMPL(__imp__sub_8327E590) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20524
	ctx.r4.s64 = ctx.r11.s64 + -20524;
	// addi r3,r10,-7204
	ctx.r3.s64 = ctx.r10.s64 + -7204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E5B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22888
	ctx.r3.s64 = ctx.r9.s64 + -22888;
	// bl 0x82ca3700
	ctx.lr = 0x8327E5C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E5D0"))) PPC_WEAK_FUNC(sub_8327E5D0);
PPC_FUNC_IMPL(__imp__sub_8327E5D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20512
	ctx.r4.s64 = ctx.r11.s64 + -20512;
	// addi r3,r10,-7200
	ctx.r3.s64 = ctx.r10.s64 + -7200;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E5F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22872
	ctx.r3.s64 = ctx.r9.s64 + -22872;
	// bl 0x82ca3700
	ctx.lr = 0x8327E600;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E610"))) PPC_WEAK_FUNC(sub_8327E610);
PPC_FUNC_IMPL(__imp__sub_8327E610) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20900
	ctx.r4.s64 = ctx.r11.s64 + -20900;
	// addi r3,r10,-7196
	ctx.r3.s64 = ctx.r10.s64 + -7196;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E634;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22856
	ctx.r3.s64 = ctx.r9.s64 + -22856;
	// bl 0x82ca3700
	ctx.lr = 0x8327E640;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E650"))) PPC_WEAK_FUNC(sub_8327E650);
PPC_FUNC_IMPL(__imp__sub_8327E650) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20892
	ctx.r4.s64 = ctx.r11.s64 + -20892;
	// addi r3,r10,-7192
	ctx.r3.s64 = ctx.r10.s64 + -7192;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E674;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22840
	ctx.r3.s64 = ctx.r9.s64 + -22840;
	// bl 0x82ca3700
	ctx.lr = 0x8327E680;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E690"))) PPC_WEAK_FUNC(sub_8327E690);
PPC_FUNC_IMPL(__imp__sub_8327E690) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20872
	ctx.r4.s64 = ctx.r11.s64 + -20872;
	// addi r3,r10,-7188
	ctx.r3.s64 = ctx.r10.s64 + -7188;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E6B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22824
	ctx.r3.s64 = ctx.r9.s64 + -22824;
	// bl 0x82ca3700
	ctx.lr = 0x8327E6C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E6D0"))) PPC_WEAK_FUNC(sub_8327E6D0);
PPC_FUNC_IMPL(__imp__sub_8327E6D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20852
	ctx.r4.s64 = ctx.r11.s64 + -20852;
	// addi r3,r10,-7184
	ctx.r3.s64 = ctx.r10.s64 + -7184;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E6F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22808
	ctx.r3.s64 = ctx.r9.s64 + -22808;
	// bl 0x82ca3700
	ctx.lr = 0x8327E700;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E710"))) PPC_WEAK_FUNC(sub_8327E710);
PPC_FUNC_IMPL(__imp__sub_8327E710) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20972
	ctx.r4.s64 = ctx.r11.s64 + -20972;
	// addi r3,r10,-7180
	ctx.r3.s64 = ctx.r10.s64 + -7180;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E734;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22792
	ctx.r3.s64 = ctx.r9.s64 + -22792;
	// bl 0x82ca3700
	ctx.lr = 0x8327E740;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E750"))) PPC_WEAK_FUNC(sub_8327E750);
PPC_FUNC_IMPL(__imp__sub_8327E750) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20964
	ctx.r4.s64 = ctx.r11.s64 + -20964;
	// addi r3,r10,-7176
	ctx.r3.s64 = ctx.r10.s64 + -7176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E774;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22776
	ctx.r3.s64 = ctx.r9.s64 + -22776;
	// bl 0x82ca3700
	ctx.lr = 0x8327E780;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E790"))) PPC_WEAK_FUNC(sub_8327E790);
PPC_FUNC_IMPL(__imp__sub_8327E790) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20944
	ctx.r4.s64 = ctx.r11.s64 + -20944;
	// addi r3,r10,-7172
	ctx.r3.s64 = ctx.r10.s64 + -7172;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E7B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22760
	ctx.r3.s64 = ctx.r9.s64 + -22760;
	// bl 0x82ca3700
	ctx.lr = 0x8327E7C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E7D0"))) PPC_WEAK_FUNC(sub_8327E7D0);
PPC_FUNC_IMPL(__imp__sub_8327E7D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20924
	ctx.r4.s64 = ctx.r11.s64 + -20924;
	// addi r3,r10,-7168
	ctx.r3.s64 = ctx.r10.s64 + -7168;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E7F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22744
	ctx.r3.s64 = ctx.r9.s64 + -22744;
	// bl 0x82ca3700
	ctx.lr = 0x8327E800;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E810"))) PPC_WEAK_FUNC(sub_8327E810);
PPC_FUNC_IMPL(__imp__sub_8327E810) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21056
	ctx.r4.s64 = ctx.r11.s64 + -21056;
	// addi r3,r10,-7164
	ctx.r3.s64 = ctx.r10.s64 + -7164;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E834;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22728
	ctx.r3.s64 = ctx.r9.s64 + -22728;
	// bl 0x82ca3700
	ctx.lr = 0x8327E840;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E850"))) PPC_WEAK_FUNC(sub_8327E850);
PPC_FUNC_IMPL(__imp__sub_8327E850) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21048
	ctx.r4.s64 = ctx.r11.s64 + -21048;
	// addi r3,r10,-7160
	ctx.r3.s64 = ctx.r10.s64 + -7160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E874;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22712
	ctx.r3.s64 = ctx.r9.s64 + -22712;
	// bl 0x82ca3700
	ctx.lr = 0x8327E880;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E890"))) PPC_WEAK_FUNC(sub_8327E890);
PPC_FUNC_IMPL(__imp__sub_8327E890) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21028
	ctx.r4.s64 = ctx.r11.s64 + -21028;
	// addi r3,r10,-7156
	ctx.r3.s64 = ctx.r10.s64 + -7156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E8B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22696
	ctx.r3.s64 = ctx.r9.s64 + -22696;
	// bl 0x82ca3700
	ctx.lr = 0x8327E8C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E8D0"))) PPC_WEAK_FUNC(sub_8327E8D0);
PPC_FUNC_IMPL(__imp__sub_8327E8D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21008
	ctx.r4.s64 = ctx.r11.s64 + -21008;
	// addi r3,r10,-7152
	ctx.r3.s64 = ctx.r10.s64 + -7152;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E8F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22680
	ctx.r3.s64 = ctx.r9.s64 + -22680;
	// bl 0x82ca3700
	ctx.lr = 0x8327E900;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E910"))) PPC_WEAK_FUNC(sub_8327E910);
PPC_FUNC_IMPL(__imp__sub_8327E910) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21140
	ctx.r4.s64 = ctx.r11.s64 + -21140;
	// addi r3,r10,-7148
	ctx.r3.s64 = ctx.r10.s64 + -7148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E934;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22664
	ctx.r3.s64 = ctx.r9.s64 + -22664;
	// bl 0x82ca3700
	ctx.lr = 0x8327E940;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E950"))) PPC_WEAK_FUNC(sub_8327E950);
PPC_FUNC_IMPL(__imp__sub_8327E950) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21132
	ctx.r4.s64 = ctx.r11.s64 + -21132;
	// addi r3,r10,-7144
	ctx.r3.s64 = ctx.r10.s64 + -7144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E974;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22648
	ctx.r3.s64 = ctx.r9.s64 + -22648;
	// bl 0x82ca3700
	ctx.lr = 0x8327E980;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E990"))) PPC_WEAK_FUNC(sub_8327E990);
PPC_FUNC_IMPL(__imp__sub_8327E990) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21112
	ctx.r4.s64 = ctx.r11.s64 + -21112;
	// addi r3,r10,-7140
	ctx.r3.s64 = ctx.r10.s64 + -7140;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E9B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22632
	ctx.r3.s64 = ctx.r9.s64 + -22632;
	// bl 0x82ca3700
	ctx.lr = 0x8327E9C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E9D0"))) PPC_WEAK_FUNC(sub_8327E9D0);
PPC_FUNC_IMPL(__imp__sub_8327E9D0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21092
	ctx.r4.s64 = ctx.r11.s64 + -21092;
	// addi r3,r10,-7136
	ctx.r3.s64 = ctx.r10.s64 + -7136;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327E9F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22616
	ctx.r3.s64 = ctx.r9.s64 + -22616;
	// bl 0x82ca3700
	ctx.lr = 0x8327EA00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EA10"))) PPC_WEAK_FUNC(sub_8327EA10);
PPC_FUNC_IMPL(__imp__sub_8327EA10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21248
	ctx.r4.s64 = ctx.r11.s64 + -21248;
	// addi r3,r10,-7132
	ctx.r3.s64 = ctx.r10.s64 + -7132;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EA34;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22600
	ctx.r3.s64 = ctx.r9.s64 + -22600;
	// bl 0x82ca3700
	ctx.lr = 0x8327EA40;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EA50"))) PPC_WEAK_FUNC(sub_8327EA50);
PPC_FUNC_IMPL(__imp__sub_8327EA50) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21224
	ctx.r4.s64 = ctx.r11.s64 + -21224;
	// addi r3,r10,-7128
	ctx.r3.s64 = ctx.r10.s64 + -7128;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EA74;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22584
	ctx.r3.s64 = ctx.r9.s64 + -22584;
	// bl 0x82ca3700
	ctx.lr = 0x8327EA80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EA90"))) PPC_WEAK_FUNC(sub_8327EA90);
PPC_FUNC_IMPL(__imp__sub_8327EA90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21208
	ctx.r4.s64 = ctx.r11.s64 + -21208;
	// addi r3,r10,-7124
	ctx.r3.s64 = ctx.r10.s64 + -7124;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EAB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22568
	ctx.r3.s64 = ctx.r9.s64 + -22568;
	// bl 0x82ca3700
	ctx.lr = 0x8327EAC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EAD0"))) PPC_WEAK_FUNC(sub_8327EAD0);
PPC_FUNC_IMPL(__imp__sub_8327EAD0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21204
	ctx.r4.s64 = ctx.r11.s64 + -21204;
	// addi r3,r10,-7120
	ctx.r3.s64 = ctx.r10.s64 + -7120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EAF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22552
	ctx.r3.s64 = ctx.r9.s64 + -22552;
	// bl 0x82ca3700
	ctx.lr = 0x8327EB00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EB10"))) PPC_WEAK_FUNC(sub_8327EB10);
PPC_FUNC_IMPL(__imp__sub_8327EB10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21184
	ctx.r4.s64 = ctx.r11.s64 + -21184;
	// addi r3,r10,-7116
	ctx.r3.s64 = ctx.r10.s64 + -7116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EB34;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22536
	ctx.r3.s64 = ctx.r9.s64 + -22536;
	// bl 0x82ca3700
	ctx.lr = 0x8327EB40;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EB50"))) PPC_WEAK_FUNC(sub_8327EB50);
PPC_FUNC_IMPL(__imp__sub_8327EB50) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21168
	ctx.r4.s64 = ctx.r11.s64 + -21168;
	// addi r3,r10,-7112
	ctx.r3.s64 = ctx.r10.s64 + -7112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EB74;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22520
	ctx.r3.s64 = ctx.r9.s64 + -22520;
	// bl 0x82ca3700
	ctx.lr = 0x8327EB80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EB90"))) PPC_WEAK_FUNC(sub_8327EB90);
PPC_FUNC_IMPL(__imp__sub_8327EB90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21748
	ctx.r4.s64 = ctx.r11.s64 + -21748;
	// addi r3,r10,-7108
	ctx.r3.s64 = ctx.r10.s64 + -7108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EBB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22504
	ctx.r3.s64 = ctx.r9.s64 + -22504;
	// bl 0x82ca3700
	ctx.lr = 0x8327EBC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EBD0"))) PPC_WEAK_FUNC(sub_8327EBD0);
PPC_FUNC_IMPL(__imp__sub_8327EBD0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21740
	ctx.r4.s64 = ctx.r11.s64 + -21740;
	// addi r3,r10,-7104
	ctx.r3.s64 = ctx.r10.s64 + -7104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EBF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22488
	ctx.r3.s64 = ctx.r9.s64 + -22488;
	// bl 0x82ca3700
	ctx.lr = 0x8327EC00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EC10"))) PPC_WEAK_FUNC(sub_8327EC10);
PPC_FUNC_IMPL(__imp__sub_8327EC10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21720
	ctx.r4.s64 = ctx.r11.s64 + -21720;
	// addi r3,r10,-7100
	ctx.r3.s64 = ctx.r10.s64 + -7100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EC34;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22472
	ctx.r3.s64 = ctx.r9.s64 + -22472;
	// bl 0x82ca3700
	ctx.lr = 0x8327EC40;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EC50"))) PPC_WEAK_FUNC(sub_8327EC50);
PPC_FUNC_IMPL(__imp__sub_8327EC50) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21700
	ctx.r4.s64 = ctx.r11.s64 + -21700;
	// addi r3,r10,-7096
	ctx.r3.s64 = ctx.r10.s64 + -7096;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EC74;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22456
	ctx.r3.s64 = ctx.r9.s64 + -22456;
	// bl 0x82ca3700
	ctx.lr = 0x8327EC80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EC90"))) PPC_WEAK_FUNC(sub_8327EC90);
PPC_FUNC_IMPL(__imp__sub_8327EC90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21664
	ctx.r4.s64 = ctx.r11.s64 + -21664;
	// addi r3,r10,-7092
	ctx.r3.s64 = ctx.r10.s64 + -7092;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327ECB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22440
	ctx.r3.s64 = ctx.r9.s64 + -22440;
	// bl 0x82ca3700
	ctx.lr = 0x8327ECC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ECD0"))) PPC_WEAK_FUNC(sub_8327ECD0);
PPC_FUNC_IMPL(__imp__sub_8327ECD0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21656
	ctx.r4.s64 = ctx.r11.s64 + -21656;
	// addi r3,r10,-7088
	ctx.r3.s64 = ctx.r10.s64 + -7088;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327ECF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22424
	ctx.r3.s64 = ctx.r9.s64 + -22424;
	// bl 0x82ca3700
	ctx.lr = 0x8327ED00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ED10"))) PPC_WEAK_FUNC(sub_8327ED10);
PPC_FUNC_IMPL(__imp__sub_8327ED10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21624
	ctx.r4.s64 = ctx.r11.s64 + -21624;
	// addi r3,r10,-7084
	ctx.r3.s64 = ctx.r10.s64 + -7084;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327ED34;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22408
	ctx.r3.s64 = ctx.r9.s64 + -22408;
	// bl 0x82ca3700
	ctx.lr = 0x8327ED40;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ED50"))) PPC_WEAK_FUNC(sub_8327ED50);
PPC_FUNC_IMPL(__imp__sub_8327ED50) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21592
	ctx.r4.s64 = ctx.r11.s64 + -21592;
	// addi r3,r10,-7080
	ctx.r3.s64 = ctx.r10.s64 + -7080;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327ED74;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22392
	ctx.r3.s64 = ctx.r9.s64 + -22392;
	// bl 0x82ca3700
	ctx.lr = 0x8327ED80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327ED90"))) PPC_WEAK_FUNC(sub_8327ED90);
PPC_FUNC_IMPL(__imp__sub_8327ED90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21584
	ctx.r4.s64 = ctx.r11.s64 + -21584;
	// addi r3,r10,-7076
	ctx.r3.s64 = ctx.r10.s64 + -7076;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EDB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22376
	ctx.r3.s64 = ctx.r9.s64 + -22376;
	// bl 0x82ca3700
	ctx.lr = 0x8327EDC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EDD0"))) PPC_WEAK_FUNC(sub_8327EDD0);
PPC_FUNC_IMPL(__imp__sub_8327EDD0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21576
	ctx.r4.s64 = ctx.r11.s64 + -21576;
	// addi r3,r10,-7072
	ctx.r3.s64 = ctx.r10.s64 + -7072;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EDF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22360
	ctx.r3.s64 = ctx.r9.s64 + -22360;
	// bl 0x82ca3700
	ctx.lr = 0x8327EE00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EE10"))) PPC_WEAK_FUNC(sub_8327EE10);
PPC_FUNC_IMPL(__imp__sub_8327EE10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21560
	ctx.r4.s64 = ctx.r11.s64 + -21560;
	// addi r3,r10,-7068
	ctx.r3.s64 = ctx.r10.s64 + -7068;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EE34;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22344
	ctx.r3.s64 = ctx.r9.s64 + -22344;
	// bl 0x82ca3700
	ctx.lr = 0x8327EE40;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EE50"))) PPC_WEAK_FUNC(sub_8327EE50);
PPC_FUNC_IMPL(__imp__sub_8327EE50) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21532
	ctx.r4.s64 = ctx.r11.s64 + -21532;
	// addi r3,r10,-7064
	ctx.r3.s64 = ctx.r10.s64 + -7064;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EE74;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22328
	ctx.r3.s64 = ctx.r9.s64 + -22328;
	// bl 0x82ca3700
	ctx.lr = 0x8327EE80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EE90"))) PPC_WEAK_FUNC(sub_8327EE90);
PPC_FUNC_IMPL(__imp__sub_8327EE90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21520
	ctx.r4.s64 = ctx.r11.s64 + -21520;
	// addi r3,r10,-7060
	ctx.r3.s64 = ctx.r10.s64 + -7060;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EEB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22312
	ctx.r3.s64 = ctx.r9.s64 + -22312;
	// bl 0x82ca3700
	ctx.lr = 0x8327EEC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EED0"))) PPC_WEAK_FUNC(sub_8327EED0);
PPC_FUNC_IMPL(__imp__sub_8327EED0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21508
	ctx.r4.s64 = ctx.r11.s64 + -21508;
	// addi r3,r10,-7056
	ctx.r3.s64 = ctx.r10.s64 + -7056;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EEF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22296
	ctx.r3.s64 = ctx.r9.s64 + -22296;
	// bl 0x82ca3700
	ctx.lr = 0x8327EF00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EF10"))) PPC_WEAK_FUNC(sub_8327EF10);
PPC_FUNC_IMPL(__imp__sub_8327EF10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21500
	ctx.r4.s64 = ctx.r11.s64 + -21500;
	// addi r3,r10,-7052
	ctx.r3.s64 = ctx.r10.s64 + -7052;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EF34;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22280
	ctx.r3.s64 = ctx.r9.s64 + -22280;
	// bl 0x82ca3700
	ctx.lr = 0x8327EF40;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EF50"))) PPC_WEAK_FUNC(sub_8327EF50);
PPC_FUNC_IMPL(__imp__sub_8327EF50) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21488
	ctx.r4.s64 = ctx.r11.s64 + -21488;
	// addi r3,r10,-7048
	ctx.r3.s64 = ctx.r10.s64 + -7048;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EF74;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22264
	ctx.r3.s64 = ctx.r9.s64 + -22264;
	// bl 0x82ca3700
	ctx.lr = 0x8327EF80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EF90"))) PPC_WEAK_FUNC(sub_8327EF90);
PPC_FUNC_IMPL(__imp__sub_8327EF90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
	// addi r3,r10,-7044
	ctx.r3.s64 = ctx.r10.s64 + -7044;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327EFB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22248
	ctx.r3.s64 = ctx.r9.s64 + -22248;
	// bl 0x82ca3700
	ctx.lr = 0x8327EFC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EFD0"))) PPC_WEAK_FUNC(sub_8327EFD0);
PPC_FUNC_IMPL(__imp__sub_8327EFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8327EFD8;
	sub_82CA2BE4(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r7,r1,-88
	ctx.r7.s64 = ctx.r1.s64 + -88;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// addi r6,r1,-84
	ctx.r6.s64 = ctx.r1.s64 + -84;
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r1,-64
	ctx.r30.s64 = ctx.r1.s64 + -64;
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r1,-60
	ctx.r29.s64 = ctx.r1.s64 + -60;
	// stfs f0,-88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// addi r9,r1,-72
	ctx.r9.s64 = ctx.r1.s64 + -72;
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-60
	ctx.r7.s64 = ctx.r1.s64 + -60;
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r31,r1,-68
	ctx.r31.s64 = ctx.r1.s64 + -68;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r4,r1,-76
	ctx.r4.s64 = ctx.r1.s64 + -76;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// addi r3,r1,-76
	ctx.r3.s64 = ctx.r1.s64 + -76;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// lvlx v4,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lvlx v3,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r28,32
	ctx.r28.s64 = 32;
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// li r27,48
	ctx.r27.s64 = 48;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvlx v31,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v3,v4,4,3
	_mm_store_ps(ctx.v3.f32, _mm_blend_ps(_mm_load_ps(ctx.v3.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 57), 4));
	// lvlx v30,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f13,-68(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// addi r5,r5,-7040
	ctx.r5.s64 = ctx.r5.s64 + -7040;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// vrlimi128 v12,v3,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v3.f32), 78), 3));
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lvlx v6,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvlx v9,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vrlimi128 v30,v31,4,3
	_mm_store_ps(ctx.v30.f32, _mm_blend_ps(_mm_load_ps(ctx.v30.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 57), 4));
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvlx v8,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vor v13,v30,v30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v30.u8));
	// stvx128 v12,r5,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v0,v9,v9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vrlimi128 v5,v6,4,3
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 57), 4));
	// vrlimi128 v1,v2,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v2.f32), 57), 4));
	// vrlimi128 v0,v7,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vrlimi128 v13,v5,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 78), 3));
	// vrlimi128 v11,v1,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 78), 3));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r5,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8327F108"))) PPC_WEAK_FUNC(sub_8327F108);
PPC_FUNC_IMPL(__imp__sub_8327F108) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21852
	ctx.r4.s64 = ctx.r11.s64 + -21852;
	// addi r3,r10,-6976
	ctx.r3.s64 = ctx.r10.s64 + -6976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F12C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21968
	ctx.r3.s64 = ctx.r9.s64 + -21968;
	// bl 0x82ca3700
	ctx.lr = 0x8327F138;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F148"))) PPC_WEAK_FUNC(sub_8327F148);
PPC_FUNC_IMPL(__imp__sub_8327F148) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21844
	ctx.r4.s64 = ctx.r11.s64 + -21844;
	// addi r3,r10,-6972
	ctx.r3.s64 = ctx.r10.s64 + -6972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F16C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21952
	ctx.r3.s64 = ctx.r9.s64 + -21952;
	// bl 0x82ca3700
	ctx.lr = 0x8327F178;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F188"))) PPC_WEAK_FUNC(sub_8327F188);
PPC_FUNC_IMPL(__imp__sub_8327F188) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-6968
	ctx.r3.s64 = ctx.r10.s64 + -6968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F1AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21936
	ctx.r3.s64 = ctx.r9.s64 + -21936;
	// bl 0x82ca3700
	ctx.lr = 0x8327F1B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F1C8"))) PPC_WEAK_FUNC(sub_8327F1C8);
PPC_FUNC_IMPL(__imp__sub_8327F1C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21804
	ctx.r4.s64 = ctx.r11.s64 + -21804;
	// addi r3,r10,-6964
	ctx.r3.s64 = ctx.r10.s64 + -6964;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F1EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21920
	ctx.r3.s64 = ctx.r9.s64 + -21920;
	// bl 0x82ca3700
	ctx.lr = 0x8327F1F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F208"))) PPC_WEAK_FUNC(sub_8327F208);
PPC_FUNC_IMPL(__imp__sub_8327F208) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21784
	ctx.r4.s64 = ctx.r11.s64 + -21784;
	// addi r3,r10,-6960
	ctx.r3.s64 = ctx.r10.s64 + -6960;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F22C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21904
	ctx.r3.s64 = ctx.r9.s64 + -21904;
	// bl 0x82ca3700
	ctx.lr = 0x8327F238;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F248"))) PPC_WEAK_FUNC(sub_8327F248);
PPC_FUNC_IMPL(__imp__sub_8327F248) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21768
	ctx.r4.s64 = ctx.r11.s64 + -21768;
	// addi r3,r10,-6956
	ctx.r3.s64 = ctx.r10.s64 + -6956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F26C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21888
	ctx.r3.s64 = ctx.r9.s64 + -21888;
	// bl 0x82ca3700
	ctx.lr = 0x8327F278;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F288"))) PPC_WEAK_FUNC(sub_8327F288);
PPC_FUNC_IMPL(__imp__sub_8327F288) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21952
	ctx.r4.s64 = ctx.r11.s64 + -21952;
	// addi r3,r10,-6952
	ctx.r3.s64 = ctx.r10.s64 + -6952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F2AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21872
	ctx.r3.s64 = ctx.r9.s64 + -21872;
	// bl 0x82ca3700
	ctx.lr = 0x8327F2B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F2C8"))) PPC_WEAK_FUNC(sub_8327F2C8);
PPC_FUNC_IMPL(__imp__sub_8327F2C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21944
	ctx.r4.s64 = ctx.r11.s64 + -21944;
	// addi r3,r10,-6948
	ctx.r3.s64 = ctx.r10.s64 + -6948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F2EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21856
	ctx.r3.s64 = ctx.r9.s64 + -21856;
	// bl 0x82ca3700
	ctx.lr = 0x8327F2F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F308"))) PPC_WEAK_FUNC(sub_8327F308);
PPC_FUNC_IMPL(__imp__sub_8327F308) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21924
	ctx.r4.s64 = ctx.r11.s64 + -21924;
	// addi r3,r10,-6944
	ctx.r3.s64 = ctx.r10.s64 + -6944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F32C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21840
	ctx.r3.s64 = ctx.r9.s64 + -21840;
	// bl 0x82ca3700
	ctx.lr = 0x8327F338;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F348"))) PPC_WEAK_FUNC(sub_8327F348);
PPC_FUNC_IMPL(__imp__sub_8327F348) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21904
	ctx.r4.s64 = ctx.r11.s64 + -21904;
	// addi r3,r10,-6940
	ctx.r3.s64 = ctx.r10.s64 + -6940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F36C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21824
	ctx.r3.s64 = ctx.r9.s64 + -21824;
	// bl 0x82ca3700
	ctx.lr = 0x8327F378;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F388"))) PPC_WEAK_FUNC(sub_8327F388);
PPC_FUNC_IMPL(__imp__sub_8327F388) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21884
	ctx.r4.s64 = ctx.r11.s64 + -21884;
	// addi r3,r10,-6936
	ctx.r3.s64 = ctx.r10.s64 + -6936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F3AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21808
	ctx.r3.s64 = ctx.r9.s64 + -21808;
	// bl 0x82ca3700
	ctx.lr = 0x8327F3B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F3C8"))) PPC_WEAK_FUNC(sub_8327F3C8);
PPC_FUNC_IMPL(__imp__sub_8327F3C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21872
	ctx.r4.s64 = ctx.r11.s64 + -21872;
	// addi r3,r10,-6932
	ctx.r3.s64 = ctx.r10.s64 + -6932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F3EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21792
	ctx.r3.s64 = ctx.r9.s64 + -21792;
	// bl 0x82ca3700
	ctx.lr = 0x8327F3F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F408"))) PPC_WEAK_FUNC(sub_8327F408);
PPC_FUNC_IMPL(__imp__sub_8327F408) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22068
	ctx.r4.s64 = ctx.r11.s64 + -22068;
	// addi r3,r10,-6928
	ctx.r3.s64 = ctx.r10.s64 + -6928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F42C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21776
	ctx.r3.s64 = ctx.r9.s64 + -21776;
	// bl 0x82ca3700
	ctx.lr = 0x8327F438;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F448"))) PPC_WEAK_FUNC(sub_8327F448);
PPC_FUNC_IMPL(__imp__sub_8327F448) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22060
	ctx.r4.s64 = ctx.r11.s64 + -22060;
	// addi r3,r10,-6924
	ctx.r3.s64 = ctx.r10.s64 + -6924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F46C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21760
	ctx.r3.s64 = ctx.r9.s64 + -21760;
	// bl 0x82ca3700
	ctx.lr = 0x8327F478;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F488"))) PPC_WEAK_FUNC(sub_8327F488);
PPC_FUNC_IMPL(__imp__sub_8327F488) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22040
	ctx.r4.s64 = ctx.r11.s64 + -22040;
	// addi r3,r10,-6920
	ctx.r3.s64 = ctx.r10.s64 + -6920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F4AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21744
	ctx.r3.s64 = ctx.r9.s64 + -21744;
	// bl 0x82ca3700
	ctx.lr = 0x8327F4B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F4C8"))) PPC_WEAK_FUNC(sub_8327F4C8);
PPC_FUNC_IMPL(__imp__sub_8327F4C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22020
	ctx.r4.s64 = ctx.r11.s64 + -22020;
	// addi r3,r10,-6916
	ctx.r3.s64 = ctx.r10.s64 + -6916;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F4EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21728
	ctx.r3.s64 = ctx.r9.s64 + -21728;
	// bl 0x82ca3700
	ctx.lr = 0x8327F4F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F508"))) PPC_WEAK_FUNC(sub_8327F508);
PPC_FUNC_IMPL(__imp__sub_8327F508) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22000
	ctx.r4.s64 = ctx.r11.s64 + -22000;
	// addi r3,r10,-6912
	ctx.r3.s64 = ctx.r10.s64 + -6912;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F52C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21712
	ctx.r3.s64 = ctx.r9.s64 + -21712;
	// bl 0x82ca3700
	ctx.lr = 0x8327F538;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F548"))) PPC_WEAK_FUNC(sub_8327F548);
PPC_FUNC_IMPL(__imp__sub_8327F548) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21988
	ctx.r4.s64 = ctx.r11.s64 + -21988;
	// addi r3,r10,-6908
	ctx.r3.s64 = ctx.r10.s64 + -6908;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F56C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21696
	ctx.r3.s64 = ctx.r9.s64 + -21696;
	// bl 0x82ca3700
	ctx.lr = 0x8327F578;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F588"))) PPC_WEAK_FUNC(sub_8327F588);
PPC_FUNC_IMPL(__imp__sub_8327F588) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21972
	ctx.r4.s64 = ctx.r11.s64 + -21972;
	// addi r3,r10,-6904
	ctx.r3.s64 = ctx.r10.s64 + -6904;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F5AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21680
	ctx.r3.s64 = ctx.r9.s64 + -21680;
	// bl 0x82ca3700
	ctx.lr = 0x8327F5B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F5C8"))) PPC_WEAK_FUNC(sub_8327F5C8);
PPC_FUNC_IMPL(__imp__sub_8327F5C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22140
	ctx.r4.s64 = ctx.r11.s64 + -22140;
	// addi r3,r10,-6900
	ctx.r3.s64 = ctx.r10.s64 + -6900;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F5EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21664
	ctx.r3.s64 = ctx.r9.s64 + -21664;
	// bl 0x82ca3700
	ctx.lr = 0x8327F5F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F608"))) PPC_WEAK_FUNC(sub_8327F608);
PPC_FUNC_IMPL(__imp__sub_8327F608) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22132
	ctx.r4.s64 = ctx.r11.s64 + -22132;
	// addi r3,r10,-6896
	ctx.r3.s64 = ctx.r10.s64 + -6896;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F62C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21648
	ctx.r3.s64 = ctx.r9.s64 + -21648;
	// bl 0x82ca3700
	ctx.lr = 0x8327F638;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F648"))) PPC_WEAK_FUNC(sub_8327F648);
PPC_FUNC_IMPL(__imp__sub_8327F648) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22112
	ctx.r4.s64 = ctx.r11.s64 + -22112;
	// addi r3,r10,-6892
	ctx.r3.s64 = ctx.r10.s64 + -6892;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F66C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21632
	ctx.r3.s64 = ctx.r9.s64 + -21632;
	// bl 0x82ca3700
	ctx.lr = 0x8327F678;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F688"))) PPC_WEAK_FUNC(sub_8327F688);
PPC_FUNC_IMPL(__imp__sub_8327F688) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22092
	ctx.r4.s64 = ctx.r11.s64 + -22092;
	// addi r3,r10,-6888
	ctx.r3.s64 = ctx.r10.s64 + -6888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F6AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21616
	ctx.r3.s64 = ctx.r9.s64 + -21616;
	// bl 0x82ca3700
	ctx.lr = 0x8327F6B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F6C8"))) PPC_WEAK_FUNC(sub_8327F6C8);
PPC_FUNC_IMPL(__imp__sub_8327F6C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22244
	ctx.r4.s64 = ctx.r11.s64 + -22244;
	// addi r3,r10,-6884
	ctx.r3.s64 = ctx.r10.s64 + -6884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F6EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21600
	ctx.r3.s64 = ctx.r9.s64 + -21600;
	// bl 0x82ca3700
	ctx.lr = 0x8327F6F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F708"))) PPC_WEAK_FUNC(sub_8327F708);
PPC_FUNC_IMPL(__imp__sub_8327F708) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22236
	ctx.r4.s64 = ctx.r11.s64 + -22236;
	// addi r3,r10,-6880
	ctx.r3.s64 = ctx.r10.s64 + -6880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F72C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21584
	ctx.r3.s64 = ctx.r9.s64 + -21584;
	// bl 0x82ca3700
	ctx.lr = 0x8327F738;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F748"))) PPC_WEAK_FUNC(sub_8327F748);
PPC_FUNC_IMPL(__imp__sub_8327F748) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22216
	ctx.r4.s64 = ctx.r11.s64 + -22216;
	// addi r3,r10,-6876
	ctx.r3.s64 = ctx.r10.s64 + -6876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F76C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21568
	ctx.r3.s64 = ctx.r9.s64 + -21568;
	// bl 0x82ca3700
	ctx.lr = 0x8327F778;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F788"))) PPC_WEAK_FUNC(sub_8327F788);
PPC_FUNC_IMPL(__imp__sub_8327F788) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22196
	ctx.r4.s64 = ctx.r11.s64 + -22196;
	// addi r3,r10,-6872
	ctx.r3.s64 = ctx.r10.s64 + -6872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F7AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21552
	ctx.r3.s64 = ctx.r9.s64 + -21552;
	// bl 0x82ca3700
	ctx.lr = 0x8327F7B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F7C8"))) PPC_WEAK_FUNC(sub_8327F7C8);
PPC_FUNC_IMPL(__imp__sub_8327F7C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22176
	ctx.r4.s64 = ctx.r11.s64 + -22176;
	// addi r3,r10,-6868
	ctx.r3.s64 = ctx.r10.s64 + -6868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F7EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21536
	ctx.r3.s64 = ctx.r9.s64 + -21536;
	// bl 0x82ca3700
	ctx.lr = 0x8327F7F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F808"))) PPC_WEAK_FUNC(sub_8327F808);
PPC_FUNC_IMPL(__imp__sub_8327F808) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22296
	ctx.r4.s64 = ctx.r11.s64 + -22296;
	// addi r3,r10,-6864
	ctx.r3.s64 = ctx.r10.s64 + -6864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F82C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21520
	ctx.r3.s64 = ctx.r9.s64 + -21520;
	// bl 0x82ca3700
	ctx.lr = 0x8327F838;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F848"))) PPC_WEAK_FUNC(sub_8327F848);
PPC_FUNC_IMPL(__imp__sub_8327F848) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22288
	ctx.r4.s64 = ctx.r11.s64 + -22288;
	// addi r3,r10,-6860
	ctx.r3.s64 = ctx.r10.s64 + -6860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F86C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21504
	ctx.r3.s64 = ctx.r9.s64 + -21504;
	// bl 0x82ca3700
	ctx.lr = 0x8327F878;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F888"))) PPC_WEAK_FUNC(sub_8327F888);
PPC_FUNC_IMPL(__imp__sub_8327F888) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22268
	ctx.r4.s64 = ctx.r11.s64 + -22268;
	// addi r3,r10,-6856
	ctx.r3.s64 = ctx.r10.s64 + -6856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F8AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21488
	ctx.r3.s64 = ctx.r9.s64 + -21488;
	// bl 0x82ca3700
	ctx.lr = 0x8327F8B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F8C8"))) PPC_WEAK_FUNC(sub_8327F8C8);
PPC_FUNC_IMPL(__imp__sub_8327F8C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22520
	ctx.r4.s64 = ctx.r11.s64 + -22520;
	// addi r3,r10,-6852
	ctx.r3.s64 = ctx.r10.s64 + -6852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F8EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21472
	ctx.r3.s64 = ctx.r9.s64 + -21472;
	// bl 0x82ca3700
	ctx.lr = 0x8327F8F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F908"))) PPC_WEAK_FUNC(sub_8327F908);
PPC_FUNC_IMPL(__imp__sub_8327F908) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22512
	ctx.r4.s64 = ctx.r11.s64 + -22512;
	// addi r3,r10,-6848
	ctx.r3.s64 = ctx.r10.s64 + -6848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F92C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21456
	ctx.r3.s64 = ctx.r9.s64 + -21456;
	// bl 0x82ca3700
	ctx.lr = 0x8327F938;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F948"))) PPC_WEAK_FUNC(sub_8327F948);
PPC_FUNC_IMPL(__imp__sub_8327F948) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22492
	ctx.r4.s64 = ctx.r11.s64 + -22492;
	// addi r3,r10,-6844
	ctx.r3.s64 = ctx.r10.s64 + -6844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327F96C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21440
	ctx.r3.s64 = ctx.r9.s64 + -21440;
	// bl 0x82ca3700
	ctx.lr = 0x8327F978;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F988"))) PPC_WEAK_FUNC(sub_8327F988);
PPC_FUNC_IMPL(__imp__sub_8327F988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8327F990;
	sub_82CA2BE4(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// addi r9,r11,-8700
	ctx.r9.s64 = ctx.r11.s64 + -8700;
	// addi r7,r1,-88
	ctx.r7.s64 = ctx.r1.s64 + -88;
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lfs f12,-8700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8700);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r1,-60
	ctx.r28.s64 = ctx.r1.s64 + -60;
	// stfs f12,-96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f0,-18768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18768);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r6,r1,-84
	ctx.r6.s64 = ctx.r1.s64 + -84;
	// stfs f0,-88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// addi r31,r1,-72
	ctx.r31.s64 = ctx.r1.s64 + -72;
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-60
	ctx.r8.s64 = ctx.r1.s64 + -60;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r30,r1,-68
	ctx.r30.s64 = ctx.r1.s64 + -68;
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// addi r4,r1,-76
	ctx.r4.s64 = ctx.r1.s64 + -76;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lfs f13,-18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18756);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-84
	ctx.r9.s64 = ctx.r1.s64 + -84;
	// lvlx v3,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,-76
	ctx.r3.s64 = ctx.r1.s64 + -76;
	// lvlx v2,0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// li r27,48
	ctx.r27.s64 = 48;
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,16
	ctx.r5.s64 = 16;
	// lvlx v31,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f12,-84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// vrlimi128 v30,v31,4,3
	_mm_store_ps(ctx.v30.f32, _mm_blend_ps(_mm_load_ps(ctx.v30.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 57), 4));
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stfs f0,-68(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lvlx v6,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v30,v30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v30.u8));
	// lvlx v5,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvlx v9,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vor v0,v9,v9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// vrlimi128 v5,v6,4,3
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 57), 4));
	// lvlx v8,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v3,v4,4,3
	_mm_store_ps(ctx.v3.f32, _mm_blend_ps(_mm_load_ps(ctx.v3.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 57), 4));
	// lvlx v7,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v1,v2,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v2.f32), 57), 4));
	// addi r4,r6,-6832
	ctx.r4.s64 = ctx.r6.s64 + -6832;
	// li r6,32
	ctx.r6.s64 = 32;
	// vrlimi128 v0,v7,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vrlimi128 v13,v5,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 78), 3));
	// vrlimi128 v12,v3,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v3.f32), 78), 3));
	// vrlimi128 v11,v1,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r4,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8327FAC4"))) PPC_WEAK_FUNC(sub_8327FAC4);
PPC_FUNC_IMPL(__imp__sub_8327FAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327FAC8"))) PPC_WEAK_FUNC(sub_8327FAC8);
PPC_FUNC_IMPL(__imp__sub_8327FAC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22472
	ctx.r4.s64 = ctx.r11.s64 + -22472;
	// addi r3,r10,-6840
	ctx.r3.s64 = ctx.r10.s64 + -6840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FAEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21424
	ctx.r3.s64 = ctx.r9.s64 + -21424;
	// bl 0x82ca3700
	ctx.lr = 0x8327FAF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FB08"))) PPC_WEAK_FUNC(sub_8327FB08);
PPC_FUNC_IMPL(__imp__sub_8327FB08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22440
	ctx.r4.s64 = ctx.r11.s64 + -22440;
	// addi r3,r10,-6836
	ctx.r3.s64 = ctx.r10.s64 + -6836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FB2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21408
	ctx.r3.s64 = ctx.r9.s64 + -21408;
	// bl 0x82ca3700
	ctx.lr = 0x8327FB38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FB48"))) PPC_WEAK_FUNC(sub_8327FB48);
PPC_FUNC_IMPL(__imp__sub_8327FB48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22424
	ctx.r4.s64 = ctx.r11.s64 + -22424;
	// addi r3,r10,-6768
	ctx.r3.s64 = ctx.r10.s64 + -6768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FB6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21392
	ctx.r3.s64 = ctx.r9.s64 + -21392;
	// bl 0x82ca3700
	ctx.lr = 0x8327FB78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FB88"))) PPC_WEAK_FUNC(sub_8327FB88);
PPC_FUNC_IMPL(__imp__sub_8327FB88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22392
	ctx.r4.s64 = ctx.r11.s64 + -22392;
	// addi r3,r10,-6764
	ctx.r3.s64 = ctx.r10.s64 + -6764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FBAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21376
	ctx.r3.s64 = ctx.r9.s64 + -21376;
	// bl 0x82ca3700
	ctx.lr = 0x8327FBB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FBC8"))) PPC_WEAK_FUNC(sub_8327FBC8);
PPC_FUNC_IMPL(__imp__sub_8327FBC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22364
	ctx.r4.s64 = ctx.r11.s64 + -22364;
	// addi r3,r10,-6760
	ctx.r3.s64 = ctx.r10.s64 + -6760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FBEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21360
	ctx.r3.s64 = ctx.r9.s64 + -21360;
	// bl 0x82ca3700
	ctx.lr = 0x8327FBF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FC08"))) PPC_WEAK_FUNC(sub_8327FC08);
PPC_FUNC_IMPL(__imp__sub_8327FC08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22348
	ctx.r4.s64 = ctx.r11.s64 + -22348;
	// addi r3,r10,-6756
	ctx.r3.s64 = ctx.r10.s64 + -6756;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FC2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21344
	ctx.r3.s64 = ctx.r9.s64 + -21344;
	// bl 0x82ca3700
	ctx.lr = 0x8327FC38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FC48"))) PPC_WEAK_FUNC(sub_8327FC48);
PPC_FUNC_IMPL(__imp__sub_8327FC48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22332
	ctx.r4.s64 = ctx.r11.s64 + -22332;
	// addi r3,r10,-6752
	ctx.r3.s64 = ctx.r10.s64 + -6752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FC6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21328
	ctx.r3.s64 = ctx.r9.s64 + -21328;
	// bl 0x82ca3700
	ctx.lr = 0x8327FC78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FC88"))) PPC_WEAK_FUNC(sub_8327FC88);
PPC_FUNC_IMPL(__imp__sub_8327FC88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22748
	ctx.r4.s64 = ctx.r11.s64 + -22748;
	// addi r3,r10,-6748
	ctx.r3.s64 = ctx.r10.s64 + -6748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FCAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21312
	ctx.r3.s64 = ctx.r9.s64 + -21312;
	// bl 0x82ca3700
	ctx.lr = 0x8327FCB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FCC8"))) PPC_WEAK_FUNC(sub_8327FCC8);
PPC_FUNC_IMPL(__imp__sub_8327FCC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22740
	ctx.r4.s64 = ctx.r11.s64 + -22740;
	// addi r3,r10,-6744
	ctx.r3.s64 = ctx.r10.s64 + -6744;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FCEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21296
	ctx.r3.s64 = ctx.r9.s64 + -21296;
	// bl 0x82ca3700
	ctx.lr = 0x8327FCF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FD08"))) PPC_WEAK_FUNC(sub_8327FD08);
PPC_FUNC_IMPL(__imp__sub_8327FD08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22720
	ctx.r4.s64 = ctx.r11.s64 + -22720;
	// addi r3,r10,-6740
	ctx.r3.s64 = ctx.r10.s64 + -6740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FD2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21280
	ctx.r3.s64 = ctx.r9.s64 + -21280;
	// bl 0x82ca3700
	ctx.lr = 0x8327FD38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FD48"))) PPC_WEAK_FUNC(sub_8327FD48);
PPC_FUNC_IMPL(__imp__sub_8327FD48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22700
	ctx.r4.s64 = ctx.r11.s64 + -22700;
	// addi r3,r10,-6736
	ctx.r3.s64 = ctx.r10.s64 + -6736;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FD6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21264
	ctx.r3.s64 = ctx.r9.s64 + -21264;
	// bl 0x82ca3700
	ctx.lr = 0x8327FD78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FD88"))) PPC_WEAK_FUNC(sub_8327FD88);
PPC_FUNC_IMPL(__imp__sub_8327FD88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22672
	ctx.r4.s64 = ctx.r11.s64 + -22672;
	// addi r3,r10,-6732
	ctx.r3.s64 = ctx.r10.s64 + -6732;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FDAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21248
	ctx.r3.s64 = ctx.r9.s64 + -21248;
	// bl 0x82ca3700
	ctx.lr = 0x8327FDB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FDC8"))) PPC_WEAK_FUNC(sub_8327FDC8);
PPC_FUNC_IMPL(__imp__sub_8327FDC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22656
	ctx.r4.s64 = ctx.r11.s64 + -22656;
	// addi r3,r10,-6728
	ctx.r3.s64 = ctx.r10.s64 + -6728;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FDEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21232
	ctx.r3.s64 = ctx.r9.s64 + -21232;
	// bl 0x82ca3700
	ctx.lr = 0x8327FDF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FE08"))) PPC_WEAK_FUNC(sub_8327FE08);
PPC_FUNC_IMPL(__imp__sub_8327FE08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22636
	ctx.r4.s64 = ctx.r11.s64 + -22636;
	// addi r3,r10,-6724
	ctx.r3.s64 = ctx.r10.s64 + -6724;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FE2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21216
	ctx.r3.s64 = ctx.r9.s64 + -21216;
	// bl 0x82ca3700
	ctx.lr = 0x8327FE38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FE48"))) PPC_WEAK_FUNC(sub_8327FE48);
PPC_FUNC_IMPL(__imp__sub_8327FE48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22612
	ctx.r4.s64 = ctx.r11.s64 + -22612;
	// addi r3,r10,-6720
	ctx.r3.s64 = ctx.r10.s64 + -6720;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FE6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21200
	ctx.r3.s64 = ctx.r9.s64 + -21200;
	// bl 0x82ca3700
	ctx.lr = 0x8327FE78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FE88"))) PPC_WEAK_FUNC(sub_8327FE88);
PPC_FUNC_IMPL(__imp__sub_8327FE88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22592
	ctx.r4.s64 = ctx.r11.s64 + -22592;
	// addi r3,r10,-6716
	ctx.r3.s64 = ctx.r10.s64 + -6716;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FEAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21184
	ctx.r3.s64 = ctx.r9.s64 + -21184;
	// bl 0x82ca3700
	ctx.lr = 0x8327FEB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FEC8"))) PPC_WEAK_FUNC(sub_8327FEC8);
PPC_FUNC_IMPL(__imp__sub_8327FEC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22564
	ctx.r4.s64 = ctx.r11.s64 + -22564;
	// addi r3,r10,-6712
	ctx.r3.s64 = ctx.r10.s64 + -6712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FEEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21168
	ctx.r3.s64 = ctx.r9.s64 + -21168;
	// bl 0x82ca3700
	ctx.lr = 0x8327FEF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FF08"))) PPC_WEAK_FUNC(sub_8327FF08);
PPC_FUNC_IMPL(__imp__sub_8327FF08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22540
	ctx.r4.s64 = ctx.r11.s64 + -22540;
	// addi r3,r10,-6708
	ctx.r3.s64 = ctx.r10.s64 + -6708;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FF2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21152
	ctx.r3.s64 = ctx.r9.s64 + -21152;
	// bl 0x82ca3700
	ctx.lr = 0x8327FF38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FF48"))) PPC_WEAK_FUNC(sub_8327FF48);
PPC_FUNC_IMPL(__imp__sub_8327FF48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23044
	ctx.r4.s64 = ctx.r11.s64 + -23044;
	// addi r3,r10,-6704
	ctx.r3.s64 = ctx.r10.s64 + -6704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FF6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21136
	ctx.r3.s64 = ctx.r9.s64 + -21136;
	// bl 0x82ca3700
	ctx.lr = 0x8327FF78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FF88"))) PPC_WEAK_FUNC(sub_8327FF88);
PPC_FUNC_IMPL(__imp__sub_8327FF88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23036
	ctx.r4.s64 = ctx.r11.s64 + -23036;
	// addi r3,r10,-6700
	ctx.r3.s64 = ctx.r10.s64 + -6700;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FFAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21120
	ctx.r3.s64 = ctx.r9.s64 + -21120;
	// bl 0x82ca3700
	ctx.lr = 0x8327FFB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327FFC8"))) PPC_WEAK_FUNC(sub_8327FFC8);
PPC_FUNC_IMPL(__imp__sub_8327FFC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23016
	ctx.r4.s64 = ctx.r11.s64 + -23016;
	// addi r3,r10,-6696
	ctx.r3.s64 = ctx.r10.s64 + -6696;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8327FFEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21104
	ctx.r3.s64 = ctx.r9.s64 + -21104;
	// bl 0x82ca3700
	ctx.lr = 0x8327FFF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280008"))) PPC_WEAK_FUNC(sub_83280008);
PPC_FUNC_IMPL(__imp__sub_83280008) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// addi r3,r10,-6692
	ctx.r3.s64 = ctx.r10.s64 + -6692;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328002C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21088
	ctx.r3.s64 = ctx.r9.s64 + -21088;
	// bl 0x82ca3700
	ctx.lr = 0x83280038;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280048"))) PPC_WEAK_FUNC(sub_83280048);
PPC_FUNC_IMPL(__imp__sub_83280048) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22944
	ctx.r4.s64 = ctx.r11.s64 + -22944;
	// addi r3,r10,-6688
	ctx.r3.s64 = ctx.r10.s64 + -6688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328006C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21072
	ctx.r3.s64 = ctx.r9.s64 + -21072;
	// bl 0x82ca3700
	ctx.lr = 0x83280078;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280088"))) PPC_WEAK_FUNC(sub_83280088);
PPC_FUNC_IMPL(__imp__sub_83280088) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22892
	ctx.r4.s64 = ctx.r11.s64 + -22892;
	// addi r3,r10,-6684
	ctx.r3.s64 = ctx.r10.s64 + -6684;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832800AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21056
	ctx.r3.s64 = ctx.r9.s64 + -21056;
	// bl 0x82ca3700
	ctx.lr = 0x832800B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832800C8"))) PPC_WEAK_FUNC(sub_832800C8);
PPC_FUNC_IMPL(__imp__sub_832800C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22888
	ctx.r4.s64 = ctx.r11.s64 + -22888;
	// addi r3,r10,-6680
	ctx.r3.s64 = ctx.r10.s64 + -6680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832800EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21040
	ctx.r3.s64 = ctx.r9.s64 + -21040;
	// bl 0x82ca3700
	ctx.lr = 0x832800F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280108"))) PPC_WEAK_FUNC(sub_83280108);
PPC_FUNC_IMPL(__imp__sub_83280108) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22840
	ctx.r4.s64 = ctx.r11.s64 + -22840;
	// addi r3,r10,-6676
	ctx.r3.s64 = ctx.r10.s64 + -6676;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328012C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21024
	ctx.r3.s64 = ctx.r9.s64 + -21024;
	// bl 0x82ca3700
	ctx.lr = 0x83280138;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280148"))) PPC_WEAK_FUNC(sub_83280148);
PPC_FUNC_IMPL(__imp__sub_83280148) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22824
	ctx.r4.s64 = ctx.r11.s64 + -22824;
	// addi r3,r10,-6672
	ctx.r3.s64 = ctx.r10.s64 + -6672;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328016C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21008
	ctx.r3.s64 = ctx.r9.s64 + -21008;
	// bl 0x82ca3700
	ctx.lr = 0x83280178;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280188"))) PPC_WEAK_FUNC(sub_83280188);
PPC_FUNC_IMPL(__imp__sub_83280188) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22812
	ctx.r4.s64 = ctx.r11.s64 + -22812;
	// addi r3,r10,-6668
	ctx.r3.s64 = ctx.r10.s64 + -6668;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832801AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20992
	ctx.r3.s64 = ctx.r9.s64 + -20992;
	// bl 0x82ca3700
	ctx.lr = 0x832801B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832801C8"))) PPC_WEAK_FUNC(sub_832801C8);
PPC_FUNC_IMPL(__imp__sub_832801C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22792
	ctx.r4.s64 = ctx.r11.s64 + -22792;
	// addi r3,r10,-6664
	ctx.r3.s64 = ctx.r10.s64 + -6664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832801EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20976
	ctx.r3.s64 = ctx.r9.s64 + -20976;
	// bl 0x82ca3700
	ctx.lr = 0x832801F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280208"))) PPC_WEAK_FUNC(sub_83280208);
PPC_FUNC_IMPL(__imp__sub_83280208) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22780
	ctx.r4.s64 = ctx.r11.s64 + -22780;
	// addi r3,r10,-6660
	ctx.r3.s64 = ctx.r10.s64 + -6660;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328022C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20960
	ctx.r3.s64 = ctx.r9.s64 + -20960;
	// bl 0x82ca3700
	ctx.lr = 0x83280238;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280248"))) PPC_WEAK_FUNC(sub_83280248);
PPC_FUNC_IMPL(__imp__sub_83280248) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22764
	ctx.r4.s64 = ctx.r11.s64 + -22764;
	// addi r3,r10,-6656
	ctx.r3.s64 = ctx.r10.s64 + -6656;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328026C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20944
	ctx.r3.s64 = ctx.r9.s64 + -20944;
	// bl 0x82ca3700
	ctx.lr = 0x83280278;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280288"))) PPC_WEAK_FUNC(sub_83280288);
PPC_FUNC_IMPL(__imp__sub_83280288) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23452
	ctx.r4.s64 = ctx.r11.s64 + -23452;
	// addi r3,r10,-6652
	ctx.r3.s64 = ctx.r10.s64 + -6652;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832802AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20928
	ctx.r3.s64 = ctx.r9.s64 + -20928;
	// bl 0x82ca3700
	ctx.lr = 0x832802B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832802C8"))) PPC_WEAK_FUNC(sub_832802C8);
PPC_FUNC_IMPL(__imp__sub_832802C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23444
	ctx.r4.s64 = ctx.r11.s64 + -23444;
	// addi r3,r10,-6648
	ctx.r3.s64 = ctx.r10.s64 + -6648;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832802EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20912
	ctx.r3.s64 = ctx.r9.s64 + -20912;
	// bl 0x82ca3700
	ctx.lr = 0x832802F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280308"))) PPC_WEAK_FUNC(sub_83280308);
PPC_FUNC_IMPL(__imp__sub_83280308) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23424
	ctx.r4.s64 = ctx.r11.s64 + -23424;
	// addi r3,r10,-6644
	ctx.r3.s64 = ctx.r10.s64 + -6644;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328032C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20896
	ctx.r3.s64 = ctx.r9.s64 + -20896;
	// bl 0x82ca3700
	ctx.lr = 0x83280338;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280348"))) PPC_WEAK_FUNC(sub_83280348);
PPC_FUNC_IMPL(__imp__sub_83280348) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23404
	ctx.r4.s64 = ctx.r11.s64 + -23404;
	// addi r3,r10,-6640
	ctx.r3.s64 = ctx.r10.s64 + -6640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328036C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20880
	ctx.r3.s64 = ctx.r9.s64 + -20880;
	// bl 0x82ca3700
	ctx.lr = 0x83280378;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280388"))) PPC_WEAK_FUNC(sub_83280388);
PPC_FUNC_IMPL(__imp__sub_83280388) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23380
	ctx.r4.s64 = ctx.r11.s64 + -23380;
	// addi r3,r10,-6636
	ctx.r3.s64 = ctx.r10.s64 + -6636;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832803AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20864
	ctx.r3.s64 = ctx.r9.s64 + -20864;
	// bl 0x82ca3700
	ctx.lr = 0x832803B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832803C8"))) PPC_WEAK_FUNC(sub_832803C8);
PPC_FUNC_IMPL(__imp__sub_832803C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23364
	ctx.r4.s64 = ctx.r11.s64 + -23364;
	// addi r3,r10,-6632
	ctx.r3.s64 = ctx.r10.s64 + -6632;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832803EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20848
	ctx.r3.s64 = ctx.r9.s64 + -20848;
	// bl 0x82ca3700
	ctx.lr = 0x832803F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280408"))) PPC_WEAK_FUNC(sub_83280408);
PPC_FUNC_IMPL(__imp__sub_83280408) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23340
	ctx.r4.s64 = ctx.r11.s64 + -23340;
	// addi r3,r10,-6628
	ctx.r3.s64 = ctx.r10.s64 + -6628;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328042C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20832
	ctx.r3.s64 = ctx.r9.s64 + -20832;
	// bl 0x82ca3700
	ctx.lr = 0x83280438;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280448"))) PPC_WEAK_FUNC(sub_83280448);
PPC_FUNC_IMPL(__imp__sub_83280448) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23320
	ctx.r4.s64 = ctx.r11.s64 + -23320;
	// addi r3,r10,-6624
	ctx.r3.s64 = ctx.r10.s64 + -6624;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328046C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20816
	ctx.r3.s64 = ctx.r9.s64 + -20816;
	// bl 0x82ca3700
	ctx.lr = 0x83280478;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280488"))) PPC_WEAK_FUNC(sub_83280488);
PPC_FUNC_IMPL(__imp__sub_83280488) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23300
	ctx.r4.s64 = ctx.r11.s64 + -23300;
	// addi r3,r10,-6620
	ctx.r3.s64 = ctx.r10.s64 + -6620;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832804AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20800
	ctx.r3.s64 = ctx.r9.s64 + -20800;
	// bl 0x82ca3700
	ctx.lr = 0x832804B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832804C8"))) PPC_WEAK_FUNC(sub_832804C8);
PPC_FUNC_IMPL(__imp__sub_832804C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23284
	ctx.r4.s64 = ctx.r11.s64 + -23284;
	// addi r3,r10,-6616
	ctx.r3.s64 = ctx.r10.s64 + -6616;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832804EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20784
	ctx.r3.s64 = ctx.r9.s64 + -20784;
	// bl 0x82ca3700
	ctx.lr = 0x832804F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280508"))) PPC_WEAK_FUNC(sub_83280508);
PPC_FUNC_IMPL(__imp__sub_83280508) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23264
	ctx.r4.s64 = ctx.r11.s64 + -23264;
	// addi r3,r10,-6612
	ctx.r3.s64 = ctx.r10.s64 + -6612;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328052C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20768
	ctx.r3.s64 = ctx.r9.s64 + -20768;
	// bl 0x82ca3700
	ctx.lr = 0x83280538;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280548"))) PPC_WEAK_FUNC(sub_83280548);
PPC_FUNC_IMPL(__imp__sub_83280548) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23244
	ctx.r4.s64 = ctx.r11.s64 + -23244;
	// addi r3,r10,-6608
	ctx.r3.s64 = ctx.r10.s64 + -6608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328056C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20752
	ctx.r3.s64 = ctx.r9.s64 + -20752;
	// bl 0x82ca3700
	ctx.lr = 0x83280578;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280588"))) PPC_WEAK_FUNC(sub_83280588);
PPC_FUNC_IMPL(__imp__sub_83280588) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23220
	ctx.r4.s64 = ctx.r11.s64 + -23220;
	// addi r3,r10,-6604
	ctx.r3.s64 = ctx.r10.s64 + -6604;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832805AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20736
	ctx.r3.s64 = ctx.r9.s64 + -20736;
	// bl 0x82ca3700
	ctx.lr = 0x832805B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832805C8"))) PPC_WEAK_FUNC(sub_832805C8);
PPC_FUNC_IMPL(__imp__sub_832805C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23200
	ctx.r4.s64 = ctx.r11.s64 + -23200;
	// addi r3,r10,-6600
	ctx.r3.s64 = ctx.r10.s64 + -6600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832805EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20720
	ctx.r3.s64 = ctx.r9.s64 + -20720;
	// bl 0x82ca3700
	ctx.lr = 0x832805F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280608"))) PPC_WEAK_FUNC(sub_83280608);
PPC_FUNC_IMPL(__imp__sub_83280608) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23184
	ctx.r4.s64 = ctx.r11.s64 + -23184;
	// addi r3,r10,-6596
	ctx.r3.s64 = ctx.r10.s64 + -6596;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328062C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20704
	ctx.r3.s64 = ctx.r9.s64 + -20704;
	// bl 0x82ca3700
	ctx.lr = 0x83280638;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280648"))) PPC_WEAK_FUNC(sub_83280648);
PPC_FUNC_IMPL(__imp__sub_83280648) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23528
	ctx.r4.s64 = ctx.r11.s64 + -23528;
	// addi r3,r10,-6592
	ctx.r3.s64 = ctx.r10.s64 + -6592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328066C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20688
	ctx.r3.s64 = ctx.r9.s64 + -20688;
	// bl 0x82ca3700
	ctx.lr = 0x83280678;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280688"))) PPC_WEAK_FUNC(sub_83280688);
PPC_FUNC_IMPL(__imp__sub_83280688) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23512
	ctx.r4.s64 = ctx.r11.s64 + -23512;
	// addi r3,r10,-6588
	ctx.r3.s64 = ctx.r10.s64 + -6588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832806AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20672
	ctx.r3.s64 = ctx.r9.s64 + -20672;
	// bl 0x82ca3700
	ctx.lr = 0x832806B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832806C8"))) PPC_WEAK_FUNC(sub_832806C8);
PPC_FUNC_IMPL(__imp__sub_832806C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23496
	ctx.r4.s64 = ctx.r11.s64 + -23496;
	// addi r3,r10,-6584
	ctx.r3.s64 = ctx.r10.s64 + -6584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832806EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20656
	ctx.r3.s64 = ctx.r9.s64 + -20656;
	// bl 0x82ca3700
	ctx.lr = 0x832806F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280708"))) PPC_WEAK_FUNC(sub_83280708);
PPC_FUNC_IMPL(__imp__sub_83280708) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23492
	ctx.r4.s64 = ctx.r11.s64 + -23492;
	// addi r3,r10,-6580
	ctx.r3.s64 = ctx.r10.s64 + -6580;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328072C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20640
	ctx.r3.s64 = ctx.r9.s64 + -20640;
	// bl 0x82ca3700
	ctx.lr = 0x83280738;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280748"))) PPC_WEAK_FUNC(sub_83280748);
PPC_FUNC_IMPL(__imp__sub_83280748) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23480
	ctx.r4.s64 = ctx.r11.s64 + -23480;
	// addi r3,r10,-6576
	ctx.r3.s64 = ctx.r10.s64 + -6576;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328076C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20624
	ctx.r3.s64 = ctx.r9.s64 + -20624;
	// bl 0x82ca3700
	ctx.lr = 0x83280778;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280788"))) PPC_WEAK_FUNC(sub_83280788);
PPC_FUNC_IMPL(__imp__sub_83280788) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23468
	ctx.r4.s64 = ctx.r11.s64 + -23468;
	// addi r3,r10,-6572
	ctx.r3.s64 = ctx.r10.s64 + -6572;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832807AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20608
	ctx.r3.s64 = ctx.r9.s64 + -20608;
	// bl 0x82ca3700
	ctx.lr = 0x832807B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832807C8"))) PPC_WEAK_FUNC(sub_832807C8);
PPC_FUNC_IMPL(__imp__sub_832807C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23460
	ctx.r4.s64 = ctx.r11.s64 + -23460;
	// addi r3,r10,-6568
	ctx.r3.s64 = ctx.r10.s64 + -6568;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832807EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20592
	ctx.r3.s64 = ctx.r9.s64 + -20592;
	// bl 0x82ca3700
	ctx.lr = 0x832807F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280808"))) PPC_WEAK_FUNC(sub_83280808);
PPC_FUNC_IMPL(__imp__sub_83280808) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23708
	ctx.r4.s64 = ctx.r11.s64 + -23708;
	// addi r3,r10,-6564
	ctx.r3.s64 = ctx.r10.s64 + -6564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328082C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20576
	ctx.r3.s64 = ctx.r9.s64 + -20576;
	// bl 0x82ca3700
	ctx.lr = 0x83280838;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280848"))) PPC_WEAK_FUNC(sub_83280848);
PPC_FUNC_IMPL(__imp__sub_83280848) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23700
	ctx.r4.s64 = ctx.r11.s64 + -23700;
	// addi r3,r10,-6560
	ctx.r3.s64 = ctx.r10.s64 + -6560;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328086C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20560
	ctx.r3.s64 = ctx.r9.s64 + -20560;
	// bl 0x82ca3700
	ctx.lr = 0x83280878;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280888"))) PPC_WEAK_FUNC(sub_83280888);
PPC_FUNC_IMPL(__imp__sub_83280888) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23680
	ctx.r4.s64 = ctx.r11.s64 + -23680;
	// addi r3,r10,-6556
	ctx.r3.s64 = ctx.r10.s64 + -6556;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832808AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20544
	ctx.r3.s64 = ctx.r9.s64 + -20544;
	// bl 0x82ca3700
	ctx.lr = 0x832808B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832808C8"))) PPC_WEAK_FUNC(sub_832808C8);
PPC_FUNC_IMPL(__imp__sub_832808C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23660
	ctx.r4.s64 = ctx.r11.s64 + -23660;
	// addi r3,r10,-6552
	ctx.r3.s64 = ctx.r10.s64 + -6552;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832808EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20528
	ctx.r3.s64 = ctx.r9.s64 + -20528;
	// bl 0x82ca3700
	ctx.lr = 0x832808F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280908"))) PPC_WEAK_FUNC(sub_83280908);
PPC_FUNC_IMPL(__imp__sub_83280908) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23636
	ctx.r4.s64 = ctx.r11.s64 + -23636;
	// addi r3,r10,-6548
	ctx.r3.s64 = ctx.r10.s64 + -6548;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328092C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20512
	ctx.r3.s64 = ctx.r9.s64 + -20512;
	// bl 0x82ca3700
	ctx.lr = 0x83280938;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280948"))) PPC_WEAK_FUNC(sub_83280948);
PPC_FUNC_IMPL(__imp__sub_83280948) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23612
	ctx.r4.s64 = ctx.r11.s64 + -23612;
	// addi r3,r10,-6544
	ctx.r3.s64 = ctx.r10.s64 + -6544;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328096C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20496
	ctx.r3.s64 = ctx.r9.s64 + -20496;
	// bl 0x82ca3700
	ctx.lr = 0x83280978;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280988"))) PPC_WEAK_FUNC(sub_83280988);
PPC_FUNC_IMPL(__imp__sub_83280988) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23864
	ctx.r4.s64 = ctx.r11.s64 + -23864;
	// addi r3,r10,-6540
	ctx.r3.s64 = ctx.r10.s64 + -6540;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832809AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20480
	ctx.r3.s64 = ctx.r9.s64 + -20480;
	// bl 0x82ca3700
	ctx.lr = 0x832809B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832809C8"))) PPC_WEAK_FUNC(sub_832809C8);
PPC_FUNC_IMPL(__imp__sub_832809C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23856
	ctx.r4.s64 = ctx.r11.s64 + -23856;
	// addi r3,r10,-6536
	ctx.r3.s64 = ctx.r10.s64 + -6536;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832809EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20464
	ctx.r3.s64 = ctx.r9.s64 + -20464;
	// bl 0x82ca3700
	ctx.lr = 0x832809F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280A08"))) PPC_WEAK_FUNC(sub_83280A08);
PPC_FUNC_IMPL(__imp__sub_83280A08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23836
	ctx.r4.s64 = ctx.r11.s64 + -23836;
	// addi r3,r10,-6532
	ctx.r3.s64 = ctx.r10.s64 + -6532;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280A2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20448
	ctx.r3.s64 = ctx.r9.s64 + -20448;
	// bl 0x82ca3700
	ctx.lr = 0x83280A38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280A48"))) PPC_WEAK_FUNC(sub_83280A48);
PPC_FUNC_IMPL(__imp__sub_83280A48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23816
	ctx.r4.s64 = ctx.r11.s64 + -23816;
	// addi r3,r10,-6528
	ctx.r3.s64 = ctx.r10.s64 + -6528;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280A6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20432
	ctx.r3.s64 = ctx.r9.s64 + -20432;
	// bl 0x82ca3700
	ctx.lr = 0x83280A78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280A88"))) PPC_WEAK_FUNC(sub_83280A88);
PPC_FUNC_IMPL(__imp__sub_83280A88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// addi r3,r10,-6524
	ctx.r3.s64 = ctx.r10.s64 + -6524;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280AAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20416
	ctx.r3.s64 = ctx.r9.s64 + -20416;
	// bl 0x82ca3700
	ctx.lr = 0x83280AB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280AC8"))) PPC_WEAK_FUNC(sub_83280AC8);
PPC_FUNC_IMPL(__imp__sub_83280AC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23772
	ctx.r4.s64 = ctx.r11.s64 + -23772;
	// addi r3,r10,-6520
	ctx.r3.s64 = ctx.r10.s64 + -6520;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280AEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20400
	ctx.r3.s64 = ctx.r9.s64 + -20400;
	// bl 0x82ca3700
	ctx.lr = 0x83280AF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280B08"))) PPC_WEAK_FUNC(sub_83280B08);
PPC_FUNC_IMPL(__imp__sub_83280B08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23756
	ctx.r4.s64 = ctx.r11.s64 + -23756;
	// addi r3,r10,-6516
	ctx.r3.s64 = ctx.r10.s64 + -6516;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280B2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20384
	ctx.r3.s64 = ctx.r9.s64 + -20384;
	// bl 0x82ca3700
	ctx.lr = 0x83280B38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280B48"))) PPC_WEAK_FUNC(sub_83280B48);
PPC_FUNC_IMPL(__imp__sub_83280B48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23988
	ctx.r4.s64 = ctx.r11.s64 + -23988;
	// addi r3,r10,-6512
	ctx.r3.s64 = ctx.r10.s64 + -6512;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280B6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20368
	ctx.r3.s64 = ctx.r9.s64 + -20368;
	// bl 0x82ca3700
	ctx.lr = 0x83280B78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280B88"))) PPC_WEAK_FUNC(sub_83280B88);
PPC_FUNC_IMPL(__imp__sub_83280B88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23980
	ctx.r4.s64 = ctx.r11.s64 + -23980;
	// addi r3,r10,-6508
	ctx.r3.s64 = ctx.r10.s64 + -6508;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280BAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20352
	ctx.r3.s64 = ctx.r9.s64 + -20352;
	// bl 0x82ca3700
	ctx.lr = 0x83280BB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280BC8"))) PPC_WEAK_FUNC(sub_83280BC8);
PPC_FUNC_IMPL(__imp__sub_83280BC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23960
	ctx.r4.s64 = ctx.r11.s64 + -23960;
	// addi r3,r10,-6504
	ctx.r3.s64 = ctx.r10.s64 + -6504;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280BEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20336
	ctx.r3.s64 = ctx.r9.s64 + -20336;
	// bl 0x82ca3700
	ctx.lr = 0x83280BF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280C08"))) PPC_WEAK_FUNC(sub_83280C08);
PPC_FUNC_IMPL(__imp__sub_83280C08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23940
	ctx.r4.s64 = ctx.r11.s64 + -23940;
	// addi r3,r10,-6500
	ctx.r3.s64 = ctx.r10.s64 + -6500;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280C2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20320
	ctx.r3.s64 = ctx.r9.s64 + -20320;
	// bl 0x82ca3700
	ctx.lr = 0x83280C38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280C48"))) PPC_WEAK_FUNC(sub_83280C48);
PPC_FUNC_IMPL(__imp__sub_83280C48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23916
	ctx.r4.s64 = ctx.r11.s64 + -23916;
	// addi r3,r10,-6496
	ctx.r3.s64 = ctx.r10.s64 + -6496;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280C6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20304
	ctx.r3.s64 = ctx.r9.s64 + -20304;
	// bl 0x82ca3700
	ctx.lr = 0x83280C78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280C88"))) PPC_WEAK_FUNC(sub_83280C88);
PPC_FUNC_IMPL(__imp__sub_83280C88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23892
	ctx.r4.s64 = ctx.r11.s64 + -23892;
	// addi r3,r10,-6492
	ctx.r3.s64 = ctx.r10.s64 + -6492;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280CAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20288
	ctx.r3.s64 = ctx.r9.s64 + -20288;
	// bl 0x82ca3700
	ctx.lr = 0x83280CB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280CC8"))) PPC_WEAK_FUNC(sub_83280CC8);
PPC_FUNC_IMPL(__imp__sub_83280CC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24160
	ctx.r4.s64 = ctx.r11.s64 + -24160;
	// addi r3,r10,-6488
	ctx.r3.s64 = ctx.r10.s64 + -6488;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280CEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20272
	ctx.r3.s64 = ctx.r9.s64 + -20272;
	// bl 0x82ca3700
	ctx.lr = 0x83280CF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280D08"))) PPC_WEAK_FUNC(sub_83280D08);
PPC_FUNC_IMPL(__imp__sub_83280D08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24152
	ctx.r4.s64 = ctx.r11.s64 + -24152;
	// addi r3,r10,-6484
	ctx.r3.s64 = ctx.r10.s64 + -6484;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280D2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20256
	ctx.r3.s64 = ctx.r9.s64 + -20256;
	// bl 0x82ca3700
	ctx.lr = 0x83280D38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280D48"))) PPC_WEAK_FUNC(sub_83280D48);
PPC_FUNC_IMPL(__imp__sub_83280D48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24132
	ctx.r4.s64 = ctx.r11.s64 + -24132;
	// addi r3,r10,-6480
	ctx.r3.s64 = ctx.r10.s64 + -6480;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280D6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20240
	ctx.r3.s64 = ctx.r9.s64 + -20240;
	// bl 0x82ca3700
	ctx.lr = 0x83280D78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280D88"))) PPC_WEAK_FUNC(sub_83280D88);
PPC_FUNC_IMPL(__imp__sub_83280D88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24112
	ctx.r4.s64 = ctx.r11.s64 + -24112;
	// addi r3,r10,-6476
	ctx.r3.s64 = ctx.r10.s64 + -6476;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280DAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20224
	ctx.r3.s64 = ctx.r9.s64 + -20224;
	// bl 0x82ca3700
	ctx.lr = 0x83280DB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280DC8"))) PPC_WEAK_FUNC(sub_83280DC8);
PPC_FUNC_IMPL(__imp__sub_83280DC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// addi r3,r10,-6472
	ctx.r3.s64 = ctx.r10.s64 + -6472;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280DEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20208
	ctx.r3.s64 = ctx.r9.s64 + -20208;
	// bl 0x82ca3700
	ctx.lr = 0x83280DF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280E08"))) PPC_WEAK_FUNC(sub_83280E08);
PPC_FUNC_IMPL(__imp__sub_83280E08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24064
	ctx.r4.s64 = ctx.r11.s64 + -24064;
	// addi r3,r10,-6468
	ctx.r3.s64 = ctx.r10.s64 + -6468;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280E2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20192
	ctx.r3.s64 = ctx.r9.s64 + -20192;
	// bl 0x82ca3700
	ctx.lr = 0x83280E38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280E48"))) PPC_WEAK_FUNC(sub_83280E48);
PPC_FUNC_IMPL(__imp__sub_83280E48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24040
	ctx.r4.s64 = ctx.r11.s64 + -24040;
	// addi r3,r10,-6464
	ctx.r3.s64 = ctx.r10.s64 + -6464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280E6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20176
	ctx.r3.s64 = ctx.r9.s64 + -20176;
	// bl 0x82ca3700
	ctx.lr = 0x83280E78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280E88"))) PPC_WEAK_FUNC(sub_83280E88);
PPC_FUNC_IMPL(__imp__sub_83280E88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24024
	ctx.r4.s64 = ctx.r11.s64 + -24024;
	// addi r3,r10,-6460
	ctx.r3.s64 = ctx.r10.s64 + -6460;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280EAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20160
	ctx.r3.s64 = ctx.r9.s64 + -20160;
	// bl 0x82ca3700
	ctx.lr = 0x83280EB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280EC8"))) PPC_WEAK_FUNC(sub_83280EC8);
PPC_FUNC_IMPL(__imp__sub_83280EC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24292
	ctx.r4.s64 = ctx.r11.s64 + -24292;
	// addi r3,r10,-6456
	ctx.r3.s64 = ctx.r10.s64 + -6456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280EEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20080
	ctx.r3.s64 = ctx.r9.s64 + -20080;
	// bl 0x82ca3700
	ctx.lr = 0x83280EF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280F08"))) PPC_WEAK_FUNC(sub_83280F08);
PPC_FUNC_IMPL(__imp__sub_83280F08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24276
	ctx.r4.s64 = ctx.r11.s64 + -24276;
	// addi r3,r10,-6452
	ctx.r3.s64 = ctx.r10.s64 + -6452;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280F2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20064
	ctx.r3.s64 = ctx.r9.s64 + -20064;
	// bl 0x82ca3700
	ctx.lr = 0x83280F38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280F48"))) PPC_WEAK_FUNC(sub_83280F48);
PPC_FUNC_IMPL(__imp__sub_83280F48) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24260
	ctx.r4.s64 = ctx.r11.s64 + -24260;
	// addi r3,r10,-6448
	ctx.r3.s64 = ctx.r10.s64 + -6448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280F6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20048
	ctx.r3.s64 = ctx.r9.s64 + -20048;
	// bl 0x82ca3700
	ctx.lr = 0x83280F78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280F88"))) PPC_WEAK_FUNC(sub_83280F88);
PPC_FUNC_IMPL(__imp__sub_83280F88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24240
	ctx.r4.s64 = ctx.r11.s64 + -24240;
	// addi r3,r10,-6444
	ctx.r3.s64 = ctx.r10.s64 + -6444;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280FAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20032
	ctx.r3.s64 = ctx.r9.s64 + -20032;
	// bl 0x82ca3700
	ctx.lr = 0x83280FB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280FC8"))) PPC_WEAK_FUNC(sub_83280FC8);
PPC_FUNC_IMPL(__imp__sub_83280FC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24372
	ctx.r4.s64 = ctx.r11.s64 + -24372;
	// addi r3,r10,-6440
	ctx.r3.s64 = ctx.r10.s64 + -6440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83280FEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20016
	ctx.r3.s64 = ctx.r9.s64 + -20016;
	// bl 0x82ca3700
	ctx.lr = 0x83280FF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281008"))) PPC_WEAK_FUNC(sub_83281008);
PPC_FUNC_IMPL(__imp__sub_83281008) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24364
	ctx.r4.s64 = ctx.r11.s64 + -24364;
	// addi r3,r10,-6436
	ctx.r3.s64 = ctx.r10.s64 + -6436;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328102C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20000
	ctx.r3.s64 = ctx.r9.s64 + -20000;
	// bl 0x82ca3700
	ctx.lr = 0x83281038;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281048"))) PPC_WEAK_FUNC(sub_83281048);
PPC_FUNC_IMPL(__imp__sub_83281048) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24344
	ctx.r4.s64 = ctx.r11.s64 + -24344;
	// addi r3,r10,-6432
	ctx.r3.s64 = ctx.r10.s64 + -6432;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328106C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19984
	ctx.r3.s64 = ctx.r9.s64 + -19984;
	// bl 0x82ca3700
	ctx.lr = 0x83281078;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281088"))) PPC_WEAK_FUNC(sub_83281088);
PPC_FUNC_IMPL(__imp__sub_83281088) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24324
	ctx.r4.s64 = ctx.r11.s64 + -24324;
	// addi r3,r10,-6428
	ctx.r3.s64 = ctx.r10.s64 + -6428;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832810AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19968
	ctx.r3.s64 = ctx.r9.s64 + -19968;
	// bl 0x82ca3700
	ctx.lr = 0x832810B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832810C8"))) PPC_WEAK_FUNC(sub_832810C8);
PPC_FUNC_IMPL(__imp__sub_832810C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24580
	ctx.r4.s64 = ctx.r11.s64 + -24580;
	// addi r3,r10,-6424
	ctx.r3.s64 = ctx.r10.s64 + -6424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832810EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19952
	ctx.r3.s64 = ctx.r9.s64 + -19952;
	// bl 0x82ca3700
	ctx.lr = 0x832810F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281108"))) PPC_WEAK_FUNC(sub_83281108);
PPC_FUNC_IMPL(__imp__sub_83281108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-19936
	ctx.r3.s64 = ctx.r11.s64 + -19936;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281114"))) PPC_WEAK_FUNC(sub_83281114);
PPC_FUNC_IMPL(__imp__sub_83281114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281118"))) PPC_WEAK_FUNC(sub_83281118);
PPC_FUNC_IMPL(__imp__sub_83281118) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x8328112C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328113c
	if (ctx.cr6.eq) goto loc_8328113C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8328113C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83281148
	if (ctx.cr0.eq) goto loc_83281148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83281148:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-6412
	ctx.r8.s64 = ctx.r9.s64 + -6412;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-19920
	ctx.r3.s64 = ctx.r7.s64 + -19920;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83281168;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281178"))) PPC_WEAK_FUNC(sub_83281178);
PPC_FUNC_IMPL(__imp__sub_83281178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281184"))) PPC_WEAK_FUNC(sub_83281184);
PPC_FUNC_IMPL(__imp__sub_83281184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281188"))) PPC_WEAK_FUNC(sub_83281188);
PPC_FUNC_IMPL(__imp__sub_83281188) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,-6384
	ctx.r3.s64 = ctx.r10.s64 + -6384;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832811AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19696
	ctx.r3.s64 = ctx.r9.s64 + -19696;
	// bl 0x82ca3700
	ctx.lr = 0x832811B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832811C8"))) PPC_WEAK_FUNC(sub_832811C8);
PPC_FUNC_IMPL(__imp__sub_832811C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,-6380
	ctx.r3.s64 = ctx.r10.s64 + -6380;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832811EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19680
	ctx.r3.s64 = ctx.r9.s64 + -19680;
	// bl 0x82ca3700
	ctx.lr = 0x832811F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281208"))) PPC_WEAK_FUNC(sub_83281208);
PPC_FUNC_IMPL(__imp__sub_83281208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281214"))) PPC_WEAK_FUNC(sub_83281214);
PPC_FUNC_IMPL(__imp__sub_83281214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281218"))) PPC_WEAK_FUNC(sub_83281218);
PPC_FUNC_IMPL(__imp__sub_83281218) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-6372
	ctx.r3.s64 = ctx.r11.s64 + -6372;
	// bl 0x823b0a18
	ctx.lr = 0x83281230;
	sub_823B0A18(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-19608
	ctx.r3.s64 = ctx.r10.s64 + -19608;
	// bl 0x82ca3700
	ctx.lr = 0x8328123C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

