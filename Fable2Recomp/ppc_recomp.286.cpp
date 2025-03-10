#include "ppc_recomp_shared.h"

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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_21(ctx, base);
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
	__restgprlr_21(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_24(ctx, base);
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
	__restgprlr_24(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_24(ctx, base);
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
	__restgprlr_24(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_19(ctx, base);
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
	__restgprlr_19(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_22(ctx, base);
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
	__restgprlr_22(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_28(ctx, base);
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
	__restgprlr_28(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_26(ctx, base);
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
	__restgprlr_26(ctx, base);
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
	__savegprlr_24(ctx, base);
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
	__restgprlr_24(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_23(ctx, base);
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
	__restgprlr_23(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_25(ctx, base);
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
	__restgprlr_25(ctx, base);
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
	__savegprlr_23(ctx, base);
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
	__restgprlr_23(ctx, base);
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
	__savegprlr_20(ctx, base);
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
	__restgprlr_20(ctx, base);
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
	__savegprlr_22(ctx, base);
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
	__restgprlr_22(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_20(ctx, base);
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
	__restgprlr_20(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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
	__savegprlr_21(ctx, base);
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
	__restgprlr_21(ctx, base);
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
	__savegprlr_16(ctx, base);
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
	__restgprlr_16(ctx, base);
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
	__savegprlr_14(ctx, base);
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
	__restgprlr_14(ctx, base);
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
	__savegprlr_14(ctx, base);
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
	__restgprlr_14(ctx, base);
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
	__savegprlr_24(ctx, base);
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
	__restgprlr_24(ctx, base);
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
	__savegprlr_14(ctx, base);
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
	__restgprlr_14(ctx, base);
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
	__savegprlr_27(ctx, base);
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
	__restgprlr_27(ctx, base);
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
	__savegprlr_29(ctx, base);
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
	__restgprlr_29(ctx, base);
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

__attribute__((alias("__imp__sub_83110064"))) PPC_WEAK_FUNC(sub_83110064);
PPC_FUNC_IMPL(__imp__sub_83110064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110068"))) PPC_WEAK_FUNC(sub_83110068);
PPC_FUNC_IMPL(__imp__sub_83110068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831100b0
	if (ctx.cr0.eq) goto loc_831100B0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83110094
	if (ctx.cr6.eq) goto loc_83110094;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83110098
	if (!ctx.cr6.eq) goto loc_83110098;
loc_83110094:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83110098:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831100b0
	if (!ctx.cr0.eq) goto loc_831100B0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x831100b4
	if (ctx.cr0.eq) goto loc_831100B4;
loc_831100B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831100B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831100BC"))) PPC_WEAK_FUNC(sub_831100BC);
PPC_FUNC_IMPL(__imp__sub_831100BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831100C0"))) PPC_WEAK_FUNC(sub_831100C0);
PPC_FUNC_IMPL(__imp__sub_831100C0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x831100ec
	if (ctx.cr6.lt) goto loc_831100EC;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r9.u32);
	// blr 
	return;
loc_831100EC:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311011c
	if (ctx.cr6.eq) goto loc_8311011C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_8311011C:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8310fe28
	sub_8310FE28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110128"))) PPC_WEAK_FUNC(sub_83110128);
PPC_FUNC_IMPL(__imp__sub_83110128) {
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
	// lwz r9,1112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// lwz r10,1116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83110164
	if (ctx.cr6.lt) goto loc_83110164;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x831101a4
	goto loc_831101A4;
loc_83110164:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8311019c
	if (ctx.cr6.eq) goto loc_8311019C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82ca3190
	ctx.lr = 0x83110194;
	sub_82CA3190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831101a4
	goto loc_831101A4;
loc_8311019C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8310fe28
	ctx.lr = 0x831101A4;
	sub_8310FE28(ctx, base);
loc_831101A4:
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

__attribute__((alias("__imp__sub_831101B8"))) PPC_WEAK_FUNC(sub_831101B8);
PPC_FUNC_IMPL(__imp__sub_831101B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x831101d4
	if (ctx.cr6.lt) goto loc_831101D4;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x831101d8
	if (!ctx.cr6.gt) goto loc_831101D8;
loc_831101D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831101D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831101e8
	if (ctx.cr0.eq) goto loc_831101E8;
loc_831101E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831101E8:
	// rlwinm. r11,r10,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110208
	if (ctx.cr0.eq) goto loc_83110208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831101e0
	if (!ctx.cr6.eq) goto loc_831101E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831101e0
	if (!ctx.cr6.eq) goto loc_831101E0;
loc_83110208:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83110224
	if (!ctx.cr6.eq) goto loc_83110224;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8311021C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311025c
	if (ctx.cr6.eq) goto loc_8311025C;
loc_83110224:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83110254
	if (ctx.cr6.eq) goto loc_83110254;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83110248
	if (!ctx.cr0.eq) goto loc_83110248;
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x8311024c
	if (ctx.cr0.eq) goto loc_8311024C;
loc_83110248:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8311024C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8311025c
	if (ctx.cr0.eq) goto loc_8311025C;
loc_83110254:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8311021c
	goto loc_8311021C;
loc_8311025C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110268"))) PPC_WEAK_FUNC(sub_83110268);
PPC_FUNC_IMPL(__imp__sub_83110268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83110270;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831102fc
	if (ctx.cr6.eq) goto loc_831102FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,25,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 96, ctx.xer);
	// blt cr6,0x831102ac
	if (ctx.cr6.lt) goto loc_831102AC;
	// cmplwi cr6,r30,102
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x831102b0
	if (!ctx.cr6.gt) goto loc_831102B0;
loc_831102AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831102B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831102fc
	if (ctx.cr0.eq) goto loc_831102FC;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 96, ctx.xer);
	// bne cr6,0x831102e8
	if (!ctx.cr6.eq) goto loc_831102E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x831102D8;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831102f8
	if (!ctx.cr0.eq) goto loc_831102F8;
loc_831102E8:
	// cmplwi cr6,r30,97
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 97, ctx.xer);
	// beq cr6,0x831102f8
	if (ctx.cr6.eq) goto loc_831102F8;
	// cmplwi cr6,r30,99
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 99, ctx.xer);
	// bne cr6,0x831102fc
	if (!ctx.cr6.eq) goto loc_831102FC;
loc_831102F8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_831102FC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// rlwimi r11,r10,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r9,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110324"))) PPC_WEAK_FUNC(sub_83110324);
PPC_FUNC_IMPL(__imp__sub_83110324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110328"))) PPC_WEAK_FUNC(sub_83110328);
PPC_FUNC_IMPL(__imp__sub_83110328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83110330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83110374
	if (ctx.cr6.eq) goto loc_83110374;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x83110368
	if (ctx.cr6.lt) goto loc_83110368;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8311036c
	if (!ctx.cr6.gt) goto loc_8311036C;
loc_83110368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311036C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831103bc
	if (ctx.cr0.eq) goto loc_831103BC;
loc_83110374:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83110380;
	sub_82B97430(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831103bc
	if (ctx.cr0.eq) goto loc_831103BC;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83110398;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20480, ctx.xer);
	// bne cr6,0x831103b8
	if (!ctx.cr6.eq) goto loc_831103B8;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831103bc
	if (ctx.cr6.eq) goto loc_831103BC;
loc_831103B8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831103BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831103C8"))) PPC_WEAK_FUNC(sub_831103C8);
PPC_FUNC_IMPL(__imp__sub_831103C8) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82b97430
	ctx.lr = 0x831103E4;
	sub_82B97430(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,20480
	ctx.r11.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
	// rlwimi r11,r31,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83110418"))) PPC_WEAK_FUNC(sub_83110418);
PPC_FUNC_IMPL(__imp__sub_83110418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83110420;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,768(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83110438;
	sub_82B97430(ctx, base);
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x831104d4
	if (ctx.cr6.gt) goto loc_831104D4;
loc_83110448:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,768(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83110454;
	sub_82B97430(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwinm r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311047c
	if (ctx.cr6.eq) goto loc_8311047C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83110488
	if (ctx.cr6.eq) goto loc_83110488;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x83110488
	if (ctx.cr6.eq) goto loc_83110488;
loc_8311047C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x83110448
	if (!ctx.cr6.gt) goto loc_83110448;
loc_83110488:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x831104d4
	if (ctx.cr6.gt) goto loc_831104D4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x831104d4
	if (ctx.cr6.gt) goto loc_831104D4;
loc_8311049C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,768(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x831104A8;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20480, ctx.xer);
	// bne cr6,0x831104c8
	if (!ctx.cr6.eq) goto loc_831104C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_831104C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x8311049c
	if (!ctx.cr6.gt) goto loc_8311049C;
loc_831104D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831104DC"))) PPC_WEAK_FUNC(sub_831104DC);
PPC_FUNC_IMPL(__imp__sub_831104DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831104E0"))) PPC_WEAK_FUNC(sub_831104E0);
PPC_FUNC_IMPL(__imp__sub_831104E0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,812
	ctx.r10.s64 = ctx.r3.s64 + 812;
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// ble cr6,0x8311051c
	if (!ctx.cr6.gt) goto loc_8311051C;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821f5f18
	sub_821F5F18(ctx, base);
	return;
loc_8311051C:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110538"))) PPC_WEAK_FUNC(sub_83110538);
PPC_FUNC_IMPL(__imp__sub_83110538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83110540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831105ac
	if (!ctx.cr0.eq) goto loc_831105AC;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r31,540(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// beq cr6,0x831105a4
	if (ctx.cr6.eq) goto loc_831105A4;
loc_83110568:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x83110584;
	sub_8310FC68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x831104e0
	ctx.lr = 0x83110598;
	sub_831104E0(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83110568
	if (!ctx.cr6.eq) goto loc_83110568;
loc_831105A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r11.u32);
loc_831105AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831105B4"))) PPC_WEAK_FUNC(sub_831105B4);
PPC_FUNC_IMPL(__imp__sub_831105B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831105B8"))) PPC_WEAK_FUNC(sub_831105B8);
PPC_FUNC_IMPL(__imp__sub_831105B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8311065c
	if (!ctx.cr0.eq) goto loc_8311065C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311065c
	if (ctx.cr6.eq) goto loc_8311065C;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8311065c
	if (ctx.cr0.eq) goto loc_8311065C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// cmplwi cr6,r10,8191
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8191, ctx.xer);
	// beq cr6,0x8311065c
	if (ctx.cr6.eq) goto loc_8311065C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8311060c
	if (ctx.cr6.lt) goto loc_8311060C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83110610
	if (!ctx.cr6.gt) goto loc_83110610;
loc_8311060C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83110610:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311065c
	if (ctx.cr0.eq) goto loc_8311065C;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311065c
	if (ctx.cr0.eq) goto loc_8311065C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8311065c
	if (!ctx.cr6.eq) goto loc_8311065C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x83110650
	if (ctx.cr6.lt) goto loc_83110650;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83110654
	if (!ctx.cr6.gt) goto loc_83110654;
loc_83110650:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83110654:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8311065C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110664"))) PPC_WEAK_FUNC(sub_83110664);
PPC_FUNC_IMPL(__imp__sub_83110664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110668"))) PPC_WEAK_FUNC(sub_83110668);
PPC_FUNC_IMPL(__imp__sub_83110668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831106a0
	if (!ctx.cr0.eq) goto loc_831106A0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831106a0
	if (ctx.cr0.eq) goto loc_831106A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x831106a0
	if (!ctx.cr6.eq) goto loc_831106A0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r11,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831106a0
	if (ctx.cr0.eq) goto loc_831106A0;
	// clrlwi r3,r11,20
	ctx.r3.u64 = ctx.r11.u32 & 0xFFF;
	// blr 
	return;
loc_831106A0:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x830fd318
	sub_830FD318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831106B4"))) PPC_WEAK_FUNC(sub_831106B4);
PPC_FUNC_IMPL(__imp__sub_831106B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831106B8"))) PPC_WEAK_FUNC(sub_831106B8);
PPC_FUNC_IMPL(__imp__sub_831106B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831106C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83110748
	if (!ctx.cr0.eq) goto loc_83110748;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83110748
	if (ctx.cr0.eq) goto loc_83110748;
loc_831106E0:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_831106E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8311072c
	if (ctx.cr6.eq) goto loc_8311072C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110724
	if (ctx.cr6.eq) goto loc_83110724;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110724
	if (ctx.cr0.eq) goto loc_83110724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83110068
	ctx.lr = 0x8311070C;
	sub_83110068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110724
	if (ctx.cr0.eq) goto loc_83110724;
	// rlwinm r11,r31,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x83110724
	if (!ctx.cr6.gt) goto loc_83110724;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83110724:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x831106e4
	goto loc_831106E4;
loc_8311072C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83110748
	if (!ctx.cr0.eq) goto loc_83110748;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831106e0
	if (!ctx.cr6.eq) goto loc_831106E0;
loc_83110748:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110754"))) PPC_WEAK_FUNC(sub_83110754);
PPC_FUNC_IMPL(__imp__sub_83110754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110758"))) PPC_WEAK_FUNC(sub_83110758);
PPC_FUNC_IMPL(__imp__sub_83110758) {
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
	// addi r30,r4,12
	ctx.r30.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4d88
	ctx.lr = 0x83110780;
	sub_821F4D88(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831107CC"))) PPC_WEAK_FUNC(sub_831107CC);
PPC_FUNC_IMPL(__imp__sub_831107CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831107D0"))) PPC_WEAK_FUNC(sub_831107D0);
PPC_FUNC_IMPL(__imp__sub_831107D0) {
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
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x831107fc
	if (!ctx.cr6.gt) goto loc_831107FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83110758
	ctx.lr = 0x831107F8;
	sub_83110758(ctx, base);
	// b 0x83110868
	goto loc_83110868;
loc_831107FC:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83110820
	if (ctx.cr6.lt) goto loc_83110820;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x83110864
	goto loc_83110864;
loc_83110820:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83110858
	if (ctx.cr6.eq) goto loc_83110858;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82ca3190
	ctx.lr = 0x83110850;
	sub_82CA3190(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x83110864
	goto loc_83110864;
loc_83110858:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8310fe28
	ctx.lr = 0x83110860;
	sub_8310FE28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83110864:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83110868:
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

__attribute__((alias("__imp__sub_8311087C"))) PPC_WEAK_FUNC(sub_8311087C);
PPC_FUNC_IMPL(__imp__sub_8311087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110880"))) PPC_WEAK_FUNC(sub_83110880);
PPC_FUNC_IMPL(__imp__sub_83110880) {
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
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x831108a8
	if (!ctx.cr6.gt) goto loc_831108A8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83110758
	ctx.lr = 0x831108A4;
	sub_83110758(ctx, base);
	// b 0x83110914
	goto loc_83110914;
loc_831108A8:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x831108cc
	if (ctx.cr6.lt) goto loc_831108CC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x83110910
	goto loc_83110910;
loc_831108CC:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83110904
	if (ctx.cr6.eq) goto loc_83110904;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82ca3190
	ctx.lr = 0x831108FC;
	sub_82CA3190(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x83110910
	goto loc_83110910;
loc_83110904:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8310fe28
	ctx.lr = 0x8311090C;
	sub_8310FE28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83110910:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83110914:
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

__attribute__((alias("__imp__sub_83110928"))) PPC_WEAK_FUNC(sub_83110928);
PPC_FUNC_IMPL(__imp__sub_83110928) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// rlwinm r4,r10,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x83110958
	if (!ctx.cr6.gt) goto loc_83110958;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83110758
	ctx.lr = 0x83110954;
	sub_83110758(ctx, base);
	// b 0x831109c4
	goto loc_831109C4;
loc_83110958:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8311097c
	if (ctx.cr6.lt) goto loc_8311097C;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x831109c0
	goto loc_831109C0;
loc_8311097C:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831109b4
	if (ctx.cr6.eq) goto loc_831109B4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82ca3190
	ctx.lr = 0x831109AC;
	sub_82CA3190(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x831109c0
	goto loc_831109C0;
loc_831109B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8310fe28
	ctx.lr = 0x831109BC;
	sub_8310FE28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_831109C0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_831109C4:
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

__attribute__((alias("__imp__sub_831109D8"))) PPC_WEAK_FUNC(sub_831109D8);
PPC_FUNC_IMPL(__imp__sub_831109D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x831109E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110a18
	if (ctx.cr0.eq) goto loc_83110A18;
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110a18
	if (ctx.cr6.eq) goto loc_83110A18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne 0x83110a1c
	if (!ctx.cr0.eq) goto loc_83110A1C;
loc_83110A18:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83110A1C:
	// rlwinm. r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x83110a54
	if (ctx.cr0.eq) goto loc_83110A54;
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110a44
	if (ctx.cr6.eq) goto loc_83110A44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne 0x83110a48
	if (!ctx.cr0.eq) goto loc_83110A48;
loc_83110A44:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83110A48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne 0x83110a58
	if (!ctx.cr0.eq) goto loc_83110A58;
loc_83110A54:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83110A58:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83110a6c
	if (!ctx.cr0.eq) goto loc_83110A6C;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq 0x83110a70
	if (ctx.cr0.eq) goto loc_83110A70;
loc_83110A6C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83110A70:
	// clrlwi r18,r11,24
	ctx.r18.u64 = ctx.r11.u32 & 0xFF;
loc_83110A74:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83110a88
	if (!ctx.cr0.eq) goto loc_83110A88;
loc_83110A84:
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_83110A88:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83111060
	if (ctx.cr6.eq) goto loc_83111060;
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83110fd4
	if (!ctx.cr0.eq) goto loc_83110FD4;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83110fd4
	if (ctx.cr0.eq) goto loc_83110FD4;
loc_83110AA8:
	// lwz r30,8(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r31,r30,25,25,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,117
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 117, ctx.xer);
	// bne cr6,0x83110af0
	if (!ctx.cr6.eq) goto loc_83110AF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8310fc68
	ctx.lr = 0x83110ACC;
	sub_8310FC68(ctx, base);
	// addi r11,r23,-16
	ctx.r11.s64 = ctx.r23.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x83110af0
	if (!ctx.cr6.eq) goto loc_83110AF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83110fec
	if (ctx.cr6.eq) goto loc_83110FEC;
loc_83110AF0:
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110bbc
	if (ctx.cr0.eq) goto loc_83110BBC;
	// rlwinm. r11,r30,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110bbc
	if (ctx.cr0.eq) goto loc_83110BBC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_83110B04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110fb8
	if (ctx.cr6.eq) goto loc_83110FB8;
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12032
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12032, ctx.xer);
	// beq cr6,0x83110b28
	if (ctx.cr6.eq) goto loc_83110B28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83110b04
	goto loc_83110B04;
loc_83110B28:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8310fc68
	ctx.lr = 0x83110B3C;
	sub_8310FC68(ctx, base);
	// addi r11,r28,-12
	ctx.r11.s64 = ctx.r28.s64 + -12;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83110fb8
	if (!ctx.cr0.eq) goto loc_83110FB8;
	// addi r29,r23,4
	ctx.r29.s64 = ctx.r23.s64 + 4;
loc_83110B50:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83111008
	if (ctx.cr6.eq) goto loc_83111008;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83110ba8
	if (ctx.cr6.eq) goto loc_83110BA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110ba8
	if (ctx.cr0.eq) goto loc_83110BA8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123d48
	ctx.lr = 0x83110B84;
	sub_83123D48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831101b8
	ctx.lr = 0x83110B8C;
	sub_831101B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110ba8
	if (ctx.cr0.eq) goto loc_83110BA8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831d4770
	ctx.lr = 0x83110BA8;
	sub_831D4770(ctx, base);
loc_83110BA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83110b50
	if (!ctx.cr6.eq) goto loc_83110B50;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// b 0x83110b50
	goto loc_83110B50;
loc_83110BBC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831101b8
	ctx.lr = 0x83110BC4;
	sub_831101B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83110ff8
	if (!ctx.cr0.eq) goto loc_83110FF8;
	// cmplwi cr6,r31,104
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 104, ctx.xer);
	// bne cr6,0x83110fb8
	if (!ctx.cr6.eq) goto loc_83110FB8;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83110fec
	if (ctx.cr6.eq) goto loc_83110FEC;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_83110BE8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83110c44
	if (ctx.cr6.eq) goto loc_83110C44;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110c3c
	if (ctx.cr6.eq) goto loc_83110C3C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110c3c
	if (ctx.cr0.eq) goto loc_83110C3C;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110c38
	if (ctx.cr6.eq) goto loc_83110C38;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_83110C1C:
	// srw r5,r9,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r5,r19,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r5.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83110c1c
	if (!ctx.cr0.eq) goto loc_83110C1C;
loc_83110C38:
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
loc_83110C3C:
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x83110be8
	goto loc_83110BE8;
loc_83110C44:
	// rlwinm r10,r30,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0xF;
	// lwz r11,44(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83110c68
	if (!ctx.cr6.eq) goto loc_83110C68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83110fb8
	if (ctx.cr0.eq) goto loc_83110FB8;
loc_83110C68:
	// lwz r24,12(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// b 0x83110d48
	goto loc_83110D48;
loc_83110C78:
	// lwz r29,44(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r4,48(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310fb10
	ctx.lr = 0x83110C88;
	sub_8310FB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110d58
	if (ctx.cr0.eq) goto loc_83110D58;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_83110C94:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83110cc0
	if (ctx.cr6.eq) goto loc_83110CC0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110cb0
	if (ctx.cr6.eq) goto loc_83110CB0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83110cb8
	if (!ctx.cr6.eq) goto loc_83110CB8;
loc_83110CB0:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83110c94
	goto loc_83110C94;
loc_83110CB8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83110cc4
	goto loc_83110CC4;
loc_83110CC0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83110CC4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83110d58
	if (!ctx.cr0.eq) goto loc_83110D58;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r5,r8,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	// rlwinm r11,r31,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0xF;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_83110CE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110d3c
	if (ctx.cr6.eq) goto loc_83110D3C;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r6,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r6.s64;
	// slw r6,r19,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r6.u8 & 0x3F));
	// and. r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83110d1c
	if (ctx.cr0.eq) goto loc_83110D1C;
	// rlwinm r6,r8,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// slw r6,r19,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
loc_83110D1C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83110d3c
	if (!ctx.cr6.lt) goto loc_83110D3C;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x83110ce4
	goto loc_83110CE4;
loc_83110D3C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r24,12(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_83110D48:
	// lwz r31,8(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// beq cr6,0x83110c78
	if (ctx.cr6.eq) goto loc_83110C78;
loc_83110D58:
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83110fb8
	if (!ctx.cr6.eq) goto loc_83110FB8;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_83110D6C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83110d98
	if (ctx.cr6.eq) goto loc_83110D98;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83110d88
	if (ctx.cr6.eq) goto loc_83110D88;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83110d90
	if (!ctx.cr6.eq) goto loc_83110D90;
loc_83110D88:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83110d6c
	goto loc_83110D6C;
loc_83110D90:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83110d9c
	goto loc_83110D9C;
loc_83110D98:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83110D9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83110fb8
	if (!ctx.cr0.eq) goto loc_83110FB8;
	// rlwinm r11,r9,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83110fb8
	if (ctx.cr6.eq) goto loc_83110FB8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r26,r24,44
	ctx.r26.s64 = ctx.r24.s64 + 44;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// std r20,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r20.u64);
loc_83110DCC:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83110e94
	if (!ctx.cr6.lt) goto loc_83110E94;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r30,r19,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83110e84
	if (!ctx.cr0.eq) goto loc_83110E84;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// beq cr6,0x83110e84
	if (ctx.cr6.eq) goto loc_83110E84;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r5,r22,16
	ctx.r5.s64 = ctx.r22.s64 + 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cdcf8
	ctx.lr = 0x83110E28;
	sub_831CDCF8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// rlwinm r10,r10,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwimi r11,r30,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83110e58
	goto loc_83110E58;
loc_83110E50:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_83110E58:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83110e50
	if (!ctx.cr6.eq) goto loc_83110E50;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83110E84:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83110dcc
	goto loc_83110DCC;
loc_83110E94:
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// rlwinm r28,r11,20,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r10.u32);
	// li r29,4
	ctx.r29.s64 = 4;
loc_83110EB0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83110eec
	if (ctx.cr6.eq) goto loc_83110EEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83110eec
	if (ctx.cr6.eq) goto loc_83110EEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831101b8
	ctx.lr = 0x83110ED4;
	sub_831101B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83110eec
	if (ctx.cr0.eq) goto loc_83110EEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831d49f8
	ctx.lr = 0x83110EE8;
	sub_831D49F8(ctx, base);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_83110EEC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83110eb0
	if (!ctx.cr0.eq) goto loc_83110EB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83110538
	ctx.lr = 0x83110F04;
	sub_83110538(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_83110F0C:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r4,r11,13,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83110fb0
	if (!ctx.cr6.lt) goto loc_83110FB0;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_83110F2C:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83110f64
	if (!ctx.cr6.lt) goto loc_83110F64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r31,12(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x83110f58
	if (!ctx.cr6.eq) goto loc_83110F58;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83110F58:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x83110f2c
	goto loc_83110F2C;
loc_83110F64:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r7,r7,36262
	ctx.r7.u64 = ctx.r7.u64 | 36262;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r7,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srd r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r6.u8 & 0x7F));
	// srd r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r6.u8 & 0x7F));
	// srd r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwimi r11,r10,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r7,r11,1,27,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1E) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r7,r11,1,15,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// b 0x83110f0c
	goto loc_83110F0C;
loc_83110FB0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83110a74
	if (!ctx.cr0.eq) goto loc_83110A74;
loc_83110FB8:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83110fd4
	if (!ctx.cr0.eq) goto loc_83110FD4;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83110aa8
	if (!ctx.cr6.eq) goto loc_83110AA8;
loc_83110FD4:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83110a84
	if (ctx.cr0.eq) goto loc_83110A84;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// b 0x83110a88
	goto loc_83110A88;
loc_83110FEC:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
loc_83110FF8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_83110FFC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831d49f8
	ctx.lr = 0x83111004;
	sub_831D49F8(ctx, base);
	// b 0x83110a74
	goto loc_83110A74;
loc_83111008:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831d49f8
	ctx.lr = 0x83111014;
	sub_831D49F8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83111018:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83111058
	if (ctx.cr6.eq) goto loc_83111058;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83111050
	if (ctx.cr6.eq) goto loc_83111050;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83111044
	if (!ctx.cr0.eq) goto loc_83111044;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq 0x83111048
	if (ctx.cr0.eq) goto loc_83111048;
loc_83111044:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83111048:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83110a74
	if (!ctx.cr0.eq) goto loc_83110A74;
loc_83111050:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83111018
	goto loc_83111018;
loc_83111058:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x83110ffc
	goto loc_83110FFC;
loc_83111060:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83111068"))) PPC_WEAK_FUNC(sub_83111068);
PPC_FUNC_IMPL(__imp__sub_83111068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83111070;
	__savegprlr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// li r5,157
	ctx.r5.s64 = 157;
	// bl 0x82ca2c60
	ctx.lr = 0x83111090;
	sub_82CA2C60(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r5,38
	ctx.r5.s64 = 38;
	// bl 0x82ca2c60
	ctx.lr = 0x831110A4;
	sub_82CA2C60(ctx, base);
	// li r5,156
	ctx.r5.s64 = 156;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3920
	ctx.lr = 0x831110B4;
	sub_82CA3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831110d4
	if (ctx.cr0.eq) goto loc_831110D4;
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3920
	ctx.lr = 0x831110CC;
	sub_82CA3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8311119c
	if (!ctx.cr0.eq) goto loc_8311119C;
loc_831110D4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8311119c
	if (!ctx.cr0.eq) goto loc_8311119C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311119c
	if (ctx.cr0.eq) goto loc_8311119C;
loc_831110EC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111180
	if (!ctx.cr0.eq) goto loc_83111180;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x83111174
	goto loc_83111174;
loc_83111100:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8311113c
	if (ctx.cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8311113c
	if (ctx.cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8311113c
	if (ctx.cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8311113c
	if (ctx.cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8311113c
	if (ctx.cr6.eq) goto loc_8311113C;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83111140
	if (!ctx.cr6.eq) goto loc_83111140;
loc_8311113C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83111140:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111164
	if (ctx.cr0.eq) goto loc_83111164;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310ffc0
	ctx.lr = 0x83111154;
	sub_8310FFC0(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x831111d4
	if (ctx.cr6.eq) goto loc_831111D4;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x831111d4
	if (ctx.cr6.eq) goto loc_831111D4;
loc_83111164:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111180
	if (!ctx.cr0.eq) goto loc_83111180;
loc_83111174:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83111100
	if (!ctx.cr0.eq) goto loc_83111100;
loc_83111180:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8311119c
	if (!ctx.cr0.eq) goto loc_8311119C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831110ec
	if (!ctx.cr6.eq) goto loc_831110EC;
loc_8311119C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82ca2c60
	ctx.lr = 0x831111B0;
	sub_82CA2C60(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3920
	ctx.lr = 0x831111C0;
	sub_82CA3920(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831111CC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_831111D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831111cc
	goto loc_831111CC;
}

__attribute__((alias("__imp__sub_831111DC"))) PPC_WEAK_FUNC(sub_831111DC);
PPC_FUNC_IMPL(__imp__sub_831111DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831111E0"))) PPC_WEAK_FUNC(sub_831111E0);
PPC_FUNC_IMPL(__imp__sub_831111E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831111E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831112d4
	if (ctx.cr6.eq) goto loc_831112D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830fd5a8
	ctx.lr = 0x83111214;
	sub_830FD5A8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x831112d4
	if (ctx.cr0.eq) goto loc_831112D4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fd30
	ctx.lr = 0x8311122C;
	sub_8310FD30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831112d4
	if (ctx.cr0.eq) goto loc_831112D4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi. r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8311124c
	if (!ctx.cr0.eq) goto loc_8311124C;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x83111258
	goto loc_83111258;
loc_8311124C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fd98
	ctx.lr = 0x83111254;
	sub_8310FD98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83111258:
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831112b4
	if (!ctx.cr0.eq) goto loc_831112B4;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r10,-40
	ctx.xer.ca = ctx.r10.u32 > 39;
	ctx.r31.s64 = ctx.r10.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x831112b4
	if (ctx.cr0.eq) goto loc_831112B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14976
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14976, ctx.xer);
	// bne cr6,0x831112b4
	if (!ctx.cr6.eq) goto loc_831112B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fc68
	ctx.lr = 0x8311129C;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831112B4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f7050
	ctx.lr = 0x831112D4;
	sub_830F7050(ctx, base);
loc_831112D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831112DC"))) PPC_WEAK_FUNC(sub_831112DC);
PPC_FUNC_IMPL(__imp__sub_831112DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831112E0"))) PPC_WEAK_FUNC(sub_831112E0);
PPC_FUNC_IMPL(__imp__sub_831112E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831112E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x831113b0
	if (!ctx.cr6.lt) goto loc_831113B0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x83111350
	if (ctx.cr6.eq) goto loc_83111350;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// bne cr6,0x83111344
	if (!ctx.cr6.eq) goto loc_83111344;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// bl 0x8310fc68
	ctx.lr = 0x83111330;
	sub_8310FC68(ctx, base);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x83111350
	if (ctx.cr6.eq) goto loc_83111350;
loc_83111344:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd318
	ctx.lr = 0x83111350;
	sub_830FD318(ctx, base);
loc_83111350:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r28,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82b97200
	ctx.lr = 0x8311138C;
	sub_82B97200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831111e0
	ctx.lr = 0x831113A8;
	sub_831111E0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_831113B0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831113BC"))) PPC_WEAK_FUNC(sub_831113BC);
PPC_FUNC_IMPL(__imp__sub_831113BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831113C0"))) PPC_WEAK_FUNC(sub_831113C0);
PPC_FUNC_IMPL(__imp__sub_831113C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831113C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r10.u32);
loc_831113E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831113e4
	if (!ctx.cr6.eq) goto loc_831113E4;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83111448
	if (!ctx.cr6.eq) goto loc_83111448;
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4d88
	ctx.lr = 0x8311141C;
	sub_821F4D88(ctx, base);
	// stw r3,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83111434
	if (!ctx.cr0.eq) goto loc_83111434;
loc_83111428:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83111564
	goto loc_83111564;
loc_83111434:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83111440;
	sub_82CA2C60(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x831114b0
	goto loc_831114B0;
loc_83111448:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8311144C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8311144c
	if (!ctx.cr6.eq) goto loc_8311144C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r27,r29,r28
	ctx.r27.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 1;
	// bl 0x821f4d88
	ctx.lr = 0x83111478;
	sub_821F4D88(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83111428
	if (ctx.cr0.eq) goto loc_83111428;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83111490;
	sub_82CA2C60(ctx, base);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x831114A0;
	sub_82CA2C60(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x821f5f18
	ctx.lr = 0x831114AC;
	sub_821F5F18(ctx, base);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
loc_831114B0:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x82ca3980
	ctx.lr = 0x831114BC;
	sub_82CA3980(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x831114d4
	if (!ctx.cr0.eq) goto loc_831114D4;
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// b 0x83111560
	goto loc_83111560;
loc_831114D4:
	// lwz r10,784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83111510
	if (ctx.cr0.eq) goto loc_83111510;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x821f4d88
	ctx.lr = 0x831114F8;
	sub_821F4D88(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83111428
	if (ctx.cr0.eq) goto loc_83111428;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83111510;
	sub_82CA2C60(ctx, base);
loc_83111510:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,784(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r29.u32);
	// bl 0x83111068
	ctx.lr = 0x8311152C;
	sub_83111068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111544
	if (ctx.cr0.eq) goto loc_83111544;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// b 0x83111554
	goto loc_83111554;
loc_83111544:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-21148
	ctx.r3.s64 = ctx.r11.s64 + -21148;
	// bl 0x82ca2a78
	ctx.lr = 0x83111554;
	sub_82CA2A78(ctx, base);
loc_83111554:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f5f18
	ctx.lr = 0x83111560;
	sub_821F5F18(ctx, base);
loc_83111560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83111564:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311156C"))) PPC_WEAK_FUNC(sub_8311156C);
PPC_FUNC_IMPL(__imp__sub_8311156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83111570"))) PPC_WEAK_FUNC(sub_83111570);
PPC_FUNC_IMPL(__imp__sub_83111570) {
	PPC_FUNC_PROLOGUE();
	// b 0x831113c0
	sub_831113C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83111574"))) PPC_WEAK_FUNC(sub_83111574);
PPC_FUNC_IMPL(__imp__sub_83111574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83111578"))) PPC_WEAK_FUNC(sub_83111578);
PPC_FUNC_IMPL(__imp__sub_83111578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83111580;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83110128
	ctx.lr = 0x83111598;
	sub_83110128(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = ctx.r28.u64 | 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_831115B0:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111634
	if (!ctx.cr0.eq) goto loc_83111634;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83111634
	if (ctx.cr0.eq) goto loc_83111634;
loc_831115D0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x831115ec
	if (ctx.cr6.lt) goto loc_831115EC;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x831115f0
	if (!ctx.cr6.gt) goto loc_831115F0;
loc_831115EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831115F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831117ec
	if (!ctx.cr0.eq) goto loc_831117EC;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8311160c
	if (ctx.cr6.lt) goto loc_8311160C;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83111610
	if (!ctx.cr6.gt) goto loc_83111610;
loc_8311160C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83111610:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831117ec
	if (!ctx.cr0.eq) goto loc_831117EC;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111634
	if (!ctx.cr0.eq) goto loc_83111634;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831115d0
	if (!ctx.cr6.eq) goto loc_831115D0;
loc_83111634:
	// lwz r30,12(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83111650
	if (ctx.cr6.eq) goto loc_83111650;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83111654
	if (ctx.cr6.eq) goto loc_83111654;
loc_83111650:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83111654:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311166c
	if (ctx.cr0.eq) goto loc_8311166C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83111770
	if (ctx.cr6.eq) goto loc_83111770;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x83111768
	goto loc_83111768;
loc_8311166C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111754
	if (!ctx.cr0.eq) goto loc_83111754;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83111754
	if (ctx.cr0.eq) goto loc_83111754;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x831116a4
	if (ctx.cr6.eq) goto loc_831116A4;
	// cmplwi cr6,r10,87
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x831116a8
	if (!ctx.cr6.eq) goto loc_831116A8;
loc_831116A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831116A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111754
	if (ctx.cr0.eq) goto loc_83111754;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x831116C8;
	sub_8310FC68(ctx, base);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r31,28(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
loc_831116DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831116f8
	if (ctx.cr6.eq) goto loc_831116F8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x831116fc
	if (!ctx.cr6.eq) goto loc_831116FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831116dc
	goto loc_831116DC;
loc_831116F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831116FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311172c
	if (!ctx.cr0.eq) goto loc_8311172C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8311172c
	if (ctx.cr0.eq) goto loc_8311172C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83111738
	if (!ctx.cr6.gt) goto loc_83111738;
loc_8311172C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83172038
	ctx.lr = 0x83111738;
	sub_83172038(ctx, base);
loc_83111738:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// b 0x83111768
	goto loc_83111768;
loc_83111754:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111770
	if (!ctx.cr0.eq) goto loc_83111770;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83111768:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831115b0
	if (!ctx.cr6.eq) goto loc_831115B0;
loc_83111770:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831117e8
	if (!ctx.cr0.eq) goto loc_831117E8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831117e8
	if (ctx.cr0.eq) goto loc_831117E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x831115b0
	if (!ctx.cr0.eq) goto loc_831115B0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830fd2b8
	ctx.lr = 0x831117E4;
	sub_830FD2B8(ctx, base);
	// b 0x831115b0
	goto loc_831115B0;
loc_831117E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831117EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831117F4"))) PPC_WEAK_FUNC(sub_831117F4);
PPC_FUNC_IMPL(__imp__sub_831117F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831117F8"))) PPC_WEAK_FUNC(sub_831117F8);
PPC_FUNC_IMPL(__imp__sub_831117F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83111800;
	__savegprlr_14(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r14,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r14.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r25,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r25.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// li r15,1
	ctx.r15.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8311183c
	if (ctx.cr0.eq) goto loc_8311183C;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x83111840
	if (ctx.cr0.eq) goto loc_83111840;
loc_8311183C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83111840:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111874
	if (ctx.cr0.eq) goto loc_83111874;
	// li r4,192
	ctx.r4.s64 = 192;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x83111858
	if (ctx.cr6.eq) goto loc_83111858;
	// li r4,193
	ctx.r4.s64 = 193;
loc_83111858:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b96d50
	ctx.lr = 0x83111860;
	sub_82B96D50(ctx, base);
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83111874
	if (ctx.cr6.eq) goto loc_83111874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830f1aa0
	ctx.lr = 0x83111874;
	sub_830F1AA0(ctx, base);
loc_83111874:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83111884
	if (ctx.cr0.eq) goto loc_83111884;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83111884:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111950
	if (!ctx.cr0.eq) goto loc_83111950;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83111950
	if (ctx.cr0.eq) goto loc_83111950;
loc_8311189C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x83111934
	if (!ctx.cr6.eq) goto loc_83111934;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83111934
	if (ctx.cr6.eq) goto loc_83111934;
	// rlwinm. r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq 0x831118f4
	if (ctx.cr0.eq) goto loc_831118F4;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831118D4:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x831118d4
	if (!ctx.cr0.eq) goto loc_831118D4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x83111920
	if (!ctx.cr6.lt) goto loc_83111920;
loc_831118F4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83111920
	if (ctx.cr6.eq) goto loc_83111920;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83111914:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83111914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83111914;
loc_83111920:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// rlwinm r4,r11,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// bl 0x82b96f48
	ctx.lr = 0x83111934;
	sub_82B96F48(ctx, base);
loc_83111934:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111950
	if (!ctx.cr0.eq) goto loc_83111950;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311189c
	if (!ctx.cr6.eq) goto loc_8311189C;
loc_83111950:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// lis r22,-1
	ctx.r22.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x831119c0
	if (ctx.cr6.eq) goto loc_831119C0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x831119c0
	if (!ctx.cr6.eq) goto loc_831119C0;
	// lwz r11,336(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 336);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831119c0
	if (!ctx.cr6.gt) goto loc_831119C0;
	// addi r31,r16,124
	ctx.r31.s64 = ctx.r16.s64 + 124;
loc_83111980:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x831119ac
	if (ctx.cr6.gt) goto loc_831119AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// rlwinm r11,r10,27,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xF;
	// rlwinm r10,r10,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82b97038
	ctx.lr = 0x831119AC;
	sub_82B97038(ctx, base);
loc_831119AC:
	// lwz r11,336(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 336);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83111980
	if (ctx.cr6.lt) goto loc_83111980;
loc_831119C0:
	// lwz r11,536(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 536);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83111b08
	if (!ctx.cr6.gt) goto loc_83111B08;
	// addi r30,r16,348
	ctx.r30.s64 = ctx.r16.s64 + 348;
loc_831119DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83111a10
	if (ctx.cr0.eq) goto loc_83111A10;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111af4
	if (ctx.cr0.eq) goto loc_83111AF4;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x83111a00
	if (!ctx.cr6.eq) goto loc_83111A00;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x83111af4
	goto loc_83111AF4;
loc_83111A00:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bge cr6,0x83111af4
	if (!ctx.cr6.lt) goto loc_83111AF4;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// b 0x83111af4
	goto loc_83111AF4;
loc_83111A10:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14720
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14720, ctx.xer);
	// beq cr6,0x83111af4
	if (ctx.cr6.eq) goto loc_83111AF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83111A28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83111af4
	if (ctx.cr6.eq) goto loc_83111AF4;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83111a48
	if (ctx.cr6.eq) goto loc_83111A48;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83111a50
	if (!ctx.cr0.eq) goto loc_83111A50;
loc_83111A48:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83111a28
	goto loc_83111A28;
loc_83111A50:
	// lwz r9,48(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83111aa4
	if (!ctx.cr6.eq) goto loc_83111AA4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r10,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// rlwinm r31,r11,15,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// rlwimi r10,r9,31,17,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0x6000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r11,r9,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF0;
	// rlwinm r10,r10,27,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3FF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82b97038
	ctx.lr = 0x83111A94;
	sub_82B97038(ctx, base);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x83111af4
	if (!ctx.cr6.gt) goto loc_83111AF4;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x83111af4
	goto loc_83111AF4;
loc_83111AA4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r8,r9,28,11,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x1FE000) | (ctx.r8.u64 & 0xFFFFFFFFFFE01FFF);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// rlwinm r10,r8,23,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0xFFF;
	// bne cr6,0x83111ac8
	if (!ctx.cr6.eq) goto loc_83111AC8;
	// li r11,9
	ctx.r11.s64 = 9;
loc_83111AC8:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwimi r8,r9,31,17,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0x6000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r10,r8,27,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FF;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82b970d0
	ctx.lr = 0x83111AF4;
	sub_82B970D0(ctx, base);
loc_83111AF4:
	// lwz r11,536(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 536);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831119dc
	if (ctx.cr6.lt) goto loc_831119DC;
loc_83111B08:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x83111b3c
	if (ctx.cr6.eq) goto loc_83111B3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83111578
	ctx.lr = 0x83111B28;
	sub_83111578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r6,4(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x83110268
	ctx.lr = 0x83111B3C;
	sub_83110268(ctx, base);
loc_83111B3C:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83111b4c
	if (ctx.cr0.eq) goto loc_83111B4C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83111B4C:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831106b8
	ctx.lr = 0x83111B58;
	sub_831106B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83111bac
	if (ctx.cr6.eq) goto loc_83111BAC;
loc_83111B68:
	// cmplw cr6,r31,r14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x83111b7c
	if (ctx.cr6.eq) goto loc_83111B7C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111bac
	if (!ctx.cr0.eq) goto loc_83111BAC;
loc_83111B7C:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831106b8
	ctx.lr = 0x83111B88;
	sub_831106B8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x83111b94
	if (!ctx.cr6.gt) goto loc_83111B94;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83111B94:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111bac
	if (!ctx.cr0.eq) goto loc_83111BAC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83111b68
	if (!ctx.cr6.eq) goto loc_83111B68;
loc_83111BAC:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x83111bd0
	if (ctx.cr6.eq) goto loc_83111BD0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83111bf0
	goto loc_83111BF0;
loc_83111BD0:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83111be0
	if (!ctx.cr6.gt) goto loc_83111BE0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83111BE0:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83111BF0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82b96d88
	ctx.lr = 0x83111C08;
	sub_82B96D88(ctx, base);
	// li r20,-1
	ctx.r20.s64 = -1;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// lwz r17,8(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r18,12(r25)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r21,16(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// beq cr6,0x8311288c
	if (ctx.cr6.eq) goto loc_8311288C;
loc_83111C3C:
	// cmplw cr6,r26,r14
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x83111c50
	if (ctx.cr6.eq) goto loc_83111C50;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311288c
	if (!ctx.cr0.eq) goto loc_8311288C;
loc_83111C50:
	// lwz r31,20(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111ca8
	if (!ctx.cr0.eq) goto loc_83111CA8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83111ca8
	if (ctx.cr0.eq) goto loc_83111CA8;
loc_83111C64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x83111c90
	if (!ctx.cr6.eq) goto loc_83111C90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83111c90
	if (ctx.cr6.eq) goto loc_83111C90;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831128a8
	if (ctx.cr0.eq) goto loc_831128A8;
loc_83111C90:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111ca8
	if (!ctx.cr0.eq) goto loc_83111CA8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83111c64
	if (!ctx.cr6.eq) goto loc_83111C64;
loc_83111CA8:
	// lwz r31,28(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112870
	if (!ctx.cr0.eq) goto loc_83112870;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83112870
	if (ctx.cr0.eq) goto loc_83112870;
loc_83111CBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83111ce8
	if (ctx.cr6.lt) goto loc_83111CE8;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// ble cr6,0x83111cec
	if (!ctx.cr6.gt) goto loc_83111CEC;
loc_83111CE8:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
loc_83111CEC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83112064
	if (ctx.cr0.eq) goto loc_83112064;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111d64
	if (ctx.cr0.eq) goto loc_83111D64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310fa10
	ctx.lr = 0x83111D08;
	sub_8310FA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111d64
	if (ctx.cr0.eq) goto loc_83111D64;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83111d4c
	if (ctx.cr0.eq) goto loc_83111D4C;
	// b 0x83111d30
	goto loc_83111D30;
loc_83111D24:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83111d3c
	if (ctx.cr0.eq) goto loc_83111D3C;
loc_83111D30:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83111d24
	if (!ctx.cr6.eq) goto loc_83111D24;
loc_83111D3C:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111d30
	if (!ctx.cr0.eq) goto loc_83111D30;
	// stw r11,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
loc_83111D4C:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111d64
	if (ctx.cr0.eq) goto loc_83111D64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83111D64;
	sub_82B97300(ctx, base);
loc_83111D64:
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// bl 0x831d26d0
	ctx.lr = 0x83111D80;
	sub_831D26D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831105b8
	ctx.lr = 0x83111D88;
	sub_831105B8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x83111da4
	if (ctx.cr0.eq) goto loc_83111DA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d26d0
	ctx.lr = 0x83111DA0;
	sub_831D26D0(ctx, base);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_83111DA4:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111f2c
	if (ctx.cr0.eq) goto loc_83111F2C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111dc4
	if (!ctx.cr0.eq) goto loc_83111DC4;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83111dec
	goto loc_83111DEC;
loc_83111DC4:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x83111de4
	if (ctx.cr6.eq) goto loc_83111DE4;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x83111de4
	if (ctx.cr6.eq) goto loc_83111DE4;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x83111de8
	if (!ctx.cr6.eq) goto loc_83111DE8;
loc_83111DE4:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_83111DE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83111DEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111e40
	if (!ctx.cr0.eq) goto loc_83111E40;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83111f2c
	if (ctx.cr6.eq) goto loc_83111F2C;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83111e10
	if (!ctx.cr0.eq) goto loc_83111E10;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83111e38
	goto loc_83111E38;
loc_83111E10:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x83111e30
	if (ctx.cr6.eq) goto loc_83111E30;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x83111e30
	if (ctx.cr6.eq) goto loc_83111E30;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x83111e34
	if (!ctx.cr6.eq) goto loc_83111E34;
loc_83111E30:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_83111E34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83111E38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83111f2c
	if (ctx.cr0.eq) goto loc_83111F2C;
loc_83111E40:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97418
	ctx.lr = 0x83111E48;
	sub_82B97418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x83111ee0
	if (ctx.cr6.eq) goto loc_83111EE0;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83111ee0
	if (!ctx.cr0.eq) goto loc_83111EE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83111E68;
	sub_82B97430(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x83111ed4
	if (!ctx.cr6.eq) goto loc_83111ED4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x83111ed4
	if (ctx.cr6.eq) goto loc_83111ED4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83111ed4
	if (ctx.cr6.eq) goto loc_83111ED4;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82b97460
	ctx.lr = 0x83111EAC;
	sub_82B97460(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83111ed8
	if (ctx.cr6.eq) goto loc_83111ED8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,20480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20480, ctx.xer);
	// bne cr6,0x83111ee0
	if (!ctx.cr6.eq) goto loc_83111EE0;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83111ED0;
	sub_82B97300(ctx, base);
	// b 0x83111ee0
	goto loc_83111EE0;
loc_83111ED4:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_83111ED8:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x83111f2c
	if (!ctx.cr6.eq) goto loc_83111F2C;
loc_83111EE0:
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r15,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x82b97200
	ctx.lr = 0x83111F14;
	sub_82B97200(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831111e0
	ctx.lr = 0x83111F2C;
	sub_831111E0(ctx, base);
loc_83111F2C:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97200
	ctx.lr = 0x83111F38;
	sub_82B97200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831111e0
	ctx.lr = 0x83111F54;
	sub_831111E0(ctx, base);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// bl 0x82b97478
	ctx.lr = 0x83111F60;
	sub_82B97478(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// rlwinm r29,r10,12,17,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7000;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97418
	ctx.lr = 0x83111F7C;
	sub_82B97418(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x83111fd4
	if (ctx.cr6.eq) goto loc_83111FD4;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r10,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
loc_83111FD4:
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112744
	if (ctx.cr0.eq) goto loc_83112744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310fa10
	ctx.lr = 0x83111FEC;
	sub_8310FA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112744
	if (ctx.cr0.eq) goto loc_83112744;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112030
	if (ctx.cr0.eq) goto loc_83112030;
	// b 0x83112014
	goto loc_83112014;
loc_83112008:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112020
	if (ctx.cr0.eq) goto loc_83112020;
loc_83112014:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83112008
	if (!ctx.cr6.eq) goto loc_83112008;
loc_83112020:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112014
	if (!ctx.cr0.eq) goto loc_83112014;
	// stw r11,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
loc_83112030:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112744
	if (ctx.cr0.eq) goto loc_83112744;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112054
	if (ctx.cr0.eq) goto loc_83112054;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83112054:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112744
	if (ctx.cr0.eq) goto loc_83112744;
	// b 0x83112714
	goto loc_83112714;
loc_83112064:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x83112078
	if (ctx.cr6.lt) goto loc_83112078;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// ble cr6,0x8311207c
	if (!ctx.cr6.gt) goto loc_8311207C;
loc_83112078:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
loc_8311207C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831122e8
	if (ctx.cr0.eq) goto loc_831122E8;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// bne cr6,0x83112094
	if (!ctx.cr6.eq) goto loc_83112094;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112858
	if (ctx.cr0.eq) goto loc_83112858;
loc_83112094:
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x831120f0
	if (!ctx.cr6.eq) goto loc_831120F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x831120B0;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x831120f0
	if (ctx.cr6.eq) goto loc_831120F0;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// stw r19,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r19.u32);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82b96ec8
	ctx.lr = 0x831120F0;
	sub_82B96EC8(ctx, base);
loc_831120F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x8311213c
	if (!ctx.cr6.eq) goto loc_8311213C;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x83112130
	if (ctx.cr6.eq) goto loc_83112130;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwimi r11,r15,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// b 0x83112194
	goto loc_83112194;
loc_83112130:
	// bl 0x82b97300
	ctx.lr = 0x83112134;
	sub_82B97300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831121b4
	goto loc_831121B4;
loc_8311213C:
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// bl 0x831cd830
	ctx.lr = 0x83112154;
	sub_831CD830(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311218c
	if (ctx.cr0.eq) goto loc_8311218C;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83112164;
	sub_82B97300(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x83112180;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// stwx r30,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u32);
loc_8311218C:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
loc_83112194:
	// bl 0x82b97218
	ctx.lr = 0x83112198;
	sub_82B97218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831111e0
	ctx.lr = 0x831121B4;
	sub_831111E0(ctx, base);
loc_831121B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r30,20
	ctx.r10.u64 = ctx.r30.u32 & 0xFFF;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r9,r9,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r8,10624
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10624, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x83112744
	if (!ctx.cr6.eq) goto loc_83112744;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83112744
	if (!ctx.cr6.eq) goto loc_83112744;
	// lbz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x83112274
	goto loc_83112274;
loc_8311220C:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8311290c
	if (!ctx.cr0.eq) goto loc_8311290C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311290c
	if (ctx.cr0.eq) goto loc_8311290C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,16128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16128, ctx.xer);
	// bne cr6,0x8311290c
	if (!ctx.cr6.eq) goto loc_8311290C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r8,r11,20
	ctx.r8.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83112280
	if (ctx.cr6.lt) goto loc_83112280;
	// rlwinm. r11,r11,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112284
	if (!ctx.cr0.eq) goto loc_83112284;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112284
	if (!ctx.cr0.eq) goto loc_83112284;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112284
	if (!ctx.cr0.eq) goto loc_83112284;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r10.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112284
	if (ctx.cr0.eq) goto loc_83112284;
	// lbz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
loc_83112274:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311220c
	if (ctx.cr0.eq) goto loc_8311220C;
	// b 0x83112284
	goto loc_83112284;
loc_83112280:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
loc_83112284:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112744
	if (ctx.cr0.eq) goto loc_83112744;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// clrlwi r11,r11,6
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFF;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// oris r11,r11,51200
	ctx.r11.u64 = ctx.r11.u64 | 3355443200;
	// rlwimi r10,r15,25,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r15.u32, 25) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x82b97200
	ctx.lr = 0x831122C0;
	sub_82B97200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831111e0
	ctx.lr = 0x831122DC;
	sub_831111E0(ctx, base);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x83112744
	goto loc_83112744;
loc_831122E8:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x831122fc
	if (ctx.cr6.lt) goto loc_831122FC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// ble cr6,0x83112300
	if (!ctx.cr6.gt) goto loc_83112300;
loc_831122FC:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
loc_83112300:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83112504
	if (ctx.cr0.eq) goto loc_83112504;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83112484
	if (!ctx.cr6.eq) goto loc_83112484;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// bl 0x831cc0e0
	ctx.lr = 0x8311232C;
	sub_831CC0E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r29,r11,13,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r30,r11,25,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8310fc68
	ctx.lr = 0x8311234C;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r11,15(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8311237c
	if (ctx.cr6.eq) goto loc_8311237C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// rlwinm r6,r11,16,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82b971e8
	ctx.lr = 0x83112378;
	sub_82B971E8(ctx, base);
	// b 0x831124a4
	goto loc_831124A4;
loc_8311237C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311246c
	if (!ctx.cr0.eq) goto loc_8311246C;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 96, ctx.xer);
	// bne cr6,0x83112398
	if (!ctx.cr6.eq) goto loc_83112398;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bgt cr6,0x8311239c
	if (ctx.cr6.gt) goto loc_8311239C;
loc_83112398:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8311239C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311246c
	if (ctx.cr0.eq) goto loc_8311246C;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97418
	ctx.lr = 0x831123AC;
	sub_82B97418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x83112464
	if (ctx.cr6.eq) goto loc_83112464;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112428
	if (!ctx.cr0.eq) goto loc_83112428;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83112428
	if (ctx.cr6.eq) goto loc_83112428;
loc_831123D8:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,12288
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12288, ctx.xer);
	// bne cr6,0x831123f4
	if (!ctx.cr6.eq) goto loc_831123F4;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x831123f8
	if (ctx.cr0.eq) goto loc_831123F8;
loc_831123F4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_831123F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112420
	if (ctx.cr0.eq) goto loc_83112420;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112420
	if (!ctx.cr0.eq) goto loc_83112420;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831123d8
	if (!ctx.cr6.eq) goto loc_831123D8;
loc_83112420:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bgt cr6,0x83112918
	if (ctx.cr6.gt) goto loc_83112918;
loc_83112428:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83112434;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x83112458
	if (!ctx.cr6.eq) goto loc_83112458;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8311245c
	if (!ctx.cr6.gt) goto loc_8311245C;
loc_83112458:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_8311245C:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8311246c
	if (!ctx.cr6.eq) goto loc_8311246C;
loc_83112464:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97398
	ctx.lr = 0x8311246C;
	sub_82B97398(ctx, base);
loc_8311246C:
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82b97188
	ctx.lr = 0x83112480;
	sub_82B97188(ctx, base);
	// b 0x831124a4
	goto loc_831124A4;
loc_83112484:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// bl 0x831cc418
	ctx.lr = 0x83112498;
	sub_831CC418(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97130
	ctx.lr = 0x831124A4;
	sub_82B97130(ctx, base);
loc_831124A4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831111e0
	ctx.lr = 0x831124C0;
	sub_831111E0(ctx, base);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// bl 0x82b97478
	ctx.lr = 0x831124D0;
	sub_82B97478(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r3,-1
	ctx.r29.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97418
	ctx.lr = 0x831124E8;
	sub_82B97418(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r3,r29,12,17,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x7000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF8FFF);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
loc_831124F8:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x83112744
	goto loc_83112744;
loc_83112504:
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// bne cr6,0x831125b4
	if (!ctx.cr6.eq) goto loc_831125B4;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112520
	if (ctx.cr0.eq) goto loc_83112520;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83112520:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112548
	if (ctx.cr0.eq) goto loc_83112548;
	// bl 0x82b97300
	ctx.lr = 0x83112534;
	sub_82B97300(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// b 0x831124f8
	goto loc_831124F8;
loc_83112548:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// bl 0x82b97418
	ctx.lr = 0x83112550;
	sub_82B97418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x831125a0
	if (ctx.cr6.eq) goto loc_831125A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83112568;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x831125a0
	if (!ctx.cr6.eq) goto loc_831125A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r11,20,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// bne cr6,0x831125a0
	if (!ctx.cr6.eq) goto loc_831125A0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831125A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r29,r28,12,17,19
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x7000) | (ctx.r29.u64 & 0xFFFFFFFFFFFF8FFF);
	// rlwimi r29,r11,0,0,16
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFF8000) | (ctx.r29.u64 & 0xFFFFFFFF00007FFF);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// b 0x83112744
	goto loc_83112744;
loc_831125B4:
	// cmplwi cr6,r10,106
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 106, ctx.xer);
	// bne cr6,0x83112724
	if (!ctx.cr6.eq) goto loc_83112724;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831125C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831125dc
	if (ctx.cr6.eq) goto loc_831125DC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831125dc
	if (!ctx.cr0.eq) goto loc_831125DC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x831125c0
	goto loc_831125C0;
loc_831125DC:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// rlwimi r11,r10,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r30,r11,31,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// std r19,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r19.u64);
	// stw r19,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r19.u32);
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r29,r30,12,16,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xF000;
	// rlwinm r11,r30,28,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3F;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r8,r8,6
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// rlwimi r10,r15,25,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r15.u32, 25) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// rlwinm r8,r8,0,24,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r8,r8,0,12,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x82b97200
	ctx.lr = 0x83112654;
	sub_82B97200(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831111e0
	ctx.lr = 0x8311266C;
	sub_831111E0(ctx, base);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83112674;
	sub_82B97300(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83110128
	ctx.lr = 0x83112688;
	sub_83110128(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r30,28,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3F;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// stw r19,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r19.u32);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r15,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,9216
	ctx.r10.u64 = ctx.r10.u64 | 603979776;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x82b97200
	ctx.lr = 0x831126F4;
	sub_82B97200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831111e0
	ctx.lr = 0x83112710;
	sub_831111E0(ctx, base);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
loc_83112714:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x8311271C;
	sub_82B97300(ctx, base);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// b 0x83112744
	goto loc_83112744;
loc_83112724:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83112738
	if (ctx.cr6.lt) goto loc_83112738;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// ble cr6,0x8311273c
	if (!ctx.cr6.gt) goto loc_8311273C;
loc_83112738:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8311273C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112924
	if (!ctx.cr0.eq) goto loc_83112924;
loc_83112744:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x831127cc
	if (ctx.cr6.eq) goto loc_831127CC;
loc_8311274C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83112760
	if (ctx.cr6.eq) goto loc_83112760;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831127cc
	if (!ctx.cr6.eq) goto loc_831127CC;
loc_83112760:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831112e0
	ctx.lr = 0x83112778;
	sub_831112E0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83112790
	if (ctx.cr6.eq) goto loc_83112790;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8311274c
	if (!ctx.cr6.eq) goto loc_8311274C;
loc_83112790:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r30.u32);
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
	// addi r17,r17,12
	ctx.r17.s64 = ctx.r17.s64 + 12;
	// lwz r10,740(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r11,736(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 736);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8311274c
	if (ctx.cr6.lt) goto loc_8311274C;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
loc_831127CC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x83112854
	if (ctx.cr6.eq) goto loc_83112854;
loc_831127D4:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831127e8
	if (ctx.cr6.eq) goto loc_831127E8;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83112854
	if (!ctx.cr6.eq) goto loc_83112854;
loc_831127E8:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831112e0
	ctx.lr = 0x83112800;
	sub_831112E0(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83112818
	if (ctx.cr6.eq) goto loc_83112818;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831127d4
	if (!ctx.cr6.eq) goto loc_831127D4;
loc_83112818:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r30.u32);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r11.u32);
	// addi r18,r18,12
	ctx.r18.s64 = ctx.r18.s64 + 12;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// lwz r11,764(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 764);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// lwz r11,760(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 760);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831127d4
	if (ctx.cr6.lt) goto loc_831127D4;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
loc_83112854:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_83112858:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112870
	if (!ctx.cr0.eq) goto loc_83112870;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83111cbc
	if (!ctx.cr6.eq) goto loc_83111CBC;
loc_83112870:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831128a0
	if (!ctx.cr0.eq) goto loc_831128A0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83111c3c
	if (!ctx.cr6.eq) goto loc_83111C3C;
loc_8311288C:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83112938
	if (ctx.cr6.eq) goto loc_83112938;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x831129d0
	goto loc_831129D0;
loc_831128A0:
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// b 0x8311288c
	goto loc_8311288C;
loc_831128A8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x831128BC;
	sub_8310FC68(ctx, base);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r4,40
	ctx.r10.s64 = ctx.r4.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831128f8
	if (ctx.cr0.eq) goto loc_831128F8;
	// bl 0x831959b0
	ctx.lr = 0x831128E8;
	sub_831959B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3507
	ctx.r4.s64 = 3507;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x831128F8;
	sub_830FD318(ctx, base);
loc_831128F8:
	// bl 0x831959b0
	ctx.lr = 0x831128FC;
	sub_831959B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3527
	ctx.r4.s64 = 3527;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x8311290C;
	sub_830FD318(ctx, base);
loc_8311290C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83112918;
	sub_830FD318(ctx, base);
loc_83112918:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83112924;
	sub_830FD318(ctx, base);
loc_83112924:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,400
	ctx.r5.s64 = ctx.r11.s64 + 400;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83112938;
	sub_830FD318(ctx, base);
loc_83112938:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831129dc
	if (!ctx.cr0.eq) goto loc_831129DC;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
loc_83112948:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83112950:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq 0x83112a04
	if (ctx.cr0.eq) goto loc_83112A04;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831129c4
	if (!ctx.cr0.eq) goto loc_831129C4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x831129b8
	goto loc_831129B8;
loc_83112970:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310fa68
	ctx.lr = 0x83112978;
	sub_8310FA68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831129a8
	if (ctx.cr0.eq) goto loc_831129A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8311299c
	if (ctx.cr6.lt) goto loc_8311299C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// ble cr6,0x831129a0
	if (!ctx.cr6.gt) goto loc_831129A0;
loc_8311299C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_831129A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831129e4
	if (!ctx.cr0.eq) goto loc_831129E4;
loc_831129A8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831129c4
	if (!ctx.cr0.eq) goto loc_831129C4;
loc_831129B8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83112970
	if (!ctx.cr0.eq) goto loc_83112970;
loc_831129C4:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x831129dc
	if (ctx.cr6.eq) goto loc_831129DC;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_831129D0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112948
	if (ctx.cr0.eq) goto loc_83112948;
loc_831129DC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83112950
	goto loc_83112950;
loc_831129E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// clrlwi r4,r11,20
	ctx.r4.u64 = ctx.r11.u32 & 0xFFF;
	// bl 0x82b97430
	ctx.lr = 0x831129F4;
	sub_82B97430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83112A04:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83112A0C;
	sub_82B97300(ctx, base);
	// lwz r6,808(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 808);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x83112a28
	if (ctx.cr6.eq) goto loc_83112A28;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x83112a40
	goto loc_83112A40;
loc_83112A28:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2046
	ctx.r11.s64 = ctx.r11.s64 + 2046;
loc_83112A40:
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83112a68
	if (!ctx.cr6.gt) goto loc_83112A68;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// beq cr6,0x83112a60
	if (ctx.cr6.eq) goto loc_83112A60;
	// li r4,3617
	ctx.r4.s64 = 3617;
	// bl 0x830fd318
	ctx.lr = 0x83112A60;
	sub_830FD318(ctx, base);
loc_83112A60:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// bl 0x830fd318
	ctx.lr = 0x83112A68;
	sub_830FD318(ctx, base);
loc_83112A68:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83112ab0
	if (ctx.cr6.eq) goto loc_83112AB0;
loc_83112A74:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83112A80;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83112a74
	if (!ctx.cr6.eq) goto loc_83112A74;
loc_83112AB0:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112bb8
	if (ctx.cr0.eq) goto loc_83112BB8;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83113520
	if (ctx.cr6.eq) goto loc_83113520;
loc_83112AC4:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x83112ad8
	if (ctx.cr6.eq) goto loc_83112AD8;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112bb8
	if (!ctx.cr0.eq) goto loc_83112BB8;
loc_83112AD8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112b9c
	if (!ctx.cr0.eq) goto loc_83112B9C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83112b9c
	if (ctx.cr0.eq) goto loc_83112B9C;
loc_83112AF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x83112b24
	if (ctx.cr6.eq) goto loc_83112B24;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x83112b24
	if (ctx.cr6.eq) goto loc_83112B24;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x83112b24
	if (ctx.cr6.eq) goto loc_83112B24;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x83112b24
	if (ctx.cr6.eq) goto loc_83112B24;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x83112b28
	if (!ctx.cr6.eq) goto loc_83112B28;
loc_83112B24:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_83112B28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112b80
	if (ctx.cr0.eq) goto loc_83112B80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8310fc68
	ctx.lr = 0x83112B48;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwz r10,768(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82b97430
	ctx.lr = 0x83112B60;
	sub_82B97430(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83112B80:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112b9c
	if (!ctx.cr0.eq) goto loc_83112B9C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83112af0
	if (!ctx.cr6.eq) goto loc_83112AF0;
loc_83112B9C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112bb8
	if (!ctx.cr0.eq) goto loc_83112BB8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83112ac4
	if (!ctx.cr6.eq) goto loc_83112AC4;
loc_83112BB8:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83113520
	if (ctx.cr6.eq) goto loc_83113520;
	// li r15,3
	ctx.r15.s64 = 3;
loc_83112BC4:
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83112bdc
	if (ctx.cr6.eq) goto loc_83112BDC;
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83113520
	if (!ctx.cr0.eq) goto loc_83113520;
loc_83112BDC:
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112c9c
	if (!ctx.cr0.eq) goto loc_83112C9C;
	// lwz r11,24(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112c9c
	if (ctx.cr0.eq) goto loc_83112C9C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x83112c9c
	if (!ctx.cr6.eq) goto loc_83112C9C;
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83112c44
	if (!ctx.cr0.eq) goto loc_83112C44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83112c44
	if (ctx.cr6.eq) goto loc_83112C44;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83112c34
	if (ctx.cr0.eq) goto loc_83112C34;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_83112C34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83112c44
	if (ctx.cr6.eq) goto loc_83112C44;
	// bl 0x83110668
	ctx.lr = 0x83112C40;
	sub_83110668(ctx, base);
	// b 0x83112c4c
	goto loc_83112C4C;
loc_83112C44:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83112C4C;
	sub_82B97300(ctx, base);
loc_83112C4C:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83112C58;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x83112c9c
	if (ctx.cr6.eq) goto loc_83112C9C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x83112c80
	if (!ctx.cr6.eq) goto loc_83112C80;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83112C80:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bne cr6,0x8311354c
	if (!ctx.cr6.eq) goto loc_8311354C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83112C9C:
	// lwz r11,48(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112e54
	if (ctx.cr0.eq) goto loc_83112E54;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83110668
	ctx.lr = 0x83112CB0;
	sub_83110668(ctx, base);
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83112CB8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112d1c
	if (ctx.cr0.eq) goto loc_83112D1C;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_83112CC8:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83112CD0;
	sub_82B97300(ctx, base);
loc_83112CD0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83112e20
	goto loc_83112E20;
loc_83112CD8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113558
	if (!ctx.cr0.eq) goto loc_83113558;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83113558
	if (ctx.cr0.eq) goto loc_83113558;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x83113558
	if (!ctx.cr6.eq) goto loc_83113558;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112d30
	if (!ctx.cr0.eq) goto loc_83112D30;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112d2c
	if (!ctx.cr0.eq) goto loc_83112D2C;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x83112cb8
	goto loc_83112CB8;
loc_83112D1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x83112cd8
	if (!ctx.cr6.eq) goto loc_83112CD8;
	// b 0x83112cc8
	goto loc_83112CC8;
loc_83112D2C:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_83112D30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83112cc8
	if (ctx.cr6.eq) goto loc_83112CC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83110668
	ctx.lr = 0x83112D40;
	sub_83110668(ctx, base);
	// b 0x83112cd0
	goto loc_83112CD0;
loc_83112D44:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83112D50;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83112db4
	if (!ctx.cr6.eq) goto loc_83112DB4;
	// lbz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112d94
	if (ctx.cr0.eq) goto loc_83112D94;
	// rlwimi r11,r15,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,72(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 72);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// b 0x83112e18
	goto loc_83112E18;
loc_83112D94:
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// b 0x83112df8
	goto loc_83112DF8;
loc_83112DB4:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x83112e1c
	if (!ctx.cr6.eq) goto loc_83112E1C;
	// lbz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// beq 0x83112e00
	if (ctx.cr0.eq) goto loc_83112E00;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,14,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,72(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 72);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
loc_83112DF8:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x83112e1c
	goto loc_83112E1C;
loc_83112E00:
	// rlwimi r11,r15,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm r10,r10,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
loc_83112E18:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83112E1C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83112E20:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83112d44
	if (ctx.cr6.lt) goto loc_83112D44;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83113520
	if (ctx.cr6.eq) goto loc_83113520;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83112e48
	if (ctx.cr0.eq) goto loc_83112E48;
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// b 0x831134f0
	goto loc_831134F0;
loc_83112E48:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r14,r11,-4
	ctx.r14.s64 = ctx.r11.s64 + -4;
	// b 0x831134f0
	goto loc_831134F0;
loc_83112E54:
	// lbz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831134f0
	if (!ctx.cr0.eq) goto loc_831134F0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831134f0
	if (!ctx.cr0.eq) goto loc_831134F0;
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112f1c
	if (!ctx.cr0.eq) goto loc_83112F1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83112f1c
	if (ctx.cr6.eq) goto loc_83112F1C;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112f1c
	if (!ctx.cr0.eq) goto loc_83112F1C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113580
	if (!ctx.cr0.eq) goto loc_83113580;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83113580
	if (ctx.cr0.eq) goto loc_83113580;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x83113580
	if (!ctx.cr6.eq) goto loc_83113580;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r17,r11,20
	ctx.r17.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r17,-1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, -1, ctx.xer);
	// beq cr6,0x831134f0
	if (ctx.cr6.eq) goto loc_831134F0;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83112ED0;
	sub_82B97300(ctx, base);
	// cmplw cr6,r17,r3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x83112f28
	if (!ctx.cr6.lt) goto loc_83112F28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8311356c
	if (!ctx.cr0.eq) goto loc_8311356C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311356c
	if (ctx.cr0.eq) goto loc_8311356C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x8311356c
	if (!ctx.cr6.eq) goto loc_8311356C;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112f28
	if (!ctx.cr0.eq) goto loc_83112F28;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83112f28
	if (!ctx.cr0.eq) goto loc_83112F28;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// b 0x83112f28
	goto loc_83112F28;
loc_83112F1C:
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83112F24;
	sub_82B97300(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_83112F28:
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831135a8
	if (!ctx.cr0.eq) goto loc_831135A8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831135a8
	if (ctx.cr0.eq) goto loc_831135A8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x831135a8
	if (!ctx.cr6.eq) goto loc_831135A8;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_83112F70:
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// addi r21,r18,24
	ctx.r21.s64 = ctx.r18.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831133f0
	if (!ctx.cr0.eq) goto loc_831133F0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831133f0
	if (ctx.cr0.eq) goto loc_831133F0;
loc_83112F8C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83112fa8
	if (ctx.cr6.lt) goto loc_83112FA8;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83112fac
	if (!ctx.cr6.gt) goto loc_83112FAC;
loc_83112FA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83112FAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831133c4
	if (ctx.cr0.eq) goto loc_831133C4;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x83112fc8
	if (ctx.cr6.lt) goto loc_83112FC8;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83112fcc
	if (!ctx.cr6.gt) goto loc_83112FCC;
loc_83112FC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83112FCC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83113304
	if (!ctx.cr0.eq) goto loc_83113304;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r10,r11,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r10,28672
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28672, ctx.xer);
	// beq cr6,0x831133e8
	if (ctx.cr6.eq) goto loc_831133E8;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x831131a0
	if (ctx.cr6.eq) goto loc_831131A0;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831131a0
	if (ctx.cr6.eq) goto loc_831131A0;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113018
	if (ctx.cr0.eq) goto loc_83113018;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83110328
	ctx.lr = 0x83113014;
	sub_83110328(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83113018:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113034
	if (ctx.cr0.eq) goto loc_83113034;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831103c8
	ctx.lr = 0x83113030;
	sub_831103C8(ctx, base);
	// b 0x83113090
	goto loc_83113090;
loc_83113034:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113090
	if (ctx.cr0.eq) goto loc_83113090;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x83113048;
	sub_82B97430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r12,-1365
	ctx.r12.s64 = -1365;
	// rlwinm r9,r11,16,20,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFE;
	// rlwinm r10,r11,16,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FF;
	// and. r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r12,-683
	ctx.r12.s64 = -683;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// bne 0x8311308c
	if (!ctx.cr0.eq) goto loc_8311308C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83113090
	if (ctx.cr6.eq) goto loc_83113090;
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// li r9,1365
	ctx.r9.s64 = 1365;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83113090
	if (ctx.cr6.eq) goto loc_83113090;
loc_8311308C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83113090:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r24,1
	ctx.r24.s64 = 1;
	// bne 0x83113174
	if (!ctx.cr0.eq) goto loc_83113174;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113170
	if (!ctx.cr0.eq) goto loc_83113170;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83113170
	if (ctx.cr0.eq) goto loc_83113170;
loc_831130BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310fa68
	ctx.lr = 0x831130C4;
	sub_8310FA68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113154
	if (ctx.cr0.eq) goto loc_83113154;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x83113170
	if (ctx.cr6.gt) goto loc_83113170;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_831130E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83113154
	if (ctx.cr6.eq) goto loc_83113154;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83113148
	if (ctx.cr6.eq) goto loc_83113148;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311310c
	if (ctx.cr0.eq) goto loc_8311310C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x83113110
	if (ctx.cr0.eq) goto loc_83113110;
loc_8311310C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83113110:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113148
	if (ctx.cr0.eq) goto loc_83113148;
	// rlwinm. r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x83113148
	if (ctx.cr0.lt) goto loc_83113148;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x83113148
	if (ctx.cr6.gt) goto loc_83113148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fa68
	ctx.lr = 0x83113130;
	sub_8310FA68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113148
	if (ctx.cr0.eq) goto loc_83113148;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x83113150
	if (ctx.cr6.gt) goto loc_83113150;
loc_83113148:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x831130e0
	goto loc_831130E0;
loc_83113150:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83113154:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113170
	if (!ctx.cr0.eq) goto loc_83113170;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831130bc
	if (!ctx.cr6.eq) goto loc_831130BC;
loc_83113170:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83113174:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x8311319c
	if (ctx.cr6.eq) goto loc_8311319C;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8311319c
	if (!ctx.cr6.eq) goto loc_8311319C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83110418
	ctx.lr = 0x83113194;
	sub_83110418(ctx, base);
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r22,0
	ctx.r22.s64 = 0;
loc_8311319C:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_831131A0:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi r28,r11,20
	ctx.r28.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x831133e4
	if (!ctx.cr6.lt) goto loc_831133E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x831131BC;
	sub_82B97430(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831131d4
	if (ctx.cr6.eq) goto loc_831131D4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x831133e4
	if (!ctx.cr6.eq) goto loc_831133E4;
loc_831131D4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// bl 0x8310f980
	ctx.lr = 0x831131E0;
	sub_8310F980(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831131f0
	if (ctx.cr0.eq) goto loc_831131F0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_831131F0:
	// lwz r31,8(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r11,r31,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113230
	if (ctx.cr0.eq) goto loc_83113230;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113228
	if (ctx.cr0.eq) goto loc_83113228;
	// rlwinm r11,r31,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1;
loc_83113208:
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83113218
	if (ctx.cr6.eq) goto loc_83113218;
loc_83113214:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83113218:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83113268
	if (!ctx.cr0.eq) goto loc_83113268;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83113290
	goto loc_83113290;
loc_83113228:
	// rlwinm r23,r31,14,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1;
	// b 0x83113260
	goto loc_83113260;
loc_83113230:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8310fa10
	ctx.lr = 0x83113238;
	sub_8310FA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83113214
	if (!ctx.cr0.eq) goto loc_83113214;
	// lwz r11,76(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83113214
	if (ctx.cr0.eq) goto loc_83113214;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8311325c
	if (ctx.cr0.eq) goto loc_8311325C;
	// rlwinm r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// b 0x83113208
	goto loc_83113208;
loc_8311325C:
	// rlwinm r23,r11,9,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
loc_83113260:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x83113218
	goto loc_83113218;
loc_83113268:
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x83113288
	if (ctx.cr6.eq) goto loc_83113288;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x83113288
	if (ctx.cr6.eq) goto loc_83113288;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8311328c
	if (!ctx.cr6.eq) goto loc_8311328C;
loc_83113288:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8311328C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83113290:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831133c4
	if (ctx.cr0.eq) goto loc_831133C4;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x831132a4
	if (!ctx.cr6.eq) goto loc_831132A4;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
loc_831132A4:
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_831132A8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x831133c4
	if (ctx.cr6.eq) goto loc_831133C4;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831132fc
	if (ctx.cr6.eq) goto loc_831132FC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831132d4
	if (ctx.cr0.eq) goto loc_831132D4;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x831132d8
	if (ctx.cr0.eq) goto loc_831132D8;
loc_831132D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831132D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831132fc
	if (ctx.cr0.eq) goto loc_831132FC;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831132fc
	if (!ctx.cr0.eq) goto loc_831132FC;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x831132fc
	if (!ctx.cr6.gt) goto loc_831132FC;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_831132FC:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x831132a8
	goto loc_831132A8;
loc_83113304:
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// blt cr6,0x83113318
	if (ctx.cr6.lt) goto loc_83113318;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8311331c
	if (!ctx.cr6.gt) goto loc_8311331C;
loc_83113318:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311331C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311332c
	if (!ctx.cr0.eq) goto loc_8311332C;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// bne cr6,0x831133e8
	if (!ctx.cr6.eq) goto loc_831133E8;
loc_8311332C:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x83113368
	if (ctx.cr6.eq) goto loc_83113368;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113368
	if (ctx.cr0.eq) goto loc_83113368;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83110328
	ctx.lr = 0x83113350;
	sub_83110328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113368
	if (ctx.cr0.eq) goto loc_83113368;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831103c8
	ctx.lr = 0x83113368;
	sub_831103C8(ctx, base);
loc_83113368:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x83113394
	if (ctx.cr6.lt) goto loc_83113394;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x83113398
	if (!ctx.cr6.gt) goto loc_83113398;
loc_83113394:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83113398:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831133ac
	if (!ctx.cr0.eq) goto loc_831133AC;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x831133b0
	if (!ctx.cr6.eq) goto loc_831133B0;
loc_831133AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831133B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831133c0
	if (!ctx.cr0.eq) goto loc_831133C0;
	// rlwinm. r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831133c4
	if (ctx.cr0.eq) goto loc_831133C4;
loc_831133C0:
	// li r29,1
	ctx.r29.s64 = 1;
loc_831133C4:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831133f0
	if (!ctx.cr0.eq) goto loc_831133F0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83112f8c
	if (!ctx.cr6.eq) goto loc_83112F8C;
	// b 0x831133f0
	goto loc_831133F0;
loc_831133E4:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_831133E8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x83113460
	if (!ctx.cr6.eq) goto loc_83113460;
loc_831133F0:
	// rlwinm r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113460
	if (!ctx.cr0.eq) goto loc_83113460;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83113460
	if (ctx.cr6.eq) goto loc_83113460;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113460
	if (!ctx.cr0.eq) goto loc_83113460;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83113460
	if (!ctx.cr0.eq) goto loc_83113460;
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113460
	if (!ctx.cr0.eq) goto loc_83113460;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83113594
	if (!ctx.cr0.eq) goto loc_83113594;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83113594
	if (ctx.cr0.eq) goto loc_83113594;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16128, ctx.xer);
	// bne cr6,0x83113594
	if (!ctx.cr6.eq) goto loc_83113594;
	// lhz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113460
	if (!ctx.cr0.eq) goto loc_83113460;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// b 0x83112f70
	goto loc_83112F70;
loc_83113460:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x831134c4
	if (ctx.cr6.eq) goto loc_831134C4;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831134c4
	if (ctx.cr0.eq) goto loc_831134C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97430
	ctx.lr = 0x8311347C;
	sub_82B97430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwinm r10,r10,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831134c4
	if (!ctx.cr6.eq) goto loc_831134C4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83110328
	ctx.lr = 0x831134AC;
	sub_83110328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831134c4
	if (ctx.cr0.eq) goto loc_831134C4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x831103c8
	ctx.lr = 0x831134C4;
	sub_831103C8(ctx, base);
loc_831134C4:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x831134f0
	if (ctx.cr6.eq) goto loc_831134F0;
	// lwz r11,20(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831134e0
	if (!ctx.cr6.gt) goto loc_831134E0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_831134E0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83110418
	ctx.lr = 0x831134F0;
	sub_83110418(ctx, base);
loc_831134F0:
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r21,104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r18,116(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r20,-1
	ctx.r20.s64 = -1;
	// lwz r17,120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113544
	if (!ctx.cr0.eq) goto loc_83113544;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83112bc4
	if (!ctx.cr6.eq) goto loc_83112BC4;
loc_83113520:
	// lwz r22,492(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831135bc
	if (ctx.cr6.eq) goto loc_831135BC;
	// lwz r10,740(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 740);
	// lwz r11,736(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 736);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x831135c0
	goto loc_831135C0;
loc_83113544:
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// b 0x83113520
	goto loc_83113520;
loc_8311354C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83113558;
	sub_830FD318(ctx, base);
loc_83113558:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x830fd318
	ctx.lr = 0x8311356C;
	sub_830FD318(ctx, base);
loc_8311356C:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x830fd318
	ctx.lr = 0x83113580;
	sub_830FD318(ctx, base);
loc_83113580:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x830fd318
	ctx.lr = 0x83113594;
	sub_830FD318(ctx, base);
loc_83113594:
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x830fd318
	ctx.lr = 0x831135A8;
	sub_830FD318(ctx, base);
loc_831135A8:
	// rlwinm r11,r14,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x830fd318
	ctx.lr = 0x831135BC;
	sub_830FD318(ctx, base);
loc_831135BC:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_831135C0:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831135e0
	if (ctx.cr6.eq) goto loc_831135E0;
	// lwz r10,764(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 764);
	// lwz r11,760(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 760);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x831135e4
	goto loc_831135E4;
loc_831135E0:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_831135E4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83114030
	if (ctx.cr6.eq) goto loc_83114030;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x829ce870
	ctx.lr = 0x831135F4;
	sub_829CE870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b96dd0
	ctx.lr = 0x83113600;
	sub_82B96DD0(ctx, base);
	// lwz r11,568(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 568);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x83113618
	goto loc_83113618;
loc_8311360C:
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83113618:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311360c
	if (!ctx.cr6.eq) goto loc_8311360C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f6650
	ctx.lr = 0x83113628;
	sub_830F6650(ctx, base);
	// lwz r31,568(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 568);
	// b 0x83113644
	goto loc_83113644;
loc_83113630:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x830f7070
	ctx.lr = 0x83113640;
	sub_830F7070(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83113644:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83113630
	if (!ctx.cr6.eq) goto loc_83113630;
	// lwz r11,756(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831136f4
	if (ctx.cr6.eq) goto loc_831136F4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,748(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 748);
	// bl 0x830f6670
	ctx.lr = 0x8311366C;
	sub_830F6670(ctx, base);
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83113684
	if (ctx.cr0.eq) goto loc_83113684;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83113684:
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8311368C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831136a8
	if (ctx.cr6.eq) goto loc_831136A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x831136ac
	if (!ctx.cr6.eq) goto loc_831136AC;
loc_831136A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831136AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831136f4
	if (!ctx.cr0.eq) goto loc_831136F4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8316b960
	ctx.lr = 0x831136BC;
	sub_8316B960(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,13
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x831136d0
	if (!ctx.cr6.eq) goto loc_831136D0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_831136D0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x831136e4
	if (!ctx.cr6.eq) goto loc_831136E4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_831136E4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f6678
	ctx.lr = 0x831136EC;
	sub_830F6678(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8311368c
	goto loc_8311368C;
loc_831136F4:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83113760
	if (ctx.cr6.eq) goto loc_83113760;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// divw r4,r11,r10
	ctx.r4.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x830f6658
	ctx.lr = 0x83113714;
	sub_830F6658(ctx, base);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// lwz r31,12(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// b 0x83113758
	goto loc_83113758;
loc_83113720:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq 0x8311374c
	if (ctx.cr0.eq) goto loc_8311374C;
	// bl 0x830f6660
	ctx.lr = 0x83113748;
	sub_830F6660(ctx, base);
	// b 0x83113750
	goto loc_83113750;
loc_8311374C:
	// bl 0x830f6668
	ctx.lr = 0x83113750;
	sub_830F6668(ctx, base);
loc_83113750:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83113758:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83113720
	if (ctx.cr6.lt) goto loc_83113720;
loc_83113760:
	// lwz r29,16(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830f6620
	ctx.lr = 0x83113770;
	sub_830F6620(ctx, base);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831137dc
	if (ctx.cr6.eq) goto loc_831137DC;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_83113780:
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8311379c
	if (!ctx.cr6.eq) goto loc_8311379C;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_8311379C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831137b0
	if (ctx.cr6.eq) goto loc_831137B0;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x831137b4
	goto loc_831137B4;
loc_831137B0:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_831137B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x830f7068
	ctx.lr = 0x831137CC;
	sub_830F7068(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83113780
	if (ctx.cr6.lt) goto loc_83113780;
loc_831137DC:
	// lwz r31,8(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// b 0x83113868
	goto loc_83113868;
loc_831137E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,114
	ctx.r6.s64 = 114;
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x83113804
	if (ctx.cr6.eq) goto loc_83113804;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83113864
	if (!ctx.cr6.eq) goto loc_83113864;
	// li r6,99
	ctx.r6.s64 = 99;
loc_83113804:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// beq 0x83113818
	if (ctx.cr0.eq) goto loc_83113818;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83113834
	goto loc_83113834;
loc_83113818:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83113828
	if (ctx.cr0.eq) goto loc_83113828;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83113834
	goto loc_83113834;
loc_83113828:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_83113834:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,30,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r9,r4,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r8,r4,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// rlwinm r5,r4,17,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x3FFF;
	// clrlwi r4,r4,17
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFF;
	// bl 0x830f6628
	ctx.lr = 0x83113864;
	sub_830F6628(ctx, base);
loc_83113864:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_83113868:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x831137e4
	if (ctx.cr6.lt) goto loc_831137E4;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113b18
	if (ctx.cr0.eq) goto loc_83113B18;
	// lwz r11,56(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83113b10
	if (ctx.cr6.eq) goto loc_83113B10;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andi. r11,r11,1280
	ctx.r11.u64 = ctx.r11.u64 & 1280;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83113b10
	if (ctx.cr0.eq) goto loc_83113B10;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,556(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 556);
	// bl 0x830f6688
	ctx.lr = 0x831138A4;
	sub_830F6688(ctx, base);
	// lwz r23,476(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83113b1c
	if (ctx.cr6.eq) goto loc_83113B1C;
loc_831138B4:
	// cmplw cr6,r14,r23
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x831138c8
	if (ctx.cr6.eq) goto loc_831138C8;
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83113b1c
	if (!ctx.cr0.eq) goto loc_83113B1C;
loc_831138C8:
	// lwz r11,68(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 68);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113adc
	if (ctx.cr0.eq) goto loc_83113ADC;
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831138e8
	if (ctx.cr0.eq) goto loc_831138E8;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x831138f4
	goto loc_831138F4;
loc_831138E8:
	// lwz r11,24(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_831138F4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11392
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11392, ctx.xer);
	// bne cr6,0x8311391c
	if (!ctx.cr6.eq) goto loc_8311391C;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113998
	if (!ctx.cr0.eq) goto loc_83113998;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_8311391C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83113998
	if (ctx.cr6.eq) goto loc_83113998;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x83113998
	if (!ctx.cr6.eq) goto loc_83113998;
	// lwz r9,12(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
loc_83113938:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83113b04
	if (ctx.cr6.eq) goto loc_83113B04;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311397c
	if (!ctx.cr0.eq) goto loc_8311397C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83113974
	if (ctx.cr6.eq) goto loc_83113974;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83113974
	if (ctx.cr6.eq) goto loc_83113974;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311397c
	if (!ctx.cr0.eq) goto loc_8311397C;
loc_83113974:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x83113938
	goto loc_83113938;
loc_8311397C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83113b04
	if (ctx.cr6.eq) goto loc_83113B04;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi r28,r11,20
	ctx.r28.u64 = ctx.r11.u32 & 0xFFF;
	// bl 0x83110668
	ctx.lr = 0x83113990;
	sub_83110668(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x831139a8
	goto loc_831139A8;
loc_83113998:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83110668
	ctx.lr = 0x831139A0;
	sub_83110668(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_831139A8:
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113adc
	if (!ctx.cr0.eq) goto loc_83113ADC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83113adc
	if (ctx.cr0.eq) goto loc_83113ADC;
loc_831139C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x83113a18
	if (!ctx.cr6.eq) goto loc_83113A18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x831139EC;
	sub_8310FC68(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x83113a18
	if (!ctx.cr6.eq) goto loc_83113A18;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x83113a18
	if (!ctx.cr6.eq) goto loc_83113A18;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_83113A18:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113a34
	if (!ctx.cr0.eq) goto loc_83113A34;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831139c8
	if (!ctx.cr6.eq) goto loc_831139C8;
loc_83113A34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83113adc
	if (ctx.cr6.eq) goto loc_83113ADC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194ba8
	ctx.lr = 0x83113A48;
	sub_83194BA8(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x83113adc
	if (!ctx.cr6.eq) goto loc_83113ADC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x83113adc
	if (!ctx.cr6.eq) goto loc_83113ADC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8302d228
	ctx.lr = 0x83113A70;
	sub_8302D228(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83113adc
	if (ctx.cr0.eq) goto loc_83113ADC;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82ca3980
	ctx.lr = 0x83113A84;
	sub_82CA3980(ctx, base);
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194ba8
	ctx.lr = 0x83113A94;
	sub_83194BA8(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83194ba8
	ctx.lr = 0x83113AA8;
	sub_83194BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// bl 0x830f7078
	ctx.lr = 0x83113ADC;
	sub_830F7078(ctx, base);
loc_83113ADC:
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113afc
	if (!ctx.cr0.eq) goto loc_83113AFC;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831138b4
	if (!ctx.cr6.eq) goto loc_831138B4;
	// b 0x83113b1c
	goto loc_83113B1C;
loc_83113AFC:
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// b 0x83113b1c
	goto loc_83113B1C;
loc_83113B04:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83113B10;
	sub_830FD318(ctx, base);
loc_83113B10:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f1ac0
	ctx.lr = 0x83113B18;
	sub_830F1AC0(ctx, base);
loc_83113B18:
	// lwz r23,476(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
loc_83113B1C:
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114030
	if (ctx.cr0.eq) goto loc_83114030;
	// lwz r11,56(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83114028
	if (ctx.cr6.eq) goto loc_83114028;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114028
	if (ctx.cr0.eq) goto loc_83114028;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,560(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 560);
	// bl 0x830f6690
	ctx.lr = 0x83113B4C;
	sub_830F6690(ctx, base);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83114030
	if (ctx.cr6.eq) goto loc_83114030;
loc_83113B58:
	// cmplw cr6,r14,r23
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x83113b6c
	if (ctx.cr6.eq) goto loc_83113B6C;
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83114030
	if (!ctx.cr0.eq) goto loc_83114030;
loc_83113B6C:
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113fd0
	if (ctx.cr0.eq) goto loc_83113FD0;
	// lwz r11,56(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// beq 0x83113c28
	if (ctx.cr0.eq) goto loc_83113C28;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113ff8
	if (!ctx.cr0.eq) goto loc_83113FF8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83113ff8
	if (ctx.cr0.eq) goto loc_83113FF8;
loc_83113BA0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12032
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12032, ctx.xer);
	// bne cr6,0x83113bd4
	if (!ctx.cr6.eq) goto loc_83113BD4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x83113BC4;
	sub_8310FC68(ctx, base);
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83113bf0
	if (!ctx.cr6.eq) goto loc_83113BF0;
loc_83113BD4:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113ff8
	if (!ctx.cr0.eq) goto loc_83113FF8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83113ba0
	if (!ctx.cr6.eq) goto loc_83113BA0;
loc_83113BF0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83113ff8
	if (ctx.cr6.eq) goto loc_83113FF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x83113C0C;
	sub_8310FC68(ctx, base);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// clrlwi r30,r11,20
	ctx.r30.u64 = ctx.r11.u32 & 0xFFF;
	// lwz r31,-8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r25,-4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// b 0x83113cdc
	goto loc_83113CDC;
loc_83113C28:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114004
	if (!ctx.cr0.eq) goto loc_83114004;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83114004
	if (ctx.cr0.eq) goto loc_83114004;
loc_83113C3C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x83113c84
	if (!ctx.cr6.eq) goto loc_83113C84;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x83113C60;
	sub_8310FC68(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x83113c84
	if (!ctx.cr6.eq) goto loc_83113C84;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r11,-12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83113ca0
	if (ctx.cr6.eq) goto loc_83113CA0;
loc_83113C84:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114004
	if (!ctx.cr0.eq) goto loc_83114004;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83113c3c
	if (!ctx.cr6.eq) goto loc_83113C3C;
loc_83113CA0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83114004
	if (ctx.cr6.eq) goto loc_83114004;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x83113CBC;
	sub_8310FC68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r31,-4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r25,-8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x83110668
	ctx.lr = 0x83113CD8;
	sub_83110668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83113CDC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83113fd0
	if (ctx.cr6.eq) goto loc_83113FD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194ba8
	ctx.lr = 0x83113CF0;
	sub_83194BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x83113fd0
	if (!ctx.cr6.eq) goto loc_83113FD0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x83113d1c
	if (ctx.cr6.eq) goto loc_83113D1C;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x83113fd0
	if (!ctx.cr6.eq) goto loc_83113FD0;
loc_83113D1C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x83194cb0
	ctx.lr = 0x83113D28;
	sub_83194CB0(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194cb0
	ctx.lr = 0x83113D34;
	sub_83194CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319fdc0
	ctx.lr = 0x83113D48;
	sub_8319FDC0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319fe80
	ctx.lr = 0x83113D50;
	sub_8319FE80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83194c08
	ctx.lr = 0x83113D64;
	sub_83194C08(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194c08
	ctx.lr = 0x83113D78;
	sub_83194C08(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194cb0
	ctx.lr = 0x83113D84;
	sub_83194CB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83194c88
	ctx.lr = 0x83113D94;
	sub_83194C88(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x83113fc8
	if (!ctx.cr6.eq) goto loc_83113FC8;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f6698
	ctx.lr = 0x83113DB4;
	sub_830F6698(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x8319fe80
	ctx.lr = 0x83113DC0;
	sub_8319FE80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83113fc8
	if (ctx.cr0.eq) goto loc_83113FC8;
loc_83113DC8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8319fe80
	ctx.lr = 0x83113DD4;
	sub_8319FE80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83113dc8
	if (!ctx.cr0.eq) goto loc_83113DC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83113fc8
	if (ctx.cr6.eq) goto loc_83113FC8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f66a0
	ctx.lr = 0x83113DF4;
	sub_830F66A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319ffc0
	ctx.lr = 0x83113E00;
	sub_8319FFC0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319fe80
	ctx.lr = 0x83113E08;
	sub_8319FE80(ctx, base);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// b 0x83113fb8
	goto loc_83113FB8;
loc_83113E10:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83114010
	if (ctx.cr6.eq) goto loc_83114010;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194bd0
	ctx.lr = 0x83113E28;
	sub_83194BD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83113e48
	if (ctx.cr6.eq) goto loc_83113E48;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83194c60
	ctx.lr = 0x83113E40;
	sub_83194C60(ctx, base);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x83113e4c
	goto loc_83113E4C;
loc_83113E48:
	// li r6,55
	ctx.r6.s64 = 55;
loc_83113E4C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f66a8
	ctx.lr = 0x83113E64;
	sub_830F66A8(ctx, base);
	// lwz r11,56(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113fb4
	if (ctx.cr0.eq) goto loc_83113FB4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mullw r24,r11,r10
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x830f66b0
	ctx.lr = 0x83113E94;
	sub_830F66B0(ctx, base);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83113fb4
	if (ctx.cr6.eq) goto loc_83113FB4;
loc_83113EA0:
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_83113EA4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8311401c
	if (ctx.cr6.eq) goto loc_8311401C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83113ec0
	if (!ctx.cr0.eq) goto loc_83113EC0;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x83113ea4
	goto loc_83113EA4;
loc_83113EC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83113f14
	if (ctx.cr0.eq) goto loc_83113F14;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_83113ED4:
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// srw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r30.u8 & 0x3F));
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r7,r10,22
	ctx.r7.u64 = ctx.r10.u32 & 0x3FF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f66b8
	ctx.lr = 0x83113EF8;
	sub_830F66B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83113ed4
	if (ctx.cr6.lt) goto loc_83113ED4;
loc_83113F14:
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_83113F18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83113fa8
	if (ctx.cr6.eq) goto loc_83113FA8;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83113f98
	if (ctx.cr6.eq) goto loc_83113F98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113f44
	if (!ctx.cr0.eq) goto loc_83113F44;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x83113f48
	if (ctx.cr0.eq) goto loc_83113F48;
loc_83113F44:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83113F48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83113f98
	if (ctx.cr0.eq) goto loc_83113F98;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x83113f98
	if (!ctx.cr6.eq) goto loc_83113F98;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8310fc68
	ctx.lr = 0x83113F74;
	sub_8310FC68(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x83113f98
	if (!ctx.cr6.eq) goto loc_83113F98;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r11,-12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83113fa0
	if (ctx.cr6.eq) goto loc_83113FA0;
loc_83113F98:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x83113f18
	goto loc_83113F18;
loc_83113FA0:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x83113fac
	goto loc_83113FAC;
loc_83113FA8:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_83113FAC:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x83113ea0
	if (ctx.cr6.lt) goto loc_83113EA0;
loc_83113FB4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_83113FB8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319fe80
	ctx.lr = 0x83113FC0;
	sub_8319FE80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83113e10
	if (!ctx.cr0.eq) goto loc_83113E10;
loc_83113FC8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831969a8
	ctx.lr = 0x83113FD0;
	sub_831969A8(ctx, base);
loc_83113FD0:
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83113ff0
	if (!ctx.cr0.eq) goto loc_83113FF0;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83113b58
	if (!ctx.cr6.eq) goto loc_83113B58;
	// b 0x83114030
	goto loc_83114030;
loc_83113FF0:
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// b 0x83114030
	goto loc_83114030;
loc_83113FF8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114004;
	sub_830FD318(ctx, base);
loc_83114004:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114010;
	sub_830FD318(ctx, base);
loc_83114010:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x8311401C;
	sub_830FD318(ctx, base);
loc_8311401C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114028;
	sub_830FD318(ctx, base);
loc_83114028:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f1ad0
	ctx.lr = 0x83114030;
	sub_830F1AD0(ctx, base);
loc_83114030:
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83114048
	if (ctx.cr0.eq) goto loc_83114048;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8311404c
	if (ctx.cr0.eq) goto loc_8311404C;
loc_83114048:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8311404C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114080
	if (ctx.cr0.eq) goto loc_83114080;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b96d70
	ctx.lr = 0x8311405C;
	sub_82B96D70(ctx, base);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83114080
	if (ctx.cr6.eq) goto loc_83114080;
	// lwz r3,768(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83114070;
	sub_82B97300(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x830f1ab0
	ctx.lr = 0x83114080;
	sub_830F1AB0(ctx, base);
loc_83114080:
	// stw r17,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r17.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r18,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r18.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83114094"))) PPC_WEAK_FUNC(sub_83114094);
PPC_FUNC_IMPL(__imp__sub_83114094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83114098"))) PPC_WEAK_FUNC(sub_83114098);
PPC_FUNC_IMPL(__imp__sub_83114098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x831140A0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r6,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r7,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// lis r14,-1
	ctx.r14.s64 = -65536;
	// stw r21,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r21.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,128
	ctx.r31.s64 = 128;
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x831140e4
	if (!ctx.cr6.eq) goto loc_831140E4;
	// li r31,132
	ctx.r31.s64 = 132;
loc_831140E4:
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// li r19,0
	ctx.r19.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83114104
	if (ctx.cr0.eq) goto loc_83114104;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq 0x83114108
	if (ctx.cr0.eq) goto loc_83114108;
loc_83114104:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83114108:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114114
	if (ctx.cr0.eq) goto loc_83114114;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_83114114:
	// bl 0x82b97a80
	ctx.lr = 0x83114118;
	sub_82B97A80(ctx, base);
	// stw r3,768(r22)
	PPC_STORE_U32(ctx.r22.u32 + 768, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b96d48
	ctx.lr = 0x83114124;
	sub_82B96D48(ctx, base);
	// lwz r4,56(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// beq cr6,0x8311414c
	if (ctx.cr6.eq) goto loc_8311414C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311414c
	if (ctx.cr0.eq) goto loc_8311414C;
	// lwz r20,20(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
loc_8311414C:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x831142f0
	if (ctx.cr6.eq) goto loc_831142F0;
	// lwz r11,336(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 336);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831141d4
	if (!ctx.cr6.gt) goto loc_831141D4;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r8,r22,128
	ctx.r8.s64 = ctx.r22.s64 + 128;
loc_83114184:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r9,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x831141a4
	if (ctx.cr6.gt) goto loc_831141A4;
	// rlwinm r3,r10,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x831141a4
	if (!ctx.cr6.gt) goto loc_831141A4;
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_831141A4:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x831141b4
	if (!ctx.cr6.eq) goto loc_831141B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x831141c4
	goto loc_831141C4;
loc_831141B4:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x831141c4
	if (!ctx.cr6.eq) goto loc_831141C4;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_831141C4:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bne 0x83114184
	if (!ctx.cr0.eq) goto loc_83114184;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_831141D4:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x831142e4
	if (ctx.cr6.gt) goto loc_831142E4;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,160
	ctx.r12.s64 = ctx.r12.s64 + 160;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31983
	ctx.r12.s64 = -2096037888;
	// addi r12,r12,16912
	ctx.r12.s64 = ctx.r12.s64 + 16912;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83114210;
	case 1:
		goto loc_83114228;
	case 2:
		goto loc_83114234;
	case 3:
		goto loc_83114240;
	case 4:
		goto loc_83114234;
	case 5:
		goto loc_83114248;
	case 6:
		goto loc_83114234;
	case 7:
		goto loc_83114254;
	case 8:
		goto loc_83114234;
	case 9:
		goto loc_83114260;
	case 10:
		goto loc_83114234;
	case 11:
		goto loc_83114268;
	case 12:
		goto loc_83114234;
	case 13:
		goto loc_83114270;
	case 14:
		goto loc_83114234;
	case 15:
		goto loc_83114254;
	default:
		__builtin_unreachable();
	}
loc_83114210:
	// oris r11,r10,1792
	ctx.r11.u64 = ctx.r10.u64 | 117440512;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8311427c
	if (ctx.cr6.eq) goto loc_8311427C;
	// stw r30,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r30.u32);
	// b 0x8311427c
	goto loc_8311427C;
loc_83114228:
	// rlwinm r11,r10,0,8,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8311427c
	goto loc_8311427C;
loc_83114234:
	// li r4,3547
	ctx.r4.s64 = 3547;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114240;
	sub_830FD318(ctx, base);
loc_83114240:
	// rlwimi r10,r30,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x83114278
	goto loc_83114278;
loc_83114248:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8311424C:
	// rlwimi r10,r11,24,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x83114278
	goto loc_83114278;
loc_83114254:
	// li r4,3635
	ctx.r4.s64 = 3635;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114260;
	sub_830FD318(ctx, base);
loc_83114260:
	// rlwimi r10,r30,26,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 26) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x83114278
	goto loc_83114278;
loc_83114268:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8311424c
	goto loc_8311424C;
loc_83114270:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r11,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
loc_83114278:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8311427C:
	// lwz r11,536(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831142b8
	if (!ctx.cr6.gt) goto loc_831142B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r22,348
	ctx.r10.s64 = ctx.r22.s64 + 348;
loc_83114290:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// bne cr6,0x831142ac
	if (!ctx.cr6.eq) goto loc_831142AC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_831142AC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x83114290
	if (!ctx.cr0.eq) goto loc_83114290;
loc_831142B8:
	// addi r4,r22,972
	ctx.r4.s64 = ctx.r22.s64 + 972;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x831100c0
	ctx.lr = 0x831142C4;
	sub_831100C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x831144a0
	if (ctx.cr0.eq) goto loc_831144A0;
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// bl 0x8304b508
	ctx.lr = 0x831142DC;
	sub_8304B508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831144a4
	goto loc_831144A4;
loc_831142E4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x831142F0;
	sub_830FD318(ctx, base);
loc_831142F0:
	// lwz r11,536(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 536);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831142b8
	if (!ctx.cr6.gt) goto loc_831142B8;
	// addi r31,r22,348
	ctx.r31.s64 = ctx.r22.s64 + 348;
loc_83114304:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83114488
	if (ctx.cr6.eq) goto loc_83114488;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8311431C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83114354
	if (ctx.cr6.eq) goto loc_83114354;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311434c
	if (ctx.cr6.eq) goto loc_8311434C;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r7,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8311434c
	if (ctx.cr0.eq) goto loc_8311434C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x83114354
	if (!ctx.cr6.eq) goto loc_83114354;
loc_8311434C:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8311431c
	goto loc_8311431C;
loc_83114354:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114444
	if (ctx.cr0.eq) goto loc_83114444;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x83114428
	if (ctx.cr6.eq) goto loc_83114428;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x831143cc
	if (ctx.cr6.eq) goto loc_831143CC;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x83114460
	if (!ctx.cr6.eq) goto loc_83114460;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83114488
	if (ctx.cr6.eq) goto loc_83114488;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8311438C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831143a8
	if (ctx.cr6.eq) goto loc_831143A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831143a8
	if (!ctx.cr0.eq) goto loc_831143A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8311438c
	goto loc_8311438C;
loc_831143A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r11,r9,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r6,r11,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x83114420
	goto loc_83114420;
loc_831143CC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83114488
	if (ctx.cr6.eq) goto loc_83114488;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_831143E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831143fc
	if (ctx.cr6.eq) goto loc_831143FC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831143fc
	if (!ctx.cr0.eq) goto loc_831143FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831143e0
	goto loc_831143E0;
loc_831143FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r7,17,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x2;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r7,r6,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwimi r8,r11,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r7,r7,0,24,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r11,r8,3,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_83114420:
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// b 0x83114488
	goto loc_83114488;
loc_83114428:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83114460
	if (!ctx.cr0.eq) goto loc_83114460;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83114488
	if (ctx.cr6.eq) goto loc_83114488;
	// li r4,3550
	ctx.r4.s64 = 3550;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114444;
	sub_830FD318(ctx, base);
loc_83114444:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83114460
	if (!ctx.cr0.eq) goto loc_83114460;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83114488
	if (ctx.cr6.eq) goto loc_83114488;
	// li r4,3549
	ctx.r4.s64 = 3549;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114460;
	sub_830FD318(ctx, base);
loc_83114460:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83114488
	if (!ctx.cr6.eq) goto loc_83114488;
	// rlwinm. r11,r7,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83114488
	if (!ctx.cr0.eq) goto loc_83114488;
	// li r4,3596
	ctx.r4.s64 = 3596;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd220
	ctx.lr = 0x83114480;
	sub_830FD220(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83114488:
	// lwz r11,536(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 536);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83114304
	if (ctx.cr6.lt) goto loc_83114304;
	// b 0x831142b8
	goto loc_831142B8;
loc_831144A0:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_831144A4:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r3,772(r22)
	PPC_STORE_U32(ctx.r22.u32 + 772, ctx.r3.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r19,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r19.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r19,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r19.u64);
	// stw r19,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r19.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r21,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r21.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// bl 0x8304b5b8
	ctx.lr = 0x831144E4;
	sub_8304B5B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x831144fc
	if (!ctx.cr0.lt) goto loc_831144FC;
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x831144FC;
	sub_830FD318(ctx, base);
loc_831144FC:
	// lwz r31,16(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83114534
	if (ctx.cr6.eq) goto loc_83114534;
	// lwz r8,12(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_83114514:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8310fde0
	ctx.lr = 0x8311451C;
	sub_8310FDE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114528
	if (ctx.cr0.eq) goto loc_83114528;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_83114528:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// bne 0x83114514
	if (!ctx.cr0.eq) goto loc_83114514;
loc_83114534:
	// stw r17,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r17.u32);
	// li r15,-1
	ctx.r15.s64 = -1;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83114b28
	if (ctx.cr6.eq) goto loc_83114B28;
	// rlwinm r27,r17,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83110880
	ctx.lr = 0x83114558;
	sub_83110880(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83114660
	if (ctx.cr6.eq) goto loc_83114660;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// addi r26,r11,20728
	ctx.r26.s64 = ctx.r11.s64 + 20728;
loc_83114580:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8310fde0
	ctx.lr = 0x83114590;
	sub_8310FDE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114654
	if (ctx.cr0.eq) goto loc_83114654;
	// stwx r9,r28,r25
	PPC_STORE_U32(ctx.r28.u32 + ctx.r25.u32, ctx.r9.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq 0x83114650
	if (ctx.cr0.eq) goto loc_83114650;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x83114650
	if (ctx.cr6.eq) goto loc_83114650;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831145C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831145c8
	if (!ctx.cr6.eq) goto loc_831145C8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83110928
	ctx.lr = 0x831145F8;
	sub_83110928(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x83114610;
	sub_82CA3EB8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83114648
	if (!ctx.cr6.eq) goto loc_83114648;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83110880
	ctx.lr = 0x83114630;
	sub_83110880(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83110880
	ctx.lr = 0x83114644;
	sub_83110880(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
loc_83114648:
	// stwx r30,r28,r18
	PPC_STORE_U32(ctx.r28.u32 + ctx.r18.u32, ctx.r30.u32);
	// stwx r29,r28,r16
	PPC_STORE_U32(ctx.r28.u32 + ctx.r16.u32, ctx.r29.u32);
loc_83114650:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_83114654:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,40
	ctx.r24.s64 = ctx.r24.s64 + 40;
	// bne 0x83114580
	if (!ctx.cr0.eq) goto loc_83114580;
loc_83114660:
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-792
	ctx.r6.s64 = ctx.r11.s64 + -792;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca5868
	ctx.lr = 0x83114678;
	sub_82CA5868(ctx, base);
	// mulli r30,r17,20
	ctx.r30.s64 = ctx.r17.s64 * 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83110880
	ctx.lr = 0x8311468C;
	sub_83110880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8304b5b8
	ctx.lr = 0x831146AC;
	sub_8304B5B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x831146c4
	if (!ctx.cr0.lt) goto loc_831146C4;
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x831146C4;
	sub_830FD318(ctx, base);
loc_831146C4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83114aec
	if (ctx.cr6.eq) goto loc_83114AEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r21,r31,6
	ctx.r21.s64 = ctx.r31.s64 + 6;
	// lfd f29,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// lfs f30,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_831146E8:
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r20,r21,-6
	ctx.r20.s64 = ctx.r21.s64 + -6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8310fde0
	ctx.lr = 0x831146F8;
	sub_8310FDE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114acc
	if (ctx.cr0.eq) goto loc_83114ACC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83114718
	if (ctx.cr6.eq) goto loc_83114718;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83114b5c
	if (!ctx.cr6.eq) goto loc_83114B5C;
loc_83114718:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// rlwinm r29,r9,29,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// divw r4,r11,r10
	ctx.r4.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x831959b0
	ctx.lr = 0x83114738;
	sub_831959B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8304b5b8
	ctx.lr = 0x83114754;
	sub_8304B5B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x83114b70
	if (ctx.cr0.lt) goto loc_83114B70;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,25,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// sth r11,2(r21)
	PPC_STORE_U16(ctx.r21.u32 + 2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// sth r11,-2(r21)
	PPC_STORE_U16(ctx.r21.u32 + -2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8311480c
	if (ctx.cr6.lt) goto loc_8311480C;
	// beq cr6,0x831147ec
	if (ctx.cr6.eq) goto loc_831147EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8311482c
	if (ctx.cr6.lt) goto loc_8311482C;
	// bne cr6,0x83114b80
	if (!ctx.cr6.eq) goto loc_83114B80;
	// lwz r11,804(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831147b4
	if (ctx.cr6.eq) goto loc_831147B4;
	// lwz r11,800(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 800);
	// b 0x831147e0
	goto loc_831147E0;
loc_831147B4:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831147c8
	if (ctx.cr0.eq) goto loc_831147C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831147e0
	goto loc_831147E0;
loc_831147C8:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// xori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 ^ 16;
loc_831147E0:
	// lhz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x83114828
	goto loc_83114828;
loc_831147EC:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x8311482c
	if (!ctx.cr6.eq) goto loc_8311482C;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x83114828
	goto loc_83114828;
loc_8311480C:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x8311482c
	if (!ctx.cr6.eq) goto loc_8311482C;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
loc_83114828:
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
loc_8311482C:
	// addi r7,r21,6
	ctx.r7.s64 = ctx.r21.s64 + 6;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8306e8f0
	ctx.lr = 0x83114844;
	sub_8306E8F0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x83114b8c
	if (ctx.cr0.lt) goto loc_83114B8C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x83114acc
	if (ctx.cr6.eq) goto loc_83114ACC;
	// lwz r24,16(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83114acc
	if (ctx.cr6.eq) goto loc_83114ACC;
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83114880
	if (!ctx.cr6.eq) goto loc_83114880;
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83114acc
	if (ctx.cr6.eq) goto loc_83114ACC;
loc_83114880:
	// lhz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r27,r11,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r23,r27,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83110880
	ctx.lr = 0x831148A4;
	sub_83110880(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,56(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r29,r29,r11
	ctx.r29.u32 = ctx.r29.u32 / ctx.r11.u32;
	// twllei r11,0
	// beq cr6,0x831148e8
	if (ctx.cr6.eq) goto loc_831148E8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83194ba8
	ctx.lr = 0x831148E4;
	sub_83194BA8(ctx, base);
	// lwz r26,32(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_831148E8:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83114914
	if (ctx.cr6.eq) goto loc_83114914;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83114a78
	if (ctx.cr6.eq) goto loc_83114A78;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x83194c88
	ctx.lr = 0x83114908;
	sub_83194C88(ctx, base);
	// lwz r26,12(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// b 0x8311492c
	goto loc_8311492C;
loc_83114914:
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83114a78
	if (!ctx.cr6.lt) goto loc_83114A78;
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8311492C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83114a54
	if (ctx.cr6.eq) goto loc_83114A54;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x83114a78
	if (!ctx.cr6.lt) goto loc_83114A78;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83114a08
	if (ctx.cr6.lt) goto loc_83114A08;
	// beq cr6,0x831149d0
	if (ctx.cr6.eq) goto loc_831149D0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x83114bac
	if (!ctx.cr6.lt) goto loc_83114BAC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x831149ac
	if (ctx.cr6.lt) goto loc_831149AC;
	// beq cr6,0x8311498c
	if (ctx.cr6.eq) goto loc_8311498C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8311497c
	if (ctx.cr6.lt) goto loc_8311497C;
	// bne cr6,0x83114bb8
	if (!ctx.cr6.eq) goto loc_83114BB8;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x8311499c
	goto loc_8311499C;
loc_8311497C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x83114998
	goto loc_83114998;
loc_8311498C:
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_83114998:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8311499C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x83114a54
	goto loc_83114A54;
loc_831149AC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831149c0
	if (ctx.cr6.eq) goto loc_831149C0;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x831149c4
	goto loc_831149C4;
loc_831149C0:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_831149C4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// b 0x83114a54
	goto loc_83114A54;
loc_831149D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83114a3c
	if (ctx.cr6.lt) goto loc_83114A3C;
	// beq cr6,0x83114a00
	if (ctx.cr6.eq) goto loc_83114A00;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x83114a00
	if (ctx.cr6.lt) goto loc_83114A00;
	// bne cr6,0x83114bc4
	if (!ctx.cr6.eq) goto loc_83114BC4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.f0.u32);
	// b 0x83114a54
	goto loc_83114A54;
loc_83114A00:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83114a4c
	goto loc_83114A4C;
loc_83114A08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83114a3c
	if (ctx.cr6.lt) goto loc_83114A3C;
	// beq cr6,0x83114a3c
	if (ctx.cr6.eq) goto loc_83114A3C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x83114a3c
	if (ctx.cr6.lt) goto loc_83114A3C;
	// bne cr6,0x83114bd0
	if (!ctx.cr6.eq) goto loc_83114BD0;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x83114a4c
	if (!ctx.cr6.eq) goto loc_83114A4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83114a4c
	goto loc_83114A4C;
loc_83114A3C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
loc_83114A4C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
loc_83114A54:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// twllei r29,0
	// divwu r11,r31,r29
	ctx.r11.u32 = ctx.r31.u32 / ctx.r29.u32;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subf. r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831148e8
	if (!ctx.cr0.eq) goto loc_831148E8;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x831148e8
	goto loc_831148E8;
loc_83114A78:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x83114aa8
	if (!ctx.cr6.eq) goto loc_83114AA8;
	// rlwinm. r11,r27,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114aa8
	if (ctx.cr0.eq) goto loc_83114AA8;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_83114A94:
	// li r9,1
	ctx.r9.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x83114a94
	if (!ctx.cr0.eq) goto loc_83114A94;
loc_83114AA8:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// addi r7,r20,16
	ctx.r7.s64 = ctx.r20.s64 + 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8304b5b8
	ctx.lr = 0x83114AC4;
	sub_8304B5B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x83114b9c
	if (ctx.cr0.lt) goto loc_83114B9C;
loc_83114ACC:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r21,r21,20
	ctx.r21.s64 = ctx.r21.s64 + 20;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x831146e8
	if (ctx.cr6.lt) goto loc_831146E8;
	// lwz r20,92(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r21,444(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
loc_83114AEC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x83114b28
	if (ctx.cr6.eq) goto loc_83114B28;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83114b28
	if (ctx.cr6.eq) goto loc_83114B28;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// subf r8,r18,r16
	ctx.r8.s64 = ctx.r16.s64 - ctx.r18.s64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_83114B08:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83114b1c
	if (ctx.cr6.eq) goto loc_83114B1C;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_83114B1C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83114b08
	if (!ctx.cr0.eq) goto loc_83114B08;
loc_83114B28:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// bl 0x8301d2c0
	ctx.lr = 0x83114B44;
	sub_8301D2C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83114bdc
	if (!ctx.cr0.lt) goto loc_83114BDC;
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114B5C;
	sub_830FD318(ctx, base);
loc_83114B5C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,444
	ctx.r5.s64 = ctx.r11.s64 + 444;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114B70;
	sub_830FD318(ctx, base);
loc_83114B70:
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114B80;
	sub_830FD318(ctx, base);
loc_83114B80:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114B8C;
	sub_830FD318(ctx, base);
loc_83114B8C:
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114B9C;
	sub_830FD318(ctx, base);
loc_83114B9C:
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114BAC;
	sub_830FD318(ctx, base);
loc_83114BAC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114BB8;
	sub_830FD318(ctx, base);
loc_83114BB8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114BC4;
	sub_830FD318(ctx, base);
loc_83114BC4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114BD0;
	sub_830FD318(ctx, base);
loc_83114BD0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114BDC;
	sub_830FD318(ctx, base);
loc_83114BDC:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x8304b5b8
	ctx.lr = 0x83114BF8;
	sub_8304B5B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83114c10
	if (!ctx.cr0.lt) goto loc_83114C10;
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114C10;
	sub_830FD318(ctx, base);
loc_83114C10:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,432
	ctx.r4.s64 = ctx.r11.s64 + 432;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x8304b5b8
	ctx.lr = 0x83114C30;
	sub_8304B5B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83114c48
	if (!ctx.cr0.lt) goto loc_83114C48;
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114C48;
	sub_830FD318(ctx, base);
loc_83114C48:
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// bl 0x8304b528
	ctx.lr = 0x83114C50;
	sub_8304B528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r31,32768
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32768, ctx.xer);
	// ble cr6,0x83114c68
	if (!ctx.cr6.gt) goto loc_83114C68;
	// li r4,4548
	ctx.r4.s64 = 4548;
	// bl 0x830fd318
	ctx.lr = 0x83114C68;
	sub_830FD318(ctx, base);
loc_83114C68:
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83110880
	ctx.lr = 0x83114C74;
	sub_83110880(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 772);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8304b898
	ctx.lr = 0x83114C8C;
	sub_8304B898(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83114ca4
	if (!ctx.cr0.lt) goto loc_83114CA4;
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114CA4;
	sub_830FD318(ctx, base);
loc_83114CA4:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b96fe0
	ctx.lr = 0x83114CC0;
	sub_82B96FE0(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83114cd8
	if (ctx.cr6.eq) goto loc_83114CD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830f3ad8
	ctx.lr = 0x83114CD8;
	sub_830F3AD8(ctx, base);
loc_83114CD8:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114e08
	if (ctx.cr0.eq) goto loc_83114E08;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114d94
	if (!ctx.cr0.eq) goto loc_83114D94;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83114d94
	if (ctx.cr0.eq) goto loc_83114D94;
loc_83114CFC:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114d78
	if (!ctx.cr0.eq) goto loc_83114D78;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83114d78
	if (ctx.cr0.eq) goto loc_83114D78;
loc_83114D14:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x83114d2c
	if (ctx.cr6.lt) goto loc_83114D2C;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// ble cr6,0x83114d3c
	if (!ctx.cr6.gt) goto loc_83114D3C;
loc_83114D2C:
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// blt cr6,0x83114d44
	if (ctx.cr6.lt) goto loc_83114D44;
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bgt cr6,0x83114d44
	if (ctx.cr6.gt) goto loc_83114D44;
loc_83114D3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83114d48
	goto loc_83114D48;
loc_83114D44:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83114D48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114d5c
	if (ctx.cr0.eq) goto loc_83114D5C;
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r11.u32);
loc_83114D5C:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114d78
	if (!ctx.cr0.eq) goto loc_83114D78;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83114d14
	if (!ctx.cr6.eq) goto loc_83114D14;
loc_83114D78:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114d94
	if (!ctx.cr0.eq) goto loc_83114D94;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83114cfc
	if (!ctx.cr6.eq) goto loc_83114CFC;
loc_83114D94:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83114de8
	if (ctx.cr0.eq) goto loc_83114DE8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83114de8
	goto loc_83114DE8;
loc_83114DAC:
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r10,r9,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114de8
	if (!ctx.cr0.eq) goto loc_83114DE8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83114DBC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83114ddc
	if (ctx.cr6.eq) goto loc_83114DDC;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,68(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// rlwinm. r7,r7,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83114de8
	if (ctx.cr0.eq) goto loc_83114DE8;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x83114dbc
	goto loc_83114DBC;
loc_83114DDC:
	// oris r10,r9,4096
	ctx.r10.u64 = ctx.r9.u64 | 268435456;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_83114DE8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83114e00
	if (!ctx.cr0.eq) goto loc_83114E00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83114dac
	if (!ctx.cr6.eq) goto loc_83114DAC;
loc_83114E00:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83114d94
	if (!ctx.cr0.eq) goto loc_83114D94;
loc_83114E08:
	// lwz r10,736(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 736);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,760(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// clrlwi. r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// beq 0x83114e3c
	if (ctx.cr0.eq) goto loc_83114E3C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_83114E3C:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831117f8
	ctx.lr = 0x83114E4C;
	sub_831117F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83114e70
	if (ctx.cr6.eq) goto loc_83114E70;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830f6610
	ctx.lr = 0x83114E64;
	sub_830F6610(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82b96da8
	ctx.lr = 0x83114E70;
	sub_82B96DA8(ctx, base);
loc_83114E70:
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83114e88
	if (ctx.cr0.eq) goto loc_83114E88;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x83114e8c
	if (ctx.cr0.eq) goto loc_83114E8C;
loc_83114E88:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83114E8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83114ea8
	if (ctx.cr0.eq) goto loc_83114EA8;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831117f8
	ctx.lr = 0x83114EA8;
	sub_831117F8(ctx, base);
loc_83114EA8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83114edc
	if (ctx.cr6.eq) goto loc_83114EDC;
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b97220
	ctx.lr = 0x83114EC4;
	sub_82B97220(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830f6610
	ctx.lr = 0x83114ED0;
	sub_830F6610(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82b96da8
	ctx.lr = 0x83114EDC;
	sub_82B96DA8(ctx, base);
loc_83114EDC:
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82b974f0
	ctx.lr = 0x83114EE4;
	sub_82B974F0(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83114f04
	if (ctx.cr6.eq) goto loc_83114F04;
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82b97300
	ctx.lr = 0x83114EF4;
	sub_82B97300(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x830f1a80
	ctx.lr = 0x83114F04;
	sub_830F1A80(ctx, base);
loc_83114F04:
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82b97548
	ctx.lr = 0x83114F0C;
	sub_82B97548(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d27900
	ctx.lr = 0x83114F14;
	sub_82D27900(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83114f2c
	if (!ctx.cr0.lt) goto loc_83114F2C;
	// stw r5,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x83114F2C;
	sub_830FD318(ctx, base);
loc_83114F2C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83114F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83114F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ca3190
	ctx.lr = 0x83114F68;
	sub_82CA3190(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83114F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83114F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,768(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82b975d8
	ctx.lr = 0x83114FB4;
	sub_82B975D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,768(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82b96c90
	ctx.lr = 0x83114FC0;
	sub_82B96C90(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r19,768(r22)
	PPC_STORE_U32(ctx.r22.u32 + 768, ctx.r19.u32);
	// blt cr6,0x83115044
	if (ctx.cr6.lt) goto loc_83115044;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83114ffc
	if (ctx.cr6.eq) goto loc_83114FFC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r30,r11,26240
	ctx.r30.s64 = ctx.r11.s64 + 26240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83114FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b983d8
	ctx.lr = 0x83114FFC;
	sub_82B983D8(ctx, base);
loc_83114FFC:
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83115044
	if (ctx.cr6.eq) goto loc_83115044;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311501C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8301de30
	ctx.lr = 0x83115024;
	sub_8301DE30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83115044
	if (!ctx.cr0.lt) goto loc_83115044;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83115040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
loc_83115044:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8311506c
	if (!ctx.cr6.lt) goto loc_8311506C;
	// stw r31,2480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2480, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fd318
	ctx.lr = 0x8311506C;
	sub_830FD318(ctx, base);
loc_8311506C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115080"))) PPC_WEAK_FUNC(sub_83115080);
PPC_FUNC_IMPL(__imp__sub_83115080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83115088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x831150b4
	if (ctx.cr6.lt) goto loc_831150B4;
loc_831150A8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83115188
	goto loc_83115188;
loc_831150B4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// bge cr6,0x831150a8
	if (!ctx.cr6.lt) goto loc_831150A8;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x831150a8
	if (ctx.cr6.gt) goto loc_831150A8;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x831150a8
	if (ctx.cr6.gt) goto loc_831150A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF80000;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r6,r5,3,26,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x38) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC7);
	// clrlwi r8,r11,19
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFF;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwimi r30,r6,13,13,18
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0x7E000) | (ctx.r30.u64 & 0xFFFFFFFFFFF81FFF);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x831150a8
	if (ctx.cr6.eq) goto loc_831150A8;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83115118;
	sub_82CA2C60(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r30,r11,0,19,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000) | (ctx.r30.u64 & 0xFFFFFFFFFFFFEFFF);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,21,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r11.u64 & 0x800);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,22,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFBFF) | (ctx.r11.u64 & 0x400);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,23,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFDFF) | (ctx.r11.u64 & 0x200);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,24,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r11.u64 & 0x100);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,25,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r11.u64 & 0x80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r10,0,26,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFFBF) | (ctx.r11.u64 & 0x40);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83115188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115190"))) PPC_WEAK_FUNC(sub_83115190);
PPC_FUNC_IMPL(__imp__sub_83115190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83115198;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x831151c4
	if (!ctx.cr6.eq) goto loc_831151C4;
loc_831151B8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83115264
	goto loc_83115264;
loc_831151C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x831151D4;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_831151DC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,35
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 35, ctx.xer);
	// bge cr6,0x831151b8
	if (!ctx.cr6.lt) goto loc_831151B8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831151b8
	if (ctx.cr6.eq) goto loc_831151B8;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// beq cr6,0x8311520c
	if (ctx.cr6.eq) goto loc_8311520C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x831151dc
	if (ctx.cr6.lt) goto loc_831151DC;
	// b 0x831151b8
	goto loc_831151B8;
loc_8311520C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83115230
	if (ctx.cr6.lt) goto loc_83115230;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8311521C:
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x8311521c
	if (!ctx.cr0.lt) goto loc_8311521C;
loc_83115230:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x831151b8
	if (ctx.cr6.eq) goto loc_831151B8;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// beq cr6,0x831151b8
	if (ctx.cr6.eq) goto loc_831151B8;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// bge cr6,0x831151b8
	if (!ctx.cr6.lt) goto loc_831151B8;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115080
	ctx.lr = 0x83115264;
	sub_83115080(ctx, base);
loc_83115264:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311526C"))) PPC_WEAK_FUNC(sub_8311526C);
PPC_FUNC_IMPL(__imp__sub_8311526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83115270"))) PPC_WEAK_FUNC(sub_83115270);
PPC_FUNC_IMPL(__imp__sub_83115270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83115278;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x831152a4
	if (!ctx.cr6.eq) goto loc_831152A4;
loc_83115298:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x831153ac
	goto loc_831153AC;
loc_831152A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x831152B4;
	sub_82CA2C60(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x83115298
	if (ctx.cr6.eq) goto loc_83115298;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_831152C8:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x83115298
	if (!ctx.cr6.lt) goto loc_83115298;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x831152c8
	if (!ctx.cr6.eq) goto loc_831152C8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x8311531c
	if (!ctx.cr6.lt) goto loc_8311531C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfic r10,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r10.s64 = 9 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311531c
	if (ctx.cr6.eq) goto loc_8311531C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83115310:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83115310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83115310;
loc_8311531C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_83115324:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,35
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 35, ctx.xer);
	// bge cr6,0x83115298
	if (!ctx.cr6.lt) goto loc_83115298;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83115298
	if (ctx.cr6.eq) goto loc_83115298;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// beq cr6,0x83115354
	if (ctx.cr6.eq) goto loc_83115354;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x83115324
	if (ctx.cr6.lt) goto loc_83115324;
	// b 0x83115298
	goto loc_83115298;
loc_83115354:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83115378
	if (ctx.cr6.lt) goto loc_83115378;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83115364:
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x83115364
	if (!ctx.cr0.lt) goto loc_83115364;
loc_83115378:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x83115298
	if (ctx.cr6.eq) goto loc_83115298;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// beq cr6,0x83115298
	if (ctx.cr6.eq) goto loc_83115298;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// bge cr6,0x83115298
	if (!ctx.cr6.lt) goto loc_83115298;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115080
	ctx.lr = 0x831153AC;
	sub_83115080(ctx, base);
loc_831153AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831153B4"))) PPC_WEAK_FUNC(sub_831153B4);
PPC_FUNC_IMPL(__imp__sub_831153B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831153B8"))) PPC_WEAK_FUNC(sub_831153B8);
PPC_FUNC_IMPL(__imp__sub_831153B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831153C0;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x831153e8
	if (!ctx.cr6.eq) goto loc_831153E8;
loc_831153DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83115478
	goto loc_83115478;
loc_831153E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x831153F8;
	sub_82CA2C60(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x831153dc
	if (ctx.cr6.eq) goto loc_831153DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8311540C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x831153dc
	if (!ctx.cr6.lt) goto loc_831153DC;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x8311540c
	if (!ctx.cr6.eq) goto loc_8311540C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x83115460
	if (!ctx.cr6.lt) goto loc_83115460;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfic r10,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r10.s64 = 9 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83115460
	if (ctx.cr6.eq) goto loc_83115460;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83115454:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83115454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83115454;
loc_83115460:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83115080
	ctx.lr = 0x83115478;
	sub_83115080(ctx, base);
loc_83115478:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115480"))) PPC_WEAK_FUNC(sub_83115480);
PPC_FUNC_IMPL(__imp__sub_83115480) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm. r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831155ec
	if (!ctx.cr0.eq) goto loc_831155EC;
	// rlwinm. r11,r10,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831155ec
	if (!ctx.cr0.eq) goto loc_831155EC;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r10,20,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x831155ec
	if (ctx.cr6.gt) goto loc_831155EC;
	// rlwinm r9,r10,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x831155ec
	if (ctx.cr6.gt) goto loc_831155EC;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r6,r9,29,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r4,r9,26,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// beq cr6,0x8311552c
	if (ctx.cr6.eq) goto loc_8311552C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x831155ec
	if (!ctx.cr6.gt) goto loc_831155EC;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// ble cr6,0x8311552c
	if (!ctx.cr6.gt) goto loc_8311552C;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// ble cr6,0x831155ec
	if (!ctx.cr6.gt) goto loc_831155EC;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x831155ec
	if (ctx.cr6.gt) goto loc_831155EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
loc_83115510:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x831155ec
	if (!ctx.cr6.eq) goto loc_831155EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83115510
	if (ctx.cr6.lt) goto loc_83115510;
loc_8311552C:
	// rlwinm. r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83115540
	if (!ctx.cr0.eq) goto loc_83115540;
	// lbz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831155ec
	if (ctx.cr0.eq) goto loc_831155EC;
loc_83115540:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
loc_83115548:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// beq cr6,0x831155ec
	if (ctx.cr6.eq) goto loc_831155EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83115548
	if (ctx.cr6.lt) goto loc_83115548;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// beq cr6,0x831155ec
	if (ctx.cr6.eq) goto loc_831155EC;
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// beq cr6,0x831155ec
	if (ctx.cr6.eq) goto loc_831155EC;
	// rlwinm r10,r11,14,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x831155ec
	if (ctx.cr6.eq) goto loc_831155EC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831155a8
	if (ctx.cr6.eq) goto loc_831155A8;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bge cr6,0x831155a8
	if (!ctx.cr6.lt) goto loc_831155A8;
	// lbz r10,40(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x831155ec
	if (ctx.cr0.eq) goto loc_831155EC;
loc_831155A8:
	// rlwinm r10,r11,0,6,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000000;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831155ec
	if (ctx.cr6.eq) goto loc_831155EC;
	// rlwinm r10,r11,0,4,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000000;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831155ec
	if (ctx.cr6.eq) goto loc_831155EC;
	// rlwinm. r10,r11,0,8,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831155ec
	if (!ctx.cr0.eq) goto loc_831155EC;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831155ec
	if (!ctx.cr0.eq) goto loc_831155EC;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm. r11,r11,0,18,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831155ec
	if (!ctx.cr0.eq) goto loc_831155EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831155EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831155F8"))) PPC_WEAK_FUNC(sub_831155F8);
PPC_FUNC_IMPL(__imp__sub_831155F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311566c
	if (!ctx.cr0.eq) goto loc_8311566C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,68(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r6,28(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// blt cr6,0x831156cc
	if (ctx.cr6.lt) goto loc_831156CC;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,72(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r6,2,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 2) & 0x3FFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFC00000003);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x831156cc
	if (ctx.cr6.gt) goto loc_831156CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8311566c
	if (ctx.cr6.eq) goto loc_8311566C;
loc_8311564C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831156ac
	if (ctx.cr6.eq) goto loc_831156AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8311564c
	if (ctx.cr6.lt) goto loc_8311564C;
loc_8311566C:
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x831156b4
	if (ctx.cr6.gt) goto loc_831156B4;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bge cr6,0x831156ac
	if (!ctx.cr6.lt) goto loc_831156AC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x831156cc
	if (ctx.cr6.lt) goto loc_831156CC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x831156ac
	if (!ctx.cr6.gt) goto loc_831156AC;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x831156cc
	if (!ctx.cr6.gt) goto loc_831156CC;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bgt cr6,0x831156cc
	if (ctx.cr6.gt) goto loc_831156CC;
loc_831156AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831156B4:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x831156cc
	if (ctx.cr6.lt) goto loc_831156CC;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x831156ac
	if (!ctx.cr6.gt) goto loc_831156AC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// beq cr6,0x831156ac
	if (ctx.cr6.eq) goto loc_831156AC;
loc_831156CC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831156D8"))) PPC_WEAK_FUNC(sub_831156D8);
PPC_FUNC_IMPL(__imp__sub_831156D8) {
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
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831157c0
	if (!ctx.cr0.eq) goto loc_831157C0;
	// rlwinm. r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831157c0
	if (!ctx.cr0.eq) goto loc_831157C0;
	// lwz r9,32(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// rlwinm r8,r11,20,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x831157c0
	if (ctx.cr6.gt) goto loc_831157C0;
	// rlwinm r8,r11,27,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x831157c0
	if (ctx.cr6.gt) goto loc_831157C0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r8,r11,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r31,r9,29,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r30,r9,26,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq 0x831157c0
	if (ctx.cr0.eq) goto loc_831157C0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r8,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831157c0
	if (!ctx.cr0.eq) goto loc_831157C0;
	// rlwinm. r10,r8,0,8,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831157c0
	if (!ctx.cr0.eq) goto loc_831157C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_8311576C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// beq cr6,0x831157c0
	if (ctx.cr6.eq) goto loc_831157C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8311576c
	if (ctx.cr6.lt) goto loc_8311576C;
	// rlwinm r11,r11,0,5,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000000;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831157c0
	if (ctx.cr6.eq) goto loc_831157C0;
	// rlwinm. r11,r8,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831157a8
	if (ctx.cr0.eq) goto loc_831157A8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x831157c0
	if (ctx.cr6.eq) goto loc_831157C0;
loc_831157A8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x831155f8
	ctx.lr = 0x831157B0;
	sub_831155F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831157c8
	if (ctx.cr0.lt) goto loc_831157C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831157c8
	goto loc_831157C8;
loc_831157C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_831157C8:
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

__attribute__((alias("__imp__sub_831157E0"))) PPC_WEAK_FUNC(sub_831157E0);
PPC_FUNC_IMPL(__imp__sub_831157E0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x8311583c
	if (ctx.cr6.gt) goto loc_8311583C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x83115828
	if (!ctx.cr6.lt) goto loc_83115828;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x83115850
	if (ctx.cr6.lt) goto loc_83115850;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x83115880
	if (!ctx.cr6.lt) goto loc_83115880;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x83115850
	goto loc_83115850;
loc_83115828:
	// lbz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83115880
	if (ctx.cr0.eq) goto loc_83115880;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83115850
	goto loc_83115850;
loc_8311583C:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x83115850
	if (ctx.cr6.eq) goto loc_83115850;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x83115880
	if (!ctx.cr6.eq) goto loc_83115880;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83115850:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x8311589c
	if (ctx.cr6.gt) goto loc_8311589C;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bge cr6,0x83115894
	if (!ctx.cr6.lt) goto loc_83115894;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// blt cr6,0x831158d8
	if (ctx.cr6.lt) goto loc_831158D8;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x8311588c
	if (ctx.cr6.lt) goto loc_8311588C;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// blt cr6,0x831158d8
	if (ctx.cr6.lt) goto loc_831158D8;
loc_83115880:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8311588C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x831158d8
	goto loc_831158D8;
loc_83115894:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x831158d4
	goto loc_831158D4;
loc_8311589C:
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// blt cr6,0x83115880
	if (ctx.cr6.lt) goto loc_83115880;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// ble cr6,0x831158c8
	if (!ctx.cr6.gt) goto loc_831158C8;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x831158d8
	if (ctx.cr6.eq) goto loc_831158D8;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// ble cr6,0x83115880
	if (!ctx.cr6.gt) goto loc_83115880;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bgt cr6,0x83115880
	if (ctx.cr6.gt) goto loc_83115880;
	// b 0x831158d8
	goto loc_831158D8;
loc_831158C8:
	// lbz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83115880
	if (ctx.cr0.eq) goto loc_83115880;
loc_831158D4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_831158D8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x83115880
	if (ctx.cr6.gt) goto loc_83115880;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bgt cr6,0x83115880
	if (ctx.cr6.gt) goto loc_83115880;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831158f8
	if (ctx.cr0.eq) goto loc_831158F8;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83115880
	if (ctx.cr0.eq) goto loc_83115880;
loc_831158F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115900"))) PPC_WEAK_FUNC(sub_83115900);
PPC_FUNC_IMPL(__imp__sub_83115900) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83115a38
	if (ctx.cr0.eq) goto loc_83115A38;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83115934
	if (!ctx.cr0.eq) goto loc_83115934;
	// rlwinm. r10,r11,0,18,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83115934
	if (!ctx.cr0.eq) goto loc_83115934;
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// ble cr6,0x83115940
	if (!ctx.cr6.gt) goto loc_83115940;
	// cmplwi cr6,r7,61
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 61, ctx.xer);
	// bge cr6,0x83115958
	if (!ctx.cr6.lt) goto loc_83115958;
loc_83115934:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83115940:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32856
	ctx.r10.u64 = ctx.r10.u64 | 32856;
	// lwzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83115934
	if (!ctx.cr6.lt) goto loc_83115934;
	// cmplwi cr6,r7,61
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 61, ctx.xer);
loc_83115958:
	// bne cr6,0x83115a04
	if (!ctx.cr6.eq) goto loc_83115A04;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32860
	ctx.r10.u64 = ctx.r10.u64 | 32860;
loc_83115964:
	// lwzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83115934
	if (ctx.cr6.eq) goto loc_83115934;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
loc_83115978:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrlwi. r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x83115934
	if (!ctx.cr0.eq) goto loc_83115934;
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// clrlwi. r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83115934
	if (!ctx.cr0.eq) goto loc_83115934;
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83115934
	if (!ctx.cr0.eq) goto loc_83115934;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x83115978
	if (ctx.cr6.lt) goto loc_83115978;
loc_831159B0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r7,62
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 62, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blt cr6,0x831159e4
	if (ctx.cr6.lt) goto loc_831159E4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83115934
	if (ctx.cr0.eq) goto loc_83115934;
	// cmplwi cr6,r7,62
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 62, ctx.xer);
	// bne cr6,0x831159e4
	if (!ctx.cr6.eq) goto loc_831159E4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_831159E4:
	// cmplwi cr6,r7,61
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 61, ctx.xer);
	// beq cr6,0x831159f4
	if (ctx.cr6.eq) goto loc_831159F4;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// bgt cr6,0x83115a64
	if (ctx.cr6.gt) goto loc_83115A64;
loc_831159F4:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83115a64
	if (!ctx.cr0.eq) goto loc_83115A64;
	// b 0x83115934
	goto loc_83115934;
loc_83115A04:
	// cmplwi cr6,r7,62
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 62, ctx.xer);
	// bne cr6,0x83115a24
	if (!ctx.cr6.eq) goto loc_83115A24;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32864
	ctx.r11.u64 = ctx.r11.u64 | 32864;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831159b0
	if (!ctx.cr6.eq) goto loc_831159B0;
	// b 0x83115934
	goto loc_83115934;
loc_83115A24:
	// cmplwi cr6,r7,63
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 63, ctx.xer);
	// bne cr6,0x831159b0
	if (!ctx.cr6.eq) goto loc_831159B0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32868
	ctx.r10.u64 = ctx.r10.u64 | 32868;
	// b 0x83115964
	goto loc_83115964;
loc_83115A38:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83115934
	if (!ctx.cr0.eq) goto loc_83115934;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83115934
	if (!ctx.cr0.eq) goto loc_83115934;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r11,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83115934
	if (ctx.cr6.gt) goto loc_83115934;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83115934
	if (ctx.cr6.gt) goto loc_83115934;
loc_83115A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115A6C"))) PPC_WEAK_FUNC(sub_83115A6C);
PPC_FUNC_IMPL(__imp__sub_83115A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83115A70"))) PPC_WEAK_FUNC(sub_83115A70);
PPC_FUNC_IMPL(__imp__sub_83115A70) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// beq cr6,0x83115ac0
	if (ctx.cr6.eq) goto loc_83115AC0;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x83115abc
	if (ctx.cr6.eq) goto loc_83115ABC;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x83115ac0
	if (ctx.cr6.eq) goto loc_83115AC0;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x83115abc
	if (ctx.cr6.eq) goto loc_83115ABC;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x83115ac0
	if (ctx.cr6.eq) goto loc_83115AC0;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x83115b24
	if (!ctx.cr6.eq) goto loc_83115B24;
loc_83115ABC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_83115AC0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r9,8,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x83115ad8
	if (ctx.cr6.lt) goto loc_83115AD8;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x83115ae0
	if (!ctx.cr6.gt) goto loc_83115AE0;
loc_83115AD8:
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x83115aec
	if (!ctx.cr6.eq) goto loc_83115AEC;
loc_83115AE0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83115be4
	goto loc_83115BE4;
loc_83115AEC:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r7,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83115ae0
	if (ctx.cr0.eq) goto loc_83115AE0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwimi r11,r9,4,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r11,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x83115ae0
	if (ctx.cr6.gt) goto loc_83115AE0;
loc_83115B24:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
loc_83115B2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// subfic r11,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r9.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// slw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// and r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_83115B40:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83115b84
	if (ctx.cr6.eq) goto loc_83115B84;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x83115b58
	if (!ctx.cr6.eq) goto loc_83115B58;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83115b84
	if (!ctx.cr0.eq) goto loc_83115B84;
loc_83115B58:
	// subfic r11,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r9.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r31,r11,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83115ae0
	if (!ctx.cr0.eq) goto loc_83115AE0;
	// lwz r31,32(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x83115ae0
	if (ctx.cr6.gt) goto loc_83115AE0;
	// b 0x83115bc8
	goto loc_83115BC8;
loc_83115B84:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r31,r11,0,0,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83115ba0
	if (!ctx.cr0.eq) goto loc_83115BA0;
	// rlwinm. r31,r11,0,1,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83115ba0
	if (!ctx.cr0.eq) goto loc_83115BA0;
	// rlwinm. r31,r11,0,2,2
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83115ae0
	if (!ctx.cr0.eq) goto loc_83115AE0;
loc_83115BA0:
	// rlwinm. r31,r11,0,0,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83115bc8
	if (ctx.cr0.eq) goto loc_83115BC8;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83115bc8
	if (!ctx.cr0.eq) goto loc_83115BC8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83115ae0
	if (ctx.cr0.eq) goto loc_83115AE0;
loc_83115BC8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x83115b40
	if (ctx.cr6.lt) goto loc_83115B40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x83115b2c
	if (ctx.cr6.lt) goto loc_83115B2C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83115BE4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115BEC"))) PPC_WEAK_FUNC(sub_83115BEC);
PPC_FUNC_IMPL(__imp__sub_83115BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83115BF0"))) PPC_WEAK_FUNC(sub_83115BF0);
PPC_FUNC_IMPL(__imp__sub_83115BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83115BF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83115c28
	if (ctx.cr6.lt) goto loc_83115C28;
loc_83115C1C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83115dc8
	goto loc_83115DC8;
loc_83115C28:
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq 0x83115c50
	if (ctx.cr0.eq) goto loc_83115C50;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r12,-4417
	ctx.r12.s64 = -4417;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_83115C50:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// clrlwi. r25,r7,24
	ctx.r25.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x83115c6c
	if (ctx.cr0.eq) goto loc_83115C6C;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// b 0x83115c94
	goto loc_83115C94;
loc_83115C6C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83115c7c
	if (!ctx.cr0.eq) goto loc_83115C7C;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_83115C7C:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r10,512
	ctx.r10.s64 = 512;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwimi r10,r27,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83115C94:
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83115CA8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83115cbc
	if (ctx.cr0.eq) goto loc_83115CBC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83115c1c
	if (!ctx.cr6.eq) goto loc_83115C1C;
loc_83115CBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwimi r9,r8,30,0,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0xC0000000) | (ctx.r9.u64 & 0xFFFFFFFF3FFFFFFF);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x83115ca8
	if (ctx.cr6.lt) goto loc_83115CA8;
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x83115cec
	if (ctx.cr0.eq) goto loc_83115CEC;
	// bne cr6,0x83115cf0
	if (!ctx.cr6.eq) goto loc_83115CF0;
	// b 0x83115c1c
	goto loc_83115C1C;
loc_83115CEC:
	// beq cr6,0x83115d50
	if (ctx.cr6.eq) goto loc_83115D50;
loc_83115CF0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83115d08
	if (ctx.cr6.eq) goto loc_83115D08;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83115c1c
	if (!ctx.cr0.eq) goto loc_83115C1C;
loc_83115D08:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83115d50
	if (ctx.cr6.eq) goto loc_83115D50;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83115d34
	if (ctx.cr0.eq) goto loc_83115D34;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115480
	ctx.lr = 0x83115D30;
	sub_83115480(ctx, base);
	// b 0x83115da8
	goto loc_83115DA8;
loc_83115D34:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83115d50
	if (ctx.cr6.eq) goto loc_83115D50;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831156d8
	ctx.lr = 0x83115D4C;
	sub_831156D8(ctx, base);
	// b 0x83115da8
	goto loc_83115DA8;
loc_83115D50:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115a70
	ctx.lr = 0x83115D64;
	sub_83115A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83115da8
	if (ctx.cr0.lt) goto loc_83115DA8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831157e0
	ctx.lr = 0x83115D84;
	sub_831157E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83115da8
	if (ctx.cr0.lt) goto loc_83115DA8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115900
	ctx.lr = 0x83115D9C;
	sub_83115900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83115da8
	if (ctx.cr0.lt) goto loc_83115DA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83115DA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83115dc8
	if (ctx.cr6.lt) goto loc_83115DC8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83115dc4
	if (ctx.cr6.eq) goto loc_83115DC4;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_83115DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83115DC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115DD0"))) PPC_WEAK_FUNC(sub_83115DD0);
PPC_FUNC_IMPL(__imp__sub_83115DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x83115DD8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r29,208(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r20,r29,20,29,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x7;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r20,6
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 6, ctx.xer);
	// ble cr6,0x83115e0c
	if (!ctx.cr6.gt) goto loc_83115E0C;
loc_83115E00:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83115f28
	goto loc_83115F28;
loc_83115E0C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83115f00
	if (ctx.cr6.eq) goto loc_83115F00;
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r26,r29,20
	ctx.r26.u64 = ctx.r29.u32 & 0xFFF;
	// rlwinm r23,r29,1,19,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FFE;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83115E2C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83115e00
	if (!ctx.cr6.lt) goto loc_83115E00;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r8,r29,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xF;
	// rlwinm r9,r28,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0x30;
	// slw r7,r27,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// slw r8,r27,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r31.u8 & 0x3F));
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r28,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0xF;
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// xori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83115ec8
	if (ctx.cr6.eq) goto loc_83115EC8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x83115ec8
	if (ctx.cr6.eq) goto loc_83115EC8;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83115ec0
	if (ctx.cr6.eq) goto loc_83115EC0;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x83115ec0
	if (ctx.cr6.eq) goto loc_83115EC0;
	// not r11,r28
	ctx.r11.u64 = ~ctx.r28.u64;
	// rlwinm r8,r11,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// b 0x83115ecc
	goto loc_83115ECC;
loc_83115EC0:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x83115ecc
	goto loc_83115ECC;
loc_83115EC8:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_83115ECC:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83115bf0
	ctx.lr = 0x83115EE4;
	sub_83115BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83115e00
	if (ctx.cr0.lt) goto loc_83115E00;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x83115e2c
	if (ctx.cr6.lt) goto loc_83115E2C;
loc_83115F00:
	// rlwinm. r11,r29,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83115f24
	if (ctx.cr0.eq) goto loc_83115F24;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83115F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83115F28:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115F30"))) PPC_WEAK_FUNC(sub_83115F30);
PPC_FUNC_IMPL(__imp__sub_83115F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83115F38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r4,r6,0,19,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r7,r9,0,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwimi r4,r6,0,11,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1F0000) | (ctx.r4.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwimi r7,r9,0,16,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r4,r27,0,18,18
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_83115F90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83115fb0
	if (!ctx.cr0.eq) goto loc_83115FB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83115f90
	if (!ctx.cr6.eq) goto loc_83115F90;
loc_83115FB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83116048
	if (!ctx.cr0.eq) goto loc_83116048;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r31,r10,16,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r28,r10,19,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// blt 0x83116048
	if (ctx.cr0.lt) goto loc_83116048;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x83116048
	if (!ctx.cr6.lt) goto loc_83116048;
	// clrlwi r4,r27,19
	ctx.r4.u64 = ctx.r27.u32 & 0x1FFF;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x83116048
	if (!ctx.cr6.gt) goto loc_83116048;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83116048
	if (!ctx.cr6.lt) goto loc_83116048;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115080
	ctx.lr = 0x83116010;
	sub_83115080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83116048
	if (ctx.cr0.lt) goto loc_83116048;
	// rlwinm r11,r27,16,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x1F;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115190
	ctx.lr = 0x83116038;
	sub_83115190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83116048
	if (ctx.cr0.lt) goto loc_83116048;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83116050
	goto loc_83116050;
loc_83116048:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83116050:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116058"))) PPC_WEAK_FUNC(sub_83116058);
PPC_FUNC_IMPL(__imp__sub_83116058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83116060;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r4,0,19,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1FFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r6,r9,0,20,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xC00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwimi r3,r4,0,11,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwimi r6,r9,0,16,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r3,r7,0,10,10
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x200000) | (ctx.r3.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_831160B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831160d8
	if (!ctx.cr0.eq) goto loc_831160D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x831160b8
	if (!ctx.cr6.eq) goto loc_831160B8;
loc_831160D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83116194
	if (!ctx.cr0.eq) goto loc_83116194;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r30,r10,16,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r28,r10,19,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// ble 0x83116194
	if (!ctx.cr0.gt) goto loc_83116194;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bgt cr6,0x83116194
	if (ctx.cr6.gt) goto loc_83116194;
	// clrlwi r4,r7,19
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFF;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x83116194
	if (ctx.cr6.gt) goto loc_83116194;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83116194
	if (!ctx.cr6.lt) goto loc_83116194;
	// addic. r31,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r31.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8311613c
	if (ctx.cr0.eq) goto loc_8311613C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x8311613c
	if (!ctx.cr6.lt) goto loc_8311613C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83116140
	if (ctx.cr6.gt) goto loc_83116140;
loc_8311613C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83116140:
	// rlwinm r10,r7,16,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x1F;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83116194
	if (!ctx.cr6.eq) goto loc_83116194;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83115270
	ctx.lr = 0x83116164;
	sub_83115270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83116194
	if (ctx.cr0.lt) goto loc_83116194;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831153b8
	ctx.lr = 0x83116184;
	sub_831153B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83116194
	if (ctx.cr0.lt) goto loc_83116194;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8311619c
	goto loc_8311619C;
loc_83116194:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8311619C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831161A4"))) PPC_WEAK_FUNC(sub_831161A4);
PPC_FUNC_IMPL(__imp__sub_831161A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

