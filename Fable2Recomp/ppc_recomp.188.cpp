#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CA67D0"))) PPC_WEAK_FUNC(sub_82CA67D0);
PPC_FUNC_IMPL(__imp__sub_82CA67D0) {
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
	// bne cr6,0x82ca6820
	if (!ctx.cr6.eq) goto loc_82CA6820;
loc_82CA67F4:
	// bl 0x82cab770
	ctx.lr = 0x82CA67F8;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA6818;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca6870
	goto loc_82CA6870;
loc_82CA6820:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ca680
	ctx.lr = 0x82CA682C;
	sub_822CA680(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ca6860
	if (ctx.cr6.lt) goto loc_82CA6860;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x82ca67f4
	goto loc_82CA67F4;
loc_82CA6840:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x82ca685c
	if (ctx.cr6.lt) goto loc_82CA685C;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgt cr6,0x82ca685c
	if (ctx.cr6.gt) goto loc_82CA685C;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82CA685C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82CA6860:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ca6840
	if (!ctx.cr0.eq) goto loc_82CA6840;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA6870:
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

__attribute__((alias("__imp__sub_82CA6888"))) PPC_WEAK_FUNC(sub_82CA6888);
PPC_FUNC_IMPL(__imp__sub_82CA6888) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ca67d0
	sub_82CA67D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6890"))) PPC_WEAK_FUNC(sub_82CA6890);
PPC_FUNC_IMPL(__imp__sub_82CA6890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca68d0
	if (!ctx.cr6.eq) goto loc_82CA68D0;
loc_82CA68A8:
	// bl 0x82cab770
	ctx.lr = 0x82CA68AC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA68CC;
	sub_82CAB630(ctx, base);
	// b 0x82ca69b8
	goto loc_82CA69B8;
loc_82CA68D0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ca68a8
	if (ctx.cr6.eq) goto loc_82CA68A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca68ec
	if (!ctx.cr6.eq) goto loc_82CA68EC;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca68a8
	if (ctx.cr6.eq) goto loc_82CA68A8;
loc_82CA68EC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82ca6940
	if (ctx.cr0.eq) goto loc_82CA6940;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
loc_82CA68FC:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ca6924
	if (ctx.cr6.eq) goto loc_82CA6924;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82CA690C:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ca6924
	if (ctx.cr6.eq) goto loc_82CA6924;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ca690c
	if (!ctx.cr0.eq) goto loc_82CA690C;
loc_82CA6924:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ca6940
	if (ctx.cr0.eq) goto loc_82CA6940;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82ca68fc
	if (!ctx.cr0.eq) goto loc_82CA68FC;
loc_82CA6940:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ca69ac
	if (ctx.cr0.eq) goto loc_82CA69AC;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
loc_82CA6954:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ca6980
	if (ctx.cr6.eq) goto loc_82CA6980;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82CA6968:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ca6980
	if (ctx.cr6.eq) goto loc_82CA6980;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ca6968
	if (!ctx.cr0.eq) goto loc_82CA6968;
loc_82CA6980:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ca69a0
	if (!ctx.cr0.eq) goto loc_82CA69A0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ca6954
	if (!ctx.cr0.eq) goto loc_82CA6954;
	// b 0x82ca69ac
	goto loc_82CA69AC;
loc_82CA69A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82CA69AC:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ca69bc
	if (!ctx.cr6.eq) goto loc_82CA69BC;
loc_82CA69B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA69BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA69CC"))) PPC_WEAK_FUNC(sub_82CA69CC);
PPC_FUNC_IMPL(__imp__sub_82CA69CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA69D0"))) PPC_WEAK_FUNC(sub_82CA69D0);
PPC_FUNC_IMPL(__imp__sub_82CA69D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82ca2c60
	ctx.lr = 0x82CA6A00;
	sub_82CA2C60(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca6a28
	if (ctx.cr6.eq) goto loc_82CA6A28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca6a28
	if (ctx.cr0.eq) goto loc_82CA6A28;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82CA6A28:
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cc0d58
	ctx.lr = 0x82CA6A3C;
	sub_82CC0D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82CA6A54"))) PPC_WEAK_FUNC(sub_82CA6A54);
PPC_FUNC_IMPL(__imp__sub_82CA6A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6A58"))) PPC_WEAK_FUNC(sub_82CA6A58);
PPC_FUNC_IMPL(__imp__sub_82CA6A58) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,3728
	ctx.r11.s64 = ctx.r11.s64 + 3728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb1368
	ctx.lr = 0x82CA6A84;
	sub_82CB1368(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca6a94
	if (ctx.cr0.eq) goto loc_82CA6A94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82CA6A94;
	sub_824FE010(ctx, base);
loc_82CA6A94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82CA6AB0"))) PPC_WEAK_FUNC(sub_82CA6AB0);
PPC_FUNC_IMPL(__imp__sub_82CA6AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// andi. r3,r11,259
	ctx.r3.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6ACC"))) PPC_WEAK_FUNC(sub_82CA6ACC);
PPC_FUNC_IMPL(__imp__sub_82CA6ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6AD0"))) PPC_WEAK_FUNC(sub_82CA6AD0);
PPC_FUNC_IMPL(__imp__sub_82CA6AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6AEC"))) PPC_WEAK_FUNC(sub_82CA6AEC);
PPC_FUNC_IMPL(__imp__sub_82CA6AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6AF0"))) PPC_WEAK_FUNC(sub_82CA6AF0);
PPC_FUNC_IMPL(__imp__sub_82CA6AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6B0C"))) PPC_WEAK_FUNC(sub_82CA6B0C);
PPC_FUNC_IMPL(__imp__sub_82CA6B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6B10"))) PPC_WEAK_FUNC(sub_82CA6B10);
PPC_FUNC_IMPL(__imp__sub_82CA6B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6B2C"))) PPC_WEAK_FUNC(sub_82CA6B2C);
PPC_FUNC_IMPL(__imp__sub_82CA6B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6B30"))) PPC_WEAK_FUNC(sub_82CA6B30);
PPC_FUNC_IMPL(__imp__sub_82CA6B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6B4C"))) PPC_WEAK_FUNC(sub_82CA6B4C);
PPC_FUNC_IMPL(__imp__sub_82CA6B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6B50"))) PPC_WEAK_FUNC(sub_82CA6B50);
PPC_FUNC_IMPL(__imp__sub_82CA6B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6B6C"))) PPC_WEAK_FUNC(sub_82CA6B6C);
PPC_FUNC_IMPL(__imp__sub_82CA6B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6B70"))) PPC_WEAK_FUNC(sub_82CA6B70);
PPC_FUNC_IMPL(__imp__sub_82CA6B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6B8C"))) PPC_WEAK_FUNC(sub_82CA6B8C);
PPC_FUNC_IMPL(__imp__sub_82CA6B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6B90"))) PPC_WEAK_FUNC(sub_82CA6B90);
PPC_FUNC_IMPL(__imp__sub_82CA6B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// andi. r3,r11,263
	ctx.r3.u64 = ctx.r11.u64 & 263;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6BAC"))) PPC_WEAK_FUNC(sub_82CA6BAC);
PPC_FUNC_IMPL(__imp__sub_82CA6BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6BB0"))) PPC_WEAK_FUNC(sub_82CA6BB0);
PPC_FUNC_IMPL(__imp__sub_82CA6BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6BCC"))) PPC_WEAK_FUNC(sub_82CA6BCC);
PPC_FUNC_IMPL(__imp__sub_82CA6BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6BD0"))) PPC_WEAK_FUNC(sub_82CA6BD0);
PPC_FUNC_IMPL(__imp__sub_82CA6BD0) {
	PPC_FUNC_PROLOGUE();
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82cb1328
	sub_82CB1328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6BD8"))) PPC_WEAK_FUNC(sub_82CA6BD8);
PPC_FUNC_IMPL(__imp__sub_82CA6BD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,263
	ctx.r4.s64 = 263;
	// b 0x82cb1328
	sub_82CB1328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6BE0"))) PPC_WEAK_FUNC(sub_82CA6BE0);
PPC_FUNC_IMPL(__imp__sub_82CA6BE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,343
	ctx.r4.s64 = 343;
	// b 0x82cb1328
	sub_82CB1328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6BE8"))) PPC_WEAK_FUNC(sub_82CA6BE8);
PPC_FUNC_IMPL(__imp__sub_82CA6BE8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca6c0c
	if (ctx.cr6.eq) goto loc_82CA6C0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca6c38
	if (!ctx.cr6.eq) goto loc_82CA6C38;
loc_82CA6C0C:
	// bl 0x82cab770
	ctx.lr = 0x82CA6C10;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA6C30;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca6ce4
	goto loc_82CA6CE4;
loc_82CA6C38:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca6c4c
	if (!ctx.cr6.eq) goto loc_82CA6C4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x82ca6c0c
	goto loc_82CA6C0C;
loc_82CA6C4C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CA6C50:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ca6c68
	if (ctx.cr0.eq) goto loc_82CA6C68;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82ca6c50
	if (!ctx.cr0.eq) goto loc_82CA6C50;
loc_82CA6C68:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca6ca4
	if (!ctx.cr6.eq) goto loc_82CA6CA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// bl 0x82cab770
	ctx.lr = 0x82CA6C7C;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CA6C80:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA6C9C;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca6ce4
	goto loc_82CA6CE4;
loc_82CA6CA4:
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82ca6cc4
	if (ctx.cr0.eq) goto loc_82CA6CC4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ca6ca4
	if (!ctx.cr0.eq) goto loc_82CA6CA4;
loc_82CA6CC4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca6ce0
	if (!ctx.cr6.eq) goto loc_82CA6CE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// bl 0x82cab770
	ctx.lr = 0x82CA6CD8;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82ca6c80
	goto loc_82CA6C80;
loc_82CA6CE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA6CE4:
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

__attribute__((alias("__imp__sub_82CA6CF8"))) PPC_WEAK_FUNC(sub_82CA6CF8);
PPC_FUNC_IMPL(__imp__sub_82CA6CF8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ca6d1c
	if (ctx.cr6.eq) goto loc_82CA6D1C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca6d48
	if (!ctx.cr6.eq) goto loc_82CA6D48;
loc_82CA6D1C:
	// bl 0x82cab770
	ctx.lr = 0x82CA6D20;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA6D40;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca6df4
	goto loc_82CA6DF4;
loc_82CA6D48:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca6d5c
	if (!ctx.cr6.eq) goto loc_82CA6D5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x82ca6d1c
	goto loc_82CA6D1C;
loc_82CA6D5C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CA6D60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ca6d78
	if (ctx.cr6.eq) goto loc_82CA6D78;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82ca6d60
	if (!ctx.cr0.eq) goto loc_82CA6D60;
loc_82CA6D78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca6db4
	if (!ctx.cr6.eq) goto loc_82CA6DB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82cab770
	ctx.lr = 0x82CA6D8C;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CA6D90:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA6DAC;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca6df4
	goto loc_82CA6DF4;
loc_82CA6DB4:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x82ca6dd4
	if (ctx.cr0.eq) goto loc_82CA6DD4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ca6db4
	if (!ctx.cr0.eq) goto loc_82CA6DB4;
loc_82CA6DD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca6df0
	if (!ctx.cr6.eq) goto loc_82CA6DF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82cab770
	ctx.lr = 0x82CA6DE8;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82ca6d90
	goto loc_82CA6D90;
loc_82CA6DF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA6DF4:
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

__attribute__((alias("__imp__sub_82CA6E08"))) PPC_WEAK_FUNC(sub_82CA6E08);
PPC_FUNC_IMPL(__imp__sub_82CA6E08) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca6e4c
	if (!ctx.cr6.eq) goto loc_82CA6E4C;
	// bl 0x82cab770
	ctx.lr = 0x82CA6E24;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA6E44;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca6e78
	goto loc_82CA6E78;
loc_82CA6E4C:
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA6E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA6E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA6E88"))) PPC_WEAK_FUNC(sub_82CA6E88);
PPC_FUNC_IMPL(__imp__sub_82CA6E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// b 0x82ca6e08
	sub_82CA6E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6EA0"))) PPC_WEAK_FUNC(sub_82CA6EA0);
PPC_FUNC_IMPL(__imp__sub_82CA6EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA6EA8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca6ef0
	if (!ctx.cr6.eq) goto loc_82CA6EF0;
loc_82CA6EC4:
	// bl 0x82cab770
	ctx.lr = 0x82CA6EC8;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA6EE8;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca6ff8
	goto loc_82CA6FF8;
loc_82CA6EF0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ca6f00
	if (ctx.cr6.eq) goto loc_82CA6F00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca6ec4
	if (ctx.cr6.eq) goto loc_82CA6EC4;
loc_82CA6F00:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r9,66
	ctx.r9.s64 = 66;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ca6f2c
	if (!ctx.cr6.gt) goto loc_82CA6F2C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x82ca6f30
	goto loc_82CA6F30;
loc_82CA6F2C:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82CA6F30:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA6F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca6f5c
	if (!ctx.cr6.eq) goto loc_82CA6F5C;
loc_82CA6F54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ca6ff8
	goto loc_82CA6FF8;
loc_82CA6F5C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82ca6fd4
	if (ctx.cr6.lt) goto loc_82CA6FD4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82ca6f90
	if (ctx.cr0.lt) goto loc_82CA6F90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ca6fa4
	goto loc_82CA6FA4;
loc_82CA6F90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	ctx.lr = 0x82CA6F9C;
	sub_82CAB7E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca6fd4
	if (ctx.cr6.eq) goto loc_82CA6FD4;
loc_82CA6FA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82ca6fc0
	if (ctx.cr0.lt) goto loc_82CA6FC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// b 0x82ca6f54
	goto loc_82CA6F54;
loc_82CA6FC0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	ctx.lr = 0x82CA6FCC;
	sub_82CAB7E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca6f54
	if (!ctx.cr6.eq) goto loc_82CA6F54;
loc_82CA6FD4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// sth r30,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r30.u16);
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_82CA6FF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CA7000"))) PPC_WEAK_FUNC(sub_82CA7000);
PPC_FUNC_IMPL(__imp__sub_82CA7000) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca702c
	if (!ctx.cr6.eq) goto loc_82CA702C;
loc_82CA7020:
	// bl 0x82cab770
	ctx.lr = 0x82CA7024;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82ca7078
	goto loc_82CA7078;
loc_82CA702C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca7020
	if (ctx.cr6.eq) goto loc_82CA7020;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ca7020
	if (ctx.cr6.eq) goto loc_82CA7020;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,5176
	ctx.r3.s64 = ctx.r11.s64 + 5176;
	// bl 0x82ca6ea0
	ctx.lr = 0x82CA7058;
	sub_82CA6EA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ca7068
	if (!ctx.cr0.lt) goto loc_82CA7068;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82CA7068:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82ca7098
	if (!ctx.cr6.eq) goto loc_82CA7098;
	// bl 0x82cab770
	ctx.lr = 0x82CA7074;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
loc_82CA7078:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA7094;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA7098:
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

__attribute__((alias("__imp__sub_82CA70AC"))) PPC_WEAK_FUNC(sub_82CA70AC);
PPC_FUNC_IMPL(__imp__sub_82CA70AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA70B0"))) PPC_WEAK_FUNC(sub_82CA70B0);
PPC_FUNC_IMPL(__imp__sub_82CA70B0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ca7000
	sub_82CA7000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA70BC"))) PPC_WEAK_FUNC(sub_82CA70BC);
PPC_FUNC_IMPL(__imp__sub_82CA70BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA70C0"))) PPC_WEAK_FUNC(sub_82CA70C0);
PPC_FUNC_IMPL(__imp__sub_82CA70C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// cmpw r5,r4
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82ca7104
	if (ctx.cr6.eq) goto loc_82CA7104;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82ca70f0
	if (ctx.cr0.eq) goto loc_82CA70F0;
loc_82CA70DC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82ca7114
	if (ctx.cr6.eq) goto loc_82CA7114;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne 0x82ca70dc
	if (!ctx.cr0.eq) goto loc_82CA70DC;
loc_82CA70F0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq 0x82ca70f0
	if (ctx.cr0.eq) goto loc_82CA70F0;
	// b 0x82ca70dc
	goto loc_82CA70DC;
loc_82CA7104:
	// beq 0x82ca7114
	if (ctx.cr0.eq) goto loc_82CA7114;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// b 0x82ca7104
	goto loc_82CA7104;
loc_82CA7114:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7118"))) PPC_WEAK_FUNC(sub_82CA7118);
PPC_FUNC_IMPL(__imp__sub_82CA7118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24272(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24272);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA7128;
	sub_82CA2BE0(ctx, base);
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
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r27,0
	ctx.r27.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca7198
	if (!ctx.cr6.eq) goto loc_82CA7198;
loc_82CA716C:
	// bl 0x82cab770
	ctx.lr = 0x82CA7170;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA7190;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca7310
	goto loc_82CA7310;
loc_82CA7198:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca716c
	if (ctx.cr6.eq) goto loc_82CA716C;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82ca8870
	ctx.lr = 0x82CA71C4;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca72c8
	if (!ctx.cr0.eq) goto loc_82CA72C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA71DC;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca722c
	if (ctx.cr6.eq) goto loc_82CA722C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA71EC;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca722c
	if (ctx.cr6.eq) goto loc_82CA722C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA71FC;
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7214;
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,-2648
	ctx.r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca7240
	goto loc_82CA7240;
loc_82CA722C:
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r28,r10,-2648
	ctx.r28.s64 = ctx.r10.s64 + -2648;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA7240:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca729c
	if (!ctx.cr0.eq) goto loc_82CA729C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7254;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca7290
	if (ctx.cr6.eq) goto loc_82CA7290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7264;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca7290
	if (ctx.cr6.eq) goto loc_82CA7290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7274;
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7284;
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CA7290:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca72c8
	if (ctx.cr0.eq) goto loc_82CA72C8;
loc_82CA729C:
	// bl 0x82cab770
	ctx.lr = 0x82CA72A0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA72C0;
	sub_82CAB630(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
loc_82CA72C8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ca7300
	if (!ctx.cr6.eq) goto loc_82CA7300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cab4e0
	ctx.lr = 0x82CA72D8;
	sub_82CAB4E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223f990
	ctx.lr = 0x82CA72F0;
	sub_8223F990(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cab5b8
	ctx.lr = 0x82CA7300;
	sub_82CAB5B8(ctx, base);
loc_82CA7300:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82ca7318
	ctx.lr = 0x82CA730C;
	sub_82CA7318(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CA7310:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CA7120"))) PPC_WEAK_FUNC(sub_82CA7120);
PPC_FUNC_IMPL(__imp__sub_82CA7120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA7128;
	sub_82CA2BE0(ctx, base);
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
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r27,0
	ctx.r27.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca7198
	if (!ctx.cr6.eq) goto loc_82CA7198;
loc_82CA716C:
	// bl 0x82cab770
	ctx.lr = 0x82CA7170;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA7190;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca7310
	goto loc_82CA7310;
loc_82CA7198:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca716c
	if (ctx.cr6.eq) goto loc_82CA716C;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82ca8870
	ctx.lr = 0x82CA71C4;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca72c8
	if (!ctx.cr0.eq) goto loc_82CA72C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA71DC;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca722c
	if (ctx.cr6.eq) goto loc_82CA722C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA71EC;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca722c
	if (ctx.cr6.eq) goto loc_82CA722C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA71FC;
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7214;
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,-2648
	ctx.r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca7240
	goto loc_82CA7240;
loc_82CA722C:
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r28,r10,-2648
	ctx.r28.s64 = ctx.r10.s64 + -2648;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA7240:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca729c
	if (!ctx.cr0.eq) goto loc_82CA729C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7254;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca7290
	if (ctx.cr6.eq) goto loc_82CA7290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7264;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca7290
	if (ctx.cr6.eq) goto loc_82CA7290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7274;
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA7284;
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CA7290:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca72c8
	if (ctx.cr0.eq) goto loc_82CA72C8;
loc_82CA729C:
	// bl 0x82cab770
	ctx.lr = 0x82CA72A0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA72C0;
	sub_82CAB630(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
loc_82CA72C8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ca7300
	if (!ctx.cr6.eq) goto loc_82CA7300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cab4e0
	ctx.lr = 0x82CA72D8;
	sub_82CAB4E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223f990
	ctx.lr = 0x82CA72F0;
	sub_8223F990(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cab5b8
	ctx.lr = 0x82CA7300;
	sub_82CAB5B8(ctx, base);
loc_82CA7300:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82ca7318
	ctx.lr = 0x82CA730C;
	sub_82CA7318(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CA7310:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CA7318"))) PPC_WEAK_FUNC(sub_82CA7318);
PPC_FUNC_IMPL(__imp__sub_82CA7318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82ca8930
	ctx.lr = 0x82CA7334;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7348"))) PPC_WEAK_FUNC(sub_82CA7348);
PPC_FUNC_IMPL(__imp__sub_82CA7348) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CA7368:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ca7368
	if (!ctx.cr6.eq) goto loc_82CA7368;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bne cr6,0x82ca73b8
	if (!ctx.cr6.eq) goto loc_82CA73B8;
loc_82CA738C:
	// bl 0x82cab770
	ctx.lr = 0x82CA7390;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA73B0;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca73f8
	goto loc_82CA73F8;
loc_82CA73B8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ca738c
	if (ctx.cr6.eq) goto loc_82CA738C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,73
	ctx.r6.s64 = 73;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82ca73e8
	if (ctx.cr6.gt) goto loc_82CA73E8;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82CA73E8:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA73F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA73F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7408"))) PPC_WEAK_FUNC(sub_82CA7408);
PPC_FUNC_IMPL(__imp__sub_82CA7408) {
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
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r10,8248
	ctx.r3.s64 = ctx.r10.s64 + 8248;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca7348
	ctx.lr = 0x82CA7454;
	sub_82CA7348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7464"))) PPC_WEAK_FUNC(sub_82CA7464);
PPC_FUNC_IMPL(__imp__sub_82CA7464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7468"))) PPC_WEAK_FUNC(sub_82CA7468);
PPC_FUNC_IMPL(__imp__sub_82CA7468) {
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
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r10,12896
	ctx.r3.s64 = ctx.r10.s64 + 12896;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca7348
	ctx.lr = 0x82CA74B4;
	sub_82CA7348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74C4"))) PPC_WEAK_FUNC(sub_82CA74C4);
PPC_FUNC_IMPL(__imp__sub_82CA74C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA74C8"))) PPC_WEAK_FUNC(sub_82CA74C8);
PPC_FUNC_IMPL(__imp__sub_82CA74C8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA74CC"))) PPC_WEAK_FUNC(sub_82CA74CC);
PPC_FUNC_IMPL(__imp__sub_82CA74CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA74D0"))) PPC_WEAK_FUNC(sub_82CA74D0);
PPC_FUNC_IMPL(__imp__sub_82CA74D0) {
	PPC_FUNC_PROLOGUE();
	// stfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -144, ctx.f14.u64);
	// stfd f15,-136(r12)
	PPC_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74D4"))) PPC_WEAK_FUNC(sub_82CA74D4);
PPC_FUNC_IMPL(__imp__sub_82CA74D4) {
	PPC_FUNC_PROLOGUE();
	// stfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74D8"))) PPC_WEAK_FUNC(sub_82CA74D8);
PPC_FUNC_IMPL(__imp__sub_82CA74D8) {
	PPC_FUNC_PROLOGUE();
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74DC"))) PPC_WEAK_FUNC(sub_82CA74DC);
PPC_FUNC_IMPL(__imp__sub_82CA74DC) {
	PPC_FUNC_PROLOGUE();
	// stfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74E0"))) PPC_WEAK_FUNC(sub_82CA74E0);
PPC_FUNC_IMPL(__imp__sub_82CA74E0) {
	PPC_FUNC_PROLOGUE();
	// stfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74E4"))) PPC_WEAK_FUNC(sub_82CA74E4);
PPC_FUNC_IMPL(__imp__sub_82CA74E4) {
	PPC_FUNC_PROLOGUE();
	// stfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74E8"))) PPC_WEAK_FUNC(sub_82CA74E8);
PPC_FUNC_IMPL(__imp__sub_82CA74E8) {
	PPC_FUNC_PROLOGUE();
	// stfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74EC"))) PPC_WEAK_FUNC(sub_82CA74EC);
PPC_FUNC_IMPL(__imp__sub_82CA74EC) {
	PPC_FUNC_PROLOGUE();
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74F0"))) PPC_WEAK_FUNC(sub_82CA74F0);
PPC_FUNC_IMPL(__imp__sub_82CA74F0) {
	PPC_FUNC_PROLOGUE();
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74F4"))) PPC_WEAK_FUNC(sub_82CA74F4);
PPC_FUNC_IMPL(__imp__sub_82CA74F4) {
	PPC_FUNC_PROLOGUE();
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74F8"))) PPC_WEAK_FUNC(sub_82CA74F8);
PPC_FUNC_IMPL(__imp__sub_82CA74F8) {
	PPC_FUNC_PROLOGUE();
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA74FC"))) PPC_WEAK_FUNC(sub_82CA74FC);
PPC_FUNC_IMPL(__imp__sub_82CA74FC) {
	PPC_FUNC_PROLOGUE();
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7500"))) PPC_WEAK_FUNC(sub_82CA7500);
PPC_FUNC_IMPL(__imp__sub_82CA7500) {
	PPC_FUNC_PROLOGUE();
	// stfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7504"))) PPC_WEAK_FUNC(sub_82CA7504);
PPC_FUNC_IMPL(__imp__sub_82CA7504) {
	PPC_FUNC_PROLOGUE();
	// stfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7508"))) PPC_WEAK_FUNC(sub_82CA7508);
PPC_FUNC_IMPL(__imp__sub_82CA7508) {
	PPC_FUNC_PROLOGUE();
	// stfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA751C"))) PPC_WEAK_FUNC(sub_82CA751C);
PPC_FUNC_IMPL(__imp__sub_82CA751C) {
	PPC_FUNC_PROLOGUE();
	// lfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = PPC_LOAD_U64(ctx.r12.u32 + -144);
	// lfd f15,-136(r12)
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7520"))) PPC_WEAK_FUNC(sub_82CA7520);
PPC_FUNC_IMPL(__imp__sub_82CA7520) {
	PPC_FUNC_PROLOGUE();
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7524"))) PPC_WEAK_FUNC(sub_82CA7524);
PPC_FUNC_IMPL(__imp__sub_82CA7524) {
	PPC_FUNC_PROLOGUE();
	// lfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7528"))) PPC_WEAK_FUNC(sub_82CA7528);
PPC_FUNC_IMPL(__imp__sub_82CA7528) {
	PPC_FUNC_PROLOGUE();
	// lfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA752C"))) PPC_WEAK_FUNC(sub_82CA752C);
PPC_FUNC_IMPL(__imp__sub_82CA752C) {
	PPC_FUNC_PROLOGUE();
	// lfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7530"))) PPC_WEAK_FUNC(sub_82CA7530);
PPC_FUNC_IMPL(__imp__sub_82CA7530) {
	PPC_FUNC_PROLOGUE();
	// lfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7534"))) PPC_WEAK_FUNC(sub_82CA7534);
PPC_FUNC_IMPL(__imp__sub_82CA7534) {
	PPC_FUNC_PROLOGUE();
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7538"))) PPC_WEAK_FUNC(sub_82CA7538);
PPC_FUNC_IMPL(__imp__sub_82CA7538) {
	PPC_FUNC_PROLOGUE();
	// lfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA753C"))) PPC_WEAK_FUNC(sub_82CA753C);
PPC_FUNC_IMPL(__imp__sub_82CA753C) {
	PPC_FUNC_PROLOGUE();
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7540"))) PPC_WEAK_FUNC(sub_82CA7540);
PPC_FUNC_IMPL(__imp__sub_82CA7540) {
	PPC_FUNC_PROLOGUE();
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7544"))) PPC_WEAK_FUNC(sub_82CA7544);
PPC_FUNC_IMPL(__imp__sub_82CA7544) {
	PPC_FUNC_PROLOGUE();
	// lfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7548"))) PPC_WEAK_FUNC(sub_82CA7548);
PPC_FUNC_IMPL(__imp__sub_82CA7548) {
	PPC_FUNC_PROLOGUE();
	// lfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA754C"))) PPC_WEAK_FUNC(sub_82CA754C);
PPC_FUNC_IMPL(__imp__sub_82CA754C) {
	PPC_FUNC_PROLOGUE();
	// lfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7550"))) PPC_WEAK_FUNC(sub_82CA7550);
PPC_FUNC_IMPL(__imp__sub_82CA7550) {
	PPC_FUNC_PROLOGUE();
	// lfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7554"))) PPC_WEAK_FUNC(sub_82CA7554);
PPC_FUNC_IMPL(__imp__sub_82CA7554) {
	PPC_FUNC_PROLOGUE();
	// lfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7568"))) PPC_WEAK_FUNC(sub_82CA7568);
PPC_FUNC_IMPL(__imp__sub_82CA7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA7570;
	sub_82CA2BEC(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,248
	ctx.r3.s64 = 248;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f31.u64);
	// ori r29,r11,65279
	ctx.r29.u64 = ctx.r11.u64 | 65279;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA7598;
	sub_82CAE2D0(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82ca7608
	if (!ctx.cr6.eq) goto loc_82CA7608;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cacb78
	ctx.lr = 0x82CA75B4;
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82ca75f4
	if (!ctx.cr0.gt) goto loc_82CA75F4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82ca75e0
	if (!ctx.cr6.gt) goto loc_82CA75E0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82ca75f4
	if (!ctx.cr6.eq) goto loc_82CA75F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82cae008
	ctx.lr = 0x82CA75DC;
	sub_82CAE008(ctx, base);
	// b 0x82ca77c0
	goto loc_82CA77C0;
loc_82CA75E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA75EC;
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82ca77c0
	goto loc_82CA77C0;
loc_82CA75F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA7608:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82ca75e0
	if (ctx.cr6.eq) goto loc_82CA75E0;
	// fneg f13,f31
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// li r30,-1
	ctx.r30.s64 = -1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// fsel f1,f31,f31,f13
	ctx.f1.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// blt cr6,0x82ca7630
	if (ctx.cr6.lt) goto loc_82CA7630;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CA7630:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// addi r11,r11,3832
	ctx.r11.s64 = ctx.r11.s64 + 3832;
	// ble cr6,0x82ca76e4
	if (!ctx.cr6.gt) goto loc_82CA76E4;
	// lfd f0,8(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82ca76b0
	if (!ctx.cr6.gt) goto loc_82CA76B0;
	// lfd f0,16(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82ca7674
	if (!ctx.cr6.gt) goto loc_82CA7674;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f0,-3216(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3216);
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA7674:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	ctx.lr = 0x82CA767C;
	sub_82CA5C18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x82ca76a4
	if (!ctx.cr6.gt) goto loc_82CA76A4;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x821fe868
	ctx.lr = 0x82CA7698;
	sub_821FE868(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA76A4:
	// bl 0x821fe868
	ctx.lr = 0x82CA76A8;
	sub_821FE868(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82ca76d4
	goto loc_82CA76D4;
loc_82CA76B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	ctx.lr = 0x82CA76B8;
	sub_82CA5C18(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821fe868
	ctx.lr = 0x82CA76C0;
	sub_821FE868(ctx, base);
	// fdiv f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64 / ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3368);
	// fsub f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 - ctx.f13.f64;
	// fmul f30,f13,f0
	ctx.f30.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_82CA76D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ca778c
	if (!ctx.cr6.lt) goto loc_82CA778C;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// b 0x82ca778c
	goto loc_82CA778C;
loc_82CA76E4:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82ca7734
	if (!ctx.cr6.lt) goto loc_82CA7734;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stfd f30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f30.u64);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm. r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca778c
	if (!ctx.cr0.eq) goto loc_82CA778C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca771c
	if (!ctx.cr0.eq) goto loc_82CA771C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca778c
	if (ctx.cr6.eq) goto loc_82CA778C;
loc_82CA771C:
	// li r4,1536
	ctx.r4.s64 = 1536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cacb40
	ctx.lr = 0x82CA7728;
	sub_82CACB40(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA7734:
	// fmul f7,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f31.f64 * ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f0,3944(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3944);
	// lfd f12,3936(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3936);
	// lfd f11,3928(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3928);
	// lfd f9,3920(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3920);
	// lfd f8,3912(r7)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 3912);
	// fnmsub f0,f7,f0,f13
	ctx.f0.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64);
	// fsub f13,f7,f12
	ctx.f13.f64 = ctx.f7.f64 - ctx.f12.f64;
	// fmsub f0,f0,f7,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f7.f64 - ctx.f11.f64;
	// fmadd f13,f13,f7,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 + ctx.f10.f64;
	// fmsub f0,f0,f7,f9
	ctx.f0.f64 = ctx.f0.f64 * ctx.f7.f64 - ctx.f9.f64;
	// fmsub f13,f13,f7,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fmadd f0,f0,f7,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f7.f64 + ctx.f30.f64;
	// fmul f30,f0,f31
	ctx.f30.f64 = ctx.f0.f64 * ctx.f31.f64;
loc_82CA778C:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca77a8
	if (ctx.cr0.eq) goto loc_82CA77A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA77A0;
	sub_82CAE2D0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82ca77c0
	goto loc_82CA77C0;
loc_82CA77A8:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82CA77B0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82cae110
	ctx.lr = 0x82CA77C0;
	sub_82CAE110(ctx, base);
loc_82CA77C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CA77D0"))) PPC_WEAK_FUNC(sub_82CA77D0);
PPC_FUNC_IMPL(__imp__sub_82CA77D0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,248
	ctx.r3.s64 = 248;
	// stfd f31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f31.u64);
	// ori r30,r11,65279
	ctx.r30.u64 = ctx.r11.u64 | 65279;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA7808;
	sub_82CAE2D0(ctx, base);
	// lhz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82ca787c
	if (!ctx.cr6.eq) goto loc_82CA787C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cacb78
	ctx.lr = 0x82CA7824;
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82ca7868
	if (!ctx.cr0.gt) goto loc_82CA7868;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82ca7850
	if (!ctx.cr6.gt) goto loc_82CA7850;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82ca7868
	if (!ctx.cr6.eq) goto loc_82CA7868;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82cae008
	ctx.lr = 0x82CA784C;
	sub_82CAE008(ctx, base);
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA7850:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA785C;
	sub_82CAE2D0(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lfd f1,-3216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3216);
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA7868:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// b 0x82ca7968
	goto loc_82CA7968;
loc_82CA787C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82ca78a4
	if (!ctx.cr6.eq) goto loc_82CA78A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA7898;
	sub_82CAE2D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA78A4:
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,3848
	ctx.r11.s64 = ctx.r11.s64 + 3848;
	// lfd f0,-8(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// fsel f1,f31,f31,f13
	ctx.f1.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82ca7918
	if (!ctx.cr6.gt) goto loc_82CA7918;
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82ca78dc
	if (!ctx.cr6.gt) goto loc_82CA78DC;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f2,-3216(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3216);
	// b 0x82ca7968
	goto loc_82CA7968;
loc_82CA78DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	ctx.lr = 0x82CA78E4;
	sub_82CA5C18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x82ca790c
	if (!ctx.cr6.gt) goto loc_82CA790C;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x821fe868
	ctx.lr = 0x82CA7900;
	sub_821FE868(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x82ca7968
	goto loc_82CA7968;
loc_82CA790C:
	// bl 0x821fe868
	ctx.lr = 0x82CA7910;
	sub_821FE868(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82ca7944
	goto loc_82CA7944;
loc_82CA7918:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	ctx.lr = 0x82CA7920;
	sub_82CA5C18(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821fe868
	ctx.lr = 0x82CA7928;
	sub_821FE868(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// lfd f13,3368(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3368);
	// fadd f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fmul f30,f0,f13
	ctx.f30.f64 = ctx.f0.f64 * ctx.f13.f64;
loc_82CA7944:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca7960
	if (ctx.cr0.eq) goto loc_82CA7960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA7958;
	sub_82CAE2D0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA7960:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82CA7968:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82cae110
	ctx.lr = 0x82CA7978;
	sub_82CAE110(ctx, base);
loc_82CA7978:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7998"))) PPC_WEAK_FUNC(sub_82CA7998);
PPC_FUNC_IMPL(__imp__sub_82CA7998) {
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
	// bl 0x82cac610
	ctx.lr = 0x82CA79B0;
	sub_82CAC610(ctx, base);
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82CA79C8"))) PPC_WEAK_FUNC(sub_82CA79C8);
PPC_FUNC_IMPL(__imp__sub_82CA79C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac610
	ctx.lr = 0x82CA79D8;
	sub_82CAC610(ctx, base);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA79EC"))) PPC_WEAK_FUNC(sub_82CA79EC);
PPC_FUNC_IMPL(__imp__sub_82CA79EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA79F0"))) PPC_WEAK_FUNC(sub_82CA79F0);
PPC_FUNC_IMPL(__imp__sub_82CA79F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7A10"))) PPC_WEAK_FUNC(sub_82CA7A10);
PPC_FUNC_IMPL(__imp__sub_82CA7A10) {
	PPC_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// b 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA7A18"))) PPC_WEAK_FUNC(sub_82CA7A18);
PPC_FUNC_IMPL(__imp__sub_82CA7A18) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb4650
	ctx.lr = 0x82CA7A3C;
	sub_82CB4650(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca7a80
	if (ctx.cr6.eq) goto loc_82CA7A80;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82CA7A58:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82ca7a74
	if (!ctx.cr6.gt) goto loc_82CA7A74;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82ca7aa4
	if (!ctx.cr6.gt) goto loc_82CA7AA4;
loc_82CA7A74:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x82ca7a58
	if (!ctx.cr0.eq) goto loc_82CA7A58;
loc_82CA7A80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CA7A84:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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
loc_82CA7AA4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82ca7a84
	goto loc_82CA7A84;
}

__attribute__((alias("__imp__sub_82CA7AAC"))) PPC_WEAK_FUNC(sub_82CA7AAC);
PPC_FUNC_IMPL(__imp__sub_82CA7AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7AB0"))) PPC_WEAK_FUNC(sub_82CA7AB0);
PPC_FUNC_IMPL(__imp__sub_82CA7AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA7AB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca7ae4
	if (ctx.cr6.eq) goto loc_82CA7AE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca7ae4
	if (ctx.cr6.eq) goto loc_82CA7AE4;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82ca7ae8
	goto loc_82CA7AE8;
loc_82CA7AE4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CA7AE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cb4650
	ctx.lr = 0x82CA7AF4;
	sub_82CB4650(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca7b38
	if (ctx.cr6.eq) goto loc_82CA7B38;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82CA7B10:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82ca7b2c
	if (!ctx.cr6.gt) goto loc_82CA7B2C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82ca7b4c
	if (!ctx.cr6.gt) goto loc_82CA7B4C;
loc_82CA7B2C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x82ca7b10
	if (!ctx.cr0.eq) goto loc_82CA7B10;
loc_82CA7B38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CA7B3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca7b54
	if (!ctx.cr6.eq) goto loc_82CA7B54;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82ca7b5c
	goto loc_82CA7B5C;
loc_82CA7B4C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82ca7b3c
	goto loc_82CA7B3C;
loc_82CA7B54:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_82CA7B5C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb48a0
	ctx.lr = 0x82CA7B6C;
	sub_82CB48A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CA7B74"))) PPC_WEAK_FUNC(sub_82CA7B74);
PPC_FUNC_IMPL(__imp__sub_82CA7B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7B78"))) PPC_WEAK_FUNC(sub_82CA7B78);
PPC_FUNC_IMPL(__imp__sub_82CA7B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca7ba0
	if (ctx.cr6.eq) goto loc_82CA7BA0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca7ba0
	if (ctx.cr6.eq) goto loc_82CA7BA0;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82CA7BA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cb5580
	sub_82CB5580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA7BB0"))) PPC_WEAK_FUNC(sub_82CA7BB0);
PPC_FUNC_IMPL(__imp__sub_82CA7BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CA7BB8;
	sub_82CA2BDC(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82cac610
	ctx.lr = 0x82CA7BDC;
	sub_82CAC610(ctx, base);
	// stw r30,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb5580
	ctx.lr = 0x82CA7C04;
	sub_82CB5580(ctx, base);
	// bl 0x82cac610
	ctx.lr = 0x82CA7C08;
	sub_82CAC610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CA7C24"))) PPC_WEAK_FUNC(sub_82CA7C24);
PPC_FUNC_IMPL(__imp__sub_82CA7C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7C28"))) PPC_WEAK_FUNC(sub_82CA7C28);
PPC_FUNC_IMPL(__imp__sub_82CA7C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24248(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24248);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA7C38;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82cac610
	ctx.lr = 0x82CA7C74;
	sub_82CAC610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA7C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CA7C30"))) PPC_WEAK_FUNC(sub_82CA7C30);
PPC_FUNC_IMPL(__imp__sub_82CA7C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA7C38;
	sub_82CA2BEC(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82cac610
	ctx.lr = 0x82CA7C74;
	sub_82CAC610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA7C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CA7CA8"))) PPC_WEAK_FUNC(sub_82CA7CA8);
PPC_FUNC_IMPL(__imp__sub_82CA7CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82ca7bb0
	ctx.lr = 0x82CA7CD8;
	sub_82CA7BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA7CF0"))) PPC_WEAK_FUNC(sub_82CA7CF0);
PPC_FUNC_IMPL(__imp__sub_82CA7CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CA7CF8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// bl 0x82cb4650
	ctx.lr = 0x82CA7D24;
	sub_82CB4650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca7d34
	if (!ctx.cr6.eq) goto loc_82CA7D34;
	// bl 0x82cb5800
	ctx.lr = 0x82CA7D34;
	sub_82CB5800(ctx, base);
loc_82CA7D34:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ca7d80
	if (ctx.cr6.eq) goto loc_82CA7D80;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82CA7D5C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ca7d74
	if (!ctx.cr6.gt) goto loc_82CA7D74;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ca7d80
	if (!ctx.cr6.gt) goto loc_82CA7D80;
loc_82CA7D74:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x82ca7d5c
	if (!ctx.cr0.eq) goto loc_82CA7D5C;
loc_82CA7D80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ca7d98
	if (ctx.cr6.eq) goto loc_82CA7D98;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r11,-20
	ctx.r28.s64 = ctx.r11.s64 + -20;
loc_82CA7D98:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca7e24
	if (ctx.cr6.eq) goto loc_82CA7E24;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82CA7DA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x82ca7dd8
	if (ctx.cr6.eq) goto loc_82CA7DD8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82ca7e08
	if (!ctx.cr6.gt) goto loc_82CA7E08;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82ca7e08
	if (ctx.cr6.gt) goto loc_82CA7E08;
loc_82CA7DD8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ca7e08
	if (ctx.cr6.lt) goto loc_82CA7E08;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82ca7e08
	if (ctx.cr6.gt) goto loc_82CA7E08;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ca7e00
	if (!ctx.cr6.eq) goto loc_82CA7E00;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82CA7E00:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82CA7E08:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ca7da8
	if (ctx.cr6.lt) goto loc_82CA7DA8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ca7e34
	if (!ctx.cr6.eq) goto loc_82CA7E34;
loc_82CA7E24:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
	// b 0x82ca7e40
	goto loc_82CA7E40;
loc_82CA7E34:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CA7E40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82CA7E48"))) PPC_WEAK_FUNC(sub_82CA7E48);
PPC_FUNC_IMPL(__imp__sub_82CA7E48) {
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
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ca7ec4
	if (!ctx.cr6.eq) goto loc_82CA7EC4;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82ca7ec4
	if (!ctx.cr6.eq) goto loc_82CA7EC4;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ca7eb0
	if (ctx.cr6.eq) goto loc_82CA7EB0;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ca7eb0
	if (ctx.cr6.eq) goto loc_82CA7EB0;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ca7ec4
	if (!ctx.cr6.eq) goto loc_82CA7EC4;
loc_82CA7EB0:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82ca7ecc
	goto loc_82CA7ECC;
loc_82CA7EC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CA7ECC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82cac610
	ctx.lr = 0x82CA7ED4;
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82cac610
	ctx.lr = 0x82CA7EE0;
	sub_82CAC610(ctx, base);
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82CA7EFC"))) PPC_WEAK_FUNC(sub_82CA7EFC);
PPC_FUNC_IMPL(__imp__sub_82CA7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7F00"))) PPC_WEAK_FUNC(sub_82CA7F00);
PPC_FUNC_IMPL(__imp__sub_82CA7F00) {
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
	// bl 0x82cac610
	ctx.lr = 0x82CA7F18;
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x82ca7f30
	goto loc_82CA7F30;
loc_82CA7F20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ca7f50
	if (ctx.cr6.eq) goto loc_82CA7F50;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82CA7F30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca7f20
	if (!ctx.cr6.eq) goto loc_82CA7F20;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CA7F3C:
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
loc_82CA7F50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca7f3c
	goto loc_82CA7F3C;
}

__attribute__((alias("__imp__sub_82CA7F58"))) PPC_WEAK_FUNC(sub_82CA7F58);
PPC_FUNC_IMPL(__imp__sub_82CA7F58) {
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
	// bl 0x82cac610
	ctx.lr = 0x82CA7F70;
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca7f84
	if (ctx.cr6.eq) goto loc_82CA7F84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca7f88
	if (!ctx.cr6.eq) goto loc_82CA7F88;
loc_82CA7F84:
	// bl 0x82cb5800
	ctx.lr = 0x82CA7F88;
	sub_82CB5800(ctx, base);
loc_82CA7F88:
	// bl 0x82cac610
	ctx.lr = 0x82CA7F8C;
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ca7fa8
	if (!ctx.cr6.eq) goto loc_82CA7FA8;
	// bl 0x82cac610
	ctx.lr = 0x82CA7F9C;
	sub_82CAC610(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// b 0x82ca7fe4
	goto loc_82CA7FE4;
loc_82CA7FA8:
	// bl 0x82cac610
	ctx.lr = 0x82CA7FAC;
	sub_82CAC610(ctx, base);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca7fe0
	if (ctx.cr6.eq) goto loc_82CA7FE0;
loc_82CA7FC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ca7ff8
	if (ctx.cr6.eq) goto loc_82CA7FF8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ca7fc0
	if (!ctx.cr6.eq) goto loc_82CA7FC0;
loc_82CA7FE0:
	// bl 0x82cb5800
	ctx.lr = 0x82CA7FE4;
	sub_82CB5800(ctx, base);
loc_82CA7FE4:
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
loc_82CA7FF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x82ca7fe4
	goto loc_82CA7FE4;
}

__attribute__((alias("__imp__sub_82CA8004"))) PPC_WEAK_FUNC(sub_82CA8004);
PPC_FUNC_IMPL(__imp__sub_82CA8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8008"))) PPC_WEAK_FUNC(sub_82CA8008);
PPC_FUNC_IMPL(__imp__sub_82CA8008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24224(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24224);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA8018;
	sub_82CA2BE4(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA8038:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r27.u32);
	// blt 0x82ca8060
	if (ctx.cr0.lt) goto loc_82CA8060;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82CA8058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca8038
	goto loc_82CA8038;
loc_82CA8060:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CA8010"))) PPC_WEAK_FUNC(sub_82CA8010);
PPC_FUNC_IMPL(__imp__sub_82CA8010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA8018;
	sub_82CA2BE4(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA8038:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r27.u32);
	// blt 0x82ca8060
	if (ctx.cr0.lt) goto loc_82CA8060;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82CA8058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca8038
	goto loc_82CA8038;
loc_82CA8060:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CA8074"))) PPC_WEAK_FUNC(sub_82CA8074);
PPC_FUNC_IMPL(__imp__sub_82CA8074) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ca80c4
	if (ctx.cr6.eq) goto loc_82CA80C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca80cc
	goto loc_82CA80CC;
loc_82CA80C4:
	// bl 0x82cb57a0
	ctx.lr = 0x82CA80C8;
	sub_82CB57A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA80CC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA80E0"))) PPC_WEAK_FUNC(sub_82CA80E0);
PPC_FUNC_IMPL(__imp__sub_82CA80E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24200(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24200);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA80F0;
	sub_82CA2BE4(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// mullw r11,r30,r28
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r27,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_82CA8124:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// blt 0x82ca814c
	if (ctx.cr0.lt) goto loc_82CA814C;
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82CA8148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca8124
	goto loc_82CA8124;
loc_82CA814C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca81a0
	ctx.lr = 0x82CA8160;
	sub_82CA81A0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CA80E8"))) PPC_WEAK_FUNC(sub_82CA80E8);
PPC_FUNC_IMPL(__imp__sub_82CA80E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA80F0;
	sub_82CA2BE4(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// mullw r11,r30,r28
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r27,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_82CA8124:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// blt 0x82ca814c
	if (ctx.cr0.lt) goto loc_82CA814C;
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82CA8148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ca8124
	goto loc_82CA8124;
loc_82CA814C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca81a0
	ctx.lr = 0x82CA8160;
	sub_82CA81A0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CA8168"))) PPC_WEAK_FUNC(sub_82CA8168);
PPC_FUNC_IMPL(__imp__sub_82CA8168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,188(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r28,180(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r29,164(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x82ca81c4
	goto loc_82CA81C4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA81C4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca81e4
	if (!ctx.cr6.eq) goto loc_82CA81E4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca8010
	ctx.lr = 0x82CA81E4;
	sub_82CA8010(ctx, base);
loc_82CA81E4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r27,-40(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lwz r12,-48(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA81A0"))) PPC_WEAK_FUNC(sub_82CA81A0);
PPC_FUNC_IMPL(__imp__sub_82CA81A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca81e4
	if (!ctx.cr6.eq) goto loc_82CA81E4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca8010
	ctx.lr = 0x82CA81E4;
	sub_82CA8010(ctx, base);
loc_82CA81E4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r27,-40(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lwz r12,-48(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8208"))) PPC_WEAK_FUNC(sub_82CA8208);
PPC_FUNC_IMPL(__imp__sub_82CA8208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24176(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24176);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA8218;
	sub_82CA2BE0(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA8248:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82ca8274
	if (!ctx.cr6.lt) goto loc_82CA8274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82CA8260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82ca8248
	goto loc_82CA8248;
loc_82CA8274:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca82c0
	ctx.lr = 0x82CA8288;
	sub_82CA82C0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CA8210"))) PPC_WEAK_FUNC(sub_82CA8210);
PPC_FUNC_IMPL(__imp__sub_82CA8210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA8218;
	sub_82CA2BE0(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA8248:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82ca8274
	if (!ctx.cr6.lt) goto loc_82CA8274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82CA8260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82ca8248
	goto loc_82CA8248;
loc_82CA8274:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca82c0
	ctx.lr = 0x82CA8288;
	sub_82CA82C0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CA8290"))) PPC_WEAK_FUNC(sub_82CA8290);
PPC_FUNC_IMPL(__imp__sub_82CA8290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,172(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82ca82e0
	goto loc_82CA82E0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA82E0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca8300
	if (!ctx.cr6.eq) goto loc_82CA8300;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8010
	ctx.lr = 0x82CA8300;
	sub_82CA8010(ctx, base);
loc_82CA8300:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA82C0"))) PPC_WEAK_FUNC(sub_82CA82C0);
PPC_FUNC_IMPL(__imp__sub_82CA82C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca8300
	if (!ctx.cr6.eq) goto loc_82CA8300;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8010
	ctx.lr = 0x82CA8300;
	sub_82CA8010(ctx, base);
loc_82CA8300:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8320"))) PPC_WEAK_FUNC(sub_82CA8320);
PPC_FUNC_IMPL(__imp__sub_82CA8320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA8328;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca8364
	if (!ctx.cr6.eq) goto loc_82CA8364;
	// bl 0x82cab770
	ctx.lr = 0x82CA833C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA835C;
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca83f8
	goto loc_82CA83F8;
loc_82CA8364:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82cbd660
	ctx.lr = 0x82CA8374;
	sub_82CBD660(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,10
	ctx.r11.s64 = 10;
	// lhz r5,90(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// divw r9,r5,r11
	ctx.r9.s32 = ctx.r5.s32 / ctx.r11.s32;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// divw r10,r6,r11
	ctx.r10.s32 = ctx.r6.s32 / ctx.r11.s32;
	// divw r8,r4,r11
	ctx.r8.s32 = ctx.r4.s32 / ctx.r11.s32;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mulli r3,r10,10
	ctx.r3.s64 = ctx.r10.s64 * 10;
	// mulli r30,r9,10
	ctx.r30.s64 = ctx.r9.s64 * 10;
	// mulli r29,r8,10
	ctx.r29.s64 = ctx.r8.s64 * 10;
	// divw r9,r6,r11
	ctx.r9.s32 = ctx.r6.s32 / ctx.r11.s32;
	// subf r8,r3,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r3.s64;
	// divw r7,r5,r11
	ctx.r7.s32 = ctx.r5.s32 / ctx.r11.s32;
	// divw r10,r4,r11
	ctx.r10.s32 = ctx.r4.s32 / ctx.r11.s32;
	// subf r6,r30,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r6,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
loc_82CA83F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CA8400"))) PPC_WEAK_FUNC(sub_82CA8400);
PPC_FUNC_IMPL(__imp__sub_82CA8400) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ca8444
	if (!ctx.cr6.eq) goto loc_82CA8444;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca844c
	if (!ctx.cr6.eq) goto loc_82CA844C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca8454
	if (!ctx.cr6.eq) goto loc_82CA8454;
loc_82CA842C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA8430:
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
loc_82CA8444:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca8454
	if (ctx.cr6.eq) goto loc_82CA8454;
loc_82CA844C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ca8480
	if (!ctx.cr6.eq) goto loc_82CA8480;
loc_82CA8454:
	// bl 0x82cab770
	ctx.lr = 0x82CA8458;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA8478;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca8430
	goto loc_82CA8430;
loc_82CA8480:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ca8494
	if (!ctx.cr6.eq) goto loc_82CA8494;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// b 0x82ca842c
	goto loc_82CA842C;
loc_82CA8494:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca84d0
	if (!ctx.cr6.eq) goto loc_82CA84D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// bl 0x82cab770
	ctx.lr = 0x82CA84A8;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CA84AC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA84C8;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca8430
	goto loc_82CA8430;
loc_82CA84D0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82ca8508
	if (!ctx.cr6.eq) goto loc_82CA8508;
loc_82CA84E4:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82ca853c
	if (ctx.cr0.eq) goto loc_82CA853C;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ca84e4
	if (!ctx.cr0.eq) goto loc_82CA84E4;
	// b 0x82ca853c
	goto loc_82CA853C;
loc_82CA8508:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82ca8530
	if (ctx.cr0.eq) goto loc_82CA8530;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ca8530
	if (ctx.cr0.eq) goto loc_82CA8530;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82ca8508
	if (!ctx.cr0.eq) goto loc_82CA8508;
loc_82CA8530:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ca853c
	if (!ctx.cr6.eq) goto loc_82CA853C;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_82CA853C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ca842c
	if (!ctx.cr6.eq) goto loc_82CA842C;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82ca8560
	if (!ctx.cr6.eq) goto loc_82CA8560;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,80
	ctx.r3.s64 = 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// b 0x82ca8430
	goto loc_82CA8430;
loc_82CA8560:
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// bl 0x82cab770
	ctx.lr = 0x82CA8568;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82ca84ac
	goto loc_82CA84AC;
}

__attribute__((alias("__imp__sub_82CA8570"))) PPC_WEAK_FUNC(sub_82CA8570);
PPC_FUNC_IMPL(__imp__sub_82CA8570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA8578;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ca8598
	if (!ctx.cr6.eq) goto loc_82CA8598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3c68
	ctx.lr = 0x82CA8594;
	sub_82CA3C68(ctx, base);
	// b 0x82ca8624
	goto loc_82CA8624;
loc_82CA8598:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca85ac
	if (!ctx.cr6.eq) goto loc_82CA85AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca5dc0
	ctx.lr = 0x82CA85A8;
	sub_82CA5DC0(ctx, base);
	// b 0x82ca8620
	goto loc_82CA8620;
loc_82CA85AC:
	// li r29,-4096
	ctx.r29.s64 = -4096;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ca8608
	if (ctx.cr6.gt) goto loc_82CA8608;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_82CA85BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca85c8
	if (!ctx.cr6.eq) goto loc_82CA85C8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CA85C8:
	// bl 0x82239798
	ctx.lr = 0x82CA85CC;
	sub_82239798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82cbfc80
	ctx.lr = 0x82CA85DC;
	sub_82CBFC80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82ca8658
	if (!ctx.cr0.eq) goto loc_82CA8658;
	// lwz r11,26932(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca8644
	if (ctx.cr6.eq) goto loc_82CA8644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cacc10
	ctx.lr = 0x82CA85F8;
	sub_82CACC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ca862c
	if (ctx.cr0.eq) goto loc_82CA862C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82ca85bc
	if (!ctx.cr6.gt) goto loc_82CA85BC;
loc_82CA8608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cacc10
	ctx.lr = 0x82CA8610;
	sub_82CACC10(ctx, base);
	// bl 0x82cab770
	ctx.lr = 0x82CA8614;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82CA8620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA8624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82CA862C:
	// bl 0x82cab770
	ctx.lr = 0x82CA8630;
	sub_82CAB770(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cc0758
	ctx.lr = 0x82CA8638;
	sub_82CC0758(ctx, base);
	// bl 0x82cab700
	ctx.lr = 0x82CA863C;
	sub_82CAB700(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82ca8620
	goto loc_82CA8620;
loc_82CA8644:
	// bl 0x82cab770
	ctx.lr = 0x82CA8648;
	sub_82CAB770(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cc0758
	ctx.lr = 0x82CA8650;
	sub_82CC0758(ctx, base);
	// bl 0x82cab700
	ctx.lr = 0x82CA8654;
	sub_82CAB700(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82CA8658:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ca8624
	goto loc_82CA8624;
}

__attribute__((alias("__imp__sub_82CA8660"))) PPC_WEAK_FUNC(sub_82CA8660);
PPC_FUNC_IMPL(__imp__sub_82CA8660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CA8668;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ca86bc
	if (ctx.cr6.eq) goto loc_82CA86BC;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// twllei r4,0
	// divwu r11,r11,r4
	ctx.r11.u32 = ctx.r11.u32 / ctx.r4.u32;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ca86bc
	if (!ctx.cr6.lt) goto loc_82CA86BC;
	// bl 0x82cab770
	ctx.lr = 0x82CA8694;
	sub_82CAB770(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA86B4;
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca8704
	goto loc_82CA8704;
loc_82CA86BC:
	// mullw r30,r4,r5
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca86d4
	if (ctx.cr6.eq) goto loc_82CA86D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caacd0
	ctx.lr = 0x82CA86D0;
	sub_82CAACD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CA86D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca8570
	ctx.lr = 0x82CA86E0;
	sub_82CA8570(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ca8700
	if (ctx.cr0.eq) goto loc_82CA8700;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82ca8700
	if (!ctx.cr6.lt) goto loc_82CA8700;
	// subf r5,r29,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CA8700;
	sub_82CA3190(ctx, base);
loc_82CA8700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA8704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CA870C"))) PPC_WEAK_FUNC(sub_82CA870C);
PPC_FUNC_IMPL(__imp__sub_82CA870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8710"))) PPC_WEAK_FUNC(sub_82CA8710);
PPC_FUNC_IMPL(__imp__sub_82CA8710) {
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
	// lis r31,-31921
	ctx.r31.s64 = -2091974656;
	// lwz r3,29908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29908);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ca873c
	if (!ctx.cr6.eq) goto loc_82CA873C;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x82ca8748
	goto loc_82CA8748;
loc_82CA873C:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82ca874c
	if (!ctx.cr6.lt) goto loc_82CA874C;
	// li r3,20
	ctx.r3.s64 = 20;
loc_82CA8748:
	// stw r3,29908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29908, ctx.r3.u32);
loc_82CA874C:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82caae18
	ctx.lr = 0x82CA8754;
	sub_82CAAE18(ctx, base);
	// lis r30,-31921
	ctx.r30.s64 = -2091974656;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,29904(r30)
	PPC_STORE_U32(ctx.r30.u32 + 29904, ctx.r3.u32);
	// bne 0x82ca878c
	if (!ctx.cr0.eq) goto loc_82CA878C;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,29908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29908, ctx.r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82caae18
	ctx.lr = 0x82CA8778;
	sub_82CAAE18(ctx, base);
	// stw r3,29904(r30)
	PPC_STORE_U32(ctx.r30.u32 + 29904, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ca878c
	if (!ctx.cr0.eq) goto loc_82CA878C;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x82ca8818
	goto loc_82CA8818;
loc_82CA878C:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4880
	ctx.r9.s64 = ctx.r11.s64 + -4880;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82ca87a4
	goto loc_82CA87A4;
loc_82CA87A0:
	// lwz r3,29904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29904);
loc_82CA87A4:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r8,r9,640
	ctx.r8.s64 = ctx.r9.s64 + 640;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ca87a0
	if (ctx.cr6.lt) goto loc_82CA87A0;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r7,r10,29632
	ctx.r7.s64 = ctx.r10.s64 + 29632;
loc_82CA87CC:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r6,r11,6,21,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82ca87f8
	if (ctx.cr6.eq) goto loc_82CA87F8;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82ca87f8
	if (ctx.cr6.eq) goto loc_82CA87F8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ca8800
	if (!ctx.cr6.eq) goto loc_82CA8800;
loc_82CA87F8:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82CA8800:
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 + 112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ca87cc
	if (ctx.cr6.lt) goto loc_82CA87CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA8818:
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

__attribute__((alias("__imp__sub_82CA8830"))) PPC_WEAK_FUNC(sub_82CA8830);
PPC_FUNC_IMPL(__imp__sub_82CA8830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ca5258
	ctx.lr = 0x82CA8840;
	sub_82CA5258(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lbz r11,26844(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26844);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ca8854
	if (ctx.cr0.eq) goto loc_82CA8854;
	// bl 0x82cb5870
	ctx.lr = 0x82CA8854;
	sub_82CB5870(ctx, base);
loc_82CA8854:
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lwz r3,29904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29904);
	// bl 0x82ca5dc0
	ctx.lr = 0x82CA8860;
	sub_82CA5DC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8870"))) PPC_WEAK_FUNC(sub_82CA8870);
PPC_FUNC_IMPL(__imp__sub_82CA8870) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ca88c0
	if (ctx.cr6.lt) goto loc_82CA88C0;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ca88c0
	if (ctx.cr6.gt) goto loc_82CA88C0;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82caff48
	ctx.lr = 0x82CA88B0;
	sub_82CAFF48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82ca88c8
	goto loc_82CA88C8;
loc_82CA88C0:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x832b227c
	ctx.lr = 0x82CA88C8;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82CA88C8:
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

__attribute__((alias("__imp__sub_82CA88DC"))) PPC_WEAK_FUNC(sub_82CA88DC);
PPC_FUNC_IMPL(__imp__sub_82CA88DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA88E0"))) PPC_WEAK_FUNC(sub_82CA88E0);
PPC_FUNC_IMPL(__imp__sub_82CA88E0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82ca8914
	if (!ctx.cr6.lt) goto loc_82CA8914;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82caff48
	ctx.lr = 0x82CA8904;
	sub_82CAFF48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82ca891c
	goto loc_82CA891C;
loc_82CA8914:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x832b227c
	ctx.lr = 0x82CA891C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82CA891C:
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

__attribute__((alias("__imp__sub_82CA8930"))) PPC_WEAK_FUNC(sub_82CA8930);
PPC_FUNC_IMPL(__imp__sub_82CA8930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ca8968
	if (ctx.cr6.lt) goto loc_82CA8968;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ca8968
	if (ctx.cr6.gt) goto loc_82CA8968;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82cafde8
	sub_82CAFDE8(ctx, base);
	return;
loc_82CA8968:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA8970"))) PPC_WEAK_FUNC(sub_82CA8970);
PPC_FUNC_IMPL(__imp__sub_82CA8970) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82ca898c
	if (!ctx.cr6.lt) goto loc_82CA898C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82cafde8
	sub_82CAFDE8(ctx, base);
	return;
loc_82CA898C:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA8994"))) PPC_WEAK_FUNC(sub_82CA8994);
PPC_FUNC_IMPL(__imp__sub_82CA8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8998"))) PPC_WEAK_FUNC(sub_82CA8998);
PPC_FUNC_IMPL(__imp__sub_82CA8998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24152(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24152);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA89A8;
	sub_82CA2BE4(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca89fc
	if (!ctx.cr6.eq) goto loc_82CA89FC;
loc_82CA89D0:
	// bl 0x82cab770
	ctx.lr = 0x82CA89D4;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA89F4;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca8b68
	goto loc_82CA8B68;
loc_82CA89FC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca89d0
	if (ctx.cr6.eq) goto loc_82CA89D0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca8ae4
	if (!ctx.cr0.eq) goto loc_82CA8AE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A24;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca8a74
	if (ctx.cr6.eq) goto loc_82CA8A74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A34;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca8a74
	if (ctx.cr6.eq) goto loc_82CA8A74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A44;
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A5C;
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,-2648
	ctx.r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca8a88
	goto loc_82CA8A88;
loc_82CA8A74:
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r28,r10,-2648
	ctx.r28.s64 = ctx.r10.s64 + -2648;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA8A88:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca89d0
	if (!ctx.cr0.eq) goto loc_82CA89D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A9C;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca8ad8
	if (ctx.cr6.eq) goto loc_82CA8AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8AAC;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca8ad8
	if (ctx.cr6.eq) goto loc_82CA8AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8ABC;
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8ACC;
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CA8AD8:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca89d0
	if (!ctx.cr0.eq) goto loc_82CA89D0;
loc_82CA8AE4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82CA8AE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca8ae8
	if (!ctx.cr6.eq) goto loc_82CA8AE8;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x82ca8870
	ctx.lr = 0x82CA8B10;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cab4e0
	ctx.lr = 0x82CA8B1C;
	sub_82CAB4E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca4af0
	ctx.lr = 0x82CA8B34;
	sub_82CA4AF0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cab5b8
	ctx.lr = 0x82CA8B44;
	sub_82CAB5B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca8b90
	ctx.lr = 0x82CA8B50;
	sub_82CA8B90(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82CA8B68:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CA89A0"))) PPC_WEAK_FUNC(sub_82CA89A0);
PPC_FUNC_IMPL(__imp__sub_82CA89A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA89A8;
	sub_82CA2BE4(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca89fc
	if (!ctx.cr6.eq) goto loc_82CA89FC;
loc_82CA89D0:
	// bl 0x82cab770
	ctx.lr = 0x82CA89D4;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA89F4;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca8b68
	goto loc_82CA8B68;
loc_82CA89FC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca89d0
	if (ctx.cr6.eq) goto loc_82CA89D0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca8ae4
	if (!ctx.cr0.eq) goto loc_82CA8AE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A24;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca8a74
	if (ctx.cr6.eq) goto loc_82CA8A74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A34;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca8a74
	if (ctx.cr6.eq) goto loc_82CA8A74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A44;
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A5C;
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,-2648
	ctx.r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca8a88
	goto loc_82CA8A88;
loc_82CA8A74:
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r28,r10,-2648
	ctx.r28.s64 = ctx.r10.s64 + -2648;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA8A88:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca89d0
	if (!ctx.cr0.eq) goto loc_82CA89D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8A9C;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca8ad8
	if (ctx.cr6.eq) goto loc_82CA8AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8AAC;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca8ad8
	if (ctx.cr6.eq) goto loc_82CA8AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8ABC;
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA8ACC;
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CA8AD8:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca89d0
	if (!ctx.cr0.eq) goto loc_82CA89D0;
loc_82CA8AE4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82CA8AE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca8ae8
	if (!ctx.cr6.eq) goto loc_82CA8AE8;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x82ca8870
	ctx.lr = 0x82CA8B10;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cab4e0
	ctx.lr = 0x82CA8B1C;
	sub_82CAB4E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca4af0
	ctx.lr = 0x82CA8B34;
	sub_82CA4AF0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cab5b8
	ctx.lr = 0x82CA8B44;
	sub_82CAB5B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82ca8b90
	ctx.lr = 0x82CA8B50;
	sub_82CA8B90(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82CA8B68:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82CA8B70"))) PPC_WEAK_FUNC(sub_82CA8B70);
PPC_FUNC_IMPL(__imp__sub_82CA8B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// b 0x82ca8ba8
	goto loc_82CA8BA8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA8BA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA8BB0;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8B90"))) PPC_WEAK_FUNC(sub_82CA8B90);
PPC_FUNC_IMPL(__imp__sub_82CA8B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA8BB0;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8BC8"))) PPC_WEAK_FUNC(sub_82CA8BC8);
PPC_FUNC_IMPL(__imp__sub_82CA8BC8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82CA8BDC:
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ca8bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA8BDC;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82ca8c10
	goto loc_82CA8C10;
loc_82CA8BF0:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stbx r6,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u8);
loc_82CA8C10:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ca8bf0
	if (!ctx.cr0.eq) goto loc_82CA8BF0;
	// b 0x82ca8c40
	goto loc_82CA8C40;
loc_82CA8C20:
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82CA8C40:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ca8c20
	if (!ctx.cr0.eq) goto loc_82CA8C20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8C54"))) PPC_WEAK_FUNC(sub_82CA8C54);
PPC_FUNC_IMPL(__imp__sub_82CA8C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8C58"))) PPC_WEAK_FUNC(sub_82CA8C58);
PPC_FUNC_IMPL(__imp__sub_82CA8C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA8C60;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA8C80;
	sub_82CAE2D0(ctx, base);
	// lis r10,-16377
	ctx.r10.s64 = -1073283072;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// ori r28,r10,65279
	ctx.r28.u64 = ctx.r10.u64 | 65279;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-4240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4240);
	// bl 0x82cae2d0
	ctx.lr = 0x82CA8C9C;
	sub_82CAE2D0(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82ca8d38
	if (!ctx.cr6.eq) goto loc_82CA8D38;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lfd f0,-3208(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3208);
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// bl 0x82cacb78
	ctx.lr = 0x82CA8CC4;
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82ca8d10
	if (!ctx.cr0.gt) goto loc_82CA8D10;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82ca8cf4
	if (!ctx.cr6.gt) goto loc_82CA8CF4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82ca8d10
	if (!ctx.cr6.eq) goto loc_82CA8D10;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cae008
	ctx.lr = 0x82CA8CF0;
	sub_82CAE008(ctx, base);
	// b 0x82ca8d7c
	goto loc_82CA8D7C;
loc_82CA8CF4:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f1,3376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// bl 0x82ca3d78
	ctx.lr = 0x82CA8D08;
	sub_82CA3D78(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82ca8d6c
	goto loc_82CA8D6C;
loc_82CA8D10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// stfd f2,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f2.u64);
	// bl 0x82cae110
	ctx.lr = 0x82CA8D34;
	sub_82CAE110(ctx, base);
	// b 0x82ca8d7c
	goto loc_82CA8D7C;
loc_82CA8D38:
	// bl 0x82cb0dc0
	ctx.lr = 0x82CA8D3C;
	sub_82CB0DC0(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 - ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// lfd f0,3376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82ca8d6c
	if (!ctx.cr6.eq) goto loc_82CA8D6C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r29,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lfd f31,80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82CA8D6C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA8D78;
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82CA8D7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CA8D88"))) PPC_WEAK_FUNC(sub_82CA8D88);
PPC_FUNC_IMPL(__imp__sub_82CA8D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3376(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bne cr6,0x82ca8db8
	if (!ctx.cr6.eq) goto loc_82CA8DB8;
	// b 0x82ca8e70
	goto loc_82CA8E70;
loc_82CA8DB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,4000
	ctx.r11.s64 = ctx.r11.s64 + 4000;
	// lfd f13,-32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82ca8e18
	if (!ctx.cr6.gt) goto loc_82CA8E18;
	// lfd f13,-40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -40);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82ca8de4
	if (!ctx.cr6.gt) goto loc_82CA8DE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// b 0x82ca8e68
	goto loc_82CA8E68;
loc_82CA8DE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,3552(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3552);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x821fde30
	ctx.lr = 0x82CA8DF4;
	sub_821FDE30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,3368(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3368);
	// fdiv f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x82ca8e68
	goto loc_82CA8E68;
loc_82CA8E18:
	// fmul f6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f12,-16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f11,16(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f9,8(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f8,0(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,4040(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4040);
	// lfd f10,4032(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4032);
	// lfd f7,3248(r8)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3248);
	// fnmsub f13,f6,f13,f12
	ctx.f13.f64 = -(ctx.f6.f64 * ctx.f13.f64 - ctx.f12.f64);
	// fadd f12,f6,f11
	ctx.f12.f64 = ctx.f6.f64 + ctx.f11.f64;
	// fmsub f13,f13,f6,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64 - ctx.f10.f64;
	// fmadd f12,f12,f6,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f9.f64;
	// fmul f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmadd f12,f12,f6,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f8.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_82CA8E68:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f30,f0,f13
	ctx.f1.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82CA8E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8E88"))) PPC_WEAK_FUNC(sub_82CA8E88);
PPC_FUNC_IMPL(__imp__sub_82CA8E88) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfd f31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f31.u64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ca8ee4
	if (!ctx.cr6.eq) goto loc_82CA8EE4;
	// bl 0x82cab770
	ctx.lr = 0x82CA8EB8;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA8ED8;
	sub_82CAB630(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82ca8f94
	goto loc_82CA8F94;
loc_82CA8EE4:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// li r3,248
	ctx.r3.s64 = 248;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA8EF4;
	sub_82CAE2D0(ctx, base);
	// lhz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82ca8f74
	if (!ctx.cr6.eq) goto loc_82CA8F74;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cacb78
	ctx.lr = 0x82CA8F18;
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82ca8f64
	if (!ctx.cr0.gt) goto loc_82CA8F64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82ca8f44
	if (!ctx.cr6.gt) goto loc_82CA8F44;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82ca8f64
	if (!ctx.cr6.eq) goto loc_82CA8F64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82cae008
	ctx.lr = 0x82CA8F40;
	sub_82CAE008(ctx, base);
	// b 0x82ca8f94
	goto loc_82CA8F94;
loc_82CA8F44:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lfd f2,-3208(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3208);
loc_82CA8F4C:
	// li r3,8
	ctx.r3.s64 = 8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82cae110
	ctx.lr = 0x82CA8F60;
	sub_82CAE110(ctx, base);
	// b 0x82ca8f94
	goto loc_82CA8F94;
loc_82CA8F64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// b 0x82ca8f4c
	goto loc_82CA8F4C;
loc_82CA8F74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821fe890
	ctx.lr = 0x82CA8F7C;
	sub_821FE890(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cae2d0
	ctx.lr = 0x82CA8F90;
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82CA8F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8FB0"))) PPC_WEAK_FUNC(sub_82CA8FB0);
PPC_FUNC_IMPL(__imp__sub_82CA8FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24128(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24128);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CA8FC0;
	sub_82CA2BD4(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82ca901c
	if (!ctx.cr6.eq) goto loc_82CA901C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82ca901c
	if (ctx.cr6.eq) goto loc_82CA901C;
loc_82CA8FF0:
	// bl 0x82cab770
	ctx.lr = 0x82CA8FF4;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA9014;
	sub_82CAB630(ctx, base);
loc_82CA9014:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca91f8
	goto loc_82CA91F8;
loc_82CA901C:
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca8ff0
	if (ctx.cr6.eq) goto loc_82CA8FF0;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca8ff0
	if (ctx.cr6.eq) goto loc_82CA8FF0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82ca9014
	if (ctx.cr6.eq) goto loc_82CA9014;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// bl 0x82ca8870
	ctx.lr = 0x82CA9060;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca9164
	if (!ctx.cr0.eq) goto loc_82CA9164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9078;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca90c8
	if (ctx.cr6.eq) goto loc_82CA90C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9088;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca90c8
	if (ctx.cr6.eq) goto loc_82CA90C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9098;
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA90B0;
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,-2648
	ctx.r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca90dc
	goto loc_82CA90DC;
loc_82CA90C8:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r28,r11,-2648
	ctx.r28.s64 = ctx.r11.s64 + -2648;
	// addi r29,r10,29632
	ctx.r29.s64 = ctx.r10.s64 + 29632;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA90DC:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca9138
	if (!ctx.cr0.eq) goto loc_82CA9138;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA90F0;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca912c
	if (ctx.cr6.eq) goto loc_82CA912C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9100;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca912c
	if (ctx.cr6.eq) goto loc_82CA912C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9110;
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9120;
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CA912C:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca9164
	if (ctx.cr0.eq) goto loc_82CA9164;
loc_82CA9138:
	// bl 0x82cab770
	ctx.lr = 0x82CA913C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA915C;
	sub_82CAB630(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82CA9164:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ca91e8
	if (ctx.cr6.eq) goto loc_82CA91E8;
loc_82CA916C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r23.u32);
	// beq 0x82ca91e0
	if (ctx.cr0.eq) goto loc_82CA91E0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// blt 0x82ca919c
	if (ctx.cr0.lt) goto loc_82CA919C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x82ca91a4
	goto loc_82CA91A4;
loc_82CA919C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb5958
	ctx.lr = 0x82CA91A4;
	sub_82CB5958(ctx, base);
loc_82CA91A4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca91c0
	if (!ctx.cr6.eq) goto loc_82CA91C0;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82ca91e0
	if (!ctx.cr6.eq) goto loc_82CA91E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82ca91e8
	goto loc_82CA91E8;
loc_82CA91C0:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// beq cr6,0x82ca91e0
	if (ctx.cr6.eq) goto loc_82CA91E0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca916c
	goto loc_82CA916C;
loc_82CA91E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
loc_82CA91E8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82ca9220
	ctx.lr = 0x82CA91F4;
	sub_82CA9220(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CA91F8:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82CA8FB8"))) PPC_WEAK_FUNC(sub_82CA8FB8);
PPC_FUNC_IMPL(__imp__sub_82CA8FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82CA8FC0;
	sub_82CA2BD4(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82ca901c
	if (!ctx.cr6.eq) goto loc_82CA901C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82ca901c
	if (ctx.cr6.eq) goto loc_82CA901C;
loc_82CA8FF0:
	// bl 0x82cab770
	ctx.lr = 0x82CA8FF4;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA9014;
	sub_82CAB630(ctx, base);
loc_82CA9014:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca91f8
	goto loc_82CA91F8;
loc_82CA901C:
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca8ff0
	if (ctx.cr6.eq) goto loc_82CA8FF0;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ca8ff0
	if (ctx.cr6.eq) goto loc_82CA8FF0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82ca9014
	if (ctx.cr6.eq) goto loc_82CA9014;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// bl 0x82ca8870
	ctx.lr = 0x82CA9060;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca9164
	if (!ctx.cr0.eq) goto loc_82CA9164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9078;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca90c8
	if (ctx.cr6.eq) goto loc_82CA90C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9088;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca90c8
	if (ctx.cr6.eq) goto loc_82CA90C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9098;
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	ctx.r29.s64 = ctx.r11.s64 + 29632;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA90B0;
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,-2648
	ctx.r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca90dc
	goto loc_82CA90DC;
loc_82CA90C8:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r28,r11,-2648
	ctx.r28.s64 = ctx.r11.s64 + -2648;
	// addi r29,r10,29632
	ctx.r29.s64 = ctx.r10.s64 + 29632;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA90DC:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ca9138
	if (!ctx.cr0.eq) goto loc_82CA9138;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA90F0;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ca912c
	if (ctx.cr6.eq) goto loc_82CA912C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9100;
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82ca912c
	if (ctx.cr6.eq) goto loc_82CA912C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9110;
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	ctx.lr = 0x82CA9120;
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CA912C:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca9164
	if (ctx.cr0.eq) goto loc_82CA9164;
loc_82CA9138:
	// bl 0x82cab770
	ctx.lr = 0x82CA913C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA915C;
	sub_82CAB630(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82CA9164:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ca91e8
	if (ctx.cr6.eq) goto loc_82CA91E8;
loc_82CA916C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r23.u32);
	// beq 0x82ca91e0
	if (ctx.cr0.eq) goto loc_82CA91E0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// blt 0x82ca919c
	if (ctx.cr0.lt) goto loc_82CA919C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x82ca91a4
	goto loc_82CA91A4;
loc_82CA919C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb5958
	ctx.lr = 0x82CA91A4;
	sub_82CB5958(ctx, base);
loc_82CA91A4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca91c0
	if (!ctx.cr6.eq) goto loc_82CA91C0;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82ca91e0
	if (!ctx.cr6.eq) goto loc_82CA91E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82ca91e8
	goto loc_82CA91E8;
loc_82CA91C0:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// beq cr6,0x82ca91e0
	if (ctx.cr6.eq) goto loc_82CA91E0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca916c
	goto loc_82CA916C;
loc_82CA91E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
loc_82CA91E8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82ca9220
	ctx.lr = 0x82CA91F4;
	sub_82CA9220(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82CA91F8:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82CA9200"))) PPC_WEAK_FUNC(sub_82CA9200);
PPC_FUNC_IMPL(__imp__sub_82CA9200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,84(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82ca9238
	goto loc_82CA9238;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA9238:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA9240;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9220"))) PPC_WEAK_FUNC(sub_82CA9220);
PPC_FUNC_IMPL(__imp__sub_82CA9220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CA9240;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9258"))) PPC_WEAK_FUNC(sub_82CA9258);
PPC_FUNC_IMPL(__imp__sub_82CA9258) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA925C"))) PPC_WEAK_FUNC(sub_82CA925C);
PPC_FUNC_IMPL(__imp__sub_82CA925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9260"))) PPC_WEAK_FUNC(sub_82CA9260);
PPC_FUNC_IMPL(__imp__sub_82CA9260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r0
	ctx.r0.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r0,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, ctx.r0.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r0,312(r3)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr1,r0,0
	ctx.cr1.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne 0x82ca928c
	if (!ctx.cr0.eq) goto loc_82CA928C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82CA928C:
	// bne cr1,0x82ca954c
	if (!ctx.cr1.eq) goto loc_82CA954C;
	// lwz r3,308(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,144(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// bl 0x82cb5b20
	ctx.lr = 0x82CA929C;
	sub_82CB5B20(ctx, base);
	// lfd f14,0(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfd f15,8(r7)
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfd f16,16(r7)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// lfd f17,24(r7)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// lfd f18,32(r7)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 32);
	// lfd f19,40(r7)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 40);
	// lfd f20,48(r7)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// lfd f21,56(r7)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 56);
	// lfd f22,64(r7)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 64);
	// lfd f23,72(r7)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 72);
	// lfd f24,80(r7)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// lfd f25,88(r7)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 88);
	// lfd f26,96(r7)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 96);
	// lfd f27,104(r7)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 104);
	// lfd f28,112(r7)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 112);
	// lfd f29,120(r7)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 120);
	// lfd f30,128(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 128);
	// lfd f31,136(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 136);
	// ld r13,152(r7)
	ctx.r13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 152);
	// ld r14,160(r7)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 160);
	// ld r15,168(r7)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 168);
	// ld r16,176(r7)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 176);
	// ld r17,184(r7)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 184);
	// ld r18,192(r7)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 192);
	// ld r19,200(r7)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 200);
	// ld r20,208(r7)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 208);
	// ld r21,216(r7)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 216);
	// ld r22,224(r7)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 224);
	// ld r23,232(r7)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 232);
	// ld r24,240(r7)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 240);
	// ld r25,248(r7)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 248);
	// ld r26,256(r7)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 256);
	// ld r27,264(r7)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 264);
	// ld r28,272(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 272);
	// ld r29,280(r7)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 280);
	// ld r30,288(r7)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 288);
	// ld r31,296(r7)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 296);
	// li r3,320
	ctx.r3.s64 = 320;
	// lvx128 v64,r3,r7
	_mm_store_si128((__m128i*)ctx.v64.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,336
	ctx.r3.s64 = 336;
	// lvx128 v65,r3,r7
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,352
	ctx.r3.s64 = 352;
	// lvx128 v66,r3,r7
	_mm_store_si128((__m128i*)ctx.v66.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,368
	ctx.r3.s64 = 368;
	// lvx128 v67,r3,r7
	_mm_store_si128((__m128i*)ctx.v67.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,384
	ctx.r3.s64 = 384;
	// lvx128 v68,r3,r7
	_mm_store_si128((__m128i*)ctx.v68.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,400
	ctx.r3.s64 = 400;
	// lvx128 v69,r3,r7
	_mm_store_si128((__m128i*)ctx.v69.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,416
	ctx.r3.s64 = 416;
	// lvx128 v70,r3,r7
	_mm_store_si128((__m128i*)ctx.v70.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,432
	ctx.r3.s64 = 432;
	// lvx128 v71,r3,r7
	_mm_store_si128((__m128i*)ctx.v71.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// lvx128 v72,r3,r7
	_mm_store_si128((__m128i*)ctx.v72.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,464
	ctx.r3.s64 = 464;
	// lvx128 v73,r3,r7
	_mm_store_si128((__m128i*)ctx.v73.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,480
	ctx.r3.s64 = 480;
	// lvx128 v74,r3,r7
	_mm_store_si128((__m128i*)ctx.v74.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,496
	ctx.r3.s64 = 496;
	// lvx128 v75,r3,r7
	_mm_store_si128((__m128i*)ctx.v75.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,512
	ctx.r3.s64 = 512;
	// lvx128 v76,r3,r7
	_mm_store_si128((__m128i*)ctx.v76.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,528
	ctx.r3.s64 = 528;
	// lvx128 v77,r3,r7
	_mm_store_si128((__m128i*)ctx.v77.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,544
	ctx.r3.s64 = 544;
	// lvx128 v78,r3,r7
	_mm_store_si128((__m128i*)ctx.v78.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,560
	ctx.r3.s64 = 560;
	// lvx128 v79,r3,r7
	_mm_store_si128((__m128i*)ctx.v79.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,576
	ctx.r3.s64 = 576;
	// lvx128 v80,r3,r7
	_mm_store_si128((__m128i*)ctx.v80.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,592
	ctx.r3.s64 = 592;
	// lvx128 v81,r3,r7
	_mm_store_si128((__m128i*)ctx.v81.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,608
	ctx.r3.s64 = 608;
	// lvx128 v82,r3,r7
	_mm_store_si128((__m128i*)ctx.v82.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,624
	ctx.r3.s64 = 624;
	// lvx128 v83,r3,r7
	_mm_store_si128((__m128i*)ctx.v83.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,640
	ctx.r3.s64 = 640;
	// lvx128 v84,r3,r7
	_mm_store_si128((__m128i*)ctx.v84.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,656
	ctx.r3.s64 = 656;
	// lvx128 v85,r3,r7
	_mm_store_si128((__m128i*)ctx.v85.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,672
	ctx.r3.s64 = 672;
	// lvx128 v86,r3,r7
	_mm_store_si128((__m128i*)ctx.v86.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,688
	ctx.r3.s64 = 688;
	// lvx128 v87,r3,r7
	_mm_store_si128((__m128i*)ctx.v87.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,704
	ctx.r3.s64 = 704;
	// lvx128 v88,r3,r7
	_mm_store_si128((__m128i*)ctx.v88.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,720
	ctx.r3.s64 = 720;
	// lvx128 v89,r3,r7
	_mm_store_si128((__m128i*)ctx.v89.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,736
	ctx.r3.s64 = 736;
	// lvx128 v90,r3,r7
	_mm_store_si128((__m128i*)ctx.v90.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,752
	ctx.r3.s64 = 752;
	// lvx128 v91,r3,r7
	_mm_store_si128((__m128i*)ctx.v91.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,768
	ctx.r3.s64 = 768;
	// lvx128 v92,r3,r7
	_mm_store_si128((__m128i*)ctx.v92.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,784
	ctx.r3.s64 = 784;
	// lvx128 v93,r3,r7
	_mm_store_si128((__m128i*)ctx.v93.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,800
	ctx.r3.s64 = 800;
	// lvx128 v94,r3,r7
	_mm_store_si128((__m128i*)ctx.v94.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,816
	ctx.r3.s64 = 816;
	// lvx128 v95,r3,r7
	_mm_store_si128((__m128i*)ctx.v95.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,832
	ctx.r3.s64 = 832;
	// lvx128 v96,r3,r7
	_mm_store_si128((__m128i*)ctx.v96.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,848
	ctx.r3.s64 = 848;
	// lvx128 v97,r3,r7
	_mm_store_si128((__m128i*)ctx.v97.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,864
	ctx.r3.s64 = 864;
	// lvx128 v98,r3,r7
	_mm_store_si128((__m128i*)ctx.v98.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,880
	ctx.r3.s64 = 880;
	// lvx128 v99,r3,r7
	_mm_store_si128((__m128i*)ctx.v99.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,896
	ctx.r3.s64 = 896;
	// lvx128 v100,r3,r7
	_mm_store_si128((__m128i*)ctx.v100.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,912
	ctx.r3.s64 = 912;
	// lvx128 v101,r3,r7
	_mm_store_si128((__m128i*)ctx.v101.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,928
	ctx.r3.s64 = 928;
	// lvx128 v102,r3,r7
	_mm_store_si128((__m128i*)ctx.v102.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,944
	ctx.r3.s64 = 944;
	// lvx128 v103,r3,r7
	_mm_store_si128((__m128i*)ctx.v103.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,960
	ctx.r3.s64 = 960;
	// lvx128 v104,r3,r7
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,976
	ctx.r3.s64 = 976;
	// lvx128 v105,r3,r7
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,992
	ctx.r3.s64 = 992;
	// lvx128 v106,r3,r7
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1008
	ctx.r3.s64 = 1008;
	// lvx128 v107,r3,r7
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lvx128 v108,r3,r7
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1040
	ctx.r3.s64 = 1040;
	// lvx128 v109,r3,r7
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1056
	ctx.r3.s64 = 1056;
	// lvx128 v110,r3,r7
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1072
	ctx.r3.s64 = 1072;
	// lvx128 v111,r3,r7
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1088
	ctx.r3.s64 = 1088;
	// lvx128 v112,r3,r7
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvx128 v113,r3,r7
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1120
	ctx.r3.s64 = 1120;
	// lvx128 v114,r3,r7
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1136
	ctx.r3.s64 = 1136;
	// lvx128 v115,r3,r7
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1152
	ctx.r3.s64 = 1152;
	// lvx128 v116,r3,r7
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1168
	ctx.r3.s64 = 1168;
	// lvx128 v117,r3,r7
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1184
	ctx.r3.s64 = 1184;
	// lvx128 v118,r3,r7
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1200
	ctx.r3.s64 = 1200;
	// lvx128 v119,r3,r7
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1216
	ctx.r3.s64 = 1216;
	// lvx128 v120,r3,r7
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1232
	ctx.r3.s64 = 1232;
	// lvx128 v121,r3,r7
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1248
	ctx.r3.s64 = 1248;
	// lvx128 v122,r3,r7
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1264
	ctx.r3.s64 = 1264;
	// lvx128 v123,r3,r7
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1280
	ctx.r3.s64 = 1280;
	// lvx128 v124,r3,r7
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1296
	ctx.r3.s64 = 1296;
	// lvx128 v125,r3,r7
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1312
	ctx.r3.s64 = 1312;
	// lvx128 v126,r3,r7
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1328
	ctx.r3.s64 = 1328;
	// lvx128 v127,r3,r7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,308(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,304(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// mtlr r5
	ctx.lr = ctx.r5.u64;
	// ld r1,144(r7)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 144);
	// mtcr r4
	ctx.cr0.lt = (ctx.r4.u32 & 0x80000000) != 0;
	ctx.cr0.gt = (ctx.r4.u32 & 0x40000000) != 0;
	ctx.cr0.eq = (ctx.r4.u32 & 0x20000000) != 0;
	ctx.cr0.so = (ctx.r4.u32 & 0x10000000) != 0;
	ctx.cr1.lt = (ctx.r4.u32 & 0x8000000) != 0;
	ctx.cr1.gt = (ctx.r4.u32 & 0x4000000) != 0;
	ctx.cr1.eq = (ctx.r4.u32 & 0x2000000) != 0;
	ctx.cr1.so = (ctx.r4.u32 & 0x1000000) != 0;
	ctx.cr2.lt = (ctx.r4.u32 & 0x800000) != 0;
	ctx.cr2.gt = (ctx.r4.u32 & 0x400000) != 0;
	ctx.cr2.eq = (ctx.r4.u32 & 0x200000) != 0;
	ctx.cr2.so = (ctx.r4.u32 & 0x100000) != 0;
	ctx.cr3.lt = (ctx.r4.u32 & 0x80000) != 0;
	ctx.cr3.gt = (ctx.r4.u32 & 0x40000) != 0;
	ctx.cr3.eq = (ctx.r4.u32 & 0x20000) != 0;
	ctx.cr3.so = (ctx.r4.u32 & 0x10000) != 0;
	ctx.cr4.lt = (ctx.r4.u32 & 0x8000) != 0;
	ctx.cr4.gt = (ctx.r4.u32 & 0x4000) != 0;
	ctx.cr4.eq = (ctx.r4.u32 & 0x2000) != 0;
	ctx.cr4.so = (ctx.r4.u32 & 0x1000) != 0;
	ctx.cr5.lt = (ctx.r4.u32 & 0x800) != 0;
	ctx.cr5.gt = (ctx.r4.u32 & 0x400) != 0;
	ctx.cr5.eq = (ctx.r4.u32 & 0x200) != 0;
	ctx.cr5.so = (ctx.r4.u32 & 0x100) != 0;
	ctx.cr6.lt = (ctx.r4.u32 & 0x80) != 0;
	ctx.cr6.gt = (ctx.r4.u32 & 0x40) != 0;
	ctx.cr6.eq = (ctx.r4.u32 & 0x20) != 0;
	ctx.cr6.so = (ctx.r4.u32 & 0x10) != 0;
	ctx.cr7.lt = (ctx.r4.u32 & 0x8) != 0;
	ctx.cr7.gt = (ctx.r4.u32 & 0x4) != 0;
	ctx.cr7.eq = (ctx.r4.u32 & 0x2) != 0;
	ctx.cr7.so = (ctx.r4.u32 & 0x1) != 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
loc_82CA954C:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82cb5b20
	ctx.lr = 0x82CA9558;
	sub_82CB5B20(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x832b25bc
	ctx.lr = 0x82CA9564;
	__imp__RtlUnwind(ctx, base);
	// lwz r0,8(r1)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r0
	ctx.lr = ctx.r0.u64;
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9574"))) PPC_WEAK_FUNC(sub_82CA9574);
PPC_FUNC_IMPL(__imp__sub_82CA9574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9578"))) PPC_WEAK_FUNC(sub_82CA9578);
PPC_FUNC_IMPL(__imp__sub_82CA9578) {
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
	// bl 0x82cacb00
	ctx.lr = 0x82CA9590;
	sub_82CACB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cacab8
	ctx.lr = 0x82CA9598;
	sub_82CACAB8(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r11,-4224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA95AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82CA95C0"))) PPC_WEAK_FUNC(sub_82CA95C0);
PPC_FUNC_IMPL(__imp__sub_82CA95C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b25cc
	__imp__KeBugCheck(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA95C8"))) PPC_WEAK_FUNC(sub_82CA95C8);
PPC_FUNC_IMPL(__imp__sub_82CA95C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82caff48
	sub_82CAFF48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA95D0"))) PPC_WEAK_FUNC(sub_82CA95D0);
PPC_FUNC_IMPL(__imp__sub_82CA95D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82cafde8
	sub_82CAFDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA95D8"))) PPC_WEAK_FUNC(sub_82CA95D8);
PPC_FUNC_IMPL(__imp__sub_82CA95D8) {
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
	// b 0x82ca9610
	goto loc_82CA9610;
loc_82CA95F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca960c
	if (ctx.cr6.eq) goto loc_82CA960C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA960C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA960C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82CA9610:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ca95f8
	if (ctx.cr6.lt) goto loc_82CA95F8;
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

__attribute__((alias("__imp__sub_82CA9630"))) PPC_WEAK_FUNC(sub_82CA9630);
PPC_FUNC_IMPL(__imp__sub_82CA9630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24104);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA9640;
	sub_82CA2BE8(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82caff48
	ctx.lr = 0x82CA965C;
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,26852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ca9710
	if (ctx.cr6.eq) goto loc_82CA9710;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,26848(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26848);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ca9688
	if (!ctx.cr6.eq) goto loc_82CA9688;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b25cc
	ctx.lr = 0x82CA9688;
	__imp__KeBugCheck(ctx, base);
loc_82CA9688:
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,26848(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26848, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r28,26844(r8)
	PPC_STORE_U8(ctx.r8.u32 + 26844, ctx.r28.u8);
	// bne cr6,0x82ca96fc
	if (!ctx.cr6.eq) goto loc_82CA96FC;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r30,29892(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29892);
	// lwz r29,29896(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29896);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x82ca96e8
	if (ctx.cr0.eq) goto loc_82CA96E8;
loc_82CA96BC:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca96e8
	if (ctx.cr6.lt) goto loc_82CA96E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca96e0
	if (ctx.cr6.eq) goto loc_82CA96E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA96E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA96E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca96bc
	goto loc_82CA96BC;
loc_82CA96E8:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,24052
	ctx.r4.s64 = ctx.r11.s64 + 24052;
	// addi r3,r10,24040
	ctx.r3.s64 = ctx.r10.s64 + 24040;
	// bl 0x82ca95d8
	ctx.lr = 0x82CA96FC;
	sub_82CA95D8(ctx, base);
loc_82CA96FC:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,24060
	ctx.r4.s64 = ctx.r11.s64 + 24060;
	// addi r3,r10,24056
	ctx.r3.s64 = ctx.r10.s64 + 24056;
	// bl 0x82ca95d8
	ctx.lr = 0x82CA9710;
	sub_82CA95D8(ctx, base);
loc_82CA9710:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82ca9758
	ctx.lr = 0x82CA971C;
	sub_82CA9758(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca9730
	if (!ctx.cr6.eq) goto loc_82CA9730;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b25cc
	ctx.lr = 0x82CA9730;
	__imp__KeBugCheck(ctx, base);
loc_82CA9730:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CA9638"))) PPC_WEAK_FUNC(sub_82CA9638);
PPC_FUNC_IMPL(__imp__sub_82CA9638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA9640;
	sub_82CA2BE8(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82caff48
	ctx.lr = 0x82CA965C;
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,26852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ca9710
	if (ctx.cr6.eq) goto loc_82CA9710;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,26848(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26848);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ca9688
	if (!ctx.cr6.eq) goto loc_82CA9688;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b25cc
	ctx.lr = 0x82CA9688;
	__imp__KeBugCheck(ctx, base);
loc_82CA9688:
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,26848(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26848, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r28,26844(r8)
	PPC_STORE_U8(ctx.r8.u32 + 26844, ctx.r28.u8);
	// bne cr6,0x82ca96fc
	if (!ctx.cr6.eq) goto loc_82CA96FC;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r30,29892(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29892);
	// lwz r29,29896(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29896);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x82ca96e8
	if (ctx.cr0.eq) goto loc_82CA96E8;
loc_82CA96BC:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca96e8
	if (ctx.cr6.lt) goto loc_82CA96E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ca96e0
	if (ctx.cr6.eq) goto loc_82CA96E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA96E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CA96E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca96bc
	goto loc_82CA96BC;
loc_82CA96E8:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,24052
	ctx.r4.s64 = ctx.r11.s64 + 24052;
	// addi r3,r10,24040
	ctx.r3.s64 = ctx.r10.s64 + 24040;
	// bl 0x82ca95d8
	ctx.lr = 0x82CA96FC;
	sub_82CA95D8(ctx, base);
loc_82CA96FC:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,24060
	ctx.r4.s64 = ctx.r11.s64 + 24060;
	// addi r3,r10,24056
	ctx.r3.s64 = ctx.r10.s64 + 24056;
	// bl 0x82ca95d8
	ctx.lr = 0x82CA9710;
	sub_82CA95D8(ctx, base);
loc_82CA9710:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82ca9758
	ctx.lr = 0x82CA971C;
	sub_82CA9758(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca9730
	if (!ctx.cr6.eq) goto loc_82CA9730;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b25cc
	ctx.lr = 0x82CA9730;
	__imp__KeBugCheck(ctx, base);
loc_82CA9730:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CA9738"))) PPC_WEAK_FUNC(sub_82CA9738);
PPC_FUNC_IMPL(__imp__sub_82CA9738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,164(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x82ca9770
	goto loc_82CA9770;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA9770:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ca9780
	if (ctx.cr6.eq) goto loc_82CA9780;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cafde8
	ctx.lr = 0x82CA9780;
	sub_82CAFDE8(ctx, base);
loc_82CA9780:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9758"))) PPC_WEAK_FUNC(sub_82CA9758);
PPC_FUNC_IMPL(__imp__sub_82CA9758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ca9780
	if (ctx.cr6.eq) goto loc_82CA9780;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cafde8
	ctx.lr = 0x82CA9780;
	sub_82CAFDE8(ctx, base);
loc_82CA9780:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9798"))) PPC_WEAK_FUNC(sub_82CA9798);
PPC_FUNC_IMPL(__imp__sub_82CA9798) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca9638
	sub_82CA9638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA97A4"))) PPC_WEAK_FUNC(sub_82CA97A4);
PPC_FUNC_IMPL(__imp__sub_82CA97A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA97A8"))) PPC_WEAK_FUNC(sub_82CA97A8);
PPC_FUNC_IMPL(__imp__sub_82CA97A8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ca9638
	sub_82CA9638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA97B4"))) PPC_WEAK_FUNC(sub_82CA97B4);
PPC_FUNC_IMPL(__imp__sub_82CA97B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA97B8"))) PPC_WEAK_FUNC(sub_82CA97B8);
PPC_FUNC_IMPL(__imp__sub_82CA97B8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca9638
	sub_82CA9638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA97C8"))) PPC_WEAK_FUNC(sub_82CA97C8);
PPC_FUNC_IMPL(__imp__sub_82CA97C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cacc00
	ctx.lr = 0x82CA97DC;
	sub_82CACC00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb5b38
	ctx.lr = 0x82CA97E4;
	sub_82CB5B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab620
	ctx.lr = 0x82CA97EC;
	sub_82CAB620(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cacb30
	ctx.lr = 0x82CA97F4;
	sub_82CACB30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829ce870
	ctx.lr = 0x82CA97FC;
	sub_829CE870(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb5850
	ctx.lr = 0x82CA9804;
	sub_82CB5850(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,-26712
	ctx.r11.s64 = ctx.r11.s64 + -26712;
	// stw r11,-4224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4224, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9824"))) PPC_WEAK_FUNC(sub_82CA9824);
PPC_FUNC_IMPL(__imp__sub_82CA9824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9828"))) PPC_WEAK_FUNC(sub_82CA9828);
PPC_FUNC_IMPL(__imp__sub_82CA9828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CA9830;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca9850
	if (ctx.cr6.eq) goto loc_82CA9850;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82CA9850:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ca9888
	if (!ctx.cr6.eq) goto loc_82CA9888;
	// bl 0x82cab770
	ctx.lr = 0x82CA985C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA987C;
	sub_82CAB630(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82ca99b4
	goto loc_82CA99B4;
loc_82CA9888:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r30,r11,-3224
	ctx.r30.s64 = ctx.r11.s64 + -3224;
	// lwz r11,-3224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3224);
loc_82CA9894:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82ca98b8
	if (!ctx.cr6.gt) goto loc_82CA98B8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82cb03d8
	ctx.lr = 0x82CA98B0;
	sub_82CB03D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82ca98cc
	goto loc_82CA98CC;
loc_82CA98B8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_82CA98CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca98dc
	if (ctx.cr6.eq) goto loc_82CA98DC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82ca9894
	goto loc_82CA9894;
loc_82CA98DC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CA98E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca98e0
	if (!ctx.cr6.eq) goto loc_82CA98E0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb0320
	ctx.lr = 0x82CA9914;
	sub_82CB0320(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca9928
	if (ctx.cr6.eq) goto loc_82CA9928;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82CA9928:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r10,r11,576
	ctx.r10.u64 = ctx.r11.u64 & 576;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ca9950
	if (ctx.cr0.eq) goto loc_82CA9950;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// beq cr6,0x82ca99b0
	if (ctx.cr6.eq) goto loc_82CA99B0;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x82ca99b0
	goto loc_82CA99B0;
loc_82CA9950:
	// andi. r10,r11,129
	ctx.r10.u64 = ctx.r11.u64 & 129;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ca9980
	if (ctx.cr0.eq) goto loc_82CA9980;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// bne cr6,0x82ca9978
	if (!ctx.cr6.eq) goto loc_82CA9978;
	// lfd f0,4048(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4048);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82ca999c
	goto loc_82CA999C;
loc_82CA9978:
	// lfd f31,4048(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4048);
	// b 0x82ca999c
	goto loc_82CA999C;
loc_82CA9980:
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca99ac
	if (ctx.cr0.eq) goto loc_82CA99AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lfd f31,3376(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82ca99ac
	if (!ctx.cr6.eq) goto loc_82CA99AC;
loc_82CA999C:
	// bl 0x82cab770
	ctx.lr = 0x82CA99A0;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82ca99b0
	goto loc_82CA99B0;
loc_82CA99AC:
	// lfd f31,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_82CA99B0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82CA99B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CA99C0"))) PPC_WEAK_FUNC(sub_82CA99C0);
PPC_FUNC_IMPL(__imp__sub_82CA99C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ca9828
	sub_82CA9828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA99C8"))) PPC_WEAK_FUNC(sub_82CA99C8);
PPC_FUNC_IMPL(__imp__sub_82CA99C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CA99CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca99cc
	if (!ctx.cr6.eq) goto loc_82CA99CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82ca9a00
	goto loc_82CA9A00;
loc_82CA99E4:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82CA9A00:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ca99e4
	if (!ctx.cr6.eq) goto loc_82CA99E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9A14"))) PPC_WEAK_FUNC(sub_82CA9A14);
PPC_FUNC_IMPL(__imp__sub_82CA9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9A18"))) PPC_WEAK_FUNC(sub_82CA9A18);
PPC_FUNC_IMPL(__imp__sub_82CA9A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca9a2c
	goto loc_82CA9A2C;
loc_82CA9A1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca9a3c
	if (ctx.cr6.eq) goto loc_82CA9A3C;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_82CA9A2C:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ca9a1c
	if (ctx.cr0.eq) goto loc_82CA9A1C;
loc_82CA9A3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ca9a4c
	if (!ctx.cr6.lt) goto loc_82CA9A4C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82ca9a54
	goto loc_82CA9A54;
loc_82CA9A4C:
	// ble cr6,0x82ca9a54
	if (!ctx.cr6.gt) goto loc_82CA9A54;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CA9A54:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9A5C"))) PPC_WEAK_FUNC(sub_82CA9A5C);
PPC_FUNC_IMPL(__imp__sub_82CA9A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9A60"))) PPC_WEAK_FUNC(sub_82CA9A60);
PPC_FUNC_IMPL(__imp__sub_82CA9A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82CA9A68;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ca9a94
	if (ctx.cr6.eq) goto loc_82CA9A94;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca9c28
	if (ctx.cr6.eq) goto loc_82CA9C28;
loc_82CA9A94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ca9ac4
	if (!ctx.cr6.eq) goto loc_82CA9AC4;
loc_82CA9A9C:
	// bl 0x82cab770
	ctx.lr = 0x82CA9AA0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA9AC0;
	sub_82CAB630(ctx, base);
	// b 0x82ca9c24
	goto loc_82CA9C24;
loc_82CA9AC4:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ca9a9c
	if (ctx.cr6.gt) goto loc_82CA9A9C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ca9ccc
	if (ctx.cr6.eq) goto loc_82CA9CCC;
	// lis r27,-31953
	ctx.r27.s64 = -2094071808;
	// lwz r9,-3224(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3224);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca9b28
	if (!ctx.cr6.eq) goto loc_82CA9B28;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca9c28
	if (ctx.cr6.eq) goto loc_82CA9C28;
loc_82CA9AF8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82ca9c14
	if (ctx.cr6.gt) goto loc_82CA9C14;
	// stbx r11,r3,r28
	PPC_STORE_U8(ctx.r3.u32 + ctx.r28.u32, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// beq 0x82ca9c28
	if (ctx.cr0.eq) goto loc_82CA9C28;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca9af8
	if (ctx.cr6.lt) goto loc_82CA9AF8;
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9B28:
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ca9bc8
	if (!ctx.cr6.eq) goto loc_82CA9BC8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ca9b7c
	if (ctx.cr6.eq) goto loc_82CA9B7C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82CA9B44:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82ca9b5c
	if (ctx.cr0.eq) goto loc_82CA9B5C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82ca9b44
	if (!ctx.cr0.eq) goto loc_82CA9B44;
loc_82CA9B5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ca9b7c
	if (ctx.cr6.eq) goto loc_82CA9B7C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ca9b7c
	if (!ctx.cr0.eq) goto loc_82CA9B7C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82CA9B7C:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd5a0
	ctx.lr = 0x82CA9BA0;
	sub_82CBD5A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ca9c14
	if (ctx.cr0.eq) goto loc_82CA9C14;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca9c14
	if (!ctx.cr6.eq) goto loc_82CA9C14;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ca9c28
	if (!ctx.cr6.eq) goto loc_82CA9C28;
	// b 0x82ca9d24
	goto loc_82CA9D24;
loc_82CA9BC8:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd5a0
	ctx.lr = 0x82CA9BEC;
	sub_82CBD5A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca9c14
	if (!ctx.cr6.eq) goto loc_82CA9C14;
	// beq 0x82ca9c08
	if (ctx.cr0.eq) goto loc_82CA9C08;
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9C08:
	// bl 0x82cc0758
	ctx.lr = 0x82CA9C0C;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x82ca9cbc
	if (ctx.cr6.eq) goto loc_82CA9CBC;
loc_82CA9C14:
	// bl 0x82cab770
	ctx.lr = 0x82CA9C18;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82CA9C24:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA9C28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82CA9C30:
	// lwz r11,-3224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3224);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cbd5a0
	ctx.lr = 0x82CA9C58;
	sub_82CBD5A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ca9c14
	if (ctx.cr0.eq) goto loc_82CA9C14;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca9c14
	if (!ctx.cr6.eq) goto loc_82CA9C14;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ca9c14
	if (ctx.cr6.lt) goto loc_82CA9C14;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x82ca9c14
	if (ctx.cr6.gt) goto loc_82CA9C14;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ca9cc4
	if (ctx.cr6.gt) goto loc_82CA9CC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82ca9cb8
	if (!ctx.cr6.gt) goto loc_82CA9CB8;
loc_82CA9C94:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// beq 0x82ca9cc4
	if (ctx.cr0.eq) goto loc_82CA9CC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82ca9c94
	if (ctx.cr6.lt) goto loc_82CA9C94;
loc_82CA9CB8:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82CA9CBC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ca9c30
	if (ctx.cr6.lt) goto loc_82CA9C30;
loc_82CA9CC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9CCC:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lwz r11,-3224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3224);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ca9cec
	if (!ctx.cr6.eq) goto loc_82CA9CEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217ab30
	ctx.lr = 0x82CA9CE8;
	sub_8217AB30(ctx, base);
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9CEC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd5a0
	ctx.lr = 0x82CA9D10;
	sub_82CBD5A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ca9c14
	if (ctx.cr0.eq) goto loc_82CA9C14;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ca9c14
	if (!ctx.cr6.eq) goto loc_82CA9C14;
loc_82CA9D24:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x82ca9c28
	goto loc_82CA9C28;
}

__attribute__((alias("__imp__sub_82CA9D2C"))) PPC_WEAK_FUNC(sub_82CA9D2C);
PPC_FUNC_IMPL(__imp__sub_82CA9D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9D30"))) PPC_WEAK_FUNC(sub_82CA9D30);
PPC_FUNC_IMPL(__imp__sub_82CA9D30) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ca9a60
	sub_82CA9A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA9D38"))) PPC_WEAK_FUNC(sub_82CA9D38);
PPC_FUNC_IMPL(__imp__sub_82CA9D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CA9D40;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// beq cr6,0x82ca9dc4
	if (ctx.cr6.eq) goto loc_82CA9DC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca9dcc
	if (ctx.cr6.eq) goto loc_82CA9DCC;
loc_82CA9D70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca9d7c
	if (ctx.cr6.eq) goto loc_82CA9D7C;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82CA9D7C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ca9d88
	if (ctx.cr6.eq) goto loc_82CA9D88;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
loc_82CA9D88:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bgt cr6,0x82ca9d98
	if (ctx.cr6.gt) goto loc_82CA9D98;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82CA9D98:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca9a60
	ctx.lr = 0x82CA9DA4;
	sub_82CA9A60(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ca9df8
	if (!ctx.cr6.eq) goto loc_82CA9DF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca9db8
	if (ctx.cr6.eq) goto loc_82CA9DB8;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82CA9DB8:
	// bl 0x82cab770
	ctx.lr = 0x82CA9DBC;
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca9e6c
	goto loc_82CA9E6C;
loc_82CA9DC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ca9d70
	if (ctx.cr6.eq) goto loc_82CA9D70;
loc_82CA9DCC:
	// bl 0x82cab770
	ctx.lr = 0x82CA9DD0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA9DF0;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca9e6c
	goto loc_82CA9E6C;
loc_82CA9DF8:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ca9e5c
	if (ctx.cr6.eq) goto loc_82CA9E5C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82ca9e54
	if (!ctx.cr6.gt) goto loc_82CA9E54;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82ca9e4c
	if (ctx.cr6.eq) goto loc_82CA9E4C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bgt cr6,0x82ca9e4c
	if (ctx.cr6.gt) goto loc_82CA9E4C;
	// bl 0x82cab770
	ctx.lr = 0x82CA9E24;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA9E44;
	sub_82CAB630(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x82ca9e6c
	goto loc_82CA9E6C;
loc_82CA9E4C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r27,80
	ctx.r27.s64 = 80;
loc_82CA9E54:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r28.u8);
loc_82CA9E5C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ca9e68
	if (ctx.cr6.eq) goto loc_82CA9E68;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82CA9E68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82CA9E6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CA9E74"))) PPC_WEAK_FUNC(sub_82CA9E74);
PPC_FUNC_IMPL(__imp__sub_82CA9E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9E78"))) PPC_WEAK_FUNC(sub_82CA9E78);
PPC_FUNC_IMPL(__imp__sub_82CA9E78) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ca9d38
	sub_82CA9D38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA9E80"))) PPC_WEAK_FUNC(sub_82CA9E80);
PPC_FUNC_IMPL(__imp__sub_82CA9E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r12,r3
	ctx.r12.s64 = -ctx.r3.s64;
	// neg r11,r12
	ctx.r11.s64 = -ctx.r12.s64;
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_82CA9E9C:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x82ca9e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA9E9C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9E84"))) PPC_WEAK_FUNC(sub_82CA9E84);
PPC_FUNC_IMPL(__imp__sub_82CA9E84) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r11,r12
	ctx.r11.s64 = -ctx.r12.s64;
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_82CA9E9C:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x82ca9e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CA9E9C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9EA8"))) PPC_WEAK_FUNC(sub_82CA9EA8);
PPC_FUNC_IMPL(__imp__sub_82CA9EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82CA9EB0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ca9ed0
	if (ctx.cr6.eq) goto loc_82CA9ED0;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
loc_82CA9ED0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82ca9f04
	if (!ctx.cr6.eq) goto loc_82CA9F04;
loc_82CA9ED8:
	// bl 0x82cab770
	ctx.lr = 0x82CA9EDC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CA9EFC;
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caa174
	goto loc_82CAA174;
loc_82CA9F04:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82ca9f1c
	if (ctx.cr6.eq) goto loc_82CA9F1C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x82ca9ed8
	if (ctx.cr6.lt) goto loc_82CA9ED8;
	// cmpwi cr6,r27,36
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 36, ctx.xer);
	// bgt cr6,0x82ca9ed8
	if (ctx.cr6.gt) goto loc_82CA9ED8;
loc_82CA9F1C:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lbz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 1;
	// addi r30,r11,-3224
	ctx.r30.s64 = ctx.r11.s64 + -3224;
	// lwz r10,-3224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3224);
loc_82CA9F34:
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82ca9f58
	if (!ctx.cr6.gt) goto loc_82CA9F58;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82cb03d8
	ctx.lr = 0x82CA9F50;
	sub_82CB03D8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82ca9f68
	goto loc_82CA9F68;
loc_82CA9F58:
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_82CA9F68:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ca9f7c
	if (ctx.cr6.eq) goto loc_82CA9F7C;
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82ca9f34
	goto loc_82CA9F34;
loc_82CA9F7C:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82ca9f90
	if (!ctx.cr6.eq) goto loc_82CA9F90;
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
	// b 0x82ca9f98
	goto loc_82CA9F98;
loc_82CA9F90:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82ca9fa0
	if (!ctx.cr6.eq) goto loc_82CA9FA0;
loc_82CA9F98:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82CA9FA0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ca9fe0
	if (!ctx.cr6.eq) goto loc_82CA9FE0;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82ca9fbc
	if (ctx.cr6.eq) goto loc_82CA9FBC;
	// li r27,10
	ctx.r27.s64 = 10;
	// b 0x82caa018
	goto loc_82CAA018;
loc_82CA9FBC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82ca9fdc
	if (ctx.cr6.eq) goto loc_82CA9FDC;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82ca9fdc
	if (ctx.cr6.eq) goto loc_82CA9FDC;
	// li r27,8
	ctx.r27.s64 = 8;
	// b 0x82caa018
	goto loc_82CAA018;
loc_82CA9FDC:
	// li r27,16
	ctx.r27.s64 = 16;
loc_82CA9FE0:
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// bne cr6,0x82caa018
	if (!ctx.cr6.eq) goto loc_82CAA018;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82caa018
	if (!ctx.cr6.eq) goto loc_82CAA018;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82caa00c
	if (ctx.cr6.eq) goto loc_82CAA00C;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82caa018
	if (!ctx.cr6.eq) goto loc_82CAA018;
loc_82CAA00C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lbz r31,1(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82CAA018:
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// lwz r7,200(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// li r11,-1
	ctx.r11.s64 = -1;
	// tdllei r9,0
	// divdu r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 / ctx.r9.u64;
loc_82CAA02C:
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82caa048
	if (ctx.cr0.eq) goto loc_82CAA048;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x82caa070
	goto loc_82CAA070;
loc_82CAA048:
	// andi. r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82caa0b4
	if (ctx.cr0.eq) goto loc_82CAA0B4;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82caa06c
	if (ctx.cr6.lt) goto loc_82CAA06C;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x82caa06c
	if (ctx.cr6.gt) goto loc_82CAA06C;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_82CAA06C:
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_82CAA070:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82caa0b4
	if (!ctx.cr6.lt) goto loc_82CAA0B4;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// cmpld cr6,r28,r8
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x82caa0d4
	if (ctx.cr6.lt) goto loc_82CAA0D4;
	// bne cr6,0x82caa0a8
	if (!ctx.cr6.eq) goto loc_82CAA0A8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// divdu r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 / ctx.r9.u64;
	// tdllei r9,0
	// mulld r5,r5,r9
	ctx.r5.s64 = ctx.r5.s64 * ctx.r9.s64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpld cr6,r6,r10
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82caa0d4
	if (!ctx.cr6.gt) goto loc_82CAA0D4;
loc_82CAA0A8:
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82caa0e0
	if (!ctx.cr6.eq) goto loc_82CAA0E0;
loc_82CAA0B4:
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne 0x82caa0ec
	if (!ctx.cr0.eq) goto loc_82CAA0EC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82caa0cc
	if (ctx.cr6.eq) goto loc_82CAA0CC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82CAA0CC:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82caa158
	goto loc_82CAA158;
loc_82CAA0D4:
	// mulld r10,r9,r28
	ctx.r10.s64 = ctx.r9.s64 * ctx.r28.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CAA0E0:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82caa02c
	goto loc_82CAA02C;
loc_82CAA0EC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrldi r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// rldicr r30,r9,63,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// bne 0x82caa12c
	if (!ctx.cr0.eq) goto loc_82CAA12C;
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82caa158
	if (!ctx.cr0.eq) goto loc_82CAA158;
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82caa11c
	if (ctx.cr0.eq) goto loc_82CAA11C;
	// cmpld cr6,r28,r30
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r30.u64, ctx.xer);
	// bgt cr6,0x82caa12c
	if (ctx.cr6.gt) goto loc_82CAA12C;
loc_82CAA11C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82caa158
	if (!ctx.cr6.eq) goto loc_82CAA158;
	// cmpld cr6,r28,r31
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r31.u64, ctx.xer);
	// ble cr6,0x82caa158
	if (!ctx.cr6.gt) goto loc_82CAA158;
loc_82CAA12C:
	// bl 0x82cab770
	ctx.lr = 0x82CAA130;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// clrlwi. r10,r25,31
	ctx.r10.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82caa148
	if (ctx.cr0.eq) goto loc_82CAA148;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x82caa158
	goto loc_82CAA158;
loc_82CAA148:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bne 0x82caa158
	if (!ctx.cr0.eq) goto loc_82CAA158;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82CAA158:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82caa164
	if (ctx.cr6.eq) goto loc_82CAA164;
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
loc_82CAA164:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82caa170
	if (ctx.cr0.eq) goto loc_82CAA170;
	// neg r28,r28
	ctx.r28.s64 = -ctx.r28.s64;
loc_82CAA170:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82CAA174:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82CAA17C"))) PPC_WEAK_FUNC(sub_82CAA17C);
PPC_FUNC_IMPL(__imp__sub_82CAA17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA180"))) PPC_WEAK_FUNC(sub_82CAA180);
PPC_FUNC_IMPL(__imp__sub_82CAA180) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-3224
	ctx.r3.s64 = ctx.r10.s64 + -3224;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82ca9ea8
	sub_82CA9EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA1A0"))) PPC_WEAK_FUNC(sub_82CAA1A0);
PPC_FUNC_IMPL(__imp__sub_82CAA1A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-3224
	ctx.r3.s64 = ctx.r10.s64 + -3224;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82ca9ea8
	sub_82CA9EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA1C0"))) PPC_WEAK_FUNC(sub_82CAA1C0);
PPC_FUNC_IMPL(__imp__sub_82CAA1C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82caa208
	if (!ctx.cr6.eq) goto loc_82CAA208;
loc_82CAA1DC:
	// bl 0x82cab770
	ctx.lr = 0x82CAA1E0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAA200;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caa29c
	goto loc_82CAA29C;
loc_82CAA208:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82caa1dc
	if (ctx.cr6.eq) goto loc_82CAA1DC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82caccc0
	ctx.lr = 0x82CAA234;
	sub_82CACCC0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82caa264
	if (ctx.cr0.lt) goto loc_82CAA264;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82caa270
	goto loc_82CAA270;
loc_82CAA264:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	ctx.lr = 0x82CAA270;
	sub_82CAB7E0(ctx, base);
loc_82CAA270:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82caa28c
	if (ctx.cr0.lt) goto loc_82CAA28C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// b 0x82caa298
	goto loc_82CAA298;
loc_82CAA28C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	ctx.lr = 0x82CAA298;
	sub_82CAB7E0(ctx, base);
loc_82CAA298:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CAA29C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82CAA2B4"))) PPC_WEAK_FUNC(sub_82CAA2B4);
PPC_FUNC_IMPL(__imp__sub_82CAA2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA2B8"))) PPC_WEAK_FUNC(sub_82CAA2B8);
PPC_FUNC_IMPL(__imp__sub_82CAA2B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82caa1c0
	sub_82CAA1C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA2C4"))) PPC_WEAK_FUNC(sub_82CAA2C4);
PPC_FUNC_IMPL(__imp__sub_82CAA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA2C8"))) PPC_WEAK_FUNC(sub_82CAA2C8);
PPC_FUNC_IMPL(__imp__sub_82CAA2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// b 0x82ca6e08
	sub_82CA6E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA2E0"))) PPC_WEAK_FUNC(sub_82CAA2E0);
PPC_FUNC_IMPL(__imp__sub_82CAA2E0) {
	PPC_FUNC_PROLOGUE();
	// cmpw r3,r4
	ctx.cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beqlr- 
	if (ctx.cr0.eq) return;
	// bge+ 0x82caa2f0
	if (!ctx.cr0.lt) goto loc_82CAA2F0;
	// b 0x82ca2c60
	sub_82CA2C60(ctx, base);
	return;
loc_82CAA2F0:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x82caa318
	goto loc_82CAA318;
loc_82CAA304:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82CAA318:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x82caa304
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_82CAA304;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x82caa348
	if (ctx.cr0.eq) goto loc_82CAA348;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x82caa36c
	if (!ctx.cr0.eq) goto loc_82CAA36C;
loc_82CAA334:
	// lwz r7,-4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x82caa334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CAA334;
loc_82CAA348:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_82CAA354:
	// lbz r0,-1(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x82caa354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CAA354;
	// blr 
	return;
loc_82CAA36C:
	// lbz r7,-1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x82caa36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CAA36C;
	// b 0x82caa348
	goto loc_82CAA348;
}

__attribute__((alias("__imp__sub_82CAA39C"))) PPC_WEAK_FUNC(sub_82CAA39C);
PPC_FUNC_IMPL(__imp__sub_82CAA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA3A0"))) PPC_WEAK_FUNC(sub_82CAA3A0);
PPC_FUNC_IMPL(__imp__sub_82CAA3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82CAA3A8;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r18,292(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// beq cr6,0x82caa4a8
	if (ctx.cr6.eq) goto loc_82CAA4A8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82caa3f4
	if (!ctx.cr6.eq) goto loc_82CAA3F4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82caa4a8
	if (!ctx.cr6.eq) goto loc_82CAA4A8;
	// b 0x82caa3fc
	goto loc_82CAA3FC;
loc_82CAA3F4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82caa4a8
	if (ctx.cr6.eq) goto loc_82CAA4A8;
loc_82CAA3FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82caa410
	if (!ctx.cr6.eq) goto loc_82CAA410;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82caa4a8
	if (!ctx.cr6.eq) goto loc_82CAA4A8;
	// b 0x82caa418
	goto loc_82CAA418;
loc_82CAA410:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82caa4a8
	if (ctx.cr6.eq) goto loc_82CAA4A8;
loc_82CAA418:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82caa42c
	if (!ctx.cr6.eq) goto loc_82CAA42C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82caa4a8
	if (!ctx.cr6.eq) goto loc_82CAA4A8;
	// b 0x82caa434
	goto loc_82CAA434;
loc_82CAA42C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82caa4a8
	if (ctx.cr6.eq) goto loc_82CAA4A8;
loc_82CAA434:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82caa4a0
	if (!ctx.cr6.eq) goto loc_82CAA4A0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82caa4a8
	if (!ctx.cr6.eq) goto loc_82CAA4A8;
loc_82CAA444:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82CAA44C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82caa464
	if (ctx.cr6.eq) goto loc_82CAA464;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82caa44c
	if (!ctx.cr0.eq) goto loc_82CAA44C;
loc_82CAA464:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82caa4b0
	if (!ctx.cr6.eq) goto loc_82CAA4B0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82caa498
	if (ctx.cr6.eq) goto loc_82CAA498;
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// blt cr6,0x82caa5dc
	if (ctx.cr6.lt) goto loc_82CAA5DC;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb5c28
	ctx.lr = 0x82CAA498;
	sub_82CB5C28(ctx, base);
loc_82CAA498:
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// b 0x82caa4bc
	goto loc_82CAA4BC;
loc_82CAA4A0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82caa444
	if (!ctx.cr6.eq) goto loc_82CAA444;
loc_82CAA4A8:
	// li r17,1
	ctx.r17.s64 = 1;
	// b 0x82caa5dc
	goto loc_82CAA5DC;
loc_82CAA4B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82caa4bc
	if (ctx.cr6.eq) goto loc_82CAA4BC;
	// stb r20,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r20.u8);
loc_82CAA4BC:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caa560
	if (ctx.cr6.eq) goto loc_82CAA560;
loc_82CAA4D4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831fd318
	ctx.lr = 0x82CAA4E0;
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82caa4f0
	if (ctx.cr0.eq) goto loc_82CAA4F0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82caa51c
	goto loc_82CAA51C;
loc_82CAA4F0:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82caa518
	if (ctx.cr6.eq) goto loc_82CAA518;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82caa518
	if (ctx.cr6.eq) goto loc_82CAA518;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82caa51c
	if (!ctx.cr6.eq) goto loc_82CAA51C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82caa51c
	goto loc_82CAA51C;
loc_82CAA518:
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
loc_82CAA51C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82caa4d4
	if (!ctx.cr6.eq) goto loc_82CAA4D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82caa560
	if (ctx.cr6.eq) goto loc_82CAA560;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82caa558
	if (ctx.cr6.eq) goto loc_82CAA558;
	// subf r6,r30,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82caa5dc
	if (!ctx.cr6.gt) goto loc_82CAA5DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cb5c28
	ctx.lr = 0x82CAA558;
	sub_82CB5C28(ctx, base);
loc_82CAA558:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82caa56c
	goto loc_82CAA56C;
loc_82CAA560:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82caa56c
	if (ctx.cr6.eq) goto loc_82CAA56C;
	// stb r20,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r20.u8);
loc_82CAA56C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82caa5c8
	if (ctx.cr6.eq) goto loc_82CAA5C8;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82caa5c8
	if (ctx.cr6.lt) goto loc_82CAA5C8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82caa5a0
	if (ctx.cr6.eq) goto loc_82CAA5A0;
	// subf r6,r30,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82caa5dc
	if (!ctx.cr6.gt) goto loc_82CAA5DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cb5c28
	ctx.lr = 0x82CAA5A0;
	sub_82CB5C28(ctx, base);
loc_82CAA5A0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82caa69c
	if (ctx.cr6.eq) goto loc_82CAA69C;
	// subf r6,r28,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r28.s64;
	// cmplw cr6,r18,r6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82caa5dc
	if (!ctx.cr6.gt) goto loc_82CAA5DC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82cb5c28
	ctx.lr = 0x82CAA5C4;
	sub_82CB5C28(ctx, base);
	// b 0x82caa69c
	goto loc_82CAA69C;
loc_82CAA5C8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82caa690
	if (ctx.cr6.eq) goto loc_82CAA690;
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82caa680
	if (ctx.cr6.gt) goto loc_82CAA680;
loc_82CAA5DC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82caa5f0
	if (ctx.cr6.eq) goto loc_82CAA5F0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82caa5f0
	if (ctx.cr6.eq) goto loc_82CAA5F0;
	// stb r20,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r20.u8);
loc_82CAA5F0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82caa604
	if (ctx.cr6.eq) goto loc_82CAA604;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82caa604
	if (ctx.cr6.eq) goto loc_82CAA604;
	// stb r20,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r20.u8);
loc_82CAA604:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82caa618
	if (ctx.cr6.eq) goto loc_82CAA618;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82caa618
	if (ctx.cr6.eq) goto loc_82CAA618;
	// stb r20,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r20.u8);
loc_82CAA618:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82caa62c
	if (ctx.cr6.eq) goto loc_82CAA62C;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82caa62c
	if (ctx.cr6.eq) goto loc_82CAA62C;
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
loc_82CAA62C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82caa660
	if (!ctx.cr6.eq) goto loc_82CAA660;
loc_82CAA634:
	// bl 0x82cab770
	ctx.lr = 0x82CAA638;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAA658;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82caa6a0
	goto loc_82CAA6A0;
loc_82CAA660:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82caa634
	if (!ctx.cr6.eq) goto loc_82CAA634;
	// bl 0x82cab770
	ctx.lr = 0x82CAA66C;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,34
	ctx.r10.s64 = 34;
	// li r3,34
	ctx.r3.s64 = 34;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82caa6a0
	goto loc_82CAA6A0;
loc_82CAA680:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cb5c28
	ctx.lr = 0x82CAA690;
	sub_82CB5C28(ctx, base);
loc_82CAA690:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82caa69c
	if (ctx.cr6.eq) goto loc_82CAA69C;
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
loc_82CAA69C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAA6A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82CAA6A8"))) PPC_WEAK_FUNC(sub_82CAA6A8);
PPC_FUNC_IMPL(__imp__sub_82CAA6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r6.s64;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r5.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r4.s64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// subfe r31,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r7,r11,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// clrlwi r5,r31,30
	ctx.r5.u64 = ctx.r31.u32 & 0x3;
	// bl 0x82caa3a0
	ctx.lr = 0x82CAA6FC;
	sub_82CAA3A0(ctx, base);
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

__attribute__((alias("__imp__sub_82CAA710"))) PPC_WEAK_FUNC(sub_82CAA710);
PPC_FUNC_IMPL(__imp__sub_82CAA710) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cb5c30
	sub_82CB5C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA728"))) PPC_WEAK_FUNC(sub_82CAA728);
PPC_FUNC_IMPL(__imp__sub_82CAA728) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82caa74c
	if (!ctx.cr6.eq) goto loc_82CAA74C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caa794
	if (ctx.cr6.eq) goto loc_82CAA794;
loc_82CAA74C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc1650
	ctx.lr = 0x82CAA754;
	sub_82CC1650(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82caa794
	if (ctx.cr0.eq) goto loc_82CAA794;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc1290
	ctx.lr = 0x82CAA768;
	sub_82CC1290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82caa794
	if (ctx.cr0.eq) goto loc_82CAA794;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lhz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r7,106(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,102(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r4,98(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// bl 0x82cb5e10
	ctx.lr = 0x82CAA790;
	sub_82CB5E10(ctx, base);
	// b 0x82caa798
	goto loc_82CAA798;
loc_82CAA794:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CAA798:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAA7A8"))) PPC_WEAK_FUNC(sub_82CAA7A8);
PPC_FUNC_IMPL(__imp__sub_82CAA7A8) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82caa7f4
	if (!ctx.cr6.eq) goto loc_82CAA7F4;
loc_82CAA7C8:
	// bl 0x82cab770
	ctx.lr = 0x82CAA7CC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAA7EC;
	sub_82CAB630(ctx, base);
loc_82CAA7EC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caa8d0
	goto loc_82CAA8D0;
loc_82CAA7F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82caa7c8
	if (ctx.cr6.eq) goto loc_82CAA7C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0c10
	ctx.lr = 0x82CAA804;
	sub_82CC0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82caa85c
	if (!ctx.cr6.eq) goto loc_82CAA85C;
	// bl 0x82cc0758
	ctx.lr = 0x82CAA814;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82caa834
	if (ctx.cr6.lt) goto loc_82CAA834;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82caa850
	if (!ctx.cr6.gt) goto loc_82CAA850;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x82caa844
	if (ctx.cr6.eq) goto loc_82CAA844;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x82caa850
	if (ctx.cr6.eq) goto loc_82CAA850;
loc_82CAA834:
	// bl 0x82cab770
	ctx.lr = 0x82CAA838;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82CAA83C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82caa7ec
	goto loc_82CAA7EC;
loc_82CAA844:
	// bl 0x82cab770
	ctx.lr = 0x82CAA848;
	sub_82CAB770(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82caa83c
	goto loc_82CAA83C;
loc_82CAA850:
	// bl 0x82cab770
	ctx.lr = 0x82CAA854;
	sub_82CAB770(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82caa83c
	goto loc_82CAA83C;
loc_82CAA85C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82caa86c
	if (!ctx.cr6.eq) goto loc_82CAA86C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAA86C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82caa728
	ctx.lr = 0x82CAA878;
	sub_82CAA728(ctx, base);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82caa728
	ctx.lr = 0x82CAA884;
	sub_82CAA728(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82caa728
	ctx.lr = 0x82CAA890;
	sub_82CAA728(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82170cc8
	ctx.lr = 0x82CAA8AC;
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82caa8cc
	if (ctx.cr0.eq) goto loc_82CAA8CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab678
	ctx.lr = 0x82CAA8CC;
	sub_82CAB678(ctx, base);
loc_82CAA8CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CAA8D0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

__attribute__((alias("__imp__sub_82CAA8E8"))) PPC_WEAK_FUNC(sub_82CAA8E8);
PPC_FUNC_IMPL(__imp__sub_82CAA8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82caa930
	if (!ctx.cr6.eq) goto loc_82CAA930;
loc_82CAA904:
	// bl 0x82cab770
	ctx.lr = 0x82CAA908;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAA928;
	sub_82CAB630(ctx, base);
loc_82CAA928:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caaa08
	goto loc_82CAAA08;
loc_82CAA930:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82caa904
	if (ctx.cr6.eq) goto loc_82CAA904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0bb8
	ctx.lr = 0x82CAA940;
	sub_82CC0BB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82caa994
	if (!ctx.cr0.eq) goto loc_82CAA994;
	// bl 0x82cc0758
	ctx.lr = 0x82CAA94C;
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82caa96c
	if (ctx.cr6.lt) goto loc_82CAA96C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82caa988
	if (!ctx.cr6.gt) goto loc_82CAA988;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x82caa97c
	if (ctx.cr6.eq) goto loc_82CAA97C;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x82caa988
	if (ctx.cr6.eq) goto loc_82CAA988;
loc_82CAA96C:
	// bl 0x82cab770
	ctx.lr = 0x82CAA970;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82CAA974:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82caa928
	goto loc_82CAA928;
loc_82CAA97C:
	// bl 0x82cab770
	ctx.lr = 0x82CAA980;
	sub_82CAB770(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82caa974
	goto loc_82CAA974;
loc_82CAA988:
	// bl 0x82cab770
	ctx.lr = 0x82CAA98C;
	sub_82CAB770(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82caa974
	goto loc_82CAA974;
loc_82CAA994:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82caa9a4
	if (!ctx.cr6.eq) goto loc_82CAA9A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAA9A4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82caa728
	ctx.lr = 0x82CAA9B0;
	sub_82CAA728(ctx, base);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82caa728
	ctx.lr = 0x82CAA9BC;
	sub_82CAA728(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82caa728
	ctx.lr = 0x82CAA9C8;
	sub_82CAA728(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82170cc8
	ctx.lr = 0x82CAA9E4;
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82caaa04
	if (ctx.cr0.eq) goto loc_82CAAA04;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab678
	ctx.lr = 0x82CAAA04;
	sub_82CAB678(ctx, base);
loc_82CAAA04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAA08:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAA1C"))) PPC_WEAK_FUNC(sub_82CAAA1C);
PPC_FUNC_IMPL(__imp__sub_82CAAA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAA20"))) PPC_WEAK_FUNC(sub_82CAAA20);
PPC_FUNC_IMPL(__imp__sub_82CAAA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cbbf60
	ctx.lr = 0x82CAAA30;
	sub_82CBBF60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82caaa50
	if (!ctx.cr0.eq) goto loc_82CAAA50;
	// bl 0x82cab770
	ctx.lr = 0x82CAAA3C;
	sub_82CAB770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82caaa54
	goto loc_82CAAA54;
loc_82CAAA50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAA54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAA64"))) PPC_WEAK_FUNC(sub_82CAAA64);
PPC_FUNC_IMPL(__imp__sub_82CAAA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAA68"))) PPC_WEAK_FUNC(sub_82CAAA68);
PPC_FUNC_IMPL(__imp__sub_82CAAA68) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82caaab8
	if (ctx.cr0.eq) goto loc_82CAAAB8;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
loc_82CAAA7C:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82caaaa8
	if (ctx.cr6.eq) goto loc_82CAAAA8;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82CAAA90:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82caaab8
	if (ctx.cr6.eq) goto loc_82CAAAB8;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82caaa90
	if (!ctx.cr0.eq) goto loc_82CAAA90;
loc_82CAAAA8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82caaa7c
	if (!ctx.cr0.eq) goto loc_82CAAA7C;
loc_82CAAAB8:
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAAC4"))) PPC_WEAK_FUNC(sub_82CAAAC4);
PPC_FUNC_IMPL(__imp__sub_82CAAAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAAC8"))) PPC_WEAK_FUNC(sub_82CAAAC8);
PPC_FUNC_IMPL(__imp__sub_82CAAAC8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82CAAAD4:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82caaaf4
	if (ctx.cr0.eq) goto loc_82CAAAF4;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82caaad4
	if (!ctx.cr0.eq) goto loc_82CAAAD4;
loc_82CAAAF4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CAAB14:
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82caab14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CAAB14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAB24"))) PPC_WEAK_FUNC(sub_82CAAB24);
PPC_FUNC_IMPL(__imp__sub_82CAAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAB28"))) PPC_WEAK_FUNC(sub_82CAAB28);
PPC_FUNC_IMPL(__imp__sub_82CAAB28) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82caab3c
	goto loc_82CAAB3C;
loc_82CAAB34:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
loc_82CAAB3C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82caab34
	if (!ctx.cr0.eq) goto loc_82CAAB34;
loc_82CAAB44:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82caab44
	if (!ctx.cr0.eq) goto loc_82CAAB44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAB60"))) PPC_WEAK_FUNC(sub_82CAAB60);
PPC_FUNC_IMPL(__imp__sub_82CAAB60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CAAB64:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82caab64
	if (!ctx.cr0.eq) goto loc_82CAAB64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAB80"))) PPC_WEAK_FUNC(sub_82CAAB80);
PPC_FUNC_IMPL(__imp__sub_82CAAB80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82caab90
	if (!ctx.cr6.eq) goto loc_82CAAB90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CAAB90:
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82caabc0
	if (ctx.cr0.eq) goto loc_82CAABC0;
loc_82CAAB98:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82caabc0
	if (ctx.cr0.eq) goto loc_82CAABC0;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82caabc0
	if (!ctx.cr6.eq) goto loc_82CAABC0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bne 0x82caab98
	if (!ctx.cr0.eq) goto loc_82CAAB98;
loc_82CAABC0:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAABD0"))) PPC_WEAK_FUNC(sub_82CAABD0);
PPC_FUNC_IMPL(__imp__sub_82CAABD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82caac24
	if (!ctx.cr6.eq) goto loc_82CAAC24;
loc_82CAABF8:
	// bl 0x82cab770
	ctx.lr = 0x82CAABFC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAAC1C;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caaca8
	goto loc_82CAACA8;
loc_82CAAC24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82caac34
	if (ctx.cr6.eq) goto loc_82CAAC34;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82caabf8
	if (ctx.cr6.eq) goto loc_82CAABF8;
loc_82CAAC34:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82caac4c
	if (ctx.cr6.gt) goto loc_82CAAC4C;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_82CAAC4C:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223f990
	ctx.lr = 0x82CAAC6C;
	sub_8223F990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82caaca4
	if (ctx.cr6.eq) goto loc_82CAACA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82caac98
	if (ctx.cr0.lt) goto loc_82CAAC98;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82caaca4
	goto loc_82CAACA4;
loc_82CAAC98:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	ctx.lr = 0x82CAACA4;
	sub_82CAB7E0(ctx, base);
loc_82CAACA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CAACA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82CAACC0"))) PPC_WEAK_FUNC(sub_82CAACC0);
PPC_FUNC_IMPL(__imp__sub_82CAACC0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82caabd0
	sub_82CAABD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAACCC"))) PPC_WEAK_FUNC(sub_82CAACCC);
PPC_FUNC_IMPL(__imp__sub_82CAACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAACD0"))) PPC_WEAK_FUNC(sub_82CAACD0);
PPC_FUNC_IMPL(__imp__sub_82CAACD0) {
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
	// bne cr6,0x82caad18
	if (!ctx.cr6.eq) goto loc_82CAAD18;
	// bl 0x82cab770
	ctx.lr = 0x82CAACF0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAAD10;
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caad28
	goto loc_82CAAD28;
loc_82CAAD18:
	// bl 0x82239798
	ctx.lr = 0x82CAAD1C;
	sub_82239798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822397e0
	ctx.lr = 0x82CAAD28;
	sub_822397E0(ctx, base);
loc_82CAAD28:
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

__attribute__((alias("__imp__sub_82CAAD3C"))) PPC_WEAK_FUNC(sub_82CAAD3C);
PPC_FUNC_IMPL(__imp__sub_82CAAD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAD40"))) PPC_WEAK_FUNC(sub_82CAAD40);
PPC_FUNC_IMPL(__imp__sub_82CAAD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CAAD48;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,-4096
	ctx.r30.s64 = -4096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82caad98
	if (ctx.cr6.eq) goto loc_82CAAD98;
	// divwu r11,r30,r3
	ctx.r11.u32 = ctx.r30.u32 / ctx.r3.u32;
	// twllei r3,0
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82caad98
	if (!ctx.cr6.lt) goto loc_82CAAD98;
	// bl 0x82cab770
	ctx.lr = 0x82CAAD70;
	sub_82CAB770(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAAD90;
	sub_82CAB630(ctx, base);
loc_82CAAD90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caae0c
	goto loc_82CAAE0C;
loc_82CAAD98:
	// mullw. r31,r3,r4
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82caada4
	if (!ctx.cr0.eq) goto loc_82CAADA4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CAADA4:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
loc_82CAADA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82caadcc
	if (ctx.cr6.gt) goto loc_82CAADCC;
	// bl 0x82239798
	ctx.lr = 0x82CAADB8;
	sub_82239798(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82238790
	ctx.lr = 0x82CAADC4;
	sub_82238790(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82caae0c
	if (!ctx.cr0.eq) goto loc_82CAAE0C;
loc_82CAADCC:
	// lwz r11,26932(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82caadfc
	if (ctx.cr6.eq) goto loc_82CAADFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cacc10
	ctx.lr = 0x82CAADE0;
	sub_82CACC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82caada8
	if (!ctx.cr0.eq) goto loc_82CAADA8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82caad90
	if (ctx.cr6.eq) goto loc_82CAAD90;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82caad90
	goto loc_82CAAD90;
loc_82CAADFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82caae0c
	if (ctx.cr6.eq) goto loc_82CAAE0C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CAAE0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CAAE14"))) PPC_WEAK_FUNC(sub_82CAAE14);
PPC_FUNC_IMPL(__imp__sub_82CAAE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAE18"))) PPC_WEAK_FUNC(sub_82CAAE18);
PPC_FUNC_IMPL(__imp__sub_82CAAE18) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82caad40
	ctx.lr = 0x82CAAE3C;
	sub_82CAAD40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82caae64
	if (!ctx.cr0.eq) goto loc_82CAAE64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82caae64
	if (ctx.cr6.eq) goto loc_82CAAE64;
	// bl 0x82cab770
	ctx.lr = 0x82CAAE54;
	sub_82CAB770(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82caae64
	if (ctx.cr0.eq) goto loc_82CAAE64;
	// bl 0x82cab770
	ctx.lr = 0x82CAAE60;
	sub_82CAB770(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82CAAE64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82CAAE80"))) PPC_WEAK_FUNC(sub_82CAAE80);
PPC_FUNC_IMPL(__imp__sub_82CAAE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82caaecc
	if (!ctx.cr6.eq) goto loc_82CAAECC;
loc_82CAAE9C:
	// bl 0x82cab770
	ctx.lr = 0x82CAAEA0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAAEC0;
	sub_82CAB630(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82caaef8
	goto loc_82CAAEF8;
loc_82CAAECC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82caae9c
	if (ctx.cr6.eq) goto loc_82CAAE9C;
loc_82CAAED4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82caaef8
	if (ctx.cr0.eq) goto loc_82CAAEF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82caaed4
	if (ctx.cr6.eq) goto loc_82CAAED4;
loc_82CAAEF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAF08"))) PPC_WEAK_FUNC(sub_82CAAF08);
PPC_FUNC_IMPL(__imp__sub_82CAAF08) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82caae80
	sub_82CAAE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAAF10"))) PPC_WEAK_FUNC(sub_82CAAF10);
PPC_FUNC_IMPL(__imp__sub_82CAAF10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca70c0
	sub_82CA70C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAAF14"))) PPC_WEAK_FUNC(sub_82CAAF14);
PPC_FUNC_IMPL(__imp__sub_82CAAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAF18"))) PPC_WEAK_FUNC(sub_82CAAF18);
PPC_FUNC_IMPL(__imp__sub_82CAAF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82caaf5c
	if (!ctx.cr6.eq) goto loc_82CAAF5C;
loc_82CAAF2C:
	// bl 0x82cab770
	ctx.lr = 0x82CAAF30;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAAF50;
	sub_82CAB630(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82caaf70
	goto loc_82CAAF70;
loc_82CAAF5C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82caaf2c
	if (ctx.cr6.eq) goto loc_82CAAF2C;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r5,r11,-3224
	ctx.r5.s64 = ctx.r11.s64 + -3224;
	// bl 0x82cb6108
	ctx.lr = 0x82CAAF70;
	sub_82CB6108(ctx, base);
loc_82CAAF70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAF80"))) PPC_WEAK_FUNC(sub_82CAAF80);
PPC_FUNC_IMPL(__imp__sub_82CAAF80) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82caaf18
	sub_82CAAF18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAAF88"))) PPC_WEAK_FUNC(sub_82CAAF88);
PPC_FUNC_IMPL(__imp__sub_82CAAF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82CAAF90;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82caafec
	if (ctx.cr6.eq) goto loc_82CAAFEC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82caafec
	if (ctx.cr6.eq) goto loc_82CAAFEC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82caaff8
	if (!ctx.cr6.eq) goto loc_82CAAFF8;
loc_82CAAFC8:
	// bl 0x82cab770
	ctx.lr = 0x82CAAFCC;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82CAAFD0:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAAFEC;
	sub_82CAB630(ctx, base);
loc_82CAAFEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAFF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82CAAFF8:
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cab014
	if (ctx.cr6.eq) goto loc_82CAB014;
	// divwu r11,r31,r24
	ctx.r11.u32 = ctx.r31.u32 / ctx.r24.u32;
	// twllei r24,0
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82cab044
	if (!ctx.cr6.gt) goto loc_82CAB044;
loc_82CAB014:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82cab02c
	if (ctx.cr6.eq) goto loc_82CAB02C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CAB02C;
	sub_82CA3190(ctx, base);
loc_82CAB02C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82caafc8
	if (ctx.cr6.eq) goto loc_82CAAFC8;
	// divwu r11,r31,r24
	ctx.r11.u32 = ctx.r31.u32 / ctx.r24.u32;
	// twllei r24,0
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82caafc8
	if (ctx.cr6.gt) goto loc_82CAAFC8;
loc_82CAB044:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mullw r23,r24,r22
	ctx.r23.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cab064
	if (ctx.cr0.eq) goto loc_82CAB064;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// b 0x82cab068
	goto loc_82CAB068;
loc_82CAB064:
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_82CAB068:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cab1b0
	if (ctx.cr6.eq) goto loc_82CAB1B0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_82CAB078:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cab0e8
	if (ctx.cr0.eq) goto loc_82CAB0E8;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82cab0e8
	if (ctx.cr6.eq) goto loc_82CAB0E8;
	// blt cr6,0x82cab1dc
	if (ctx.cr6.lt) goto loc_82CAB1DC;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82cab0a4
	if (!ctx.cr6.lt) goto loc_82CAB0A4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CAB0A4:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82cab1b8
	if (ctx.cr6.gt) goto loc_82CAB1B8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3730
	ctx.lr = 0x82CAB0C0;
	sub_82CA3730(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82cab1a8
	goto loc_82CAB1A8;
loc_82CAB0E8:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82cab17c
	if (ctx.cr6.lt) goto loc_82CAB17C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82cab130
	if (ctx.cr6.eq) goto loc_82CAB130;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// twllei r26,0
	// ble cr6,0x82cab11c
	if (!ctx.cr6.gt) goto loc_82CAB11C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// divwu r10,r11,r26
	ctx.r10.u32 = ctx.r11.u32 / ctx.r26.u32;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r30,r11,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r11.s64;
	// b 0x82cab140
	goto loc_82CAB140;
loc_82CAB11C:
	// divwu r11,r31,r26
	ctx.r11.u32 = ctx.r31.u32 / ctx.r26.u32;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r30,r11,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x82cab140
	goto loc_82CAB140;
loc_82CAB130:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bgt cr6,0x82cab140
	if (ctx.cr6.gt) goto loc_82CAB140;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CAB140:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82cab1b8
	if (ctx.cr6.gt) goto loc_82CAB1B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CAB150;
	sub_82CAF6C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb67a8
	ctx.lr = 0x82CAB15C;
	sub_82CB67A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cab1f8
	if (ctx.cr0.eq) goto loc_82CAB1F8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cab1dc
	if (ctx.cr6.eq) goto loc_82CAB1DC;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r27,r3,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r3.s64;
	// b 0x82cab1a8
	goto loc_82CAB1A8;
loc_82CAB17C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb5958
	ctx.lr = 0x82CAB184;
	sub_82CB5958(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82cab204
	if (ctx.cr6.eq) goto loc_82CAB204;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cab1b8
	if (ctx.cr6.eq) goto loc_82CAB1B8;
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82CAB1A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cab078
	if (!ctx.cr6.eq) goto loc_82CAB078;
loc_82CAB1B0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x82caaff0
	goto loc_82CAAFF0;
loc_82CAB1B8:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82cab1d0
	if (ctx.cr6.eq) goto loc_82CAB1D0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CAB1D0;
	sub_82CA3190(ctx, base);
loc_82CAB1D0:
	// bl 0x82cab770
	ctx.lr = 0x82CAB1D4;
	sub_82CAB770(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82caafd0
	goto loc_82CAAFD0;
loc_82CAB1DC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82CAB1E4:
	// subf r10,r31,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r31.s64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// twllei r24,0
	// divwu r3,r10,r24
	ctx.r3.u32 = ctx.r10.u32 / ctx.r24.u32;
	// b 0x82caaff0
	goto loc_82CAAFF0;
loc_82CAB1F8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x82cab1e4
	goto loc_82CAB1E4;
loc_82CAB204:
	// subf r11,r31,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r31.s64;
	// twllei r24,0
	// divwu r3,r11,r24
	ctx.r3.u32 = ctx.r11.u32 / ctx.r24.u32;
	// b 0x82caaff0
	goto loc_82CAAFF0;
}

__attribute__((alias("__imp__sub_82CAB214"))) PPC_WEAK_FUNC(sub_82CAB214);
PPC_FUNC_IMPL(__imp__sub_82CAB214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB218"))) PPC_WEAK_FUNC(sub_82CAB218);
PPC_FUNC_IMPL(__imp__sub_82CAB218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-24080(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24080);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CAB228;
	sub_82CA2BE0(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cab2a0
	if (ctx.cr6.eq) goto loc_82CAB2A0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cab2a0
	if (ctx.cr6.eq) goto loc_82CAB2A0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cab2ac
	if (!ctx.cr6.eq) goto loc_82CAB2AC;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82cab27c
	if (ctx.cr6.eq) goto loc_82CAB27C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CAB27C;
	sub_82CA3190(ctx, base);
loc_82CAB27C:
	// bl 0x82cab770
	ctx.lr = 0x82CAB280;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAB2A0;
	sub_82CAB630(ctx, base);
loc_82CAB2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAB2A4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82CAB2AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CAB2B4;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82caaf88
	ctx.lr = 0x82CAB2D0;
	sub_82CAAF88(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82cab308
	ctx.lr = 0x82CAB2E0;
	sub_82CAB308(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82cab2a4
	goto loc_82CAB2A4;
}

__attribute__((alias("__imp__sub_82CAB220"))) PPC_WEAK_FUNC(sub_82CAB220);
PPC_FUNC_IMPL(__imp__sub_82CAB220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CAB228;
	sub_82CA2BE0(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cab2a0
	if (ctx.cr6.eq) goto loc_82CAB2A0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cab2a0
	if (ctx.cr6.eq) goto loc_82CAB2A0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cab2ac
	if (!ctx.cr6.eq) goto loc_82CAB2AC;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82cab27c
	if (ctx.cr6.eq) goto loc_82CAB27C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82CAB27C;
	sub_82CA3190(ctx, base);
loc_82CAB27C:
	// bl 0x82cab770
	ctx.lr = 0x82CAB280;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAB2A0;
	sub_82CAB630(ctx, base);
loc_82CAB2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAB2A4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82CAB2AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8870
	ctx.lr = 0x82CAB2B4;
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82caaf88
	ctx.lr = 0x82CAB2D0;
	sub_82CAAF88(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82cab308
	ctx.lr = 0x82CAB2E0;
	sub_82CAB308(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82cab2a4
	goto loc_82CAB2A4;
}

__attribute__((alias("__imp__sub_82CAB2E8"))) PPC_WEAK_FUNC(sub_82CAB2E8);
PPC_FUNC_IMPL(__imp__sub_82CAB2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// b 0x82cab320
	goto loc_82CAB320;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CAB320:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CAB328;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB308"))) PPC_WEAK_FUNC(sub_82CAB308);
PPC_FUNC_IMPL(__imp__sub_82CAB308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca8930
	ctx.lr = 0x82CAB328;
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB340"))) PPC_WEAK_FUNC(sub_82CAB340);
PPC_FUNC_IMPL(__imp__sub_82CAB340) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cab220
	sub_82CAB220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB354"))) PPC_WEAK_FUNC(sub_82CAB354);
PPC_FUNC_IMPL(__imp__sub_82CAB354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB358"))) PPC_WEAK_FUNC(sub_82CAB358);
PPC_FUNC_IMPL(__imp__sub_82CAB358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cab3a0
	if (!ctx.cr6.eq) goto loc_82CAB3A0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82cab3a0
	if (ctx.cr6.eq) goto loc_82CAB3A0;
loc_82CAB374:
	// bl 0x82cab770
	ctx.lr = 0x82CAB378;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAB398;
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cab3b4
	goto loc_82CAB3B4;
loc_82CAB3A0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82cab3b0
	if (!ctx.cr6.eq) goto loc_82CAB3B0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82cab374
	if (!ctx.cr6.eq) goto loc_82CAB374;
loc_82CAB3B0:
	// bl 0x822cd828
	ctx.lr = 0x82CAB3B4;
	sub_822CD828(ctx, base);
loc_82CAB3B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB3C4"))) PPC_WEAK_FUNC(sub_82CAB3C4);
PPC_FUNC_IMPL(__imp__sub_82CAB3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB3C8"))) PPC_WEAK_FUNC(sub_82CAB3C8);
PPC_FUNC_IMPL(__imp__sub_82CAB3C8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82cab358
	sub_82CAB358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB3D0"))) PPC_WEAK_FUNC(sub_82CAB3D0);
PPC_FUNC_IMPL(__imp__sub_82CAB3D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82cab430
	if (ctx.cr6.eq) goto loc_82CAB430;
loc_82CAB3D8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x82cab3f4
	if (ctx.cr6.lt) goto loc_82CAB3F4;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x82cab3f4
	if (ctx.cr6.gt) goto loc_82CAB3F4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_82CAB3F4:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82cab410
	if (ctx.cr6.lt) goto loc_82CAB410;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x82cab410
	if (ctx.cr6.gt) goto loc_82CAB410;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_82CAB410:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82cab428
	if (ctx.cr0.eq) goto loc_82CAB428;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cab428
	if (ctx.cr6.eq) goto loc_82CAB428;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cab3d8
	if (ctx.cr6.eq) goto loc_82CAB3D8;
loc_82CAB428:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82CAB430:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB438"))) PPC_WEAK_FUNC(sub_82CAB438);
PPC_FUNC_IMPL(__imp__sub_82CAB438) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cab480
	if (!ctx.cr6.eq) goto loc_82CAB480;
loc_82CAB450:
	// bl 0x82cab770
	ctx.lr = 0x82CAB454;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAB474;
	sub_82CAB630(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82cab4c8
	goto loc_82CAB4C8;
loc_82CAB480:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cab450
	if (ctx.cr6.eq) goto loc_82CAB450;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82cab4c4
	if (!ctx.cr6.gt) goto loc_82CAB4C4;
	// bl 0x82cab770
	ctx.lr = 0x82CAB49C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAB4BC;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cab4c8
	goto loc_82CAB4C8;
loc_82CAB4C4:
	// bl 0x82cab3d0
	ctx.lr = 0x82CAB4C8;
	sub_82CAB3D0(ctx, base);
loc_82CAB4C8:
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

__attribute__((alias("__imp__sub_82CAB4DC"))) PPC_WEAK_FUNC(sub_82CAB4DC);
PPC_FUNC_IMPL(__imp__sub_82CAB4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB4E0"))) PPC_WEAK_FUNC(sub_82CAB4E0);
PPC_FUNC_IMPL(__imp__sub_82CAB4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82CAB4E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CAB4F4;
	sub_82CAF6C8(ctx, base);
	// bl 0x831fd318
	ctx.lr = 0x82CAB4F8;
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cab5ac
	if (ctx.cr0.eq) goto loc_82CAB5AC;
	// bl 0x82240578
	ctx.lr = 0x82CAB504;
	sub_82240578(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cab518
	if (!ctx.cr6.eq) goto loc_82CAB518;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82cab52c
	goto loc_82CAB52C;
loc_82CAB518:
	// bl 0x82240578
	ctx.lr = 0x82CAB51C;
	sub_82240578(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cab5ac
	if (!ctx.cr6.eq) goto loc_82CAB5AC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CAB52C:
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,26836(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26836, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82cab5ac
	if (!ctx.cr0.eq) goto loc_82CAB5AC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,26856
	ctx.r30.s64 = ctx.r11.s64 + 26856;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cab584
	if (!ctx.cr6.eq) goto loc_82CAB584;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82ca3c68
	ctx.lr = 0x82CAB56C;
	sub_82CA3C68(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// bne 0x82cab584
	if (!ctx.cr0.eq) goto loc_82CAB584;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// b 0x82cab588
	goto loc_82CAB588;
loc_82CAB584:
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_82CAB588:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// ori r11,r11,4354
	ctx.r11.u64 = ctx.r11.u64 | 4354;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82cab5b0
	goto loc_82CAB5B0;
loc_82CAB5AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAB5B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82CAB5B8"))) PPC_WEAK_FUNC(sub_82CAB5B8);
PPC_FUNC_IMPL(__imp__sub_82CAB5B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cab608
	if (ctx.cr6.eq) goto loc_82CAB608;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cab608
	if (ctx.cr0.eq) goto loc_82CAB608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca4e68
	ctx.lr = 0x82CAB5E8;
	sub_82CA4E68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82CAB608:
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

__attribute__((alias("__imp__sub_82CAB61C"))) PPC_WEAK_FUNC(sub_82CAB61C);
PPC_FUNC_IMPL(__imp__sub_82CAB61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB620"))) PPC_WEAK_FUNC(sub_82CAB620);
PPC_FUNC_IMPL(__imp__sub_82CAB620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// stw r3,29888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29888, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB62C"))) PPC_WEAK_FUNC(sub_82CAB62C);
PPC_FUNC_IMPL(__imp__sub_82CAB62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB630"))) PPC_WEAK_FUNC(sub_82CAB630);
PPC_FUNC_IMPL(__imp__sub_82CAB630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lwz r11,29888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82cab658
	if (ctx.cr0.eq) goto loc_82CAB658;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAB654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82cab664
	goto loc_82CAB664;
loc_82CAB658:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cb6a90
	ctx.lr = 0x82CAB660;
	sub_82CB6A90(ctx, base);
	// twi 31,r0,22
loc_82CAB664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB674"))) PPC_WEAK_FUNC(sub_82CAB674);
PPC_FUNC_IMPL(__imp__sub_82CAB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB678"))) PPC_WEAK_FUNC(sub_82CAB678);
PPC_FUNC_IMPL(__imp__sub_82CAB678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ca3190
	ctx.lr = 0x82CAB694;
	sub_82CA3190(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82CAB6A4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82cab6a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CAB6A4;
	// lwz r10,2808(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2808);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82cbbe08
	ctx.lr = 0x82CAB6DC;
	sub_82CBBE08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbbed0
	ctx.lr = 0x82CAB6E4;
	sub_82CBBED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cab6f4
	if (!ctx.cr0.eq) goto loc_82CAB6F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cb6a90
	ctx.lr = 0x82CAB6F4;
	sub_82CB6A90(ctx, base);
loc_82CAB6F4:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x832b25cc
	ctx.lr = 0x82CAB6FC;
	__imp__KeBugCheck(ctx, base);
}

__attribute__((alias("__imp__sub_82CAB6FC"))) PPC_WEAK_FUNC(sub_82CAB6FC);
PPC_FUNC_IMPL(__imp__sub_82CAB6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB700"))) PPC_WEAK_FUNC(sub_82CAB700);
PPC_FUNC_IMPL(__imp__sub_82CAB700) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4208
	ctx.r9.s64 = ctx.r10.s64 + -4208;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82CAB710:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82cab744
	if (ctx.cr6.eq) goto loc_82CAB744;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// blt cr6,0x82cab710
	if (ctx.cr6.lt) goto loc_82CAB710;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// blt cr6,0x82cab754
	if (ctx.cr6.lt) goto loc_82CAB754;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// bgt cr6,0x82cab754
	if (ctx.cr6.gt) goto loc_82CAB754;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_82CAB744:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82CAB754:
	// cmplwi cr6,r3,188
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 188, ctx.xer);
	// blt cr6,0x82cab768
	if (ctx.cr6.lt) goto loc_82CAB768;
	// cmplwi cr6,r3,202
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 202, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82CAB768:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB770"))) PPC_WEAK_FUNC(sub_82CAB770);
PPC_FUNC_IMPL(__imp__sub_82CAB770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac520
	ctx.lr = 0x82CAB780;
	sub_82CAC520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cab794
	if (!ctx.cr0.eq) goto loc_82CAB794;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-3848
	ctx.r3.s64 = ctx.r11.s64 + -3848;
	// b 0x82cab798
	goto loc_82CAB798;
loc_82CAB794:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_82CAB798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB7A8"))) PPC_WEAK_FUNC(sub_82CAB7A8);
PPC_FUNC_IMPL(__imp__sub_82CAB7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac520
	ctx.lr = 0x82CAB7B8;
	sub_82CAC520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82cab7cc
	if (!ctx.cr0.eq) goto loc_82CAB7CC;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-3844
	ctx.r3.s64 = ctx.r11.s64 + -3844;
	// b 0x82cab7d0
	goto loc_82CAB7D0;
loc_82CAB7CC:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_82CAB7D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB7E0"))) PPC_WEAK_FUNC(sub_82CAB7E0);
PPC_FUNC_IMPL(__imp__sub_82CAB7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82CAB7E8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caf6c8
	ctx.lr = 0x82CAB7FC;
	sub_82CAF6C8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cab834
	if (!ctx.cr0.eq) goto loc_82CAB834;
	// bl 0x82cab770
	ctx.lr = 0x82CAB814;
	sub_82CAB770(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_82CAB818:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82CAB820:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82CAB824:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82cab9a8
	goto loc_82CAB9A8;
loc_82CAB834:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82cab848
	if (ctx.cr0.eq) goto loc_82CAB848;
	// bl 0x82cab770
	ctx.lr = 0x82CAB840;
	sub_82CAB770(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x82cab818
	goto loc_82CAB818;
loc_82CAB848:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82cab870
	if (ctx.cr0.eq) goto loc_82CAB870;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x82cab824
	if (ctx.cr0.eq) goto loc_82CAB824;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82CAB870:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82cab8cc
	if (!ctx.cr0.eq) goto loc_82CAB8CC;
	// bl 0x82240578
	ctx.lr = 0x82CAB898;
	sub_82240578(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cab8b4
	if (ctx.cr6.eq) goto loc_82CAB8B4;
	// bl 0x82240578
	ctx.lr = 0x82CAB8A8;
	sub_82240578(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cab8c4
	if (!ctx.cr6.eq) goto loc_82CAB8C4;
loc_82CAB8B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fd318
	ctx.lr = 0x82CAB8BC;
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cab8cc
	if (!ctx.cr0.eq) goto loc_82CAB8CC;
loc_82CAB8C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb6d00
	ctx.lr = 0x82CAB8CC;
	sub_82CB6D00(ctx, base);
loc_82CAB8CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cab980
	if (ctx.cr0.eq) goto loc_82CAB980;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf. r30,r4,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ble 0x82cab914
	if (!ctx.cr0.gt) goto loc_82CAB914;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82caf9e0
	ctx.lr = 0x82CAB90C;
	sub_82CAF9E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82cab970
	goto loc_82CAB970;
loc_82CAB914:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82cab944
	if (ctx.cr6.eq) goto loc_82CAB944;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// beq cr6,0x82cab944
	if (ctx.cr6.eq) goto loc_82CAB944;
	// srawi r11,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r29,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cab94c
	goto loc_82CAB94C;
loc_82CAB944:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r11,r11,-2648
	ctx.r11.s64 = ctx.r11.s64 + -2648;
loc_82CAB94C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cab970
	if (ctx.cr0.eq) goto loc_82CAB970;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb6b70
	ctx.lr = 0x82CAB968;
	sub_82CB6B70(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82cab820
	if (ctx.cr6.eq) goto loc_82CAB820;
loc_82CAB970:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x82cab998
	goto loc_82CAB998;
loc_82CAB980:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82caf9e0
	ctx.lr = 0x82CAB994;
	sub_82CAF9E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82CAB998:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82cab820
	if (!ctx.cr6.eq) goto loc_82CAB820;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82CAB9A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82CAB9B0"))) PPC_WEAK_FUNC(sub_82CAB9B0);
PPC_FUNC_IMPL(__imp__sub_82CAB9B0) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821ee9e8
	ctx.lr = 0x82CAB9D0;
	sub_821EE9E8(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x82cab9ec
	if (ctx.cr6.eq) goto loc_82CAB9EC;
loc_82CAB9D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82ca6b10
	ctx.lr = 0x82CAB9E4;
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82cab9d8
	if (!ctx.cr0.eq) goto loc_82CAB9D8;
loc_82CAB9EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821ee9e8
	ctx.lr = 0x82CAB9F8;
	sub_821EE9E8(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x82caba04
	if (!ctx.cr6.eq) goto loc_82CABA04;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82CABA04:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r11,-4912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4912);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_82CABA20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82caba20
	if (!ctx.cr6.eq) goto loc_82CABA20;
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

__attribute__((alias("__imp__sub_82CABA50"))) PPC_WEAK_FUNC(sub_82CABA50);
PPC_FUNC_IMPL(__imp__sub_82CABA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,3376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CABA70"))) PPC_WEAK_FUNC(sub_82CABA70);
PPC_FUNC_IMPL(__imp__sub_82CABA70) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cabaa8
	if (ctx.cr6.eq) goto loc_82CABAA8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cb6d88
	ctx.lr = 0x82CABA9C;
	sub_82CB6D88(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x82cabab8
	goto loc_82CABAB8;
loc_82CABAA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb6e30
	ctx.lr = 0x82CABAB0;
	sub_82CB6E30(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CABAB8:
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

__attribute__((alias("__imp__sub_82CABACC"))) PPC_WEAK_FUNC(sub_82CABACC);
PPC_FUNC_IMPL(__imp__sub_82CABACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CABAD0"))) PPC_WEAK_FUNC(sub_82CABAD0);
PPC_FUNC_IMPL(__imp__sub_82CABAD0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82caba70
	sub_82CABA70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CABAD8"))) PPC_WEAK_FUNC(sub_82CABAD8);
PPC_FUNC_IMPL(__imp__sub_82CABAD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cab9b0
	sub_82CAB9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CABAE0"))) PPC_WEAK_FUNC(sub_82CABAE0);
PPC_FUNC_IMPL(__imp__sub_82CABAE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8218d7d8
	sub_8218D7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CABAE8"))) PPC_WEAK_FUNC(sub_82CABAE8);
PPC_FUNC_IMPL(__imp__sub_82CABAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82CABAF0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cabb3c
	if (!ctx.cr6.eq) goto loc_82CABB3C;
	// bl 0x82cab770
	ctx.lr = 0x82CABB14;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CABB34;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cabd54
	goto loc_82CABD54;
loc_82CABB3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cabb70
	if (!ctx.cr6.eq) goto loc_82CABB70;
	// bl 0x82cab770
	ctx.lr = 0x82CABB48;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CABB4C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CABB68;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cabd54
	goto loc_82CABD54;
loc_82CABB70:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bgt cr6,0x82cabb80
	if (ctx.cr6.gt) goto loc_82CABB80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CABB80:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cabb98
	if (ctx.cr6.gt) goto loc_82CABB98;
	// bl 0x82cab770
	ctx.lr = 0x82CABB90;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82cabb4c
	goto loc_82CABB4C;
loc_82CABB98:
	// extsb. r28,r8
	ctx.r28.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82cabbe8
	if (ctx.cr0.eq) goto loc_82CABBE8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x82cabbe8
	if (!ctx.cr6.gt) goto loc_82CABBE8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CABBC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cabbc0
	if (!ctx.cr6.eq) goto loc_82CABBC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82caa2e0
	ctx.lr = 0x82CABBE8;
	sub_82CAA2E0(ctx, base);
loc_82CABBE8:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r26,45
	ctx.r26.s64 = 45;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// bne cr6,0x82cabc04
	if (!ctx.cr6.eq) goto loc_82CABC04;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_82CABC04:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82cabc30
	if (!ctx.cr6.gt) goto loc_82CABC30;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,-4912(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4912);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82CABC30:
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82cabc50
	if (!ctx.cr6.eq) goto loc_82CABC50;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cabc58
	goto loc_82CABC58;
loc_82CABC50:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82CABC58:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,4304
	ctx.r5.s64 = ctx.r11.s64 + 4304;
	// bl 0x82170cc8
	ctx.lr = 0x82CABC68;
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cabc88
	if (ctx.cr0.eq) goto loc_82CABC88;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab678
	ctx.lr = 0x82CABC88;
	sub_82CAB678(ctx, base);
loc_82CABC88:
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82cabc9c
	if (ctx.cr6.eq) goto loc_82CABC9C;
	// li r11,69
	ctx.r11.s64 = 69;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82CABC9C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82cabd28
	if (ctx.cr6.eq) goto loc_82CABD28;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82cabcc4
	if (!ctx.cr0.lt) goto loc_82CABCC4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
loc_82CABCC4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x82cabcf0
	if (ctx.cr6.lt) goto loc_82CABCF0;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = ctx.r7.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_82CABCF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82cabd1c
	if (ctx.cr6.lt) goto loc_82CABD1C;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_82CABD1C:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
loc_82CABD28:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,27360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27360);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cabd50
	if (ctx.cr0.eq) goto loc_82CABD50;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82cabd50
	if (!ctx.cr6.eq) goto loc_82CABD50;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82caa2e0
	ctx.lr = 0x82CABD50;
	sub_82CAA2E0(ctx, base);
loc_82CABD50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CABD54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82CABD5C"))) PPC_WEAK_FUNC(sub_82CABD5C);
PPC_FUNC_IMPL(__imp__sub_82CABD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CABD60"))) PPC_WEAK_FUNC(sub_82CABD60);
PPC_FUNC_IMPL(__imp__sub_82CABD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CABD68;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,48
	ctx.r28.s64 = 48;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1023
	ctx.r30.s64 = 1023;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82cabd90
	if (!ctx.cr6.lt) goto loc_82CABD90;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82CABD90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cabdc4
	if (!ctx.cr6.eq) goto loc_82CABDC4;
	// bl 0x82cab770
	ctx.lr = 0x82CABD9C;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CABDBC;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cac19c
	goto loc_82CAC19C;
loc_82CABDC4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82cabdf8
	if (!ctx.cr6.eq) goto loc_82CABDF8;
	// bl 0x82cab770
	ctx.lr = 0x82CABDD0;
	sub_82CAB770(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82CABDD4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CABDF0;
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cac19c
	goto loc_82CAC19C;
loc_82CABDF8:
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cabe14
	if (ctx.cr6.gt) goto loc_82CABE14;
	// bl 0x82cab770
	ctx.lr = 0x82CABE0C;
	sub_82CAB770(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82cabdd4
	goto loc_82CABDD4;
loc_82CABE14:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,20,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,4094
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 4094, ctx.xer);
	// bne cr6,0x82cabebc
	if (!ctx.cr6.eq) goto loc_82CABEBC;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82cabe34
	if (!ctx.cr6.eq) goto loc_82CABE34;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82cabe38
	goto loc_82CABE38;
loc_82CABE34:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_82CABE38:
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82171198
	ctx.lr = 0x82CABE4C;
	sub_82171198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82cabe5c
	if (ctx.cr0.eq) goto loc_82CABE5C;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// b 0x82cac19c
	goto loc_82CAC19C;
loc_82CABE5C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82cabe70
	if (!ctx.cr6.eq) goto loc_82CABE70;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CABE70:
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// li r4,101
	ctx.r4.s64 = 101;
	// addi r11,r10,120
	ctx.r11.s64 = ctx.r10.s64 + 120;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x82ca70c0
	ctx.lr = 0x82CABE98;
	sub_82CA70C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82cac198
	if (ctx.cr0.eq) goto loc_82CAC198;
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r26.u8);
	// b 0x82cac198
	goto loc_82CAC198;
loc_82CABEBC:
	// clrldi r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 & 0x1;
	// li r27,45
	ctx.r27.s64 = 45;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82cabed4
	if (ctx.cr6.eq) goto loc_82CABED4;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82CABED4:
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r29.s64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r10,120
	ctx.r8.s64 = ctx.r10.s64 + 120;
	// rlwinm r10,r9,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r10,97
	ctx.r10.s64 = ctx.r10.s64 + 97;
	// rlwinm r9,r9,0,20,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFE;
	// addi r5,r10,-58
	ctx.r5.s64 = ctx.r10.s64 + -58;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82cabf40
	if (!ctx.cr6.eq) goto loc_82CABF40;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r10,r10,0,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82cabf38
	if (!ctx.cr6.eq) goto loc_82CABF38;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82cabf4c
	goto loc_82CABF4C;
loc_82CABF38:
	// li r30,1022
	ctx.r30.s64 = 1022;
	// b 0x82cabf4c
	goto loc_82CABF4C;
loc_82CABF40:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CABF4C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82cabf64
	if (!ctx.cr6.eq) goto loc_82CABF64;
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r26.u8);
	// b 0x82cabf78
	goto loc_82CABF78;
loc_82CABF64:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lwz r11,-4912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_82CABF78:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82cac070
	if (!ctx.cr6.gt) goto loc_82CAC070;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_82CABF90:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82cabfe8
	if (!ctx.cr6.gt) goto loc_82CABFE8;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x82cabfcc
	if (!ctx.cr6.gt) goto loc_82CABFCC;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82CABFCC:
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh. r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bge 0x82cabf90
	if (!ctx.cr0.lt) goto loc_82CABF90;
loc_82CABFE8:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82cac070
	if (ctx.cr0.lt) goto loc_82CAC070;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82cac070
	if (!ctx.cr6.gt) goto loc_82CAC070;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_82CAC014:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x82cac02c
	if (ctx.cr6.eq) goto loc_82CAC02C;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x82cac038
	if (!ctx.cr6.eq) goto loc_82CAC038;
loc_82CAC02C:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82cac014
	goto loc_82CAC014;
loc_82CAC038:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82cac064
	if (ctx.cr6.eq) goto loc_82CAC064;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x82cac058
	if (!ctx.cr6.eq) goto loc_82CAC058;
	// addi r10,r5,58
	ctx.r10.s64 = ctx.r5.s64 + 58;
	// b 0x82cac05c
	goto loc_82CAC05C;
loc_82CAC058:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CAC05C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82cac070
	goto loc_82CAC070;
loc_82CAC064:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_82CAC070:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82cac09c
	if (!ctx.cr6.gt) goto loc_82CAC09C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82cac098
	if (ctx.cr0.eq) goto loc_82CAC098;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CAC08C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82cac08c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CAC08C;
loc_82CAC098:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82CAC09C:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cac0ac
	if (!ctx.cr6.eq) goto loc_82CAC0AC;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82CAC0AC:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,63,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x82cac0e4
	if (ctx.cr6.lt) goto loc_82CAC0E4;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82cac0ec
	goto loc_82CAC0EC;
loc_82CAC0E4:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82CAC0EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1000, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// blt cr6,0x82cac12c
	if (ctx.cr6.lt) goto loc_82CAC12C;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = ctx.r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = ctx.r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = ctx.r6.s64 * 1000;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cac134
	if (!ctx.cr6.eq) goto loc_82CAC134;
loc_82CAC12C:
	// cmpdi cr6,r11,100
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 100, ctx.xer);
	// blt cr6,0x82cac158
	if (ctx.cr6.lt) goto loc_82CAC158;
loc_82CAC134:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = ctx.r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = ctx.r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = ctx.r6.s64 * 100;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CAC158:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82cac168
	if (!ctx.cr6.eq) goto loc_82CAC168;
	// cmpdi cr6,r11,10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 10, ctx.xer);
	// blt cr6,0x82cac18c
	if (ctx.cr6.lt) goto loc_82CAC18C;
loc_82CAC168:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = ctx.r11.s64 / ctx.r9.s64;
	// divd r7,r11,r9
	ctx.r7.s64 = ctx.r11.s64 / ctx.r9.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CAC18C:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r26.u8);
loc_82CAC198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC19C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CAC1A4"))) PPC_WEAK_FUNC(sub_82CAC1A4);
PPC_FUNC_IMPL(__imp__sub_82CAC1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAC1A8"))) PPC_WEAK_FUNC(sub_82CAC1A8);
PPC_FUNC_IMPL(__imp__sub_82CAC1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82CAC1B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82cac1f8
	if (!ctx.cr6.eq) goto loc_82CAC1F8;
loc_82CAC1CC:
	// bl 0x82cab770
	ctx.lr = 0x82CAC1D0;
	sub_82CAB770(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	ctx.lr = 0x82CAC1F0;
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cac364
	goto loc_82CAC364;
loc_82CAC1F8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cac1cc
	if (ctx.cr6.eq) goto loc_82CAC1CC;
	// extsb. r26,r7
	ctx.r26.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r28,48
	ctx.r28.s64 = 48;
	// beq 0x82cac238
	if (ctx.cr0.eq) goto loc_82CAC238;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82cac238
	if (!ctx.cr6.eq) goto loc_82CAC238;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_82CAC238:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82cac250
	if (!ctx.cr6.eq) goto loc_82CAC250;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82CAC250:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82cac298
	if (ctx.cr6.gt) goto loc_82CAC298;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CAC260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cac260
	if (!ctx.cr6.eq) goto loc_82CAC260;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82caa2e0
	ctx.lr = 0x82CAC290;
	sub_82CAA2E0(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x82cac29c
	goto loc_82CAC29C;
loc_82CAC298:
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82CAC29C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82cac360
	if (!ctx.cr6.gt) goto loc_82CAC360;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CAC2A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cac2a8
	if (!ctx.cr6.eq) goto loc_82CAC2A8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82caa2e0
	ctx.lr = 0x82CAC2D8;
	sub_82CAA2E0(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lwz r11,-4912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4912);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82cac360
	if (!ctx.cr6.lt) goto loc_82CAC360;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82cac308
	if (ctx.cr6.eq) goto loc_82CAC308;
	// neg r27,r11
	ctx.r27.s64 = -ctx.r11.s64;
	// b 0x82cac318
	goto loc_82CAC318;
loc_82CAC308:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cac318
	if (ctx.cr6.lt) goto loc_82CAC318;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82CAC318:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82cac350
	if (ctx.cr6.eq) goto loc_82CAC350;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CAC324:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cac324
	if (!ctx.cr6.eq) goto loc_82CAC324;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82caa2e0
	ctx.lr = 0x82CAC350;
	sub_82CAA2E0(ctx, base);
loc_82CAC350:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82CAC360;
	sub_82CA3190(ctx, base);
loc_82CAC360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC364:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82CAC36C"))) PPC_WEAK_FUNC(sub_82CAC36C);
PPC_FUNC_IMPL(__imp__sub_82CAC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAC370"))) PPC_WEAK_FUNC(sub_82CAC370);
PPC_FUNC_IMPL(__imp__sub_82CAC370) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x82cac3bc
	if (ctx.cr6.eq) goto loc_82CAC3BC;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x82cac3bc
	if (ctx.cr6.eq) goto loc_82CAC3BC;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x82cac39c
	if (!ctx.cr6.eq) goto loc_82CAC39C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82170f28
	sub_82170F28(ctx, base);
	return;
loc_82CAC39C:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82cac3b4
	if (ctx.cr6.eq) goto loc_82CAC3B4;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82cac3b4
	if (ctx.cr6.eq) goto loc_82CAC3B4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821712b0
	sub_821712B0(ctx, base);
	return;
loc_82CAC3B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cabd60
	sub_82CABD60(ctx, base);
	return;
loc_82CAC3BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82171198
	sub_82171198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAC3C4"))) PPC_WEAK_FUNC(sub_82CAC3C4);
PPC_FUNC_IMPL(__imp__sub_82CAC3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAC3C8"))) PPC_WEAK_FUNC(sub_82CAC3C8);
PPC_FUNC_IMPL(__imp__sub_82CAC3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b25dc
	__imp__KeTlsAlloc(ctx, base);
	return;
}

