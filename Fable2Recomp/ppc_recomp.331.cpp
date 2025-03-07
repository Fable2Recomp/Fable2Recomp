#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8329EDFC"))) PPC_WEAK_FUNC(sub_8329EDFC);
PPC_FUNC_IMPL(__imp__sub_8329EDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EE00"))) PPC_WEAK_FUNC(sub_8329EE00);
PPC_FUNC_IMPL(__imp__sub_8329EE00) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26260
	ctx.r3.s64 = ctx.r11.s64 + -26260;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EE18;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8344
	ctx.r3.s64 = ctx.r11.s64 + 8344;
	// bl 0x82ca3700
	ctx.lr = 0x8329EE24;
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

__attribute__((alias("__imp__sub_8329EE34"))) PPC_WEAK_FUNC(sub_8329EE34);
PPC_FUNC_IMPL(__imp__sub_8329EE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EE38"))) PPC_WEAK_FUNC(sub_8329EE38);
PPC_FUNC_IMPL(__imp__sub_8329EE38) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26224
	ctx.r3.s64 = ctx.r11.s64 + -26224;
	// bl 0x82fff4b8
	ctx.lr = 0x8329EE50;
	sub_82FFF4B8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8384
	ctx.r3.s64 = ctx.r11.s64 + 8384;
	// bl 0x82ca3700
	ctx.lr = 0x8329EE5C;
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

__attribute__((alias("__imp__sub_8329EE6C"))) PPC_WEAK_FUNC(sub_8329EE6C);
PPC_FUNC_IMPL(__imp__sub_8329EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EE70"))) PPC_WEAK_FUNC(sub_8329EE70);
PPC_FUNC_IMPL(__imp__sub_8329EE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r10,-20244
	ctx.r5.s64 = ctx.r10.s64 + -20244;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r11,-30948
	ctx.r8.s64 = ctx.r11.s64 + -30948;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-30900
	ctx.r4.s64 = ctx.r10.s64 + -30900;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-21324
	ctx.r3.s64 = ctx.r10.s64 + -21324;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329EED0;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EEE0"))) PPC_WEAK_FUNC(sub_8329EEE0);
PPC_FUNC_IMPL(__imp__sub_8329EEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-30728
	ctx.r7.s64 = ctx.r11.s64 + -30728;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21276
	ctx.r3.s64 = ctx.r10.s64 + -21276;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329EF3C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EF4C"))) PPC_WEAK_FUNC(sub_8329EF4C);
PPC_FUNC_IMPL(__imp__sub_8329EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EF50"))) PPC_WEAK_FUNC(sub_8329EF50);
PPC_FUNC_IMPL(__imp__sub_8329EF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-30560
	ctx.r7.s64 = ctx.r11.s64 + -30560;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21228
	ctx.r3.s64 = ctx.r10.s64 + -21228;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329EFAC;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EFBC"))) PPC_WEAK_FUNC(sub_8329EFBC);
PPC_FUNC_IMPL(__imp__sub_8329EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EFC0"))) PPC_WEAK_FUNC(sub_8329EFC0);
PPC_FUNC_IMPL(__imp__sub_8329EFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,5376
	ctx.r11.s64 = ctx.r11.s64 + 5376;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,5360(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5360);
	// addi r8,r8,19456
	ctx.r8.s64 = ctx.r8.s64 + 19456;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r7,r7,19444
	ctx.r7.s64 = ctx.r7.s64 + 19444;
	// addi r6,r6,17924
	ctx.r6.s64 = ctx.r6.s64 + 17924;
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// addi r5,r5,19436
	ctx.r5.s64 = ctx.r5.s64 + 19436;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stb r9,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r9.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r9,109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 109, ctx.r9.u8);
	// li r9,13
	ctx.r9.s64 = 13;
	// sth r10,110(r11)
	PPC_STORE_U16(ctx.r11.u32 + 110, ctx.r10.u16);
	// sth r10,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r10.u16);
	// sth r9,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r9.u16);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stb r9,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r9.u8);
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r10,133(r11)
	PPC_STORE_U8(ctx.r11.u32 + 133, ctx.r10.u8);
	// sth r10,134(r11)
	PPC_STORE_U16(ctx.r11.u32 + 134, ctx.r10.u16);
	// sth r10,136(r11)
	PPC_STORE_U16(ctx.r11.u32 + 136, ctx.r10.u16);
	// sth r9,138(r11)
	PPC_STORE_U16(ctx.r11.u32 + 138, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r6,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r6.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stb r9,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r9.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r10,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// sth r10,158(r11)
	PPC_STORE_U16(ctx.r11.u32 + 158, ctx.r10.u16);
	// sth r10,160(r11)
	PPC_STORE_U16(ctx.r11.u32 + 160, ctx.r10.u16);
	// sth r9,162(r11)
	PPC_STORE_U16(ctx.r11.u32 + 162, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r5,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r5.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stb r9,180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 180, ctx.r9.u8);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r10,181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 181, ctx.r10.u8);
	// sth r10,182(r11)
	PPC_STORE_U16(ctx.r11.u32 + 182, ctx.r10.u16);
	// sth r10,184(r11)
	PPC_STORE_U16(ctx.r11.u32 + 184, ctx.r10.u16);
	// sth r9,186(r11)
	PPC_STORE_U16(ctx.r11.u32 + 186, ctx.r9.u16);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F0B4"))) PPC_WEAK_FUNC(sub_8329F0B4);
PPC_FUNC_IMPL(__imp__sub_8329F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F0B8"))) PPC_WEAK_FUNC(sub_8329F0B8);
PPC_FUNC_IMPL(__imp__sub_8329F0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r9,r10,-30024
	ctx.r9.s64 = ctx.r10.s64 + -30024;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,5376
	ctx.r8.s64 = ctx.r11.s64 + 5376;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r4,r10,19420
	ctx.r4.s64 = ctx.r10.s64 + 19420;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r3,r10,-21180
	ctx.r3.s64 = ctx.r10.s64 + -21180;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F118;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F128"))) PPC_WEAK_FUNC(sub_8329F128);
PPC_FUNC_IMPL(__imp__sub_8329F128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29964
	ctx.r7.s64 = ctx.r11.s64 + -29964;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18284
	ctx.r4.s64 = ctx.r10.s64 + 18284;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21132
	ctx.r3.s64 = ctx.r10.s64 + -21132;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F184;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F194"))) PPC_WEAK_FUNC(sub_8329F194);
PPC_FUNC_IMPL(__imp__sub_8329F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F198"))) PPC_WEAK_FUNC(sub_8329F198);
PPC_FUNC_IMPL(__imp__sub_8329F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29916
	ctx.r7.s64 = ctx.r11.s64 + -29916;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18300
	ctx.r4.s64 = ctx.r10.s64 + 18300;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21084
	ctx.r3.s64 = ctx.r10.s64 + -21084;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F1F4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F204"))) PPC_WEAK_FUNC(sub_8329F204);
PPC_FUNC_IMPL(__imp__sub_8329F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F208"))) PPC_WEAK_FUNC(sub_8329F208);
PPC_FUNC_IMPL(__imp__sub_8329F208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29848
	ctx.r7.s64 = ctx.r11.s64 + -29848;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21036
	ctx.r3.s64 = ctx.r10.s64 + -21036;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F264;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F274"))) PPC_WEAK_FUNC(sub_8329F274);
PPC_FUNC_IMPL(__imp__sub_8329F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F278"))) PPC_WEAK_FUNC(sub_8329F278);
PPC_FUNC_IMPL(__imp__sub_8329F278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29608
	ctx.r7.s64 = ctx.r11.s64 + -29608;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20988
	ctx.r3.s64 = ctx.r10.s64 + -20988;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F2D4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F2E4"))) PPC_WEAK_FUNC(sub_8329F2E4);
PPC_FUNC_IMPL(__imp__sub_8329F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F2E8"))) PPC_WEAK_FUNC(sub_8329F2E8);
PPC_FUNC_IMPL(__imp__sub_8329F2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,5584
	ctx.r11.s64 = ctx.r11.s64 + 5584;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,5568(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5568);
	// addi r8,r8,19456
	ctx.r8.s64 = ctx.r8.s64 + 19456;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r7,r7,19444
	ctx.r7.s64 = ctx.r7.s64 + 19444;
	// addi r6,r6,17924
	ctx.r6.s64 = ctx.r6.s64 + 17924;
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// addi r5,r5,19436
	ctx.r5.s64 = ctx.r5.s64 + 19436;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r4,r4,-29868
	ctx.r4.s64 = ctx.r4.s64 + -29868;
	// stb r9,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r9.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r9,109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 109, ctx.r9.u8);
	// li r9,13
	ctx.r9.s64 = 13;
	// sth r10,110(r11)
	PPC_STORE_U16(ctx.r11.u32 + 110, ctx.r10.u16);
	// sth r10,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r10.u16);
	// sth r9,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r9.u16);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stb r9,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r9.u8);
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r10,133(r11)
	PPC_STORE_U8(ctx.r11.u32 + 133, ctx.r10.u8);
	// sth r10,134(r11)
	PPC_STORE_U16(ctx.r11.u32 + 134, ctx.r10.u16);
	// sth r10,136(r11)
	PPC_STORE_U16(ctx.r11.u32 + 136, ctx.r10.u16);
	// sth r9,138(r11)
	PPC_STORE_U16(ctx.r11.u32 + 138, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r6,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r6.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stb r9,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r9.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r10,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// sth r10,158(r11)
	PPC_STORE_U16(ctx.r11.u32 + 158, ctx.r10.u16);
	// sth r10,160(r11)
	PPC_STORE_U16(ctx.r11.u32 + 160, ctx.r10.u16);
	// sth r9,162(r11)
	PPC_STORE_U16(ctx.r11.u32 + 162, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r5,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r5.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stb r9,180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 180, ctx.r9.u8);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r10,181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 181, ctx.r10.u8);
	// sth r10,182(r11)
	PPC_STORE_U16(ctx.r11.u32 + 182, ctx.r10.u16);
	// sth r10,184(r11)
	PPC_STORE_U16(ctx.r11.u32 + 184, ctx.r10.u16);
	// sth r9,186(r11)
	PPC_STORE_U16(ctx.r11.u32 + 186, ctx.r9.u16);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// stw r4,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r4.u32);
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// stb r9,204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 204, ctx.r9.u8);
	// stb r10,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// sth r10,206(r11)
	PPC_STORE_U16(ctx.r11.u32 + 206, ctx.r10.u16);
	// sth r10,208(r11)
	PPC_STORE_U16(ctx.r11.u32 + 208, ctx.r10.u16);
	// sth r9,210(r11)
	PPC_STORE_U16(ctx.r11.u32 + 210, ctx.r9.u16);
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F40C"))) PPC_WEAK_FUNC(sub_8329F40C);
PPC_FUNC_IMPL(__imp__sub_8329F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F410"))) PPC_WEAK_FUNC(sub_8329F410);
PPC_FUNC_IMPL(__imp__sub_8329F410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r9,r10,-29000
	ctx.r9.s64 = ctx.r10.s64 + -29000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,5584
	ctx.r8.s64 = ctx.r11.s64 + 5584;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r4,r10,19420
	ctx.r4.s64 = ctx.r10.s64 + 19420;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r10,-20940
	ctx.r3.s64 = ctx.r10.s64 + -20940;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F470;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F480"))) PPC_WEAK_FUNC(sub_8329F480);
PPC_FUNC_IMPL(__imp__sub_8329F480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-28940
	ctx.r7.s64 = ctx.r11.s64 + -28940;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18284
	ctx.r4.s64 = ctx.r10.s64 + 18284;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20892
	ctx.r3.s64 = ctx.r10.s64 + -20892;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F4DC;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F4EC"))) PPC_WEAK_FUNC(sub_8329F4EC);
PPC_FUNC_IMPL(__imp__sub_8329F4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F4F0"))) PPC_WEAK_FUNC(sub_8329F4F0);
PPC_FUNC_IMPL(__imp__sub_8329F4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-28888
	ctx.r7.s64 = ctx.r11.s64 + -28888;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,18300
	ctx.r4.s64 = ctx.r10.s64 + 18300;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20844
	ctx.r3.s64 = ctx.r10.s64 + -20844;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F54C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F55C"))) PPC_WEAK_FUNC(sub_8329F55C);
PPC_FUNC_IMPL(__imp__sub_8329F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F560"))) PPC_WEAK_FUNC(sub_8329F560);
PPC_FUNC_IMPL(__imp__sub_8329F560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F57C"))) PPC_WEAK_FUNC(sub_8329F57C);
PPC_FUNC_IMPL(__imp__sub_8329F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F580"))) PPC_WEAK_FUNC(sub_8329F580);
PPC_FUNC_IMPL(__imp__sub_8329F580) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-20792
	ctx.r31.s64 = ctx.r11.s64 + -20792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b259c
	ctx.lr = 0x8329F5A4;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,8424
	ctx.r3.s64 = ctx.r10.s64 + 8424;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bl 0x82ca3700
	ctx.lr = 0x8329F5B8;
	sub_82CA3700(ctx, base);
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

__attribute__((alias("__imp__sub_8329F5CC"))) PPC_WEAK_FUNC(sub_8329F5CC);
PPC_FUNC_IMPL(__imp__sub_8329F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F5D0"))) PPC_WEAK_FUNC(sub_8329F5D0);
PPC_FUNC_IMPL(__imp__sub_8329F5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-28776
	ctx.r7.s64 = ctx.r11.s64 + -28776;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-28584
	ctx.r4.s64 = ctx.r10.s64 + -28584;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20732
	ctx.r3.s64 = ctx.r10.s64 + -20732;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F62C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F63C"))) PPC_WEAK_FUNC(sub_8329F63C);
PPC_FUNC_IMPL(__imp__sub_8329F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F640"))) PPC_WEAK_FUNC(sub_8329F640);
PPC_FUNC_IMPL(__imp__sub_8329F640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-28728
	ctx.r7.s64 = ctx.r11.s64 + -28728;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,-28576
	ctx.r4.s64 = ctx.r10.s64 + -28576;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20684
	ctx.r3.s64 = ctx.r10.s64 + -20684;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F69C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F6AC"))) PPC_WEAK_FUNC(sub_8329F6AC);
PPC_FUNC_IMPL(__imp__sub_8329F6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F6B0"))) PPC_WEAK_FUNC(sub_8329F6B0);
PPC_FUNC_IMPL(__imp__sub_8329F6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r9,r10,-28368
	ctx.r9.s64 = ctx.r10.s64 + -28368;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r11,-28328
	ctx.r8.s64 = ctx.r11.s64 + -28328;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r10,-28256
	ctx.r4.s64 = ctx.r10.s64 + -28256;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r10,-20636
	ctx.r3.s64 = ctx.r10.s64 + -20636;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F710;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F720"))) PPC_WEAK_FUNC(sub_8329F720);
PPC_FUNC_IMPL(__imp__sub_8329F720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-28096
	ctx.r7.s64 = ctx.r11.s64 + -28096;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,-27880
	ctx.r4.s64 = ctx.r10.s64 + -27880;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20588
	ctx.r3.s64 = ctx.r10.s64 + -20588;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,176
	ctx.r6.s64 = 176;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F77C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F78C"))) PPC_WEAK_FUNC(sub_8329F78C);
PPC_FUNC_IMPL(__imp__sub_8329F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F790"))) PPC_WEAK_FUNC(sub_8329F790);
PPC_FUNC_IMPL(__imp__sub_8329F790) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,6012
	ctx.r11.s64 = ctx.r11.s64 + 6012;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F7AC"))) PPC_WEAK_FUNC(sub_8329F7AC);
PPC_FUNC_IMPL(__imp__sub_8329F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F7B0"))) PPC_WEAK_FUNC(sub_8329F7B0);
PPC_FUNC_IMPL(__imp__sub_8329F7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-27596
	ctx.r7.s64 = ctx.r11.s64 + -27596;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-27480
	ctx.r4.s64 = ctx.r10.s64 + -27480;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20532
	ctx.r3.s64 = ctx.r10.s64 + -20532;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F80C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F81C"))) PPC_WEAK_FUNC(sub_8329F81C);
PPC_FUNC_IMPL(__imp__sub_8329F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F820"))) PPC_WEAK_FUNC(sub_8329F820);
PPC_FUNC_IMPL(__imp__sub_8329F820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-27548
	ctx.r7.s64 = ctx.r11.s64 + -27548;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-27444
	ctx.r4.s64 = ctx.r10.s64 + -27444;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20484
	ctx.r3.s64 = ctx.r10.s64 + -20484;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F87C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F88C"))) PPC_WEAK_FUNC(sub_8329F88C);
PPC_FUNC_IMPL(__imp__sub_8329F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F890"))) PPC_WEAK_FUNC(sub_8329F890);
PPC_FUNC_IMPL(__imp__sub_8329F890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,6080
	ctx.r10.s64 = ctx.r10.s64 + 6080;
	// lwz r11,6024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F8A8"))) PPC_WEAK_FUNC(sub_8329F8A8);
PPC_FUNC_IMPL(__imp__sub_8329F8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r9,r10,-27500
	ctx.r9.s64 = ctx.r10.s64 + -27500;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r11,6080
	ctx.r8.s64 = ctx.r11.s64 + 6080;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r4,r10,-27416
	ctx.r4.s64 = ctx.r10.s64 + -27416;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r3,r10,-20436
	ctx.r3.s64 = ctx.r10.s64 + -20436;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F908;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F918"))) PPC_WEAK_FUNC(sub_8329F918);
PPC_FUNC_IMPL(__imp__sub_8329F918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26664
	ctx.r7.s64 = ctx.r11.s64 + -26664;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-26616
	ctx.r4.s64 = ctx.r10.s64 + -26616;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20388
	ctx.r3.s64 = ctx.r10.s64 + -20388;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F974;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F984"))) PPC_WEAK_FUNC(sub_8329F984);
PPC_FUNC_IMPL(__imp__sub_8329F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F988"))) PPC_WEAK_FUNC(sub_8329F988);
PPC_FUNC_IMPL(__imp__sub_8329F988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26488
	ctx.r7.s64 = ctx.r11.s64 + -26488;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-26296
	ctx.r4.s64 = ctx.r10.s64 + -26296;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20340
	ctx.r3.s64 = ctx.r10.s64 + -20340;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F9E4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F9F4"))) PPC_WEAK_FUNC(sub_8329F9F4);
PPC_FUNC_IMPL(__imp__sub_8329F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F9F8"))) PPC_WEAK_FUNC(sub_8329F9F8);
PPC_FUNC_IMPL(__imp__sub_8329F9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26392
	ctx.r7.s64 = ctx.r11.s64 + -26392;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-26272
	ctx.r4.s64 = ctx.r10.s64 + -26272;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20292
	ctx.r3.s64 = ctx.r10.s64 + -20292;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FA54;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FA64"))) PPC_WEAK_FUNC(sub_8329FA64);
PPC_FUNC_IMPL(__imp__sub_8329FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FA68"))) PPC_WEAK_FUNC(sub_8329FA68);
PPC_FUNC_IMPL(__imp__sub_8329FA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,14716
	ctx.r4.s64 = ctx.r10.s64 + 14716;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20244
	ctx.r3.s64 = ctx.r10.s64 + -20244;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329FAB8;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FAC8"))) PPC_WEAK_FUNC(sub_8329FAC8);
PPC_FUNC_IMPL(__imp__sub_8329FAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26168
	ctx.r7.s64 = ctx.r11.s64 + -26168;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r4,r10,-26048
	ctx.r4.s64 = ctx.r10.s64 + -26048;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20196
	ctx.r3.s64 = ctx.r10.s64 + -20196;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FB24;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FB34"))) PPC_WEAK_FUNC(sub_8329FB34);
PPC_FUNC_IMPL(__imp__sub_8329FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FB38"))) PPC_WEAK_FUNC(sub_8329FB38);
PPC_FUNC_IMPL(__imp__sub_8329FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,6884
	ctx.r11.s64 = ctx.r11.s64 + 6884;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FB54"))) PPC_WEAK_FUNC(sub_8329FB54);
PPC_FUNC_IMPL(__imp__sub_8329FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FB58"))) PPC_WEAK_FUNC(sub_8329FB58);
PPC_FUNC_IMPL(__imp__sub_8329FB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-24272
	ctx.r7.s64 = ctx.r11.s64 + -24272;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r4,r10,-24008
	ctx.r4.s64 = ctx.r10.s64 + -24008;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20148
	ctx.r3.s64 = ctx.r10.s64 + -20148;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FBB4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FBC4"))) PPC_WEAK_FUNC(sub_8329FBC4);
PPC_FUNC_IMPL(__imp__sub_8329FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FBC8"))) PPC_WEAK_FUNC(sub_8329FBC8);
PPC_FUNC_IMPL(__imp__sub_8329FBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-23840
	ctx.r7.s64 = ctx.r11.s64 + -23840;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,-23624
	ctx.r4.s64 = ctx.r10.s64 + -23624;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20100
	ctx.r3.s64 = ctx.r10.s64 + -20100;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FC24;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FC34"))) PPC_WEAK_FUNC(sub_8329FC34);
PPC_FUNC_IMPL(__imp__sub_8329FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FC38"))) PPC_WEAK_FUNC(sub_8329FC38);
PPC_FUNC_IMPL(__imp__sub_8329FC38) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-22828
	ctx.r4.s64 = ctx.r11.s64 + -22828;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20044
	ctx.r3.s64 = ctx.r11.s64 + -20044;
	// bl 0x82e83328
	ctx.lr = 0x8329FC60;
	sub_82E83328(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8520
	ctx.r3.s64 = ctx.r11.s64 + 8520;
	// bl 0x82ca3700
	ctx.lr = 0x8329FC6C;
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

__attribute__((alias("__imp__sub_8329FC7C"))) PPC_WEAK_FUNC(sub_8329FC7C);
PPC_FUNC_IMPL(__imp__sub_8329FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FC80"))) PPC_WEAK_FUNC(sub_8329FC80);
PPC_FUNC_IMPL(__imp__sub_8329FC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8440
	ctx.r3.s64 = ctx.r11.s64 + 8440;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FC8C"))) PPC_WEAK_FUNC(sub_8329FC8C);
PPC_FUNC_IMPL(__imp__sub_8329FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FC90"))) PPC_WEAK_FUNC(sub_8329FC90);
PPC_FUNC_IMPL(__imp__sub_8329FC90) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r4,r10,-22772
	ctx.r4.s64 = ctx.r10.s64 + -22772;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18256
	ctx.r3.s64 = ctx.r10.s64 + -18256;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29392
	ctx.r5.s64 = ctx.r11.s64 + -29392;
	// bl 0x82e7efd8
	ctx.lr = 0x8329FCC4;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8648
	ctx.r3.s64 = ctx.r11.s64 + 8648;
	// bl 0x82ca3700
	ctx.lr = 0x8329FCD0;
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

__attribute__((alias("__imp__sub_8329FCE0"))) PPC_WEAK_FUNC(sub_8329FCE0);
PPC_FUNC_IMPL(__imp__sub_8329FCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8672
	ctx.r3.s64 = ctx.r11.s64 + 8672;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FCEC"))) PPC_WEAK_FUNC(sub_8329FCEC);
PPC_FUNC_IMPL(__imp__sub_8329FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FCF0"))) PPC_WEAK_FUNC(sub_8329FCF0);
PPC_FUNC_IMPL(__imp__sub_8329FCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,-16020
	ctx.r3.s64 = ctx.r11.s64 + -16020;
	// b 0x831ca898
	sub_831CA898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD00"))) PPC_WEAK_FUNC(sub_8329FD00);
PPC_FUNC_IMPL(__imp__sub_8329FD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r4,r11,-16020
	ctx.r4.s64 = ctx.r11.s64 + -16020;
	// addi r3,r10,-15976
	ctx.r3.s64 = ctx.r10.s64 + -15976;
	// b 0x831cb4d0
	sub_831CB4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD14"))) PPC_WEAK_FUNC(sub_8329FD14);
PPC_FUNC_IMPL(__imp__sub_8329FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD18"))) PPC_WEAK_FUNC(sub_8329FD18);
PPC_FUNC_IMPL(__imp__sub_8329FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,6904
	ctx.r3.s64 = ctx.r11.s64 + 6904;
	// b 0x822f0250
	sub_822F0250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD24"))) PPC_WEAK_FUNC(sub_8329FD24);
PPC_FUNC_IMPL(__imp__sub_8329FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD28"))) PPC_WEAK_FUNC(sub_8329FD28);
PPC_FUNC_IMPL(__imp__sub_8329FD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28884
	ctx.r3.s64 = ctx.r11.s64 + 28884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD34"))) PPC_WEAK_FUNC(sub_8329FD34);
PPC_FUNC_IMPL(__imp__sub_8329FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD38"))) PPC_WEAK_FUNC(sub_8329FD38);
PPC_FUNC_IMPL(__imp__sub_8329FD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28888
	ctx.r3.s64 = ctx.r11.s64 + 28888;
	// b 0x822f0808
	sub_822F0808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD44"))) PPC_WEAK_FUNC(sub_8329FD44);
PPC_FUNC_IMPL(__imp__sub_8329FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD48"))) PPC_WEAK_FUNC(sub_8329FD48);
PPC_FUNC_IMPL(__imp__sub_8329FD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28900
	ctx.r3.s64 = ctx.r11.s64 + 28900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD54"))) PPC_WEAK_FUNC(sub_8329FD54);
PPC_FUNC_IMPL(__imp__sub_8329FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD58"))) PPC_WEAK_FUNC(sub_8329FD58);
PPC_FUNC_IMPL(__imp__sub_8329FD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28904
	ctx.r3.s64 = ctx.r11.s64 + 28904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD64"))) PPC_WEAK_FUNC(sub_8329FD64);
PPC_FUNC_IMPL(__imp__sub_8329FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD68"))) PPC_WEAK_FUNC(sub_8329FD68);
PPC_FUNC_IMPL(__imp__sub_8329FD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28908
	ctx.r3.s64 = ctx.r11.s64 + 28908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD74"))) PPC_WEAK_FUNC(sub_8329FD74);
PPC_FUNC_IMPL(__imp__sub_8329FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD78"))) PPC_WEAK_FUNC(sub_8329FD78);
PPC_FUNC_IMPL(__imp__sub_8329FD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28912
	ctx.r3.s64 = ctx.r11.s64 + 28912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD84"))) PPC_WEAK_FUNC(sub_8329FD84);
PPC_FUNC_IMPL(__imp__sub_8329FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD88"))) PPC_WEAK_FUNC(sub_8329FD88);
PPC_FUNC_IMPL(__imp__sub_8329FD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28916
	ctx.r3.s64 = ctx.r11.s64 + 28916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD94"))) PPC_WEAK_FUNC(sub_8329FD94);
PPC_FUNC_IMPL(__imp__sub_8329FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD98"))) PPC_WEAK_FUNC(sub_8329FD98);
PPC_FUNC_IMPL(__imp__sub_8329FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28920
	ctx.r3.s64 = ctx.r11.s64 + 28920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FDA4"))) PPC_WEAK_FUNC(sub_8329FDA4);
PPC_FUNC_IMPL(__imp__sub_8329FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FDA8"))) PPC_WEAK_FUNC(sub_8329FDA8);
PPC_FUNC_IMPL(__imp__sub_8329FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28924
	ctx.r3.s64 = ctx.r11.s64 + 28924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FDB4"))) PPC_WEAK_FUNC(sub_8329FDB4);
PPC_FUNC_IMPL(__imp__sub_8329FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FDB8"))) PPC_WEAK_FUNC(sub_8329FDB8);
PPC_FUNC_IMPL(__imp__sub_8329FDB8) {
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
	// addi r31,r11,28928
	ctx.r31.s64 = ctx.r11.s64 + 28928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f5c0
	ctx.lr = 0x8329FDD8;
	sub_82A0F5C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FDE0;
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

__attribute__((alias("__imp__sub_8329FDFC"))) PPC_WEAK_FUNC(sub_8329FDFC);
PPC_FUNC_IMPL(__imp__sub_8329FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE00"))) PPC_WEAK_FUNC(sub_8329FE00);
PPC_FUNC_IMPL(__imp__sub_8329FE00) {
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
	// addi r31,r11,28940
	ctx.r31.s64 = ctx.r11.s64 + 28940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ff7e0
	ctx.lr = 0x8329FE20;
	sub_822FF7E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FE28;
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

__attribute__((alias("__imp__sub_8329FE44"))) PPC_WEAK_FUNC(sub_8329FE44);
PPC_FUNC_IMPL(__imp__sub_8329FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE48"))) PPC_WEAK_FUNC(sub_8329FE48);
PPC_FUNC_IMPL(__imp__sub_8329FE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28952
	ctx.r3.s64 = ctx.r11.s64 + 28952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE54"))) PPC_WEAK_FUNC(sub_8329FE54);
PPC_FUNC_IMPL(__imp__sub_8329FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE58"))) PPC_WEAK_FUNC(sub_8329FE58);
PPC_FUNC_IMPL(__imp__sub_8329FE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE64"))) PPC_WEAK_FUNC(sub_8329FE64);
PPC_FUNC_IMPL(__imp__sub_8329FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE68"))) PPC_WEAK_FUNC(sub_8329FE68);
PPC_FUNC_IMPL(__imp__sub_8329FE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29044
	ctx.r3.s64 = ctx.r11.s64 + 29044;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE74"))) PPC_WEAK_FUNC(sub_8329FE74);
PPC_FUNC_IMPL(__imp__sub_8329FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE78"))) PPC_WEAK_FUNC(sub_8329FE78);
PPC_FUNC_IMPL(__imp__sub_8329FE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29048
	ctx.r3.s64 = ctx.r11.s64 + 29048;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE84"))) PPC_WEAK_FUNC(sub_8329FE84);
PPC_FUNC_IMPL(__imp__sub_8329FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE88"))) PPC_WEAK_FUNC(sub_8329FE88);
PPC_FUNC_IMPL(__imp__sub_8329FE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29052
	ctx.r3.s64 = ctx.r11.s64 + 29052;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE94"))) PPC_WEAK_FUNC(sub_8329FE94);
PPC_FUNC_IMPL(__imp__sub_8329FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE98"))) PPC_WEAK_FUNC(sub_8329FE98);
PPC_FUNC_IMPL(__imp__sub_8329FE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29056
	ctx.r3.s64 = ctx.r11.s64 + 29056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEA4"))) PPC_WEAK_FUNC(sub_8329FEA4);
PPC_FUNC_IMPL(__imp__sub_8329FEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEA8"))) PPC_WEAK_FUNC(sub_8329FEA8);
PPC_FUNC_IMPL(__imp__sub_8329FEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29064
	ctx.r3.s64 = ctx.r11.s64 + 29064;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEB4"))) PPC_WEAK_FUNC(sub_8329FEB4);
PPC_FUNC_IMPL(__imp__sub_8329FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEB8"))) PPC_WEAK_FUNC(sub_8329FEB8);
PPC_FUNC_IMPL(__imp__sub_8329FEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29068
	ctx.r3.s64 = ctx.r11.s64 + 29068;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEC4"))) PPC_WEAK_FUNC(sub_8329FEC4);
PPC_FUNC_IMPL(__imp__sub_8329FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEC8"))) PPC_WEAK_FUNC(sub_8329FEC8);
PPC_FUNC_IMPL(__imp__sub_8329FEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29072
	ctx.r3.s64 = ctx.r11.s64 + 29072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FED4"))) PPC_WEAK_FUNC(sub_8329FED4);
PPC_FUNC_IMPL(__imp__sub_8329FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FED8"))) PPC_WEAK_FUNC(sub_8329FED8);
PPC_FUNC_IMPL(__imp__sub_8329FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29076
	ctx.r3.s64 = ctx.r11.s64 + 29076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEE4"))) PPC_WEAK_FUNC(sub_8329FEE4);
PPC_FUNC_IMPL(__imp__sub_8329FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEE8"))) PPC_WEAK_FUNC(sub_8329FEE8);
PPC_FUNC_IMPL(__imp__sub_8329FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29136
	ctx.r3.s64 = ctx.r11.s64 + 29136;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEF4"))) PPC_WEAK_FUNC(sub_8329FEF4);
PPC_FUNC_IMPL(__imp__sub_8329FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEF8"))) PPC_WEAK_FUNC(sub_8329FEF8);
PPC_FUNC_IMPL(__imp__sub_8329FEF8) {
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
	// addi r31,r11,29144
	ctx.r31.s64 = ctx.r11.s64 + 29144;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8329ff30
	if (ctx.cr6.eq) goto loc_8329FF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82325000
	ctx.lr = 0x8329FF28;
	sub_82325000(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FF30;
	sub_8221BE68(ctx, base);
loc_8329FF30:
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

__attribute__((alias("__imp__sub_8329FF5C"))) PPC_WEAK_FUNC(sub_8329FF5C);
PPC_FUNC_IMPL(__imp__sub_8329FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FF60"))) PPC_WEAK_FUNC(sub_8329FF60);
PPC_FUNC_IMPL(__imp__sub_8329FF60) {
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
	// addi r31,r11,29160
	ctx.r31.s64 = ctx.r11.s64 + 29160;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8329ff98
	if (ctx.cr6.eq) goto loc_8329FF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82325690
	ctx.lr = 0x8329FF90;
	sub_82325690(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FF98;
	sub_8221BE68(ctx, base);
loc_8329FF98:
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

__attribute__((alias("__imp__sub_8329FFC4"))) PPC_WEAK_FUNC(sub_8329FFC4);
PPC_FUNC_IMPL(__imp__sub_8329FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FFC8"))) PPC_WEAK_FUNC(sub_8329FFC8);
PPC_FUNC_IMPL(__imp__sub_8329FFC8) {
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
	// addi r31,r11,29176
	ctx.r31.s64 = ctx.r11.s64 + 29176;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832a0000
	if (ctx.cr6.eq) goto loc_832A0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82325690
	ctx.lr = 0x8329FFF8;
	sub_82325690(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A0000;
	sub_8221BE68(ctx, base);
loc_832A0000:
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

__attribute__((alias("__imp__sub_832A002C"))) PPC_WEAK_FUNC(sub_832A002C);
PPC_FUNC_IMPL(__imp__sub_832A002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0030"))) PPC_WEAK_FUNC(sub_832A0030);
PPC_FUNC_IMPL(__imp__sub_832A0030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 + 4784;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0040"))) PPC_WEAK_FUNC(sub_832A0040);
PPC_FUNC_IMPL(__imp__sub_832A0040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r11,r11,-11616
	ctx.r11.s64 = ctx.r11.s64 + -11616;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0050"))) PPC_WEAK_FUNC(sub_832A0050);
PPC_FUNC_IMPL(__imp__sub_832A0050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29192
	ctx.r3.s64 = ctx.r11.s64 + 29192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A005C"))) PPC_WEAK_FUNC(sub_832A005C);
PPC_FUNC_IMPL(__imp__sub_832A005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0060"))) PPC_WEAK_FUNC(sub_832A0060);
PPC_FUNC_IMPL(__imp__sub_832A0060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29196
	ctx.r3.s64 = ctx.r11.s64 + 29196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A006C"))) PPC_WEAK_FUNC(sub_832A006C);
PPC_FUNC_IMPL(__imp__sub_832A006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0070"))) PPC_WEAK_FUNC(sub_832A0070);
PPC_FUNC_IMPL(__imp__sub_832A0070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29200
	ctx.r3.s64 = ctx.r11.s64 + 29200;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A007C"))) PPC_WEAK_FUNC(sub_832A007C);
PPC_FUNC_IMPL(__imp__sub_832A007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0080"))) PPC_WEAK_FUNC(sub_832A0080);
PPC_FUNC_IMPL(__imp__sub_832A0080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29204
	ctx.r3.s64 = ctx.r11.s64 + 29204;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A008C"))) PPC_WEAK_FUNC(sub_832A008C);
PPC_FUNC_IMPL(__imp__sub_832A008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0090"))) PPC_WEAK_FUNC(sub_832A0090);
PPC_FUNC_IMPL(__imp__sub_832A0090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29268
	ctx.r3.s64 = ctx.r11.s64 + 29268;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A009C"))) PPC_WEAK_FUNC(sub_832A009C);
PPC_FUNC_IMPL(__imp__sub_832A009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00A0"))) PPC_WEAK_FUNC(sub_832A00A0);
PPC_FUNC_IMPL(__imp__sub_832A00A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29272
	ctx.r3.s64 = ctx.r11.s64 + 29272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A00AC"))) PPC_WEAK_FUNC(sub_832A00AC);
PPC_FUNC_IMPL(__imp__sub_832A00AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00B0"))) PPC_WEAK_FUNC(sub_832A00B0);
PPC_FUNC_IMPL(__imp__sub_832A00B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29276
	ctx.r3.s64 = ctx.r11.s64 + 29276;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A00BC"))) PPC_WEAK_FUNC(sub_832A00BC);
PPC_FUNC_IMPL(__imp__sub_832A00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00C0"))) PPC_WEAK_FUNC(sub_832A00C0);
PPC_FUNC_IMPL(__imp__sub_832A00C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29280
	ctx.r3.s64 = ctx.r11.s64 + 29280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A00CC"))) PPC_WEAK_FUNC(sub_832A00CC);
PPC_FUNC_IMPL(__imp__sub_832A00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00D0"))) PPC_WEAK_FUNC(sub_832A00D0);
PPC_FUNC_IMPL(__imp__sub_832A00D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A00D8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,29288
	ctx.r11.s64 = ctx.r11.s64 + 29288;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A00F8:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A0104;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A0108:
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
	// bne 0x832a0108
	if (!ctx.cr0.eq) goto loc_832A0108;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a00f8
	if (!ctx.cr0.lt) goto loc_832A00F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_832A0138"))) PPC_WEAK_FUNC(sub_832A0138);
PPC_FUNC_IMPL(__imp__sub_832A0138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A0140;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,29352
	ctx.r11.s64 = ctx.r11.s64 + 29352;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A0160:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A016C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A0170:
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
	// bne 0x832a0170
	if (!ctx.cr0.eq) goto loc_832A0170;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a0160
	if (!ctx.cr0.lt) goto loc_832A0160;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_832A01A0"))) PPC_WEAK_FUNC(sub_832A01A0);
PPC_FUNC_IMPL(__imp__sub_832A01A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29496
	ctx.r3.s64 = ctx.r11.s64 + 29496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01AC"))) PPC_WEAK_FUNC(sub_832A01AC);
PPC_FUNC_IMPL(__imp__sub_832A01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01B0"))) PPC_WEAK_FUNC(sub_832A01B0);
PPC_FUNC_IMPL(__imp__sub_832A01B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29500
	ctx.r3.s64 = ctx.r11.s64 + 29500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01BC"))) PPC_WEAK_FUNC(sub_832A01BC);
PPC_FUNC_IMPL(__imp__sub_832A01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01C0"))) PPC_WEAK_FUNC(sub_832A01C0);
PPC_FUNC_IMPL(__imp__sub_832A01C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29504
	ctx.r3.s64 = ctx.r11.s64 + 29504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01CC"))) PPC_WEAK_FUNC(sub_832A01CC);
PPC_FUNC_IMPL(__imp__sub_832A01CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01D0"))) PPC_WEAK_FUNC(sub_832A01D0);
PPC_FUNC_IMPL(__imp__sub_832A01D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29508
	ctx.r3.s64 = ctx.r11.s64 + 29508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01DC"))) PPC_WEAK_FUNC(sub_832A01DC);
PPC_FUNC_IMPL(__imp__sub_832A01DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01E0"))) PPC_WEAK_FUNC(sub_832A01E0);
PPC_FUNC_IMPL(__imp__sub_832A01E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29512
	ctx.r3.s64 = ctx.r11.s64 + 29512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01EC"))) PPC_WEAK_FUNC(sub_832A01EC);
PPC_FUNC_IMPL(__imp__sub_832A01EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01F0"))) PPC_WEAK_FUNC(sub_832A01F0);
PPC_FUNC_IMPL(__imp__sub_832A01F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A01F4"))) PPC_WEAK_FUNC(sub_832A01F4);
PPC_FUNC_IMPL(__imp__sub_832A01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01F8"))) PPC_WEAK_FUNC(sub_832A01F8);
PPC_FUNC_IMPL(__imp__sub_832A01F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29516
	ctx.r3.s64 = ctx.r11.s64 + 29516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0204"))) PPC_WEAK_FUNC(sub_832A0204);
PPC_FUNC_IMPL(__imp__sub_832A0204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0208"))) PPC_WEAK_FUNC(sub_832A0208);
PPC_FUNC_IMPL(__imp__sub_832A0208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A020C"))) PPC_WEAK_FUNC(sub_832A020C);
PPC_FUNC_IMPL(__imp__sub_832A020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0210"))) PPC_WEAK_FUNC(sub_832A0210);
PPC_FUNC_IMPL(__imp__sub_832A0210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29548
	ctx.r3.s64 = ctx.r11.s64 + 29548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A021C"))) PPC_WEAK_FUNC(sub_832A021C);
PPC_FUNC_IMPL(__imp__sub_832A021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0220"))) PPC_WEAK_FUNC(sub_832A0220);
PPC_FUNC_IMPL(__imp__sub_832A0220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29552
	ctx.r3.s64 = ctx.r11.s64 + 29552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A022C"))) PPC_WEAK_FUNC(sub_832A022C);
PPC_FUNC_IMPL(__imp__sub_832A022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0230"))) PPC_WEAK_FUNC(sub_832A0230);
PPC_FUNC_IMPL(__imp__sub_832A0230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29556
	ctx.r3.s64 = ctx.r11.s64 + 29556;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A023C"))) PPC_WEAK_FUNC(sub_832A023C);
PPC_FUNC_IMPL(__imp__sub_832A023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0240"))) PPC_WEAK_FUNC(sub_832A0240);
PPC_FUNC_IMPL(__imp__sub_832A0240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29560
	ctx.r3.s64 = ctx.r11.s64 + 29560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A024C"))) PPC_WEAK_FUNC(sub_832A024C);
PPC_FUNC_IMPL(__imp__sub_832A024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0250"))) PPC_WEAK_FUNC(sub_832A0250);
PPC_FUNC_IMPL(__imp__sub_832A0250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29564
	ctx.r3.s64 = ctx.r11.s64 + 29564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A025C"))) PPC_WEAK_FUNC(sub_832A025C);
PPC_FUNC_IMPL(__imp__sub_832A025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0260"))) PPC_WEAK_FUNC(sub_832A0260);
PPC_FUNC_IMPL(__imp__sub_832A0260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29568
	ctx.r3.s64 = ctx.r11.s64 + 29568;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A026C"))) PPC_WEAK_FUNC(sub_832A026C);
PPC_FUNC_IMPL(__imp__sub_832A026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0270"))) PPC_WEAK_FUNC(sub_832A0270);
PPC_FUNC_IMPL(__imp__sub_832A0270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29572
	ctx.r3.s64 = ctx.r11.s64 + 29572;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A027C"))) PPC_WEAK_FUNC(sub_832A027C);
PPC_FUNC_IMPL(__imp__sub_832A027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0280"))) PPC_WEAK_FUNC(sub_832A0280);
PPC_FUNC_IMPL(__imp__sub_832A0280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,29464
	ctx.r3.s64 = ctx.r11.s64 + 29464;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A028C"))) PPC_WEAK_FUNC(sub_832A028C);
PPC_FUNC_IMPL(__imp__sub_832A028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0290"))) PPC_WEAK_FUNC(sub_832A0290);
PPC_FUNC_IMPL(__imp__sub_832A0290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29576
	ctx.r3.s64 = ctx.r11.s64 + 29576;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A029C"))) PPC_WEAK_FUNC(sub_832A029C);
PPC_FUNC_IMPL(__imp__sub_832A029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02A0"))) PPC_WEAK_FUNC(sub_832A02A0);
PPC_FUNC_IMPL(__imp__sub_832A02A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29580
	ctx.r3.s64 = ctx.r11.s64 + 29580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02AC"))) PPC_WEAK_FUNC(sub_832A02AC);
PPC_FUNC_IMPL(__imp__sub_832A02AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02B0"))) PPC_WEAK_FUNC(sub_832A02B0);
PPC_FUNC_IMPL(__imp__sub_832A02B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29584
	ctx.r3.s64 = ctx.r11.s64 + 29584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02BC"))) PPC_WEAK_FUNC(sub_832A02BC);
PPC_FUNC_IMPL(__imp__sub_832A02BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02C0"))) PPC_WEAK_FUNC(sub_832A02C0);
PPC_FUNC_IMPL(__imp__sub_832A02C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29588
	ctx.r3.s64 = ctx.r11.s64 + 29588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02CC"))) PPC_WEAK_FUNC(sub_832A02CC);
PPC_FUNC_IMPL(__imp__sub_832A02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02D0"))) PPC_WEAK_FUNC(sub_832A02D0);
PPC_FUNC_IMPL(__imp__sub_832A02D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02DC"))) PPC_WEAK_FUNC(sub_832A02DC);
PPC_FUNC_IMPL(__imp__sub_832A02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02E0"))) PPC_WEAK_FUNC(sub_832A02E0);
PPC_FUNC_IMPL(__imp__sub_832A02E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29596
	ctx.r3.s64 = ctx.r11.s64 + 29596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02EC"))) PPC_WEAK_FUNC(sub_832A02EC);
PPC_FUNC_IMPL(__imp__sub_832A02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02F0"))) PPC_WEAK_FUNC(sub_832A02F0);
PPC_FUNC_IMPL(__imp__sub_832A02F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29600
	ctx.r3.s64 = ctx.r11.s64 + 29600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02FC"))) PPC_WEAK_FUNC(sub_832A02FC);
PPC_FUNC_IMPL(__imp__sub_832A02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0300"))) PPC_WEAK_FUNC(sub_832A0300);
PPC_FUNC_IMPL(__imp__sub_832A0300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29604
	ctx.r3.s64 = ctx.r11.s64 + 29604;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A030C"))) PPC_WEAK_FUNC(sub_832A030C);
PPC_FUNC_IMPL(__imp__sub_832A030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0310"))) PPC_WEAK_FUNC(sub_832A0310);
PPC_FUNC_IMPL(__imp__sub_832A0310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29608
	ctx.r3.s64 = ctx.r11.s64 + 29608;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A031C"))) PPC_WEAK_FUNC(sub_832A031C);
PPC_FUNC_IMPL(__imp__sub_832A031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0320"))) PPC_WEAK_FUNC(sub_832A0320);
PPC_FUNC_IMPL(__imp__sub_832A0320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29612
	ctx.r3.s64 = ctx.r11.s64 + 29612;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A032C"))) PPC_WEAK_FUNC(sub_832A032C);
PPC_FUNC_IMPL(__imp__sub_832A032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0330"))) PPC_WEAK_FUNC(sub_832A0330);
PPC_FUNC_IMPL(__imp__sub_832A0330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29616
	ctx.r3.s64 = ctx.r11.s64 + 29616;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A033C"))) PPC_WEAK_FUNC(sub_832A033C);
PPC_FUNC_IMPL(__imp__sub_832A033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0340"))) PPC_WEAK_FUNC(sub_832A0340);
PPC_FUNC_IMPL(__imp__sub_832A0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29620
	ctx.r3.s64 = ctx.r11.s64 + 29620;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A034C"))) PPC_WEAK_FUNC(sub_832A034C);
PPC_FUNC_IMPL(__imp__sub_832A034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0350"))) PPC_WEAK_FUNC(sub_832A0350);
PPC_FUNC_IMPL(__imp__sub_832A0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29624
	ctx.r3.s64 = ctx.r11.s64 + 29624;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A035C"))) PPC_WEAK_FUNC(sub_832A035C);
PPC_FUNC_IMPL(__imp__sub_832A035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0360"))) PPC_WEAK_FUNC(sub_832A0360);
PPC_FUNC_IMPL(__imp__sub_832A0360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29628
	ctx.r3.s64 = ctx.r11.s64 + 29628;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A036C"))) PPC_WEAK_FUNC(sub_832A036C);
PPC_FUNC_IMPL(__imp__sub_832A036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0370"))) PPC_WEAK_FUNC(sub_832A0370);
PPC_FUNC_IMPL(__imp__sub_832A0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29632
	ctx.r3.s64 = ctx.r11.s64 + 29632;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A037C"))) PPC_WEAK_FUNC(sub_832A037C);
PPC_FUNC_IMPL(__imp__sub_832A037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0380"))) PPC_WEAK_FUNC(sub_832A0380);
PPC_FUNC_IMPL(__imp__sub_832A0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29636
	ctx.r3.s64 = ctx.r11.s64 + 29636;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A038C"))) PPC_WEAK_FUNC(sub_832A038C);
PPC_FUNC_IMPL(__imp__sub_832A038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0390"))) PPC_WEAK_FUNC(sub_832A0390);
PPC_FUNC_IMPL(__imp__sub_832A0390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29640
	ctx.r3.s64 = ctx.r11.s64 + 29640;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A039C"))) PPC_WEAK_FUNC(sub_832A039C);
PPC_FUNC_IMPL(__imp__sub_832A039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03A0"))) PPC_WEAK_FUNC(sub_832A03A0);
PPC_FUNC_IMPL(__imp__sub_832A03A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29644
	ctx.r3.s64 = ctx.r11.s64 + 29644;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03AC"))) PPC_WEAK_FUNC(sub_832A03AC);
PPC_FUNC_IMPL(__imp__sub_832A03AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03B0"))) PPC_WEAK_FUNC(sub_832A03B0);
PPC_FUNC_IMPL(__imp__sub_832A03B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29648
	ctx.r3.s64 = ctx.r11.s64 + 29648;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03BC"))) PPC_WEAK_FUNC(sub_832A03BC);
PPC_FUNC_IMPL(__imp__sub_832A03BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03C0"))) PPC_WEAK_FUNC(sub_832A03C0);
PPC_FUNC_IMPL(__imp__sub_832A03C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29652
	ctx.r3.s64 = ctx.r11.s64 + 29652;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03CC"))) PPC_WEAK_FUNC(sub_832A03CC);
PPC_FUNC_IMPL(__imp__sub_832A03CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03D0"))) PPC_WEAK_FUNC(sub_832A03D0);
PPC_FUNC_IMPL(__imp__sub_832A03D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29656
	ctx.r3.s64 = ctx.r11.s64 + 29656;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03DC"))) PPC_WEAK_FUNC(sub_832A03DC);
PPC_FUNC_IMPL(__imp__sub_832A03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03E0"))) PPC_WEAK_FUNC(sub_832A03E0);
PPC_FUNC_IMPL(__imp__sub_832A03E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29660
	ctx.r3.s64 = ctx.r11.s64 + 29660;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03EC"))) PPC_WEAK_FUNC(sub_832A03EC);
PPC_FUNC_IMPL(__imp__sub_832A03EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03F0"))) PPC_WEAK_FUNC(sub_832A03F0);
PPC_FUNC_IMPL(__imp__sub_832A03F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29664
	ctx.r3.s64 = ctx.r11.s64 + 29664;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03FC"))) PPC_WEAK_FUNC(sub_832A03FC);
PPC_FUNC_IMPL(__imp__sub_832A03FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0400"))) PPC_WEAK_FUNC(sub_832A0400);
PPC_FUNC_IMPL(__imp__sub_832A0400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29668
	ctx.r3.s64 = ctx.r11.s64 + 29668;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A040C"))) PPC_WEAK_FUNC(sub_832A040C);
PPC_FUNC_IMPL(__imp__sub_832A040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0410"))) PPC_WEAK_FUNC(sub_832A0410);
PPC_FUNC_IMPL(__imp__sub_832A0410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29672
	ctx.r3.s64 = ctx.r11.s64 + 29672;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A041C"))) PPC_WEAK_FUNC(sub_832A041C);
PPC_FUNC_IMPL(__imp__sub_832A041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0420"))) PPC_WEAK_FUNC(sub_832A0420);
PPC_FUNC_IMPL(__imp__sub_832A0420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29676
	ctx.r3.s64 = ctx.r11.s64 + 29676;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A042C"))) PPC_WEAK_FUNC(sub_832A042C);
PPC_FUNC_IMPL(__imp__sub_832A042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0430"))) PPC_WEAK_FUNC(sub_832A0430);
PPC_FUNC_IMPL(__imp__sub_832A0430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29680
	ctx.r3.s64 = ctx.r11.s64 + 29680;
	// b 0x82358038
	sub_82358038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A043C"))) PPC_WEAK_FUNC(sub_832A043C);
PPC_FUNC_IMPL(__imp__sub_832A043C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0440"))) PPC_WEAK_FUNC(sub_832A0440);
PPC_FUNC_IMPL(__imp__sub_832A0440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29696
	ctx.r3.s64 = ctx.r11.s64 + 29696;
	// b 0x823580a0
	sub_823580A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A044C"))) PPC_WEAK_FUNC(sub_832A044C);
PPC_FUNC_IMPL(__imp__sub_832A044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0450"))) PPC_WEAK_FUNC(sub_832A0450);
PPC_FUNC_IMPL(__imp__sub_832A0450) {
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
	// addi r31,r11,29712
	ctx.r31.s64 = ctx.r11.s64 + 29712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823091a8
	ctx.lr = 0x832A0470;
	sub_823091A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A0478;
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

__attribute__((alias("__imp__sub_832A0494"))) PPC_WEAK_FUNC(sub_832A0494);
PPC_FUNC_IMPL(__imp__sub_832A0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0498"))) PPC_WEAK_FUNC(sub_832A0498);
PPC_FUNC_IMPL(__imp__sub_832A0498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29724
	ctx.r3.s64 = ctx.r11.s64 + 29724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04A4"))) PPC_WEAK_FUNC(sub_832A04A4);
PPC_FUNC_IMPL(__imp__sub_832A04A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04A8"))) PPC_WEAK_FUNC(sub_832A04A8);
PPC_FUNC_IMPL(__imp__sub_832A04A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04B4"))) PPC_WEAK_FUNC(sub_832A04B4);
PPC_FUNC_IMPL(__imp__sub_832A04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04B8"))) PPC_WEAK_FUNC(sub_832A04B8);
PPC_FUNC_IMPL(__imp__sub_832A04B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29740
	ctx.r3.s64 = ctx.r11.s64 + 29740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04C4"))) PPC_WEAK_FUNC(sub_832A04C4);
PPC_FUNC_IMPL(__imp__sub_832A04C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04C8"))) PPC_WEAK_FUNC(sub_832A04C8);
PPC_FUNC_IMPL(__imp__sub_832A04C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29792
	ctx.r3.s64 = ctx.r11.s64 + 29792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04D4"))) PPC_WEAK_FUNC(sub_832A04D4);
PPC_FUNC_IMPL(__imp__sub_832A04D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04D8"))) PPC_WEAK_FUNC(sub_832A04D8);
PPC_FUNC_IMPL(__imp__sub_832A04D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29796
	ctx.r3.s64 = ctx.r11.s64 + 29796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04E4"))) PPC_WEAK_FUNC(sub_832A04E4);
PPC_FUNC_IMPL(__imp__sub_832A04E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04E8"))) PPC_WEAK_FUNC(sub_832A04E8);
PPC_FUNC_IMPL(__imp__sub_832A04E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29800
	ctx.r3.s64 = ctx.r11.s64 + 29800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04F4"))) PPC_WEAK_FUNC(sub_832A04F4);
PPC_FUNC_IMPL(__imp__sub_832A04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04F8"))) PPC_WEAK_FUNC(sub_832A04F8);
PPC_FUNC_IMPL(__imp__sub_832A04F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29804
	ctx.r3.s64 = ctx.r11.s64 + 29804;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0504"))) PPC_WEAK_FUNC(sub_832A0504);
PPC_FUNC_IMPL(__imp__sub_832A0504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0508"))) PPC_WEAK_FUNC(sub_832A0508);
PPC_FUNC_IMPL(__imp__sub_832A0508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0514"))) PPC_WEAK_FUNC(sub_832A0514);
PPC_FUNC_IMPL(__imp__sub_832A0514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0518"))) PPC_WEAK_FUNC(sub_832A0518);
PPC_FUNC_IMPL(__imp__sub_832A0518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29812
	ctx.r3.s64 = ctx.r11.s64 + 29812;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0524"))) PPC_WEAK_FUNC(sub_832A0524);
PPC_FUNC_IMPL(__imp__sub_832A0524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0528"))) PPC_WEAK_FUNC(sub_832A0528);
PPC_FUNC_IMPL(__imp__sub_832A0528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29816
	ctx.r3.s64 = ctx.r11.s64 + 29816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0534"))) PPC_WEAK_FUNC(sub_832A0534);
PPC_FUNC_IMPL(__imp__sub_832A0534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0538"))) PPC_WEAK_FUNC(sub_832A0538);
PPC_FUNC_IMPL(__imp__sub_832A0538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29820
	ctx.r3.s64 = ctx.r11.s64 + 29820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0544"))) PPC_WEAK_FUNC(sub_832A0544);
PPC_FUNC_IMPL(__imp__sub_832A0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

