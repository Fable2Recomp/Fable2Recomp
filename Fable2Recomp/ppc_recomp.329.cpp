#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83299664"))) PPC_WEAK_FUNC(sub_83299664);
PPC_FUNC_IMPL(__imp__sub_83299664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299668"))) PPC_WEAK_FUNC(sub_83299668);
PPC_FUNC_IMPL(__imp__sub_83299668) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r7,r10,-21152
	ctx.r7.s64 = ctx.r10.s64 + -21152;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r10,8576
	ctx.r4.s64 = ctx.r10.s64 + 8576;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r11,8480
	ctx.r11.s64 = ctx.r11.s64 + 8480;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23756
	ctx.r3.s64 = ctx.r10.s64 + -23756;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x832996C8;
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

__attribute__((alias("__imp__sub_832996D8"))) PPC_WEAK_FUNC(sub_832996D8);
PPC_FUNC_IMPL(__imp__sub_832996D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db62f8
	ctx.lr = 0x832996F0;
	sub_82DB62F8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,8612
	ctx.r10.s64 = ctx.r11.s64 + 8612;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-23708
	ctx.r11.s64 = ctx.r11.s64 + -23708;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,40
	ctx.r10.s64 = ctx.r8.s64 + 40;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299734"))) PPC_WEAK_FUNC(sub_83299734);
PPC_FUNC_IMPL(__imp__sub_83299734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299738"))) PPC_WEAK_FUNC(sub_83299738);
PPC_FUNC_IMPL(__imp__sub_83299738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-20792
	ctx.r10.s64 = ctx.r10.s64 + -20792;
	// lwz r11,-20136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20136);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299750"))) PPC_WEAK_FUNC(sub_83299750);
PPC_FUNC_IMPL(__imp__sub_83299750) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r9,r11,8440
	ctx.r9.s64 = ctx.r11.s64 + 8440;
	// addi r5,r10,-23100
	ctx.r5.s64 = ctx.r10.s64 + -23100;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,104
	ctx.r7.s64 = ctx.r9.s64 + 104;
	// li r6,7
	ctx.r6.s64 = 7;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r4,r10,8612
	ctx.r4.s64 = ctx.r10.s64 + 8612;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-20792
	ctx.r11.s64 = ctx.r11.s64 + -20792;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23692
	ctx.r3.s64 = ctx.r10.s64 + -23692;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832997B4;
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

__attribute__((alias("__imp__sub_832997C4"))) PPC_WEAK_FUNC(sub_832997C4);
PPC_FUNC_IMPL(__imp__sub_832997C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832997C8"))) PPC_WEAK_FUNC(sub_832997C8);
PPC_FUNC_IMPL(__imp__sub_832997C8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8628
	ctx.r4.s64 = ctx.r10.s64 + 8628;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-23644
	ctx.r3.s64 = ctx.r10.s64 + -23644;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82d4f620
	ctx.lr = 0x8329981C;
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

__attribute__((alias("__imp__sub_8329982C"))) PPC_WEAK_FUNC(sub_8329982C);
PPC_FUNC_IMPL(__imp__sub_8329982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299830"))) PPC_WEAK_FUNC(sub_83299830);
PPC_FUNC_IMPL(__imp__sub_83299830) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,8652
	ctx.r4.s64 = ctx.r10.s64 + 8652;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23596
	ctx.r3.s64 = ctx.r10.s64 + -23596;
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
	ctx.lr = 0x83299880;
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

__attribute__((alias("__imp__sub_83299890"))) PPC_WEAK_FUNC(sub_83299890);
PPC_FUNC_IMPL(__imp__sub_83299890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc3800
	ctx.lr = 0x832998A8;
	sub_82DC3800(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,8748
	ctx.r10.s64 = ctx.r11.s64 + 8748;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-23548
	ctx.r11.s64 = ctx.r11.s64 + -23548;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,160
	ctx.r10.s64 = ctx.r8.s64 + 160;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,136
	ctx.r10.s64 = ctx.r9.s64 + 136;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832998EC"))) PPC_WEAK_FUNC(sub_832998EC);
PPC_FUNC_IMPL(__imp__sub_832998EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832998F0"))) PPC_WEAK_FUNC(sub_832998F0);
PPC_FUNC_IMPL(__imp__sub_832998F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-20624
	ctx.r10.s64 = ctx.r10.s64 + -20624;
	// lwz r11,-20136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20136);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299908"))) PPC_WEAK_FUNC(sub_83299908);
PPC_FUNC_IMPL(__imp__sub_83299908) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r8,r10,-20624
	ctx.r8.s64 = ctx.r10.s64 + -20624;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24972
	ctx.r5.s64 = ctx.r10.s64 + -24972;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,8748
	ctx.r4.s64 = ctx.r10.s64 + 8748;
	// addi r11,r11,8708
	ctx.r11.s64 = ctx.r11.s64 + 8708;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-23532
	ctx.r3.s64 = ctx.r10.s64 + -23532;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82d4f620
	ctx.lr = 0x8329996C;
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

__attribute__((alias("__imp__sub_8329997C"))) PPC_WEAK_FUNC(sub_8329997C);
PPC_FUNC_IMPL(__imp__sub_8329997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299980"))) PPC_WEAK_FUNC(sub_83299980);
PPC_FUNC_IMPL(__imp__sub_83299980) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,8792
	ctx.r4.s64 = ctx.r10.s64 + 8792;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23484
	ctx.r3.s64 = ctx.r10.s64 + -23484;
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
	ctx.lr = 0x832999D0;
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

__attribute__((alias("__imp__sub_832999E0"))) PPC_WEAK_FUNC(sub_832999E0);
PPC_FUNC_IMPL(__imp__sub_832999E0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,8860
	ctx.r7.s64 = ctx.r11.s64 + 8860;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,8996
	ctx.r4.s64 = ctx.r10.s64 + 8996;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23436
	ctx.r3.s64 = ctx.r10.s64 + -23436;
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
	ctx.lr = 0x83299A3C;
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

__attribute__((alias("__imp__sub_83299A4C"))) PPC_WEAK_FUNC(sub_83299A4C);
PPC_FUNC_IMPL(__imp__sub_83299A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299A50"))) PPC_WEAK_FUNC(sub_83299A50);
PPC_FUNC_IMPL(__imp__sub_83299A50) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,8908
	ctx.r8.s64 = ctx.r11.s64 + 8908;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,9016
	ctx.r4.s64 = ctx.r10.s64 + 9016;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23388
	ctx.r3.s64 = ctx.r10.s64 + -23388;
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
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83299AB0;
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

__attribute__((alias("__imp__sub_83299AC0"))) PPC_WEAK_FUNC(sub_83299AC0);
PPC_FUNC_IMPL(__imp__sub_83299AC0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,9184
	ctx.r8.s64 = ctx.r11.s64 + 9184;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r10,9376
	ctx.r4.s64 = ctx.r10.s64 + 9376;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23340
	ctx.r3.s64 = ctx.r10.s64 + -23340;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83299B20;
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

__attribute__((alias("__imp__sub_83299B30"))) PPC_WEAK_FUNC(sub_83299B30);
PPC_FUNC_IMPL(__imp__sub_83299B30) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-22860
	ctx.r5.s64 = ctx.r10.s64 + -22860;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,9424
	ctx.r8.s64 = ctx.r11.s64 + 9424;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,9520
	ctx.r4.s64 = ctx.r10.s64 + 9520;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23292
	ctx.r3.s64 = ctx.r10.s64 + -23292;
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
	// li r6,160
	ctx.r6.s64 = 160;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83299B90;
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

__attribute__((alias("__imp__sub_83299BA0"))) PPC_WEAK_FUNC(sub_83299BA0);
PPC_FUNC_IMPL(__imp__sub_83299BA0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,9540
	ctx.r7.s64 = ctx.r11.s64 + 9540;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,9564
	ctx.r4.s64 = ctx.r10.s64 + 9564;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23244
	ctx.r3.s64 = ctx.r10.s64 + -23244;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x83299BFC;
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

__attribute__((alias("__imp__sub_83299C0C"))) PPC_WEAK_FUNC(sub_83299C0C);
PPC_FUNC_IMPL(__imp__sub_83299C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299C10"))) PPC_WEAK_FUNC(sub_83299C10);
PPC_FUNC_IMPL(__imp__sub_83299C10) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,9580
	ctx.r8.s64 = ctx.r11.s64 + 9580;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,9628
	ctx.r4.s64 = ctx.r10.s64 + 9628;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23196
	ctx.r3.s64 = ctx.r10.s64 + -23196;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83299C70;
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

__attribute__((alias("__imp__sub_83299C80"))) PPC_WEAK_FUNC(sub_83299C80);
PPC_FUNC_IMPL(__imp__sub_83299C80) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-24268
	ctx.r5.s64 = ctx.r10.s64 + -24268;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,9640
	ctx.r4.s64 = ctx.r10.s64 + 9640;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-23148
	ctx.r3.s64 = ctx.r10.s64 + -23148;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d4f620
	ctx.lr = 0x83299CD4;
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

__attribute__((alias("__imp__sub_83299CE4"))) PPC_WEAK_FUNC(sub_83299CE4);
PPC_FUNC_IMPL(__imp__sub_83299CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299CE8"))) PPC_WEAK_FUNC(sub_83299CE8);
PPC_FUNC_IMPL(__imp__sub_83299CE8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,9680
	ctx.r8.s64 = ctx.r11.s64 + 9680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,9704
	ctx.r4.s64 = ctx.r10.s64 + 9704;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23100
	ctx.r3.s64 = ctx.r10.s64 + -23100;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83299D48;
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

__attribute__((alias("__imp__sub_83299D58"))) PPC_WEAK_FUNC(sub_83299D58);
PPC_FUNC_IMPL(__imp__sub_83299D58) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,9744
	ctx.r7.s64 = ctx.r11.s64 + 9744;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,10076
	ctx.r4.s64 = ctx.r10.s64 + 10076;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23052
	ctx.r3.s64 = ctx.r10.s64 + -23052;
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
	ctx.lr = 0x83299DB4;
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

__attribute__((alias("__imp__sub_83299DC4"))) PPC_WEAK_FUNC(sub_83299DC4);
PPC_FUNC_IMPL(__imp__sub_83299DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299DC8"))) PPC_WEAK_FUNC(sub_83299DC8);
PPC_FUNC_IMPL(__imp__sub_83299DC8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,9816
	ctx.r7.s64 = ctx.r11.s64 + 9816;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,10116
	ctx.r4.s64 = ctx.r10.s64 + 10116;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23004
	ctx.r3.s64 = ctx.r10.s64 + -23004;
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
	ctx.lr = 0x83299E24;
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

__attribute__((alias("__imp__sub_83299E34"))) PPC_WEAK_FUNC(sub_83299E34);
PPC_FUNC_IMPL(__imp__sub_83299E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299E38"))) PPC_WEAK_FUNC(sub_83299E38);
PPC_FUNC_IMPL(__imp__sub_83299E38) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,9912
	ctx.r8.s64 = ctx.r11.s64 + 9912;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,10156
	ctx.r4.s64 = ctx.r10.s64 + 10156;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-22956
	ctx.r3.s64 = ctx.r10.s64 + -22956;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83299E98;
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

__attribute__((alias("__imp__sub_83299EA8"))) PPC_WEAK_FUNC(sub_83299EA8);
PPC_FUNC_IMPL(__imp__sub_83299EA8) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,10188
	ctx.r4.s64 = ctx.r10.s64 + 10188;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-22908
	ctx.r3.s64 = ctx.r10.s64 + -22908;
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
	ctx.lr = 0x83299EF8;
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

__attribute__((alias("__imp__sub_83299F08"))) PPC_WEAK_FUNC(sub_83299F08);
PPC_FUNC_IMPL(__imp__sub_83299F08) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,10216
	ctx.r4.s64 = ctx.r10.s64 + 10216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-22860
	ctx.r3.s64 = ctx.r10.s64 + -22860;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82d4f620
	ctx.lr = 0x83299F5C;
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

__attribute__((alias("__imp__sub_83299F6C"))) PPC_WEAK_FUNC(sub_83299F6C);
PPC_FUNC_IMPL(__imp__sub_83299F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299F70"))) PPC_WEAK_FUNC(sub_83299F70);
PPC_FUNC_IMPL(__imp__sub_83299F70) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,10264
	ctx.r7.s64 = ctx.r11.s64 + 10264;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,10360
	ctx.r4.s64 = ctx.r10.s64 + 10360;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-22812
	ctx.r3.s64 = ctx.r10.s64 + -22812;
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
	ctx.lr = 0x83299FCC;
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

__attribute__((alias("__imp__sub_83299FDC"))) PPC_WEAK_FUNC(sub_83299FDC);
PPC_FUNC_IMPL(__imp__sub_83299FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299FE0"))) PPC_WEAK_FUNC(sub_83299FE0);
PPC_FUNC_IMPL(__imp__sub_83299FE0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21560
	ctx.r5.s64 = ctx.r10.s64 + -21560;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,10408
	ctx.r8.s64 = ctx.r11.s64 + 10408;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,10504
	ctx.r4.s64 = ctx.r10.s64 + 10504;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-22764
	ctx.r3.s64 = ctx.r10.s64 + -22764;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A040;
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

__attribute__((alias("__imp__sub_8329A050"))) PPC_WEAK_FUNC(sub_8329A050);
PPC_FUNC_IMPL(__imp__sub_8329A050) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10804
	ctx.r9.s64 = ctx.r10.s64 + 10804;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,10864
	ctx.r4.s64 = ctx.r10.s64 + 10864;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-22716
	ctx.r3.s64 = ctx.r10.s64 + -22716;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329A0A4;
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

__attribute__((alias("__imp__sub_8329A0B4"))) PPC_WEAK_FUNC(sub_8329A0B4);
PPC_FUNC_IMPL(__imp__sub_8329A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A0B8"))) PPC_WEAK_FUNC(sub_8329A0B8);
PPC_FUNC_IMPL(__imp__sub_8329A0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 2048;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A0C4"))) PPC_WEAK_FUNC(sub_8329A0C4);
PPC_FUNC_IMPL(__imp__sub_8329A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A0C8"))) PPC_WEAK_FUNC(sub_8329A0C8);
PPC_FUNC_IMPL(__imp__sub_8329A0C8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,18528
	ctx.r7.s64 = ctx.r11.s64 + 18528;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r4,r10,18648
	ctx.r4.s64 = ctx.r10.s64 + 18648;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21608
	ctx.r3.s64 = ctx.r10.s64 + -21608;
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
	// li r6,512
	ctx.r6.s64 = 512;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329A124;
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

__attribute__((alias("__imp__sub_8329A134"))) PPC_WEAK_FUNC(sub_8329A134);
PPC_FUNC_IMPL(__imp__sub_8329A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A138"))) PPC_WEAK_FUNC(sub_8329A138);
PPC_FUNC_IMPL(__imp__sub_8329A138) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,18668
	ctx.r7.s64 = ctx.r11.s64 + 18668;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,18692
	ctx.r4.s64 = ctx.r10.s64 + 18692;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21560
	ctx.r3.s64 = ctx.r10.s64 + -21560;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329A194;
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

__attribute__((alias("__imp__sub_8329A1A4"))) PPC_WEAK_FUNC(sub_8329A1A4);
PPC_FUNC_IMPL(__imp__sub_8329A1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A1A8"))) PPC_WEAK_FUNC(sub_8329A1A8);
PPC_FUNC_IMPL(__imp__sub_8329A1A8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24108
	ctx.r5.s64 = ctx.r10.s64 + -24108;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,18732
	ctx.r8.s64 = ctx.r11.s64 + 18732;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,18756
	ctx.r4.s64 = ctx.r10.s64 + 18756;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-21512
	ctx.r3.s64 = ctx.r10.s64 + -21512;
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
	// li r6,88
	ctx.r6.s64 = 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A208;
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

__attribute__((alias("__imp__sub_8329A218"))) PPC_WEAK_FUNC(sub_8329A218);
PPC_FUNC_IMPL(__imp__sub_8329A218) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,18812
	ctx.r7.s64 = ctx.r11.s64 + 18812;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18948
	ctx.r4.s64 = ctx.r10.s64 + 18948;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21464
	ctx.r3.s64 = ctx.r10.s64 + -21464;
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
	ctx.lr = 0x8329A274;
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

__attribute__((alias("__imp__sub_8329A284"))) PPC_WEAK_FUNC(sub_8329A284);
PPC_FUNC_IMPL(__imp__sub_8329A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A288"))) PPC_WEAK_FUNC(sub_8329A288);
PPC_FUNC_IMPL(__imp__sub_8329A288) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,18860
	ctx.r7.s64 = ctx.r11.s64 + 18860;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,18980
	ctx.r4.s64 = ctx.r10.s64 + 18980;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21416
	ctx.r3.s64 = ctx.r10.s64 + -21416;
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
	ctx.lr = 0x8329A2E4;
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

__attribute__((alias("__imp__sub_8329A2F4"))) PPC_WEAK_FUNC(sub_8329A2F4);
PPC_FUNC_IMPL(__imp__sub_8329A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A2F8"))) PPC_WEAK_FUNC(sub_8329A2F8);
PPC_FUNC_IMPL(__imp__sub_8329A2F8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,18884
	ctx.r8.s64 = ctx.r11.s64 + 18884;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,19000
	ctx.r4.s64 = ctx.r10.s64 + 19000;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-21368
	ctx.r3.s64 = ctx.r10.s64 + -21368;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A358;
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

__attribute__((alias("__imp__sub_8329A368"))) PPC_WEAK_FUNC(sub_8329A368);
PPC_FUNC_IMPL(__imp__sub_8329A368) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,19064
	ctx.r8.s64 = ctx.r11.s64 + 19064;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,19152
	ctx.r4.s64 = ctx.r10.s64 + 19152;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-21320
	ctx.r3.s64 = ctx.r10.s64 + -21320;
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
	// li r6,44
	ctx.r6.s64 = 44;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A3C8;
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

__attribute__((alias("__imp__sub_8329A3D8"))) PPC_WEAK_FUNC(sub_8329A3D8);
PPC_FUNC_IMPL(__imp__sub_8329A3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-14792
	ctx.r11.s64 = ctx.r11.s64 + -14792;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A3F4"))) PPC_WEAK_FUNC(sub_8329A3F4);
PPC_FUNC_IMPL(__imp__sub_8329A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A3F8"))) PPC_WEAK_FUNC(sub_8329A3F8);
PPC_FUNC_IMPL(__imp__sub_8329A3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-14088
	ctx.r11.s64 = ctx.r11.s64 + -14088;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A414"))) PPC_WEAK_FUNC(sub_8329A414);
PPC_FUNC_IMPL(__imp__sub_8329A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A418"))) PPC_WEAK_FUNC(sub_8329A418);
PPC_FUNC_IMPL(__imp__sub_8329A418) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,23772
	ctx.r8.s64 = ctx.r11.s64 + 23772;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,23836
	ctx.r4.s64 = ctx.r10.s64 + 23836;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20824
	ctx.r3.s64 = ctx.r10.s64 + -20824;
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
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A478;
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

__attribute__((alias("__imp__sub_8329A488"))) PPC_WEAK_FUNC(sub_8329A488);
PPC_FUNC_IMPL(__imp__sub_8329A488) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28688
	ctx.r5.s64 = ctx.r10.s64 + -28688;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,24120
	ctx.r8.s64 = ctx.r11.s64 + 24120;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,24228
	ctx.r4.s64 = ctx.r10.s64 + 24228;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20776
	ctx.r3.s64 = ctx.r10.s64 + -20776;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A4E8;
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

__attribute__((alias("__imp__sub_8329A4F8"))) PPC_WEAK_FUNC(sub_8329A4F8);
PPC_FUNC_IMPL(__imp__sub_8329A4F8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,24368
	ctx.r7.s64 = ctx.r11.s64 + 24368;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,24536
	ctx.r4.s64 = ctx.r10.s64 + 24536;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20728
	ctx.r3.s64 = ctx.r10.s64 + -20728;
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
	ctx.lr = 0x8329A554;
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

__attribute__((alias("__imp__sub_8329A564"))) PPC_WEAK_FUNC(sub_8329A564);
PPC_FUNC_IMPL(__imp__sub_8329A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A568"))) PPC_WEAK_FUNC(sub_8329A568);
PPC_FUNC_IMPL(__imp__sub_8329A568) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,24440
	ctx.r7.s64 = ctx.r11.s64 + 24440;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,24564
	ctx.r4.s64 = ctx.r10.s64 + 24564;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20680
	ctx.r3.s64 = ctx.r10.s64 + -20680;
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
	ctx.lr = 0x8329A5C4;
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

__attribute__((alias("__imp__sub_8329A5D4"))) PPC_WEAK_FUNC(sub_8329A5D4);
PPC_FUNC_IMPL(__imp__sub_8329A5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A5D8"))) PPC_WEAK_FUNC(sub_8329A5D8);
PPC_FUNC_IMPL(__imp__sub_8329A5D8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,24488
	ctx.r7.s64 = ctx.r11.s64 + 24488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,24596
	ctx.r4.s64 = ctx.r10.s64 + 24596;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20632
	ctx.r3.s64 = ctx.r10.s64 + -20632;
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
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329A634;
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

__attribute__((alias("__imp__sub_8329A644"))) PPC_WEAK_FUNC(sub_8329A644);
PPC_FUNC_IMPL(__imp__sub_8329A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A648"))) PPC_WEAK_FUNC(sub_8329A648);
PPC_FUNC_IMPL(__imp__sub_8329A648) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24268
	ctx.r5.s64 = ctx.r10.s64 + -24268;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,24632
	ctx.r8.s64 = ctx.r11.s64 + 24632;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,24760
	ctx.r4.s64 = ctx.r10.s64 + 24760;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20584
	ctx.r3.s64 = ctx.r10.s64 + -20584;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A6A8;
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

__attribute__((alias("__imp__sub_8329A6B8"))) PPC_WEAK_FUNC(sub_8329A6B8);
PPC_FUNC_IMPL(__imp__sub_8329A6B8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,24880
	ctx.r7.s64 = ctx.r11.s64 + 24880;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,25088
	ctx.r4.s64 = ctx.r10.s64 + 25088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20440
	ctx.r3.s64 = ctx.r10.s64 + -20440;
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
	ctx.lr = 0x8329A714;
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

__attribute__((alias("__imp__sub_8329A724"))) PPC_WEAK_FUNC(sub_8329A724);
PPC_FUNC_IMPL(__imp__sub_8329A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A728"))) PPC_WEAK_FUNC(sub_8329A728);
PPC_FUNC_IMPL(__imp__sub_8329A728) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,24928
	ctx.r7.s64 = ctx.r11.s64 + 24928;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,25116
	ctx.r4.s64 = ctx.r10.s64 + 25116;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20488
	ctx.r3.s64 = ctx.r10.s64 + -20488;
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
	ctx.lr = 0x8329A784;
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

__attribute__((alias("__imp__sub_8329A794"))) PPC_WEAK_FUNC(sub_8329A794);
PPC_FUNC_IMPL(__imp__sub_8329A794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A798"))) PPC_WEAK_FUNC(sub_8329A798);
PPC_FUNC_IMPL(__imp__sub_8329A798) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,25000
	ctx.r8.s64 = ctx.r11.s64 + 25000;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,25148
	ctx.r4.s64 = ctx.r10.s64 + 25148;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20536
	ctx.r3.s64 = ctx.r10.s64 + -20536;
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
	// li r6,44
	ctx.r6.s64 = 44;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A7F8;
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

__attribute__((alias("__imp__sub_8329A808"))) PPC_WEAK_FUNC(sub_8329A808);
PPC_FUNC_IMPL(__imp__sub_8329A808) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28688
	ctx.r5.s64 = ctx.r10.s64 + -28688;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,25184
	ctx.r8.s64 = ctx.r11.s64 + 25184;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,25316
	ctx.r4.s64 = ctx.r10.s64 + 25316;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20392
	ctx.r3.s64 = ctx.r10.s64 + -20392;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A868;
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

__attribute__((alias("__imp__sub_8329A878"))) PPC_WEAK_FUNC(sub_8329A878);
PPC_FUNC_IMPL(__imp__sub_8329A878) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24268
	ctx.r5.s64 = ctx.r10.s64 + -24268;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,25356
	ctx.r8.s64 = ctx.r11.s64 + 25356;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,25476
	ctx.r4.s64 = ctx.r10.s64 + 25476;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20344
	ctx.r3.s64 = ctx.r10.s64 + -20344;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A8D8;
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

__attribute__((alias("__imp__sub_8329A8E8"))) PPC_WEAK_FUNC(sub_8329A8E8);
PPC_FUNC_IMPL(__imp__sub_8329A8E8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24268
	ctx.r5.s64 = ctx.r10.s64 + -24268;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,25548
	ctx.r8.s64 = ctx.r11.s64 + 25548;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,25668
	ctx.r4.s64 = ctx.r10.s64 + 25668;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20296
	ctx.r3.s64 = ctx.r10.s64 + -20296;
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
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329A948;
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

__attribute__((alias("__imp__sub_8329A958"))) PPC_WEAK_FUNC(sub_8329A958);
PPC_FUNC_IMPL(__imp__sub_8329A958) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,25708
	ctx.r7.s64 = ctx.r11.s64 + 25708;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,25796
	ctx.r4.s64 = ctx.r10.s64 + 25796;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20200
	ctx.r3.s64 = ctx.r10.s64 + -20200;
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
	ctx.lr = 0x8329A9B4;
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

__attribute__((alias("__imp__sub_8329A9C4"))) PPC_WEAK_FUNC(sub_8329A9C4);
PPC_FUNC_IMPL(__imp__sub_8329A9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A9C8"))) PPC_WEAK_FUNC(sub_8329A9C8);
PPC_FUNC_IMPL(__imp__sub_8329A9C8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,25756
	ctx.r8.s64 = ctx.r11.s64 + 25756;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,25852
	ctx.r4.s64 = ctx.r10.s64 + 25852;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20248
	ctx.r3.s64 = ctx.r10.s64 + -20248;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AA28;
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

__attribute__((alias("__imp__sub_8329AA38"))) PPC_WEAK_FUNC(sub_8329AA38);
PPC_FUNC_IMPL(__imp__sub_8329AA38) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27840
	ctx.r5.s64 = ctx.r10.s64 + -27840;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,25912
	ctx.r8.s64 = ctx.r11.s64 + 25912;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,26044
	ctx.r4.s64 = ctx.r10.s64 + 26044;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20152
	ctx.r3.s64 = ctx.r10.s64 + -20152;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AA98;
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

__attribute__((alias("__imp__sub_8329AAA8"))) PPC_WEAK_FUNC(sub_8329AAA8);
PPC_FUNC_IMPL(__imp__sub_8329AAA8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,26376
	ctx.r7.s64 = ctx.r11.s64 + 26376;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,26580
	ctx.r4.s64 = ctx.r10.s64 + 26580;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20040
	ctx.r3.s64 = ctx.r10.s64 + -20040;
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
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329AB04;
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

__attribute__((alias("__imp__sub_8329AB14"))) PPC_WEAK_FUNC(sub_8329AB14);
PPC_FUNC_IMPL(__imp__sub_8329AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AB18"))) PPC_WEAK_FUNC(sub_8329AB18);
PPC_FUNC_IMPL(__imp__sub_8329AB18) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-20040
	ctx.r5.s64 = ctx.r10.s64 + -20040;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,26424
	ctx.r8.s64 = ctx.r11.s64 + 26424;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,26608
	ctx.r4.s64 = ctx.r10.s64 + 26608;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20104
	ctx.r3.s64 = ctx.r10.s64 + -20104;
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
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AB78;
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

__attribute__((alias("__imp__sub_8329AB88"))) PPC_WEAK_FUNC(sub_8329AB88);
PPC_FUNC_IMPL(__imp__sub_8329AB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,26568
	ctx.r11.s64 = ctx.r11.s64 + 26568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d9e8a8
	ctx.lr = 0x8329ABB4;
	sub_82D9E8A8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32027
	ctx.r8.s64 = -2098921472;
	// addi r10,r11,26636
	ctx.r10.s64 = ctx.r11.s64 + 26636;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32027
	ctx.r9.s64 = -2098921472;
	// addi r11,r11,-20056
	ctx.r11.s64 = ctx.r11.s64 + -20056;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-28752
	ctx.r10.s64 = ctx.r8.s64 + -28752;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-28808
	ctx.r10.s64 = ctx.r9.s64 + -28808;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ABF8"))) PPC_WEAK_FUNC(sub_8329ABF8);
PPC_FUNC_IMPL(__imp__sub_8329ABF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-13240
	ctx.r10.s64 = ctx.r10.s64 + -13240;
	// lwz r11,-13280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13280);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AC10"))) PPC_WEAK_FUNC(sub_8329AC10);
PPC_FUNC_IMPL(__imp__sub_8329AC10) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-13240
	ctx.r8.s64 = ctx.r11.s64 + -13240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,26544
	ctx.r9.s64 = ctx.r10.s64 + 26544;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,14
	ctx.r7.s64 = 14;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,26636
	ctx.r4.s64 = ctx.r10.s64 + 26636;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-19992
	ctx.r3.s64 = ctx.r11.s64 + -19992;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x8329AC74;
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

__attribute__((alias("__imp__sub_8329AC84"))) PPC_WEAK_FUNC(sub_8329AC84);
PPC_FUNC_IMPL(__imp__sub_8329AC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AC88"))) PPC_WEAK_FUNC(sub_8329AC88);
PPC_FUNC_IMPL(__imp__sub_8329AC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d849b8
	ctx.lr = 0x8329ACA4;
	sub_82D849B8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r7,-32027
	ctx.r7.s64 = -2098921472;
	// addi r10,r11,27116
	ctx.r10.s64 = ctx.r11.s64 + 27116;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32027
	ctx.r8.s64 = -2098921472;
	// addi r9,r11,27084
	ctx.r9.s64 = ctx.r11.s64 + 27084;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,-19896
	ctx.r11.s64 = ctx.r11.s64 + -19896;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r7,-28512
	ctx.r10.s64 = ctx.r7.s64 + -28512;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r8,-28536
	ctx.r10.s64 = ctx.r8.s64 + -28536;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ACEC"))) PPC_WEAK_FUNC(sub_8329ACEC);
PPC_FUNC_IMPL(__imp__sub_8329ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ACF0"))) PPC_WEAK_FUNC(sub_8329ACF0);
PPC_FUNC_IMPL(__imp__sub_8329ACF0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27840
	ctx.r5.s64 = ctx.r10.s64 + -27840;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,26888
	ctx.r8.s64 = ctx.r11.s64 + 26888;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r10,27116
	ctx.r4.s64 = ctx.r10.s64 + 27116;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19944
	ctx.r3.s64 = ctx.r10.s64 + -19944;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AD50;
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

__attribute__((alias("__imp__sub_8329AD60"))) PPC_WEAK_FUNC(sub_8329AD60);
PPC_FUNC_IMPL(__imp__sub_8329AD60) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,27156
	ctx.r7.s64 = ctx.r11.s64 + 27156;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,27328
	ctx.r4.s64 = ctx.r10.s64 + 27328;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-19880
	ctx.r3.s64 = ctx.r10.s64 + -19880;
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
	ctx.lr = 0x8329ADBC;
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

__attribute__((alias("__imp__sub_8329ADCC"))) PPC_WEAK_FUNC(sub_8329ADCC);
PPC_FUNC_IMPL(__imp__sub_8329ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ADD0"))) PPC_WEAK_FUNC(sub_8329ADD0);
PPC_FUNC_IMPL(__imp__sub_8329ADD0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24268
	ctx.r5.s64 = ctx.r10.s64 + -24268;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,27204
	ctx.r8.s64 = ctx.r11.s64 + 27204;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,27368
	ctx.r4.s64 = ctx.r10.s64 + 27368;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19832
	ctx.r3.s64 = ctx.r10.s64 + -19832;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AE30;
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

__attribute__((alias("__imp__sub_8329AE40"))) PPC_WEAK_FUNC(sub_8329AE40);
PPC_FUNC_IMPL(__imp__sub_8329AE40) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28144
	ctx.r5.s64 = ctx.r10.s64 + -28144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,27408
	ctx.r8.s64 = ctx.r11.s64 + 27408;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,27456
	ctx.r4.s64 = ctx.r10.s64 + 27456;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19784
	ctx.r3.s64 = ctx.r10.s64 + -19784;
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
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AEA0;
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

__attribute__((alias("__imp__sub_8329AEB0"))) PPC_WEAK_FUNC(sub_8329AEB0);
PPC_FUNC_IMPL(__imp__sub_8329AEB0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27840
	ctx.r5.s64 = ctx.r10.s64 + -27840;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,27512
	ctx.r8.s64 = ctx.r11.s64 + 27512;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,27644
	ctx.r4.s64 = ctx.r10.s64 + 27644;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19736
	ctx.r3.s64 = ctx.r10.s64 + -19736;
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
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AF10;
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

__attribute__((alias("__imp__sub_8329AF20"))) PPC_WEAK_FUNC(sub_8329AF20);
PPC_FUNC_IMPL(__imp__sub_8329AF20) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,27664
	ctx.r8.s64 = ctx.r11.s64 + 27664;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,27704
	ctx.r4.s64 = ctx.r10.s64 + 27704;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19688
	ctx.r3.s64 = ctx.r10.s64 + -19688;
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
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AF80;
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

__attribute__((alias("__imp__sub_8329AF90"))) PPC_WEAK_FUNC(sub_8329AF90);
PPC_FUNC_IMPL(__imp__sub_8329AF90) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,27740
	ctx.r8.s64 = ctx.r11.s64 + 27740;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,27780
	ctx.r4.s64 = ctx.r10.s64 + 27780;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19640
	ctx.r3.s64 = ctx.r10.s64 + -19640;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329AFF0;
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

__attribute__((alias("__imp__sub_8329B000"))) PPC_WEAK_FUNC(sub_8329B000);
PPC_FUNC_IMPL(__imp__sub_8329B000) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28688
	ctx.r5.s64 = ctx.r10.s64 + -28688;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,27896
	ctx.r8.s64 = ctx.r11.s64 + 27896;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r10,28124
	ctx.r4.s64 = ctx.r10.s64 + 28124;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19592
	ctx.r3.s64 = ctx.r10.s64 + -19592;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329B060;
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

__attribute__((alias("__imp__sub_8329B070"))) PPC_WEAK_FUNC(sub_8329B070);
PPC_FUNC_IMPL(__imp__sub_8329B070) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,28472
	ctx.r11.s64 = ctx.r11.s64 + 28472;
	// li r7,19
	ctx.r7.s64 = 19;
	// addi r8,r11,456
	ctx.r8.s64 = ctx.r11.s64 + 456;
	// addi r4,r10,29012
	ctx.r4.s64 = ctx.r10.s64 + 29012;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r3,r10,-19544
	ctx.r3.s64 = ctx.r10.s64 + -19544;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329B0CC;
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

__attribute__((alias("__imp__sub_8329B0DC"))) PPC_WEAK_FUNC(sub_8329B0DC);
PPC_FUNC_IMPL(__imp__sub_8329B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B0E0"))) PPC_WEAK_FUNC(sub_8329B0E0);
PPC_FUNC_IMPL(__imp__sub_8329B0E0) {
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
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x830e71d8
	ctx.lr = 0x8329B100;
	sub_830E71D8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19472(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B118"))) PPC_WEAK_FUNC(sub_8329B118);
PPC_FUNC_IMPL(__imp__sub_8329B118) {
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
	// li r6,150
	ctx.r6.s64 = 150;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x830e71d8
	ctx.lr = 0x8329B138;
	sub_830E71D8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19476(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B150"))) PPC_WEAK_FUNC(sub_8329B150);
PPC_FUNC_IMPL(__imp__sub_8329B150) {
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
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x830e71d8
	ctx.lr = 0x8329B170;
	sub_830E71D8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B188"))) PPC_WEAK_FUNC(sub_8329B188);
PPC_FUNC_IMPL(__imp__sub_8329B188) {
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
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x830e71d8
	ctx.lr = 0x8329B1A8;
	sub_830E71D8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19456(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B1C0"))) PPC_WEAK_FUNC(sub_8329B1C0);
PPC_FUNC_IMPL(__imp__sub_8329B1C0) {
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
	// li r6,200
	ctx.r6.s64 = 200;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x830e71d8
	ctx.lr = 0x8329B1E0;
	sub_830E71D8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B1F8"))) PPC_WEAK_FUNC(sub_8329B1F8);
PPC_FUNC_IMPL(__imp__sub_8329B1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-11540
	ctx.r11.s64 = ctx.r11.s64 + -11540;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B214"))) PPC_WEAK_FUNC(sub_8329B214);
PPC_FUNC_IMPL(__imp__sub_8329B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B218"))) PPC_WEAK_FUNC(sub_8329B218);
PPC_FUNC_IMPL(__imp__sub_8329B218) {
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
	// li r6,140
	ctx.r6.s64 = 140;
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x830e71d8
	ctx.lr = 0x8329B238;
	sub_830E71D8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19416(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B250"))) PPC_WEAK_FUNC(sub_8329B250);
PPC_FUNC_IMPL(__imp__sub_8329B250) {
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
	// li r6,140
	ctx.r6.s64 = 140;
	// li r5,70
	ctx.r5.s64 = 70;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x830e71d8
	ctx.lr = 0x8329B270;
	sub_830E71D8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19412(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B288"))) PPC_WEAK_FUNC(sub_8329B288);
PPC_FUNC_IMPL(__imp__sub_8329B288) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-10916
	ctx.r11.s64 = ctx.r11.s64 + -10916;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B2A4"))) PPC_WEAK_FUNC(sub_8329B2A4);
PPC_FUNC_IMPL(__imp__sub_8329B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B2A8"))) PPC_WEAK_FUNC(sub_8329B2A8);
PPC_FUNC_IMPL(__imp__sub_8329B2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-10760
	ctx.r11.s64 = ctx.r11.s64 + -10760;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B2C4"))) PPC_WEAK_FUNC(sub_8329B2C4);
PPC_FUNC_IMPL(__imp__sub_8329B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B2C8"))) PPC_WEAK_FUNC(sub_8329B2C8);
PPC_FUNC_IMPL(__imp__sub_8329B2C8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-31584
	ctx.r11.s64 = ctx.r11.s64 + -31584;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r8,r11,288
	ctx.r8.s64 = ctx.r11.s64 + 288;
	// addi r4,r10,-31204
	ctx.r4.s64 = ctx.r10.s64 + -31204;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r3,r10,-19384
	ctx.r3.s64 = ctx.r10.s64 + -19384;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329B324;
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

__attribute__((alias("__imp__sub_8329B334"))) PPC_WEAK_FUNC(sub_8329B334);
PPC_FUNC_IMPL(__imp__sub_8329B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B338"))) PPC_WEAK_FUNC(sub_8329B338);
PPC_FUNC_IMPL(__imp__sub_8329B338) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,-31164
	ctx.r4.s64 = ctx.r10.s64 + -31164;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-19336
	ctx.r3.s64 = ctx.r10.s64 + -19336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329B388;
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

__attribute__((alias("__imp__sub_8329B398"))) PPC_WEAK_FUNC(sub_8329B398);
PPC_FUNC_IMPL(__imp__sub_8329B398) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r11,-31112
	ctx.r8.s64 = ctx.r11.s64 + -31112;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,-31016
	ctx.r4.s64 = ctx.r10.s64 + -31016;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19288
	ctx.r3.s64 = ctx.r10.s64 + -19288;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329B3F8;
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

__attribute__((alias("__imp__sub_8329B408"))) PPC_WEAK_FUNC(sub_8329B408);
PPC_FUNC_IMPL(__imp__sub_8329B408) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-30888
	ctx.r4.s64 = ctx.r10.s64 + -30888;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-19236
	ctx.r3.s64 = ctx.r10.s64 + -19236;
	// addi r5,r11,-27704
	ctx.r5.s64 = ctx.r11.s64 + -27704;
	// bl 0x82e86010
	ctx.lr = 0x8329B434;
	sub_82E86010(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2072
	ctx.r3.s64 = ctx.r11.s64 + 2072;
	// bl 0x82ca3700
	ctx.lr = 0x8329B440;
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

__attribute__((alias("__imp__sub_8329B450"))) PPC_WEAK_FUNC(sub_8329B450);
PPC_FUNC_IMPL(__imp__sub_8329B450) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-30676
	ctx.r4.s64 = ctx.r10.s64 + -30676;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18960
	ctx.r3.s64 = ctx.r10.s64 + -18960;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24688
	ctx.r5.s64 = ctx.r11.s64 + -24688;
	// bl 0x82e82ef0
	ctx.lr = 0x8329B484;
	sub_82E82EF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// bl 0x82ca3700
	ctx.lr = 0x8329B490;
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

__attribute__((alias("__imp__sub_8329B4A0"))) PPC_WEAK_FUNC(sub_8329B4A0);
PPC_FUNC_IMPL(__imp__sub_8329B4A0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-30628
	ctx.r4.s64 = ctx.r10.s64 + -30628;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18684
	ctx.r3.s64 = ctx.r10.s64 + -18684;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21712
	ctx.r5.s64 = ctx.r11.s64 + -21712;
	// bl 0x82e82ef0
	ctx.lr = 0x8329B4D4;
	sub_82E82EF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// bl 0x82ca3700
	ctx.lr = 0x8329B4E0;
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

__attribute__((alias("__imp__sub_8329B4F0"))) PPC_WEAK_FUNC(sub_8329B4F0);
PPC_FUNC_IMPL(__imp__sub_8329B4F0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-30560
	ctx.r4.s64 = ctx.r10.s64 + -30560;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18408
	ctx.r3.s64 = ctx.r10.s64 + -18408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16856
	ctx.r5.s64 = ctx.r11.s64 + -16856;
	// bl 0x82e82ef0
	ctx.lr = 0x8329B524;
	sub_82E82EF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// bl 0x82ca3700
	ctx.lr = 0x8329B530;
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

__attribute__((alias("__imp__sub_8329B540"))) PPC_WEAK_FUNC(sub_8329B540);
PPC_FUNC_IMPL(__imp__sub_8329B540) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-30432
	ctx.r4.s64 = ctx.r10.s64 + -30432;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18132
	ctx.r3.s64 = ctx.r10.s64 + -18132;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12576
	ctx.r5.s64 = ctx.r11.s64 + -12576;
	// bl 0x82e82ef0
	ctx.lr = 0x8329B574;
	sub_82E82EF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// bl 0x82ca3700
	ctx.lr = 0x8329B580;
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

__attribute__((alias("__imp__sub_8329B590"))) PPC_WEAK_FUNC(sub_8329B590);
PPC_FUNC_IMPL(__imp__sub_8329B590) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-30412
	ctx.r4.s64 = ctx.r10.s64 + -30412;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17856
	ctx.r3.s64 = ctx.r10.s64 + -17856;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12104
	ctx.r5.s64 = ctx.r11.s64 + -12104;
	// bl 0x82e82ef0
	ctx.lr = 0x8329B5C4;
	sub_82E82EF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2192
	ctx.r3.s64 = ctx.r11.s64 + 2192;
	// bl 0x82ca3700
	ctx.lr = 0x8329B5D0;
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

__attribute__((alias("__imp__sub_8329B5E0"))) PPC_WEAK_FUNC(sub_8329B5E0);
PPC_FUNC_IMPL(__imp__sub_8329B5E0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-30312
	ctx.r4.s64 = ctx.r10.s64 + -30312;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-17576
	ctx.r3.s64 = ctx.r10.s64 + -17576;
	// addi r5,r11,-5720
	ctx.r5.s64 = ctx.r11.s64 + -5720;
	// bl 0x82e86010
	ctx.lr = 0x8329B60C;
	sub_82E86010(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2216
	ctx.r3.s64 = ctx.r11.s64 + 2216;
	// bl 0x82ca3700
	ctx.lr = 0x8329B618;
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

__attribute__((alias("__imp__sub_8329B628"))) PPC_WEAK_FUNC(sub_8329B628);
PPC_FUNC_IMPL(__imp__sub_8329B628) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29988
	ctx.r4.s64 = ctx.r10.s64 + -29988;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17300
	ctx.r3.s64 = ctx.r10.s64 + -17300;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3984
	ctx.r5.s64 = ctx.r11.s64 + -3984;
	// bl 0x82e82ef0
	ctx.lr = 0x8329B65C;
	sub_82E82EF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2240
	ctx.r3.s64 = ctx.r11.s64 + 2240;
	// bl 0x82ca3700
	ctx.lr = 0x8329B668;
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

__attribute__((alias("__imp__sub_8329B678"))) PPC_WEAK_FUNC(sub_8329B678);
PPC_FUNC_IMPL(__imp__sub_8329B678) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29832
	ctx.r4.s64 = ctx.r10.s64 + -29832;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17024
	ctx.r3.s64 = ctx.r10.s64 + -17024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8304
	ctx.r5.s64 = ctx.r11.s64 + 8304;
	// bl 0x82e82ef0
	ctx.lr = 0x8329B6AC;
	sub_82E82EF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2264
	ctx.r3.s64 = ctx.r11.s64 + 2264;
	// bl 0x82ca3700
	ctx.lr = 0x8329B6B8;
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

__attribute__((alias("__imp__sub_8329B6C8"))) PPC_WEAK_FUNC(sub_8329B6C8);
PPC_FUNC_IMPL(__imp__sub_8329B6C8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29792
	ctx.r4.s64 = ctx.r10.s64 + -29792;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-16748
	ctx.r3.s64 = ctx.r10.s64 + -16748;
	// addi r5,r11,10248
	ctx.r5.s64 = ctx.r11.s64 + 10248;
	// bl 0x82e78eb8
	ctx.lr = 0x8329B6F4;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2288
	ctx.r3.s64 = ctx.r11.s64 + 2288;
	// bl 0x82ca3700
	ctx.lr = 0x8329B700;
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

__attribute__((alias("__imp__sub_8329B710"))) PPC_WEAK_FUNC(sub_8329B710);
PPC_FUNC_IMPL(__imp__sub_8329B710) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29752
	ctx.r4.s64 = ctx.r10.s64 + -29752;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-16472
	ctx.r3.s64 = ctx.r10.s64 + -16472;
	// addi r5,r11,10352
	ctx.r5.s64 = ctx.r11.s64 + 10352;
	// bl 0x82e78eb8
	ctx.lr = 0x8329B73C;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2312
	ctx.r3.s64 = ctx.r11.s64 + 2312;
	// bl 0x82ca3700
	ctx.lr = 0x8329B748;
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

__attribute__((alias("__imp__sub_8329B758"))) PPC_WEAK_FUNC(sub_8329B758);
PPC_FUNC_IMPL(__imp__sub_8329B758) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29716
	ctx.r4.s64 = ctx.r10.s64 + -29716;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-16196
	ctx.r3.s64 = ctx.r10.s64 + -16196;
	// addi r5,r11,10480
	ctx.r5.s64 = ctx.r11.s64 + 10480;
	// bl 0x82e78eb8
	ctx.lr = 0x8329B784;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2336
	ctx.r3.s64 = ctx.r11.s64 + 2336;
	// bl 0x82ca3700
	ctx.lr = 0x8329B790;
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

__attribute__((alias("__imp__sub_8329B7A0"))) PPC_WEAK_FUNC(sub_8329B7A0);
PPC_FUNC_IMPL(__imp__sub_8329B7A0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29680
	ctx.r4.s64 = ctx.r10.s64 + -29680;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-15920
	ctx.r3.s64 = ctx.r10.s64 + -15920;
	// addi r5,r11,10704
	ctx.r5.s64 = ctx.r11.s64 + 10704;
	// bl 0x82e78eb8
	ctx.lr = 0x8329B7CC;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2360
	ctx.r3.s64 = ctx.r11.s64 + 2360;
	// bl 0x82ca3700
	ctx.lr = 0x8329B7D8;
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

__attribute__((alias("__imp__sub_8329B7E8"))) PPC_WEAK_FUNC(sub_8329B7E8);
PPC_FUNC_IMPL(__imp__sub_8329B7E8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29644
	ctx.r4.s64 = ctx.r10.s64 + -29644;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-15644
	ctx.r3.s64 = ctx.r10.s64 + -15644;
	// addi r5,r11,10968
	ctx.r5.s64 = ctx.r11.s64 + 10968;
	// bl 0x82e78eb8
	ctx.lr = 0x8329B814;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// bl 0x82ca3700
	ctx.lr = 0x8329B820;
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

__attribute__((alias("__imp__sub_8329B830"))) PPC_WEAK_FUNC(sub_8329B830);
PPC_FUNC_IMPL(__imp__sub_8329B830) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29600
	ctx.r4.s64 = ctx.r10.s64 + -29600;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-15368
	ctx.r3.s64 = ctx.r10.s64 + -15368;
	// addi r5,r11,11208
	ctx.r5.s64 = ctx.r11.s64 + 11208;
	// bl 0x82e78eb8
	ctx.lr = 0x8329B85C;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2408
	ctx.r3.s64 = ctx.r11.s64 + 2408;
	// bl 0x82ca3700
	ctx.lr = 0x8329B868;
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

__attribute__((alias("__imp__sub_8329B878"))) PPC_WEAK_FUNC(sub_8329B878);
PPC_FUNC_IMPL(__imp__sub_8329B878) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29580
	ctx.r4.s64 = ctx.r10.s64 + -29580;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-15092
	ctx.r3.s64 = ctx.r10.s64 + -15092;
	// addi r5,r11,11320
	ctx.r5.s64 = ctx.r11.s64 + 11320;
	// bl 0x82e77618
	ctx.lr = 0x8329B8A4;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// bl 0x82ca3700
	ctx.lr = 0x8329B8B0;
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

__attribute__((alias("__imp__sub_8329B8C0"))) PPC_WEAK_FUNC(sub_8329B8C0);
PPC_FUNC_IMPL(__imp__sub_8329B8C0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29560
	ctx.r4.s64 = ctx.r10.s64 + -29560;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-14816
	ctx.r3.s64 = ctx.r10.s64 + -14816;
	// addi r5,r11,11392
	ctx.r5.s64 = ctx.r11.s64 + 11392;
	// bl 0x82e77618
	ctx.lr = 0x8329B8EC;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// bl 0x82ca3700
	ctx.lr = 0x8329B8F8;
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

__attribute__((alias("__imp__sub_8329B908"))) PPC_WEAK_FUNC(sub_8329B908);
PPC_FUNC_IMPL(__imp__sub_8329B908) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29520
	ctx.r4.s64 = ctx.r10.s64 + -29520;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-14540
	ctx.r3.s64 = ctx.r10.s64 + -14540;
	// addi r5,r11,11480
	ctx.r5.s64 = ctx.r11.s64 + 11480;
	// bl 0x82e77618
	ctx.lr = 0x8329B934;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2480
	ctx.r3.s64 = ctx.r11.s64 + 2480;
	// bl 0x82ca3700
	ctx.lr = 0x8329B940;
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

__attribute__((alias("__imp__sub_8329B950"))) PPC_WEAK_FUNC(sub_8329B950);
PPC_FUNC_IMPL(__imp__sub_8329B950) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29476
	ctx.r4.s64 = ctx.r10.s64 + -29476;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-14264
	ctx.r3.s64 = ctx.r10.s64 + -14264;
	// addi r5,r11,11680
	ctx.r5.s64 = ctx.r11.s64 + 11680;
	// bl 0x82e77618
	ctx.lr = 0x8329B97C;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
	// bl 0x82ca3700
	ctx.lr = 0x8329B988;
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

__attribute__((alias("__imp__sub_8329B998"))) PPC_WEAK_FUNC(sub_8329B998);
PPC_FUNC_IMPL(__imp__sub_8329B998) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29436
	ctx.r4.s64 = ctx.r10.s64 + -29436;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13988
	ctx.r3.s64 = ctx.r10.s64 + -13988;
	// addi r5,r11,11952
	ctx.r5.s64 = ctx.r11.s64 + 11952;
	// bl 0x82e77618
	ctx.lr = 0x8329B9C4;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2528
	ctx.r3.s64 = ctx.r11.s64 + 2528;
	// bl 0x82ca3700
	ctx.lr = 0x8329B9D0;
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

__attribute__((alias("__imp__sub_8329B9E0"))) PPC_WEAK_FUNC(sub_8329B9E0);
PPC_FUNC_IMPL(__imp__sub_8329B9E0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29400
	ctx.r4.s64 = ctx.r10.s64 + -29400;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13712
	ctx.r3.s64 = ctx.r10.s64 + -13712;
	// addi r5,r11,12192
	ctx.r5.s64 = ctx.r11.s64 + 12192;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BA0C;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2552
	ctx.r3.s64 = ctx.r11.s64 + 2552;
	// bl 0x82ca3700
	ctx.lr = 0x8329BA18;
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

__attribute__((alias("__imp__sub_8329BA28"))) PPC_WEAK_FUNC(sub_8329BA28);
PPC_FUNC_IMPL(__imp__sub_8329BA28) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29356
	ctx.r4.s64 = ctx.r10.s64 + -29356;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13436
	ctx.r3.s64 = ctx.r10.s64 + -13436;
	// addi r5,r11,12296
	ctx.r5.s64 = ctx.r11.s64 + 12296;
	// bl 0x82e77618
	ctx.lr = 0x8329BA54;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2576
	ctx.r3.s64 = ctx.r11.s64 + 2576;
	// bl 0x82ca3700
	ctx.lr = 0x8329BA60;
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

__attribute__((alias("__imp__sub_8329BA70"))) PPC_WEAK_FUNC(sub_8329BA70);
PPC_FUNC_IMPL(__imp__sub_8329BA70) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29320
	ctx.r4.s64 = ctx.r10.s64 + -29320;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13160
	ctx.r3.s64 = ctx.r10.s64 + -13160;
	// addi r5,r11,12384
	ctx.r5.s64 = ctx.r11.s64 + 12384;
	// bl 0x82e77618
	ctx.lr = 0x8329BA9C;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2600
	ctx.r3.s64 = ctx.r11.s64 + 2600;
	// bl 0x82ca3700
	ctx.lr = 0x8329BAA8;
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

__attribute__((alias("__imp__sub_8329BAB8"))) PPC_WEAK_FUNC(sub_8329BAB8);
PPC_FUNC_IMPL(__imp__sub_8329BAB8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29280
	ctx.r4.s64 = ctx.r10.s64 + -29280;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12884
	ctx.r3.s64 = ctx.r10.s64 + -12884;
	// addi r5,r11,12472
	ctx.r5.s64 = ctx.r11.s64 + 12472;
	// bl 0x82e77618
	ctx.lr = 0x8329BAE4;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// bl 0x82ca3700
	ctx.lr = 0x8329BAF0;
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

__attribute__((alias("__imp__sub_8329BB00"))) PPC_WEAK_FUNC(sub_8329BB00);
PPC_FUNC_IMPL(__imp__sub_8329BB00) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29228
	ctx.r4.s64 = ctx.r10.s64 + -29228;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12600
	ctx.r3.s64 = ctx.r10.s64 + -12600;
	// addi r5,r11,13848
	ctx.r5.s64 = ctx.r11.s64 + 13848;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BB2C;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// bl 0x82ca3700
	ctx.lr = 0x8329BB38;
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

__attribute__((alias("__imp__sub_8329BB48"))) PPC_WEAK_FUNC(sub_8329BB48);
PPC_FUNC_IMPL(__imp__sub_8329BB48) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29192
	ctx.r4.s64 = ctx.r10.s64 + -29192;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12324
	ctx.r3.s64 = ctx.r10.s64 + -12324;
	// addi r5,r11,14304
	ctx.r5.s64 = ctx.r11.s64 + 14304;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BB74;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// bl 0x82ca3700
	ctx.lr = 0x8329BB80;
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

__attribute__((alias("__imp__sub_8329BB90"))) PPC_WEAK_FUNC(sub_8329BB90);
PPC_FUNC_IMPL(__imp__sub_8329BB90) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29156
	ctx.r4.s64 = ctx.r10.s64 + -29156;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12048
	ctx.r3.s64 = ctx.r10.s64 + -12048;
	// addi r5,r11,14488
	ctx.r5.s64 = ctx.r11.s64 + 14488;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BBBC;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// bl 0x82ca3700
	ctx.lr = 0x8329BBC8;
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

__attribute__((alias("__imp__sub_8329BBD8"))) PPC_WEAK_FUNC(sub_8329BBD8);
PPC_FUNC_IMPL(__imp__sub_8329BBD8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29112
	ctx.r4.s64 = ctx.r10.s64 + -29112;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-11772
	ctx.r3.s64 = ctx.r10.s64 + -11772;
	// addi r5,r11,14592
	ctx.r5.s64 = ctx.r11.s64 + 14592;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BC04;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2720
	ctx.r3.s64 = ctx.r11.s64 + 2720;
	// bl 0x82ca3700
	ctx.lr = 0x8329BC10;
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

__attribute__((alias("__imp__sub_8329BC20"))) PPC_WEAK_FUNC(sub_8329BC20);
PPC_FUNC_IMPL(__imp__sub_8329BC20) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29072
	ctx.r4.s64 = ctx.r10.s64 + -29072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-11496
	ctx.r3.s64 = ctx.r10.s64 + -11496;
	// addi r5,r11,14808
	ctx.r5.s64 = ctx.r11.s64 + 14808;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BC4C;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// bl 0x82ca3700
	ctx.lr = 0x8329BC58;
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

__attribute__((alias("__imp__sub_8329BC68"))) PPC_WEAK_FUNC(sub_8329BC68);
PPC_FUNC_IMPL(__imp__sub_8329BC68) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-29028
	ctx.r4.s64 = ctx.r10.s64 + -29028;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-11220
	ctx.r3.s64 = ctx.r10.s64 + -11220;
	// addi r5,r11,15016
	ctx.r5.s64 = ctx.r11.s64 + 15016;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BC94;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2768
	ctx.r3.s64 = ctx.r11.s64 + 2768;
	// bl 0x82ca3700
	ctx.lr = 0x8329BCA0;
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

__attribute__((alias("__imp__sub_8329BCB0"))) PPC_WEAK_FUNC(sub_8329BCB0);
PPC_FUNC_IMPL(__imp__sub_8329BCB0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-28984
	ctx.r4.s64 = ctx.r10.s64 + -28984;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-10944
	ctx.r3.s64 = ctx.r10.s64 + -10944;
	// addi r5,r11,15120
	ctx.r5.s64 = ctx.r11.s64 + 15120;
	// bl 0x82e77618
	ctx.lr = 0x8329BCDC;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2792
	ctx.r3.s64 = ctx.r11.s64 + 2792;
	// bl 0x82ca3700
	ctx.lr = 0x8329BCE8;
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

__attribute__((alias("__imp__sub_8329BCF8"))) PPC_WEAK_FUNC(sub_8329BCF8);
PPC_FUNC_IMPL(__imp__sub_8329BCF8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-28936
	ctx.r4.s64 = ctx.r10.s64 + -28936;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-10668
	ctx.r3.s64 = ctx.r10.s64 + -10668;
	// addi r5,r11,15208
	ctx.r5.s64 = ctx.r11.s64 + 15208;
	// bl 0x82e77618
	ctx.lr = 0x8329BD24;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// bl 0x82ca3700
	ctx.lr = 0x8329BD30;
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

__attribute__((alias("__imp__sub_8329BD40"))) PPC_WEAK_FUNC(sub_8329BD40);
PPC_FUNC_IMPL(__imp__sub_8329BD40) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-28892
	ctx.r4.s64 = ctx.r10.s64 + -28892;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-10392
	ctx.r3.s64 = ctx.r10.s64 + -10392;
	// addi r5,r11,15296
	ctx.r5.s64 = ctx.r11.s64 + 15296;
	// bl 0x82e77618
	ctx.lr = 0x8329BD6C;
	sub_82E77618(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2840
	ctx.r3.s64 = ctx.r11.s64 + 2840;
	// bl 0x82ca3700
	ctx.lr = 0x8329BD78;
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

__attribute__((alias("__imp__sub_8329BD88"))) PPC_WEAK_FUNC(sub_8329BD88);
PPC_FUNC_IMPL(__imp__sub_8329BD88) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-28856
	ctx.r4.s64 = ctx.r10.s64 + -28856;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-10116
	ctx.r3.s64 = ctx.r10.s64 + -10116;
	// addi r5,r11,15488
	ctx.r5.s64 = ctx.r11.s64 + 15488;
	// bl 0x82e78eb8
	ctx.lr = 0x8329BDB4;
	sub_82E78EB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2864
	ctx.r3.s64 = ctx.r11.s64 + 2864;
	// bl 0x82ca3700
	ctx.lr = 0x8329BDC0;
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

__attribute__((alias("__imp__sub_8329BDD0"))) PPC_WEAK_FUNC(sub_8329BDD0);
PPC_FUNC_IMPL(__imp__sub_8329BDD0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-28676
	ctx.r4.s64 = ctx.r10.s64 + -28676;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8808
	ctx.r3.s64 = ctx.r10.s64 + -8808;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19712
	ctx.r5.s64 = ctx.r11.s64 + 19712;
	// bl 0x82e7efd8
	ctx.lr = 0x8329BE04;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x82ca3700
	ctx.lr = 0x8329BE10;
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

__attribute__((alias("__imp__sub_8329BE20"))) PPC_WEAK_FUNC(sub_8329BE20);
PPC_FUNC_IMPL(__imp__sub_8329BE20) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-28624
	ctx.r4.s64 = ctx.r10.s64 + -28624;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8532
	ctx.r3.s64 = ctx.r10.s64 + -8532;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23312
	ctx.r5.s64 = ctx.r11.s64 + 23312;
	// bl 0x82e7efd8
	ctx.lr = 0x8329BE54;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2936
	ctx.r3.s64 = ctx.r11.s64 + 2936;
	// bl 0x82ca3700
	ctx.lr = 0x8329BE60;
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

__attribute__((alias("__imp__sub_8329BE70"))) PPC_WEAK_FUNC(sub_8329BE70);
PPC_FUNC_IMPL(__imp__sub_8329BE70) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r4,r10,-28568
	ctx.r4.s64 = ctx.r10.s64 + -28568;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8256
	ctx.r3.s64 = ctx.r10.s64 + -8256;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24552
	ctx.r5.s64 = ctx.r11.s64 + 24552;
	// bl 0x82e7efd8
	ctx.lr = 0x8329BEA4;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// bl 0x82ca3700
	ctx.lr = 0x8329BEB0;
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

__attribute__((alias("__imp__sub_8329BEC0"))) PPC_WEAK_FUNC(sub_8329BEC0);
PPC_FUNC_IMPL(__imp__sub_8329BEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3152
	ctx.r3.s64 = ctx.r11.s64 + 3152;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BECC"))) PPC_WEAK_FUNC(sub_8329BECC);
PPC_FUNC_IMPL(__imp__sub_8329BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BED0"))) PPC_WEAK_FUNC(sub_8329BED0);
PPC_FUNC_IMPL(__imp__sub_8329BED0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r4,r10,-28152
	ctx.r4.s64 = ctx.r10.s64 + -28152;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-716
	ctx.r31.s64 = ctx.r10.s64 + -716;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16728
	ctx.r5.s64 = ctx.r11.s64 + -16728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7c8f8
	ctx.lr = 0x8329BF0C;
	sub_82E7C8F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,3160
	ctx.r3.s64 = ctx.r10.s64 + 3160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329BF24;
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

__attribute__((alias("__imp__sub_8329BF38"))) PPC_WEAK_FUNC(sub_8329BF38);
PPC_FUNC_IMPL(__imp__sub_8329BF38) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-27580
	ctx.r4.s64 = ctx.r11.s64 + -27580;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e7ef98
	ctx.lr = 0x8329BF68;
	sub_82E7EF98(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3256
	ctx.r3.s64 = ctx.r11.s64 + 3256;
	// bl 0x82ca3700
	ctx.lr = 0x8329BF74;
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

__attribute__((alias("__imp__sub_8329BF84"))) PPC_WEAK_FUNC(sub_8329BF84);
PPC_FUNC_IMPL(__imp__sub_8329BF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BF88"))) PPC_WEAK_FUNC(sub_8329BF88);
PPC_FUNC_IMPL(__imp__sub_8329BF88) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r4,r10,-27316
	ctx.r4.s64 = ctx.r10.s64 + -27316;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6048
	ctx.r3.s64 = ctx.r10.s64 + 6048;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4552
	ctx.r5.s64 = ctx.r11.s64 + 4552;
	// bl 0x82e7efd8
	ctx.lr = 0x8329BFBC;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3328
	ctx.r3.s64 = ctx.r11.s64 + 3328;
	// bl 0x82ca3700
	ctx.lr = 0x8329BFC8;
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

__attribute__((alias("__imp__sub_8329BFD8"))) PPC_WEAK_FUNC(sub_8329BFD8);
PPC_FUNC_IMPL(__imp__sub_8329BFD8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-27180
	ctx.r4.s64 = ctx.r11.s64 + -27180;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,6600
	ctx.r31.s64 = ctx.r11.s64 + 6600;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e824a0
	ctx.lr = 0x8329C010;
	sub_82E824A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,3400
	ctx.r3.s64 = ctx.r10.s64 + 3400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C028;
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

__attribute__((alias("__imp__sub_8329C03C"))) PPC_WEAK_FUNC(sub_8329C03C);
PPC_FUNC_IMPL(__imp__sub_8329C03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C040"))) PPC_WEAK_FUNC(sub_8329C040);
PPC_FUNC_IMPL(__imp__sub_8329C040) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-27164
	ctx.r4.s64 = ctx.r11.s64 + -27164;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,6324
	ctx.r31.s64 = ctx.r11.s64 + 6324;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e824a0
	ctx.lr = 0x8329C078;
	sub_82E824A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,3376
	ctx.r3.s64 = ctx.r10.s64 + 3376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C090;
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

__attribute__((alias("__imp__sub_8329C0A4"))) PPC_WEAK_FUNC(sub_8329C0A4);
PPC_FUNC_IMPL(__imp__sub_8329C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C0A8"))) PPC_WEAK_FUNC(sub_8329C0A8);
PPC_FUNC_IMPL(__imp__sub_8329C0A8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-27076
	ctx.r4.s64 = ctx.r11.s64 + -27076;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,7912
	ctx.r31.s64 = ctx.r11.s64 + 7912;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e83218
	ctx.lr = 0x8329C0E0;
	sub_82E83218(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,3424
	ctx.r3.s64 = ctx.r10.s64 + 3424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C0F8;
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

__attribute__((alias("__imp__sub_8329C10C"))) PPC_WEAK_FUNC(sub_8329C10C);
PPC_FUNC_IMPL(__imp__sub_8329C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C110"))) PPC_WEAK_FUNC(sub_8329C110);
PPC_FUNC_IMPL(__imp__sub_8329C110) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r4,r10,-26980
	ctx.r4.s64 = ctx.r10.s64 + -26980;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,8192
	ctx.r31.s64 = ctx.r10.s64 + 8192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15264
	ctx.r5.s64 = ctx.r11.s64 + 15264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e83dc0
	ctx.lr = 0x8329C14C;
	sub_82E83DC0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-26984
	ctx.r11.s64 = ctx.r11.s64 + -26984;
	// addi r3,r10,3472
	ctx.r3.s64 = ctx.r10.s64 + 3472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C164;
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

__attribute__((alias("__imp__sub_8329C178"))) PPC_WEAK_FUNC(sub_8329C178);
PPC_FUNC_IMPL(__imp__sub_8329C178) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r4,r10,-26864
	ctx.r4.s64 = ctx.r10.s64 + -26864;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,8468
	ctx.r3.s64 = ctx.r10.s64 + 8468;
	// addi r5,r11,19824
	ctx.r5.s64 = ctx.r11.s64 + 19824;
	// bl 0x82e7fa98
	ctx.lr = 0x8329C1A4;
	sub_82E7FA98(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3496
	ctx.r3.s64 = ctx.r11.s64 + 3496;
	// bl 0x82ca3700
	ctx.lr = 0x8329C1B0;
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

__attribute__((alias("__imp__sub_8329C1C0"))) PPC_WEAK_FUNC(sub_8329C1C0);
PPC_FUNC_IMPL(__imp__sub_8329C1C0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r4,r10,-26816
	ctx.r4.s64 = ctx.r10.s64 + -26816;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,8744
	ctx.r3.s64 = ctx.r10.s64 + 8744;
	// addi r5,r11,20560
	ctx.r5.s64 = ctx.r11.s64 + 20560;
	// bl 0x82e7fa98
	ctx.lr = 0x8329C1EC;
	sub_82E7FA98(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3520
	ctx.r3.s64 = ctx.r11.s64 + 3520;
	// bl 0x82ca3700
	ctx.lr = 0x8329C1F8;
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

__attribute__((alias("__imp__sub_8329C208"))) PPC_WEAK_FUNC(sub_8329C208);
PPC_FUNC_IMPL(__imp__sub_8329C208) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r4,r10,-26732
	ctx.r4.s64 = ctx.r10.s64 + -26732;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,9020
	ctx.r3.s64 = ctx.r10.s64 + 9020;
	// addi r5,r11,21728
	ctx.r5.s64 = ctx.r11.s64 + 21728;
	// bl 0x82e7fa98
	ctx.lr = 0x8329C234;
	sub_82E7FA98(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3544
	ctx.r3.s64 = ctx.r11.s64 + 3544;
	// bl 0x82ca3700
	ctx.lr = 0x8329C240;
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

__attribute__((alias("__imp__sub_8329C250"))) PPC_WEAK_FUNC(sub_8329C250);
PPC_FUNC_IMPL(__imp__sub_8329C250) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r4,r10,-26476
	ctx.r4.s64 = ctx.r10.s64 + -26476;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11360
	ctx.r3.s64 = ctx.r10.s64 + 11360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29128
	ctx.r5.s64 = ctx.r11.s64 + 29128;
	// bl 0x82e7efd8
	ctx.lr = 0x8329C284;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3592
	ctx.r3.s64 = ctx.r11.s64 + 3592;
	// bl 0x82ca3700
	ctx.lr = 0x8329C290;
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

__attribute__((alias("__imp__sub_8329C2A0"))) PPC_WEAK_FUNC(sub_8329C2A0);
PPC_FUNC_IMPL(__imp__sub_8329C2A0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-26268
	ctx.r4.s64 = ctx.r11.s64 + -26268;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22084
	ctx.r3.s64 = ctx.r11.s64 + 22084;
	// bl 0x82e7f410
	ctx.lr = 0x8329C2C8;
	sub_82E7F410(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3856
	ctx.r3.s64 = ctx.r11.s64 + 3856;
	// bl 0x82ca3700
	ctx.lr = 0x8329C2D4;
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

__attribute__((alias("__imp__sub_8329C2E4"))) PPC_WEAK_FUNC(sub_8329C2E4);
PPC_FUNC_IMPL(__imp__sub_8329C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C2E8"))) PPC_WEAK_FUNC(sub_8329C2E8);
PPC_FUNC_IMPL(__imp__sub_8329C2E8) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,22084
	ctx.r6.s64 = ctx.r11.s64 + 22084;
	// addi r4,r10,-26256
	ctx.r4.s64 = ctx.r10.s64 + -26256;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,-30088
	ctx.r5.s64 = ctx.r11.s64 + -30088;
	// addi r3,r10,20704
	ctx.r3.s64 = ctx.r10.s64 + 20704;
	// bl 0x82e7f410
	ctx.lr = 0x8329C318;
	sub_82E7F410(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3664
	ctx.r3.s64 = ctx.r11.s64 + 3664;
	// bl 0x82ca3700
	ctx.lr = 0x8329C324;
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

__attribute__((alias("__imp__sub_8329C334"))) PPC_WEAK_FUNC(sub_8329C334);
PPC_FUNC_IMPL(__imp__sub_8329C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C338"))) PPC_WEAK_FUNC(sub_8329C338);
PPC_FUNC_IMPL(__imp__sub_8329C338) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,22084
	ctx.r6.s64 = ctx.r11.s64 + 22084;
	// addi r4,r10,-26232
	ctx.r4.s64 = ctx.r10.s64 + -26232;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,-25704
	ctx.r5.s64 = ctx.r11.s64 + -25704;
	// addi r3,r10,21808
	ctx.r3.s64 = ctx.r10.s64 + 21808;
	// bl 0x82e7f410
	ctx.lr = 0x8329C368;
	sub_82E7F410(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3688
	ctx.r3.s64 = ctx.r11.s64 + 3688;
	// bl 0x82ca3700
	ctx.lr = 0x8329C374;
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

__attribute__((alias("__imp__sub_8329C384"))) PPC_WEAK_FUNC(sub_8329C384);
PPC_FUNC_IMPL(__imp__sub_8329C384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C388"))) PPC_WEAK_FUNC(sub_8329C388);
PPC_FUNC_IMPL(__imp__sub_8329C388) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,22084
	ctx.r6.s64 = ctx.r11.s64 + 22084;
	// addi r4,r10,-26208
	ctx.r4.s64 = ctx.r10.s64 + -26208;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,-27408
	ctx.r5.s64 = ctx.r11.s64 + -27408;
	// addi r3,r10,20980
	ctx.r3.s64 = ctx.r10.s64 + 20980;
	// bl 0x82e7f410
	ctx.lr = 0x8329C3B8;
	sub_82E7F410(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3712
	ctx.r3.s64 = ctx.r11.s64 + 3712;
	// bl 0x82ca3700
	ctx.lr = 0x8329C3C4;
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

__attribute__((alias("__imp__sub_8329C3D4"))) PPC_WEAK_FUNC(sub_8329C3D4);
PPC_FUNC_IMPL(__imp__sub_8329C3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C3D8"))) PPC_WEAK_FUNC(sub_8329C3D8);
PPC_FUNC_IMPL(__imp__sub_8329C3D8) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,22084
	ctx.r6.s64 = ctx.r11.s64 + 22084;
	// addi r4,r10,-26172
	ctx.r4.s64 = ctx.r10.s64 + -26172;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,-26704
	ctx.r5.s64 = ctx.r11.s64 + -26704;
	// addi r3,r10,22912
	ctx.r3.s64 = ctx.r10.s64 + 22912;
	// bl 0x82e7f410
	ctx.lr = 0x8329C408;
	sub_82E7F410(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3736
	ctx.r3.s64 = ctx.r11.s64 + 3736;
	// bl 0x82ca3700
	ctx.lr = 0x8329C414;
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

__attribute__((alias("__imp__sub_8329C424"))) PPC_WEAK_FUNC(sub_8329C424);
PPC_FUNC_IMPL(__imp__sub_8329C424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C428"))) PPC_WEAK_FUNC(sub_8329C428);
PPC_FUNC_IMPL(__imp__sub_8329C428) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,20704
	ctx.r6.s64 = ctx.r11.s64 + 20704;
	// addi r4,r10,-26144
	ctx.r4.s64 = ctx.r10.s64 + -26144;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,-29344
	ctx.r5.s64 = ctx.r11.s64 + -29344;
	// addi r3,r10,22360
	ctx.r3.s64 = ctx.r10.s64 + 22360;
	// bl 0x82e7f410
	ctx.lr = 0x8329C458;
	sub_82E7F410(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3760
	ctx.r3.s64 = ctx.r11.s64 + 3760;
	// bl 0x82ca3700
	ctx.lr = 0x8329C464;
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

__attribute__((alias("__imp__sub_8329C474"))) PPC_WEAK_FUNC(sub_8329C474);
PPC_FUNC_IMPL(__imp__sub_8329C474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C478"))) PPC_WEAK_FUNC(sub_8329C478);
PPC_FUNC_IMPL(__imp__sub_8329C478) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-26124
	ctx.r4.s64 = ctx.r10.s64 + -26124;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,21532
	ctx.r31.s64 = ctx.r10.s64 + 21532;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29104
	ctx.r5.s64 = ctx.r11.s64 + -29104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89d10
	ctx.lr = 0x8329C4B4;
	sub_82E89D10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,3784
	ctx.r3.s64 = ctx.r10.s64 + 3784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C4CC;
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

__attribute__((alias("__imp__sub_8329C4E0"))) PPC_WEAK_FUNC(sub_8329C4E0);
PPC_FUNC_IMPL(__imp__sub_8329C4E0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-26096
	ctx.r4.s64 = ctx.r10.s64 + -26096;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,22636
	ctx.r31.s64 = ctx.r10.s64 + 22636;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29032
	ctx.r5.s64 = ctx.r11.s64 + -29032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89d10
	ctx.lr = 0x8329C51C;
	sub_82E89D10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,3808
	ctx.r3.s64 = ctx.r10.s64 + 3808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C534;
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

__attribute__((alias("__imp__sub_8329C548"))) PPC_WEAK_FUNC(sub_8329C548);
PPC_FUNC_IMPL(__imp__sub_8329C548) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-26080
	ctx.r4.s64 = ctx.r10.s64 + -26080;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,21256
	ctx.r31.s64 = ctx.r10.s64 + 21256;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28960
	ctx.r5.s64 = ctx.r11.s64 + -28960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89d10
	ctx.lr = 0x8329C584;
	sub_82E89D10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,3832
	ctx.r3.s64 = ctx.r10.s64 + 3832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C59C;
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

__attribute__((alias("__imp__sub_8329C5B0"))) PPC_WEAK_FUNC(sub_8329C5B0);
PPC_FUNC_IMPL(__imp__sub_8329C5B0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-25936
	ctx.r4.s64 = ctx.r11.s64 + -25936;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x82e78e70
	ctx.lr = 0x8329C5D8;
	sub_82E78E70(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3904
	ctx.r3.s64 = ctx.r11.s64 + 3904;
	// bl 0x82ca3700
	ctx.lr = 0x8329C5E4;
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

__attribute__((alias("__imp__sub_8329C5F4"))) PPC_WEAK_FUNC(sub_8329C5F4);
PPC_FUNC_IMPL(__imp__sub_8329C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C5F8"))) PPC_WEAK_FUNC(sub_8329C5F8);
PPC_FUNC_IMPL(__imp__sub_8329C5F8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,1920
	ctx.r5.s64 = ctx.r11.s64 + 1920;
	// addi r3,r10,23468
	ctx.r3.s64 = ctx.r10.s64 + 23468;
	// bl 0x82e92050
	ctx.lr = 0x8329C620;
	sub_82E92050(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3928
	ctx.r3.s64 = ctx.r11.s64 + 3928;
	// bl 0x82ca3700
	ctx.lr = 0x8329C62C;
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

__attribute__((alias("__imp__sub_8329C63C"))) PPC_WEAK_FUNC(sub_8329C63C);
PPC_FUNC_IMPL(__imp__sub_8329C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C640"))) PPC_WEAK_FUNC(sub_8329C640);
PPC_FUNC_IMPL(__imp__sub_8329C640) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25712
	ctx.r4.s64 = ctx.r10.s64 + -25712;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23744
	ctx.r3.s64 = ctx.r10.s64 + 23744;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7728
	ctx.r5.s64 = ctx.r11.s64 + 7728;
	// bl 0x82e7efd8
	ctx.lr = 0x8329C674;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3952
	ctx.r3.s64 = ctx.r11.s64 + 3952;
	// bl 0x82ca3700
	ctx.lr = 0x8329C680;
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

__attribute__((alias("__imp__sub_8329C690"))) PPC_WEAK_FUNC(sub_8329C690);
PPC_FUNC_IMPL(__imp__sub_8329C690) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-25656
	ctx.r4.s64 = ctx.r11.s64 + -25656;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,24296
	ctx.r3.s64 = ctx.r11.s64 + 24296;
	// bl 0x82e83328
	ctx.lr = 0x8329C6B8;
	sub_82E83328(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3976
	ctx.r3.s64 = ctx.r11.s64 + 3976;
	// bl 0x82ca3700
	ctx.lr = 0x8329C6C4;
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

__attribute__((alias("__imp__sub_8329C6D4"))) PPC_WEAK_FUNC(sub_8329C6D4);
PPC_FUNC_IMPL(__imp__sub_8329C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C6D8"))) PPC_WEAK_FUNC(sub_8329C6D8);
PPC_FUNC_IMPL(__imp__sub_8329C6D8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25640
	ctx.r4.s64 = ctx.r10.s64 + -25640;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,24020
	ctx.r3.s64 = ctx.r10.s64 + 24020;
	// addi r5,r11,8568
	ctx.r5.s64 = ctx.r11.s64 + 8568;
	// bl 0x82e832e0
	ctx.lr = 0x8329C704;
	sub_82E832E0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4000
	ctx.r3.s64 = ctx.r11.s64 + 4000;
	// bl 0x82ca3700
	ctx.lr = 0x8329C710;
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

__attribute__((alias("__imp__sub_8329C720"))) PPC_WEAK_FUNC(sub_8329C720);
PPC_FUNC_IMPL(__imp__sub_8329C720) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,12064
	ctx.r5.s64 = ctx.r11.s64 + 12064;
	// addi r3,r10,24572
	ctx.r3.s64 = ctx.r10.s64 + 24572;
	// bl 0x82ea7c38
	ctx.lr = 0x8329C748;
	sub_82EA7C38(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4024
	ctx.r3.s64 = ctx.r11.s64 + 4024;
	// bl 0x82ca3700
	ctx.lr = 0x8329C754;
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

__attribute__((alias("__imp__sub_8329C764"))) PPC_WEAK_FUNC(sub_8329C764);
PPC_FUNC_IMPL(__imp__sub_8329C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C768"))) PPC_WEAK_FUNC(sub_8329C768);
PPC_FUNC_IMPL(__imp__sub_8329C768) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25352
	ctx.r4.s64 = ctx.r10.s64 + -25352;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,24852
	ctx.r3.s64 = ctx.r10.s64 + 24852;
	// addi r5,r11,14712
	ctx.r5.s64 = ctx.r11.s64 + 14712;
	// bl 0x82e9ad10
	ctx.lr = 0x8329C794;
	sub_82E9AD10(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4048
	ctx.r3.s64 = ctx.r11.s64 + 4048;
	// bl 0x82ca3700
	ctx.lr = 0x8329C7A0;
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

__attribute__((alias("__imp__sub_8329C7B0"))) PPC_WEAK_FUNC(sub_8329C7B0);
PPC_FUNC_IMPL(__imp__sub_8329C7B0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25232
	ctx.r4.s64 = ctx.r10.s64 + -25232;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,25132
	ctx.r3.s64 = ctx.r10.s64 + 25132;
	// addi r5,r11,18096
	ctx.r5.s64 = ctx.r11.s64 + 18096;
	// bl 0x82e9ad10
	ctx.lr = 0x8329C7DC;
	sub_82E9AD10(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4072
	ctx.r3.s64 = ctx.r11.s64 + 4072;
	// bl 0x82ca3700
	ctx.lr = 0x8329C7E8;
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

__attribute__((alias("__imp__sub_8329C7F8"))) PPC_WEAK_FUNC(sub_8329C7F8);
PPC_FUNC_IMPL(__imp__sub_8329C7F8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25148
	ctx.r4.s64 = ctx.r10.s64 + -25148;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,26440
	ctx.r31.s64 = ctx.r10.s64 + 26440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18352
	ctx.r5.s64 = ctx.r11.s64 + 18352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94940
	ctx.lr = 0x8329C834;
	sub_82E94940(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,4096
	ctx.r3.s64 = ctx.r10.s64 + 4096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C84C;
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

__attribute__((alias("__imp__sub_8329C860"))) PPC_WEAK_FUNC(sub_8329C860);
PPC_FUNC_IMPL(__imp__sub_8329C860) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-25032
	ctx.r4.s64 = ctx.r10.s64 + -25032;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,26716
	ctx.r31.s64 = ctx.r10.s64 + 26716;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20640
	ctx.r5.s64 = ctx.r11.s64 + 20640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94940
	ctx.lr = 0x8329C89C;
	sub_82E94940(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,4144
	ctx.r3.s64 = ctx.r10.s64 + 4144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C8B4;
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

__attribute__((alias("__imp__sub_8329C8C8"))) PPC_WEAK_FUNC(sub_8329C8C8);
PPC_FUNC_IMPL(__imp__sub_8329C8C8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-24940
	ctx.r4.s64 = ctx.r10.s64 + -24940;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,26992
	ctx.r31.s64 = ctx.r10.s64 + 26992;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22232
	ctx.r5.s64 = ctx.r11.s64 + 22232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94940
	ctx.lr = 0x8329C904;
	sub_82E94940(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,4168
	ctx.r3.s64 = ctx.r10.s64 + 4168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C91C;
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

__attribute__((alias("__imp__sub_8329C930"))) PPC_WEAK_FUNC(sub_8329C930);
PPC_FUNC_IMPL(__imp__sub_8329C930) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-24852
	ctx.r4.s64 = ctx.r10.s64 + -24852;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,27268
	ctx.r31.s64 = ctx.r10.s64 + 27268;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23488
	ctx.r5.s64 = ctx.r11.s64 + 23488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94940
	ctx.lr = 0x8329C96C;
	sub_82E94940(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r10,4192
	ctx.r3.s64 = ctx.r10.s64 + 4192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8329C984;
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

__attribute__((alias("__imp__sub_8329C998"))) PPC_WEAK_FUNC(sub_8329C998);
PPC_FUNC_IMPL(__imp__sub_8329C998) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-24732
	ctx.r4.s64 = ctx.r10.s64 + -24732;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27544
	ctx.r3.s64 = ctx.r10.s64 + 27544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29504
	ctx.r5.s64 = ctx.r11.s64 + 29504;
	// bl 0x82e7efd8
	ctx.lr = 0x8329C9CC;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4216
	ctx.r3.s64 = ctx.r11.s64 + 4216;
	// bl 0x82ca3700
	ctx.lr = 0x8329C9D8;
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

__attribute__((alias("__imp__sub_8329C9E8"))) PPC_WEAK_FUNC(sub_8329C9E8);
PPC_FUNC_IMPL(__imp__sub_8329C9E8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r4,r10,-24644
	ctx.r4.s64 = ctx.r10.s64 + -24644;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,31800
	ctx.r5.s64 = ctx.r11.s64 + 31800;
	// addi r3,r10,27820
	ctx.r3.s64 = ctx.r10.s64 + 27820;
	// bl 0x82e92050
	ctx.lr = 0x8329CA10;
	sub_82E92050(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4240
	ctx.r3.s64 = ctx.r11.s64 + 4240;
	// bl 0x82ca3700
	ctx.lr = 0x8329CA1C;
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

__attribute__((alias("__imp__sub_8329CA2C"))) PPC_WEAK_FUNC(sub_8329CA2C);
PPC_FUNC_IMPL(__imp__sub_8329CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CA30"))) PPC_WEAK_FUNC(sub_8329CA30);
PPC_FUNC_IMPL(__imp__sub_8329CA30) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r4,r10,-24536
	ctx.r4.s64 = ctx.r10.s64 + -24536;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,-31928
	ctx.r5.s64 = ctx.r11.s64 + -31928;
	// addi r3,r10,28096
	ctx.r3.s64 = ctx.r10.s64 + 28096;
	// bl 0x82e92050
	ctx.lr = 0x8329CA58;
	sub_82E92050(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4264
	ctx.r3.s64 = ctx.r11.s64 + 4264;
	// bl 0x82ca3700
	ctx.lr = 0x8329CA64;
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

__attribute__((alias("__imp__sub_8329CA74"))) PPC_WEAK_FUNC(sub_8329CA74);
PPC_FUNC_IMPL(__imp__sub_8329CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CA78"))) PPC_WEAK_FUNC(sub_8329CA78);
PPC_FUNC_IMPL(__imp__sub_8329CA78) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r4,r10,-24472
	ctx.r4.s64 = ctx.r10.s64 + -24472;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r5,r11,-28680
	ctx.r5.s64 = ctx.r11.s64 + -28680;
	// addi r3,r10,28372
	ctx.r3.s64 = ctx.r10.s64 + 28372;
	// bl 0x82e92050
	ctx.lr = 0x8329CAA0;
	sub_82E92050(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4288
	ctx.r3.s64 = ctx.r11.s64 + 4288;
	// bl 0x82ca3700
	ctx.lr = 0x8329CAAC;
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

__attribute__((alias("__imp__sub_8329CABC"))) PPC_WEAK_FUNC(sub_8329CABC);
PPC_FUNC_IMPL(__imp__sub_8329CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CAC0"))) PPC_WEAK_FUNC(sub_8329CAC0);
PPC_FUNC_IMPL(__imp__sub_8329CAC0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24160
	ctx.r4.s64 = ctx.r11.s64 + -24160;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29680
	ctx.r3.s64 = ctx.r11.s64 + 29680;
	// bl 0x82e83328
	ctx.lr = 0x8329CAE8;
	sub_82E83328(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// bl 0x82ca3700
	ctx.lr = 0x8329CAF4;
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

__attribute__((alias("__imp__sub_8329CB04"))) PPC_WEAK_FUNC(sub_8329CB04);
PPC_FUNC_IMPL(__imp__sub_8329CB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CB08"))) PPC_WEAK_FUNC(sub_8329CB08);
PPC_FUNC_IMPL(__imp__sub_8329CB08) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24140
	ctx.r4.s64 = ctx.r11.s64 + -24140;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29956
	ctx.r3.s64 = ctx.r11.s64 + 29956;
	// bl 0x82e78e70
	ctx.lr = 0x8329CB30;
	sub_82E78E70(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4360
	ctx.r3.s64 = ctx.r11.s64 + 4360;
	// bl 0x82ca3700
	ctx.lr = 0x8329CB3C;
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

__attribute__((alias("__imp__sub_8329CB4C"))) PPC_WEAK_FUNC(sub_8329CB4C);
PPC_FUNC_IMPL(__imp__sub_8329CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CB50"))) PPC_WEAK_FUNC(sub_8329CB50);
PPC_FUNC_IMPL(__imp__sub_8329CB50) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r4,r10,-24052
	ctx.r4.s64 = ctx.r10.s64 + -24052;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30304
	ctx.r3.s64 = ctx.r10.s64 + 30304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9216
	ctx.r5.s64 = ctx.r11.s64 + -9216;
	// bl 0x82e7efd8
	ctx.lr = 0x8329CB84;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// bl 0x82ca3700
	ctx.lr = 0x8329CB90;
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

__attribute__((alias("__imp__sub_8329CBA0"))) PPC_WEAK_FUNC(sub_8329CBA0);
PPC_FUNC_IMPL(__imp__sub_8329CBA0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r4,r10,-23736
	ctx.r4.s64 = ctx.r10.s64 + -23736;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,21520
	ctx.r5.s64 = ctx.r11.s64 + 21520;
	// addi r3,r10,-31848
	ctx.r3.s64 = ctx.r10.s64 + -31848;
	// bl 0x82ea3d70
	ctx.lr = 0x8329CBC8;
	sub_82EA3D70(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// bl 0x82ca3700
	ctx.lr = 0x8329CBD4;
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

__attribute__((alias("__imp__sub_8329CBE4"))) PPC_WEAK_FUNC(sub_8329CBE4);
PPC_FUNC_IMPL(__imp__sub_8329CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CBE8"))) PPC_WEAK_FUNC(sub_8329CBE8);
PPC_FUNC_IMPL(__imp__sub_8329CBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4520
	ctx.r3.s64 = ctx.r11.s64 + 4520;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329CBF4"))) PPC_WEAK_FUNC(sub_8329CBF4);
PPC_FUNC_IMPL(__imp__sub_8329CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CBF8"))) PPC_WEAK_FUNC(sub_8329CBF8);
PPC_FUNC_IMPL(__imp__sub_8329CBF8) {
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
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-31552
	ctx.r3.s64 = ctx.r11.s64 + -31552;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e7e9d8
	ctx.lr = 0x8329CC1C;
	sub_82E7E9D8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4504
	ctx.r3.s64 = ctx.r11.s64 + 4504;
	// bl 0x82ca3700
	ctx.lr = 0x8329CC28;
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

__attribute__((alias("__imp__sub_8329CC38"))) PPC_WEAK_FUNC(sub_8329CC38);
PPC_FUNC_IMPL(__imp__sub_8329CC38) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,3696
	ctx.r6.s64 = ctx.r11.s64 + 3696;
	// addi r4,r10,-22932
	ctx.r4.s64 = ctx.r10.s64 + -22932;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-30068
	ctx.r3.s64 = ctx.r10.s64 + -30068;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,-21032
	ctx.r5.s64 = ctx.r11.s64 + -21032;
	// bl 0x82e7ef98
	ctx.lr = 0x8329CC70;
	sub_82E7EF98(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4568
	ctx.r3.s64 = ctx.r11.s64 + 4568;
	// bl 0x82ca3700
	ctx.lr = 0x8329CC7C;
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

__attribute__((alias("__imp__sub_8329CC8C"))) PPC_WEAK_FUNC(sub_8329CC8C);
PPC_FUNC_IMPL(__imp__sub_8329CC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CC90"))) PPC_WEAK_FUNC(sub_8329CC90);
PPC_FUNC_IMPL(__imp__sub_8329CC90) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22920
	ctx.r4.s64 = ctx.r10.s64 + -22920;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-22048
	ctx.r5.s64 = ctx.r11.s64 + -22048;
	// addi r3,r10,-30336
	ctx.r3.s64 = ctx.r10.s64 + -30336;
	// bl 0x826428f8
	ctx.lr = 0x8329CCB8;
	sub_826428F8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4544
	ctx.r3.s64 = ctx.r11.s64 + 4544;
	// bl 0x82ca3700
	ctx.lr = 0x8329CCC4;
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

__attribute__((alias("__imp__sub_8329CCD4"))) PPC_WEAK_FUNC(sub_8329CCD4);
PPC_FUNC_IMPL(__imp__sub_8329CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CCD8"))) PPC_WEAK_FUNC(sub_8329CCD8);
PPC_FUNC_IMPL(__imp__sub_8329CCD8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22888
	ctx.r4.s64 = ctx.r10.s64 + -22888;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-9352
	ctx.r5.s64 = ctx.r11.s64 + -9352;
	// addi r3,r10,-29524
	ctx.r3.s64 = ctx.r10.s64 + -29524;
	// bl 0x82642760
	ctx.lr = 0x8329CD00;
	sub_82642760(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4664
	ctx.r3.s64 = ctx.r11.s64 + 4664;
	// bl 0x82ca3700
	ctx.lr = 0x8329CD0C;
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

__attribute__((alias("__imp__sub_8329CD1C"))) PPC_WEAK_FUNC(sub_8329CD1C);
PPC_FUNC_IMPL(__imp__sub_8329CD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CD20"))) PPC_WEAK_FUNC(sub_8329CD20);
PPC_FUNC_IMPL(__imp__sub_8329CD20) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22868
	ctx.r4.s64 = ctx.r10.s64 + -22868;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-9360
	ctx.r5.s64 = ctx.r11.s64 + -9360;
	// addi r3,r10,-29792
	ctx.r3.s64 = ctx.r10.s64 + -29792;
	// bl 0x826427e8
	ctx.lr = 0x8329CD48;
	sub_826427E8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// bl 0x82ca3700
	ctx.lr = 0x8329CD54;
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

__attribute__((alias("__imp__sub_8329CD64"))) PPC_WEAK_FUNC(sub_8329CD64);
PPC_FUNC_IMPL(__imp__sub_8329CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CD68"))) PPC_WEAK_FUNC(sub_8329CD68);
PPC_FUNC_IMPL(__imp__sub_8329CD68) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22852
	ctx.r4.s64 = ctx.r10.s64 + -22852;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-9240
	ctx.r5.s64 = ctx.r11.s64 + -9240;
	// addi r3,r10,-28720
	ctx.r3.s64 = ctx.r10.s64 + -28720;
	// bl 0x826427e8
	ctx.lr = 0x8329CD90;
	sub_826427E8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4712
	ctx.r3.s64 = ctx.r11.s64 + 4712;
	// bl 0x82ca3700
	ctx.lr = 0x8329CD9C;
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

__attribute__((alias("__imp__sub_8329CDAC"))) PPC_WEAK_FUNC(sub_8329CDAC);
PPC_FUNC_IMPL(__imp__sub_8329CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CDB0"))) PPC_WEAK_FUNC(sub_8329CDB0);
PPC_FUNC_IMPL(__imp__sub_8329CDB0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22828
	ctx.r4.s64 = ctx.r10.s64 + -22828;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-9208
	ctx.r5.s64 = ctx.r11.s64 + -9208;
	// addi r3,r10,-27112
	ctx.r3.s64 = ctx.r10.s64 + -27112;
	// bl 0x826427e8
	ctx.lr = 0x8329CDD8;
	sub_826427E8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// bl 0x82ca3700
	ctx.lr = 0x8329CDE4;
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

__attribute__((alias("__imp__sub_8329CDF4"))) PPC_WEAK_FUNC(sub_8329CDF4);
PPC_FUNC_IMPL(__imp__sub_8329CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CDF8"))) PPC_WEAK_FUNC(sub_8329CDF8);
PPC_FUNC_IMPL(__imp__sub_8329CDF8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22808
	ctx.r4.s64 = ctx.r10.s64 + -22808;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-9152
	ctx.r5.s64 = ctx.r11.s64 + -9152;
	// addi r3,r10,-26844
	ctx.r3.s64 = ctx.r10.s64 + -26844;
	// bl 0x826427e8
	ctx.lr = 0x8329CE20;
	sub_826427E8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4760
	ctx.r3.s64 = ctx.r11.s64 + 4760;
	// bl 0x82ca3700
	ctx.lr = 0x8329CE2C;
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

__attribute__((alias("__imp__sub_8329CE3C"))) PPC_WEAK_FUNC(sub_8329CE3C);
PPC_FUNC_IMPL(__imp__sub_8329CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CE40"))) PPC_WEAK_FUNC(sub_8329CE40);
PPC_FUNC_IMPL(__imp__sub_8329CE40) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22784
	ctx.r4.s64 = ctx.r10.s64 + -22784;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-6488
	ctx.r5.s64 = ctx.r11.s64 + -6488;
	// addi r3,r10,-29256
	ctx.r3.s64 = ctx.r10.s64 + -29256;
	// bl 0x82eaeb28
	ctx.lr = 0x8329CE68;
	sub_82EAEB28(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4784
	ctx.r3.s64 = ctx.r11.s64 + 4784;
	// bl 0x82ca3700
	ctx.lr = 0x8329CE74;
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

__attribute__((alias("__imp__sub_8329CE84"))) PPC_WEAK_FUNC(sub_8329CE84);
PPC_FUNC_IMPL(__imp__sub_8329CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CE88"))) PPC_WEAK_FUNC(sub_8329CE88);
PPC_FUNC_IMPL(__imp__sub_8329CE88) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,-22772
	ctx.r4.s64 = ctx.r10.s64 + -22772;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,12696
	ctx.r5.s64 = ctx.r11.s64 + 12696;
	// addi r3,r10,-27916
	ctx.r3.s64 = ctx.r10.s64 + -27916;
	// bl 0x82eaeb28
	ctx.lr = 0x8329CEB0;
	sub_82EAEB28(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// bl 0x82ca3700
	ctx.lr = 0x8329CEBC;
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

__attribute__((alias("__imp__sub_8329CECC"))) PPC_WEAK_FUNC(sub_8329CECC);
PPC_FUNC_IMPL(__imp__sub_8329CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CED0"))) PPC_WEAK_FUNC(sub_8329CED0);
PPC_FUNC_IMPL(__imp__sub_8329CED0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22760
	ctx.r4.s64 = ctx.r10.s64 + -22760;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-6408
	ctx.r5.s64 = ctx.r11.s64 + -6408;
	// addi r3,r10,-28452
	ctx.r3.s64 = ctx.r10.s64 + -28452;
	// bl 0x82eaeb28
	ctx.lr = 0x8329CEF8;
	sub_82EAEB28(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4832
	ctx.r3.s64 = ctx.r11.s64 + 4832;
	// bl 0x82ca3700
	ctx.lr = 0x8329CF04;
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

__attribute__((alias("__imp__sub_8329CF14"))) PPC_WEAK_FUNC(sub_8329CF14);
PPC_FUNC_IMPL(__imp__sub_8329CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CF18"))) PPC_WEAK_FUNC(sub_8329CF18);
PPC_FUNC_IMPL(__imp__sub_8329CF18) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22736
	ctx.r4.s64 = ctx.r10.s64 + -22736;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-9096
	ctx.r5.s64 = ctx.r11.s64 + -9096;
	// addi r3,r10,-26308
	ctx.r3.s64 = ctx.r10.s64 + -26308;
	// bl 0x82642870
	ctx.lr = 0x8329CF40;
	sub_82642870(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4856
	ctx.r3.s64 = ctx.r11.s64 + 4856;
	// bl 0x82ca3700
	ctx.lr = 0x8329CF4C;
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

__attribute__((alias("__imp__sub_8329CF5C"))) PPC_WEAK_FUNC(sub_8329CF5C);
PPC_FUNC_IMPL(__imp__sub_8329CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CF60"))) PPC_WEAK_FUNC(sub_8329CF60);
PPC_FUNC_IMPL(__imp__sub_8329CF60) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22724
	ctx.r4.s64 = ctx.r10.s64 + -22724;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-8648
	ctx.r5.s64 = ctx.r11.s64 + -8648;
	// addi r3,r10,-26576
	ctx.r3.s64 = ctx.r10.s64 + -26576;
	// bl 0x82642870
	ctx.lr = 0x8329CF88;
	sub_82642870(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// bl 0x82ca3700
	ctx.lr = 0x8329CF94;
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

__attribute__((alias("__imp__sub_8329CFA4"))) PPC_WEAK_FUNC(sub_8329CFA4);
PPC_FUNC_IMPL(__imp__sub_8329CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CFA8"))) PPC_WEAK_FUNC(sub_8329CFA8);
PPC_FUNC_IMPL(__imp__sub_8329CFA8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22708
	ctx.r4.s64 = ctx.r10.s64 + -22708;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-5840
	ctx.r5.s64 = ctx.r11.s64 + -5840;
	// addi r3,r10,-28184
	ctx.r3.s64 = ctx.r10.s64 + -28184;
	// bl 0x82eaebb0
	ctx.lr = 0x8329CFD0;
	sub_82EAEBB0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// bl 0x82ca3700
	ctx.lr = 0x8329CFDC;
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

__attribute__((alias("__imp__sub_8329CFEC"))) PPC_WEAK_FUNC(sub_8329CFEC);
PPC_FUNC_IMPL(__imp__sub_8329CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CFF0"))) PPC_WEAK_FUNC(sub_8329CFF0);
PPC_FUNC_IMPL(__imp__sub_8329CFF0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22692
	ctx.r4.s64 = ctx.r10.s64 + -22692;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-6320
	ctx.r5.s64 = ctx.r11.s64 + -6320;
	// addi r3,r10,-25772
	ctx.r3.s64 = ctx.r10.s64 + -25772;
	// bl 0x82eaebb0
	ctx.lr = 0x8329D018;
	sub_82EAEBB0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// bl 0x82ca3700
	ctx.lr = 0x8329D024;
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

__attribute__((alias("__imp__sub_8329D034"))) PPC_WEAK_FUNC(sub_8329D034);
PPC_FUNC_IMPL(__imp__sub_8329D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D038"))) PPC_WEAK_FUNC(sub_8329D038);
PPC_FUNC_IMPL(__imp__sub_8329D038) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,-22680
	ctx.r4.s64 = ctx.r10.s64 + -22680;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,12696
	ctx.r5.s64 = ctx.r11.s64 + 12696;
	// addi r3,r10,-27648
	ctx.r3.s64 = ctx.r10.s64 + -27648;
	// bl 0x82eaebb0
	ctx.lr = 0x8329D060;
	sub_82EAEBB0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// bl 0x82ca3700
	ctx.lr = 0x8329D06C;
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

__attribute__((alias("__imp__sub_8329D07C"))) PPC_WEAK_FUNC(sub_8329D07C);
PPC_FUNC_IMPL(__imp__sub_8329D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D080"))) PPC_WEAK_FUNC(sub_8329D080);
PPC_FUNC_IMPL(__imp__sub_8329D080) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22672
	ctx.r4.s64 = ctx.r10.s64 + -22672;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-7000
	ctx.r5.s64 = ctx.r11.s64 + -7000;
	// addi r3,r10,-28988
	ctx.r3.s64 = ctx.r10.s64 + -28988;
	// bl 0x82642980
	ctx.lr = 0x8329D0A8;
	sub_82642980(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// bl 0x82ca3700
	ctx.lr = 0x8329D0B4;
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

__attribute__((alias("__imp__sub_8329D0C4"))) PPC_WEAK_FUNC(sub_8329D0C4);
PPC_FUNC_IMPL(__imp__sub_8329D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D0C8"))) PPC_WEAK_FUNC(sub_8329D0C8);
PPC_FUNC_IMPL(__imp__sub_8329D0C8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22660
	ctx.r4.s64 = ctx.r10.s64 + -22660;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-6688
	ctx.r5.s64 = ctx.r11.s64 + -6688;
	// addi r3,r10,-27380
	ctx.r3.s64 = ctx.r10.s64 + -27380;
	// bl 0x82642980
	ctx.lr = 0x8329D0F0;
	sub_82642980(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 + 5000;
	// bl 0x82ca3700
	ctx.lr = 0x8329D0FC;
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

__attribute__((alias("__imp__sub_8329D10C"))) PPC_WEAK_FUNC(sub_8329D10C);
PPC_FUNC_IMPL(__imp__sub_8329D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D110"))) PPC_WEAK_FUNC(sub_8329D110);
PPC_FUNC_IMPL(__imp__sub_8329D110) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-22640
	ctx.r4.s64 = ctx.r10.s64 + -22640;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-6600
	ctx.r5.s64 = ctx.r11.s64 + -6600;
	// addi r3,r10,-26040
	ctx.r3.s64 = ctx.r10.s64 + -26040;
	// bl 0x82642980
	ctx.lr = 0x8329D138;
	sub_82642980(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5024
	ctx.r3.s64 = ctx.r11.s64 + 5024;
	// bl 0x82ca3700
	ctx.lr = 0x8329D144;
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

__attribute__((alias("__imp__sub_8329D154"))) PPC_WEAK_FUNC(sub_8329D154);
PPC_FUNC_IMPL(__imp__sub_8329D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D158"))) PPC_WEAK_FUNC(sub_8329D158);
PPC_FUNC_IMPL(__imp__sub_8329D158) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,3696
	ctx.r6.s64 = ctx.r11.s64 + 3696;
	// addi r4,r10,-21288
	ctx.r4.s64 = ctx.r10.s64 + -21288;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-25468
	ctx.r3.s64 = ctx.r10.s64 + -25468;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,22408
	ctx.r5.s64 = ctx.r11.s64 + 22408;
	// bl 0x82e7ef98
	ctx.lr = 0x8329D190;
	sub_82E7EF98(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5048
	ctx.r3.s64 = ctx.r11.s64 + 5048;
	// bl 0x82ca3700
	ctx.lr = 0x8329D19C;
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

__attribute__((alias("__imp__sub_8329D1AC"))) PPC_WEAK_FUNC(sub_8329D1AC);
PPC_FUNC_IMPL(__imp__sub_8329D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D1B0"))) PPC_WEAK_FUNC(sub_8329D1B0);
PPC_FUNC_IMPL(__imp__sub_8329D1B0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-21260
	ctx.r4.s64 = ctx.r10.s64 + -21260;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13840
	ctx.r3.s64 = ctx.r10.s64 + -13840;
	// addi r5,r11,29880
	ctx.r5.s64 = ctx.r11.s64 + 29880;
	// bl 0x82ebef88
	ctx.lr = 0x8329D1DC;
	sub_82EBEF88(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5336
	ctx.r3.s64 = ctx.r11.s64 + 5336;
	// bl 0x82ca3700
	ctx.lr = 0x8329D1E8;
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

