#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8305A288"))) PPC_WEAK_FUNC(sub_8305A288);
PPC_FUNC_IMPL(__imp__sub_8305A288) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20844
	ctx.r4.s64 = ctx.r10.s64 + -20844;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A2AC;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A2BC"))) PPC_WEAK_FUNC(sub_8305A2BC);
PPC_FUNC_IMPL(__imp__sub_8305A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A2C0"))) PPC_WEAK_FUNC(sub_8305A2C0);
PPC_FUNC_IMPL(__imp__sub_8305A2C0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,-20736
	ctx.r4.s64 = ctx.r11.s64 + -20736;
	// bl 0x830572e8
	ctx.lr = 0x8305A2DC;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A2EC"))) PPC_WEAK_FUNC(sub_8305A2EC);
PPC_FUNC_IMPL(__imp__sub_8305A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A2F0"))) PPC_WEAK_FUNC(sub_8305A2F0);
PPC_FUNC_IMPL(__imp__sub_8305A2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305A2F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A30C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = ctx.r11.s64 + -20604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A328;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A338;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20644
	ctx.r4.s64 = ctx.r11.s64 + -20644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A354;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A364;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20672
	ctx.r4.s64 = ctx.r11.s64 + -20672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A380;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A390;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-20716
	ctx.r4.s64 = ctx.r11.s64 + -20716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A3AC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a3b8
	if (ctx.cr0.lt) goto loc_8305A3B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A3B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305A3C0"))) PPC_WEAK_FUNC(sub_8305A3C0);
PPC_FUNC_IMPL(__imp__sub_8305A3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305A3C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A3DC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20392
	ctx.r4.s64 = ctx.r11.s64 + -20392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A3F8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A408;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-20432
	ctx.r4.s64 = ctx.r11.s64 + -20432;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A428;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A438;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20468
	ctx.r4.s64 = ctx.r11.s64 + -20468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A454;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A464;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20504
	ctx.r4.s64 = ctx.r11.s64 + -20504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A480;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A490;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20540
	ctx.r4.s64 = ctx.r11.s64 + -20540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A4AC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A4BC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20576
	ctx.r4.s64 = ctx.r11.s64 + -20576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A4D8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a4e4
	if (ctx.cr0.lt) goto loc_8305A4E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A4E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305A4EC"))) PPC_WEAK_FUNC(sub_8305A4EC);
PPC_FUNC_IMPL(__imp__sub_8305A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A4F0"))) PPC_WEAK_FUNC(sub_8305A4F0);
PPC_FUNC_IMPL(__imp__sub_8305A4F0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r9,-20308
	ctx.r4.s64 = ctx.r9.s64 + -20308;
	// rlwinm r7,r10,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A51C;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A52C"))) PPC_WEAK_FUNC(sub_8305A52C);
PPC_FUNC_IMPL(__imp__sub_8305A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A530"))) PPC_WEAK_FUNC(sub_8305A530);
PPC_FUNC_IMPL(__imp__sub_8305A530) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20284
	ctx.r4.s64 = ctx.r10.s64 + -20284;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A554;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A564"))) PPC_WEAK_FUNC(sub_8305A564);
PPC_FUNC_IMPL(__imp__sub_8305A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A568"))) PPC_WEAK_FUNC(sub_8305A568);
PPC_FUNC_IMPL(__imp__sub_8305A568) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20264
	ctx.r4.s64 = ctx.r10.s64 + -20264;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A58C;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A59C"))) PPC_WEAK_FUNC(sub_8305A59C);
PPC_FUNC_IMPL(__imp__sub_8305A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A5A0"))) PPC_WEAK_FUNC(sub_8305A5A0);
PPC_FUNC_IMPL(__imp__sub_8305A5A0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-20244
	ctx.r4.s64 = ctx.r11.s64 + -20244;
	// bl 0x830572e8
	ctx.lr = 0x8305A5BC;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A5CC"))) PPC_WEAK_FUNC(sub_8305A5CC);
PPC_FUNC_IMPL(__imp__sub_8305A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A5D0"))) PPC_WEAK_FUNC(sub_8305A5D0);
PPC_FUNC_IMPL(__imp__sub_8305A5D0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-20228
	ctx.r4.s64 = ctx.r11.s64 + -20228;
	// bl 0x830572e8
	ctx.lr = 0x8305A5EC;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A5FC"))) PPC_WEAK_FUNC(sub_8305A5FC);
PPC_FUNC_IMPL(__imp__sub_8305A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A600"))) PPC_WEAK_FUNC(sub_8305A600);
PPC_FUNC_IMPL(__imp__sub_8305A600) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20212
	ctx.r4.s64 = ctx.r10.s64 + -20212;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A624;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A634"))) PPC_WEAK_FUNC(sub_8305A634);
PPC_FUNC_IMPL(__imp__sub_8305A634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A638"))) PPC_WEAK_FUNC(sub_8305A638);
PPC_FUNC_IMPL(__imp__sub_8305A638) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20192
	ctx.r4.s64 = ctx.r10.s64 + -20192;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A65C;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A66C"))) PPC_WEAK_FUNC(sub_8305A66C);
PPC_FUNC_IMPL(__imp__sub_8305A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A670"))) PPC_WEAK_FUNC(sub_8305A670);
PPC_FUNC_IMPL(__imp__sub_8305A670) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20172
	ctx.r4.s64 = ctx.r10.s64 + -20172;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A698;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A6A8"))) PPC_WEAK_FUNC(sub_8305A6A8);
PPC_FUNC_IMPL(__imp__sub_8305A6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x8305A6B0;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r20,29760
	ctx.r20.s64 = 1950351360;
	// lis r19,29616
	ctx.r19.s64 = 1940914176;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305a7f0
	if (!ctx.cr6.gt) goto loc_8305A7F0;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r7,-20088
	ctx.r28.s64 = ctx.r7.s64 + -20088;
	// addi r27,r8,-20100
	ctx.r27.s64 = ctx.r8.s64 + -20100;
	// addi r26,r9,-20112
	ctx.r26.s64 = ctx.r9.s64 + -20112;
	// addi r25,r10,-20124
	ctx.r25.s64 = ctx.r10.s64 + -20124;
	// addi r24,r11,-21396
	ctx.r24.s64 = ctx.r11.s64 + -21396;
loc_8305A708:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305A720;
	sub_82D16878(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305A738;
	sub_82D16878(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305A750;
	sub_82D16878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A758;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a874
	if (ctx.cr0.lt) goto loc_8305A874;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A770;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a874
	if (ctx.cr0.lt) goto loc_8305A874;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x8305a87c
	if (ctx.cr6.gt) goto loc_8305A87C;
	// beq cr6,0x8305a7b0
	if (ctx.cr6.eq) goto loc_8305A7B0;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305a8a0
	if (ctx.cr6.eq) goto loc_8305A8A0;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305a8a8
	if (ctx.cr6.eq) goto loc_8305A8A8;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8305a7b0
	if (ctx.cr6.eq) goto loc_8305A7B0;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8305a8b0
	if (!ctx.cr6.eq) goto loc_8305A8B0;
loc_8305A7B0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8305A7B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A7BC;
	sub_830572E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8305a874
	if (ctx.cr6.lt) goto loc_8305A874;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A7D8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a874
	if (ctx.cr0.lt) goto loc_8305A874;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305a708
	if (ctx.cr6.lt) goto loc_8305A708;
loc_8305A7F0:
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8305a800
	if (ctx.cr6.eq) goto loc_8305A800;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8305a870
	if (!ctx.cr6.eq) goto loc_8305A870;
loc_8305A800:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305a870
	if (!ctx.cr6.gt) goto loc_8305A870;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-20148
	ctx.r29.s64 = ctx.r11.s64 + -20148;
loc_8305A818:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305A830;
	sub_82D16878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A838;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a874
	if (ctx.cr0.lt) goto loc_8305A874;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A858;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a874
	if (ctx.cr0.lt) goto loc_8305A874;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305a818
	if (ctx.cr6.lt) goto loc_8305A818;
loc_8305A870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A874:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
loc_8305A87C:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305a7b0
	if (ctx.cr6.eq) goto loc_8305A7B0;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305a8a8
	if (ctx.cr6.eq) goto loc_8305A8A8;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8305a8b0
	if (!ctx.cr6.eq) goto loc_8305A8B0;
loc_8305A8A0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8305a7b4
	goto loc_8305A7B4;
loc_8305A8A8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x8305a7b4
	goto loc_8305A7B4;
loc_8305A8B0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8305a874
	goto loc_8305A874;
}

__attribute__((alias("__imp__sub_8305A8BC"))) PPC_WEAK_FUNC(sub_8305A8BC);
PPC_FUNC_IMPL(__imp__sub_8305A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A8C0"))) PPC_WEAK_FUNC(sub_8305A8C0);
PPC_FUNC_IMPL(__imp__sub_8305A8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305A8C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A8DC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305a8fc
	if (ctx.cr0.lt) goto loc_8305A8FC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-20076
	ctx.r4.s64 = ctx.r11.s64 + -20076;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A8FC;
	sub_830572E8(ctx, base);
loc_8305A8FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305A904"))) PPC_WEAK_FUNC(sub_8305A904);
PPC_FUNC_IMPL(__imp__sub_8305A904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A908"))) PPC_WEAK_FUNC(sub_8305A908);
PPC_FUNC_IMPL(__imp__sub_8305A908) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-20036
	ctx.r4.s64 = ctx.r11.s64 + -20036;
	// bl 0x830572e8
	ctx.lr = 0x8305A920;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A930"))) PPC_WEAK_FUNC(sub_8305A930);
PPC_FUNC_IMPL(__imp__sub_8305A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8305A938;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A94C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21216
	ctx.r4.s64 = ctx.r11.s64 + -21216;
	// bl 0x830572e8
	ctx.lr = 0x8305A964;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,-21144
	ctx.r4.s64 = ctx.r10.s64 + -21144;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305A998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-21472
	ctx.r27.s64 = ctx.r11.s64 + -21472;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305A9B4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305aa8c
	if (!ctx.cr6.gt) goto loc_8305AA8C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r10,-21224
	ctx.r29.s64 = ctx.r10.s64 + -21224;
	// addi r28,r11,-21396
	ctx.r28.s64 = ctx.r11.s64 + -21396;
loc_8305A9DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305A9E4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305AA04;
	sub_82D16878(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305AA1C;
	sub_82D16878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AA24;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AA3C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305AA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AA74;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305aa90
	if (ctx.cr0.lt) goto loc_8305AA90;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305a9dc
	if (ctx.cr6.lt) goto loc_8305A9DC;
loc_8305AA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305AA90:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8305AA98"))) PPC_WEAK_FUNC(sub_8305AA98);
PPC_FUNC_IMPL(__imp__sub_8305AA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x8305AAA0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AAB4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21216
	ctx.r4.s64 = ctx.r11.s64 + -21216;
	// bl 0x830572e8
	ctx.lr = 0x8305AACC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,-21468
	ctx.r4.s64 = ctx.r10.s64 + -21468;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305AB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
	// bl 0x830572e8
	ctx.lr = 0x8305AB18;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r23,r11,-19880
	ctx.r23.s64 = ctx.r11.s64 + -19880;
	// addi r25,r10,-21408
	ctx.r25.s64 = ctx.r10.s64 + -21408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8305aba8
	if (!ctx.cr6.gt) goto loc_8305ABA8;
loc_8305AB40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AB48;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305AB68;
	sub_82D16878(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305AB7C;
	sub_82D16878(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AB90;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305ab40
	if (ctx.cr6.lt) goto loc_8305AB40;
loc_8305ABA8:
	// lwz r8,1816(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r29,r9,-19912
	ctx.r29.s64 = ctx.r9.s64 + -19912;
	// addi r28,r10,-21224
	ctx.r28.s64 = ctx.r10.s64 + -21224;
	// addi r26,r11,-21196
	ctx.r26.s64 = ctx.r11.s64 + -21196;
	// ble cr6,0x8305ac54
	if (!ctx.cr6.gt) goto loc_8305AC54;
loc_8305ABD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305ABD8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305ABF8;
	sub_82D16878(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305AC0C;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305AC20;
	sub_82D16878(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AC3C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305abd0
	if (ctx.cr6.lt) goto loc_8305ABD0;
loc_8305AC54:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r27,r11,-19944
	ctx.r27.s64 = ctx.r11.s64 + -19944;
	// ble cr6,0x8305acd8
	if (!ctx.cr6.gt) goto loc_8305ACD8;
loc_8305AC6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AC74;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305AC90;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305ACA4;
	sub_82D16878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305ACC0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305ac6c
	if (ctx.cr6.lt) goto loc_8305AC6C;
loc_8305ACD8:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305ad6c
	if (!ctx.cr6.gt) goto loc_8305AD6C;
loc_8305ACE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305ACF0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305AD10;
	sub_82D16878(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305AD24;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305AD38;
	sub_82D16878(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AD54;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305ace8
	if (ctx.cr6.lt) goto loc_8305ACE8;
loc_8305AD6C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305ade8
	if (!ctx.cr6.gt) goto loc_8305ADE8;
loc_8305AD7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AD84;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305ADA0;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305ADB4;
	sub_82D16878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305ADD0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305ad7c
	if (ctx.cr6.lt) goto loc_8305AD7C;
loc_8305ADE8:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305ae68
	if (!ctx.cr6.gt) goto loc_8305AE68;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19972
	ctx.r29.s64 = ctx.r11.s64 + -19972;
loc_8305AE00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AE08;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305AE24;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305AE38;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AE50;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305ae00
	if (ctx.cr6.lt) goto loc_8305AE00;
loc_8305AE68:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,-21420
	ctx.r28.s64 = ctx.r11.s64 + -21420;
	// ble cr6,0x8305aee8
	if (!ctx.cr6.gt) goto loc_8305AEE8;
loc_8305AE80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AE88;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305AEA8;
	sub_82D16878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d16878
	ctx.lr = 0x8305AEBC;
	sub_82D16878(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AED0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305ae80
	if (ctx.cr6.lt) goto loc_8305AE80;
loc_8305AEE8:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305af98
	if (!ctx.cr6.gt) goto loc_8305AF98;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-20000
	ctx.r29.s64 = ctx.r11.s64 + -20000;
loc_8305AF00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AF08;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d16878
	ctx.lr = 0x8305AF28;
	sub_82D16878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d16878
	ctx.lr = 0x8305AF3C;
	sub_82D16878(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305AF50;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305AF64;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305AF80;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305af9c
	if (ctx.cr0.lt) goto loc_8305AF9C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305af00
	if (ctx.cr6.lt) goto loc_8305AF00;
loc_8305AF98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305AF9C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_8305AFA4"))) PPC_WEAK_FUNC(sub_8305AFA4);
PPC_FUNC_IMPL(__imp__sub_8305AFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305AFA8"))) PPC_WEAK_FUNC(sub_8305AFA8);
PPC_FUNC_IMPL(__imp__sub_8305AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8305AFB0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,1816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r27,r11,-21408
	ctx.r27.s64 = ctx.r11.s64 + -21408;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305b048
	if (!ctx.cr6.gt) goto loc_8305B048;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19832
	ctx.r29.s64 = ctx.r11.s64 + -19832;
loc_8305AFE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305AFE8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b0e8
	if (ctx.cr0.lt) goto loc_8305B0E8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B008;
	sub_82D16878(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B01C;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B030;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b0e8
	if (ctx.cr0.lt) goto loc_8305B0E8;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305afe0
	if (ctx.cr6.lt) goto loc_8305AFE0;
loc_8305B048:
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305b0e4
	if (!ctx.cr6.gt) goto loc_8305B0E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19860
	ctx.r29.s64 = ctx.r11.s64 + -19860;
loc_8305B060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B068;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b0e8
	if (ctx.cr0.lt) goto loc_8305B0E8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305B088;
	sub_82D16878(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B0A0;
	sub_82D16878(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B0B4;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B0CC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b0e8
	if (ctx.cr0.lt) goto loc_8305B0E8;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b060
	if (ctx.cr6.lt) goto loc_8305B060;
loc_8305B0E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B0E8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8305B0F0"))) PPC_WEAK_FUNC(sub_8305B0F0);
PPC_FUNC_IMPL(__imp__sub_8305B0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8305B0F8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B10C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19760
	ctx.r4.s64 = ctx.r11.s64 + -19760;
	// bl 0x830572e8
	ctx.lr = 0x8305B124;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B134;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21216
	ctx.r4.s64 = ctx.r11.s64 + -21216;
	// bl 0x830572e8
	ctx.lr = 0x8305B14C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,-21224
	ctx.r25.s64 = ctx.r11.s64 + -21224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305B178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
	// bl 0x830572e8
	ctx.lr = 0x8305B190;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,-21408
	ctx.r26.s64 = ctx.r11.s64 + -21408;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305b220
	if (!ctx.cr6.gt) goto loc_8305B220;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19784
	ctx.r29.s64 = ctx.r11.s64 + -19784;
loc_8305B1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B1C0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305B1E0;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B1F4;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B208;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b1b8
	if (ctx.cr6.lt) goto loc_8305B1B8;
loc_8305B220:
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r29,r10,-19812
	ctx.r29.s64 = ctx.r10.s64 + -19812;
	// addi r27,r11,-21196
	ctx.r27.s64 = ctx.r11.s64 + -21196;
	// ble cr6,0x8305b2ac
	if (!ctx.cr6.gt) goto loc_8305B2AC;
loc_8305B240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B248;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305B268;
	sub_82D16878(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d16878
	ctx.lr = 0x8305B27C;
	sub_82D16878(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B294;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b240
	if (ctx.cr6.lt) goto loc_8305B240;
loc_8305B2AC:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,-21420
	ctx.r28.s64 = ctx.r11.s64 + -21420;
	// ble cr6,0x8305b32c
	if (!ctx.cr6.gt) goto loc_8305B32C;
loc_8305B2C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B2CC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B2E8;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B2FC;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B314;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b2c4
	if (ctx.cr6.lt) goto loc_8305B2C4;
loc_8305B32C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305b3c4
	if (!ctx.cr6.gt) goto loc_8305B3C4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19912
	ctx.r29.s64 = ctx.r11.s64 + -19912;
loc_8305B344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B34C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B368;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B37C;
	sub_82D16878(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d16878
	ctx.lr = 0x8305B390;
	sub_82D16878(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B3AC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b344
	if (ctx.cr6.lt) goto loc_8305B344;
loc_8305B3C4:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305b460
	if (!ctx.cr6.gt) goto loc_8305B460;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19944
	ctx.r29.s64 = ctx.r11.s64 + -19944;
loc_8305B3DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B3E4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d16878
	ctx.lr = 0x8305B404;
	sub_82D16878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B418;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B42C;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B448;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b464
	if (ctx.cr0.lt) goto loc_8305B464;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b3dc
	if (ctx.cr6.lt) goto loc_8305B3DC;
loc_8305B460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B464:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8305B46C"))) PPC_WEAK_FUNC(sub_8305B46C);
PPC_FUNC_IMPL(__imp__sub_8305B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305B470"))) PPC_WEAK_FUNC(sub_8305B470);
PPC_FUNC_IMPL(__imp__sub_8305B470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8305B478;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B48C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21216
	ctx.r4.s64 = ctx.r11.s64 + -21216;
	// bl 0x830572e8
	ctx.lr = 0x8305B4A4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-21144
	ctx.r4.s64 = ctx.r10.s64 + -21144;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305B4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-21472
	ctx.r27.s64 = ctx.r11.s64 + -21472;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B4F4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305b5cc
	if (!ctx.cr6.gt) goto loc_8305B5CC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r10,-21224
	ctx.r29.s64 = ctx.r10.s64 + -21224;
	// addi r28,r11,-21396
	ctx.r28.s64 = ctx.r11.s64 + -21396;
loc_8305B51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B524;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B544;
	sub_82D16878(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B55C;
	sub_82D16878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B564;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B57C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305B5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B5B4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305b5d0
	if (ctx.cr0.lt) goto loc_8305B5D0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b51c
	if (ctx.cr6.lt) goto loc_8305B51C;
loc_8305B5CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305B5D0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8305B5D8"))) PPC_WEAK_FUNC(sub_8305B5D8);
PPC_FUNC_IMPL(__imp__sub_8305B5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x8305B5E0;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B5F4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19760
	ctx.r4.s64 = ctx.r11.s64 + -19760;
	// bl 0x830572e8
	ctx.lr = 0x8305B60C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,-19692
	ctx.r25.s64 = ctx.r11.s64 + -19692;
	// addi r26,r10,-21408
	ctx.r26.s64 = ctx.r10.s64 + -21408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8305b6a0
	if (!ctx.cr6.gt) goto loc_8305B6A0;
loc_8305B634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B63C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305B65C;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B670;
	sub_82D16878(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B688;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b634
	if (ctx.cr6.lt) goto loc_8305B634;
loc_8305B6A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B6A8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21216
	ctx.r4.s64 = ctx.r11.s64 + -21216;
	// bl 0x830572e8
	ctx.lr = 0x8305B6C0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r11,-21224
	ctx.r23.s64 = ctx.r11.s64 + -21224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305B6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
	// bl 0x830572e8
	ctx.lr = 0x8305B704;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r24,r11,-21196
	ctx.r24.s64 = ctx.r11.s64 + -21196;
	// ble cr6,0x8305b790
	if (!ctx.cr6.gt) goto loc_8305B790;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19784
	ctx.r29.s64 = ctx.r11.s64 + -19784;
loc_8305B72C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B734;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B750;
	sub_82D16878(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B764;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B778;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b72c
	if (ctx.cr6.lt) goto loc_8305B72C;
loc_8305B790:
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r27,r10,-19812
	ctx.r27.s64 = ctx.r10.s64 + -19812;
	// addi r28,r11,-19704
	ctx.r28.s64 = ctx.r11.s64 + -19704;
	// ble cr6,0x8305b818
	if (!ctx.cr6.gt) goto loc_8305B818;
loc_8305B7B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B7B8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B7D4;
	sub_82D16878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d16878
	ctx.lr = 0x8305B7E8;
	sub_82D16878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B800;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b7b0
	if (ctx.cr6.lt) goto loc_8305B7B0;
loc_8305B818:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305b87c
	if (!ctx.cr6.gt) goto loc_8305B87C;
loc_8305B828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B830;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B84C;
	sub_82D16878(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B864;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b828
	if (ctx.cr6.lt) goto loc_8305B828;
loc_8305B87C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305b900
	if (!ctx.cr6.gt) goto loc_8305B900;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19912
	ctx.r29.s64 = ctx.r11.s64 + -19912;
loc_8305B894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B89C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B8B8;
	sub_82D16878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d16878
	ctx.lr = 0x8305B8CC;
	sub_82D16878(ctx, base);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B8E8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b894
	if (ctx.cr6.lt) goto loc_8305B894;
loc_8305B900:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305b97c
	if (!ctx.cr6.gt) goto loc_8305B97C;
loc_8305B910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B918;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305B938;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305B94C;
	sub_82D16878(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305B964;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b910
	if (ctx.cr6.lt) goto loc_8305B910;
loc_8305B97C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B984;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19732
	ctx.r4.s64 = ctx.r11.s64 + -19732;
	// bl 0x830572e8
	ctx.lr = 0x8305B99C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305ba28
	if (!ctx.cr6.gt) goto loc_8305BA28;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19944
	ctx.r29.s64 = ctx.r11.s64 + -19944;
loc_8305B9BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305B9C4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305B9E0;
	sub_82D16878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d16878
	ctx.lr = 0x8305B9F4;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BA10;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305b9bc
	if (ctx.cr6.lt) goto loc_8305B9BC;
loc_8305BA28:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305baa4
	if (!ctx.cr6.gt) goto loc_8305BAA4;
loc_8305BA38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305BA40;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305BA60;
	sub_82D16878(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305BA74;
	sub_82D16878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BA8C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305ba38
	if (ctx.cr6.lt) goto loc_8305BA38;
loc_8305BAA4:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,-21420
	ctx.r28.s64 = ctx.r11.s64 + -21420;
	// ble cr6,0x8305bb2c
	if (!ctx.cr6.gt) goto loc_8305BB2C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-19972
	ctx.r29.s64 = ctx.r11.s64 + -19972;
loc_8305BAC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305BACC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d16878
	ctx.lr = 0x8305BAE8;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305BAFC;
	sub_82D16878(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BB14;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305bac4
	if (ctx.cr6.lt) goto loc_8305BAC4;
loc_8305BB2C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305bbdc
	if (!ctx.cr6.gt) goto loc_8305BBDC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-20000
	ctx.r29.s64 = ctx.r11.s64 + -20000;
loc_8305BB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305BB4C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d16878
	ctx.lr = 0x8305BB6C;
	sub_82D16878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d16878
	ctx.lr = 0x8305BB80;
	sub_82D16878(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305BB94;
	sub_82D16878(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305BBA8;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BBC4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bbe0
	if (ctx.cr0.lt) goto loc_8305BBE0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305bb44
	if (ctx.cr6.lt) goto loc_8305BB44;
loc_8305BBDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305BBE0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_8305BBE8"))) PPC_WEAK_FUNC(sub_8305BBE8);
PPC_FUNC_IMPL(__imp__sub_8305BBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305BBF0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305BC04;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bca0
	if (ctx.cr0.lt) goto loc_8305BCA0;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83057560
	ctx.lr = 0x8305BC2C;
	sub_83057560(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d16878
	ctx.lr = 0x8305BC44;
	sub_82D16878(ctx, base);
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-19664
	ctx.r4.s64 = ctx.r11.s64 + -19664;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BC88;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305bca0
	if (ctx.cr0.lt) goto loc_8305BCA0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83073980
	ctx.lr = 0x8305BCA0;
	sub_83073980(ctx, base);
loc_8305BCA0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305BCA8"))) PPC_WEAK_FUNC(sub_8305BCA8);
PPC_FUNC_IMPL(__imp__sub_8305BCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8305bd30
	if (!ctx.cr6.eq) goto loc_8305BD30;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8305bd30
	if (!ctx.cr6.eq) goto loc_8305BD30;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8305bd30
	if (!ctx.cr6.eq) goto loc_8305BD30;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8305bd1c
	if (ctx.cr6.lt) goto loc_8305BD1C;
	// beq cr6,0x8305bd10
	if (ctx.cr6.eq) goto loc_8305BD10;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x8305bd04
	if (ctx.cr6.lt) goto loc_8305BD04;
	// beq cr6,0x8305bcf8
	if (ctx.cr6.eq) goto loc_8305BCF8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8305bd4c
	goto loc_8305BD4C;
loc_8305BCF8:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r10,-19532
	ctx.r4.s64 = ctx.r10.s64 + -19532;
	// b 0x8305bd24
	goto loc_8305BD24;
loc_8305BD04:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r10,-19552
	ctx.r4.s64 = ctx.r10.s64 + -19552;
	// b 0x8305bd24
	goto loc_8305BD24;
loc_8305BD10:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r10,-19572
	ctx.r4.s64 = ctx.r10.s64 + -19572;
	// b 0x8305bd24
	goto loc_8305BD24;
loc_8305BD1C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r10,-19592
	ctx.r4.s64 = ctx.r10.s64 + -19592;
loc_8305BD24:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BD2C;
	sub_830572E8(ctx, base);
	// b 0x8305bd4c
	goto loc_8305BD4C;
loc_8305BD30:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19628
	ctx.r4.s64 = ctx.r10.s64 + -19628;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BD4C;
	sub_830572E8(ctx, base);
loc_8305BD4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BD5C"))) PPC_WEAK_FUNC(sub_8305BD5C);
PPC_FUNC_IMPL(__imp__sub_8305BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BD60"))) PPC_WEAK_FUNC(sub_8305BD60);
PPC_FUNC_IMPL(__imp__sub_8305BD60) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19512
	ctx.r4.s64 = ctx.r10.s64 + -19512;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BD84;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BD94"))) PPC_WEAK_FUNC(sub_8305BD94);
PPC_FUNC_IMPL(__imp__sub_8305BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BD98"))) PPC_WEAK_FUNC(sub_8305BD98);
PPC_FUNC_IMPL(__imp__sub_8305BD98) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19488
	ctx.r4.s64 = ctx.r10.s64 + -19488;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BDBC;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BDCC"))) PPC_WEAK_FUNC(sub_8305BDCC);
PPC_FUNC_IMPL(__imp__sub_8305BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BDD0"))) PPC_WEAK_FUNC(sub_8305BDD0);
PPC_FUNC_IMPL(__imp__sub_8305BDD0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19464
	ctx.r4.s64 = ctx.r10.s64 + -19464;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BDF4;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BE04"))) PPC_WEAK_FUNC(sub_8305BE04);
PPC_FUNC_IMPL(__imp__sub_8305BE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BE08"))) PPC_WEAK_FUNC(sub_8305BE08);
PPC_FUNC_IMPL(__imp__sub_8305BE08) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19440
	ctx.r4.s64 = ctx.r10.s64 + -19440;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BE2C;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BE3C"))) PPC_WEAK_FUNC(sub_8305BE3C);
PPC_FUNC_IMPL(__imp__sub_8305BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BE40"))) PPC_WEAK_FUNC(sub_8305BE40);
PPC_FUNC_IMPL(__imp__sub_8305BE40) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-19416
	ctx.r4.s64 = ctx.r11.s64 + -19416;
	// bl 0x830572e8
	ctx.lr = 0x8305BE58;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BE68"))) PPC_WEAK_FUNC(sub_8305BE68);
PPC_FUNC_IMPL(__imp__sub_8305BE68) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-19400
	ctx.r4.s64 = ctx.r11.s64 + -19400;
	// bl 0x830572e8
	ctx.lr = 0x8305BE80;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BE90"))) PPC_WEAK_FUNC(sub_8305BE90);
PPC_FUNC_IMPL(__imp__sub_8305BE90) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19380
	ctx.r4.s64 = ctx.r10.s64 + -19380;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BEB8;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BEC8"))) PPC_WEAK_FUNC(sub_8305BEC8);
PPC_FUNC_IMPL(__imp__sub_8305BEC8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-19352
	ctx.r4.s64 = ctx.r11.s64 + -19352;
	// bl 0x830572e8
	ctx.lr = 0x8305BEE4;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BEF4"))) PPC_WEAK_FUNC(sub_8305BEF4);
PPC_FUNC_IMPL(__imp__sub_8305BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BEF8"))) PPC_WEAK_FUNC(sub_8305BEF8);
PPC_FUNC_IMPL(__imp__sub_8305BEF8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19332
	ctx.r4.s64 = ctx.r10.s64 + -19332;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BF1C;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BF2C"))) PPC_WEAK_FUNC(sub_8305BF2C);
PPC_FUNC_IMPL(__imp__sub_8305BF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BF30"))) PPC_WEAK_FUNC(sub_8305BF30);
PPC_FUNC_IMPL(__imp__sub_8305BF30) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19296
	ctx.r4.s64 = ctx.r10.s64 + -19296;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BF54;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BF64"))) PPC_WEAK_FUNC(sub_8305BF64);
PPC_FUNC_IMPL(__imp__sub_8305BF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BF68"))) PPC_WEAK_FUNC(sub_8305BF68);
PPC_FUNC_IMPL(__imp__sub_8305BF68) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19260
	ctx.r4.s64 = ctx.r10.s64 + -19260;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BF8C;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BF9C"))) PPC_WEAK_FUNC(sub_8305BF9C);
PPC_FUNC_IMPL(__imp__sub_8305BF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BFA0"))) PPC_WEAK_FUNC(sub_8305BFA0);
PPC_FUNC_IMPL(__imp__sub_8305BFA0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19224
	ctx.r4.s64 = ctx.r10.s64 + -19224;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BFC4;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305BFD4"))) PPC_WEAK_FUNC(sub_8305BFD4);
PPC_FUNC_IMPL(__imp__sub_8305BFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BFD8"))) PPC_WEAK_FUNC(sub_8305BFD8);
PPC_FUNC_IMPL(__imp__sub_8305BFD8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20824
	ctx.r4.s64 = ctx.r10.s64 + -20824;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305BFFC;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C00C"))) PPC_WEAK_FUNC(sub_8305C00C);
PPC_FUNC_IMPL(__imp__sub_8305C00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C010"))) PPC_WEAK_FUNC(sub_8305C010);
PPC_FUNC_IMPL(__imp__sub_8305C010) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-20804
	ctx.r4.s64 = ctx.r11.s64 + -20804;
	// bl 0x830572e8
	ctx.lr = 0x8305C02C;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C03C"))) PPC_WEAK_FUNC(sub_8305C03C);
PPC_FUNC_IMPL(__imp__sub_8305C03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C040"))) PPC_WEAK_FUNC(sub_8305C040);
PPC_FUNC_IMPL(__imp__sub_8305C040) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-20788
	ctx.r4.s64 = ctx.r11.s64 + -20788;
	// bl 0x830572e8
	ctx.lr = 0x8305C05C;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C06C"))) PPC_WEAK_FUNC(sub_8305C06C);
PPC_FUNC_IMPL(__imp__sub_8305C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C070"))) PPC_WEAK_FUNC(sub_8305C070);
PPC_FUNC_IMPL(__imp__sub_8305C070) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-20772
	ctx.r4.s64 = ctx.r10.s64 + -20772;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C094;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C0A4"))) PPC_WEAK_FUNC(sub_8305C0A4);
PPC_FUNC_IMPL(__imp__sub_8305C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C0A8"))) PPC_WEAK_FUNC(sub_8305C0A8);
PPC_FUNC_IMPL(__imp__sub_8305C0A8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19188
	ctx.r4.s64 = ctx.r10.s64 + -19188;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C0CC;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C0DC"))) PPC_WEAK_FUNC(sub_8305C0DC);
PPC_FUNC_IMPL(__imp__sub_8305C0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C0E0"))) PPC_WEAK_FUNC(sub_8305C0E0);
PPC_FUNC_IMPL(__imp__sub_8305C0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305C0E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C0FC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c11c
	if (ctx.cr0.lt) goto loc_8305C11C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-19148
	ctx.r4.s64 = ctx.r11.s64 + -19148;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C11C;
	sub_830572E8(ctx, base);
loc_8305C11C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305C124"))) PPC_WEAK_FUNC(sub_8305C124);
PPC_FUNC_IMPL(__imp__sub_8305C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C128"))) PPC_WEAK_FUNC(sub_8305C128);
PPC_FUNC_IMPL(__imp__sub_8305C128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305C130;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C144;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c164
	if (ctx.cr0.lt) goto loc_8305C164;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-19112
	ctx.r4.s64 = ctx.r11.s64 + -19112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C164;
	sub_830572E8(ctx, base);
loc_8305C164:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305C16C"))) PPC_WEAK_FUNC(sub_8305C16C);
PPC_FUNC_IMPL(__imp__sub_8305C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C170"))) PPC_WEAK_FUNC(sub_8305C170);
PPC_FUNC_IMPL(__imp__sub_8305C170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305C178;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-20332
	ctx.r4.s64 = ctx.r11.s64 + -20332;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C198;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c1d4
	if (ctx.cr0.lt) goto loc_8305C1D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C1A8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c1d4
	if (ctx.cr0.lt) goto loc_8305C1D4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-20352
	ctx.r4.s64 = ctx.r11.s64 + -20352;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C1C8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c1d4
	if (ctx.cr0.lt) goto loc_8305C1D4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305C1D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305C1DC"))) PPC_WEAK_FUNC(sub_8305C1DC);
PPC_FUNC_IMPL(__imp__sub_8305C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C1E0"))) PPC_WEAK_FUNC(sub_8305C1E0);
PPC_FUNC_IMPL(__imp__sub_8305C1E0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-20752
	ctx.r4.s64 = ctx.r11.s64 + -20752;
	// bl 0x830572e8
	ctx.lr = 0x8305C1FC;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C20C"))) PPC_WEAK_FUNC(sub_8305C20C);
PPC_FUNC_IMPL(__imp__sub_8305C20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C210"))) PPC_WEAK_FUNC(sub_8305C210);
PPC_FUNC_IMPL(__imp__sub_8305C210) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19076
	ctx.r4.s64 = ctx.r10.s64 + -19076;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C234;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C244"))) PPC_WEAK_FUNC(sub_8305C244);
PPC_FUNC_IMPL(__imp__sub_8305C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C248"))) PPC_WEAK_FUNC(sub_8305C248);
PPC_FUNC_IMPL(__imp__sub_8305C248) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r9,-20308
	ctx.r4.s64 = ctx.r9.s64 + -20308;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C274;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C284"))) PPC_WEAK_FUNC(sub_8305C284);
PPC_FUNC_IMPL(__imp__sub_8305C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C288"))) PPC_WEAK_FUNC(sub_8305C288);
PPC_FUNC_IMPL(__imp__sub_8305C288) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19048
	ctx.r4.s64 = ctx.r10.s64 + -19048;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C2AC;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C2BC"))) PPC_WEAK_FUNC(sub_8305C2BC);
PPC_FUNC_IMPL(__imp__sub_8305C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C2C0"))) PPC_WEAK_FUNC(sub_8305C2C0);
PPC_FUNC_IMPL(__imp__sub_8305C2C0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-19020
	ctx.r4.s64 = ctx.r10.s64 + -19020;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C2E4;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C2F4"))) PPC_WEAK_FUNC(sub_8305C2F4);
PPC_FUNC_IMPL(__imp__sub_8305C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C2F8"))) PPC_WEAK_FUNC(sub_8305C2F8);
PPC_FUNC_IMPL(__imp__sub_8305C2F8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-18992
	ctx.r4.s64 = ctx.r11.s64 + -18992;
	// bl 0x830572e8
	ctx.lr = 0x8305C314;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C324"))) PPC_WEAK_FUNC(sub_8305C324);
PPC_FUNC_IMPL(__imp__sub_8305C324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C328"))) PPC_WEAK_FUNC(sub_8305C328);
PPC_FUNC_IMPL(__imp__sub_8305C328) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-18972
	ctx.r4.s64 = ctx.r11.s64 + -18972;
	// bl 0x830572e8
	ctx.lr = 0x8305C344;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C354"))) PPC_WEAK_FUNC(sub_8305C354);
PPC_FUNC_IMPL(__imp__sub_8305C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C358"))) PPC_WEAK_FUNC(sub_8305C358);
PPC_FUNC_IMPL(__imp__sub_8305C358) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-18952
	ctx.r4.s64 = ctx.r10.s64 + -18952;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C37C;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C38C"))) PPC_WEAK_FUNC(sub_8305C38C);
PPC_FUNC_IMPL(__imp__sub_8305C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C390"))) PPC_WEAK_FUNC(sub_8305C390);
PPC_FUNC_IMPL(__imp__sub_8305C390) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-18924
	ctx.r4.s64 = ctx.r10.s64 + -18924;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C3B4;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C3C4"))) PPC_WEAK_FUNC(sub_8305C3C4);
PPC_FUNC_IMPL(__imp__sub_8305C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C3C8"))) PPC_WEAK_FUNC(sub_8305C3C8);
PPC_FUNC_IMPL(__imp__sub_8305C3C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-18896
	ctx.r4.s64 = ctx.r10.s64 + -18896;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C3F0;
	sub_830572E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C400"))) PPC_WEAK_FUNC(sub_8305C400);
PPC_FUNC_IMPL(__imp__sub_8305C400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x8305C408;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305c550
	if (!ctx.cr6.gt) goto loc_8305C550;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r22,29760
	ctx.r22.s64 = 1950351360;
	// addi r29,r6,-20088
	ctx.r29.s64 = ctx.r6.s64 + -20088;
	// addi r28,r7,-18804
	ctx.r28.s64 = ctx.r7.s64 + -18804;
	// addi r27,r8,-18824
	ctx.r27.s64 = ctx.r8.s64 + -18824;
	// addi r26,r9,-18840
	ctx.r26.s64 = ctx.r9.s64 + -18840;
	// addi r25,r10,-18864
	ctx.r25.s64 = ctx.r10.s64 + -18864;
	// addi r24,r11,-21396
	ctx.r24.s64 = ctx.r11.s64 + -21396;
loc_8305C464:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305C47C;
	sub_82D16878(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305C494;
	sub_82D16878(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305C4AC;
	sub_82D16878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C4B4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c554
	if (ctx.cr0.lt) goto loc_8305C554;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C4CC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c554
	if (ctx.cr0.lt) goto loc_8305C554;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8305c564
	if (ctx.cr6.gt) goto loc_8305C564;
	// beq cr6,0x8305c55c
	if (ctx.cr6.eq) goto loc_8305C55C;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305c588
	if (ctx.cr6.eq) goto loc_8305C588;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305c590
	if (ctx.cr6.eq) goto loc_8305C590;
	// lis r11,29616
	ctx.r11.s64 = 1940914176;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305c55c
	if (ctx.cr6.eq) goto loc_8305C55C;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8305c598
	if (!ctx.cr6.eq) goto loc_8305C598;
loc_8305C510:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8305C514:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C51C;
	sub_830572E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8305c554
	if (ctx.cr6.lt) goto loc_8305C554;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C538;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c554
	if (ctx.cr0.lt) goto loc_8305C554;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305c464
	if (ctx.cr6.lt) goto loc_8305C464;
loc_8305C550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305C554:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
loc_8305C55C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8305c514
	goto loc_8305C514;
loc_8305C564:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305c510
	if (ctx.cr6.eq) goto loc_8305C510;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305c590
	if (ctx.cr6.eq) goto loc_8305C590;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8305c598
	if (!ctx.cr6.eq) goto loc_8305C598;
loc_8305C588:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8305c514
	goto loc_8305C514;
loc_8305C590:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x8305c514
	goto loc_8305C514;
loc_8305C598:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8305c554
	goto loc_8305C554;
}

__attribute__((alias("__imp__sub_8305C5A4"))) PPC_WEAK_FUNC(sub_8305C5A4);
PPC_FUNC_IMPL(__imp__sub_8305C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C5A8"))) PPC_WEAK_FUNC(sub_8305C5A8);
PPC_FUNC_IMPL(__imp__sub_8305C5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305C5B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C5C4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c5e4
	if (ctx.cr0.lt) goto loc_8305C5E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-18788
	ctx.r4.s64 = ctx.r11.s64 + -18788;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C5E4;
	sub_830572E8(ctx, base);
loc_8305C5E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305C5EC"))) PPC_WEAK_FUNC(sub_8305C5EC);
PPC_FUNC_IMPL(__imp__sub_8305C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C5F0"))) PPC_WEAK_FUNC(sub_8305C5F0);
PPC_FUNC_IMPL(__imp__sub_8305C5F0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-18740
	ctx.r4.s64 = ctx.r11.s64 + -18740;
	// bl 0x830572e8
	ctx.lr = 0x8305C608;
	sub_830572E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C618"))) PPC_WEAK_FUNC(sub_8305C618);
PPC_FUNC_IMPL(__imp__sub_8305C618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8305C620;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,1816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r27,r11,-21408
	ctx.r27.s64 = ctx.r11.s64 + -21408;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305c6b8
	if (!ctx.cr6.gt) goto loc_8305C6B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-18668
	ctx.r29.s64 = ctx.r11.s64 + -18668;
loc_8305C650:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C658;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c758
	if (ctx.cr0.lt) goto loc_8305C758;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305C678;
	sub_82D16878(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305C68C;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C6A0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c758
	if (ctx.cr0.lt) goto loc_8305C758;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305c650
	if (ctx.cr6.lt) goto loc_8305C650;
loc_8305C6B8:
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305c754
	if (!ctx.cr6.gt) goto loc_8305C754;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-18704
	ctx.r29.s64 = ctx.r11.s64 + -18704;
loc_8305C6D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C6D8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c758
	if (ctx.cr0.lt) goto loc_8305C758;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d16878
	ctx.lr = 0x8305C6F8;
	sub_82D16878(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d16878
	ctx.lr = 0x8305C710;
	sub_82D16878(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305C724;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C73C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c758
	if (ctx.cr0.lt) goto loc_8305C758;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305c6d0
	if (ctx.cr6.lt) goto loc_8305C6D0;
loc_8305C754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305C758:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8305C760"))) PPC_WEAK_FUNC(sub_8305C760);
PPC_FUNC_IMPL(__imp__sub_8305C760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8305C768;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C778;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18456
	ctx.r4.s64 = ctx.r11.s64 + -18456;
	// bl 0x830572e8
	ctx.lr = 0x8305C790;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C7A0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18472
	ctx.r4.s64 = ctx.r11.s64 + -18472;
	// bl 0x830572e8
	ctx.lr = 0x8305C7B8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C7C8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18484
	ctx.r4.s64 = ctx.r11.s64 + -18484;
	// bl 0x830572e8
	ctx.lr = 0x8305C7E0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C7F0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// addi r4,r11,-18528
	ctx.r4.s64 = ctx.r11.s64 + -18528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305C80C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C81C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21272
	ctx.r4.s64 = ctx.r11.s64 + -21272;
	// bl 0x830572e8
	ctx.lr = 0x8305C834;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305C850;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18548
	ctx.r4.s64 = ctx.r11.s64 + -18548;
	// bl 0x830572e8
	ctx.lr = 0x8305C868;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C878;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18568
	ctx.r4.s64 = ctx.r11.s64 + -18568;
	// bl 0x830572e8
	ctx.lr = 0x8305C890;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C8A0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18592
	ctx.r4.s64 = ctx.r11.s64 + -18592;
	// bl 0x830572e8
	ctx.lr = 0x8305C8B8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C8C8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18612
	ctx.r4.s64 = ctx.r11.s64 + -18612;
	// bl 0x830572e8
	ctx.lr = 0x8305C8E0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305C8F0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18640
	ctx.r4.s64 = ctx.r11.s64 + -18640;
	// bl 0x830572e8
	ctx.lr = 0x8305C908;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076f08
	ctx.lr = 0x8305C91C;
	sub_83076F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305C938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-21236
	ctx.r4.s64 = ctx.r10.s64 + -21236;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830572e8
	ctx.lr = 0x8305C95C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305c9d0
	if (ctx.cr0.lt) goto loc_8305C9D0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8305c988
	if (ctx.cr6.eq) goto loc_8305C988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305C980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8305C988:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// bl 0x82d27900
	ctx.lr = 0x8305C994;
	sub_82D27900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8305c9cc
	if (ctx.cr0.lt) goto loc_8305C9CC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,1536(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r31,1532(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305C9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8305C9C4;
	sub_82CA2C60(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8305C9CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8305C9D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8305C9D8"))) PPC_WEAK_FUNC(sub_8305C9D8);
PPC_FUNC_IMPL(__imp__sub_8305C9D8) {
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
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305C9FC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ca20
	if (ctx.cr0.lt) goto loc_8305CA20;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21232
	ctx.r4.s64 = ctx.r11.s64 + -21232;
	// bl 0x830572e8
	ctx.lr = 0x8305CA14;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ca20
	if (ctx.cr0.lt) goto loc_8305CA20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305CA20:
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

__attribute__((alias("__imp__sub_8305CA34"))) PPC_WEAK_FUNC(sub_8305CA34);
PPC_FUNC_IMPL(__imp__sub_8305CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305CA38"))) PPC_WEAK_FUNC(sub_8305CA38);
PPC_FUNC_IMPL(__imp__sub_8305CA38) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = ctx.r11.s64 + -17152;
	// bl 0x830572e8
	ctx.lr = 0x8305CA58;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cac4
	if (ctx.cr0.lt) goto loc_8305CAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CA68;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cac4
	if (ctx.cr0.lt) goto loc_8305CAC4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18432
	ctx.r4.s64 = ctx.r11.s64 + -18432;
	// bl 0x830572e8
	ctx.lr = 0x8305CA84;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cac4
	if (ctx.cr0.lt) goto loc_8305CAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CA94;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cac4
	if (ctx.cr0.lt) goto loc_8305CAC4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21272
	ctx.r4.s64 = ctx.r11.s64 + -21272;
	// bl 0x830572e8
	ctx.lr = 0x8305CAAC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cac4
	if (ctx.cr0.lt) goto loc_8305CAC4;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8305CAC4:
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

__attribute__((alias("__imp__sub_8305CAD8"))) PPC_WEAK_FUNC(sub_8305CAD8);
PPC_FUNC_IMPL(__imp__sub_8305CAD8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x830573b8
	ctx.lr = 0x8305CAF0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cb4c
	if (ctx.cr0.lt) goto loc_8305CB4C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18360
	ctx.r4.s64 = ctx.r11.s64 + -18360;
	// bl 0x830572e8
	ctx.lr = 0x8305CB0C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cb4c
	if (ctx.cr0.lt) goto loc_8305CB4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CB1C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cb4c
	if (ctx.cr0.lt) goto loc_8305CB4C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21272
	ctx.r4.s64 = ctx.r11.s64 + -21272;
	// bl 0x830572e8
	ctx.lr = 0x8305CB34;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cb4c
	if (ctx.cr0.lt) goto loc_8305CB4C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8305CB4C:
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

__attribute__((alias("__imp__sub_8305CB60"))) PPC_WEAK_FUNC(sub_8305CB60);
PPC_FUNC_IMPL(__imp__sub_8305CB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8305CB68;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8305cca8
	if (ctx.cr6.eq) goto loc_8305CCA8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
loc_8305CB94:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8305cc98
	if (ctx.cr6.eq) goto loc_8305CC98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305CBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305CBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// bgt cr6,0x8305cdb8
	if (ctx.cr6.gt) goto loc_8305CDB8;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-22680
	ctx.r12.s64 = ctx.r12.s64 + -22680;
	// lbzx r0,r12,r30
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r30.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// addi r12,r12,-13304
	ctx.r12.s64 = ctx.r12.s64 + -13304;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8305CDB0;
	case 1:
		goto loc_8305CC08;
	case 2:
		goto loc_8305CC10;
	case 3:
		goto loc_8305CC18;
	case 4:
		goto loc_8305CC20;
	case 5:
		goto loc_8305CC28;
	case 6:
		goto loc_8305CC30;
	case 7:
		goto loc_8305CC38;
	case 8:
		goto loc_8305CC40;
	case 9:
		goto loc_8305CC48;
	case 10:
		goto loc_8305CC50;
	case 11:
		goto loc_8305CC58;
	case 12:
		goto loc_8305CC60;
	case 13:
		goto loc_8305CC68;
	case 14:
		goto loc_8305CC70;
	case 15:
		goto loc_8305CDB8;
	case 16:
		goto loc_8305CDB8;
	case 17:
		goto loc_8305CC78;
	case 18:
		goto loc_8305CC78;
	default:
		__builtin_unreachable();
	}
loc_8305CC08:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC10:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC18:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC20:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC28:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC30:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC38:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC40:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC48:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC50:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC58:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC60:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC68:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC70:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8305cc7c
	goto loc_8305CC7C;
loc_8305CC78:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8305CC7C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8305cc90
	if (ctx.cr6.lt) goto loc_8305CC90;
	// bne cr6,0x8305cc98
	if (!ctx.cr6.eq) goto loc_8305CC98;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8305cc98
	if (!ctx.cr6.lt) goto loc_8305CC98;
loc_8305CC90:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8305CC98:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8305cb94
	if (ctx.cr6.lt) goto loc_8305CB94;
loc_8305CCA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CCB0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-18004
	ctx.r5.s64 = ctx.r11.s64 + -18004;
	// addi r4,r10,-18068
	ctx.r4.s64 = ctx.r10.s64 + -18068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305CCD0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CCE0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21272
	ctx.r4.s64 = ctx.r11.s64 + -21272;
	// bl 0x830572e8
	ctx.lr = 0x8305CCF8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305CD14;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18144
	ctx.r4.s64 = ctx.r11.s64 + -18144;
	// bl 0x830572e8
	ctx.lr = 0x8305CD2C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CD3C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18264
	ctx.r4.s64 = ctx.r11.s64 + -18264;
	// bl 0x830572e8
	ctx.lr = 0x8305CD58;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305CD74;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21232
	ctx.r4.s64 = ctx.r11.s64 + -21232;
	// bl 0x830572e8
	ctx.lr = 0x8305CD8C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cda8
	if (ctx.cr0.lt) goto loc_8305CDA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305CDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8305CDA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_8305CDB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8305cda8
	goto loc_8305CDA8;
loc_8305CDB8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8305cda8
	goto loc_8305CDA8;
}

__attribute__((alias("__imp__sub_8305CDC4"))) PPC_WEAK_FUNC(sub_8305CDC4);
PPC_FUNC_IMPL(__imp__sub_8305CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305CDC8"))) PPC_WEAK_FUNC(sub_8305CDC8);
PPC_FUNC_IMPL(__imp__sub_8305CDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8305CDD0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8305cf90
	if (ctx.cr6.eq) goto loc_8305CF90;
	// bl 0x830573b8
	ctx.lr = 0x8305CDE8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17760
	ctx.r4.s64 = ctx.r11.s64 + -17760;
	// bl 0x830572e8
	ctx.lr = 0x8305CE00;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CE10;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21272
	ctx.r30.s64 = ctx.r11.s64 + -21272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305CE2C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305CE48;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17832
	ctx.r4.s64 = ctx.r11.s64 + -17832;
	// bl 0x830572e8
	ctx.lr = 0x8305CE60;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CE70;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305CE84;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,1676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// ble cr6,0x8305cf28
	if (!ctx.cr6.gt) goto loc_8305CF28;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,1548
	ctx.r30.s64 = ctx.r31.s64 + 1548;
	// addi r29,r10,-17920
	ctx.r29.s64 = ctx.r10.s64 + -17920;
	// addi r28,r11,-17984
	ctx.r28.s64 = ctx.r11.s64 + -17984;
loc_8305CEBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CEC4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830572e8
	ctx.lr = 0x8305CEE0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305CEF0;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830572e8
	ctx.lr = 0x8305CF0C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305cebc
	if (ctx.cr6.lt) goto loc_8305CEBC;
loc_8305CF28:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305CF3C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21236
	ctx.r4.s64 = ctx.r11.s64 + -21236;
	// bl 0x830572e8
	ctx.lr = 0x8305CF54;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305CF70;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21232
	ctx.r4.s64 = ctx.r11.s64 + -21232;
	// bl 0x830572e8
	ctx.lr = 0x8305CF88;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305cf94
	if (ctx.cr0.lt) goto loc_8305CF94;
loc_8305CF90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305CF94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8305CF9C"))) PPC_WEAK_FUNC(sub_8305CF9C);
PPC_FUNC_IMPL(__imp__sub_8305CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305CFA0"))) PPC_WEAK_FUNC(sub_8305CFA0);
PPC_FUNC_IMPL(__imp__sub_8305CFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8305CFA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83057560
	ctx.lr = 0x8305CFD0;
	sub_83057560(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305CFE8;
	sub_82D16878(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r11,-17732
	ctx.r28.s64 = ctx.r11.s64 + -17732;
loc_8305CFF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305D000;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d048
	if (ctx.cr0.lt) goto loc_8305D048;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D020;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d048
	if (ctx.cr0.lt) goto loc_8305D048;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8305cff8
	if (ctx.cr6.lt) goto loc_8305CFF8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83073b20
	ctx.lr = 0x8305D048;
	sub_83073B20(ctx, base);
loc_8305D048:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8305D050"))) PPC_WEAK_FUNC(sub_8305D050);
PPC_FUNC_IMPL(__imp__sub_8305D050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8305D058;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8305d51c
	if (!ctx.cr6.eq) goto loc_8305D51C;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bgt cr6,0x8305d720
	if (ctx.cr6.gt) goto loc_8305D720;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-22656
	ctx.r12.s64 = ctx.r12.s64 + -22656;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// addi r12,r12,-12068
	ctx.r12.s64 = ctx.r12.s64 + -12068;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8305D718;
	case 1:
		goto loc_8305D0DC;
	case 2:
		goto loc_8305D0E4;
	case 3:
		goto loc_8305D0EC;
	case 4:
		goto loc_8305D0F4;
	case 5:
		goto loc_8305D0FC;
	case 6:
		goto loc_8305D104;
	case 7:
		goto loc_8305D10C;
	case 8:
		goto loc_8305D114;
	case 9:
		goto loc_8305D11C;
	case 10:
		goto loc_8305D124;
	case 11:
		goto loc_8305D12C;
	case 12:
		goto loc_8305D134;
	case 13:
		goto loc_8305D13C;
	case 14:
		goto loc_8305D144;
	case 15:
		goto loc_8305D720;
	case 16:
		goto loc_8305D720;
	case 17:
		goto loc_8305D14C;
	case 18:
		goto loc_8305D154;
	default:
		__builtin_unreachable();
	}
loc_8305D0DC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D0E4:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D0EC:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D0F4:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D0FC:
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D104:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D10C:
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D114:
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D11C:
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D124:
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D12C:
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D134:
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D13C:
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D144:
	// li r30,13
	ctx.r30.s64 = 13;
	// b 0x8305d158
	goto loc_8305D158;
loc_8305D14C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8305D154:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
loc_8305D158:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8305d1b4
	if (ctx.cr0.eq) goto loc_8305D1B4;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,348(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305D1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8305d1dc
	if (!ctx.cr0.lt) goto loc_8305D1DC;
	// b 0x8305d520
	goto loc_8305D520;
loc_8305D1B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8305D1DC:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// ble cr6,0x8305d268
	if (!ctx.cr6.gt) goto loc_8305D268;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_8305D218:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8305d258
	if (!ctx.cr6.eq) goto loc_8305D258;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8305d258
	if (!ctx.cr6.eq) goto loc_8305D258;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8305d258
	if (!ctx.cr6.eq) goto loc_8305D258;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
loc_8305D258:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8305d218
	if (ctx.cr6.lt) goto loc_8305D218;
loc_8305D268:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8305D274:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8305d28c
	if (ctx.cr6.eq) goto loc_8305D28C;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8305D28C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8305d274
	if (!ctx.cr0.eq) goto loc_8305D274;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r30,1
	ctx.r11.u64 = ctx.r30.u32 & 0x7FFFFFFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bne cr6,0x8305d2f0
	if (!ctx.cr6.eq) goto loc_8305D2F0;
	// oris r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 983040;
loc_8305D2F0:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne 0x8305d324
	if (!ctx.cr0.eq) goto loc_8305D324;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8305d31c
	if (!ctx.cr0.eq) goto loc_8305D31C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8305d324
	if (ctx.cr0.eq) goto loc_8305D324;
loc_8305D31C:
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8305D324:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// rlwimi r10,r11,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// rlwinm r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r9,r9,1984
	ctx.r9.s64 = ctx.r9.s64 + 1984;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r5,r8,-17388
	ctx.r5.s64 = ctx.r8.s64 + -17388;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r10,26,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7C;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82d16878
	ctx.lr = 0x8305D374;
	sub_82D16878(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8305d528
	if (ctx.cr0.eq) goto loc_8305D528;
	// beq cr6,0x8305d52c
	if (ctx.cr6.eq) goto loc_8305D52C;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r26,1548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1548, ctx.r26.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// bl 0x830573b8
	ctx.lr = 0x8305D3BC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-17448
	ctx.r4.s64 = ctx.r11.s64 + -17448;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D3DC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305D3EC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-17536
	ctx.r4.s64 = ctx.r11.s64 + -17536;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D40C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8305d43c
	if (!ctx.cr6.eq) goto loc_8305D43C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305D438;
	sub_82FFC9D0(ctx, base);
	// b 0x8305d45c
	goto loc_8305D45C;
loc_8305D43C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-17548
	ctx.r5.s64 = ctx.r11.s64 + -17548;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305D448;
	sub_82FFC9D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x83057658
	ctx.lr = 0x8305D454;
	sub_83057658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
loc_8305D45C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r10,-17564
	ctx.r4.s64 = ctx.r10.s64 + -17564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = ctx.r11.s64 + -17152;
	// bl 0x830572e8
	ctx.lr = 0x8305D494;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8305d51c
	if (ctx.cr6.eq) goto loc_8305D51C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305D4B4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-21396
	ctx.r4.s64 = ctx.r11.s64 + -21396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D4D0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r6,r10,-21388
	ctx.r6.s64 = ctx.r10.s64 + -21388;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
loc_8305D50C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D514;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
loc_8305D51C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305D520:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8305D528:
	// bne cr6,0x8305d51c
	if (!ctx.cr6.eq) goto loc_8305D51C;
loc_8305D52C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305D534;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-17624
	ctx.r4.s64 = ctx.r11.s64 + -17624;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D554;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305D564;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-17712
	ctx.r4.s64 = ctx.r11.s64 + -17712;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D584;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// rlwinm r10,r9,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305d648
	if (ctx.cr6.eq) goto loc_8305D648;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8305D5AC:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8305d5d8
	goto loc_8305D5D8;
loc_8305D5BC:
	// rlwinm. r10,r9,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8305d5e0
	if (!ctx.cr0.eq) goto loc_8305D5E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8305D5D8:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8305d5bc
	if (ctx.cr6.lt) goto loc_8305D5BC;
loc_8305D5E0:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8305d5ac
	if (!ctx.cr0.eq) goto loc_8305D5AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
loc_8305D5F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8305d608
	if (ctx.cr6.lt) goto loc_8305D608;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8305D608:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8305d5f4
	if (!ctx.cr6.gt) goto loc_8305D5F4;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r27,136(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bne cr6,0x8305d65c
	if (!ctx.cr6.eq) goto loc_8305D65C;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x8305d65c
	if (!ctx.cr6.eq) goto loc_8305D65C;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x8305d65c
	if (!ctx.cr6.eq) goto loc_8305D65C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bne cr6,0x8305d65c
	if (!ctx.cr6.eq) goto loc_8305D65C;
loc_8305D648:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305D658;
	sub_82FFC9D0(ctx, base);
	// b 0x8305d6e4
	goto loc_8305D6E4;
loc_8305D65C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-17548
	ctx.r5.s64 = ctx.r11.s64 + -17548;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305D670;
	sub_82FFC9D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305D678;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-21396
	ctx.r4.s64 = ctx.r11.s64 + -21396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305D694;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
	// bl 0x830572e8
	ctx.lr = 0x8305D6DC;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
loc_8305D6E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r10,-17564
	ctx.r4.s64 = ctx.r10.s64 + -17564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305D704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305d520
	if (ctx.cr0.lt) goto loc_8305D520;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-17152
	ctx.r4.s64 = ctx.r11.s64 + -17152;
	// b 0x8305d50c
	goto loc_8305D50C;
loc_8305D718:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8305d520
	goto loc_8305D520;
loc_8305D720:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8305d520
	goto loc_8305D520;
}

__attribute__((alias("__imp__sub_8305D72C"))) PPC_WEAK_FUNC(sub_8305D72C);
PPC_FUNC_IMPL(__imp__sub_8305D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305D730"))) PPC_WEAK_FUNC(sub_8305D730);
PPC_FUNC_IMPL(__imp__sub_8305D730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8305D738;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// rlwinm. r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8305d830
	if (ctx.cr0.eq) goto loc_8305D830;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r30,r11,1984
	ctx.r30.s64 = ctx.r11.s64 + 1984;
	// addi r5,r10,-17304
	ctx.r5.s64 = ctx.r10.s64 + -17304;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d16878
	ctx.lr = 0x8305D77C;
	sub_82D16878(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x8305d7f8
	if (!ctx.cr6.eq) goto loc_8305D7F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// rlwinm r31,r11,24,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// addi r5,r8,-17324
	ctx.r5.s64 = ctx.r8.s64 + -17324;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82d16878
	ctx.lr = 0x8305D7C0;
	sub_82D16878(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x8305d7e0
	if (!ctx.cr6.gt) goto loc_8305D7E0;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// ble cr6,0x8305d848
	if (!ctx.cr6.gt) goto loc_8305D848;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// ble cr6,0x8305d7e0
	if (!ctx.cr6.gt) goto loc_8305D7E0;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bne cr6,0x8305d848
	if (!ctx.cr6.eq) goto loc_8305D848;
loc_8305D7E0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-17332
	ctx.r5.s64 = ctx.r11.s64 + -17332;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8304dc60
	ctx.lr = 0x8305D7F4;
	sub_8304DC60(ctx, base);
	// b 0x8305d848
	goto loc_8305D848;
loc_8305D7F8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// rlwimi r8,r31,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r5,r7,-17364
	ctx.r5.s64 = ctx.r7.s64 + -17364;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r8,26,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x7C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82d16878
	ctx.lr = 0x8305D82C;
	sub_82D16878(ctx, base);
	// b 0x8305d848
	goto loc_8305D848;
loc_8305D830:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83057560
	ctx.lr = 0x8305D848;
	sub_83057560(ctx, base);
loc_8305D848:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8305D850"))) PPC_WEAK_FUNC(sub_8305D850);
PPC_FUNC_IMPL(__imp__sub_8305D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x8305D858;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r4,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r4.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r9,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r9.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r10,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r20,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r20.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// beq cr6,0x8305d92c
	if (ctx.cr6.eq) goto loc_8305D92C;
loc_8305D898:
	// lwz r8,788(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x8305d8a8
	if (ctx.cr6.eq) goto loc_8305D8A8;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
loc_8305D8A8:
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// li r7,32
	ctx.r7.s64 = 32;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r5,r31,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r4,r11,0,8,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// bl 0x8305d730
	ctx.lr = 0x8305D8D4;
	sub_8305D730(ctx, base);
	// lwzx r11,r31,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x8305d920
	if (!ctx.cr6.eq) goto loc_8305D920;
	// lwzx r11,r31,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8305d920
	if (!ctx.cr0.eq) goto loc_8305D920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d16878
	ctx.lr = 0x8305D910;
	sub_82D16878(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305D920;
	sub_82FFC9D0(ctx, base);
loc_8305D920:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8305d898
	if (ctx.cr6.lt) goto loc_8305D898;
loc_8305D92C:
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// stw r17,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r17,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
	// addi r30,r15,-1
	ctx.r30.s64 = ctx.r15.s64 + -1;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// lis r18,228
	ctx.r18.s64 = 14942208;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
loc_8305D950:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8305da68
	if (ctx.cr6.eq) goto loc_8305DA68;
	// addi r27,r1,200
	ctx.r27.s64 = ctx.r1.s64 + 200;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwzx r25,r29,r27
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// lwzx r24,r29,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// subf r26,r16,r20
	ctx.r26.s64 = ctx.r20.s64 - ctx.r16.s64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8305D984:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8305d998
	if (!ctx.cr6.eq) goto loc_8305D998;
	// lwzx r11,r7,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8305d9ac
	if (!ctx.cr6.eq) goto loc_8305D9AC;
loc_8305D998:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8305da40
	if (!ctx.cr6.eq) goto loc_8305DA40;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8305da40
	if (ctx.cr0.eq) goto loc_8305DA40;
loc_8305D9AC:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x8305da40
	if (!ctx.cr6.lt) goto loc_8305DA40;
	// addi r4,r6,32
	ctx.r4.s64 = ctx.r6.s64 + 32;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// subf r31,r5,r15
	ctx.r31.s64 = ctx.r15.s64 - ctx.r5.s64;
loc_8305D9C0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8305d9d8
	if (!ctx.cr6.eq) goto loc_8305D9D8;
	// lwzx r11,r3,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r20.u32);
	// lwzx r10,r26,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8305d9f4
	if (ctx.cr6.eq) goto loc_8305D9F4;
loc_8305D9D8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8305da2c
	if (!ctx.cr6.eq) goto loc_8305DA2C;
	// lwzx r11,r3,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r16.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8305da2c
	if (!ctx.cr0.eq) goto loc_8305DA2C;
loc_8305D9F4:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8305D9FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r18,0(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r18,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r18.s64;
	// beq 0x8305da20
	if (ctx.cr0.eq) goto loc_8305DA20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8305d9fc
	if (ctx.cr6.eq) goto loc_8305D9FC;
loc_8305DA20:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8305da2c
	if (!ctx.cr0.eq) goto loc_8305DA2C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_8305DA2C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// bne 0x8305d9c0
	if (!ctx.cr0.eq) goto loc_8305D9C0;
	// lis r18,228
	ctx.r18.s64 = 14942208;
loc_8305DA40:
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8305da4c
	if (!ctx.cr6.gt) goto loc_8305DA4C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_8305DA4C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x8305d984
	if (!ctx.cr0.eq) goto loc_8305D984;
	// stwx r25,r29,r27
	PPC_STORE_U32(ctx.r29.u32 + ctx.r27.u32, ctx.r25.u32);
loc_8305DA68:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x8305d950
	if (ctx.cr6.lt) goto loc_8305D950;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8305da8c
	if (!ctx.cr6.gt) goto loc_8305DA8C;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
loc_8305DA8C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// addi r29,r11,-21472
	ctx.r29.s64 = ctx.r11.s64 + -21472;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// beq cr6,0x8305dbdc
	if (ctx.cr6.eq) goto loc_8305DBDC;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_8305DAA8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8305dadc
	if (ctx.cr6.eq) goto loc_8305DADC;
	// lis r8,3072
	ctx.r8.s64 = 201326592;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8305dadc
	if (ctx.cr6.eq) goto loc_8305DADC;
	// lis r8,2816
	ctx.r8.s64 = 184549376;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8305dae0
	if (!ctx.cr6.eq) goto loc_8305DAE0;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// b 0x8305dae0
	goto loc_8305DAE0;
loc_8305DADC:
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_8305DAE0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8305daa8
	if (!ctx.cr0.eq) goto loc_8305DAA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r11,-21144
	ctx.r31.s64 = ctx.r11.s64 + -21144;
	// beq cr6,0x8305db68
	if (ctx.cr6.eq) goto loc_8305DB68;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305DB04;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,-21216
	ctx.r4.s64 = ctx.r11.s64 + -21216;
	// bl 0x830572e8
	ctx.lr = 0x8305DB1C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305DB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305DB60;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
loc_8305DB68:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8305dbdc
	if (ctx.cr6.eq) goto loc_8305DBDC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305DB78;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,-21176
	ctx.r4.s64 = ctx.r11.s64 + -21176;
	// bl 0x830572e8
	ctx.lr = 0x8305DB90;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305DBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305DBD4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
loc_8305DBDC:
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// stw r17,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r17.u32);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r17,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// addi r25,r1,192
	ctx.r25.s64 = ctx.r1.s64 + 192;
	// stw r19,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// stw r24,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
loc_8305DC00:
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r17,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// beq cr6,0x8305dd14
	if (ctx.cr6.eq) goto loc_8305DD14;
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// subf r27,r16,r20
	ctx.r27.s64 = ctx.r20.s64 - ctx.r16.s64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8305DC34:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8305dc48
	if (!ctx.cr6.eq) goto loc_8305DC48;
	// lwzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8305dc5c
	if (!ctx.cr6.eq) goto loc_8305DC5C;
loc_8305DC48:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x8305dcfc
	if (!ctx.cr6.eq) goto loc_8305DCFC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8305dcfc
	if (ctx.cr0.eq) goto loc_8305DCFC;
loc_8305DC5C:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x8305dcfc
	if (!ctx.cr6.lt) goto loc_8305DCFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// subf r29,r16,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r16.s64;
	// subf r31,r5,r15
	ctx.r31.s64 = ctx.r15.s64 - ctx.r5.s64;
loc_8305DC78:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8305dc90
	if (!ctx.cr6.eq) goto loc_8305DC90;
	// lwzx r10,r4,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r20.u32);
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8305dcac
	if (ctx.cr6.eq) goto loc_8305DCAC;
loc_8305DC90:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x8305dcec
	if (!ctx.cr6.eq) goto loc_8305DCEC;
	// lwzx r10,r4,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8305dcec
	if (!ctx.cr0.eq) goto loc_8305DCEC;
loc_8305DCAC:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8305DCB4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r23,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r23.s64;
	// beq 0x8305dcd8
	if (ctx.cr0.eq) goto loc_8305DCD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8305dcb4
	if (ctx.cr6.eq) goto loc_8305DCB4;
loc_8305DCD8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8305dcec
	if (!ctx.cr0.eq) goto loc_8305DCEC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stwx r19,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r19.u32);
	// stwx r19,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r19.u32);
loc_8305DCEC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8305dc78
	if (!ctx.cr0.eq) goto loc_8305DC78;
loc_8305DCFC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x8305dc34
	if (!ctx.cr0.eq) goto loc_8305DC34;
loc_8305DD14:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8305dd88
	if (ctx.cr6.eq) goto loc_8305DD88;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// subf r5,r16,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r16.s64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r20
	ctx.r7.s64 = ctx.r20.s64 - ctx.r16.s64;
	// subf r10,r16,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r16.s64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
loc_8305DD3C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8305dd50
	if (!ctx.cr6.eq) goto loc_8305DD50;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8305dd64
	if (!ctx.cr6.eq) goto loc_8305DD64;
loc_8305DD50:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8305dd7c
	if (!ctx.cr6.eq) goto loc_8305DD7C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8305dd7c
	if (ctx.cr0.eq) goto loc_8305DD7C;
loc_8305DD64:
	// lwzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8305dd7c
	if (!ctx.cr6.eq) goto loc_8305DD7C;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8305DD7C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8305dd3c
	if (!ctx.cr0.eq) goto loc_8305DD3C;
loc_8305DD88:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x8305dc00
	if (!ctx.cr0.eq) goto loc_8305DC00;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8305de14
	if (ctx.cr6.eq) goto loc_8305DE14;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// subfic r31,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r31.s64 = 4 - ctx.r11.s64;
loc_8305DDAC:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x8305de04
	if (!ctx.cr6.lt) goto loc_8305DE04;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// subf r3,r4,r15
	ctx.r3.s64 = ctx.r15.s64 - ctx.r4.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
loc_8305DDC4:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8305ddf8
	if (!ctx.cr6.lt) goto loc_8305DDF8;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r6,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
loc_8305DDF8:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8305ddc4
	if (!ctx.cr0.eq) goto loc_8305DDC4;
loc_8305DE04:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8305ddac
	if (!ctx.cr0.eq) goto loc_8305DDAC;
loc_8305DE14:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8305de2c
	if (ctx.cr6.eq) goto loc_8305DE2C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r5,r15,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca30e8
	ctx.lr = 0x8305DE2C;
	sub_82CA30E8(ctx, base);
loc_8305DE2C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r18,r1,192
	ctx.r18.s64 = ctx.r1.s64 + 192;
	// addi r19,r11,-21184
	ctx.r19.s64 = ctx.r11.s64 + -21184;
	// addi r22,r10,-21224
	ctx.r22.s64 = ctx.r10.s64 + -21224;
	// addi r23,r9,-21396
	ctx.r23.s64 = ctx.r9.s64 + -21396;
	// addi r21,r8,-17284
	ctx.r21.s64 = ctx.r8.s64 + -17284;
	// addi r20,r7,-17296
	ctx.r20.s64 = ctx.r7.s64 + -17296;
loc_8305DE58:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8305e274
	if (ctx.cr6.eq) goto loc_8305E274;
	// lwz r24,0(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r26,r1,208
	ctx.r26.s64 = ctx.r1.s64 + 208;
loc_8305DE6C:
	// lwz r29,732(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8305de90
	if (!ctx.cr6.eq) goto loc_8305DE90;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8305deac
	if (ctx.cr6.eq) goto loc_8305DEAC;
loc_8305DE90:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8305decc
	if (!ctx.cr6.eq) goto loc_8305DECC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8305decc
	if (!ctx.cr0.eq) goto loc_8305DECC;
loc_8305DEAC:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305DEC8;
	sub_82FFC9D0(ctx, base);
	// b 0x8305e21c
	goto loc_8305E21C;
loc_8305DECC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8305dfe4
	if (ctx.cr6.eq) goto loc_8305DFE4;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
loc_8305DEDC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8305df04
	if (!ctx.cr6.eq) goto loc_8305DF04;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8305df30
	if (ctx.cr6.eq) goto loc_8305DF30;
loc_8305DF04:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8305df74
	if (!ctx.cr6.eq) goto loc_8305DF74;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r16
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// lwzx r8,r8,r16
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8305df74
	if (!ctx.cr0.eq) goto loc_8305DF74;
loc_8305DF30:
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8305DF48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8305df6c
	if (ctx.cr0.eq) goto loc_8305DF6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8305df48
	if (ctx.cr6.eq) goto loc_8305DF48;
loc_8305DF6C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8305df88
	if (ctx.cr0.eq) goto loc_8305DF88;
loc_8305DF74:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8305dedc
	if (ctx.cr6.lt) goto loc_8305DEDC;
	// b 0x8305dfdc
	goto loc_8305DFDC;
loc_8305DF88:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305DFB8;
	sub_82FFC9D0(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8305DFDC:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8305e21c
	if (ctx.cr6.lt) goto loc_8305E21C;
loc_8305DFE4:
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// beq cr6,0x8305e0c0
	if (ctx.cr6.eq) goto loc_8305E0C0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8305e00c
	if (!ctx.cr6.eq) goto loc_8305E00C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8305e0c0
	if (ctx.cr6.eq) goto loc_8305E0C0;
loc_8305E00C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8305e028
	if (!ctx.cr6.eq) goto loc_8305E028;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8305e0c0
	if (ctx.cr0.eq) goto loc_8305E0C0;
loc_8305E028:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8305E02C:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x8305e05c
	if (!ctx.cr6.eq) goto loc_8305E05C;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8305e060
	if (ctx.cr0.eq) goto loc_8305E060;
loc_8305E05C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8305E060:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d16878
	ctx.lr = 0x8305E07C;
	sub_82D16878(ctx, base);
loc_8305E07C:
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x8305e0f0
	if (!ctx.cr6.eq) goto loc_8305E0F0;
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8305e0f0
	if (!ctx.cr0.eq) goto loc_8305E0F0;
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8305e0b8
	if (ctx.cr6.eq) goto loc_8305E0B8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8305e0f0
	if (!ctx.cr6.eq) goto loc_8305E0F0;
loc_8305E0B8:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8305e0f4
	goto loc_8305E0F4;
loc_8305E0C0:
	// lwz r5,700(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8305e02c
	if (ctx.cr6.eq) goto loc_8305E02C;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305E0EC;
	sub_82FFC9D0(ctx, base);
	// b 0x8305e07c
	goto loc_8305E07C;
loc_8305E0F0:
	// lwz r27,1816(r14)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1816);
loc_8305E0F4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8305e21c
	if (ctx.cr6.eq) goto loc_8305E21C;
loc_8305E100:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305E108;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d16878
	ctx.lr = 0x8305E12C;
	sub_82D16878(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82d16878
	ctx.lr = 0x8305E144;
	sub_82D16878(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E154;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8305e1a0
	if (!ctx.cr6.eq) goto loc_8305E1A0;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// rlwinm r8,r11,10,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// rlwinm r7,r11,12,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// rlwinm r6,r11,14,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// rlwinm r5,r11,16,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// b 0x8305e1fc
	goto loc_8305E1FC;
loc_8305E1A0:
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8305e1c0
	if (!ctx.cr6.eq) goto loc_8305E1C0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// b 0x8305e1e0
	goto loc_8305E1E0;
loc_8305E1C0:
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bne cr6,0x8305e1dc
	if (!ctx.cr6.eq) goto loc_8305E1DC;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x8305e1e4
	goto loc_8305E1E4;
loc_8305E1DC:
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
loc_8305E1E0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_8305E1E4:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8305e2e8
	if (ctx.cr6.lt) goto loc_8305E2E8;
loc_8305E1FC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x830572e8
	ctx.lr = 0x8305E208;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e2e8
	if (ctx.cr0.lt) goto loc_8305E2E8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8305e100
	if (ctx.cr6.lt) goto loc_8305E100;
loc_8305E21C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8305de6c
	if (ctx.cr6.lt) goto loc_8305DE6C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_8305E234:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305E25C;
	sub_82FFC9D0(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x8305e234
	if (!ctx.cr0.eq) goto loc_8305E234;
loc_8305E274:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2, ctx.xer);
	// blt cr6,0x8305de58
	if (ctx.cr6.lt) goto loc_8305DE58;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r4,748(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8305e2a4
	if (ctx.cr6.gt) goto loc_8305E2A4;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,740(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// bl 0x82ffc9d0
	ctx.lr = 0x8305E2A4;
	sub_82FFC9D0(ctx, base);
loc_8305E2A4:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// ble cr6,0x8305e2c4
	if (!ctx.cr6.gt) goto loc_8305E2C4;
	// lwz r4,764(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8305e2c4
	if (ctx.cr6.gt) goto loc_8305E2C4;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lwz r3,756(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// bl 0x82ffc9d0
	ctx.lr = 0x8305E2C4;
	sub_82FFC9D0(ctx, base);
loc_8305E2C4:
	// cmplwi cr6,r15,2
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 2, ctx.xer);
	// ble cr6,0x8305e2e4
	if (!ctx.cr6.gt) goto loc_8305E2E4;
	// lwz r4,780(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8305e2e4
	if (ctx.cr6.gt) goto loc_8305E2E4;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r3,772(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// bl 0x82ffc9d0
	ctx.lr = 0x8305E2E4;
	sub_82FFC9D0(ctx, base);
loc_8305E2E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305E2E8:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305E2F0"))) PPC_WEAK_FUNC(sub_8305E2F0);
PPC_FUNC_IMPL(__imp__sub_8305E2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x8305E2F8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305E310;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21460
	ctx.r4.s64 = ctx.r11.s64 + -21460;
	// bl 0x830572e8
	ctx.lr = 0x8305E328;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-21468
	ctx.r4.s64 = ctx.r10.s64 + -21468;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,-21472
	ctx.r24.s64 = ctx.r11.s64 + -21472;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E378;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// clrlwi r30,r11,12
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d850
	ctx.lr = 0x8305E4AC;
	sub_8305D850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r25,r11,-21420
	ctx.r25.s64 = ctx.r11.s64 + -21420;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305E4CC;
	sub_82FFC9D0(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r11,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r8,1816(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r9,-21388
	ctx.r28.s64 = ctx.r9.s64 + -21388;
	// addi r27,r10,-21396
	ctx.r27.s64 = ctx.r10.s64 + -21396;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r29,r11,-21408
	ctx.r29.s64 = ctx.r11.s64 + -21408;
	// ble cr6,0x8305e5ac
	if (!ctx.cr6.gt) goto loc_8305E5AC;
loc_8305E528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305E530;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d16878
	ctx.lr = 0x8305E54C;
	sub_82D16878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E55C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E594;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305e528
	if (ctx.cr6.lt) goto loc_8305E528;
loc_8305E5AC:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305e664
	if (!ctx.cr6.gt) goto loc_8305E664;
loc_8305E5BC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305E5D0;
	sub_82D16878(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d16878
	ctx.lr = 0x8305E5E4;
	sub_82D16878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305E5EC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E604;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8305e62c
	if (ctx.cr6.eq) goto loc_8305E62C;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// b 0x8305e630
	goto loc_8305E630;
loc_8305E62C:
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
loc_8305E630:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E64C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305e5bc
	if (ctx.cr6.lt) goto loc_8305E5BC;
loc_8305E664:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8305e68c
	if (ctx.cr6.eq) goto loc_8305E68C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
loc_8305E68C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305e730
	if (!ctx.cr6.gt) goto loc_8305E730;
loc_8305E69C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305E6B0;
	sub_82D16878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305E6B8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E6D0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8305e6f8
	if (ctx.cr6.eq) goto loc_8305E6F8;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// b 0x8305e6fc
	goto loc_8305E6FC;
loc_8305E6F8:
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
loc_8305E6FC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E718;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305e734
	if (ctx.cr0.lt) goto loc_8305E734;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305e69c
	if (ctx.cr6.lt) goto loc_8305E69C;
loc_8305E730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305E734:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_8305E73C"))) PPC_WEAK_FUNC(sub_8305E73C);
PPC_FUNC_IMPL(__imp__sub_8305E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E740"))) PPC_WEAK_FUNC(sub_8305E740);
PPC_FUNC_IMPL(__imp__sub_8305E740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8305E748;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r26,4336
	ctx.r26.s64 = 284164096;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8305e904
	if (ctx.cr6.eq) goto loc_8305E904;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305E840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d850
	ctx.lr = 0x8305E8FC;
	sub_8305D850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
loc_8305E904:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8305e930
	if (ctx.cr6.eq) goto loc_8305E930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057658
	ctx.lr = 0x8305E91C;
	sub_83057658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8305e940
	if (!ctx.cr6.eq) goto loc_8305E940;
loc_8305E930:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305e944
	if (!ctx.cr6.gt) goto loc_8305E944;
loc_8305E940:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8305E944:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8305ea20
	if (!ctx.cr6.eq) goto loc_8305EA20;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305ea8c
	if (!ctx.cr6.gt) goto loc_8305EA8C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r29,r11,-21396
	ctx.r29.s64 = ctx.r11.s64 + -21396;
	// addi r28,r10,-21420
	ctx.r28.s64 = ctx.r10.s64 + -21420;
loc_8305E978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305E980;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8305e9a8
	if (ctx.cr6.eq) goto loc_8305E9A8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d16878
	ctx.lr = 0x8305E9A4;
	sub_82D16878(ctx, base);
	// b 0x8305e9d8
	goto loc_8305E9D8;
loc_8305E9A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057560
	ctx.lr = 0x8305E9C0;
	sub_83057560(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d16878
	ctx.lr = 0x8305E9D8;
	sub_82D16878(ctx, base);
loc_8305E9D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305E9E8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305EA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305e978
	if (ctx.cr6.lt) goto loc_8305E978;
	// b 0x8305ea8c
	goto loc_8305EA8C;
loc_8305EA20:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8305ea40
	if (ctx.cr6.eq) goto loc_8305EA40;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-21420
	ctx.r5.s64 = ctx.r11.s64 + -21420;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305EA3C;
	sub_82FFC9D0(ctx, base);
	// b 0x8305ea58
	goto loc_8305EA58;
loc_8305EA40:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057560
	ctx.lr = 0x8305EA58;
	sub_83057560(ctx, base);
loc_8305EA58:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// rlwinm r4,r11,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305EA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
loc_8305EA8C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8305eb04
	if (ctx.cr6.eq) goto loc_8305EB04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057700
	ctx.lr = 0x8305EA9C;
	sub_83057700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057560
	ctx.lr = 0x8305EABC;
	sub_83057560(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x83057a40
	ctx.lr = 0x8305EAE0;
	sub_83057A40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057b78
	ctx.lr = 0x8305EAFC;
	sub_83057B78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
loc_8305EB04:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = ctx.r11.s64 + -17152;
	// bl 0x830572e8
	ctx.lr = 0x8305EB14;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305eb24
	if (ctx.cr0.lt) goto loc_8305EB24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830748c0
	ctx.lr = 0x8305EB24;
	sub_830748C0(ctx, base);
loc_8305EB24:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8305EB2C"))) PPC_WEAK_FUNC(sub_8305EB2C);
PPC_FUNC_IMPL(__imp__sub_8305EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305EB30"))) PPC_WEAK_FUNC(sub_8305EB30);
PPC_FUNC_IMPL(__imp__sub_8305EB30) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305EB50;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ec60
	if (ctx.cr0.lt) goto loc_8305EC60;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305EB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ec60
	if (ctx.cr0.lt) goto loc_8305EC60;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d730
	ctx.lr = 0x8305EBB0;
	sub_8305D730(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305EBC8;
	sub_82D16878(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8305ebdc
	if (ctx.cr6.eq) goto loc_8305EBDC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,12736
	ctx.r6.s64 = ctx.r11.s64 + 12736;
	// b 0x8305ebe4
	goto loc_8305EBE4;
loc_8305EBDC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,10184
	ctx.r6.s64 = ctx.r11.s64 + 10184;
loc_8305EBE4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17268
	ctx.r4.s64 = ctx.r11.s64 + -17268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305EBF8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ec60
	if (ctx.cr0.lt) goto loc_8305EC60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305EC08;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ec60
	if (ctx.cr0.lt) goto loc_8305EC60;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21272
	ctx.r4.s64 = ctx.r11.s64 + -21272;
	// bl 0x830572e8
	ctx.lr = 0x8305EC20;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ec60
	if (ctx.cr0.lt) goto loc_8305EC60;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r10,1808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r10.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x830750a0
	ctx.lr = 0x8305EC60;
	sub_830750A0(ctx, base);
loc_8305EC60:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_8305EC78"))) PPC_WEAK_FUNC(sub_8305EC78);
PPC_FUNC_IMPL(__imp__sub_8305EC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8305EC80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305EC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305ECB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8305ece4
	if (ctx.cr6.eq) goto loc_8305ECE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305ECDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
loc_8305ECE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21388
	ctx.r30.s64 = ctx.r11.s64 + -21388;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305ED04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305ED40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d730
	ctx.lr = 0x8305ED64;
	sub_8305D730(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d16878
	ctx.lr = 0x8305ED7C;
	sub_82D16878(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-22404
	ctx.r4.s64 = ctx.r11.s64 + -22404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305ED9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305EDAC;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17172
	ctx.r4.s64 = ctx.r11.s64 + -17172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305EDC8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8305eedc
	if (ctx.cr6.eq) goto loc_8305EEDC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17188
	ctx.r4.s64 = ctx.r11.s64 + -17188;
	// bl 0x830572e8
	ctx.lr = 0x8305EDEC;
	sub_830572E8(ctx, base);
loc_8305EDEC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17212
	ctx.r4.s64 = ctx.r11.s64 + -17212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305EE08;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305EE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17232
	ctx.r4.s64 = ctx.r11.s64 + -17232;
	// bl 0x830572e8
	ctx.lr = 0x8305EE3C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8305eeec
	if (ctx.cr6.eq) goto loc_8305EEEC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17252
	ctx.r4.s64 = ctx.r11.s64 + -17252;
	// bl 0x830572e8
	ctx.lr = 0x8305EE60;
	sub_830572E8(ctx, base);
loc_8305EE60:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305EE70;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21272
	ctx.r4.s64 = ctx.r11.s64 + -21272;
	// bl 0x830572e8
	ctx.lr = 0x8305EE88;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305ef00
	if (ctx.cr0.lt) goto loc_8305EF00;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r10,1544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// stw r10,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r10.u32);
	// beq cr6,0x8305eefc
	if (ctx.cr6.eq) goto loc_8305EEFC;
	// bl 0x83076128
	ctx.lr = 0x8305EED8;
	sub_83076128(ctx, base);
	// b 0x8305ef00
	goto loc_8305EF00;
loc_8305EEDC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,2928
	ctx.r4.s64 = ctx.r11.s64 + 2928;
	// bl 0x830572e8
	ctx.lr = 0x8305EEE8;
	sub_830572E8(ctx, base);
	// b 0x8305edec
	goto loc_8305EDEC;
loc_8305EEEC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-21268
	ctx.r4.s64 = ctx.r11.s64 + -21268;
	// bl 0x830572e8
	ctx.lr = 0x8305EEF8;
	sub_830572E8(ctx, base);
	// b 0x8305ee60
	goto loc_8305EE60;
loc_8305EEFC:
	// bl 0x83076058
	ctx.lr = 0x8305EF00;
	sub_83076058(ctx, base);
loc_8305EF00:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8305EF08"))) PPC_WEAK_FUNC(sub_8305EF08);
PPC_FUNC_IMPL(__imp__sub_8305EF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8305EF10;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8305ef34
	if (ctx.cr6.eq) goto loc_8305EF34;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x8305ef38
	goto loc_8305EF38;
loc_8305EF34:
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
loc_8305EF38:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305EF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305EF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r25,15
	ctx.r25.s64 = 983040;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8305efd4
	if (!ctx.cr6.eq) goto loc_8305EFD4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8305efd4
	if (!ctx.cr6.eq) goto loc_8305EFD4;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305efd8
	if (!ctx.cr6.gt) goto loc_8305EFD8;
loc_8305EFD4:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8305EFD8:
	// rlwinm r10,r4,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r24,r10,1
	ctx.r24.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x8305f028
	if (ctx.cr6.eq) goto loc_8305F028;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057658
	ctx.lr = 0x8305EFFC;
	sub_83057658(ctx, base);
loc_8305EFFC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
loc_8305F004:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8305f054
	if (ctx.cr6.eq) goto loc_8305F054;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-21420
	ctx.r5.s64 = ctx.r11.s64 + -21420;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305F020;
	sub_82FFC9D0(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x8305f070
	goto loc_8305F070;
loc_8305F028:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f040
	if (!ctx.cr6.gt) goto loc_8305F040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057700
	ctx.lr = 0x8305F03C;
	sub_83057700(ctx, base);
	// b 0x8305effc
	goto loc_8305EFFC;
loc_8305F040:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8305f004
	if (ctx.cr6.eq) goto loc_8305F004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830577c0
	ctx.lr = 0x8305F050;
	sub_830577C0(ctx, base);
	// b 0x8305effc
	goto loc_8305EFFC;
loc_8305F054:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057560
	ctx.lr = 0x8305F06C;
	sub_83057560(ctx, base);
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
loc_8305F070:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305F0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305F0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d850
	ctx.lr = 0x8305F11C;
	sub_8305D850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8305f270
	if (ctx.cr6.eq) goto loc_8305F270;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057560
	ctx.lr = 0x8305F144;
	sub_83057560(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f16c
	if (!ctx.cr6.gt) goto loc_8305F16C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8305f1b8
	if (ctx.cr6.eq) goto loc_8305F1B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057700
	ctx.lr = 0x8305F164;
	sub_83057700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
loc_8305F16C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8305f1b8
	if (ctx.cr6.eq) goto loc_8305F1B8;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8305f194
	if (!ctx.cr6.eq) goto loc_8305F194;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305f198
	if (!ctx.cr6.gt) goto loc_8305F198;
loc_8305F194:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8305F198:
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057a40
	ctx.lr = 0x8305F1AC;
	sub_83057A40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8305F1B8:
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305f1f0
	if (!ctx.cr6.gt) goto loc_8305F1F0;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// beq cr6,0x8305f1d4
	if (ctx.cr6.eq) goto loc_8305F1D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8305F1D4:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057b78
	ctx.lr = 0x8305F1E4;
	sub_83057B78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8305F1F0:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8305f30c
	if (ctx.cr6.eq) goto loc_8305F30C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8305f234
	if (ctx.cr6.eq) goto loc_8305F234;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8305f218
	if (!ctx.cr6.eq) goto loc_8305F218;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305f234
	if (!ctx.cr6.gt) goto loc_8305F234;
loc_8305F218:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830577c0
	ctx.lr = 0x8305F224;
	sub_830577C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8305F234:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8305f250
	if (!ctx.cr6.eq) goto loc_8305F250;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305f250
	if (!ctx.cr6.eq) goto loc_8305F250;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
loc_8305F250:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830578c0
	ctx.lr = 0x8305F264;
	sub_830578C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8305f30c
	if (!ctx.cr0.lt) goto loc_8305F30C;
	// b 0x8305f328
	goto loc_8305F328;
loc_8305F270:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8305f30c
	if (!ctx.cr6.eq) goto loc_8305F30C;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8305f30c
	if (!ctx.cr0.eq) goto loc_8305F30C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f30c
	if (!ctx.cr6.gt) goto loc_8305F30C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-17144
	ctx.r29.s64 = ctx.r11.s64 + -17144;
loc_8305F2A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305F2A8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d16878
	ctx.lr = 0x8305F2C8;
	sub_82D16878(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d16878
	ctx.lr = 0x8305F2E0;
	sub_82D16878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F2F4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305f2a0
	if (ctx.cr6.lt) goto loc_8305F2A0;
loc_8305F30C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = ctx.r11.s64 + -17152;
	// bl 0x830572e8
	ctx.lr = 0x8305F31C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f328
	if (ctx.cr0.lt) goto loc_8305F328;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305F328:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8305F330"))) PPC_WEAK_FUNC(sub_8305F330);
PPC_FUNC_IMPL(__imp__sub_8305F330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8305F338;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305F374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r29,15
	ctx.r29.s64 = 983040;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8305f3dc
	if (!ctx.cr6.eq) goto loc_8305F3DC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305f3dc
	if (!ctx.cr6.eq) goto loc_8305F3DC;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f3e0
	if (!ctx.cr6.gt) goto loc_8305F3E0;
loc_8305F3DC:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8305F3E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057560
	ctx.lr = 0x8305F3F8;
	sub_83057560(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r23,38
	ctx.r23.s64 = 38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r25,r10,-21472
	ctx.r25.s64 = ctx.r10.s64 + -21472;
	// addi r26,r9,-21396
	ctx.r26.s64 = ctx.r9.s64 + -21396;
	// addi r27,r11,-21196
	ctx.r27.s64 = ctx.r11.s64 + -21196;
	// beq cr6,0x8305f4c8
	if (ctx.cr6.eq) goto loc_8305F4C8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f4c8
	if (!ctx.cr6.gt) goto loc_8305F4C8;
loc_8305F42C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305F434;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x82d16878
	ctx.lr = 0x8305F454;
	sub_82D16878(ctx, base);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d16878
	ctx.lr = 0x8305F46C;
	sub_82D16878(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F47C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F4B0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305f42c
	if (ctx.cr6.lt) goto loc_8305F42C;
loc_8305F4C8:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305F4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// clrlwi r5,r9,12
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d850
	ctx.lr = 0x8305F570;
	sub_8305D850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8305f594
	if (ctx.cr6.eq) goto loc_8305F594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057658
	ctx.lr = 0x8305F58C;
	sub_83057658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
loc_8305F594:
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r11,-21420
	ctx.r29.s64 = ctx.r11.s64 + -21420;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8305f644
	if (!ctx.cr6.gt) goto loc_8305F644;
loc_8305F5AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305F5B4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d16878
	ctx.lr = 0x8305F5D4;
	sub_82D16878(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d16878
	ctx.lr = 0x8305F5E8;
	sub_82D16878(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F5F8;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F62C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305f5ac
	if (ctx.cr6.lt) goto loc_8305F5AC;
loc_8305F644:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f6d8
	if (!ctx.cr6.gt) goto loc_8305F6D8;
loc_8305F654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305F65C;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d16878
	ctx.lr = 0x8305F678;
	sub_82D16878(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F688;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F6C0;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305f654
	if (ctx.cr6.lt) goto loc_8305F654;
loc_8305F6D8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8305f838
	if (ctx.cr6.eq) goto loc_8305F838;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f780
	if (!ctx.cr6.gt) goto loc_8305F780;
loc_8305F6F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305F6F8;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d16878
	ctx.lr = 0x8305F714;
	sub_82D16878(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F724;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8305f748
	if (!ctx.cr0.eq) goto loc_8305F748;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x8305f74c
	goto loc_8305F74C;
loc_8305F748:
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
loc_8305F74C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8305f968
	if (ctx.cr6.lt) goto loc_8305F968;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F768;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305f6f0
	if (ctx.cr6.lt) goto loc_8305F6F0;
loc_8305F780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057700
	ctx.lr = 0x8305F788;
	sub_83057700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305F7A0;
	sub_82FFC9D0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057a40
	ctx.lr = 0x8305F7B8;
	sub_83057A40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057b78
	ctx.lr = 0x8305F7D4;
	sub_83057B78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8305f838
	if (ctx.cr6.eq) goto loc_8305F838;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8305f818
	if (ctx.cr6.eq) goto loc_8305F818;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830577c0
	ctx.lr = 0x8305F80C;
	sub_830577C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8305F818:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830578c0
	ctx.lr = 0x8305F830;
	sub_830578C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
loc_8305F838:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f8cc
	if (!ctx.cr6.gt) goto loc_8305F8CC;
loc_8305F848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305F850;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d16878
	ctx.lr = 0x8305F86C;
	sub_82D16878(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F87C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F8B4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305f848
	if (ctx.cr6.lt) goto loc_8305F848;
loc_8305F8CC:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305f964
	if (!ctx.cr6.gt) goto loc_8305F964;
loc_8305F8DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830573b8
	ctx.lr = 0x8305F8E4;
	sub_830573B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x82d16878
	ctx.lr = 0x8305F904;
	sub_82D16878(ctx, base);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d16878
	ctx.lr = 0x8305F91C;
	sub_82D16878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305F938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830572e8
	ctx.lr = 0x8305F94C;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305f968
	if (ctx.cr0.lt) goto loc_8305F968;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8305f8dc
	if (ctx.cr6.lt) goto loc_8305F8DC;
loc_8305F964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305F968:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8305F970"))) PPC_WEAK_FUNC(sub_8305F970);
PPC_FUNC_IMPL(__imp__sub_8305F970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x8305F978;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305F9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305FA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r24,652(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8305fa30
	if (ctx.cr6.eq) goto loc_8305FA30;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x8305fa44
	goto loc_8305FA44;
loc_8305FA30:
	// lwz r11,1820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x8305fa44
	if (!ctx.cr6.eq) goto loc_8305FA44;
	// lwz r30,196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
loc_8305FA44:
	// lwz r29,612(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8305fab8
	if (ctx.cr6.eq) goto loc_8305FAB8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305FA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305FAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// addi r23,r1,384
	ctx.r23.s64 = ctx.r1.s64 + 384;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8305FAB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8305fb28
	if (ctx.cr6.eq) goto loc_8305FB28;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305FAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305FB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// addi r21,r1,352
	ctx.r21.s64 = ctx.r1.s64 + 352;
	// li r27,2
	ctx.r27.s64 = 2;
loc_8305FB28:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8305fb98
	if (ctx.cr6.eq) goto loc_8305FB98;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305FB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305FB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// addi r22,r1,320
	ctx.r22.s64 = ctx.r1.s64 + 320;
	// li r27,3
	ctx.r27.s64 = 3;
loc_8305FB98:
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r7,204(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// lwz r5,620(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lwz r29,636(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// xor r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r29.u64;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8305d850
	ctx.lr = 0x8305FC0C;
	sub_8305D850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8305fc40
	if (ctx.cr6.eq) goto loc_8305FC40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057658
	ctx.lr = 0x8305FC2C;
	sub_83057658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8305fc9c
	if (!ctx.cr6.eq) goto loc_8305FC9C;
loc_8305FC40:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305fc9c
	if (!ctx.cr6.eq) goto loc_8305FC9C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8305fc9c
	if (ctx.cr6.gt) goto loc_8305FC9C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83057560
	ctx.lr = 0x8305FC74;
	sub_83057560(ctx, base);
loc_8305FC74:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8305fcb8
	if (!ctx.cr6.eq) goto loc_8305FCB8;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x83057410
	ctx.lr = 0x8305FC98;
	sub_83057410(ctx, base);
	// b 0x8305fcd0
	goto loc_8305FCD0;
loc_8305FC9C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-21420
	ctx.r5.s64 = ctx.r11.s64 + -21420;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82ffc9d0
	ctx.lr = 0x8305FCB4;
	sub_82FFC9D0(ctx, base);
	// b 0x8305fc74
	goto loc_8305FC74;
loc_8305FCB8:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8305FCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8305FCD0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8305fdb4
	if (ctx.cr6.eq) goto loc_8305FDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057700
	ctx.lr = 0x8305FCE0;
	sub_83057700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057560
	ctx.lr = 0x8305FD00;
	sub_83057560(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305fd1c
	if (!ctx.cr6.eq) goto loc_8305FD1C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8305fd20
	if (!ctx.cr6.gt) goto loc_8305FD20;
loc_8305FD1C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8305FD20:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057a40
	ctx.lr = 0x8305FD34;
	sub_83057A40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057b78
	ctx.lr = 0x8305FD50;
	sub_83057B78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8305fdb4
	if (ctx.cr6.eq) goto loc_8305FDB4;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8305fd94
	if (ctx.cr6.eq) goto loc_8305FD94;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830577c0
	ctx.lr = 0x8305FD88;
	sub_830577C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8305FD94:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830578c0
	ctx.lr = 0x8305FDAC;
	sub_830578C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
loc_8305FDB4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17152
	ctx.r4.s64 = ctx.r11.s64 + -17152;
	// bl 0x830572e8
	ctx.lr = 0x8305FDC4;
	sub_830572E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8305fdd0
	if (ctx.cr0.lt) goto loc_8305FDD0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305FDD0:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_8305FDD8"))) PPC_WEAK_FUNC(sub_8305FDD8);
PPC_FUNC_IMPL(__imp__sub_8305FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8305FDE0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r24,16(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x83079668
	ctx.lr = 0x8305FE18;
	sub_83079668(ctx, base);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x83079668
	ctx.lr = 0x8305FE28;
	sub_83079668(ctx, base);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x83079668
	ctx.lr = 0x8305FE38;
	sub_83079668(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x8305febc
	if (ctx.cr6.eq) goto loc_8305FEBC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
loc_8305FE50:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8305febc
	if (!ctx.cr6.eq) goto loc_8305FEBC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8305feac
	if (ctx.cr6.eq) goto loc_8305FEAC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8305feac
	if (ctx.cr6.eq) goto loc_8305FEAC;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8305FE78:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm. r4,r4,0,7,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8305fea8
	if (!ctx.cr0.eq) goto loc_8305FEA8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8305fe78
	if (ctx.cr6.lt) goto loc_8305FE78;
	// b 0x8305feac
	goto loc_8305FEAC;
loc_8305FEA8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8305FEAC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x8305fe50
	if (ctx.cr6.lt) goto loc_8305FE50;
loc_8305FEBC:
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8305f970
	ctx.lr = 0x8305FEF8;
	sub_8305F970(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8305FF00"))) PPC_WEAK_FUNC(sub_8305FF00);
PPC_FUNC_IMPL(__imp__sub_8305FF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8305FF08;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// bne cr6,0x8305ff80
	if (!ctx.cr6.eq) goto loc_8305FF80;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addic. r31,r11,3
	ctx.xer.ca = ctx.r11.u32 > 4294967292;
	ctx.r31.s64 = ctx.r11.s64 + 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8305ffe0
	if (!ctx.cr0.gt) goto loc_8305FFE0;
loc_8305FF50:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8305FF68;
	sub_8305FDD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8305ff50
	if (ctx.cr6.lt) goto loc_8305FF50;
	// b 0x8305ffe0
	goto loc_8305FFE0;
loc_8305FF80:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8305ff90
	if (!ctx.cr6.eq) goto loc_8305FF90;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x8305ffa4
	goto loc_8305FFA4;
loc_8305FF90:
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
loc_8305FFA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x8305ffe0
	if (!ctx.cr6.gt) goto loc_8305FFE0;
loc_8305FFB4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8305FFCC;
	sub_8305FDD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8305ffb4
	if (ctx.cr6.lt) goto loc_8305FFB4;
loc_8305FFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8305FFEC"))) PPC_WEAK_FUNC(sub_8305FFEC);
PPC_FUNC_IMPL(__imp__sub_8305FFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305FFF0"))) PPC_WEAK_FUNC(sub_8305FFF0);
PPC_FUNC_IMPL(__imp__sub_8305FFF0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,-17132
	ctx.r5.s64 = ctx.r11.s64 + -17132;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28888
	ctx.r4.s64 = ctx.r10.s64 + 28888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060020;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075260
	ctx.lr = 0x83060028;
	sub_83075260(ctx, base);
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

__attribute__((alias("__imp__sub_8306003C"))) PPC_WEAK_FUNC(sub_8306003C);
PPC_FUNC_IMPL(__imp__sub_8306003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060040"))) PPC_WEAK_FUNC(sub_83060040);
PPC_FUNC_IMPL(__imp__sub_83060040) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,-17132
	ctx.r5.s64 = ctx.r11.s64 + -17132;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28936
	ctx.r4.s64 = ctx.r10.s64 + 28936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060070;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076410
	ctx.lr = 0x83060078;
	sub_83076410(ctx, base);
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

__attribute__((alias("__imp__sub_8306008C"))) PPC_WEAK_FUNC(sub_8306008C);
PPC_FUNC_IMPL(__imp__sub_8306008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060090"))) PPC_WEAK_FUNC(sub_83060090);
PPC_FUNC_IMPL(__imp__sub_83060090) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,-1024
	ctx.r5.s64 = ctx.r11.s64 + -1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28808
	ctx.r4.s64 = ctx.r10.s64 + 28808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830600C0;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076438
	ctx.lr = 0x830600C8;
	sub_83076438(ctx, base);
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

__attribute__((alias("__imp__sub_830600DC"))) PPC_WEAK_FUNC(sub_830600DC);
PPC_FUNC_IMPL(__imp__sub_830600DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830600E0"))) PPC_WEAK_FUNC(sub_830600E0);
PPC_FUNC_IMPL(__imp__sub_830600E0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17128
	ctx.r5.s64 = ctx.r11.s64 + -17128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8306010C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076448
	ctx.lr = 0x83060114;
	sub_83076448(ctx, base);
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

__attribute__((alias("__imp__sub_83060128"))) PPC_WEAK_FUNC(sub_83060128);
PPC_FUNC_IMPL(__imp__sub_83060128) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17116
	ctx.r5.s64 = ctx.r11.s64 + -17116;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060154;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076470
	ctx.lr = 0x8306015C;
	sub_83076470(ctx, base);
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

__attribute__((alias("__imp__sub_83060170"))) PPC_WEAK_FUNC(sub_83060170);
PPC_FUNC_IMPL(__imp__sub_83060170) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,10140
	ctx.r5.s64 = ctx.r11.s64 + 10140;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8306019C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075418
	ctx.lr = 0x830601A4;
	sub_83075418(ctx, base);
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

__attribute__((alias("__imp__sub_830601B8"))) PPC_WEAK_FUNC(sub_830601B8);
PPC_FUNC_IMPL(__imp__sub_830601B8) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,-1396
	ctx.r5.s64 = ctx.r11.s64 + -1396;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28824
	ctx.r4.s64 = ctx.r10.s64 + 28824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830601E8;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076498
	ctx.lr = 0x830601F0;
	sub_83076498(ctx, base);
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

__attribute__((alias("__imp__sub_83060204"))) PPC_WEAK_FUNC(sub_83060204);
PPC_FUNC_IMPL(__imp__sub_83060204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060208"))) PPC_WEAK_FUNC(sub_83060208);
PPC_FUNC_IMPL(__imp__sub_83060208) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17104
	ctx.r5.s64 = ctx.r11.s64 + -17104;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060234;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830764c0
	ctx.lr = 0x8306023C;
	sub_830764C0(ctx, base);
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

__attribute__((alias("__imp__sub_83060250"))) PPC_WEAK_FUNC(sub_83060250);
PPC_FUNC_IMPL(__imp__sub_83060250) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17092
	ctx.r5.s64 = ctx.r11.s64 + -17092;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8306027C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830764d0
	ctx.lr = 0x83060284;
	sub_830764D0(ctx, base);
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

__attribute__((alias("__imp__sub_83060298"))) PPC_WEAK_FUNC(sub_83060298);
PPC_FUNC_IMPL(__imp__sub_83060298) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,-1016
	ctx.r5.s64 = ctx.r11.s64 + -1016;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28920
	ctx.r4.s64 = ctx.r10.s64 + 28920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830602C8;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830764f0
	ctx.lr = 0x830602D0;
	sub_830764F0(ctx, base);
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

__attribute__((alias("__imp__sub_830602E4"))) PPC_WEAK_FUNC(sub_830602E4);
PPC_FUNC_IMPL(__imp__sub_830602E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830602E8"))) PPC_WEAK_FUNC(sub_830602E8);
PPC_FUNC_IMPL(__imp__sub_830602E8) {
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
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,2,10,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r11,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83060364
	if (!ctx.cr6.eq) goto loc_83060364;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r5,r10,-17068
	ctx.r5.s64 = ctx.r10.s64 + -17068;
	// bl 0x8305fdd8
	ctx.lr = 0x83060354;
	sub_8305FDD8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x83060370
	goto loc_83060370;
loc_83060364:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-17080
	ctx.r5.s64 = ctx.r11.s64 + -17080;
	// bl 0x8305fdd8
	ctx.lr = 0x83060370;
	sub_8305FDD8(ctx, base);
loc_83060370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83076500
	ctx.lr = 0x83060378;
	sub_83076500(ctx, base);
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

__attribute__((alias("__imp__sub_83060390"))) PPC_WEAK_FUNC(sub_83060390);
PPC_FUNC_IMPL(__imp__sub_83060390) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17056
	ctx.r5.s64 = ctx.r11.s64 + -17056;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830603BC;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076510
	ctx.lr = 0x830603C4;
	sub_83076510(ctx, base);
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

__attribute__((alias("__imp__sub_830603D8"))) PPC_WEAK_FUNC(sub_830603D8);
PPC_FUNC_IMPL(__imp__sub_830603D8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17044
	ctx.r5.s64 = ctx.r11.s64 + -17044;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060404;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076530
	ctx.lr = 0x8306040C;
	sub_83076530(ctx, base);
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

__attribute__((alias("__imp__sub_83060420"))) PPC_WEAK_FUNC(sub_83060420);
PPC_FUNC_IMPL(__imp__sub_83060420) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17032
	ctx.r5.s64 = ctx.r11.s64 + -17032;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8306044C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076530
	ctx.lr = 0x83060454;
	sub_83076530(ctx, base);
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

__attribute__((alias("__imp__sub_83060468"))) PPC_WEAK_FUNC(sub_83060468);
PPC_FUNC_IMPL(__imp__sub_83060468) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,10264
	ctx.r5.s64 = ctx.r11.s64 + 10264;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28856
	ctx.r4.s64 = ctx.r10.s64 + 28856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060498;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076690
	ctx.lr = 0x830604A0;
	sub_83076690(ctx, base);
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

__attribute__((alias("__imp__sub_830604B4"))) PPC_WEAK_FUNC(sub_830604B4);
PPC_FUNC_IMPL(__imp__sub_830604B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830604B8"))) PPC_WEAK_FUNC(sub_830604B8);
PPC_FUNC_IMPL(__imp__sub_830604B8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,3484
	ctx.r5.s64 = ctx.r11.s64 + 3484;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28904
	ctx.r4.s64 = ctx.r10.s64 + 28904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830604E8;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830754b0
	ctx.lr = 0x830604F0;
	sub_830754B0(ctx, base);
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

__attribute__((alias("__imp__sub_83060504"))) PPC_WEAK_FUNC(sub_83060504);
PPC_FUNC_IMPL(__imp__sub_83060504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060508"))) PPC_WEAK_FUNC(sub_83060508);
PPC_FUNC_IMPL(__imp__sub_83060508) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,3420
	ctx.r5.s64 = ctx.r11.s64 + 3420;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28952
	ctx.r4.s64 = ctx.r10.s64 + 28952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060538;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075678
	ctx.lr = 0x83060540;
	sub_83075678(ctx, base);
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

__attribute__((alias("__imp__sub_83060554"))) PPC_WEAK_FUNC(sub_83060554);
PPC_FUNC_IMPL(__imp__sub_83060554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060558"))) PPC_WEAK_FUNC(sub_83060558);
PPC_FUNC_IMPL(__imp__sub_83060558) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17020
	ctx.r5.s64 = ctx.r11.s64 + -17020;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060584;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075788
	ctx.lr = 0x8306058C;
	sub_83075788(ctx, base);
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

__attribute__((alias("__imp__sub_830605A0"))) PPC_WEAK_FUNC(sub_830605A0);
PPC_FUNC_IMPL(__imp__sub_830605A0) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,-1192
	ctx.r5.s64 = ctx.r11.s64 + -1192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28808
	ctx.r4.s64 = ctx.r10.s64 + 28808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830605D0;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076520
	ctx.lr = 0x830605D8;
	sub_83076520(ctx, base);
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

__attribute__((alias("__imp__sub_830605EC"))) PPC_WEAK_FUNC(sub_830605EC);
PPC_FUNC_IMPL(__imp__sub_830605EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830605F0"))) PPC_WEAK_FUNC(sub_830605F0);
PPC_FUNC_IMPL(__imp__sub_830605F0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17008
	ctx.r5.s64 = ctx.r11.s64 + -17008;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8306061C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075260
	ctx.lr = 0x83060624;
	sub_83075260(ctx, base);
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

__attribute__((alias("__imp__sub_83060638"))) PPC_WEAK_FUNC(sub_83060638);
PPC_FUNC_IMPL(__imp__sub_83060638) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16992
	ctx.r5.s64 = ctx.r11.s64 + -16992;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060664;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076410
	ctx.lr = 0x8306066C;
	sub_83076410(ctx, base);
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

__attribute__((alias("__imp__sub_83060680"))) PPC_WEAK_FUNC(sub_83060680);
PPC_FUNC_IMPL(__imp__sub_83060680) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16972
	ctx.r5.s64 = ctx.r11.s64 + -16972;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830606AC;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076448
	ctx.lr = 0x830606B4;
	sub_83076448(ctx, base);
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

__attribute__((alias("__imp__sub_830606C8"))) PPC_WEAK_FUNC(sub_830606C8);
PPC_FUNC_IMPL(__imp__sub_830606C8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16960
	ctx.r5.s64 = ctx.r11.s64 + -16960;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830606F4;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076470
	ctx.lr = 0x830606FC;
	sub_83076470(ctx, base);
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

__attribute__((alias("__imp__sub_83060710"))) PPC_WEAK_FUNC(sub_83060710);
PPC_FUNC_IMPL(__imp__sub_83060710) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16948
	ctx.r5.s64 = ctx.r11.s64 + -16948;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8306073C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075418
	ctx.lr = 0x83060744;
	sub_83075418(ctx, base);
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

__attribute__((alias("__imp__sub_83060758"))) PPC_WEAK_FUNC(sub_83060758);
PPC_FUNC_IMPL(__imp__sub_83060758) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16936
	ctx.r5.s64 = ctx.r11.s64 + -16936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060784;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076498
	ctx.lr = 0x8306078C;
	sub_83076498(ctx, base);
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

__attribute__((alias("__imp__sub_830607A0"))) PPC_WEAK_FUNC(sub_830607A0);
PPC_FUNC_IMPL(__imp__sub_830607A0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16912
	ctx.r5.s64 = ctx.r11.s64 + -16912;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830607CC;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830764c0
	ctx.lr = 0x830607D4;
	sub_830764C0(ctx, base);
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

__attribute__((alias("__imp__sub_830607E8"))) PPC_WEAK_FUNC(sub_830607E8);
PPC_FUNC_IMPL(__imp__sub_830607E8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16892
	ctx.r5.s64 = ctx.r11.s64 + -16892;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060814;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830764d0
	ctx.lr = 0x8306081C;
	sub_830764D0(ctx, base);
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

__attribute__((alias("__imp__sub_83060830"))) PPC_WEAK_FUNC(sub_83060830);
PPC_FUNC_IMPL(__imp__sub_83060830) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,3492
	ctx.r5.s64 = ctx.r11.s64 + 3492;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28872
	ctx.r4.s64 = ctx.r10.s64 + 28872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060860;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830764e0
	ctx.lr = 0x83060868;
	sub_830764E0(ctx, base);
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

__attribute__((alias("__imp__sub_8306087C"))) PPC_WEAK_FUNC(sub_8306087C);
PPC_FUNC_IMPL(__imp__sub_8306087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060880"))) PPC_WEAK_FUNC(sub_83060880);
PPC_FUNC_IMPL(__imp__sub_83060880) {
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
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,2,10,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r11,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830608fc
	if (!ctx.cr6.eq) goto loc_830608FC;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r5,r10,-16860
	ctx.r5.s64 = ctx.r10.s64 + -16860;
	// bl 0x8305fdd8
	ctx.lr = 0x830608EC;
	sub_8305FDD8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x83060908
	goto loc_83060908;
loc_830608FC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-16872
	ctx.r5.s64 = ctx.r11.s64 + -16872;
	// bl 0x8305fdd8
	ctx.lr = 0x83060908;
	sub_8305FDD8(ctx, base);
loc_83060908:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83076500
	ctx.lr = 0x83060910;
	sub_83076500(ctx, base);
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

__attribute__((alias("__imp__sub_83060928"))) PPC_WEAK_FUNC(sub_83060928);
PPC_FUNC_IMPL(__imp__sub_83060928) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16840
	ctx.r5.s64 = ctx.r11.s64 + -16840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060954;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076510
	ctx.lr = 0x8306095C;
	sub_83076510(ctx, base);
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

__attribute__((alias("__imp__sub_83060970"))) PPC_WEAK_FUNC(sub_83060970);
PPC_FUNC_IMPL(__imp__sub_83060970) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16820
	ctx.r5.s64 = ctx.r11.s64 + -16820;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x8306099C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076530
	ctx.lr = 0x830609A4;
	sub_83076530(ctx, base);
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

__attribute__((alias("__imp__sub_830609B8"))) PPC_WEAK_FUNC(sub_830609B8);
PPC_FUNC_IMPL(__imp__sub_830609B8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16804
	ctx.r5.s64 = ctx.r11.s64 + -16804;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x830609E4;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076530
	ctx.lr = 0x830609EC;
	sub_83076530(ctx, base);
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

__attribute__((alias("__imp__sub_83060A00"))) PPC_WEAK_FUNC(sub_83060A00);
PPC_FUNC_IMPL(__imp__sub_83060A00) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r5,r11,3488
	ctx.r5.s64 = ctx.r11.s64 + 3488;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,28840
	ctx.r4.s64 = ctx.r10.s64 + 28840;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060A30;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076660
	ctx.lr = 0x83060A38;
	sub_83076660(ctx, base);
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

__attribute__((alias("__imp__sub_83060A4C"))) PPC_WEAK_FUNC(sub_83060A4C);
PPC_FUNC_IMPL(__imp__sub_83060A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060A50"))) PPC_WEAK_FUNC(sub_83060A50);
PPC_FUNC_IMPL(__imp__sub_83060A50) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16788
	ctx.r5.s64 = ctx.r11.s64 + -16788;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060A7C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83076690
	ctx.lr = 0x83060A84;
	sub_83076690(ctx, base);
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

__attribute__((alias("__imp__sub_83060A98"))) PPC_WEAK_FUNC(sub_83060A98);
PPC_FUNC_IMPL(__imp__sub_83060A98) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16776
	ctx.r5.s64 = ctx.r11.s64 + -16776;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060AC4;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075678
	ctx.lr = 0x83060ACC;
	sub_83075678(ctx, base);
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

__attribute__((alias("__imp__sub_83060AE0"))) PPC_WEAK_FUNC(sub_83060AE0);
PPC_FUNC_IMPL(__imp__sub_83060AE0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16756
	ctx.r5.s64 = ctx.r11.s64 + -16756;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305fdd8
	ctx.lr = 0x83060B0C;
	sub_8305FDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075788
	ctx.lr = 0x83060B14;
	sub_83075788(ctx, base);
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

__attribute__((alias("__imp__sub_83060B28"))) PPC_WEAK_FUNC(sub_83060B28);
PPC_FUNC_IMPL(__imp__sub_83060B28) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-17032
	ctx.r5.s64 = ctx.r11.s64 + -17032;
	// addi r4,r10,-17044
	ctx.r4.s64 = ctx.r10.s64 + -17044;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8305ff00
	ctx.lr = 0x83060B50;
	sub_8305FF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83060b60
	if (ctx.cr0.lt) goto loc_83060B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075988
	ctx.lr = 0x83060B60;
	sub_83075988(ctx, base);
loc_83060B60:
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

__attribute__((alias("__imp__sub_83060B74"))) PPC_WEAK_FUNC(sub_83060B74);
PPC_FUNC_IMPL(__imp__sub_83060B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060B78"))) PPC_WEAK_FUNC(sub_83060B78);
PPC_FUNC_IMPL(__imp__sub_83060B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83060ba4
	if (!ctx.cr6.lt) goto loc_83060BA4;
loc_83060B9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83060BA4:
	// ble cr6,0x83060bb0
	if (!ctx.cr6.gt) goto loc_83060BB0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83060BB0:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x83060b9c
	if (ctx.cr6.gt) goto loc_83060B9C;
	// subfc r11,r4,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060BC4"))) PPC_WEAK_FUNC(sub_83060BC4);
PPC_FUNC_IMPL(__imp__sub_83060BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060BC8"))) PPC_WEAK_FUNC(sub_83060BC8);
PPC_FUNC_IMPL(__imp__sub_83060BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r8,96(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r7,96(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83060bfc
	if (!ctx.cr6.eq) goto loc_83060BFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83060BFC:
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83060c0c
	if (ctx.cr6.eq) goto loc_83060C0C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83060C0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq 0x83060c30
	if (ctx.cr0.eq) goto loc_83060C30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83060c0c
	if (ctx.cr6.eq) goto loc_83060C0C;
loc_83060C30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x83060c40
	if (!ctx.cr0.gt) goto loc_83060C40;
loc_83060C38:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83060C40:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x83060c50
	if (!ctx.cr6.lt) goto loc_83060C50;
loc_83060C48:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83060C50:
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_83060C60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq 0x83060c84
	if (ctx.cr0.eq) goto loc_83060C84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83060c60
	if (ctx.cr6.eq) goto loc_83060C60;
loc_83060C84:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x83060c38
	if (ctx.cr0.gt) goto loc_83060C38;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x83060c48
	if (ctx.cr6.lt) goto loc_83060C48;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x83060c38
	if (ctx.cr6.gt) goto loc_83060C38;
	// blt cr6,0x83060c48
	if (ctx.cr6.lt) goto loc_83060C48;
	// lwz r11,116(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// lwz r10,116(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83060c48
	if (ctx.cr6.lt) goto loc_83060C48;
	// bgt cr6,0x83060c38
	if (ctx.cr6.gt) goto loc_83060C38;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83060c48
	if (ctx.cr6.lt) goto loc_83060C48;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060CD4"))) PPC_WEAK_FUNC(sub_83060CD4);
PPC_FUNC_IMPL(__imp__sub_83060CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060CD8"))) PPC_WEAK_FUNC(sub_83060CD8);
PPC_FUNC_IMPL(__imp__sub_83060CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060CF0"))) PPC_WEAK_FUNC(sub_83060CF0);
PPC_FUNC_IMPL(__imp__sub_83060CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060CFC"))) PPC_WEAK_FUNC(sub_83060CFC);
PPC_FUNC_IMPL(__imp__sub_83060CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060D00"))) PPC_WEAK_FUNC(sub_83060D00);
PPC_FUNC_IMPL(__imp__sub_83060D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// srw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83060D14"))) PPC_WEAK_FUNC(sub_83060D14);
PPC_FUNC_IMPL(__imp__sub_83060D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83060D18"))) PPC_WEAK_FUNC(sub_83060D18);
PPC_FUNC_IMPL(__imp__sub_83060D18) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x83060D20;
	sub_82CA2BBC(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// lwz r20,0(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r11,r20,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFF00000;
	// lis r30,20480
	ctx.r30.s64 = 1342177280;
	// std r21,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r21.u64);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// std r21,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r21.u64);
	// beq cr6,0x83060ecc
	if (ctx.cr6.eq) goto loc_83060ECC;
	// lis r31,28800
	ctx.r31.s64 = 1887436800;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83060ecc
	if (ctx.cr6.eq) goto loc_83060ECC;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83060e54
	if (ctx.cr6.eq) goto loc_83060E54;
	// lwz r22,20(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// subf r19,r7,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_83060D68:
	// lwzx r11,r19,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r24.u32);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r11,r22
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// beq cr6,0x83060d90
	if (ctx.cr6.eq) goto loc_83060D90;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x83060e44
	if (!ctx.cr6.lt) goto loc_83060E44;
	// b 0x83060d94
	goto loc_83060D94;
loc_83060D90:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_83060D94:
	// lwz r26,12(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83060f68
	if (ctx.cr6.eq) goto loc_83060F68;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// subf r27,r31,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r31.s64;
	// lwzx r28,r30,r5
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
loc_83060DBC:
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83060ddc
	if (!ctx.cr6.eq) goto loc_83060DDC;
	// lwz r3,60(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83060e18
	if (ctx.cr6.eq) goto loc_83060E18;
loc_83060DDC:
	// lwz r17,16(r4)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,56(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// lwzx r17,r17,r11
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplw cr6,r3,r17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x83060e2c
	if (!ctx.cr6.eq) goto loc_83060E2C;
	// lwz r17,60(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83060e2c
	if (!ctx.cr6.eq) goto loc_83060E2C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83060e2c
	if (ctx.cr6.eq) goto loc_83060E2C;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83060e2c
	if (!ctx.cr6.eq) goto loc_83060E2C;
loc_83060E18:
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// li r17,1
	ctx.r17.s64 = 1;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r17,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
	// stwx r29,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r29.u32);
loc_83060E2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x83060dbc
	if (ctx.cr6.lt) goto loc_83060DBC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x83060f68
	if (ctx.cr6.eq) goto loc_83060F68;
loc_83060E44:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r18,r6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83060d68
	if (ctx.cr6.lt) goto loc_83060D68;
loc_83060E54:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83060e88
	if (!ctx.cr6.eq) goto loc_83060E88;
	// clrlwi. r10,r20,12
	ctx.r10.u64 = ctx.r20.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq 0x83060e88
	if (ctx.cr0.eq) goto loc_83060E88;
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
loc_83060E6C:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83060f68
	if (ctx.cr6.eq) goto loc_83060F68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83060e6c
	if (ctx.cr6.lt) goto loc_83060E6C;
loc_83060E88:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_83060E94:
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x83060eb0
	if (!ctx.cr6.lt) goto loc_83060EB0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x83060eb4
	goto loc_83060EB4;
loc_83060EB0:
	// li r10,255
	ctx.r10.s64 = 255;
loc_83060EB4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83060e94
	if (!ctx.cr0.eq) goto loc_83060E94;
loc_83060EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83060EC8:
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
loc_83060ECC:
	// clrlwi r7,r20,12
	ctx.r7.u64 = ctx.r20.u32 & 0xFFFFF;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83060ED8:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83060ee8
	if (!ctx.cr6.lt) goto loc_83060EE8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x83060ef0
	goto loc_83060EF0;
loc_83060EE8:
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83060EF0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x83060ed8
	if (ctx.cr6.lt) goto loc_83060ED8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83060ec4
	if (ctx.cr6.eq) goto loc_83060EC4;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83060F1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bne cr6,0x83060f3c
	if (!ctx.cr6.eq) goto loc_83060F3C;
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83060f54
	if (ctx.cr6.eq) goto loc_83060F54;
loc_83060F3C:
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83060f68
	if (!ctx.cr6.eq) goto loc_83060F68;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83060f68
	if (!ctx.cr6.eq) goto loc_83060F68;
loc_83060F54:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83060f1c
	if (ctx.cr6.lt) goto loc_83060F1C;
	// b 0x83060ec4
	goto loc_83060EC4;
loc_83060F68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83060ec8
	goto loc_83060EC8;
}

__attribute__((alias("__imp__sub_83060F70"))) PPC_WEAK_FUNC(sub_83060F70);
PPC_FUNC_IMPL(__imp__sub_83060F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83060F78;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r14,772(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// stw r7,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r8.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// clrlwi r20,r11,12
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r20,r16
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r16.u32, ctx.xer);
	// ble cr6,0x83060fcc
	if (!ctx.cr6.gt) goto loc_83060FCC;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x83060fcc
	if (!ctx.cr6.eq) goto loc_83060FCC;
loc_83060FC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83061540
	goto loc_83061540;
loc_83060FCC:
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83060fc4
	if (!ctx.cr6.eq) goto loc_83060FC4;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8306103c
	if (!ctx.cr6.eq) goto loc_8306103C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x83061000
	if (ctx.cr6.eq) goto loc_83061000;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_83061000:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r9,r9,r19
	ctx.r9.s64 = ctx.r19.s64 - ctx.r9.s64;
loc_83061010:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x83061020
	if (!ctx.cr6.lt) goto loc_83061020;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x83061024
	goto loc_83061024;
loc_83061020:
	// li r7,255
	ctx.r7.s64 = 255;
loc_83061024:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x83061010
	if (ctx.cr6.lt) goto loc_83061010;
	// addi r19,r1,112
	ctx.r19.s64 = ctx.r1.s64 + 112;
loc_8306103C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// beq cr6,0x830614dc
	if (ctx.cr6.eq) goto loc_830614DC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-9296
	ctx.r11.s64 = ctx.r11.s64 + -9296;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83061058:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// li r17,0
	ctx.r17.s64 = 0;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830614c0
	if (ctx.cr0.eq) goto loc_830614C0;
loc_83061068:
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x83061080;
	sub_82CA2C60(ctx, base);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ca3190
	ctx.lr = 0x83061090;
	sub_82CA3190(ctx, base);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ca3190
	ctx.lr = 0x830610A0;
	sub_82CA3190(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83061224
	if (!ctx.cr6.gt) goto loc_83061224;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
loc_830610C4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// subfic r10,r24,1
	ctx.xer.ca = ctx.r24.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r24.s64;
	// bne cr6,0x830610d4
	if (!ctx.cr6.eq) goto loc_830610D4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_830610D4:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x83060fc4
	if (!ctx.cr6.lt) goto loc_83060FC4;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,8(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lwz r8,20(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r31,r10,r22
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// lwzx r27,r11,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bge cr6,0x8306119c
	if (!ctx.cr6.lt) goto loc_8306119C;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8306121c
	if (ctx.cr6.eq) goto loc_8306121C;
	// lwz r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,24(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// add r5,r9,r25
	ctx.r5.u64 = ctx.r9.u64 + ctx.r25.u64;
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwzx r4,r7,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x83060d18
	ctx.lr = 0x83061158;
	sub_83060D18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8306121c
	if (!ctx.cr0.eq) goto loc_8306121C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x8306120c
	if (ctx.cr6.lt) goto loc_8306120C;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83060f70
	ctx.lr = 0x83061198;
	sub_83060F70(ctx, base);
	// b 0x830611e8
	goto loc_830611E8;
loc_8306119C:
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,4
	ctx.r7.s64 = 4;
loc_830611B4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x830611d0
	if (!ctx.cr6.lt) goto loc_830611D0;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x830611d4
	goto loc_830611D4;
loc_830611D0:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_830611D4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x830611b4
	if (!ctx.cr0.eq) goto loc_830611B4;
loc_830611E8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83061220
	if (ctx.cr6.eq) goto loc_83061220;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// add r25,r23,r25
	ctx.r25.u64 = ctx.r23.u64 + ctx.r25.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830610c4
	if (ctx.cr6.lt) goto loc_830610C4;
	// b 0x83061220
	goto loc_83061220;
loc_8306120C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8308be30
	ctx.lr = 0x8306121C;
	sub_8308BE30(ctx, base);
loc_8306121C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83061220:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83061224:
	// lwz r28,8(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830612ec
	if (ctx.cr6.eq) goto loc_830612EC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83061238:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// subfic r11,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r4.s64;
	// bne cr6,0x83061248
	if (!ctx.cr6.eq) goto loc_83061248;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83061248:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x830612dc
	if (ctx.cr6.lt) goto loc_830612DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830612dc
	if (ctx.cr6.eq) goto loc_830612DC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8306126C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x830612d0
	if (ctx.cr6.eq) goto loc_830612D0;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
loc_83061280:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830612bc
	if (ctx.cr6.eq) goto loc_830612BC;
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r27,8(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
loc_830612A0:
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x830612cc
	if (ctx.cr6.eq) goto loc_830612CC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x830612a0
	if (ctx.cr6.lt) goto loc_830612A0;
loc_830612BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x83061280
	if (ctx.cr6.lt) goto loc_83061280;
	// b 0x830612d0
	goto loc_830612D0;
loc_830612CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830612D0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x8306126c
	if (!ctx.cr0.eq) goto loc_8306126C;
loc_830612DC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 + ctx.r20.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83061238
	if (ctx.cr6.lt) goto loc_83061238;
loc_830612EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x830614a4
	if (!ctx.cr6.eq) goto loc_830614A4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830614dc
	if (!ctx.cr6.eq) goto loc_830614DC;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830614dc
	if (!ctx.cr6.eq) goto loc_830614DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83061418
	if (ctx.cr6.eq) goto loc_83061418;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_8306131C:
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306140c
	if (ctx.cr6.eq) goto loc_8306140C;
	// lwz r29,12(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83061338:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83061400
	if (ctx.cr6.eq) goto loc_83061400;
	// lwz r4,24(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83061348:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830613f4
	if (ctx.cr6.eq) goto loc_830613F4;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830613f4
	if (ctx.cr6.eq) goto loc_830613F4;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830613b0
	if (ctx.cr6.eq) goto loc_830613B0;
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
loc_8306137C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830613a0
	if (ctx.cr6.eq) goto loc_830613A0;
	// lwz r24,20(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x830613a4
	if (!ctx.cr6.eq) goto loc_830613A4;
loc_830613A0:
	// li r6,1
	ctx.r6.s64 = 1;
loc_830613A4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8306137c
	if (!ctx.cr0.eq) goto loc_8306137C;
loc_830613B0:
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x830613bc
	if (!ctx.cr6.eq) goto loc_830613BC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_830613BC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x830613f4
	if (ctx.cr6.eq) goto loc_830613F4;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_830613CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830613dc
	if (!ctx.cr6.eq) goto loc_830613DC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_830613DC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x830613cc
	if (!ctx.cr0.eq) goto loc_830613CC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x830613f4
	if (ctx.cr6.eq) goto loc_830613F4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_830613F4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x83061348
	if (!ctx.cr0.eq) goto loc_83061348;
loc_83061400:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83061338
	if (!ctx.cr0.eq) goto loc_83061338;
loc_8306140C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8306131c
	if (!ctx.cr0.eq) goto loc_8306131C;
loc_83061418:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r30,40
	ctx.r30.s64 = 40;
loc_83061420:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x83061490
	if (ctx.cr6.eq) goto loc_83061490;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83061490
	if (ctx.cr6.eq) goto loc_83061490;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_83061448:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83061484
	if (ctx.cr6.eq) goto loc_83061484;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_8306145C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83061474
	if (ctx.cr6.eq) goto loc_83061474;
	// lwz r29,56(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83061478
	if (!ctx.cr6.eq) goto loc_83061478;
loc_83061474:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83061478:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8306145c
	if (!ctx.cr0.eq) goto loc_8306145C;
loc_83061484:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x83061448
	if (!ctx.cr0.eq) goto loc_83061448;
loc_83061490:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x83061420
	if (!ctx.cr0.eq) goto loc_83061420;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830614dc
	if (ctx.cr6.eq) goto loc_830614DC;
loc_830614A4:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83061068
	if (ctx.cr6.lt) goto loc_83061068;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_830614C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830614dc
	if (ctx.cr6.eq) goto loc_830614DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83061058
	if (ctx.cr6.lt) goto loc_83061058;
	// b 0x83061540
	goto loc_83061540;
loc_830614DC:
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830614F0;
	sub_82CA2C60(ctx, base);
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// stwx r18,r31,r15
	PPC_STORE_U32(ctx.r31.u32 + ctx.r15.u32, ctx.r18.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,748(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
loc_8306150C:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8306152c
	if (!ctx.cr6.eq) goto loc_8306152C;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x83061530
	if (ctx.cr6.eq) goto loc_83061530;
loc_8306152C:
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_83061530:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// blt cr6,0x8306150c
	if (ctx.cr6.lt) goto loc_8306150C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83061540:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83061548"))) PPC_WEAK_FUNC(sub_83061548);
PPC_FUNC_IMPL(__imp__sub_83061548) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bge cr6,0x830615d8
	if (!ctx.cr6.lt) goto loc_830615D8;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_83061574:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r3,r9,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83061598
	if (ctx.cr0.eq) goto loc_83061598;
	// rlwinm. r3,r9,0,22,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830615a0
	if (ctx.cr0.eq) goto loc_830615A0;
loc_83061598:
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830615d8
	if (ctx.cr0.eq) goto loc_830615D8;
loc_830615A0:
	// lwz r9,104(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	// lwz r8,104(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// lwz r3,36(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lwz r31,36(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830615d8
	if (!ctx.cr6.eq) goto loc_830615D8;
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x830615d8
	if (!ctx.cr6.eq) goto loc_830615D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83061574
	if (ctx.cr6.lt) goto loc_83061574;
loc_830615D8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830615EC"))) PPC_WEAK_FUNC(sub_830615EC);
PPC_FUNC_IMPL(__imp__sub_830615EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830615F0"))) PPC_WEAK_FUNC(sub_830615F0);
PPC_FUNC_IMPL(__imp__sub_830615F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830615F8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83061698
	if (!ctx.cr6.gt) goto loc_83061698;
loc_83061618:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83061648
	if (ctx.cr0.eq) goto loc_83061648;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83061650
	if (ctx.cr0.eq) goto loc_83061650;
loc_83061648:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83061684
	if (ctx.cr0.eq) goto loc_83061684;
loc_83061650:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83061668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83061684
	if (!ctx.cr0.lt) goto loc_83061684;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83061548
	ctx.lr = 0x8306167C;
	sub_83061548(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83061684:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83061618
	if (ctx.cr6.lt) goto loc_83061618;
loc_83061698:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830616ac
	if (ctx.cr0.eq) goto loc_830616AC;
loc_830616A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x830617e4
	goto loc_830617E4;
loc_830616AC:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830617d8
	if (ctx.cr6.eq) goto loc_830617D8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r11,-9236
	ctx.r28.s64 = ctx.r11.s64 + -9236;
loc_830616C8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830616f8
	if (ctx.cr0.eq) goto loc_830616F8;
	// rlwinm. r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83061700
	if (ctx.cr0.eq) goto loc_83061700;
loc_830616F8:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830617c4
	if (ctx.cr0.eq) goto loc_830617C4;
loc_83061700:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x830617c4
	if (!ctx.cr6.lt) goto loc_830617C4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_83061714:
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83061758
	if (!ctx.cr6.eq) goto loc_83061758;
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r5,112(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83061758
	if (!ctx.cr6.eq) goto loc_83061758;
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r5,108(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83061758
	if (!ctx.cr6.eq) goto loc_83061758;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// rlwinm. r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8306176c
	if (!ctx.cr0.eq) goto loc_8306176C;
loc_83061758:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83061714
	if (ctx.cr6.lt) goto loc_83061714;
	// b 0x830617c4
	goto loc_830617C4;
loc_8306176C:
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307af00
	ctx.lr = 0x83061780;
	sub_8307AF00(ctx, base);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307af00
	ctx.lr = 0x83061794;
	sub_8307AF00(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// li r5,4501
	ctx.r5.s64 = 4501;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308be30
	ctx.lr = 0x830617B0;
	sub_8308BE30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83061548
	ctx.lr = 0x830617BC;
	sub_83061548(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,1
	ctx.r27.s64 = 1;
loc_830617C4:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x830616c8
	if (ctx.cr6.lt) goto loc_830616C8;
loc_830617D8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830616a0
	if (!ctx.cr0.eq) goto loc_830616A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830617E4:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830617EC"))) PPC_WEAK_FUNC(sub_830617EC);
PPC_FUNC_IMPL(__imp__sub_830617EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830617F0"))) PPC_WEAK_FUNC(sub_830617F0);
PPC_FUNC_IMPL(__imp__sub_830617F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830617F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83061864
	if (ctx.cr6.eq) goto loc_83061864;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83061864
	if (!ctx.cr6.gt) goto loc_83061864;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83061830:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x830617f0
	ctx.lr = 0x83061850;
	sub_830617F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83061830
	if (ctx.cr6.lt) goto loc_83061830;
loc_83061864:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83061870"))) PPC_WEAK_FUNC(sub_83061870);
PPC_FUNC_IMPL(__imp__sub_83061870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83061878;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x830618e4
	if (ctx.cr6.eq) goto loc_830618E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830618e4
	if (!ctx.cr6.gt) goto loc_830618E4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830618B0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x83061870
	ctx.lr = 0x830618D0;
	sub_83061870(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830618b0
	if (ctx.cr6.lt) goto loc_830618B0;
loc_830618E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830618F0"))) PPC_WEAK_FUNC(sub_830618F0);
PPC_FUNC_IMPL(__imp__sub_830618F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830618F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83061964
	if (ctx.cr6.eq) goto loc_83061964;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83061964
	if (!ctx.cr6.gt) goto loc_83061964;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83061930:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x830618f0
	ctx.lr = 0x83061950;
	sub_830618F0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83061930
	if (ctx.cr6.lt) goto loc_83061930;
loc_83061964:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83061970"))) PPC_WEAK_FUNC(sub_83061970);
PPC_FUNC_IMPL(__imp__sub_83061970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83061978;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83061a48
	if (ctx.cr0.eq) goto loc_83061A48;
	// extsb r29,r6
	ctx.r29.s64 = ctx.r6.s8;
	// b 0x830619b4
	goto loc_830619B4;
loc_830619A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_830619B4:
	// bl 0x82ca6b90
	ctx.lr = 0x830619B8;
	sub_82CA6B90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830619a8
	if (ctx.cr0.eq) goto loc_830619A8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821ee9e8
	ctx.lr = 0x830619CC;
	sub_821EE9E8(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x83061a28
	if (!ctx.cr6.eq) goto loc_83061A28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83061a74
	if (ctx.cr6.eq) goto loc_83061A74;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83061a58
	if (ctx.cr6.eq) goto loc_83061A58;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
loc_830619F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83061a08
	if (!ctx.cr6.eq) goto loc_83061A08;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_83061A08:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x830619f4
	if (!ctx.cr0.eq) goto loc_830619F4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83061a58
	if (ctx.cr6.eq) goto loc_83061A58;
	// lwz r4,96(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// b 0x83061a5c
	goto loc_83061A5C;
loc_83061A24:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_83061A28:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82ca6b90
	ctx.lr = 0x83061A34;
	sub_82CA6B90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83061a24
	if (!ctx.cr0.eq) goto loc_83061A24;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830619b4
	if (!ctx.cr0.eq) goto loc_830619B4;
loc_83061A48:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83061A50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_83061A58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83061A5C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4509
	ctx.r5.s64 = 4509;
	// addi r6,r11,-9192
	ctx.r6.s64 = ctx.r11.s64 + -9192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308be30
	ctx.lr = 0x83061A70;
	sub_8308BE30(ctx, base);
	// b 0x83061a48
	goto loc_83061A48;
loc_83061A74:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83061a50
	goto loc_83061A50;
}

__attribute__((alias("__imp__sub_83061A80"))) PPC_WEAK_FUNC(sub_83061A80);
PPC_FUNC_IMPL(__imp__sub_83061A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// stw r10,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// bl 0x830832a0
	ctx.lr = 0x83061AB8;
	sub_830832A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83061ac4
	if (ctx.cr0.lt) goto loc_83061AC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83061AC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83061AD4"))) PPC_WEAK_FUNC(sub_83061AD4);
PPC_FUNC_IMPL(__imp__sub_83061AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83061AD8"))) PPC_WEAK_FUNC(sub_83061AD8);
PPC_FUNC_IMPL(__imp__sub_83061AD8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
loc_83061AE0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83061bdc
	if (!ctx.cr6.gt) goto loc_83061BDC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83061AF8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83061bc0
	if (ctx.cr6.eq) goto loc_83061BC0;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_83061B18:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83061b34
	if (ctx.cr0.eq) goto loc_83061B34;
	// li r5,1
	ctx.r5.s64 = 1;
loc_83061B34:
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x83061b48
	if (ctx.cr6.eq) goto loc_83061B48;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
loc_83061B48:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83061b58
	if (ctx.cr0.eq) goto loc_83061B58;
	// li r5,1
	ctx.r5.s64 = 1;
loc_83061B58:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x83061b18
	if (!ctx.cr0.eq) goto loc_83061B18;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x83061bc0
	if (ctx.cr6.eq) goto loc_83061BC0;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83061bc0
	if (!ctx.cr6.gt) goto loc_83061BC0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83061B80:
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r6,r10,0,7,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83061bac
	if (!ctx.cr0.eq) goto loc_83061BAC;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83061BAC:
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83061b80
	if (ctx.cr6.lt) goto loc_83061B80;
loc_83061BC0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83061af8
	if (ctx.cr6.lt) goto loc_83061AF8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x83061ae0
	if (!ctx.cr6.eq) goto loc_83061AE0;
loc_83061BDC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83061c38
	if (!ctx.cr6.gt) goto loc_83061C38;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83061BF0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x83061c24
	if (ctx.cr6.eq) goto loc_83061C24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83061c24
	if (ctx.cr0.eq) goto loc_83061C24;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_83061C24:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83061bf0
	if (ctx.cr6.lt) goto loc_83061BF0;
loc_83061C38:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83061C48"))) PPC_WEAK_FUNC(sub_83061C48);
PPC_FUNC_IMPL(__imp__sub_83061C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83061C50;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,4416
	ctx.r10.s64 = 289406976;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83061e14
	if (!ctx.cr6.eq) goto loc_83061E14;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83061e14
	if (!ctx.cr6.eq) goto loc_83061E14;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83061cac
	if (!ctx.cr0.eq) goto loc_83061CAC;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,4552
	ctx.r5.s64 = 4552;
	// addi r6,r10,-9112
	ctx.r6.s64 = ctx.r10.s64 + -9112;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8308be30
	ctx.lr = 0x83061CA0;
	sub_8308BE30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83061e18
	goto loc_83061E18;
loc_83061CAC:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83061CB4;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83061cc8
	if (ctx.cr0.eq) goto loc_83061CC8;
	// bl 0x830795f0
	ctx.lr = 0x83061CC0;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83061ccc
	goto loc_83061CCC;
loc_83061CC8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83061CCC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83061ce0
	if (!ctx.cr6.eq) goto loc_83061CE0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83061e18
	goto loc_83061E18;
loc_83061CE0:
	// lis r4,29776
	ctx.r4.s64 = 1951399936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x83061CFC;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x83061d1c
	if (!ctx.cr0.lt) goto loc_83061D1C;
loc_83061D08:
	// bl 0x829ce870
	ctx.lr = 0x83061D0C;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83061D14;
	sub_83079D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83061e18
	goto loc_83061E18;
loc_83061D1C:
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83061D24;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x83061d34
	if (!ctx.cr0.lt) goto loc_83061D34;
loc_83061D2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83061d08
	goto loc_83061D08;
loc_83061D34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// bl 0x8307a978
	ctx.lr = 0x83061D50;
	sub_8307A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x83061d2c
	if (ctx.cr6.eq) goto loc_83061D2C;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8307a2f8
	ctx.lr = 0x83061D84;
	sub_8307A2F8(ctx, base);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83061de0
	if (!ctx.cr6.eq) goto loc_83061DE0;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// b 0x83061dec
	goto loc_83061DEC;
loc_83061DE0:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
loc_83061DEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83061DF8;
	sub_8307A0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83061E04;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83061E0C;
	sub_83079D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83061e18
	goto loc_83061E18;
loc_83061E14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83061E18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83061E20"))) PPC_WEAK_FUNC(sub_83061E20);
PPC_FUNC_IMPL(__imp__sub_83061E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x83061E28;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r20,8320
	ctx.r20.s64 = 545259520;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r24,r11,12
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x83061e54
	if (ctx.cr6.eq) goto loc_83061E54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83062094
	goto loc_83062094;
loc_83061E54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r21,r24,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_83061E64:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83061ef0
	if (ctx.cr6.eq) goto loc_83061EF0;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_83061E84:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83061ef0
	if (!ctx.cr6.eq) goto loc_83061EF0;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83061ef0
	if (!ctx.cr6.eq) goto loc_83061EF0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83061ef0
	if (!ctx.cr6.eq) goto loc_83061EF0;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83061ef0
	if (!ctx.cr6.eq) goto loc_83061EF0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x83061e84
	if (ctx.cr6.lt) goto loc_83061E84;
loc_83061EF0:
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8306207c
	if (ctx.cr6.eq) goto loc_8306207C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307aa18
	ctx.lr = 0x83061F14;
	sub_8307AA18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x8306209c
	if (ctx.cr6.eq) goto loc_8306209C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r25,r26,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwzx r29,r25,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// beq cr6,0x83062010
	if (ctx.cr6.eq) goto loc_83062010;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_83061F40:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307ab38
	ctx.lr = 0x83061F74;
	sub_8307AB38(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8306209c
	if (ctx.cr6.eq) goto loc_8306209C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blt cr6,0x83061f40
	if (ctx.cr6.lt) goto loc_83061F40;
loc_83062010:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83062014:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83062044
	if (ctx.cr6.gt) goto loc_83062044;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83062060
	if (ctx.cr6.eq) goto loc_83062060;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x83062060
	if (!ctx.cr6.eq) goto loc_83062060;
loc_83062044:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x83062014
	goto loc_83062014;
loc_83062060:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
loc_8306207C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x83061e64
	if (ctx.cr6.lt) goto loc_83061E64;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83062094:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_8306209C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83062094
	goto loc_83062094;
}

__attribute__((alias("__imp__sub_830620A8"))) PPC_WEAK_FUNC(sub_830620A8);
PPC_FUNC_IMPL(__imp__sub_830620A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x830620B0;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83062114
	if (ctx.cr0.eq) goto loc_83062114;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83062114
	if (!ctx.cr6.eq) goto loc_83062114;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830622d4
	if (ctx.cr6.eq) goto loc_830622D4;
loc_83062114:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x83062158
	if (!ctx.cr6.gt) goto loc_83062158;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8306212C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8306214c
	if (!ctx.cr6.eq) goto loc_8306214C;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8306214c
	if (ctx.cr6.lt) goto loc_8306214C;
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
loc_8306214C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8306212c
	if (!ctx.cr0.eq) goto loc_8306212C;
loc_83062158:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307aa18
	ctx.lr = 0x83062170;
	sub_8307AA18(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83062184
	if (!ctx.cr6.eq) goto loc_83062184;
loc_83062178:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830622e0
	goto loc_830622E0;
loc_83062184:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83079640
	ctx.lr = 0x8306219C;
	sub_83079640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830622e0
	if (ctx.cr0.lt) goto loc_830622E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
loc_830621B4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a978
	ctx.lr = 0x830621CC;
	sub_8307A978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x83062178
	if (ctx.cr6.eq) goto loc_83062178;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307a3f0
	ctx.lr = 0x830621FC;
	sub_8307A3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830622e0
	if (ctx.cr0.lt) goto loc_830622E0;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x830621b4
	if (ctx.cr6.lt) goto loc_830621B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830622c0
	if (!ctx.cr6.gt) goto loc_830622C0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8306229C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8306229c
	if (ctx.cr6.gt) goto loc_8306229C;
loc_830622C0:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_830622D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
loc_830622E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_830622EC"))) PPC_WEAK_FUNC(sub_830622EC);
PPC_FUNC_IMPL(__imp__sub_830622EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830622F0"))) PPC_WEAK_FUNC(sub_830622F0);
PPC_FUNC_IMPL(__imp__sub_830622F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twllei r11,0
	// beq 0x8306233c
	if (ctx.cr0.eq) goto loc_8306233C;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_83062310:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// bne 0x83062310
	if (!ctx.cr0.eq) goto loc_83062310;
loc_8306233C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062364"))) PPC_WEAK_FUNC(sub_83062364);
PPC_FUNC_IMPL(__imp__sub_83062364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83062368"))) PPC_WEAK_FUNC(sub_83062368);
PPC_FUNC_IMPL(__imp__sub_83062368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83062370;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r29,r10,12
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8306244c
	if (!ctx.cr6.eq) goto loc_8306244C;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x830796c0
	ctx.lr = 0x83062398;
	sub_830796C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8306244c
	if (!ctx.cr0.eq) goto loc_8306244C;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x830799f8
	ctx.lr = 0x830623A8;
	sub_830799F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830623c0
	if (ctx.cr0.eq) goto loc_830623C0;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x830797a0
	ctx.lr = 0x830623B8;
	sub_830797A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8306244c
	if (ctx.cr0.eq) goto loc_8306244C;
loc_830623C0:
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x8306244c
	if (ctx.cr6.gt) goto loc_8306244C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8306244c
	if (ctx.cr6.eq) goto loc_8306244C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830623D4:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83062438
	if (ctx.cr0.eq) goto loc_83062438;
	// li r5,0
	ctx.r5.s64 = 0;
loc_830623E8:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83062428
	if (!ctx.cr6.gt) goto loc_83062428;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x830622f0
	ctx.lr = 0x83062428;
	sub_830622F0(ctx, base);
loc_83062428:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x830623e8
	if (ctx.cr6.lt) goto loc_830623E8;
loc_83062438:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830623d4
	if (ctx.cr6.lt) goto loc_830623D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83062450
	goto loc_83062450;
loc_8306244C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83062450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83062458"))) PPC_WEAK_FUNC(sub_83062458);
PPC_FUNC_IMPL(__imp__sub_83062458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x83062460;
	sub_82CA2BC0(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,260(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r20,r11,12
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x83062908
	if (ctx.cr0.eq) goto loc_83062908;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83062908
	if (ctx.cr6.eq) goto loc_83062908;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83062908
	if (ctx.cr6.eq) goto loc_83062908;
	// divwu. r18,r11,r20
	ctx.r18.u32 = ctx.r11.u32 / ctx.r20.u32;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// twllei r20,0
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x83062908
	if (ctx.cr0.eq) goto loc_83062908;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
loc_830624C0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83062544
	if (ctx.cr6.eq) goto loc_83062544;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83062544
	if (!ctx.cr0.eq) goto loc_83062544;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83062530
	if (ctx.cr6.eq) goto loc_83062530;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_83062514:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83062530
	if (ctx.cr6.eq) goto loc_83062530;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83062514
	if (ctx.cr6.lt) goto loc_83062514;
loc_83062530:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8306253c
	if (!ctx.cr6.eq) goto loc_8306253C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8306253C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_83062544:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r19,r7
	ctx.r7.u64 = ctx.r19.u64 + ctx.r7.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x830624c0
	if (ctx.cr6.lt) goto loc_830624C0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83062908
	if (ctx.cr6.eq) goto loc_83062908;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// beq cr6,0x83062658
	if (ctx.cr6.eq) goto loc_83062658;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83062578:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830625cc
	if (ctx.cr6.eq) goto loc_830625CC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
loc_83062590:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830625b0
	if (ctx.cr6.eq) goto loc_830625B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83062590
	if (ctx.cr6.lt) goto loc_83062590;
	// b 0x830625c4
	goto loc_830625C4;
loc_830625B0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u32);
loc_830625C4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83062648
	if (ctx.cr6.lt) goto loc_83062648;
loc_830625CC:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// li r6,3
	ctx.r6.s64 = 3;
	// beq cr6,0x830625dc
	if (ctx.cr6.eq) goto loc_830625DC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_830625DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,140(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 140);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a978
	ctx.lr = 0x830625F0;
	sub_8307A978(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// beq cr6,0x830627d0
	if (ctx.cr6.eq) goto loc_830627D0;
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r9,20(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_83062648:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83062578
	if (ctx.cr6.lt) goto loc_83062578;
loc_83062658:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// li r24,0
	ctx.r24.s64 = 0;
loc_83062668:
	// lwz r10,260(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x830627a4
	if (ctx.cr6.eq) goto loc_830627A4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830627a4
	if (!ctx.cr0.eq) goto loc_830627A4;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8306279c
	if (ctx.cr6.eq) goto loc_8306279C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_830626C0:
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307a978
	ctx.lr = 0x830626F0;
	sub_8307A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x830627d0
	if (ctx.cr6.eq) goto loc_830627D0;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a2f8
	ctx.lr = 0x83062714;
	sub_8307A2F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8306290c
	if (ctx.cr0.lt) goto loc_8306290C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83062778
	if (ctx.cr6.eq) goto loc_83062778;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8307a978
	ctx.lr = 0x83062740;
	sub_8307A978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x830627d0
	if (ctx.cr6.eq) goto loc_830627D0;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,56(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8307a2f8
	ctx.lr = 0x8306276C;
	sub_8307A2F8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_83062778:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,260(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x830626c0
	if (ctx.cr6.lt) goto loc_830626C0;
loc_8306279C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_830627A4:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 + ctx.r24.u64;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x83062668
	if (ctx.cr6.lt) goto loc_83062668;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x830627BC;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830627dc
	if (ctx.cr0.eq) goto loc_830627DC;
	// bl 0x830795f0
	ctx.lr = 0x830627C8;
	sub_830795F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830627e0
	goto loc_830627E0;
loc_830627D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8306290c
	goto loc_8306290C;
loc_830627DC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830627E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830627d0
	if (ctx.cr6.eq) goto loc_830627D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83062874
	if (ctx.cr6.eq) goto loc_83062874;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83062800:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83062834
	if (ctx.cr6.eq) goto loc_83062834;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
loc_83062818:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83062834
	if (ctx.cr6.eq) goto loc_83062834;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83062818
	if (ctx.cr6.lt) goto loc_83062818;
loc_83062834:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83062864
	if (!ctx.cr6.eq) goto loc_83062864;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r11,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r9,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_83062864:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x83062800
	if (ctx.cr6.lt) goto loc_83062800;
loc_83062874:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d80
	ctx.lr = 0x83062890;
	sub_83079D80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x830628b0
	if (!ctx.cr0.lt) goto loc_830628B0;
loc_8306289C:
	// bl 0x829ce870
	ctx.lr = 0x830628A0;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d40
	ctx.lr = 0x830628A8;
	sub_83079D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8306290c
	goto loc_8306290C;
loc_830628B0:
	// lwz r4,260(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x830628B8;
	sub_83079640(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x830628c8
	if (!ctx.cr0.lt) goto loc_830628C8;
loc_830628C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8306289c
	goto loc_8306289C;
loc_830628C8:
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830628DC;
	sub_82CA2C60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82ca2c60
	ctx.lr = 0x830628EC;
	sub_82CA2C60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8307a808
	ctx.lr = 0x830628F8;
	sub_8307A808(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x830628c0
	if (ctx.cr0.lt) goto loc_830628C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8306290c
	goto loc_8306290C;
loc_83062908:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8306290C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_83062918"))) PPC_WEAK_FUNC(sub_83062918);
PPC_FUNC_IMPL(__imp__sub_83062918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83062920;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83062968
	if (ctx.cr6.eq) goto loc_83062968;
loc_83062960:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83062aa4
	goto loc_83062AA4;
loc_83062968:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83062960
	if (!ctx.cr0.eq) goto loc_83062960;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r11,-11968
	ctx.r5.s64 = ctx.r11.s64 + -11968;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83060f70
	ctx.lr = 0x830629C0;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83062aa4
	if (!ctx.cr0.eq) goto loc_83062AA4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x830629D0;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830629e0
	if (ctx.cr0.eq) goto loc_830629E0;
	// bl 0x830795f0
	ctx.lr = 0x830629DC;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830629E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830629f4
	if (!ctx.cr6.eq) goto loc_830629F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83062aa4
	goto loc_83062AA4;
loc_830629F4:
	// lis r4,28880
	ctx.r4.s64 = 1892679680;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x83062A10;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x83062a30
	if (!ctx.cr0.lt) goto loc_83062A30;
loc_83062A1C:
	// bl 0x829ce870
	ctx.lr = 0x83062A20;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83062A28;
	sub_83079D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83062aa4
	goto loc_83062AA4;
loc_83062A30:
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83062A38;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x83062a48
	if (!ctx.cr0.lt) goto loc_83062A48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83062a1c
	goto loc_83062A1C;
loc_83062A48:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x83062A60;
	sub_82CA2C60(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83062A8C;
	sub_8307A0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83062A98;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83062AA0;
	sub_83079D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83062AA4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83062AAC"))) PPC_WEAK_FUNC(sub_83062AAC);
PPC_FUNC_IMPL(__imp__sub_83062AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83062AB0"))) PPC_WEAK_FUNC(sub_83062AB0);
PPC_FUNC_IMPL(__imp__sub_83062AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83062b00
	if (!ctx.cr0.eq) goto loc_83062B00;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83062B00:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83062b48
	if (ctx.cr6.eq) goto loc_83062B48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83062B0C:
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// bne 0x83062b0c
	if (!ctx.cr0.eq) goto loc_83062B0C;
loc_83062B48:
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062B5C"))) PPC_WEAK_FUNC(sub_83062B5C);
PPC_FUNC_IMPL(__imp__sub_83062B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83062B60"))) PPC_WEAK_FUNC(sub_83062B60);
PPC_FUNC_IMPL(__imp__sub_83062B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x83062B68;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r21,r11,12
	ctx.r21.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83062bc4
	if (ctx.cr6.eq) goto loc_83062BC4;
loc_83062BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8306302c
	goto loc_8306302C;
loc_83062BC4:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83062e10
	if (ctx.cr6.eq) goto loc_83062E10;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r21,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,20(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
loc_83062C0C:
	// lwzx r11,r4,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,4(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r20,r3,r5
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// lwzx r3,r23,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r5.u32);
	// lwz r23,4(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm. r23,r23,0,23,23
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x83062c80
	if (ctx.cr0.eq) goto loc_83062C80;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83062c80
	if (!ctx.cr6.eq) goto loc_83062C80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83062c80
	if (!ctx.cr6.eq) goto loc_83062C80;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r23,r11,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83062c80
	if (!ctx.cr6.eq) goto loc_83062C80;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x83062c84
	goto loc_83062C84;
loc_83062C80:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83062C84:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83062cc8
	if (ctx.cr0.eq) goto loc_83062CC8;
	// lfd f13,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83062cc8
	if (!ctx.cr6.eq) goto loc_83062CC8;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83062cc8
	if (!ctx.cr6.eq) goto loc_83062CC8;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83062cc8
	if (!ctx.cr6.eq) goto loc_83062CC8;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83062ccc
	goto loc_83062CCC;
loc_83062CC8:
	// li r26,1
	ctx.r26.s64 = 1;
loc_83062CCC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83062c0c
	if (!ctx.cr0.eq) goto loc_83062C0C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x83062d2c
	if (ctx.cr6.eq) goto loc_83062D2C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83062d2c
	if (!ctx.cr6.eq) goto loc_83062D2C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83062CF8;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83062d08
	if (ctx.cr0.eq) goto loc_83062D08;
	// bl 0x830795f0
	ctx.lr = 0x83062D04;
	sub_830795F0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_83062D08:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83062d1c
	if (!ctx.cr6.eq) goto loc_83062D1C;
loc_83062D10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8306302c
	goto loc_8306302C;
loc_83062D1C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r11,1803
	ctx.r11.s64 = 1803;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x83062d70
	goto loc_83062D70;
loc_83062D2C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83062e10
	if (ctx.cr6.eq) goto loc_83062E10;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x83062e10
	if (!ctx.cr6.eq) goto loc_83062E10;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x83062bbc
	if (!ctx.cr6.eq) goto loc_83062BBC;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83062D4C;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83062d5c
	if (ctx.cr0.eq) goto loc_83062D5C;
	// bl 0x830795f0
	ctx.lr = 0x83062D58;
	sub_830795F0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_83062D5C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83062d10
	if (ctx.cr6.eq) goto loc_83062D10;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r11,451
	ctx.r11.s64 = 451;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_83062D70:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83079d80
	ctx.lr = 0x83062D84;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83063010
	if (ctx.cr0.lt) goto loc_83063010;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,260(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83062D98;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83063010
	if (ctx.cr0.lt) goto loc_83063010;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x83062DB4;
	sub_82CA2C60(ctx, base);
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca2c60
	ctx.lr = 0x83062DC8;
	sub_82CA2C60(ctx, base);
	// lwz r10,260(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x83062dec
	if (!ctx.cr6.eq) goto loc_83062DEC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_83062DEC:
	// bl 0x82ca2c60
	ctx.lr = 0x83062DF0;
	sub_82CA2C60(ctx, base);
loc_83062DF0:
	// lwz r11,256(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 256);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307a0a0
	ctx.lr = 0x83062E08;
	sub_8307A0A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83063010
	goto loc_83063010;
loc_83062E10:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r4,260(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// cntlzw r11,r18
	ctx.r11.u64 = ctx.r18.u32 == 0 ? 32 : __builtin_clz(ctx.r18.u32);
	// addi r5,r10,-15264
	ctx.r5.s64 = ctx.r10.s64 + -15264;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83060f70
	ctx.lr = 0x83062E44;
	sub_83060F70(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83063028
	if (!ctx.cr0.eq) goto loc_83063028;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
loc_83062E58:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83062E5C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83062fec
	if (ctx.cr6.eq) goto loc_83062FEC;
	// lwz r30,20(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r25,r20,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,16(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
loc_83062E74:
	// subf r11,r25,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r25.s64;
	// subf r10,r23,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r23.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// add r7,r25,r5
	ctx.r7.u64 = ctx.r25.u64 + ctx.r5.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r23,r5
	ctx.r9.u64 = ctx.r23.u64 + ctx.r5.u64;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwzx r31,r31,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwzx r28,r28,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwzx r27,r29,r26
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// beq cr6,0x83062f14
	if (ctx.cr6.eq) goto loc_83062F14;
	// lwz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83062f14
	if (ctx.cr6.eq) goto loc_83062F14;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x83062f38
	if (ctx.cr6.eq) goto loc_83062F38;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83062f38
	if (!ctx.cr6.eq) goto loc_83062F38;
loc_83062F14:
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xoris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 ^ 524288;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83062f38
	if (!ctx.cr6.eq) goto loc_83062F38;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83062f38
	if (!ctx.cr6.eq) goto loc_83062F38;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83062fb8
	goto loc_83062FB8;
loc_83062F38:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83062fb4
	if (!ctx.cr6.eq) goto loc_83062FB4;
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83062f68
	if (ctx.cr6.eq) goto loc_83062F68;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83062f68
	if (ctx.cr6.eq) goto loc_83062F68;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x83062f7c
	if (ctx.cr6.eq) goto loc_83062F7C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83062f7c
	if (!ctx.cr6.eq) goto loc_83062F7C;
loc_83062F68:
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83062fa8
	if (ctx.cr6.eq) goto loc_83062FA8;
loc_83062F7C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83062fb4
	if (ctx.cr0.eq) goto loc_83062FB4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83062fb4
	if (ctx.cr0.eq) goto loc_83062FB4;
	// lfd f0,32(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfd f13,32(r3)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83062fb4
	if (!ctx.cr6.eq) goto loc_83062FB4;
loc_83062FA8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83062fbc
	goto loc_83062FBC;
loc_83062FB4:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83062FB8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83062FBC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83062fcc
	if (!ctx.cr6.eq) goto loc_83062FCC;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// b 0x83062fd8
	goto loc_83062FD8;
loc_83062FCC:
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83062fd8
	if (ctx.cr6.eq) goto loc_83062FD8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83062FD8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83062ff4
	if (ctx.cr6.eq) goto loc_83062FF4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x83062e74
	if (ctx.cr6.lt) goto loc_83062E74;
loc_83062FEC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83063034
	if (!ctx.cr6.eq) goto loc_83063034;
loc_83062FF4:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// blt cr6,0x83062e5c
	if (ctx.cr6.lt) goto loc_83062E5C;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 2, ctx.xer);
	// blt cr6,0x83062e58
	if (ctx.cr6.lt) goto loc_83062E58;
loc_8306300C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83063010:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83063028
	if (ctx.cr6.eq) goto loc_83063028;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x829ce870
	ctx.lr = 0x83063020;
	sub_829CE870(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83079d40
	ctx.lr = 0x83063028;
	sub_83079D40(ctx, base);
loc_83063028:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8306302C:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
loc_83063034:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x8306303C;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8306304c
	if (ctx.cr0.eq) goto loc_8306304C;
	// bl 0x830795f0
	ctx.lr = 0x83063048;
	sub_830795F0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8306304C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83063060
	if (!ctx.cr6.eq) goto loc_83063060;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x83063028
	goto loc_83063028;
loc_83063060:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x83063198
	if (ctx.cr6.eq) goto loc_83063198;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// beq cr6,0x830631a0
	if (ctx.cr6.eq) goto loc_830631A0;
loc_83063070:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x830630a0
	if (!ctx.cr6.eq) goto loc_830630A0;
loc_83063078:
	// li r11,451
	ctx.r11.s64 = 451;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83079d80
	ctx.lr = 0x83063098;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83063010
	if (ctx.cr0.lt) goto loc_83063010;
loc_830630A0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,260(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x830630AC;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83063010
	if (ctx.cr0.lt) goto loc_83063010;
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x830630CC;
	sub_82CA2C60(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r30,r20,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830630E4;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subf r4,r30,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830630FC;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8306314c
	if (!ctx.cr6.eq) goto loc_8306314C;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8306300c
	if (ctx.cr6.eq) goto loc_8306300C;
loc_8306314C:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83063168
	if (!ctx.cr6.eq) goto loc_83063168;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306300c
	if (ctx.cr6.eq) goto loc_8306300C;
loc_83063168:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x83062df0
	if (ctx.cr6.eq) goto loc_83062DF0;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r22,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r22.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83063190
	if (ctx.cr6.eq) goto loc_83063190;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca30e8
	ctx.lr = 0x83063190;
	sub_82CA30E8(ctx, base);
loc_83063190:
	// stw r31,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r31.u32);
	// b 0x83063028
	goto loc_83063028;
loc_83063198:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x830631d0
	if (!ctx.cr6.eq) goto loc_830631D0;
loc_830631A0:
	// li r11,1803
	ctx.r11.s64 = 1803;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83079d80
	ctx.lr = 0x830631C0;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83063010
	if (ctx.cr0.lt) goto loc_83063010;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x83063070
	if (!ctx.cr6.eq) goto loc_83063070;
loc_830631D0:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// beq cr6,0x83063078
	if (ctx.cr6.eq) goto loc_83063078;
	// b 0x830630a0
	goto loc_830630A0;
}

__attribute__((alias("__imp__sub_830631DC"))) PPC_WEAK_FUNC(sub_830631DC);
PPC_FUNC_IMPL(__imp__sub_830631DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830631E0"))) PPC_WEAK_FUNC(sub_830631E0);
PPC_FUNC_IMPL(__imp__sub_830631E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x830631E8;
	sub_82CA2BB4(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cntlzw r10,r19
	ctx.r10.u64 = ctx.r19.u32 == 0 ? 32 : __builtin_clz(ctx.r19.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r31,r11,-15040
	ctx.r31.s64 = ctx.r11.s64 + -15040;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// clrlwi r28,r9,12
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r31,-128
	ctx.r5.s64 = ctx.r31.s64 + -128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// bl 0x83060f70
	ctx.lr = 0x83063264;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830632a0
	if (ctx.cr0.eq) goto loc_830632A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// bl 0x83060f70
	ctx.lr = 0x83063298;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83063418
	if (!ctx.cr0.eq) goto loc_83063418;
loc_830632A0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// addi r23,r1,144
	ctx.r23.s64 = ctx.r1.s64 + 144;
	// addi r24,r1,160
	ctx.r24.s64 = ctx.r1.s64 + 160;
	// lfd f0,-9064(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9064);
loc_830632B4:
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// addi r25,r1,176
	ctx.r25.s64 = ctx.r1.s64 + 176;
	// addi r26,r1,192
	ctx.r26.s64 = ctx.r1.s64 + 192;
loc_830632C0:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830633c8
	if (ctx.cr6.eq) goto loc_830633C8;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_830632E4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r31,r31,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x830633c8
	if (!ctx.cr6.eq) goto loc_830633C8;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x830633c8
	if (!ctx.cr6.eq) goto loc_830633C8;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x830633c8
	if (!ctx.cr6.eq) goto loc_830633C8;
	// lwz r15,4(r8)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r15,r15,r6
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r6.u32);
	// lwz r15,4(r15)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// rlwinm. r15,r15,0,23,23
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x830633c8
	if (ctx.cr0.eq) goto loc_830633C8;
	// lwz r15,4(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r15,r15,r6
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r6.u32);
	// lwz r15,4(r15)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// rlwinm. r15,r15,0,23,23
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x830633c8
	if (ctx.cr0.eq) goto loc_830633C8;
	// lwz r15,4(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r15,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r6.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x830633c8
	if (ctx.cr0.eq) goto loc_830633C8;
	// lfd f12,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// lfd f13,32(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// lfd f12,32(r3)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x830633c8
	if (ctx.cr6.gt) goto loc_830633C8;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x830633c8
	if (!ctx.cr6.eq) goto loc_830633C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x830632e4
	if (ctx.cr6.lt) goto loc_830632E4;
loc_830633C8:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83063420
	if (ctx.cr6.eq) goto loc_83063420;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,-16
	ctx.r26.s64 = ctx.r26.s64 + -16;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x830632c0
	if (ctx.cr6.lt) goto loc_830632C0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,-16
	ctx.r24.s64 = ctx.r24.s64 + -16;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// blt cr6,0x830632b4
	if (ctx.cr6.lt) goto loc_830632B4;
loc_830633F8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_830633FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83063414
	if (ctx.cr6.eq) goto loc_83063414;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829ce870
	ctx.lr = 0x8306340C;
	sub_829CE870(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83079d40
	ctx.lr = 0x83063414;
	sub_83079D40(ctx, base);
loc_83063414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83063418:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c04
	// ERROR 82CA2C04
	return;
loc_83063420:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83063428;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8306343c
	if (ctx.cr0.eq) goto loc_8306343C;
	// bl 0x830795f0
	ctx.lr = 0x83063434;
	sub_830795F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x83063440
	goto loc_83063440;
loc_8306343C:
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_83063440:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x83063454
	if (!ctx.cr6.eq) goto loc_83063454;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x83063414
	goto loc_83063414;
loc_83063454:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x83063474
	if (ctx.cr6.eq) goto loc_83063474;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x830633f8
	if (!ctx.cr6.eq) goto loc_830633F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r11,451
	ctx.r11.s64 = 451;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x83063480
	goto loc_83063480;
loc_83063474:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r11,1803
	ctx.r11.s64 = 1803;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_83063480:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83079d80
	ctx.lr = 0x83063494;
	sub_83079D80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x830633fc
	if (ctx.cr0.lt) goto loc_830633FC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x830634A8;
	sub_83079640(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x830633fc
	if (ctx.cr0.lt) goto loc_830633FC;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x830634C8;
	sub_82CA2C60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82ca2c60
	ctx.lr = 0x830634D8;
	sub_82CA2C60(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// beq cr6,0x830634fc
	if (ctx.cr6.eq) goto loc_830634FC;
	// lwz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x83063514
	goto loc_83063514;
loc_830634FC:
	// lwz r9,260(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83063514:
	// bl 0x82ca2c60
	ctx.lr = 0x83063518;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83063568
	if (!ctx.cr6.eq) goto loc_83063568;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830633f8
	if (ctx.cr6.eq) goto loc_830633F8;
loc_83063568:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83063584
	if (!ctx.cr6.eq) goto loc_83063584;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830633f8
	if (ctx.cr6.eq) goto loc_830633F8;
loc_83063584:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x830635b8
	if (ctx.cr6.eq) goto loc_830635B8;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830635b0
	if (ctx.cr6.eq) goto loc_830635B0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca30e8
	ctx.lr = 0x830635B0;
	sub_82CA30E8(ctx, base);
loc_830635B0:
	// stw r31,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r31.u32);
	// b 0x830635d0
	goto loc_830635D0;
loc_830635B8:
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307a0a0
	ctx.lr = 0x830635D0;
	sub_8307A0A0(ctx, base);
loc_830635D0:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x830633fc
	goto loc_830633FC;
}

__attribute__((alias("__imp__sub_830635D8"))) PPC_WEAK_FUNC(sub_830635D8);
PPC_FUNC_IMPL(__imp__sub_830635D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x830635E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8306366c
	if (!ctx.cr6.gt) goto loc_8306366C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830635FC:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x83063658
	if (ctx.cr6.eq) goto loc_83063658;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83063638
	goto loc_83063638;
loc_8306361C:
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_83063638:
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8306361c
	if (!ctx.cr6.eq) goto loc_8306361C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83063658
	if (ctx.cr6.eq) goto loc_83063658;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x8307a3f0
	ctx.lr = 0x83063658;
	sub_8307A3F0(ctx, base);
loc_83063658:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830635fc
	if (ctx.cr6.lt) goto loc_830635FC;
loc_8306366C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83063678"))) PPC_WEAK_FUNC(sub_83063678);
PPC_FUNC_IMPL(__imp__sub_83063678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83063680;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830636d8
	if (ctx.cr6.eq) goto loc_830636D8;
	// lis r9,4176
	ctx.r9.s64 = 273678336;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830636d8
	if (ctx.cr6.eq) goto loc_830636D8;
	// lis r9,4192
	ctx.r9.s64 = 274726912;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830636d8
	if (ctx.cr6.eq) goto loc_830636D8;
	// lis r9,4144
	ctx.r9.s64 = 271581184;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830636d8
	if (ctx.cr6.eq) goto loc_830636D8;
	// lis r9,4208
	ctx.r9.s64 = 275775488;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830636d8
	if (ctx.cr6.eq) goto loc_830636D8;
loc_830636D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83063a34
	goto loc_83063A34;
loc_830636D8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x830636d0
	if (!ctx.cr6.eq) goto loc_830636D0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x830636d0
	if (ctx.cr6.eq) goto loc_830636D0;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83063750
	if (ctx.cr6.eq) goto loc_83063750;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
loc_83063728:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x83063744
	if (!ctx.cr6.gt) goto loc_83063744;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_83063744:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83063728
	if (!ctx.cr0.eq) goto loc_83063728;
loc_83063750:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830637a0
	if (!ctx.cr6.eq) goto loc_830637A0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x830637a0
	if (!ctx.cr6.eq) goto loc_830637A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830637a0
	if (!ctx.cr6.eq) goto loc_830637A0;
	// lwz r11,88(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830637a0
	if (ctx.cr6.eq) goto loc_830637A0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_830637A0:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830636d0
	if (ctx.cr6.gt) goto loc_830636D0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x830637c0
	if (!ctx.cr6.eq) goto loc_830637C0;
	// lwz r11,88(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830636d0
	if (!ctx.cr6.eq) goto loc_830636D0;
loc_830637C0:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830637f8
	if (ctx.cr0.eq) goto loc_830637F8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830636d0
	if (ctx.cr6.eq) goto loc_830636D0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,132(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830636d0
	if (ctx.cr6.eq) goto loc_830636D0;
loc_830637F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830636d0
	if (!ctx.cr6.eq) goto loc_830636D0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830636d0
	if (!ctx.cr0.eq) goto loc_830636D0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83063858
	if (!ctx.cr6.gt) goto loc_83063858;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_83063838:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x830636d0
	if (!ctx.cr6.eq) goto loc_830636D0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83063838
	if (ctx.cr6.lt) goto loc_83063838;
loc_83063858:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830636d0
	if (!ctx.cr6.eq) goto loc_830636D0;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x8306387C;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83063890
	if (ctx.cr0.eq) goto loc_83063890;
	// bl 0x830795f0
	ctx.lr = 0x83063888;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83063894
	goto loc_83063894;
loc_83063890:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83063894:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830638a8
	if (!ctx.cr6.eq) goto loc_830638A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83063a34
	goto loc_83063A34;
loc_830638A8:
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lwz r9,260(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x83079d80
	ctx.lr = 0x830638D4;
	sub_83079D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x830638f4
	if (!ctx.cr0.lt) goto loc_830638F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x830638E4;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x830638EC;
	sub_83079D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83063a34
	goto loc_83063A34;
loc_830638F4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x83063908;
	sub_82CA2C60(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8306392c
	if (ctx.cr6.eq) goto loc_8306392C;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8306392C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830639d8
	if (ctx.cr6.eq) goto loc_830639D8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83063944:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830639c0
	if (!ctx.cr6.lt) goto loc_830639C0;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_83063954:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r4,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r3,16(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8306399c
	if (!ctx.cr6.gt) goto loc_8306399C;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r30,r11,r4
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stwx r3,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r30,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u32);
loc_8306399C:
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83063a3c
	if (ctx.cr6.eq) goto loc_83063A3C;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83063954
	if (ctx.cr6.lt) goto loc_83063954;
loc_830639C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83063944
	if (ctx.cr6.lt) goto loc_83063944;
loc_830639D8:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x830639F0;
	sub_82CA2C60(ctx, base);
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83063a18
	if (ctx.cr6.eq) goto loc_83063A18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x83063A10;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d40
	ctx.lr = 0x83063A18;
	sub_83079D40(ctx, base);
loc_83063A18:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_83063A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_83063A3C:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,4822
	ctx.r5.s64 = 4822;
	// addi r6,r10,-9056
	ctx.r6.s64 = ctx.r10.s64 + -9056;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8308be30
	ctx.lr = 0x83063A58;
	sub_8308BE30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ce870
	ctx.lr = 0x83063A60;
	sub_829CE870(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83079d40
	ctx.lr = 0x83063A68;
	sub_83079D40(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83063a34
	goto loc_83063A34;
}

__attribute__((alias("__imp__sub_83063A74"))) PPC_WEAK_FUNC(sub_83063A74);
PPC_FUNC_IMPL(__imp__sub_83063A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83063A78"))) PPC_WEAK_FUNC(sub_83063A78);
PPC_FUNC_IMPL(__imp__sub_83063A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83063A80;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,-13248
	ctx.r29.s64 = ctx.r11.s64 + -13248;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r29,-192
	ctx.r5.s64 = ctx.r29.s64 + -192;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x83060f70
	ctx.lr = 0x83063AE0;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83063bd0
	if (!ctx.cr0.eq) goto loc_83063BD0;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83063AF0;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83063b00
	if (ctx.cr0.eq) goto loc_83063B00;
	// bl 0x830795f0
	ctx.lr = 0x83063AFC;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83063B00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83063b14
	if (!ctx.cr6.eq) goto loc_83063B14;
loc_83063B08:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83063e98
	goto loc_83063E98;
loc_83063B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r11,923
	ctx.r11.s64 = 923;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_83063B20:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x83063B34;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x83063b54
	if (!ctx.cr0.lt) goto loc_83063B54;
loc_83063B40:
	// bl 0x829ce870
	ctx.lr = 0x83063B44;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83063B4C;
	sub_83079D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83063e98
	goto loc_83063E98;
loc_83063B54:
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83063B5C;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x83063b6c
	if (!ctx.cr0.lt) goto loc_83063B6C;
loc_83063B64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83063b40
	goto loc_83063B40;
loc_83063B6C:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x83063B84;
	sub_82CA2C60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82ca2c60
	ctx.lr = 0x83063B94;
	sub_82CA2C60(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_83063B98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83063BA8;
	sub_82CA2C60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83063BB4;
	sub_8307A0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83063BC0;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83063BC8;
	sub_83079D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83063e98
	goto loc_83063E98;
loc_83063BD0:
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x83063BF8;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83063c30
	if (!ctx.cr0.eq) goto loc_83063C30;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83063C08;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83063c18
	if (ctx.cr0.eq) goto loc_83063C18;
	// bl 0x830795f0
	ctx.lr = 0x83063C14;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83063C18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83063b08
	if (ctx.cr6.eq) goto loc_83063B08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r11,1845
	ctx.r11.s64 = 1845;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x83063b20
	goto loc_83063B20;
loc_83063C30:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x83063C58;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83063e98
	if (!ctx.cr0.eq) goto loc_83063E98;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r26,20(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83063ccc
	if (!ctx.cr6.eq) goto loc_83063CCC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83063d2c
	if (ctx.cr6.eq) goto loc_83063D2C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82ca30e8
	ctx.lr = 0x83063C9C;
	sub_82CA30E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83063CA0:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83063ca0
	if (!ctx.cr0.eq) goto loc_83063CA0;
	// b 0x83063d2c
	goto loc_83063D2C;
loc_83063CCC:
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83063e94
	if (!ctx.cr6.eq) goto loc_83063E94;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83063d2c
	if (ctx.cr6.eq) goto loc_83063D2C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82ca30e8
	ctx.lr = 0x83063D00;
	sub_82CA30E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83063D04:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83063d04
	if (!ctx.cr0.eq) goto loc_83063D04;
loc_83063D2C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83063e00
	if (ctx.cr6.eq) goto loc_83063E00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfd f12,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// lfd f13,3376(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 3376);
loc_83063D54:
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83063d80
	if (!ctx.cr0.eq) goto loc_83063D80;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83063D80:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83063d90
	if (ctx.cr6.eq) goto loc_83063D90;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_83063D90:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x83063d9c
	if (ctx.cr6.eq) goto loc_83063D9C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83063D9C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83063dc8
	if (!ctx.cr0.eq) goto loc_83063DC8;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83063DC8:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x83063dd8
	if (ctx.cr6.eq) goto loc_83063DD8;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_83063DD8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83063de4
	if (ctx.cr6.eq) goto loc_83063DE4;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83063DE4:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83063d54
	if (!ctx.cr0.eq) goto loc_83063D54;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x83063e00
	if (!ctx.cr6.eq) goto loc_83063E00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83063e94
	if (ctx.cr6.eq) goto loc_83063E94;
loc_83063E00:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83063E08;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83063e18
	if (ctx.cr0.eq) goto loc_83063E18;
	// bl 0x830795f0
	ctx.lr = 0x83063E14;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83063E18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83063b08
	if (ctx.cr6.eq) goto loc_83063B08;
	// clrlwi r11,r30,12
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// oris r4,r11,29536
	ctx.r4.u64 = ctx.r11.u64 | 1935671296;
	// bne cr6,0x83063e34
	if (!ctx.cr6.eq) goto loc_83063E34;
	// oris r4,r11,29520
	ctx.r4.u64 = ctx.r11.u64 | 1934622720;
loc_83063E34:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x83063E48;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x83063b40
	if (ctx.cr0.lt) goto loc_83063B40;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83063E5C;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83063b64
	if (ctx.cr0.lt) goto loc_83063B64;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x83063E7C;
	sub_82CA2C60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82ca2c60
	ctx.lr = 0x83063E8C;
	sub_82CA2C60(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x83063b98
	goto loc_83063B98;
loc_83063E94:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83063E98:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83063EA0"))) PPC_WEAK_FUNC(sub_83063EA0);
PPC_FUNC_IMPL(__imp__sub_83063EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83063EA8;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r5,r11,-14368
	ctx.r5.s64 = ctx.r11.s64 + -14368;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r29,r8,12
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFFF;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x83060f70
	ctx.lr = 0x83063F08;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83064038
	if (!ctx.cr0.eq) goto loc_83064038;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83064010
	if (ctx.cr6.eq) goto loc_83064010;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r4,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,3248(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 3248);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
loc_83063F6C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83064044
	if (ctx.cr6.eq) goto loc_83064044;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r4,r4,0,23,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x83064044
	if (ctx.cr0.eq) goto loc_83064044;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x83064044
	if (!ctx.cr6.eq) goto loc_83064044;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x83064044
	if (!ctx.cr6.eq) goto loc_83064044;
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83063fc4
	if (!ctx.cr6.eq) goto loc_83063FC4;
	// lfd f12,32(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bne cr6,0x83063fc4
	if (!ctx.cr6.eq) goto loc_83063FC4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x83063fdc
	goto loc_83063FDC;
loc_83063FC4:
	// lfd f12,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x83064044
	if (!ctx.cr6.eq) goto loc_83064044;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83064044
	if (!ctx.cr6.eq) goto loc_83064044;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_83063FDC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83063f6c
	if (ctx.cr6.lt) goto loc_83063F6C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83064000
	if (ctx.cr6.eq) goto loc_83064000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x83064044
	if (!ctx.cr6.eq) goto loc_83064044;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// oris r27,r11,29520
	ctx.r27.u64 = ctx.r11.u64 | 1934622720;
loc_83064000:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x83064010
	if (ctx.cr6.eq) goto loc_83064010;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// oris r27,r11,29536
	ctx.r27.u64 = ctx.r11.u64 | 1935671296;
loc_83064010:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83064018;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83064028
	if (ctx.cr0.eq) goto loc_83064028;
	// bl 0x830795f0
	ctx.lr = 0x83064024;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83064028:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8306404c
	if (!ctx.cr6.eq) goto loc_8306404C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_83064038:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_83064044:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83064038
	goto loc_83064038;
loc_8306404C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x83064064;
	sub_83079D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x83064084
	if (!ctx.cr0.lt) goto loc_83064084;
loc_83064070:
	// bl 0x829ce870
	ctx.lr = 0x83064074;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x8306407C;
	sub_83079D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83064038
	goto loc_83064038;
loc_83064084:
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x8306408C;
	sub_83079640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830640a0
	if (!ctx.cr0.lt) goto loc_830640A0;
loc_83064094:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83064098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83064070
	goto loc_83064070;
loc_830640A0:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x830640B8;
	sub_82CA2C60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82ca2c60
	ctx.lr = 0x830640C8;
	sub_82CA2C60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a978
	ctx.lr = 0x830640E0;
	sub_8307A978(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830640f4
	if (!ctx.cr6.eq) goto loc_830640F4;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x83064098
	goto loc_83064098;
loc_830640F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83064114
	if (ctx.cr6.eq) goto loc_83064114;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83064100:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83064100
	if (!ctx.cr0.eq) goto loc_83064100;
loc_83064114:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83064120;
	sub_8307A0A0(ctx, base);
	// b 0x83064094
	goto loc_83064094;
}

__attribute__((alias("__imp__sub_83064124"))) PPC_WEAK_FUNC(sub_83064124);
PPC_FUNC_IMPL(__imp__sub_83064124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83064128"))) PPC_WEAK_FUNC(sub_83064128);
PPC_FUNC_IMPL(__imp__sub_83064128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83064130;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83064248
	if (!ctx.cr6.eq) goto loc_83064248;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83064248
	if (ctx.cr0.eq) goto loc_83064248;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x83064248
	if (!ctx.cr6.eq) goto loc_83064248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// lfd f1,3376(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x83064248
	if (!ctx.cr6.eq) goto loc_83064248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8307a978
	ctx.lr = 0x830641AC;
	sub_8307A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x830641c4
	if (!ctx.cr6.eq) goto loc_830641C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8306424c
	goto loc_8306424C;
loc_830641C4:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8307a2f8
	ctx.lr = 0x830641F0;
	sub_8307A2F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8306424c
	if (ctx.cr0.lt) goto loc_8306424C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307a3f0
	ctx.lr = 0x83064204;
	sub_8307A3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8306424c
	if (ctx.cr0.lt) goto loc_8306424C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// bne cr6,0x83064234
	if (!ctx.cr6.eq) goto loc_83064234;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_83064234:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x8306424c
	goto loc_8306424C;
loc_83064248:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8306424C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83064254"))) PPC_WEAK_FUNC(sub_83064254);
PPC_FUNC_IMPL(__imp__sub_83064254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83064258"))) PPC_WEAK_FUNC(sub_83064258);
PPC_FUNC_IMPL(__imp__sub_83064258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83064260;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,-13792
	ctx.r29.s64 = ctx.r11.s64 + -13792;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r31,r10,12
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x830642C4;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830642f8
	if (!ctx.cr6.eq) goto loc_830642F8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x830642F8;
	sub_83060F70(ctx, base);
loc_830642F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x830643ec
	if (!ctx.cr6.eq) goto loc_830643EC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8306438c
	if (ctx.cr6.eq) goto loc_8306438C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,3376(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3376);
loc_8306431C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x830643a8
	if (!ctx.cr6.eq) goto loc_830643A8;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x830643a8
	if (ctx.cr0.eq) goto loc_830643A8;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830643a8
	if (!ctx.cr6.eq) goto loc_830643A8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x830643a8
	if (!ctx.cr6.eq) goto loc_830643A8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8306431c
	if (ctx.cr6.lt) goto loc_8306431C;
loc_8306438C:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// beq cr6,0x830643b0
	if (ctx.cr6.eq) goto loc_830643B0;
	// li r9,1847
	ctx.r9.s64 = 1847;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x830643b8
	goto loc_830643B8;
loc_830643A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830643ec
	goto loc_830643EC;
loc_830643B0:
	// li r9,231
	ctx.r9.s64 = 231;
	// rlwimi r10,r9,23,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_830643B8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830643e8
	if (ctx.cr6.eq) goto loc_830643E8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_830643C8:
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x830643c8
	if (!ctx.cr0.eq) goto loc_830643C8;
loc_830643E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830643EC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830643F4"))) PPC_WEAK_FUNC(sub_830643F4);
PPC_FUNC_IMPL(__imp__sub_830643F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830643F8"))) PPC_WEAK_FUNC(sub_830643F8);
PPC_FUNC_IMPL(__imp__sub_830643F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83064400;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,-13568
	ctx.r29.s64 = ctx.r11.s64 + -13568;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064464;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83064498
	if (!ctx.cr6.eq) goto loc_83064498;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064498;
	sub_83060F70(ctx, base);
loc_83064498:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8306458c
	if (!ctx.cr6.eq) goto loc_8306458C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830644e8
	if (ctx.cr6.eq) goto loc_830644E8;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_830644B0:
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83064504
	if (!ctx.cr6.eq) goto loc_83064504;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83064504
	if (!ctx.cr6.eq) goto loc_83064504;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83064504
	if (!ctx.cr6.eq) goto loc_83064504;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830644b0
	if (ctx.cr6.lt) goto loc_830644B0;
loc_830644E8:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq cr6,0x8306450c
	if (ctx.cr6.eq) goto loc_8306450C;
	// li r9,1847
	ctx.r9.s64 = 1847;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x83064514
	goto loc_83064514;
loc_83064504:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8306458c
	goto loc_8306458C;
loc_8306450C:
	// li r9,231
	ctx.r9.s64 = 231;
	// rlwimi r10,r9,23,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_83064514:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// bl 0x8307a978
	ctx.lr = 0x83064534;
	sub_8307A978(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83064548
	if (!ctx.cr6.eq) goto loc_83064548;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8306458c
	goto loc_8306458C;
loc_83064548:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83064588
	if (ctx.cr6.eq) goto loc_83064588;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83064558:
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83064558
	if (!ctx.cr0.eq) goto loc_83064558;
loc_83064588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306458C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83064594"))) PPC_WEAK_FUNC(sub_83064594);
PPC_FUNC_IMPL(__imp__sub_83064594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83064598"))) PPC_WEAK_FUNC(sub_83064598);
PPC_FUNC_IMPL(__imp__sub_83064598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x830645A0;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830645ec
	if (ctx.cr6.eq) goto loc_830645EC;
loc_830645E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83064808
	goto loc_83064808;
loc_830645EC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,-13984
	ctx.r30.s64 = ctx.r11.s64 + -13984;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r30,-288
	ctx.r5.s64 = ctx.r30.s64 + -288;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064618;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830646a8
	if (!ctx.cr6.eq) goto loc_830646A8;
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064648;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830646a8
	if (!ctx.cr6.eq) goto loc_830646A8;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064678;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830646a8
	if (!ctx.cr6.eq) goto loc_830646A8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x830646A8;
	sub_83060F70(ctx, base);
loc_830646A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83064808
	if (!ctx.cr6.eq) goto loc_83064808;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f0,3376(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3376);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_830646D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x830645e4
	if (ctx.cr0.eq) goto loc_830645E4;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830645e4
	if (!ctx.cr6.eq) goto loc_830645E4;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x830645e4
	if (!ctx.cr6.eq) goto loc_830645E4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x830646d0
	if (ctx.cr6.lt) goto loc_830646D0;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x83064754
	if (!ctx.cr6.eq) goto loc_83064754;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83064754
	if (ctx.cr0.eq) goto loc_83064754;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_83064754:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lfd f31,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
loc_83064760:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8307a978
	ctx.lr = 0x830647A0;
	sub_8307A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x83064824
	if (ctx.cr6.eq) goto loc_83064824;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307a2f8
	ctx.lr = 0x830647C4;
	sub_8307A2F8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x83064814
	if (!ctx.cr6.eq) goto loc_83064814;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x830647dc
	if (!ctx.cr6.eq) goto loc_830647DC;
	// stw r27,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r27.u32);
loc_830647DC:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_830647E8:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// blt cr6,0x83064760
	if (ctx.cr6.lt) goto loc_83064760;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_83064808:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_83064814:
	// lfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.f0.u64);
	// b 0x830647e8
	goto loc_830647E8;
loc_83064824:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83064808
	goto loc_83064808;
}

__attribute__((alias("__imp__sub_83064830"))) PPC_WEAK_FUNC(sub_83064830);
PPC_FUNC_IMPL(__imp__sub_83064830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83064838;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r30,r11,-12096
	ctx.r30.s64 = ctx.r11.s64 + -12096;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// clrlwi r29,r10,12
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064898;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83064954
	if (!ctx.cr0.eq) goto loc_83064954;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x830648A8;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830648b8
	if (ctx.cr0.eq) goto loc_830648B8;
	// bl 0x830795f0
	ctx.lr = 0x830648B4;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830648B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830648cc
	if (!ctx.cr6.eq) goto loc_830648CC;
loc_830648C0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83064ce0
	goto loc_83064CE0;
loc_830648CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r11,931
	ctx.r11.s64 = 931;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x830649b0
	goto loc_830649B0;
loc_830648DC:
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x830648E4;
	sub_83079640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x83064904
	if (!ctx.cr0.lt) goto loc_83064904;
loc_830648EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830648F0:
	// bl 0x829ce870
	ctx.lr = 0x830648F4;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x830648FC;
	sub_83079D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83064ce0
	goto loc_83064CE0;
loc_83064904:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x8306491C;
	sub_82CA2C60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82ca2c60
	ctx.lr = 0x8306492C;
	sub_82CA2C60(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_83064930:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83064940;
	sub_82CA2C60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x8306494C;
	sub_8307A0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830648ec
	goto loc_830648EC;
loc_83064954:
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x8306497C;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830649d4
	if (!ctx.cr0.eq) goto loc_830649D4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x8306498C;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8306499c
	if (ctx.cr0.eq) goto loc_8306499C;
	// bl 0x830795f0
	ctx.lr = 0x83064998;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8306499C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830648c0
	if (ctx.cr6.eq) goto loc_830648C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r11,1863
	ctx.r11.s64 = 1863;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_830649B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x830649C4;
	sub_83079D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x830648f0
	if (ctx.cr0.lt) goto loc_830648F0;
	// b 0x830648dc
	goto loc_830648DC;
loc_830649D4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x830649FC;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83064ce0
	if (!ctx.cr0.eq) goto loc_83064CE0;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r27,20(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83064a70
	if (!ctx.cr6.eq) goto loc_83064A70;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83064b70
	if (ctx.cr6.eq) goto loc_83064B70;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82ca30e8
	ctx.lr = 0x83064A40;
	sub_82CA30E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83064A44:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83064a44
	if (!ctx.cr0.eq) goto loc_83064A44;
	// b 0x83064b70
	goto loc_83064B70;
loc_83064A70:
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lwz r5,60(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83064ad4
	if (!ctx.cr6.eq) goto loc_83064AD4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83064b70
	if (ctx.cr6.eq) goto loc_83064B70;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82ca30e8
	ctx.lr = 0x83064AA4;
	sub_82CA30E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83064AA8:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83064aa8
	if (!ctx.cr0.eq) goto loc_83064AA8;
	// b 0x83064b70
	goto loc_83064B70;
loc_83064AD4:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x83064cdc
	if (!ctx.cr6.eq) goto loc_83064CDC;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83064b24
	if (ctx.cr6.eq) goto loc_83064B24;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83064b24
	if (!ctx.cr6.eq) goto loc_83064B24;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83064b24
	if (!ctx.cr6.eq) goto loc_83064B24;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83064b24
	if (!ctx.cr6.eq) goto loc_83064B24;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// b 0x83064b64
	goto loc_83064B64;
loc_83064B24:
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83064cdc
	if (ctx.cr6.eq) goto loc_83064CDC;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83064cdc
	if (!ctx.cr6.eq) goto loc_83064CDC;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83064cdc
	if (!ctx.cr6.eq) goto loc_83064CDC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83064cdc
	if (!ctx.cr6.eq) goto loc_83064CDC;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
loc_83064B64:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_83064B70:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83064c48
	if (ctx.cr6.eq) goto loc_83064C48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfd f12,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// lfd f13,3248(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 3248);
loc_83064B9C:
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83064bc8
	if (!ctx.cr0.eq) goto loc_83064BC8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83064BC8:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83064bd8
	if (ctx.cr6.eq) goto loc_83064BD8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83064BD8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x83064be4
	if (ctx.cr6.eq) goto loc_83064BE4;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83064BE4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83064c10
	if (!ctx.cr0.eq) goto loc_83064C10;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83064C10:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x83064c20
	if (ctx.cr6.eq) goto loc_83064C20;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83064C20:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83064c2c
	if (ctx.cr6.eq) goto loc_83064C2C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83064C2C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83064b9c
	if (!ctx.cr0.eq) goto loc_83064B9C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x83064c48
	if (!ctx.cr6.eq) goto loc_83064C48;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83064cdc
	if (ctx.cr6.eq) goto loc_83064CDC;
loc_83064C48:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83064C50;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83064c60
	if (ctx.cr0.eq) goto loc_83064C60;
	// bl 0x830795f0
	ctx.lr = 0x83064C5C;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83064C60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830648c0
	if (ctx.cr6.eq) goto loc_830648C0;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// oris r4,r11,29792
	ctx.r4.u64 = ctx.r11.u64 | 1952448512;
	// bne cr6,0x83064c7c
	if (!ctx.cr6.eq) goto loc_83064C7C;
	// oris r4,r11,29808
	ctx.r4.u64 = ctx.r11.u64 | 1953497088;
loc_83064C7C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x83064C90;
	sub_83079D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x830648f0
	if (ctx.cr0.lt) goto loc_830648F0;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83064CA4;
	sub_83079640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x830648ec
	if (ctx.cr0.lt) goto loc_830648EC;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x83064CC4;
	sub_82CA2C60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82ca2c60
	ctx.lr = 0x83064CD4;
	sub_82CA2C60(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x83064930
	goto loc_83064930;
loc_83064CDC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83064CE0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83064CE8"))) PPC_WEAK_FUNC(sub_83064CE8);
PPC_FUNC_IMPL(__imp__sub_83064CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83064CF0;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// clrlwi r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// beq cr6,0x83064d50
	if (ctx.cr6.eq) goto loc_83064D50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83065314
	goto loc_83065314;
loc_83064D50:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83064D58;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83064d6c
	if (ctx.cr0.eq) goto loc_83064D6C;
	// bl 0x830795f0
	ctx.lr = 0x83064D64;
	sub_830795F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x83064d70
	goto loc_83064D70;
loc_83064D6C:
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_83064D70:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x83064d84
	if (!ctx.cr6.eq) goto loc_83064D84;
loc_83064D78:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83065314
	goto loc_83065314;
loc_83064D84:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83064D90;
	sub_8307A0A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x83064db0
	if (!ctx.cr0.lt) goto loc_83064DB0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x829ce870
	ctx.lr = 0x83064DA0;
	sub_829CE870(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83079d40
	ctx.lr = 0x83064DA8;
	sub_83079D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83065314
	goto loc_83065314;
loc_83064DB0:
	// lis r11,8336
	ctx.r11.s64 = 546308096;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r18,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r18.u32);
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83065310
	if (ctx.cr6.eq) goto loc_83065310;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r10,-9008
	ctx.r10.s64 = ctx.r10.s64 + -9008;
	// lfd f31,3376(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3376);
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// lfd f30,3248(r8)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3248);
	// rlwinm r15,r28,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r14,4096
	ctx.r14.s64 = 268435456;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r19,r11,-9664
	ctx.r19.s64 = ctx.r11.s64 + -9664;
loc_83064E08:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwzx r11,r11,r15
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x83064E54;
	sub_82CA3190(ctx, base);
	// addi r5,r19,-512
	ctx.r5.s64 = ctx.r19.s64 + -512;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064E80;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83064eb8
	if (ctx.cr0.eq) goto loc_83064EB8;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r5,r19,-320
	ctx.r5.s64 = ctx.r19.s64 + -320;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064EB0;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830652f4
	if (!ctx.cr0.eq) goto loc_830652F4;
loc_83064EB8:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830652f4
	if (!ctx.cr6.eq) goto loc_830652F4;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r5,r19,-96
	ctx.r5.s64 = ctx.r19.s64 + -96;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064EF4;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83064f24
	if (ctx.cr0.eq) goto loc_83064F24;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83060f70
	ctx.lr = 0x83064F24;
	sub_83060F70(ctx, base);
loc_83064F24:
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r21,448(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83064f3c
	if (ctx.cr6.eq) goto loc_83064F3C;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
loc_83064F3C:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x830652f4
	if (ctx.cr6.eq) goto loc_830652F4;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x830652f4
	if (ctx.cr6.eq) goto loc_830652F4;
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830652f4
	if (ctx.cr6.eq) goto loc_830652F4;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4368
	ctx.r9.s64 = 286261248;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwzx r22,r11,r5
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830652f4
	if (!ctx.cr6.eq) goto loc_830652F4;
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x83065028
	goto loc_83065028;
loc_83064FC0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x83065034
	if (!ctx.cr6.eq) goto loc_83065034;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x83065034
	if (!ctx.cr6.eq) goto loc_83065034;
	// clrlwi. r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq 0x83065034
	if (ctx.cr0.eq) goto loc_83065034;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
loc_83064FF4:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83065014
	if (ctx.cr6.eq) goto loc_83065014;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83064ff4
	if (ctx.cr6.lt) goto loc_83064FF4;
	// b 0x83065034
	goto loc_83065034;
loc_83065014:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_83065028:
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83064fc0
	if (!ctx.cr6.eq) goto loc_83064FC0;
loc_83065034:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830652f4
	if (ctx.cr0.eq) goto loc_830652F4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830652f4
	if (ctx.cr0.eq) goto loc_830652F4;
	// lfd f0,32(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x830652f4
	if (!ctx.cr6.eq) goto loc_830652F4;
	// lfd f0,32(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x830652f4
	if (!ctx.cr6.eq) goto loc_830652F4;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r25,r11,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r27,84(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830652f4
	if (ctx.cr6.gt) goto loc_830652F4;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_830650A0:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwzx r30,r11,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830651dc
	if (ctx.cr6.eq) goto loc_830651DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830651dc
	if (!ctx.cr6.gt) goto loc_830651DC;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_830650C8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x83065160
	if (ctx.cr6.eq) goto loc_83065160;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830651c4
	if (ctx.cr6.eq) goto loc_830651C4;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x8306515c
	if (!ctx.cr6.eq) goto loc_8306515C;
	// clrlwi. r8,r11,12
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq 0x83065160
	if (ctx.cr0.eq) goto loc_83065160;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
loc_8306512C:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306514c
	if (ctx.cr6.eq) goto loc_8306514C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8306512c
	if (ctx.cr6.lt) goto loc_8306512C;
	// b 0x83065160
	goto loc_83065160;
loc_8306514C:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83065160
	goto loc_83065160;
loc_8306515C:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_83065160:
	// cmplw cr6,r6,r21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x830651c4
	if (!ctx.cr6.eq) goto loc_830651C4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830651a4
	if (!ctx.cr6.eq) goto loc_830651A4;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8307a8d8
	ctx.lr = 0x83065188;
	sub_8307A8D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8307a978
	ctx.lr = 0x830651A0;
	sub_8307A978(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_830651A4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830651c4
	if (ctx.cr6.eq) goto loc_830651C4;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_830651C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830650c8
	if (ctx.cr6.lt) goto loc_830650C8;
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_830651DC:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830650a0
	if (!ctx.cr6.gt) goto loc_830650A0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830652f4
	if (ctx.cr6.eq) goto loc_830652F4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83065200;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83065214
	if (ctx.cr0.eq) goto loc_83065214;
	// bl 0x830795f0
	ctx.lr = 0x8306520C;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83065218
	goto loc_83065218;
loc_83065214:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_83065218:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83064d78
	if (ctx.cr6.eq) goto loc_83064D78;
	// lis r4,29712
	ctx.r4.s64 = 1947205632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x8306523C;
	sub_83079D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x83065324
	if (ctx.cr0.lt) goto loc_83065324;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83079640
	ctx.lr = 0x83065250;
	sub_83079640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83065338
	if (ctx.cr0.lt) goto loc_83065338;
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8307a978
	ctx.lr = 0x830652A4;
	sub_8307A978(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8307a978
	ctx.lr = 0x830652C4;
	sub_8307A978(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8307a0a0
	ctx.lr = 0x830652D8;
	sub_8307A0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x830652E4;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x830652EC;
	sub_83079D40(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x83065330
	if (ctx.cr6.lt) goto loc_83065330;
loc_830652F4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83064e08
	if (ctx.cr6.lt) goto loc_83064E08;
loc_83065310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83065314:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_83065324:
	// bl 0x829ce870
	ctx.lr = 0x83065328;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83065330;
	sub_83079D40(ctx, base);
loc_83065330:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83065314
	goto loc_83065314;
loc_83065338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83065324
	goto loc_83065324;
}

__attribute__((alias("__imp__sub_83065340"))) PPC_WEAK_FUNC(sub_83065340);
PPC_FUNC_IMPL(__imp__sub_83065340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83065348;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r15,-1
	ctx.r15.s64 = -1;
	// li r14,0
	ctx.r14.s64 = 0;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// clrlwi r17,r11,12
	ctx.r17.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830653a4
	if (ctx.cr6.eq) goto loc_830653A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83065d30
	goto loc_83065D30;
loc_830653A4:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x830653AC;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830653c0
	if (ctx.cr0.eq) goto loc_830653C0;
	// bl 0x830795f0
	ctx.lr = 0x830653B8;
	sub_830795F0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x830653c4
	goto loc_830653C4;
loc_830653C0:
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
loc_830653C4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x830653d8
	if (!ctx.cr6.eq) goto loc_830653D8;
loc_830653CC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83065d30
	goto loc_83065D30;
loc_830653D8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x830653E4;
	sub_8307A0A0(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt 0x83065d1c
	if (ctx.cr0.lt) goto loc_83065D1C;
	// lis r11,8336
	ctx.r11.s64 = 546308096;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r20,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r20.u32);
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r10,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83065d1c
	if (ctx.cr6.eq) goto loc_83065D1C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,4368
	ctx.r8.s64 = 286261248;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// lfd f31,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// rlwinm r23,r17,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f30,3248(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3248);
	// ori r24,r8,1
	ctx.r24.u64 = ctx.r8.u64 | 1;
	// addi r26,r11,-11616
	ctx.r26.s64 = ctx.r11.s64 + -11616;
loc_8306543C:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r10,16(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x83065488;
	sub_82CA3190(ctx, base);
	// addi r5,r26,-224
	ctx.r5.s64 = ctx.r26.s64 + -224;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// bl 0x83060f70
	ctx.lr = 0x830654C0;
	sub_83060F70(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x83065578
	if (ctx.cr0.eq) goto loc_83065578;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// addi r5,r26,128
	ctx.r5.s64 = ctx.r26.s64 + 128;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x830654F4;
	sub_83060F70(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x83065504
	if (!ctx.cr0.eq) goto loc_83065504;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x83065578
	goto loc_83065578;
loc_83065504:
	// addi r5,r26,544
	ctx.r5.s64 = ctx.r26.s64 + 544;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83065530;
	sub_83060F70(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x83065540
	if (!ctx.cr0.eq) goto loc_83065540;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// b 0x83065578
	goto loc_83065578;
loc_83065540:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r5,r26,960
	ctx.r5.s64 = ctx.r26.s64 + 960;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x8306556C;
	sub_83060F70(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x83065578
	if (!ctx.cr0.eq) goto loc_83065578;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_83065578:
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r27,304(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830658d0
	if (ctx.cr6.eq) goto loc_830658D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,84(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// lwz r6,88(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x830658d0
	if (ctx.cr6.gt) goto loc_830658D0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_83065604:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83065644
	if (!ctx.cr6.eq) goto loc_83065644;
	// lis r5,29808
	ctx.r5.s64 = 1953497088;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83065644
	if (!ctx.cr6.eq) goto loc_83065644;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x830658e8
	if (!ctx.cr6.eq) goto loc_830658E8;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
loc_83065644:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x83065604
	if (!ctx.cr6.gt) goto loc_83065604;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x830658d0
	if (ctx.cr6.eq) goto loc_830658D0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83065694
	if (ctx.cr6.eq) goto loc_83065694;
	// addi r5,r26,1248
	ctx.r5.s64 = ctx.r26.s64 + 1248;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x83060f70
	ctx.lr = 0x83065690;
	sub_83060F70(ctx, base);
	// b 0x830656dc
	goto loc_830656DC;
loc_83065694:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x830656b0
	if (ctx.cr6.eq) goto loc_830656B0;
	// addi r5,r26,800
	ctx.r5.s64 = ctx.r26.s64 + 800;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x83060f70
	ctx.lr = 0x830656AC;
	sub_83060F70(ctx, base);
	// b 0x830656dc
	goto loc_830656DC;
loc_830656B0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x830656cc
	if (ctx.cr6.eq) goto loc_830656CC;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r5,r26,384
	ctx.r5.s64 = ctx.r26.s64 + 384;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x83060f70
	ctx.lr = 0x830656C8;
	sub_83060F70(ctx, base);
	// b 0x830656dc
	goto loc_830656DC;
loc_830656CC:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// bl 0x83060f70
	ctx.lr = 0x830656DC;
	sub_83060F70(ctx, base);
loc_830656DC:
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// beq cr6,0x830656f8
	if (ctx.cr6.eq) goto loc_830656F8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_830656F8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830658d0
	if (ctx.cr6.eq) goto loc_830658D0;
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830658d0
	if (ctx.cr6.eq) goto loc_830658D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r11,r4
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r24.u32, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830658d0
	if (ctx.cr0.eq) goto loc_830658D0;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x8306583c
	goto loc_8306583C;
loc_830657D0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x83065848
	if (!ctx.cr6.eq) goto loc_83065848;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r11,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83065848
	if (!ctx.cr6.eq) goto loc_83065848;
	// clrlwi. r6,r11,12
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq 0x83065848
	if (ctx.cr0.eq) goto loc_83065848;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
loc_83065808:
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83065828
	if (ctx.cr6.eq) goto loc_83065828;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83065808
	if (ctx.cr6.lt) goto loc_83065808;
	// b 0x83065848
	goto loc_83065848;
loc_83065828:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_8306583C:
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x830657d0
	if (!ctx.cr6.eq) goto loc_830657D0;
loc_83065848:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830658d0
	if (ctx.cr0.eq) goto loc_830658D0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830658d0
	if (ctx.cr0.eq) goto loc_830658D0;
	// lfd f0,32(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lfd f0,32(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830658d0
	if (ctx.cr0.eq) goto loc_830658D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830658d0
	if (ctx.cr0.eq) goto loc_830658D0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830658d0
	if (!ctx.cr6.eq) goto loc_830658D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8306590c
	if (ctx.cr6.eq) goto loc_8306590C;
loc_830658D0:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplw cr6,r18,r17
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x8306543c
	if (ctx.cr6.lt) goto loc_8306543C;
	// b 0x83065d1c
	goto loc_83065D1C;
loc_830658E8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4835
	ctx.r5.s64 = 4835;
	// addi r6,r11,-9004
	ctx.r6.s64 = ctx.r11.s64 + -9004;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308be30
	ctx.lr = 0x83065900;
	sub_8308BE30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83065d30
	goto loc_83065D30;
loc_8306590C:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r14,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r14.u32);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r11,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r27,84(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83065c4c
	if (ctx.cr6.gt) goto loc_83065C4C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-9008
	ctx.r24.s64 = ctx.r11.s64 + -9008;
loc_83065954:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r29,r25,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83065ac0
	if (ctx.cr6.eq) goto loc_83065AC0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83065ac0
	if (!ctx.cr6.eq) goto loc_83065AC0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83065ac0
	if (!ctx.cr6.gt) goto loc_83065AC0;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_830659A4:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x83065a40
	if (ctx.cr6.eq) goto loc_83065A40;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83065aac
	if (ctx.cr6.eq) goto loc_83065AAC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83065a3c
	if (!ctx.cr6.eq) goto loc_83065A3C;
	// clrlwi. r8,r11,12
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq 0x83065a40
	if (ctx.cr0.eq) goto loc_83065A40;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
loc_83065A0C:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83065a2c
	if (ctx.cr6.eq) goto loc_83065A2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83065a0c
	if (ctx.cr6.lt) goto loc_83065A0C;
	// b 0x83065a40
	goto loc_83065A40;
loc_83065A2C:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83065a40
	goto loc_83065A40;
loc_83065A3C:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_83065A40:
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83065aac
	if (!ctx.cr6.eq) goto loc_83065AAC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83065a8c
	if (!ctx.cr6.eq) goto loc_83065A8C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a8d8
	ctx.lr = 0x83065A70;
	sub_8307A8D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a978
	ctx.lr = 0x83065A88;
	sub_8307A978(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_83065A8C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83065aac
	if (ctx.cr6.eq) goto loc_83065AAC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_83065AAC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830659a4
	if (ctx.cr6.lt) goto loc_830659A4;
loc_83065AC0:
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83065954
	if (!ctx.cr6.gt) goto loc_83065954;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83065c4c
	if (ctx.cr6.eq) goto loc_83065C4C;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a978
	ctx.lr = 0x83065AF4;
	sub_8307A978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307a978
	ctx.lr = 0x83065B10;
	sub_8307A978(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x830653cc
	if (ctx.cr6.eq) goto loc_830653CC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830653cc
	if (ctx.cr6.eq) goto loc_830653CC;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8307a2f8
	ctx.lr = 0x83065B50;
	sub_8307A2F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8307a2f8
	ctx.lr = 0x83065B5C;
	sub_8307A2F8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r20,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r20.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bl 0x83079ce8
	ctx.lr = 0x83065B70;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83065b84
	if (ctx.cr0.eq) goto loc_83065B84;
	// bl 0x830795f0
	ctx.lr = 0x83065B7C;
	sub_830795F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83065b88
	goto loc_83065B88;
loc_83065B84:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_83065B88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830653cc
	if (ctx.cr6.eq) goto loc_830653CC;
	// lis r4,29712
	ctx.r4.s64 = 1947205632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d80
	ctx.lr = 0x83065BAC;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x83065bcc
	if (!ctx.cr0.lt) goto loc_83065BCC;
loc_83065BB8:
	// bl 0x829ce870
	ctx.lr = 0x83065BBC;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d40
	ctx.lr = 0x83065BC4;
	sub_83079D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83065d30
	goto loc_83065D30;
loc_83065BCC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83079640
	ctx.lr = 0x83065BD4;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x83065be4
	if (!ctx.cr0.lt) goto loc_83065BE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83065bb8
	goto loc_83065BB8;
loc_83065BE4:
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x8307a0a0
	ctx.lr = 0x83065C30;
	sub_8307A0A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x83065C3C;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d40
	ctx.lr = 0x83065C44;
	sub_83079D40(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x83065d2c
	if (ctx.cr6.lt) goto loc_83065D2C;
loc_83065C4C:
	// lwz r8,84(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83065ccc
	if (ctx.cr6.gt) goto loc_83065CCC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_83065C60:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r7,8320
	ctx.r7.s64 = 545259520;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r9,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83065cb8
	if (!ctx.cr6.eq) goto loc_83065CB8;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83065cb8
	if (!ctx.cr6.eq) goto loc_83065CB8;
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// oris r7,r9,4096
	ctx.r7.u64 = ctx.r9.u64 | 268435456;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_83065CB8:
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83065c60
	if (!ctx.cr6.gt) goto loc_83065C60;
loc_83065CCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83065d1c
	if (!ctx.cr6.gt) goto loc_83065D1C;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_83065CE0:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83065d08
	if (!ctx.cr6.eq) goto loc_83065D08;
	// lwz r8,16(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
loc_83065D08:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83065ce0
	if (ctx.cr6.lt) goto loc_83065CE0;
loc_83065D1C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x829ce870
	ctx.lr = 0x83065D24;
	sub_829CE870(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83079d40
	ctx.lr = 0x83065D2C;
	sub_83079D40(ctx, base);
loc_83065D2C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83065D30:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83065D40"))) PPC_WEAK_FUNC(sub_83065D40);
PPC_FUNC_IMPL(__imp__sub_83065D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83065D48;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,-12640
	ctx.r29.s64 = ctx.r11.s64 + -12640;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r31,r10,12
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83065DAC;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83065de0
	if (!ctx.cr6.eq) goto loc_83065DE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x83065DE0;
	sub_83060F70(ctx, base);
loc_83065DE0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83065ed4
	if (!ctx.cr6.eq) goto loc_83065ED4;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83065e74
	if (ctx.cr6.eq) goto loc_83065E74;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,3376(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3376);
loc_83065E04:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83065e90
	if (!ctx.cr6.eq) goto loc_83065E90;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83065e90
	if (ctx.cr0.eq) goto loc_83065E90;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83065e90
	if (!ctx.cr6.eq) goto loc_83065E90;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x83065e90
	if (!ctx.cr6.eq) goto loc_83065E90;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83065e04
	if (ctx.cr6.lt) goto loc_83065E04;
loc_83065E74:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// beq cr6,0x83065e98
	if (ctx.cr6.eq) goto loc_83065E98;
	// li r9,465
	ctx.r9.s64 = 465;
	// rlwimi r10,r9,22,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 22) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x83065ea0
	goto loc_83065EA0;
loc_83065E90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83065ed4
	goto loc_83065ED4;
loc_83065E98:
	// li r9,1861
	ctx.r9.s64 = 1861;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_83065EA0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83065ed0
	if (ctx.cr6.eq) goto loc_83065ED0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83065EB0:
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83065eb0
	if (!ctx.cr0.eq) goto loc_83065EB0;
loc_83065ED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83065ED4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83065EDC"))) PPC_WEAK_FUNC(sub_83065EDC);
PPC_FUNC_IMPL(__imp__sub_83065EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83065EE0"))) PPC_WEAK_FUNC(sub_83065EE0);
PPC_FUNC_IMPL(__imp__sub_83065EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83065EE8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,-12416
	ctx.r29.s64 = ctx.r11.s64 + -12416;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x83060f70
	ctx.lr = 0x83065F4C;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83065f80
	if (!ctx.cr6.eq) goto loc_83065F80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x83065F80;
	sub_83060F70(ctx, base);
loc_83065F80:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83066074
	if (!ctx.cr6.eq) goto loc_83066074;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83065fd0
	if (ctx.cr6.eq) goto loc_83065FD0;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_83065F98:
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83065fec
	if (!ctx.cr6.eq) goto loc_83065FEC;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83065fec
	if (!ctx.cr6.eq) goto loc_83065FEC;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83065fec
	if (!ctx.cr6.eq) goto loc_83065FEC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83065f98
	if (ctx.cr6.lt) goto loc_83065F98;
loc_83065FD0:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq cr6,0x83065ff4
	if (ctx.cr6.eq) goto loc_83065FF4;
	// li r9,465
	ctx.r9.s64 = 465;
	// rlwimi r10,r9,22,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 22) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x83065ffc
	goto loc_83065FFC;
loc_83065FEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83066074
	goto loc_83066074;
loc_83065FF4:
	// li r9,1861
	ctx.r9.s64 = 1861;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_83065FFC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// bl 0x8307a978
	ctx.lr = 0x8306601C;
	sub_8307A978(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83066030
	if (!ctx.cr6.eq) goto loc_83066030;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83066074
	goto loc_83066074;
loc_83066030:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83066070
	if (ctx.cr6.eq) goto loc_83066070;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83066040:
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83066040
	if (!ctx.cr0.eq) goto loc_83066040;
loc_83066070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83066074:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8306607C"))) PPC_WEAK_FUNC(sub_8306607C);
PPC_FUNC_IMPL(__imp__sub_8306607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066080"))) PPC_WEAK_FUNC(sub_83066080);
PPC_FUNC_IMPL(__imp__sub_83066080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83066088;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830660d4
	if (ctx.cr6.eq) goto loc_830660D4;
loc_830660CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830662f0
	goto loc_830662F0;
loc_830660D4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,-12832
	ctx.r30.s64 = ctx.r11.s64 + -12832;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r30,-288
	ctx.r5.s64 = ctx.r30.s64 + -288;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066100;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83066190
	if (!ctx.cr6.eq) goto loc_83066190;
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066130;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83066190
	if (!ctx.cr6.eq) goto loc_83066190;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066160;
	sub_83060F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83066190
	if (!ctx.cr6.eq) goto loc_83066190;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066190;
	sub_83060F70(ctx, base);
loc_83066190:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x830662f0
	if (!ctx.cr6.eq) goto loc_830662F0;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f0,3376(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3376);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_830661B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x830660cc
	if (ctx.cr0.eq) goto loc_830660CC;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830660cc
	if (!ctx.cr6.eq) goto loc_830660CC;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x830660cc
	if (!ctx.cr6.eq) goto loc_830660CC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x830661b8
	if (ctx.cr6.lt) goto loc_830661B8;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8306623c
	if (!ctx.cr6.eq) goto loc_8306623C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8306623c
	if (ctx.cr0.eq) goto loc_8306623C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8306623C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lfd f31,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
loc_83066248:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8307a978
	ctx.lr = 0x83066288;
	sub_8307A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x8306630c
	if (ctx.cr6.eq) goto loc_8306630C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307a2f8
	ctx.lr = 0x830662AC;
	sub_8307A2F8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x830662fc
	if (!ctx.cr6.eq) goto loc_830662FC;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x830662c4
	if (!ctx.cr6.eq) goto loc_830662C4;
	// stw r27,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r27.u32);
loc_830662C4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_830662D0:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// blt cr6,0x83066248
	if (ctx.cr6.lt) goto loc_83066248;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_830662F0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_830662FC:
	// lfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.f0.u64);
	// b 0x830662d0
	goto loc_830662D0;
loc_8306630C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830662f0
	goto loc_830662F0;
}

__attribute__((alias("__imp__sub_83066318"))) PPC_WEAK_FUNC(sub_83066318);
PPC_FUNC_IMPL(__imp__sub_83066318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83066320;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82ca3190
	ctx.lr = 0x8306635C;
	sub_82CA3190(ctx, base);
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-14784
	ctx.r5.s64 = ctx.r11.s64 + -14784;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r31,r11,12
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066390;
	sub_83060F70(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x830664a4
	if (!ctx.cr0.eq) goto loc_830664A4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addic. r7,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r7.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// beq 0x83066434
	if (ctx.cr0.eq) goto loc_83066434;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_830663B8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r3,20480
	ctx.r3.s64 = 1342177280;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x830663e4
	if (!ctx.cr6.eq) goto loc_830663E4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830663e0
	if (ctx.cr6.eq) goto loc_830663E0;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830664b0
	if (!ctx.cr6.eq) goto loc_830664B0;
loc_830663E0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_830663E4:
	// lis r3,8272
	ctx.r3.s64 = 542113792;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83066404
	if (!ctx.cr6.eq) goto loc_83066404;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83066400
	if (ctx.cr6.eq) goto loc_83066400;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830664b0
	if (!ctx.cr6.eq) goto loc_830664B0;
loc_83066400:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_83066404:
	// lis r3,4208
	ctx.r3.s64 = 275775488;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83066424
	if (!ctx.cr6.eq) goto loc_83066424;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83066420
	if (ctx.cr6.eq) goto loc_83066420;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830664b0
	if (!ctx.cr6.eq) goto loc_830664B0;
loc_83066420:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_83066424:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x830663b8
	if (ctx.cr6.lt) goto loc_830663B8;
loc_83066434:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830664b0
	if (!ctx.cr6.eq) goto loc_830664B0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830664b0
	if (!ctx.cr6.eq) goto loc_830664B0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83066490
	if (ctx.cr6.eq) goto loc_83066490;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_83066464:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x830664b0
	if (!ctx.cr6.eq) goto loc_830664B0;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x830664b0
	if (!ctx.cr6.eq) goto loc_830664B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83066464
	if (ctx.cr6.lt) goto loc_83066464;
loc_83066490:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca2c60
	ctx.lr = 0x830664A4;
	sub_82CA2C60(ctx, base);
loc_830664A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_830664A8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_830664B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830664a8
	goto loc_830664A8;
}

__attribute__((alias("__imp__sub_830664B8"))) PPC_WEAK_FUNC(sub_830664B8);
PPC_FUNC_IMPL(__imp__sub_830664B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830664C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bl 0x82ca3190
	ctx.lr = 0x830664FC;
	sub_82CA3190(ctx, base);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-14912
	ctx.r5.s64 = ctx.r11.s64 + -14912;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// clrlwi r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066530;
	sub_83060F70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x83066544
	if (!ctx.cr6.lt) goto loc_83066544;
loc_8306653C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83066798
	goto loc_83066798;
loc_83066544:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830665a0
	if (ctx.cr6.eq) goto loc_830665A0;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83066560:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8306653c
	if (!ctx.cr0.eq) goto loc_8306653C;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8306653c
	if (!ctx.cr6.eq) goto loc_8306653C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83066560
	if (ctx.cr6.lt) goto loc_83066560;
loc_830665A0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83066794
	if (!ctx.cr6.eq) goto loc_83066794;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_830665B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8306653c
	if (!ctx.cr6.eq) goto loc_8306653C;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8306653c
	if (!ctx.cr6.eq) goto loc_8306653C;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830665f0
	if (ctx.cr6.eq) goto loc_830665F0;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8306653c
	if (!ctx.cr0.eq) goto loc_8306653C;
loc_830665F0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x830665b0
	if (ctx.cr6.lt) goto loc_830665B0;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8306653c
	if (!ctx.cr6.eq) goto loc_8306653C;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8306653c
	if (!ctx.cr6.eq) goto loc_8306653C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83066620;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83066634
	if (ctx.cr0.eq) goto loc_83066634;
	// bl 0x830795f0
	ctx.lr = 0x8306662C;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83066638
	goto loc_83066638;
loc_83066634:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83066638:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8306664c
	if (!ctx.cr6.eq) goto loc_8306664C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83066798
	goto loc_83066798;
loc_8306664C:
	// li r11,897
	ctx.r11.s64 = 897;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x8306666C;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x83066788
	if (ctx.cr0.lt) goto loc_83066788;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83066680;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83066784
	if (ctx.cr0.lt) goto loc_83066784;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x830666A0;
	sub_82CA2C60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82ca2c60
	ctx.lr = 0x830666B0;
	sub_82CA2C60(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83066774
	if (ctx.cr6.eq) goto loc_83066774;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_830666C0:
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83066744
	if (ctx.cr0.eq) goto loc_83066744;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x83066744
	if (ctx.cr6.eq) goto loc_83066744;
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_83066744:
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x830666c0
	if (!ctx.cr0.eq) goto loc_830666C0;
loc_83066774:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83066780;
	sub_8307A0A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83066784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83066788:
	// bl 0x829ce870
	ctx.lr = 0x8306678C;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83066794;
	sub_83079D40(ctx, base);
loc_83066794:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83066798:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830667A0"))) PPC_WEAK_FUNC(sub_830667A0);
PPC_FUNC_IMPL(__imp__sub_830667A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x830667A8;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,-9440
	ctx.r29.s64 = ctx.r11.s64 + -9440;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066810;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8306684c
	if (ctx.cr0.eq) goto loc_8306684C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83060f70
	ctx.lr = 0x83066840;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83066ac8
	if (!ctx.cr0.eq) goto loc_83066AC8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8306684C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306686c
	if (ctx.cr6.eq) goto loc_8306686C;
loc_83066864:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83066ac8
	goto loc_83066AC8;
loc_8306686C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x830668c8
	if (!ctx.cr6.gt) goto loc_830668C8;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83066890:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83066864
	if (!ctx.cr6.eq) goto loc_83066864;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83066864
	if (!ctx.cr6.eq) goto loc_83066864;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83066890
	if (ctx.cr6.lt) goto loc_83066890;
loc_830668C8:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x830668D0;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830668e0
	if (ctx.cr0.eq) goto loc_830668E0;
	// bl 0x830795f0
	ctx.lr = 0x830668DC;
	sub_830795F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_830668E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x830668f4
	if (!ctx.cr6.eq) goto loc_830668F4;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x83066ac4
	goto loc_83066AC4;
loc_830668F4:
	// lis r4,28800
	ctx.r4.s64 = 1887436800;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83079d80
	ctx.lr = 0x83066910;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83066ab4
	if (ctx.cr0.lt) goto loc_83066AB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83066924;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83066ab4
	if (ctx.cr0.lt) goto loc_83066AB4;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x83066940;
	sub_82CA2C60(ctx, base);
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bne cr6,0x83066964
	if (!ctx.cr6.eq) goto loc_83066964;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// ld r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x83066a5c
	goto loc_83066A5C;
loc_83066964:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x830669a4
	if (ctx.cr6.eq) goto loc_830669A4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_830669A4:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x830669c0
	if (ctx.cr6.eq) goto loc_830669C0;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_830669C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfd f31,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a978
	ctx.lr = 0x830669E0;
	sub_8307A978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a978
	ctx.lr = 0x830669FC;
	sub_8307A978(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x83066aac
	if (ctx.cr6.eq) goto loc_83066AAC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83066aac
	if (ctx.cr6.eq) goto loc_83066AAC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// xoris r8,r26,8
	ctx.r8.u64 = ctx.r26.u64 ^ 524288;
	// xoris r7,r27,8
	ctx.r7.u64 = ctx.r27.u64 ^ 524288;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r26,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r27,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_83066A5C:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83066A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83066a98
	if (ctx.cr0.eq) goto loc_83066A98;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x83066ab4
	goto loc_83066AB4;
loc_83066A98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83066AA4;
	sub_8307A0A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83066ab4
	goto loc_83066AB4;
loc_83066AAC:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_83066AB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829ce870
	ctx.lr = 0x83066ABC;
	sub_829CE870(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83079d40
	ctx.lr = 0x83066AC4;
	sub_83079D40(ctx, base);
loc_83066AC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83066AC8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83066AD4"))) PPC_WEAK_FUNC(sub_83066AD4);
PPC_FUNC_IMPL(__imp__sub_83066AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066AD8"))) PPC_WEAK_FUNC(sub_83066AD8);
PPC_FUNC_IMPL(__imp__sub_83066AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83066AE0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83066b08
	if (ctx.cr6.eq) goto loc_83066B08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83066c3c
	goto loc_83066C3C;
loc_83066B08:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83066B10;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83066b24
	if (ctx.cr0.eq) goto loc_83066B24;
	// bl 0x830795f0
	ctx.lr = 0x83066B1C;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83066b28
	goto loc_83066B28;
loc_83066B24:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83066B28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83066b3c
	if (!ctx.cr6.eq) goto loc_83066B3C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x83066c38
	goto loc_83066C38;
loc_83066B3C:
	// lis r4,28800
	ctx.r4.s64 = 1887436800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x83066B58;
	sub_83079D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83066c28
	if (ctx.cr0.lt) goto loc_83066C28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x83066B6C;
	sub_83079640(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83066c28
	if (ctx.cr0.lt) goto loc_83066C28;
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83066B8C:
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83066b8c
	if (ctx.cr6.lt) goto loc_83066B8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// bl 0x8307a978
	ctx.lr = 0x83066BC8;
	sub_8307A978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83066be0
	if (!ctx.cr6.eq) goto loc_83066BE0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83066c3c
	goto loc_83066C3C;
loc_83066BE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83066C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83066c18
	if (ctx.cr0.eq) goto loc_83066C18;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x83066c28
	goto loc_83066C28;
loc_83066C18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83066C24;
	sub_8307A0A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83066C28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83066C30;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83066C38;
	sub_83079D40(ctx, base);
loc_83066C38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83066C3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83066C44"))) PPC_WEAK_FUNC(sub_83066C44);
PPC_FUNC_IMPL(__imp__sub_83066C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83066C48"))) PPC_WEAK_FUNC(sub_83066C48);
PPC_FUNC_IMPL(__imp__sub_83066C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x83066C50;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83066C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83066e88
	if (!ctx.cr0.eq) goto loc_83066E88;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83066cdc
	if (ctx.cr6.eq) goto loc_83066CDC;
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
loc_83066C9C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,76(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x83066cc0
	if (ctx.cr6.eq) goto loc_83066CC0;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83066cc0
	if (!ctx.cr6.lt) goto loc_83066CC0;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_83066CC0:
	// lwz r10,72(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83066cd0
	if (!ctx.cr6.gt) goto loc_83066CD0;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_83066CD0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x83066c9c
	if (!ctx.cr0.eq) goto loc_83066C9C;
loc_83066CDC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83066e0c
	if (ctx.cr6.eq) goto loc_83066E0C;
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_83066CF8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83066e00
	if (ctx.cr0.eq) goto loc_83066E00;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83066e00
	if (ctx.cr6.eq) goto loc_83066E00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83066de8
	if (!ctx.cr6.lt) goto loc_83066DE8;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x83066de8
	goto loc_83066DE8;
loc_83066D3C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83066df8
	if (ctx.cr6.eq) goto loc_83066DF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83066df8
	if (ctx.cr6.eq) goto loc_83066DF8;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_83066D60:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83066d7c
	if (ctx.cr6.eq) goto loc_83066D7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x83066d60
	if (ctx.cr6.lt) goto loc_83066D60;
loc_83066D7C:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x83066df8
	if (!ctx.cr6.lt) goto loc_83066DF8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83066dcc
	if (ctx.cr6.eq) goto loc_83066DCC;
	// lwz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_83066DA4:
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r5
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// lwz r29,16(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83066dcc
	if (ctx.cr6.eq) goto loc_83066DCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83066da4
	if (ctx.cr6.lt) goto loc_83066DA4;
loc_83066DCC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83066df8
	if (!ctx.cr6.lt) goto loc_83066DF8;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
loc_83066DE8:
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83066d3c
	if (!ctx.cr6.lt) goto loc_83066D3C;
	// b 0x83066e00
	goto loc_83066E00;
loc_83066DF8:
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_83066E00:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x83066cf8
	if (!ctx.cr0.eq) goto loc_83066CF8;
loc_83066E0C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83066e5c
	if (ctx.cr6.eq) goto loc_83066E5C;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83066E24:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r29,72(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x83066e4c
	if (ctx.cr6.lt) goto loc_83066E4C;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x83066e5c
	if (!ctx.cr6.gt) goto loc_83066E5C;
loc_83066E4C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x83066e24
	if (ctx.cr6.lt) goto loc_83066E24;
loc_83066E5C:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83066e88
	if (ctx.cr6.eq) goto loc_83066E88;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83066E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83066ea8
	if (ctx.cr0.eq) goto loc_83066EA8;
loc_83066E88:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83066ea0
	if (ctx.cr6.eq) goto loc_83066EA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829ce870
	ctx.lr = 0x83066E98;
	sub_829CE870(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83079d40
	ctx.lr = 0x83066EA0;
	sub_83079D40(ctx, base);
loc_83066EA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83066f40
	goto loc_83066F40;
loc_83066EA8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83066ed0
	if (ctx.cr6.eq) goto loc_83066ED0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83066EB8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x83066eb8
	if (!ctx.cr0.eq) goto loc_83066EB8;
loc_83066ED0:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83066ef4
	if (ctx.cr6.eq) goto loc_83066EF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x83066EEC;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d40
	ctx.lr = 0x83066EF4;
	sub_83079D40(ctx, base);
loc_83066EF4:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x83066f3c
	if (!ctx.cr6.gt) goto loc_83066F3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83066F10:
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r29,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r29.u32);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83066f10
	if (ctx.cr6.lt) goto loc_83066F10;
loc_83066F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83066F40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_83066F48"))) PPC_WEAK_FUNC(sub_83066F48);
PPC_FUNC_IMPL(__imp__sub_83066F48) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r8,r11,12
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83067004
	if (ctx.cr0.eq) goto loc_83067004;
	// lwz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83066F80:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83067078
	if (!ctx.cr6.eq) goto loc_83067078;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83067078
	if (!ctx.cr6.eq) goto loc_83067078;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83067078
	if (!ctx.cr6.eq) goto loc_83067078;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83067078
	if (!ctx.cr6.eq) goto loc_83067078;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83067078
	if (!ctx.cr6.eq) goto loc_83067078;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83066f80
	if (ctx.cr6.lt) goto loc_83066F80;
loc_83067004:
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwimi r10,r9,28,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// beq cr6,0x83067060
	if (ctx.cr6.eq) goto loc_83067060;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83067060
	if (ctx.cr0.eq) goto loc_83067060;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83067060;
	sub_82CA2C60(ctx, base);
loc_83067060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83067064:
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
loc_83067078:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83067064
	goto loc_83067064;
}

__attribute__((alias("__imp__sub_83067080"))) PPC_WEAK_FUNC(sub_83067080);
PPC_FUNC_IMPL(__imp__sub_83067080) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83067088;
	sub_82CA2BE8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,260(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi. r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83067138
	if (ctx.cr0.eq) goto loc_83067138;
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// lwz r3,20(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_830670C0:
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// lwzx r31,r31,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// bne cr6,0x8306715c
	if (!ctx.cr6.eq) goto loc_8306715C;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lwzx r28,r28,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8306710c
	if (ctx.cr6.eq) goto loc_8306710C;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8306715c
	if (ctx.cr6.eq) goto loc_8306715C;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8306715c
	if (!ctx.cr6.eq) goto loc_8306715C;
loc_8306710C:
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xoris r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 ^ 524288;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8306715c
	if (!ctx.cr6.eq) goto loc_8306715C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830670c0
	if (ctx.cr6.lt) goto loc_830670C0;
loc_83067138:
	// lwz r11,260(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r10,r8,28,0,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,260(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_83067158:
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_8306715C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83067158
	goto loc_83067158;
}

__attribute__((alias("__imp__sub_83067164"))) PPC_WEAK_FUNC(sub_83067164);
PPC_FUNC_IMPL(__imp__sub_83067164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067168"))) PPC_WEAK_FUNC(sub_83067168);
PPC_FUNC_IMPL(__imp__sub_83067168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83067170;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,260(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83067254
	if (ctx.cr0.eq) goto loc_83067254;
	// rotlwi r8,r27,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_830671A4:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r31,r10,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// lwzx r29,r30,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r8,r26,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// lwzx r30,r31,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bne cr6,0x83067294
	if (!ctx.cr6.eq) goto loc_83067294;
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,56(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwzx r31,r31,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x830671f8
	if (ctx.cr6.eq) goto loc_830671F8;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x83067294
	if (ctx.cr6.eq) goto loc_83067294;
	// lwz r26,56(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83067294
	if (!ctx.cr6.eq) goto loc_83067294;
loc_830671F8:
	// lwz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// xoris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 ^ 524288;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83067294
	if (!ctx.cr6.eq) goto loc_83067294;
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8306722c
	if (ctx.cr6.eq) goto loc_8306722C;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x83067294
	if (ctx.cr6.eq) goto loc_83067294;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83067294
	if (!ctx.cr6.eq) goto loc_83067294;
loc_8306722C:
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// xoris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 ^ 524288;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83067294
	if (!ctx.cr6.eq) goto loc_83067294;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830671a4
	if (ctx.cr6.lt) goto loc_830671A4;
loc_83067254:
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwimi r8,r7,28,0,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 28) & 0xFFF00000) | (ctx.r8.u64 & 0xFFFFFFFF000FFFFF);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83067288;
	sub_82CA2C60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306728C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_83067294:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8306728c
	goto loc_8306728C;
}

__attribute__((alias("__imp__sub_8306729C"))) PPC_WEAK_FUNC(sub_8306729C);
PPC_FUNC_IMPL(__imp__sub_8306729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830672A0"))) PPC_WEAK_FUNC(sub_830672A0);
PPC_FUNC_IMPL(__imp__sub_830672A0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306740c
	if (!ctx.cr6.eq) goto loc_8306740C;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306740c
	if (!ctx.cr6.eq) goto loc_8306740C;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8306740c
	if (ctx.cr6.eq) goto loc_8306740C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8306740c
	if (!ctx.cr6.eq) goto loc_8306740C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8306740c
	if (ctx.cr6.eq) goto loc_8306740C;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83067318:
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83067328
	if (!ctx.cr6.eq) goto loc_83067328;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83067328:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83067318
	if (ctx.cr6.lt) goto loc_83067318;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8306740c
	if (ctx.cr6.eq) goto loc_8306740C;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8306738c
	if (ctx.cr0.eq) goto loc_8306738C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x830673b8
	goto loc_830673B8;
loc_8306738C:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8306740c
	if (ctx.cr0.eq) goto loc_8306740C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_830673B8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,3248(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3248);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f13,32(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8306740c
	if (!ctx.cr6.eq) goto loc_8306740C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r10,r10,0,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8306740c
	if (!ctx.cr6.eq) goto loc_8306740C;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// b 0x83067410
	goto loc_83067410;
loc_8306740C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83067410:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306741C"))) PPC_WEAK_FUNC(sub_8306741C);
PPC_FUNC_IMPL(__imp__sub_8306741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067420"))) PPC_WEAK_FUNC(sub_83067420);
PPC_FUNC_IMPL(__imp__sub_83067420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x83067428;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r29,r9,12
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFFF;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x83067590
	if (!ctx.cr0.eq) goto loc_83067590;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// beq cr6,0x830674b4
	if (ctx.cr6.eq) goto loc_830674B4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_83067480:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r31,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830672a0
	ctx.lr = 0x8306749C;
	sub_830672A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83067810
	if (!ctx.cr0.eq) goto loc_83067810;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83067480
	if (ctx.cr6.lt) goto loc_83067480;
loc_830674B4:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83067528
	if (ctx.cr6.eq) goto loc_83067528;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r8,r26,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r26.s64;
	// subf r7,r26,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r26.s64;
loc_830674DC:
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r5,56(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306780c
	if (!ctx.cr6.eq) goto loc_8306780C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r10,r10,0,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8306780c
	if (!ctx.cr0.eq) goto loc_8306780C;
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8306780c
	if (!ctx.cr6.eq) goto loc_8306780C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830674dc
	if (ctx.cr6.lt) goto loc_830674DC;
loc_83067528:
	// lwz r5,12(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83067618
	if (ctx.cr6.eq) goto loc_83067618;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8306753C:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8306780c
	if (ctx.cr6.eq) goto loc_8306780C;
	// lwz r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_83067558:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83067568
	if (!ctx.cr6.eq) goto loc_83067568;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_83067568:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83067558
	if (!ctx.cr0.eq) goto loc_83067558;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8306780c
	if (!ctx.cr6.eq) goto loc_8306780C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8306753c
	if (ctx.cr6.lt) goto loc_8306753C;
	// b 0x83067618
	goto loc_83067618;
loc_83067590:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// beq cr6,0x83067614
	if (ctx.cr6.eq) goto loc_83067614;
	// lwz r8,20(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r7,r26,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r26.s64;
loc_830675A4:
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r5,56(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306780c
	if (!ctx.cr6.eq) goto loc_8306780C;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// rlwinm r9,r9,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8306780c
	if (!ctx.cr6.eq) goto loc_8306780C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r5,r9,0,11,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8306780c
	if (!ctx.cr0.eq) goto loc_8306780C;
	// rlwinm. r9,r9,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83067604
	if (!ctx.cr0.eq) goto loc_83067604;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8306780c
	if (ctx.cr0.eq) goto loc_8306780C;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8306780c
	if (ctx.cr0.eq) goto loc_8306780C;
loc_83067604:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830675a4
	if (ctx.cr6.lt) goto loc_830675A4;
loc_83067614:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83067618:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x83067620;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83067634
	if (ctx.cr0.eq) goto loc_83067634;
	// bl 0x830795f0
	ctx.lr = 0x8306762C;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83067638
	goto loc_83067638;
loc_83067634:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_83067638:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8306764c
	if (!ctx.cr6.eq) goto loc_8306764C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83067810
	goto loc_83067810;
loc_8306764C:
	// li r11,1793
	ctx.r11.s64 = 1793;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mulli r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 * 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x8306766C;
	sub_83079D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83067810
	if (ctx.cr0.lt) goto loc_83067810;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079640
	ctx.lr = 0x83067680;
	sub_83079640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83067810
	if (ctx.cr0.lt) goto loc_83067810;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x8306769C;
	sub_82CA2C60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ca2c60
	ctx.lr = 0x830676AC;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r29,r29,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830676C4;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830676D8;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8306772c
	if (!ctx.cr6.eq) goto loc_8306772C;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83067754
	if (ctx.cr6.eq) goto loc_83067754;
loc_8306772C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83067748
	if (!ctx.cr6.eq) goto loc_83067748;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83067754
	if (ctx.cr6.eq) goto loc_83067754;
loc_83067748:
	// lwz r11,136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83067764
	if (ctx.cr6.eq) goto loc_83067764;
loc_83067754:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83067764
	if (!ctx.cr0.eq) goto loc_83067764;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83067764:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83067780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830677fc
	if (!ctx.cr0.eq) goto loc_830677FC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830677ac
	if (!ctx.cr0.eq) goto loc_830677AC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x830677b8
	if (ctx.cr6.eq) goto loc_830677B8;
loc_830677AC:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830677fc
	if (ctx.cr0.eq) goto loc_830677FC;
loc_830677B8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307a0a0
	ctx.lr = 0x830677CC;
	sub_8307A0A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83067810
	if (ctx.cr0.lt) goto loc_83067810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x830677DC;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x830677E4;
	sub_83079D40(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r24,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r24.u32);
	// beq cr6,0x830677f4
	if (ctx.cr6.eq) goto loc_830677F4;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
loc_830677F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83067810
	goto loc_83067810;
loc_830677FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83067804;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x8306780C;
	sub_83079D40(ctx, base);
loc_8306780C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83067810:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_83067818"))) PPC_WEAK_FUNC(sub_83067818);
PPC_FUNC_IMPL(__imp__sub_83067818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x83067820;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// addi r31,r11,-16064
	ctx.r31.s64 = ctx.r11.s64 + -16064;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r5,r31,-96
	ctx.r5.s64 = ctx.r31.s64 + -96;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// clrlwi r26,r9,12
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFFF;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x83060f70
	ctx.lr = 0x83067884;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830678bc
	if (ctx.cr0.eq) goto loc_830678BC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83060f70
	ctx.lr = 0x830678B4;
	sub_83060F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83067b5c
	if (!ctx.cr0.eq) goto loc_83067B5C;
loc_830678BC:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// addi r24,r1,192
	ctx.r24.s64 = ctx.r1.s64 + 192;
	// addi r25,r1,208
	ctx.r25.s64 = ctx.r1.s64 + 208;
	// lis r20,8
	ctx.r20.s64 = 524288;
loc_830678CC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83067998
	if (ctx.cr6.eq) goto loc_83067998;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// rlwinm r11,r11,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000;
	// srawi r5,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
loc_830678F0:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// beq cr6,0x83067930
	if (ctx.cr6.eq) goto loc_83067930;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x83067998
	if (!ctx.cr6.eq) goto loc_83067998;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// b 0x83067980
	goto loc_83067980;
loc_83067930:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83067998
	if (!ctx.cr6.eq) goto loc_83067998;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83067998
	if (!ctx.cr6.eq) goto loc_83067998;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83067998
	if (!ctx.cr6.eq) goto loc_83067998;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83067998
	if (!ctx.cr6.eq) goto loc_83067998;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
loc_83067980:
	// bne cr6,0x83067998
	if (!ctx.cr6.eq) goto loc_83067998;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x830678f0
	if (ctx.cr6.lt) goto loc_830678F0;
loc_83067998:
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83067b48
	if (!ctx.cr6.eq) goto loc_83067B48;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x83079ce8
	ctx.lr = 0x830679A8;
	sub_83079CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830679bc
	if (ctx.cr0.eq) goto loc_830679BC;
	// bl 0x830795f0
	ctx.lr = 0x830679B4;
	sub_830795F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830679c0
	goto loc_830679C0;
loc_830679BC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_830679C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83067b68
	if (ctx.cr6.eq) goto loc_83067B68;
	// li r11,1793
	ctx.r11.s64 = 1793;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mulli r5,r26,3
	ctx.r5.s64 = ctx.r26.s64 * 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d80
	ctx.lr = 0x830679E8;
	sub_83079D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x83067b74
	if (ctx.cr0.lt) goto loc_83067B74;
	// lwz r4,260(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x83079640
	ctx.lr = 0x830679FC;
	sub_83079640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83067b88
	if (ctx.cr0.lt) goto loc_83067B88;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ca2c60
	ctx.lr = 0x83067A1C;
	sub_82CA2C60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82ca2c60
	ctx.lr = 0x83067A2C;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83067A40;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r29,r26,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83067A58;
	sub_82CA2C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83067aac
	if (!ctx.cr6.eq) goto loc_83067AAC;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83067ad4
	if (ctx.cr6.eq) goto loc_83067AD4;
loc_83067AAC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83067ac8
	if (!ctx.cr6.eq) goto loc_83067AC8;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83067ad4
	if (ctx.cr6.eq) goto loc_83067AD4;
loc_83067AC8:
	// lwz r10,136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83067ae4
	if (ctx.cr6.eq) goto loc_83067AE4;
loc_83067AD4:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83067ae4
	if (!ctx.cr0.eq) goto loc_83067AE4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83067AE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83067B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83067b38
	if (!ctx.cr0.eq) goto loc_83067B38;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83067b2c
	if (!ctx.cr0.eq) goto loc_83067B2C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83067b90
	if (ctx.cr6.eq) goto loc_83067B90;
loc_83067B2C:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83067b90
	if (!ctx.cr0.eq) goto loc_83067B90;
loc_83067B38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83067B40;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83067B48;
	sub_83079D40(ctx, base);
loc_83067B48:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r25,r25,-16
	ctx.r25.s64 = ctx.r25.s64 + -16;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x830678cc
	if (ctx.cr6.lt) goto loc_830678CC;
loc_83067B5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83067B60:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_83067B68:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83067b60
	goto loc_83067B60;
loc_83067B74:
	// bl 0x829ce870
	ctx.lr = 0x83067B78;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83067B80;
	sub_83079D40(ctx, base);
loc_83067B80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83067b60
	goto loc_83067B60;
loc_83067B88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83067b74
	goto loc_83067B74;
loc_83067B90:
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x83067ba8
	if (!ctx.cr6.eq) goto loc_83067BA8;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
loc_83067BA8:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83067c10
	if (ctx.cr0.eq) goto loc_83067C10;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83067c10
	if (!ctx.cr0.eq) goto loc_83067C10;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83067bd4
	if (ctx.cr0.eq) goto loc_83067BD4;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83067c10
	if (!ctx.cr0.eq) goto loc_83067C10;
loc_83067BD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83067BDC;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83067BE4;
	sub_83079D40(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4703
	ctx.r5.s64 = 4703;
	// addi r6,r11,-8964
	ctx.r6.s64 = ctx.r11.s64 + -8964;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8308bee8
	ctx.lr = 0x83067C00;
	sub_8308BEE8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x83067b5c
	if (!ctx.cr6.eq) goto loc_83067B5C;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// b 0x83067b5c
	goto loc_83067B5C;
loc_83067C10:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x83067c78
	if (!ctx.cr6.eq) goto loc_83067C78;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83067c3c
	if (ctx.cr6.eq) goto loc_83067C3C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_83067C28:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r23,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// bne 0x83067c28
	if (!ctx.cr0.eq) goto loc_83067C28;
loc_83067C3C:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83067c64
	if (ctx.cr6.eq) goto loc_83067C64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ce870
	ctx.lr = 0x83067C5C;
	sub_829CE870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079d40
	ctx.lr = 0x83067C64;
	sub_83079D40(ctx, base);
loc_83067C64:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// b 0x83067cb4
	goto loc_83067CB4;
loc_83067C78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8307a0a0
	ctx.lr = 0x83067C84;
	sub_8307A0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x83067C90;
	sub_829CE870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079d40
	ctx.lr = 0x83067C98;
	sub_83079D40(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x83067b80
	if (ctx.cr6.lt) goto loc_83067B80;
	// lwz r3,260(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x83079640
	ctx.lr = 0x83067CAC;
	sub_83079640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83067b60
	if (ctx.cr0.lt) goto loc_83067B60;
loc_83067CB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83067b60
	goto loc_83067B60;
}

__attribute__((alias("__imp__sub_83067CBC"))) PPC_WEAK_FUNC(sub_83067CBC);
PPC_FUNC_IMPL(__imp__sub_83067CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067CC0"))) PPC_WEAK_FUNC(sub_83067CC0);
PPC_FUNC_IMPL(__imp__sub_83067CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x83067CC8;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 30, ctx.xer);
	// ble cr6,0x83067cf4
	if (!ctx.cr6.gt) goto loc_83067CF4;
loc_83067CE8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83067f3c
	goto loc_83067F3C;
loc_83067CF4:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83067f38
	if (!ctx.cr6.lt) goto loc_83067F38;
	// lis r27,29504
	ctx.r27.s64 = 1933574144;
	// lis r26,29456
	ctx.r26.s64 = 1930428416;
	// lis r24,29488
	ctx.r24.s64 = 1932525568;
	// lis r22,29440
	ctx.r22.s64 = 1929379840;
	// lis r25,29472
	ctx.r25.s64 = 1931476992;
	// li r23,0
	ctx.r23.s64 = 0;
loc_83067D1C:
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83067f38
	if (ctx.cr6.eq) goto loc_83067F38;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x83067d54
	if (ctx.cr6.eq) goto loc_83067D54;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83067f38
	if (ctx.cr6.eq) goto loc_83067F38;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x83067f38
	if (ctx.cr6.eq) goto loc_83067F38;
loc_83067D54:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x83067d74
	if (ctx.cr6.eq) goto loc_83067D74;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x83067d74
	if (ctx.cr6.eq) goto loc_83067D74;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83067d74
	if (ctx.cr6.eq) goto loc_83067D74;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83067ed4
	if (!ctx.cr6.eq) goto loc_83067ED4;
loc_83067D74:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83067d88
	if (ctx.cr6.eq) goto loc_83067D88;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83067d8c
	if (!ctx.cr6.eq) goto loc_83067D8C;
loc_83067D88:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_83067D8C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x83067e88
	if (ctx.cr6.lt) goto loc_83067E88;
	// lwz r7,16(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// subf r8,r30,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r30.s64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_83067DAC:
	// lwzx r20,r8,r11
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x83067dc8
	if (!ctx.cr6.eq) goto loc_83067DC8;
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r20,r3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x83067dc8
	if (!ctx.cr6.eq) goto loc_83067DC8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_83067DC8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83067dac
	if (!ctx.cr0.eq) goto loc_83067DAC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83067e88
	if (ctx.cr6.eq) goto loc_83067E88;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x83067df4
	if (ctx.cr6.eq) goto loc_83067DF4;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x83067df4
	if (ctx.cr6.eq) goto loc_83067DF4;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// b 0x83067df8
	goto loc_83067DF8;
loc_83067DF4:
	// stw r23,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r23.u32);
loc_83067DF8:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// lwzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x83067cc0
	ctx.lr = 0x83067E38;
	sub_83067CC0(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83067e60
	if (!ctx.cr6.eq) goto loc_83067E60;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// b 0x83067ed4
	goto loc_83067ED4;
loc_83067E60:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83067e70
	if (!ctx.cr6.eq) goto loc_83067E70;
	// lis r11,29472
	ctx.r11.s64 = 1931476992;
	// b 0x83067e7c
	goto loc_83067E7C;
loc_83067E70:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x83067ed4
	if (!ctx.cr6.eq) goto loc_83067ED4;
	// lis r11,29440
	ctx.r11.s64 = 1929379840;
loc_83067E7C:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x83067ed4
	goto loc_83067ED4;
loc_83067E88:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x83067e98
	if (ctx.cr6.eq) goto loc_83067E98;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83067ed4
	if (!ctx.cr6.eq) goto loc_83067ED4;
loc_83067E98:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83067cc0
	ctx.lr = 0x83067ED4;
	sub_83067CC0(ctx, base);
loc_83067ED4:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83067ce8
	if (!ctx.cr6.lt) goto loc_83067CE8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83067f08
	if (ctx.cr6.eq) goto loc_83067F08;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x83067f1c
	if (!ctx.cr6.eq) goto loc_83067F1C;
loc_83067F08:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_83067F1C:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83067d1c
	if (ctx.cr6.lt) goto loc_83067D1C;
loc_83067F38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83067F3C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_83067F44"))) PPC_WEAK_FUNC(sub_83067F44);
PPC_FUNC_IMPL(__imp__sub_83067F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83067F48"))) PPC_WEAK_FUNC(sub_83067F48);
PPC_FUNC_IMPL(__imp__sub_83067F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x83067F50;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83068294
	if (!ctx.cr6.eq) goto loc_83068294;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83067f90
	if (ctx.cr0.eq) goto loc_83067F90;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83067F90:
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | ctx.r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r5,r11,64
	ctx.r5.u64 = ctx.r11.u64 | 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307a8d8
	ctx.lr = 0x83067FA8;
	sub_8307A8D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x83067fc0
	if (!ctx.cr6.eq) goto loc_83067FC0;
loc_83067FB4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830682a0
	goto loc_830682A0;
loc_83067FC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83068038
	if (ctx.cr0.eq) goto loc_83068038;
	// lwz r10,60(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83067fe0
	if (ctx.cr0.eq) goto loc_83067FE0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83067FE0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,32(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x8307a978
	ctx.lr = 0x8306800C;
	sub_8307A978(ctx, base);
	// stw r3,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83067fb4
	if (ctx.cr6.eq) goto loc_83067FB4;
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307a3f0
	ctx.lr = 0x83068034;
	sub_8307A3F0(ctx, base);
	// b 0x8306829c
	goto loc_8306829C;
loc_83068038:
	// lwz r22,8(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x830680fc
	if (ctx.cr6.eq) goto loc_830680FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83068050:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306808c
	if (!ctx.cr6.eq) goto loc_8306808C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306808c
	if (!ctx.cr6.eq) goto loc_8306808C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8306808c
	if (ctx.cr6.eq) goto loc_8306808C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83068094
	if (ctx.cr6.eq) goto loc_83068094;
loc_8306808C:
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830680ec
	if (!ctx.cr6.eq) goto loc_830680EC;
loc_83068094:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307a978
	ctx.lr = 0x830680AC;
	sub_8307A978(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83067fb4
	if (ctx.cr6.eq) goto loc_83067FB4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8307a3f0
	ctx.lr = 0x830680D0;
	sub_8307A3F0(ctx, base);
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,112(r23)
	PPC_STORE_U32(ctx.r23.u32 + 112, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830680ec
	if (ctx.cr6.eq) goto loc_830680EC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_830680EC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x83068050
	if (ctx.cr6.lt) goto loc_83068050;
loc_830680FC:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068294
	if (ctx.cr6.eq) goto loc_83068294;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83068294
	if (ctx.cr6.eq) goto loc_83068294;
	// rlwinm. r10,r24,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83068120
	if (ctx.cr0.eq) goto loc_83068120;
	// lwz r23,180(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x83068124
	goto loc_83068124;
loc_83068120:
	// lwz r23,184(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
loc_83068124:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x83067fb4
	if (ctx.cr6.eq) goto loc_83067FB4;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83068294
	if (ctx.cr6.eq) goto loc_83068294;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8306813C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83068178
	if (!ctx.cr6.eq) goto loc_83068178;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83068178
	if (!ctx.cr6.eq) goto loc_83068178;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83068178
	if (ctx.cr6.eq) goto loc_83068178;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83068180
	if (ctx.cr6.eq) goto loc_83068180;
loc_83068178:
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83068284
	if (!ctx.cr6.eq) goto loc_83068284;
loc_83068180:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,32(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r3,228(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// bl 0x8307a978
	ctx.lr = 0x83068198;
	sub_8307A978(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x83067fb4
	if (ctx.cr6.eq) goto loc_83067FB4;
	// lwz r8,68(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x83068284
	if (ctx.cr6.eq) goto loc_83068284;
	// lwz r3,228(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83068284
	if (ctx.cr6.eq) goto loc_83068284;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83068284
	if (!ctx.cr6.eq) goto loc_83068284;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306821c
	if (ctx.cr6.eq) goto loc_8306821C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83068200:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8306821c
	if (ctx.cr6.eq) goto loc_8306821C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83068200
	if (ctx.cr6.lt) goto loc_83068200;
loc_8306821C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8307aa18
	ctx.lr = 0x8306823C;
	sub_8307AA18(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83067fb4
	if (ctx.cr6.eq) goto loc_83067FB4;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079640
	ctx.lr = 0x83068260;
	sub_83079640(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r27,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r27.u32);
loc_83068284:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8306813c
	if (ctx.cr6.lt) goto loc_8306813C;
loc_83068294:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_8306829C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830682A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_830682A8"))) PPC_WEAK_FUNC(sub_830682A8);
PPC_FUNC_IMPL(__imp__sub_830682A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ble cr6,0x830682e8
	if (!ctx.cr6.gt) goto loc_830682E8;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83068310
	if (!ctx.cr6.lt) goto loc_83068310;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_830682C8:
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// bne 0x830682c8
	if (!ctx.cr0.eq) goto loc_830682C8;
	// b 0x83068310
	goto loc_83068310;
loc_830682E8:
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x83068310
	if (!ctx.cr6.gt) goto loc_83068310;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_830682F4:
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// bne 0x830682f4
	if (!ctx.cr0.eq) goto loc_830682F4;
loc_83068310:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83068324"))) PPC_WEAK_FUNC(sub_83068324);
PPC_FUNC_IMPL(__imp__sub_83068324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83068328"))) PPC_WEAK_FUNC(sub_83068328);
PPC_FUNC_IMPL(__imp__sub_83068328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,29520
	ctx.r11.s64 = 1934622720;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83068368
	if (ctx.cr6.eq) goto loc_83068368;
	// lis r11,29536
	ctx.r11.s64 = 1935671296;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83068368
	if (ctx.cr6.eq) goto loc_83068368;
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83068368
	if (ctx.cr6.eq) goto loc_83068368;
	// lis r11,29568
	ctx.r11.s64 = 1937768448;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83068368
	if (ctx.cr6.eq) goto loc_83068368;
	// lis r11,4336
	ctx.r11.s64 = 284164096;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_83068368:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

