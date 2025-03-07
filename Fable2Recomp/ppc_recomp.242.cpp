#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EE4C90"))) PPC_WEAK_FUNC(sub_82EE4C90);
PPC_FUNC_IMPL(__imp__sub_82EE4C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,-84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -84);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-15904
	ctx.r9.s64 = ctx.r9.s64 + -15904;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82c734b8
	ctx.lr = 0x82EE4CD0;
	sub_82C734B8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82ee4d28
	ctx.lr = 0x82EE4CE0;
	sub_82EE4D28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4CF0"))) PPC_WEAK_FUNC(sub_82EE4CF0);
PPC_FUNC_IMPL(__imp__sub_82EE4CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82c7a220
	ctx.lr = 0x82EE4D14;
	sub_82C7A220(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4D28"))) PPC_WEAK_FUNC(sub_82EE4D28);
PPC_FUNC_IMPL(__imp__sub_82EE4D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,-12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-15892
	ctx.r9.s64 = ctx.r9.s64 + -15892;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addic. r11,r11,-12
	ctx.xer.ca = ctx.r11.u32 > 11;
	ctx.r11.s64 = ctx.r11.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee4d78
	if (ctx.cr0.eq) goto loc_82EE4D78;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee4d80
	goto loc_82EE4D80;
loc_82EE4D78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE4D80:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c79bf8
	ctx.lr = 0x82EE4D8C;
	sub_82C79BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82c72d50
	ctx.lr = 0x82EE4D9C;
	sub_82C72D50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4DAC"))) PPC_WEAK_FUNC(sub_82EE4DAC);
PPC_FUNC_IMPL(__imp__sub_82EE4DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE4DB0"))) PPC_WEAK_FUNC(sub_82EE4DB0);
PPC_FUNC_IMPL(__imp__sub_82EE4DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// bl 0x82ee4ac8
	ctx.lr = 0x82EE4DD0;
	sub_82EE4AC8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee4de8
	if (ctx.cr0.eq) goto loc_82EE4DE8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// bl 0x824fe010
	ctx.lr = 0x82EE4DE8;
	sub_824FE010(ctx, base);
loc_82EE4DE8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4E00"))) PPC_WEAK_FUNC(sub_82EE4E00);
PPC_FUNC_IMPL(__imp__sub_82EE4E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bl 0x82ee4e50
	ctx.lr = 0x82EE4E20;
	sub_82EE4E50(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee4e38
	if (ctx.cr0.eq) goto loc_82EE4E38;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bl 0x824fe010
	ctx.lr = 0x82EE4E38;
	sub_824FE010(ctx, base);
loc_82EE4E38:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4E50"))) PPC_WEAK_FUNC(sub_82EE4E50);
PPC_FUNC_IMPL(__imp__sub_82EE4E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82ee4d28
	ctx.lr = 0x82EE4E6C;
	sub_82EE4D28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82c72d40
	ctx.lr = 0x82EE4E78;
	sub_82C72D40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4E88"))) PPC_WEAK_FUNC(sub_82EE4E88);
PPC_FUNC_IMPL(__imp__sub_82EE4E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee4eec
	if (ctx.cr6.eq) goto loc_82EE4EEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15888
	ctx.r11.s64 = ctx.r11.s64 + -15888;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-6996
	ctx.r10.s64 = ctx.r10.s64 + -6996;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82c72d70
	ctx.lr = 0x82EE4EE0;
	sub_82C72D70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE4EEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82c759d8
	ctx.lr = 0x82EE4F00;
	sub_82C759D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ee4f48
	ctx.lr = 0x82EE4F18;
	sub_82EE4F48(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,-15892
	ctx.r9.s64 = ctx.r9.s64 + -15892;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4F48"))) PPC_WEAK_FUNC(sub_82EE4F48);
PPC_FUNC_IMPL(__imp__sub_82EE4F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stb r5,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r5.u8);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee4fa0
	if (ctx.cr6.eq) goto loc_82EE4FA0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-6996
	ctx.r11.s64 = ctx.r11.s64 + -6996;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c72d70
	ctx.lr = 0x82EE4F94;
	sub_82C72D70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE4FA0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r9,r9,-7040
	ctx.r9.s64 = ctx.r9.s64 + -7040;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lbz r11,135(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee5000
	if (ctx.cr0.eq) goto loc_82EE5000;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee4fe0
	if (!ctx.cr6.eq) goto loc_82EE4FE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82ee4ff8
	goto loc_82EE4FF8;
loc_82EE4FE0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82EE4FF8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cd1dd8
	ctx.lr = 0x82EE5000;
	sub_82CD1DD8(ctx, base);
loc_82EE5000:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5014"))) PPC_WEAK_FUNC(sub_82EE5014);
PPC_FUNC_IMPL(__imp__sub_82EE5014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5018"))) PPC_WEAK_FUNC(sub_82EE5018);
PPC_FUNC_IMPL(__imp__sub_82EE5018) {
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x822f8620
	ctx.lr = 0x82EE5044;
	sub_822F8620(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82b56750
	ctx.lr = 0x82EE5060;
	sub_82B56750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82ee50b4
	if (!ctx.cr0.gt) goto loc_82EE50B4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82b56750
	ctx.lr = 0x82EE5080;
	sub_82B56750(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82ee50b4
	if (!ctx.cr6.gt) goto loc_82EE50B4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82b56750
	ctx.lr = 0x82EE50A4;
	sub_82B56750(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x82ee50bc
	goto loc_82EE50BC;
loc_82EE50B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82EE50BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c7a818
	ctx.lr = 0x82EE50D0;
	sub_82C7A818(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829f9c40
	ctx.lr = 0x82EE50D8;
	sub_829F9C40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee50f0
	if (!ctx.cr0.eq) goto loc_82EE50F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee52a4
	goto loc_82EE52A4;
loc_82EE50F0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EE5108;
	sub_826B4B60(ctx, base);
	// rlwinm r11,r3,0,23,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1C0;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82ee51a0
	if (ctx.cr6.eq) goto loc_82EE51A0;
	// b 0x82ee5124
	goto loc_82EE5124;
loc_82EE5118:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82EE5124:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ee51a0
	if (!ctx.cr6.gt) goto loc_82EE51A0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82c79c18
	ctx.lr = 0x82EE5148;
	sub_82C79C18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824e3220
	ctx.lr = 0x82EE5164;
	sub_824E3220(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c79fe0
	ctx.lr = 0x82EE516C;
	sub_82C79FE0(ctx, base);
	// sth r3,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
	// bl 0x826c4858
	ctx.lr = 0x82EE5174;
	sub_826C4858(ctx, base);
	// sth r3,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r3.u16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,106
	ctx.r3.s64 = ctx.r1.s64 + 106;
	// bl 0x82c72c30
	ctx.lr = 0x82EE5184;
	sub_82C72C30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee519c
	if (ctx.cr0.eq) goto loc_82EE519C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee51a0
	goto loc_82EE51A0;
loc_82EE519C:
	// b 0x82ee5118
	goto loc_82EE5118;
loc_82EE51A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ee51f0
	if (!ctx.cr6.eq) goto loc_82EE51F0;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824e3220
	ctx.lr = 0x82EE51CC;
	sub_824E3220(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ee52f0
	ctx.lr = 0x82EE51D8;
	sub_82EE52F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82ee51f0
	if (ctx.cr6.eq) goto loc_82EE51F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE51F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ee5288
	if (!ctx.cr6.eq) goto loc_82EE5288;
	// b 0x82ee520c
	goto loc_82EE520C;
loc_82EE5200:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82EE520C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ee5288
	if (!ctx.cr6.gt) goto loc_82EE5288;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82c79c18
	ctx.lr = 0x82EE5230;
	sub_82C79C18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824e3220
	ctx.lr = 0x82EE524C;
	sub_824E3220(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c79fe0
	ctx.lr = 0x82EE5254;
	sub_82C79FE0(ctx, base);
	// sth r3,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r3.u16);
	// bl 0x826c4858
	ctx.lr = 0x82EE525C;
	sub_826C4858(ctx, base);
	// sth r3,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r3.u16);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,110
	ctx.r3.s64 = ctx.r1.s64 + 110;
	// bl 0x82c72c30
	ctx.lr = 0x82EE526C;
	sub_82C72C30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee5284
	if (ctx.cr0.eq) goto loc_82EE5284;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee5288
	goto loc_82EE5288;
loc_82EE5284:
	// b 0x82ee5200
	goto loc_82EE5200;
loc_82EE5288:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826c4970
	ctx.lr = 0x82EE52A4;
	sub_826C4970(ctx, base);
loc_82EE52A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82c75410
	ctx.lr = 0x82EE52C4;
	sub_82C75410(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c7abb8
	ctx.lr = 0x82EE52D4;
	sub_82C7ABB8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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

__attribute__((alias("__imp__sub_82EE52F0"))) PPC_WEAK_FUNC(sub_82EE52F0);
PPC_FUNC_IMPL(__imp__sub_82EE52F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE5328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5338"))) PPC_WEAK_FUNC(sub_82EE5338);
PPC_FUNC_IMPL(__imp__sub_82EE5338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5378
	ctx.lr = 0x82EE5358;
	sub_82EE5378(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5378"))) PPC_WEAK_FUNC(sub_82EE5378);
PPC_FUNC_IMPL(__imp__sub_82EE5378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee53a8
	if (!ctx.cr6.eq) goto loc_82EE53A8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82ee53c8
	goto loc_82EE53C8;
loc_82EE53A8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee53bc
	if (!ctx.cr6.eq) goto loc_82EE53BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ee53c8
	goto loc_82EE53C8;
loc_82EE53BC:
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ca9a18
	ctx.lr = 0x82EE53C8;
	sub_82CA9A18(ctx, base);
loc_82EE53C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE53D8"))) PPC_WEAK_FUNC(sub_82EE53D8);
PPC_FUNC_IMPL(__imp__sub_82EE53D8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5424
	if (ctx.cr6.eq) goto loc_82EE5424;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5424
	if (ctx.cr6.eq) goto loc_82EE5424;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5424
	if (ctx.cr6.eq) goto loc_82EE5424;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5430
	if (ctx.cr6.eq) goto loc_82EE5430;
loc_82EE5424:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// b 0x82ee54fc
	goto loc_82EE54FC;
loc_82EE5430:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5458
	if (ctx.cr6.eq) goto loc_82EE5458;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee54fc
	goto loc_82EE54FC;
loc_82EE5458:
	// li r4,752
	ctx.r4.s64 = 752;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE5474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee5490
	if (!ctx.cr6.eq) goto loc_82EE5490;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// b 0x82ee54fc
	goto loc_82EE54FC;
loc_82EE5490:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,-29320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29320, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,-29316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29316, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,752
	ctx.r3.s64 = 752;
	// bl 0x82c2ce58
	ctx.lr = 0x82EE54B4;
	sub_82C2CE58(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee54d4
	if (ctx.cr6.eq) goto loc_82EE54D4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ee59a8
	ctx.lr = 0x82EE54CC;
	sub_82EE59A8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82ee54dc
	goto loc_82EE54DC;
loc_82EE54D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82EE54DC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,-29312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29312, ctx.r11.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE54FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE550C"))) PPC_WEAK_FUNC(sub_82EE550C);
PPC_FUNC_IMPL(__imp__sub_82EE550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5510"))) PPC_WEAK_FUNC(sub_82EE5510);
PPC_FUNC_IMPL(__imp__sub_82EE5510) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee5580
	if (!ctx.cr6.eq) goto loc_82EE5580;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29308(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29308);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5580
	if (!ctx.cr0.eq) goto loc_82EE5580;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29308
	ctx.r31.s64 = ctx.r11.s64 + -29308;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15864
	ctx.r6.s64 = ctx.r11.s64 + -15864;
	// li r5,54
	ctx.r5.s64 = 54;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE556C;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE5574;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5580
	if (!ctx.cr0.eq) goto loc_82EE5580;
	// twi 31,r0,22
loc_82EE5580:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29320);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE55A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EE55B8"))) PPC_WEAK_FUNC(sub_82EE55B8);
PPC_FUNC_IMPL(__imp__sub_82EE55B8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee5628
	if (!ctx.cr6.eq) goto loc_82EE5628;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29307(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29307);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5628
	if (!ctx.cr0.eq) goto loc_82EE5628;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29307
	ctx.r31.s64 = ctx.r11.s64 + -29307;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15864
	ctx.r6.s64 = ctx.r11.s64 + -15864;
	// li r5,60
	ctx.r5.s64 = 60;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE5614;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE561C;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5628
	if (!ctx.cr0.eq) goto loc_82EE5628;
	// twi 31,r0,22
loc_82EE5628:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE564C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EE5660"))) PPC_WEAK_FUNC(sub_82EE5660);
PPC_FUNC_IMPL(__imp__sub_82EE5660) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee56d4
	if (!ctx.cr6.eq) goto loc_82EE56D4;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29306(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29306);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee56d4
	if (!ctx.cr0.eq) goto loc_82EE56D4;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29306
	ctx.r31.s64 = ctx.r11.s64 + -29306;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15864
	ctx.r6.s64 = ctx.r11.s64 + -15864;
	// li r5,66
	ctx.r5.s64 = 66;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE56C0;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE56C8;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee56d4
	if (!ctx.cr0.eq) goto loc_82EE56D4;
	// twi 31,r0,22
loc_82EE56D4:
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29320);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE56FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EE5710"))) PPC_WEAK_FUNC(sub_82EE5710);
PPC_FUNC_IMPL(__imp__sub_82EE5710) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee5780
	if (!ctx.cr6.eq) goto loc_82EE5780;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29305(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29305);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5780
	if (!ctx.cr0.eq) goto loc_82EE5780;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29305
	ctx.r31.s64 = ctx.r11.s64 + -29305;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15836
	ctx.r6.s64 = ctx.r11.s64 + -15836;
	// li r5,77
	ctx.r5.s64 = 77;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE576C;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE5774;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5780
	if (!ctx.cr0.eq) goto loc_82EE5780;
	// twi 31,r0,22
loc_82EE5780:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29316(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE57A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EE57B8"))) PPC_WEAK_FUNC(sub_82EE57B8);
PPC_FUNC_IMPL(__imp__sub_82EE57B8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee5828
	if (!ctx.cr6.eq) goto loc_82EE5828;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29304(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29304);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5828
	if (!ctx.cr0.eq) goto loc_82EE5828;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29304
	ctx.r31.s64 = ctx.r11.s64 + -29304;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15836
	ctx.r6.s64 = ctx.r11.s64 + -15836;
	// li r5,83
	ctx.r5.s64 = 83;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE5814;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE581C;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5828
	if (!ctx.cr0.eq) goto loc_82EE5828;
	// twi 31,r0,22
loc_82EE5828:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29316(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29316);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE584C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EE5860"))) PPC_WEAK_FUNC(sub_82EE5860);
PPC_FUNC_IMPL(__imp__sub_82EE5860) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee58cc
	if (!ctx.cr6.eq) goto loc_82EE58CC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29303(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29303);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee58cc
	if (!ctx.cr0.eq) goto loc_82EE58CC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29303
	ctx.r31.s64 = ctx.r11.s64 + -29303;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15836
	ctx.r6.s64 = ctx.r11.s64 + -15836;
	// li r5,89
	ctx.r5.s64 = 89;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE58B8;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE58C0;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee58cc
	if (!ctx.cr0.eq) goto loc_82EE58CC;
	// twi 31,r0,22
loc_82EE58CC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29316(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29316);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE58EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EE5900"))) PPC_WEAK_FUNC(sub_82EE5900);
PPC_FUNC_IMPL(__imp__sub_82EE5900) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee5970
	if (!ctx.cr6.eq) goto loc_82EE5970;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29302(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29302);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5970
	if (!ctx.cr0.eq) goto loc_82EE5970;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29302
	ctx.r31.s64 = ctx.r11.s64 + -29302;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15836
	ctx.r6.s64 = ctx.r11.s64 + -15836;
	// li r5,95
	ctx.r5.s64 = 95;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE595C;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE5964;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5970
	if (!ctx.cr0.eq) goto loc_82EE5970;
	// twi 31,r0,22
loc_82EE5970:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29316(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29316);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE5994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EE59A8"))) PPC_WEAK_FUNC(sub_82EE59A8);
PPC_FUNC_IMPL(__imp__sub_82EE59A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5aa8
	ctx.lr = 0x82EE59C0;
	sub_82EE5AA8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15808
	ctx.r11.s64 = ctx.r11.s64 + -15808;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ee5b28
	ctx.lr = 0x82EE59E8;
	sub_82EE5B28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82ee5b68
	ctx.lr = 0x82EE59F4;
	sub_82EE5B68(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe6a28
	ctx.lr = 0x82EE5A10;
	sub_82FE6A28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x830eae80
	ctx.lr = 0x82EE5A1C;
	sub_830EAE80(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x830eae80
	ctx.lr = 0x82EE5A28;
	sub_830EAE80(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82ee5ba8
	ctx.lr = 0x82EE5A34;
	sub_82EE5BA8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82ee7360
	ctx.lr = 0x82EE5A4C;
	sub_82EE7360(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5A60"))) PPC_WEAK_FUNC(sub_82EE5A60);
PPC_FUNC_IMPL(__imp__sub_82EE5A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5d08
	ctx.lr = 0x82EE5A7C;
	sub_82EE5D08(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee5a90
	if (ctx.cr0.eq) goto loc_82EE5A90;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE5A90;
	sub_824FE010(ctx, base);
loc_82EE5A90:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5AA4"))) PPC_WEAK_FUNC(sub_82EE5AA4);
PPC_FUNC_IMPL(__imp__sub_82EE5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5AA8"))) PPC_WEAK_FUNC(sub_82EE5AA8);
PPC_FUNC_IMPL(__imp__sub_82EE5AA8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15784
	ctx.r11.s64 = ctx.r11.s64 + -15784;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5AC4"))) PPC_WEAK_FUNC(sub_82EE5AC4);
PPC_FUNC_IMPL(__imp__sub_82EE5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5AC8"))) PPC_WEAK_FUNC(sub_82EE5AC8);
PPC_FUNC_IMPL(__imp__sub_82EE5AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5b10
	ctx.lr = 0x82EE5AE4;
	sub_82EE5B10(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee5af8
	if (ctx.cr0.eq) goto loc_82EE5AF8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE5AF8;
	sub_824FE010(ctx, base);
loc_82EE5AF8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5B0C"))) PPC_WEAK_FUNC(sub_82EE5B0C);
PPC_FUNC_IMPL(__imp__sub_82EE5B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5B10"))) PPC_WEAK_FUNC(sub_82EE5B10);
PPC_FUNC_IMPL(__imp__sub_82EE5B10) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15784
	ctx.r11.s64 = ctx.r11.s64 + -15784;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5B28"))) PPC_WEAK_FUNC(sub_82EE5B28);
PPC_FUNC_IMPL(__imp__sub_82EE5B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5c58
	ctx.lr = 0x82EE5B40;
	sub_82EE5C58(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15760
	ctx.r11.s64 = ctx.r11.s64 + -15760;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5B64"))) PPC_WEAK_FUNC(sub_82EE5B64);
PPC_FUNC_IMPL(__imp__sub_82EE5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5B68"))) PPC_WEAK_FUNC(sub_82EE5B68);
PPC_FUNC_IMPL(__imp__sub_82EE5B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5ce8
	ctx.lr = 0x82EE5B80;
	sub_82EE5CE8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15732
	ctx.r11.s64 = ctx.r11.s64 + -15732;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5BA4"))) PPC_WEAK_FUNC(sub_82EE5BA4);
PPC_FUNC_IMPL(__imp__sub_82EE5BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5BA8"))) PPC_WEAK_FUNC(sub_82EE5BA8);
PPC_FUNC_IMPL(__imp__sub_82EE5BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7668
	ctx.lr = 0x82EE5BC4;
	sub_82EE7668(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// bl 0x82ee69c0
	ctx.lr = 0x82EE5BD0;
	sub_82EE69C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5BE4"))) PPC_WEAK_FUNC(sub_82EE5BE4);
PPC_FUNC_IMPL(__imp__sub_82EE5BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5BE8"))) PPC_WEAK_FUNC(sub_82EE5BE8);
PPC_FUNC_IMPL(__imp__sub_82EE5BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5c30
	ctx.lr = 0x82EE5C04;
	sub_82EE5C30(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee5c18
	if (ctx.cr0.eq) goto loc_82EE5C18;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE5C18;
	sub_824FE010(ctx, base);
loc_82EE5C18:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5C2C"))) PPC_WEAK_FUNC(sub_82EE5C2C);
PPC_FUNC_IMPL(__imp__sub_82EE5C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5C30"))) PPC_WEAK_FUNC(sub_82EE5C30);
PPC_FUNC_IMPL(__imp__sub_82EE5C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7280
	ctx.lr = 0x82EE5C48;
	sub_82EE7280(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5C58"))) PPC_WEAK_FUNC(sub_82EE5C58);
PPC_FUNC_IMPL(__imp__sub_82EE5C58) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15712
	ctx.r11.s64 = ctx.r11.s64 + -15712;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5C74"))) PPC_WEAK_FUNC(sub_82EE5C74);
PPC_FUNC_IMPL(__imp__sub_82EE5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5C78"))) PPC_WEAK_FUNC(sub_82EE5C78);
PPC_FUNC_IMPL(__imp__sub_82EE5C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5cc0
	ctx.lr = 0x82EE5C94;
	sub_82EE5CC0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee5ca8
	if (ctx.cr0.eq) goto loc_82EE5CA8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE5CA8;
	sub_824FE010(ctx, base);
loc_82EE5CA8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5CBC"))) PPC_WEAK_FUNC(sub_82EE5CBC);
PPC_FUNC_IMPL(__imp__sub_82EE5CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5CC0"))) PPC_WEAK_FUNC(sub_82EE5CC0);
PPC_FUNC_IMPL(__imp__sub_82EE5CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7220
	ctx.lr = 0x82EE5CD8;
	sub_82EE7220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5CE8"))) PPC_WEAK_FUNC(sub_82EE5CE8);
PPC_FUNC_IMPL(__imp__sub_82EE5CE8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15684
	ctx.r11.s64 = ctx.r11.s64 + -15684;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5D04"))) PPC_WEAK_FUNC(sub_82EE5D04);
PPC_FUNC_IMPL(__imp__sub_82EE5D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE5D08"))) PPC_WEAK_FUNC(sub_82EE5D08);
PPC_FUNC_IMPL(__imp__sub_82EE5D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15808
	ctx.r11.s64 = ctx.r11.s64 + -15808;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82ee7330
	ctx.lr = 0x82EE5D34;
	sub_82EE7330(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee5d48
	if (ctx.cr0.eq) goto loc_82EE5D48;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe6b18
	ctx.lr = 0x82EE5D48;
	sub_82FE6B18(ctx, base);
loc_82EE5D48:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82ee9968
	ctx.lr = 0x82EE5D54;
	sub_82EE9968(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x830eaf08
	ctx.lr = 0x82EE5D60;
	sub_830EAF08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x830eaf08
	ctx.lr = 0x82EE5D6C;
	sub_830EAF08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe7380
	ctx.lr = 0x82EE5D78;
	sub_82FE7380(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82ee5cc0
	ctx.lr = 0x82EE5D84;
	sub_82EE5CC0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ee5c30
	ctx.lr = 0x82EE5D90;
	sub_82EE5C30(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee5b10
	ctx.lr = 0x82EE5D98;
	sub_82EE5B10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5DA8"))) PPC_WEAK_FUNC(sub_82EE5DA8);
PPC_FUNC_IMPL(__imp__sub_82EE5DA8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,748
	ctx.r11.s64 = ctx.r11.s64 + 748;
loc_82EE5DB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ee5db4
	if (!ctx.cr0.eq) goto loc_82EE5DB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5DE0"))) PPC_WEAK_FUNC(sub_82EE5DE0);
PPC_FUNC_IMPL(__imp__sub_82EE5DE0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee5e54
	if (ctx.cr6.eq) goto loc_82EE5E54;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29299(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29299);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5e54
	if (!ctx.cr0.eq) goto loc_82EE5E54;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29299
	ctx.r31.s64 = ctx.r11.s64 + -29299;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15552
	ctx.r6.s64 = ctx.r11.s64 + -15552;
	// li r5,121
	ctx.r5.s64 = 121;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ee4928
	ctx.lr = 0x82EE5E40;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE5E48;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5e54
	if (!ctx.cr0.eq) goto loc_82EE5E54;
	// twi 31,r0,22
loc_82EE5E54:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82ee5eac
	if (ctx.cr6.gt) goto loc_82EE5EAC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29300(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29300);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5eac
	if (!ctx.cr0.eq) goto loc_82EE5EAC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29300
	ctx.r31.s64 = ctx.r11.s64 + -29300;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15572
	ctx.r6.s64 = ctx.r11.s64 + -15572;
	// li r5,123
	ctx.r5.s64 = 123;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ee4928
	ctx.lr = 0x82EE5E98;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE5EA0;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5eac
	if (!ctx.cr0.eq) goto loc_82EE5EAC;
	// twi 31,r0,22
loc_82EE5EAC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r11,748
	ctx.r11.s64 = ctx.r11.s64 + 748;
loc_82EE5EB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ee5eb4
	if (!ctx.cr0.eq) goto loc_82EE5EB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ee6018
	if (!ctx.cr6.eq) goto loc_82EE6018;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ee6018
	if (!ctx.cr6.eq) goto loc_82EE6018;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5f64
	if (ctx.cr6.eq) goto loc_82EE5F64;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29301(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29301);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5f64
	if (!ctx.cr0.eq) goto loc_82EE5F64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-15640
	ctx.r31.s64 = ctx.r11.s64 + -15640;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r11,-29301
	ctx.r30.s64 = ctx.r11.s64 + -29301;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15664
	ctx.r6.s64 = ctx.r11.s64 + -15664;
	// li r5,132
	ctx.r5.s64 = 132;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ee4928
	ctx.lr = 0x82EE5F4C;
	sub_82EE4928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x830eb3e8
	ctx.lr = 0x82EE5F58;
	sub_830EB3E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee5f64
	if (!ctx.cr0.eq) goto loc_82EE5F64;
	// twi 31,r0,22
loc_82EE5F64:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee5fa8
	if (ctx.cr6.eq) goto loc_82EE5FA8;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r11,748
	ctx.r11.s64 = ctx.r11.s64 + 748;
loc_82EE5F7C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ee5f7c
	if (!ctx.cr0.eq) goto loc_82EE5F7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82ee601c
	goto loc_82EE601C;
loc_82EE5FA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29312(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29312);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE5FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r4,-29312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29320);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE5FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-29312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29312, ctx.r10.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-29320(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29320, ctx.r10.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-29316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29316, ctx.r10.u32);
loc_82EE6018:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EE601C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82EE6034"))) PPC_WEAK_FUNC(sub_82EE6034);
PPC_FUNC_IMPL(__imp__sub_82EE6034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6038"))) PPC_WEAK_FUNC(sub_82EE6038);
PPC_FUNC_IMPL(__imp__sub_82EE6038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee6068
	if (!ctx.cr6.eq) goto loc_82EE6068;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// b 0x82ee60a8
	goto loc_82EE60A8;
loc_82EE6068:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee71e8
	ctx.lr = 0x82EE6078;
	sub_82EE71E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee608c
	if (!ctx.cr0.eq) goto loc_82EE608C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// b 0x82ee60a8
	goto loc_82EE60A8;
loc_82EE608C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82ee7808
	ctx.lr = 0x82EE60A4;
	sub_82EE7808(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EE60A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE60B8"))) PPC_WEAK_FUNC(sub_82EE60B8);
PPC_FUNC_IMPL(__imp__sub_82EE60B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r3.u32);
	// stw r4,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, ctx.r4.u32);
	// stw r5,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r5.u32);
	// stw r6,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r6.u32);
	// stw r7,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r7.u32);
	// stw r8,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r8.u32);
	// stw r9,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r9.u32);
	// stw r10,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r10.u32);
	// lwz r11,1324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6100
	if (ctx.cr6.eq) goto loc_82EE6100;
	// lwz r11,1356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee610c
	if (!ctx.cr6.eq) goto loc_82EE610C;
loc_82EE6100:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// b 0x82ee651c
	goto loc_82EE651C;
loc_82EE610C:
	// lwz r3,1356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1356);
	// bl 0x830eb5d8
	ctx.lr = 0x82EE6114;
	sub_830EB5D8(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee6130
	if (!ctx.cr6.lt) goto loc_82EE6130;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,65535
	ctx.r3.u64 = ctx.r11.u64 | 65535;
	// b 0x82ee651c
	goto loc_82EE651C;
loc_82EE6130:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r7,1348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// lwz r6,1340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// lwz r5,1332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1332);
	// lwz r4,1324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// lwz r3,1300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE6168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee61c0
	if (!ctx.cr6.lt) goto loc_82EE61C0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29298(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29298);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee61c0
	if (!ctx.cr0.eq) goto loc_82EE61C0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29298
	ctx.r31.s64 = ctx.r11.s64 + -29298;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15292
	ctx.r6.s64 = ctx.r11.s64 + -15292;
	// li r5,189
	ctx.r5.s64 = 189;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x82ee4928
	ctx.lr = 0x82EE61AC;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE61B4;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee61c0
	if (!ctx.cr0.eq) goto loc_82EE61C0;
	// twi 31,r0,22
loc_82EE61C0:
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee61d4
	if (!ctx.cr6.lt) goto loc_82EE61D4;
	// lwz r3,1140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// b 0x82ee651c
	goto loc_82EE651C;
loc_82EE61D4:
	// lwz r4,1316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83002610
	ctx.lr = 0x82EE61E4;
	sub_83002610(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15296
	ctx.r4.s64 = ctx.r11.s64 + -15296;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x82ee7180
	ctx.lr = 0x82EE61FC;
	sub_82EE7180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee6260
	if (!ctx.cr0.eq) goto loc_82EE6260;
	// lwz r6,1308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15312
	ctx.r5.s64 = ctx.r11.s64 + -15312;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4808
	ctx.lr = 0x82EE621C;
	sub_82EE4808(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe6648
	ctx.lr = 0x82EE622C;
	sub_82FE6648(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15332
	ctx.r5.s64 = ctx.r11.s64 + -15332;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15344
	ctx.r4.s64 = ctx.r11.s64 + -15344;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe66c8
	ctx.lr = 0x82EE6258;
	sub_82FE66C8(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// b 0x82ee63b0
	goto loc_82EE63B0;
loc_82EE6260:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15348
	ctx.r4.s64 = ctx.r11.s64 + -15348;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x82ee7180
	ctx.lr = 0x82EE6278;
	sub_82EE7180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee62dc
	if (!ctx.cr0.eq) goto loc_82EE62DC;
	// lwz r6,1308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15364
	ctx.r5.s64 = ctx.r11.s64 + -15364;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4808
	ctx.lr = 0x82EE6298;
	sub_82EE4808(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe6648
	ctx.lr = 0x82EE62A8;
	sub_82FE6648(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15380
	ctx.r5.s64 = ctx.r11.s64 + -15380;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15344
	ctx.r4.s64 = ctx.r11.s64 + -15344;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe66c8
	ctx.lr = 0x82EE62D4;
	sub_82FE66C8(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// b 0x82ee63b0
	goto loc_82EE63B0;
loc_82EE62DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15384
	ctx.r4.s64 = ctx.r11.s64 + -15384;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x82ee7180
	ctx.lr = 0x82EE62F4;
	sub_82EE7180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ee6358
	if (!ctx.cr0.eq) goto loc_82EE6358;
	// lwz r6,1308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15400
	ctx.r5.s64 = ctx.r11.s64 + -15400;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4808
	ctx.lr = 0x82EE6314;
	sub_82EE4808(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe6648
	ctx.lr = 0x82EE6324;
	sub_82FE6648(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15416
	ctx.r5.s64 = ctx.r11.s64 + -15416;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15344
	ctx.r4.s64 = ctx.r11.s64 + -15344;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe66c8
	ctx.lr = 0x82EE6350;
	sub_82FE66C8(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// b 0x82ee63b0
	goto loc_82EE63B0;
loc_82EE6358:
	// lwz r6,1308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15432
	ctx.r5.s64 = ctx.r11.s64 + -15432;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4808
	ctx.lr = 0x82EE6370;
	sub_82EE4808(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe6648
	ctx.lr = 0x82EE6380;
	sub_82FE6648(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15452
	ctx.r5.s64 = ctx.r11.s64 + -15452;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15344
	ctx.r4.s64 = ctx.r11.s64 + -15344;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe66c8
	ctx.lr = 0x82EE63AC;
	sub_82FE66C8(ctx, base);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
loc_82EE63B0:
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee63c4
	if (!ctx.cr6.lt) goto loc_82EE63C4;
	// lwz r3,1140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// b 0x82ee651c
	goto loc_82EE651C;
loc_82EE63C4:
	// lwz r6,1308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15468
	ctx.r5.s64 = ctx.r11.s64 + -15468;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82ee4808
	ctx.lr = 0x82EE63DC;
	sub_82EE4808(ctx, base);
	// addi r11,r1,1236
	ctx.r11.s64 = ctx.r1.s64 + 1236;
	// stw r11,1240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1240, ctx.r11.u32);
	// lwz r3,1240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// bl 0x82ee6c88
	ctx.lr = 0x82EE63EC;
	sub_82EE6C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee6a10
	ctx.lr = 0x82EE63F8;
	sub_82EE6A10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee6aa0
	ctx.lr = 0x82EE6408;
	sub_82EE6AA0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15476
	ctx.r4.s64 = ctx.r11.s64 + -15476;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee9830
	ctx.lr = 0x82EE6418;
	sub_82EE9830(ctx, base);
	// stw r3,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r3.u32);
	// lwz r11,872(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee6440
	if (!ctx.cr6.lt) goto loc_82EE6440;
	// lwz r11,872(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// stw r11,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r11.u32);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee6a68
	ctx.lr = 0x82EE6438;
	sub_82EE6A68(ctx, base);
	// lwz r3,1244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	// b 0x82ee651c
	goto loc_82EE651C;
loc_82EE6440:
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee6c58
	ctx.lr = 0x82EE6448;
	sub_82EE6C58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// lwz r10,1300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r10,84
	ctx.r3.s64 = ctx.r10.s64 + 84;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE6468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee6490
	if (!ctx.cr6.lt) goto loc_82EE6490;
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// stw r11,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r11.u32);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee6a68
	ctx.lr = 0x82EE6488;
	sub_82EE6A68(ctx, base);
	// lwz r3,1248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// b 0x82ee651c
	goto loc_82EE651C;
loc_82EE6490:
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r7,r11,740
	ctx.r7.s64 = ctx.r11.s64 + 740;
	// lwz r6,1308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15524
	ctx.r5.s64 = ctx.r11.s64 + -15524;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82ee49a8
	ctx.lr = 0x82EE64B0;
	sub_82EE49A8(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// lwz r10,1300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r10,92
	ctx.r3.s64 = ctx.r10.s64 + 92;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE64D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee64f8
	if (!ctx.cr6.lt) goto loc_82EE64F8;
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// stw r11,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r11.u32);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee6a68
	ctx.lr = 0x82EE64F0;
	sub_82EE6A68(ctx, base);
	// lwz r3,1252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1252);
	// b 0x82ee651c
	goto loc_82EE651C;
loc_82EE64F8:
	// lwz r4,1308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r3,r11,480
	ctx.r3.s64 = ctx.r11.s64 + 480;
	// bl 0x830ea888
	ctx.lr = 0x82EE6508;
	sub_830EA888(ctx, base);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// stw r11,1256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1256, ctx.r11.u32);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82ee6a68
	ctx.lr = 0x82EE6518;
	sub_82EE6A68(ctx, base);
	// lwz r3,1256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1256);
loc_82EE651C:
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6530"))) PPC_WEAK_FUNC(sub_82EE6530);
PPC_FUNC_IMPL(__imp__sub_82EE6530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82EE6538;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r3.u32);
	// stw r4,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r4.u32);
	// stw r5,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r5.u32);
	// stw r6,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r6.u32);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6568
	if (ctx.cr6.eq) goto loc_82EE6568;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,65535
	ctx.r3.u64 = ctx.r11.u64 | 65535;
	// b 0x82ee6828
	goto loc_82EE6828;
loc_82EE6568:
	// lwz r11,572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee659c
	if (ctx.cr6.eq) goto loc_82EE659C;
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee659c
	if (ctx.cr6.eq) goto loc_82EE659C;
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee659c
	if (ctx.cr6.eq) goto loc_82EE659C;
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee65a8
	if (ctx.cr6.eq) goto loc_82EE65A8;
loc_82EE659C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// b 0x82ee6828
	goto loc_82EE6828;
loc_82EE65A8:
	// lwz r6,572(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15268
	ctx.r5.s64 = ctx.r11.s64 + -15268;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ee4808
	ctx.lr = 0x82EE65C0;
	sub_82EE4808(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82eed730
	ctx.lr = 0x82EE65C8;
	sub_82EED730(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eed730
	ctx.lr = 0x82EE65D0;
	sub_82EED730(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82ffe110
	ctx.lr = 0x82EE65D8;
	sub_82FFE110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82ffe110
	ctx.lr = 0x82EE65E4;
	sub_82FFE110(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE6614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee6648
	if (!ctx.cr6.lt) goto loc_82EE6648;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eed7b8
	ctx.lr = 0x82EE6638;
	sub_82EED7B8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82ee6980
	ctx.lr = 0x82EE6640;
	sub_82EE6980(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// b 0x82ee6828
	goto loc_82EE6828;
loc_82EE6648:
	// li r4,1288
	ctx.r4.s64 = 1288;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE666C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee66a0
	if (!ctx.cr6.eq) goto loc_82EE66A0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eed7b8
	ctx.lr = 0x82EE6690;
	sub_82EED7B8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82ee6980
	ctx.lr = 0x82EE6698;
	sub_82EE6980(ctx, base);
	// lwz r3,440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// b 0x82ee6828
	goto loc_82EE6828;
loc_82EE66A0:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r3,1288
	ctx.r3.s64 = 1288;
	// bl 0x82ee6830
	ctx.lr = 0x82EE66AC;
	sub_82EE6830(ctx, base);
	// stw r3,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r3.u32);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee66d0
	if (ctx.cr6.eq) goto loc_82EE66D0;
	// lwz r4,564(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r3,444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// bl 0x82eef1f8
	ctx.lr = 0x82EE66C8;
	sub_82EEF1F8(ctx, base);
	// stw r3,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r3.u32);
	// b 0x82ee66d8
	goto loc_82EE66D8;
loc_82EE66D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r11.u32);
loc_82EE66D8:
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r10,456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r29,r11,740
	ctx.r29.s64 = ctx.r11.s64 + 740;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r28,r11,480
	ctx.r28.s64 = ctx.r11.s64 + 480;
	// lwz r27,572(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r3,r10,92
	ctx.r3.s64 = ctx.r10.s64 + 92;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE6724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r3,r10,84
	ctx.r3.s64 = ctx.r10.s64 + 84;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE6744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r24,580(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6754;
	sub_82EED7F8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6760;
	sub_82EED7F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82ee9e38
	ctx.lr = 0x82EE6794;
	sub_82EE9E38(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee67d4
	if (!ctx.cr6.lt) goto loc_82EE67D4;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// bl 0x82ee6840
	ctx.lr = 0x82EE67B4;
	sub_82EE6840(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eed7b8
	ctx.lr = 0x82EE67C4;
	sub_82EED7B8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82ee6980
	ctx.lr = 0x82EE67CC;
	sub_82EE6980(ctx, base);
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// b 0x82ee6828
	goto loc_82EE6828;
loc_82EE67D4:
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee67f8
	if (ctx.cr6.eq) goto loc_82EE67F8;
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1272
	ctx.r11.s64 = ctx.r11.s64 + 1272;
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// b 0x82ee6800
	goto loc_82EE6800;
loc_82EE67F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
loc_82EE6800:
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eed7b8
	ctx.lr = 0x82EE681C;
	sub_82EED7B8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82ee6980
	ctx.lr = 0x82EE6824;
	sub_82EE6980(ctx, base);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
loc_82EE6828:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82EE6830"))) PPC_WEAK_FUNC(sub_82EE6830);
PPC_FUNC_IMPL(__imp__sub_82EE6830) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r3,28(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6840"))) PPC_WEAK_FUNC(sub_82EE6840);
PPC_FUNC_IMPL(__imp__sub_82EE6840) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee68ac
	if (!ctx.cr6.eq) goto loc_82EE68AC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29296(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29296);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee68ac
	if (!ctx.cr0.eq) goto loc_82EE68AC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29296
	ctx.r31.s64 = ctx.r11.s64 + -29296;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15232
	ctx.r6.s64 = ctx.r11.s64 + -15232;
	// li r5,305
	ctx.r5.s64 = 305;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE6898;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE68A0;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee68ac
	if (!ctx.cr0.eq) goto loc_82EE68AC;
	// twi 31,r0,22
loc_82EE68AC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee6908
	if (ctx.cr6.eq) goto loc_82EE6908;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29297(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29297);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee6908
	if (!ctx.cr0.eq) goto loc_82EE6908;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29297
	ctx.r31.s64 = ctx.r11.s64 + -29297;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15256
	ctx.r6.s64 = ctx.r11.s64 + -15256;
	// li r5,306
	ctx.r5.s64 = 306;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee4928
	ctx.lr = 0x82EE68F4;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE68FC;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee6908
	if (!ctx.cr0.eq) goto loc_82EE6908;
	// twi 31,r0,22
loc_82EE6908:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE6924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-29320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-29320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29320);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE6948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ee6968
	if (!ctx.cr6.eq) goto loc_82EE6968;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82EE6968:
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

__attribute__((alias("__imp__sub_82EE697C"))) PPC_WEAK_FUNC(sub_82EE697C);
PPC_FUNC_IMPL(__imp__sub_82EE697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6980"))) PPC_WEAK_FUNC(sub_82EE6980);
PPC_FUNC_IMPL(__imp__sub_82EE6980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee69ac
	if (ctx.cr6.eq) goto loc_82EE69AC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef1bf0
	ctx.lr = 0x82EE69AC;
	sub_82EF1BF0(ctx, base);
loc_82EE69AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE69BC"))) PPC_WEAK_FUNC(sub_82EE69BC);
PPC_FUNC_IMPL(__imp__sub_82EE69BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE69C0"))) PPC_WEAK_FUNC(sub_82EE69C0);
PPC_FUNC_IMPL(__imp__sub_82EE69C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ffe110
	ctx.lr = 0x82EE69E0;
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6dd8
	ctx.lr = 0x82EE69EC;
	sub_82EE6DD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6d18
	ctx.lr = 0x82EE69F8;
	sub_82EE6D18(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6A0C"))) PPC_WEAK_FUNC(sub_82EE6A0C);
PPC_FUNC_IMPL(__imp__sub_82EE6A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6A10"))) PPC_WEAK_FUNC(sub_82EE6A10);
PPC_FUNC_IMPL(__imp__sub_82EE6A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6e48
	ctx.lr = 0x82EE6A30;
	sub_82EE6E48(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ee4b00
	ctx.lr = 0x82EE6A4C;
	sub_82EE4B00(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee6cc0
	ctx.lr = 0x82EE6A54;
	sub_82EE6CC0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6A68"))) PPC_WEAK_FUNC(sub_82EE6A68);
PPC_FUNC_IMPL(__imp__sub_82EE6A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ee6ed0
	ctx.lr = 0x82EE6A84;
	sub_82EE6ED0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6cc0
	ctx.lr = 0x82EE6A8C;
	sub_82EE6CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6A9C"))) PPC_WEAK_FUNC(sub_82EE6A9C);
PPC_FUNC_IMPL(__imp__sub_82EE6A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6AA0"))) PPC_WEAK_FUNC(sub_82EE6AA0);
PPC_FUNC_IMPL(__imp__sub_82EE6AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EE6AA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee6e10
	ctx.lr = 0x82EE6AC0;
	sub_82EE6E10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82cbcc00
	ctx.lr = 0x82EE6AE0;
	sub_82CBCC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ee4b00
	ctx.lr = 0x82EE6AEC;
	sub_82EE4B00(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6AF4;
	sub_82EED7F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ee6b18
	if (!ctx.cr6.eq) goto loc_82EE6B18;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ee4b20
	ctx.lr = 0x82EE6B10;
	sub_82EE4B20(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82ee6c50
	goto loc_82EE6C50;
loc_82EE6B18:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6B20;
	sub_82EED7F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd6f8
	ctx.lr = 0x82EE6B28;
	sub_82CBD6F8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee6ea0
	ctx.lr = 0x82EE6B3C;
	sub_82EE6EA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ee4b00
	ctx.lr = 0x82EE6B48;
	sub_82EE4B00(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ee9bd0
	ctx.lr = 0x82EE6B50;
	sub_82EE9BD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee6b7c
	if (!ctx.cr0.eq) goto loc_82EE6B7C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ee6ed0
	ctx.lr = 0x82EE6B6C;
	sub_82EE6ED0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ee4b20
	ctx.lr = 0x82EE6B74;
	sub_82EE4B20(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82ee6c50
	goto loc_82EE6C50;
loc_82EE6B7C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ee6f00
	ctx.lr = 0x82EE6B98;
	sub_82EE6F00(ctx, base);
	// addi r31,r1,100
	ctx.r31.s64 = ctx.r1.s64 + 100;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6BB0;
	sub_82EED7F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6BBC;
	sub_82EED7F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82cbcdf8
	ctx.lr = 0x82EE6BD0;
	sub_82CBCDF8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ee6bec
	if (ctx.cr6.eq) goto loc_82EE6BEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x82ee6bf8
	goto loc_82EE6BF8;
loc_82EE6BEC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82EE6BF8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6C14;
	sub_82EED7F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15220
	ctx.r5.s64 = ctx.r11.s64 + -15220;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82ee49a8
	ctx.lr = 0x82EE6C34;
	sub_82EE49A8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ee6ed0
	ctx.lr = 0x82EE6C44;
	sub_82EE6ED0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ee4b20
	ctx.lr = 0x82EE6C4C;
	sub_82EE4B20(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82EE6C50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EE6C58"))) PPC_WEAK_FUNC(sub_82EE6C58);
PPC_FUNC_IMPL(__imp__sub_82EE6C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82eed7f8
	ctx.lr = 0x82EE6C74;
	sub_82EED7F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6C84"))) PPC_WEAK_FUNC(sub_82EE6C84);
PPC_FUNC_IMPL(__imp__sub_82EE6C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6C88"))) PPC_WEAK_FUNC(sub_82EE6C88);
PPC_FUNC_IMPL(__imp__sub_82EE6C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ffe110
	ctx.lr = 0x82EE6CA0;
	sub_82FFE110(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82ffe110
	ctx.lr = 0x82EE6CAC;
	sub_82FFE110(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6CC0"))) PPC_WEAK_FUNC(sub_82EE6CC0);
PPC_FUNC_IMPL(__imp__sub_82EE6CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6cec
	if (ctx.cr6.eq) goto loc_82EE6CEC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee6cf4
	goto loc_82EE6CF4;
loc_82EE6CEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE6CF4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ffd368
	ctx.lr = 0x82EE6CFC;
	sub_82FFD368(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ffd368
	ctx.lr = 0x82EE6D04;
	sub_82FFD368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6D14"))) PPC_WEAK_FUNC(sub_82EE6D14);
PPC_FUNC_IMPL(__imp__sub_82EE6D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6D18"))) PPC_WEAK_FUNC(sub_82EE6D18);
PPC_FUNC_IMPL(__imp__sub_82EE6D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee6d68
	if (!ctx.cr6.eq) goto loc_82EE6D68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee6dc8
	goto loc_82EE6DC8;
	// b 0x82ee6dc4
	goto loc_82EE6DC4;
loc_82EE6D68:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6f38
	ctx.lr = 0x82EE6D70;
	sub_82EE6F38(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee6d84
	if (!ctx.cr6.lt) goto loc_82EE6D84;
	// bl 0x82ee8618
	ctx.lr = 0x82EE6D80;
	sub_82EE8618(ctx, base);
	// b 0x82ee6dc4
	goto loc_82EE6DC4;
loc_82EE6D84:
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6f60
	ctx.lr = 0x82EE6D90;
	sub_82EE6F60(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82EE6DC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EE6DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6DD8"))) PPC_WEAK_FUNC(sub_82EE6DD8);
PPC_FUNC_IMPL(__imp__sub_82EE6DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ffcfa8
	ctx.lr = 0x82EE6DF8;
	sub_82FFCFA8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6E0C"))) PPC_WEAK_FUNC(sub_82EE6E0C);
PPC_FUNC_IMPL(__imp__sub_82EE6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6E10"))) PPC_WEAK_FUNC(sub_82EE6E10);
PPC_FUNC_IMPL(__imp__sub_82EE6E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ee7038
	ctx.lr = 0x82EE6E2C;
	sub_82EE7038(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6E48"))) PPC_WEAK_FUNC(sub_82EE6E48);
PPC_FUNC_IMPL(__imp__sub_82EE6E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ffcfa8
	ctx.lr = 0x82EE6E68;
	sub_82FFCFA8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee6e84
	if (ctx.cr6.eq) goto loc_82EE6E84;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee6e8c
	goto loc_82EE6E8C;
loc_82EE6E84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE6E8C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6EA0"))) PPC_WEAK_FUNC(sub_82EE6EA0);
PPC_FUNC_IMPL(__imp__sub_82EE6EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8217dd10
	ctx.lr = 0x82EE6EC0;
	sub_8217DD10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6ED0"))) PPC_WEAK_FUNC(sub_82EE6ED0);
PPC_FUNC_IMPL(__imp__sub_82EE6ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ee70c8
	ctx.lr = 0x82EE6EEC;
	sub_82EE70C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6EFC"))) PPC_WEAK_FUNC(sub_82EE6EFC);
PPC_FUNC_IMPL(__imp__sub_82EE6EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE6F00"))) PPC_WEAK_FUNC(sub_82EE6F00);
PPC_FUNC_IMPL(__imp__sub_82EE6F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee7038
	ctx.lr = 0x82EE6F1C;
	sub_82EE7038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6f90
	ctx.lr = 0x82EE6F28;
	sub_82EE6F90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6F38"))) PPC_WEAK_FUNC(sub_82EE6F38);
PPC_FUNC_IMPL(__imp__sub_82EE6F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7060
	ctx.lr = 0x82EE6F50;
	sub_82EE7060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6F60"))) PPC_WEAK_FUNC(sub_82EE6F60);
PPC_FUNC_IMPL(__imp__sub_82EE6F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee7108
	ctx.lr = 0x82EE6F80;
	sub_82EE7108(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6F90"))) PPC_WEAK_FUNC(sub_82EE6F90);
PPC_FUNC_IMPL(__imp__sub_82EE6F90) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ee7004
	if (!ctx.cr6.eq) goto loc_82EE7004;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29295(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29295);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7004
	if (!ctx.cr0.eq) goto loc_82EE7004;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29295
	ctx.r31.s64 = ctx.r11.s64 + -29295;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-15076
	ctx.r6.s64 = ctx.r11.s64 + -15076;
	// li r5,47
	ctx.r5.s64 = 47;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15176
	ctx.r4.s64 = ctx.r11.s64 + -15176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE6FF0;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE6FF8;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7004
	if (!ctx.cr0.eq) goto loc_82EE7004;
	// twi 31,r0,22
loc_82EE7004:
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ee4b00
	ctx.lr = 0x82EE7014;
	sub_82EE4B00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ee7098
	ctx.lr = 0x82EE701C;
	sub_82EE7098(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ee6ed0
	ctx.lr = 0x82EE7024;
	sub_82EE6ED0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE7038"))) PPC_WEAK_FUNC(sub_82EE7038);
PPC_FUNC_IMPL(__imp__sub_82EE7038) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE705C"))) PPC_WEAK_FUNC(sub_82EE705C);
PPC_FUNC_IMPL(__imp__sub_82EE705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7060"))) PPC_WEAK_FUNC(sub_82EE7060);
PPC_FUNC_IMPL(__imp__sub_82EE7060) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ee7088
	if (!ctx.cr6.gt) goto loc_82EE7088;
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// b 0x82ee7090
	goto loc_82EE7090;
loc_82EE7088:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
loc_82EE7090:
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7098"))) PPC_WEAK_FUNC(sub_82EE7098);
PPC_FUNC_IMPL(__imp__sub_82EE7098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82b4a8a0
	ctx.lr = 0x82EE70B8;
	sub_82B4A8A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE70C8"))) PPC_WEAK_FUNC(sub_82EE70C8);
PPC_FUNC_IMPL(__imp__sub_82EE70C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee70f4
	if (ctx.cr6.eq) goto loc_82EE70F4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824fe010
	ctx.lr = 0x82EE70F4;
	sub_824FE010(ctx, base);
loc_82EE70F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7104"))) PPC_WEAK_FUNC(sub_82EE7104);
PPC_FUNC_IMPL(__imp__sub_82EE7104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7108"))) PPC_WEAK_FUNC(sub_82EE7108);
PPC_FUNC_IMPL(__imp__sub_82EE7108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82ee7134
	if (ctx.cr6.gt) goto loc_82EE7134;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x82ee7164
	goto loc_82EE7164;
loc_82EE7134:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,-1
	ctx.r10.s64 = -1;
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82ee7164
	if (!ctx.cr6.lt) goto loc_82EE7164;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1d48
	ctx.lr = 0x82EE7158;
	sub_822F1D48(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82EE715C;
	sub_822F1F00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1cf0
	ctx.lr = 0x82EE7164;
	sub_822F1CF0(ctx, base);
loc_82EE7164:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8217dd10
	ctx.lr = 0x82EE7170;
	sub_8217DD10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7180"))) PPC_WEAK_FUNC(sub_82EE7180);
PPC_FUNC_IMPL(__imp__sub_82EE7180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee71b4
	if (!ctx.cr6.eq) goto loc_82EE71B4;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82ee71d4
	goto loc_82EE71D4;
loc_82EE71B4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee71c8
	if (!ctx.cr6.eq) goto loc_82EE71C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ee71d4
	goto loc_82EE71D4;
loc_82EE71C8:
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ca6320
	ctx.lr = 0x82EE71D4;
	sub_82CA6320(ctx, base);
loc_82EE71D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE71E4"))) PPC_WEAK_FUNC(sub_82EE71E4);
PPC_FUNC_IMPL(__imp__sub_82EE71E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE71E8"))) PPC_WEAK_FUNC(sub_82EE71E8);
PPC_FUNC_IMPL(__imp__sub_82EE71E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82ee73a8
	ctx.lr = 0x82EE7210;
	sub_82EE73A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7220"))) PPC_WEAK_FUNC(sub_82EE7220);
PPC_FUNC_IMPL(__imp__sub_82EE7220) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15684
	ctx.r11.s64 = ctx.r11.s64 + -15684;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7238"))) PPC_WEAK_FUNC(sub_82EE7238);
PPC_FUNC_IMPL(__imp__sub_82EE7238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7220
	ctx.lr = 0x82EE7254;
	sub_82EE7220(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee7268
	if (ctx.cr0.eq) goto loc_82EE7268;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE7268;
	sub_824FE010(ctx, base);
loc_82EE7268:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE727C"))) PPC_WEAK_FUNC(sub_82EE727C);
PPC_FUNC_IMPL(__imp__sub_82EE727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7280"))) PPC_WEAK_FUNC(sub_82EE7280);
PPC_FUNC_IMPL(__imp__sub_82EE7280) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15712
	ctx.r11.s64 = ctx.r11.s64 + -15712;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7298"))) PPC_WEAK_FUNC(sub_82EE7298);
PPC_FUNC_IMPL(__imp__sub_82EE7298) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE72A4"))) PPC_WEAK_FUNC(sub_82EE72A4);
PPC_FUNC_IMPL(__imp__sub_82EE72A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE72A8"))) PPC_WEAK_FUNC(sub_82EE72A8);
PPC_FUNC_IMPL(__imp__sub_82EE72A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7280
	ctx.lr = 0x82EE72C4;
	sub_82EE7280(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee72d8
	if (ctx.cr0.eq) goto loc_82EE72D8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE72D8;
	sub_824FE010(ctx, base);
loc_82EE72D8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE72EC"))) PPC_WEAK_FUNC(sub_82EE72EC);
PPC_FUNC_IMPL(__imp__sub_82EE72EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE72F0"))) PPC_WEAK_FUNC(sub_82EE72F0);
PPC_FUNC_IMPL(__imp__sub_82EE72F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE7320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7330"))) PPC_WEAK_FUNC(sub_82EE7330);
PPC_FUNC_IMPL(__imp__sub_82EE7330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82ee7378
	ctx.lr = 0x82EE7350;
	sub_82EE7378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7360"))) PPC_WEAK_FUNC(sub_82EE7360);
PPC_FUNC_IMPL(__imp__sub_82EE7360) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7374"))) PPC_WEAK_FUNC(sub_82EE7374);
PPC_FUNC_IMPL(__imp__sub_82EE7374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7378"))) PPC_WEAK_FUNC(sub_82EE7378);
PPC_FUNC_IMPL(__imp__sub_82EE7378) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE73A4"))) PPC_WEAK_FUNC(sub_82EE73A4);
PPC_FUNC_IMPL(__imp__sub_82EE73A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE73A8"))) PPC_WEAK_FUNC(sub_82EE73A8);
PPC_FUNC_IMPL(__imp__sub_82EE73A8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ee73f0
	if (ctx.cr6.gt) goto loc_82EE73F0;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ee73f0
	if (ctx.cr6.gt) goto loc_82EE73F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82ee73f8
	goto loc_82EE73F8;
loc_82EE73F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82EE73F8:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7404"))) PPC_WEAK_FUNC(sub_82EE7404);
PPC_FUNC_IMPL(__imp__sub_82EE7404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7408"))) PPC_WEAK_FUNC(sub_82EE7408);
PPC_FUNC_IMPL(__imp__sub_82EE7408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ef2698
	ctx.lr = 0x82EE7424;
	sub_82EF2698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7434"))) PPC_WEAK_FUNC(sub_82EE7434);
PPC_FUNC_IMPL(__imp__sub_82EE7434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7438"))) PPC_WEAK_FUNC(sub_82EE7438);
PPC_FUNC_IMPL(__imp__sub_82EE7438) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15068
	ctx.r11.s64 = ctx.r11.s64 + -15068;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7450"))) PPC_WEAK_FUNC(sub_82EE7450);
PPC_FUNC_IMPL(__imp__sub_82EE7450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee74b0
	if (ctx.cr0.eq) goto loc_82EE74B0;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r6,r11,29752
	ctx.r6.s64 = ctx.r11.s64 + 29752;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822f0208
	ctx.lr = 0x82EE748C;
	sub_822F0208(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee74a4
	if (ctx.cr0.eq) goto loc_82EE74A4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x824fe010
	ctx.lr = 0x82EE74A4;
	sub_824FE010(ctx, base);
loc_82EE74A4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// b 0x82ee74d0
	goto loc_82EE74D0;
loc_82EE74B0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7438
	ctx.lr = 0x82EE74B8;
	sub_82EE7438(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee74cc
	if (ctx.cr0.eq) goto loc_82EE74CC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE74CC;
	sub_824FE010(ctx, base);
loc_82EE74CC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82EE74D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE74E0"))) PPC_WEAK_FUNC(sub_82EE74E0);
PPC_FUNC_IMPL(__imp__sub_82EE74E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-15048
	ctx.r11.s64 = ctx.r11.s64 + -15048;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7438
	ctx.lr = 0x82EE7508;
	sub_82EE7438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7518"))) PPC_WEAK_FUNC(sub_82EE7518);
PPC_FUNC_IMPL(__imp__sub_82EE7518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee7578
	if (ctx.cr0.eq) goto loc_82EE7578;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r6,r11,29920
	ctx.r6.s64 = ctx.r11.s64 + 29920;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822f0208
	ctx.lr = 0x82EE7554;
	sub_822F0208(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee756c
	if (ctx.cr0.eq) goto loc_82EE756C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x824fe010
	ctx.lr = 0x82EE756C;
	sub_824FE010(ctx, base);
loc_82EE756C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// b 0x82ee7598
	goto loc_82EE7598;
loc_82EE7578:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee74e0
	ctx.lr = 0x82EE7580;
	sub_82EE74E0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee7594
	if (ctx.cr0.eq) goto loc_82EE7594;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x824fe010
	ctx.lr = 0x82EE7594;
	sub_824FE010(ctx, base);
loc_82EE7594:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82EE7598:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE75A8"))) PPC_WEAK_FUNC(sub_82EE75A8);
PPC_FUNC_IMPL(__imp__sub_82EE75A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ef4328
	ctx.lr = 0x82EE75C8;
	sub_82EF4328(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE75D8"))) PPC_WEAK_FUNC(sub_82EE75D8);
PPC_FUNC_IMPL(__imp__sub_82EE75D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ef33e0
	ctx.lr = 0x82EE75F8;
	sub_82EF33E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7608"))) PPC_WEAK_FUNC(sub_82EE7608);
PPC_FUNC_IMPL(__imp__sub_82EE7608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ef3560
	ctx.lr = 0x82EE7628;
	sub_82EF3560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7638"))) PPC_WEAK_FUNC(sub_82EE7638);
PPC_FUNC_IMPL(__imp__sub_82EE7638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ef4ee8
	ctx.lr = 0x82EE7658;
	sub_82EF4EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7668"))) PPC_WEAK_FUNC(sub_82EE7668);
PPC_FUNC_IMPL(__imp__sub_82EE7668) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee7df8
	ctx.lr = 0x82EE76A4;
	sub_82EE7DF8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ee76f8
	if (!ctx.cr6.lt) goto loc_82EE76F8;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29288(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29288);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee76f8
	if (!ctx.cr0.eq) goto loc_82EE76F8;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29288
	ctx.r31.s64 = ctx.r11.s64 + -29288;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14988
	ctx.r6.s64 = ctx.r11.s64 + -14988;
	// li r5,13
	ctx.r5.s64 = 13;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE76E4;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE76EC;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee76f8
	if (!ctx.cr0.eq) goto loc_82EE76F8;
	// twi 31,r0,22
loc_82EE76F8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ee7714
	if (!ctx.cr6.gt) goto loc_82EE7714;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee7e70
	ctx.lr = 0x82EE7714;
	sub_82EE7E70(ctx, base);
loc_82EE7714:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
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

__attribute__((alias("__imp__sub_82EE772C"))) PPC_WEAK_FUNC(sub_82EE772C);
PPC_FUNC_IMPL(__imp__sub_82EE772C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7730"))) PPC_WEAK_FUNC(sub_82EE7730);
PPC_FUNC_IMPL(__imp__sub_82EE7730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7a30
	ctx.lr = 0x82EE7748;
	sub_82EE7A30(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee7e48
	ctx.lr = 0x82EE7754;
	sub_82EE7E48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7764"))) PPC_WEAK_FUNC(sub_82EE7764);
PPC_FUNC_IMPL(__imp__sub_82EE7764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7768"))) PPC_WEAK_FUNC(sub_82EE7768);
PPC_FUNC_IMPL(__imp__sub_82EE7768) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee8070
	ctx.lr = 0x82EE778C;
	sub_82EE8070(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82ee77e0
	if (ctx.cr6.lt) goto loc_82EE77E0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29287(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29287);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee77e0
	if (!ctx.cr0.eq) goto loc_82EE77E0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29287
	ctx.r31.s64 = ctx.r11.s64 + -29287;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14976
	ctx.r6.s64 = ctx.r11.s64 + -14976;
	// li r5,25
	ctx.r5.s64 = 25;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4928
	ctx.lr = 0x82EE77CC;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE77D4;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee77e0
	if (!ctx.cr0.eq) goto loc_82EE77E0;
	// twi 31,r0,22
loc_82EE77E0:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee80b8
	ctx.lr = 0x82EE77F0;
	sub_82EE80B8(ctx, base);
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

__attribute__((alias("__imp__sub_82EE7804"))) PPC_WEAK_FUNC(sub_82EE7804);
PPC_FUNC_IMPL(__imp__sub_82EE7804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7808"))) PPC_WEAK_FUNC(sub_82EE7808);
PPC_FUNC_IMPL(__imp__sub_82EE7808) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee79f8
	ctx.lr = 0x82EE7830;
	sub_82EE79F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82cbdc40
	ctx.lr = 0x82EE785C;
	sub_82CBDC40(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee78ac
	if (ctx.cr6.eq) goto loc_82EE78AC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x82ee7898
	if (ctx.cr6.eq) goto loc_82EE7898;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// ori r10,r10,87
	ctx.r10.u64 = ctx.r10.u64 | 87;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee78a0
	if (ctx.cr6.eq) goto loc_82EE78A0;
	// b 0x82ee78c8
	goto loc_82EE78C8;
loc_82EE7898:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ee7918
	goto loc_82EE7918;
loc_82EE78A0:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// b 0x82ee7918
	goto loc_82EE7918;
loc_82EE78AC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee7ab0
	ctx.lr = 0x82EE78C0;
	sub_82EE7AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee7918
	goto loc_82EE7918;
loc_82EE78C8:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29286(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29286);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7910
	if (!ctx.cr0.eq) goto loc_82EE7910;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29286
	ctx.r31.s64 = ctx.r11.s64 + -29286;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,5664
	ctx.r6.s64 = ctx.r11.s64 + 5664;
	// li r5,61
	ctx.r5.s64 = 61;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ee4928
	ctx.lr = 0x82EE78FC;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE7904;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7910
	if (!ctx.cr0.eq) goto loc_82EE7910;
	// twi 31,r0,22
loc_82EE7910:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = ctx.r11.u64 | 16389;
loc_82EE7918:
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

__attribute__((alias("__imp__sub_82EE792C"))) PPC_WEAK_FUNC(sub_82EE792C);
PPC_FUNC_IMPL(__imp__sub_82EE792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7930"))) PPC_WEAK_FUNC(sub_82EE7930);
PPC_FUNC_IMPL(__imp__sub_82EE7930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ee7958
	if (!ctx.cr6.eq) goto loc_82EE7958;
	// b 0x82ee7970
	goto loc_82EE7970;
	// b 0x82ee7970
	goto loc_82EE7970;
loc_82EE7958:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ee7970
	if (!ctx.cr6.eq) goto loc_82EE7970;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7bf8
	ctx.lr = 0x82EE7970;
	sub_82EE7BF8(ctx, base);
loc_82EE7970:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7980"))) PPC_WEAK_FUNC(sub_82EE7980);
PPC_FUNC_IMPL(__imp__sub_82EE7980) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee7a30
	ctx.lr = 0x82EE79A4;
	sub_82EE7A30(ctx, base);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee7fc8
	ctx.lr = 0x82EE79BC;
	sub_82EE7FC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ee81f0
	ctx.lr = 0x82EE79CC;
	sub_82EE81F0(ctx, base);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee8108
	ctx.lr = 0x82EE79E0;
	sub_82EE8108(ctx, base);
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

__attribute__((alias("__imp__sub_82EE79F8"))) PPC_WEAK_FUNC(sub_82EE79F8);
PPC_FUNC_IMPL(__imp__sub_82EE79F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7a30
	ctx.lr = 0x82EE7A10;
	sub_82EE7A30(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee8190
	ctx.lr = 0x82EE7A1C;
	sub_82EE8190(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7A2C"))) PPC_WEAK_FUNC(sub_82EE7A2C);
PPC_FUNC_IMPL(__imp__sub_82EE7A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7A30"))) PPC_WEAK_FUNC(sub_82EE7A30);
PPC_FUNC_IMPL(__imp__sub_82EE7A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7a94
	if (ctx.cr6.eq) goto loc_82EE7A94;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ee7a7c
	if (!ctx.cr6.eq) goto loc_82EE7A7C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82ee7a7c
	if (!ctx.cr6.eq) goto loc_82EE7A7C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82cbcf80
	ctx.lr = 0x82EE7A7C;
	sub_82CBCF80(ctx, base);
loc_82EE7A7C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cbbf60
	ctx.lr = 0x82EE7A88;
	sub_82CBBF60(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82EE7A94:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7AB0"))) PPC_WEAK_FUNC(sub_82EE7AB0);
PPC_FUNC_IMPL(__imp__sub_82EE7AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee7b1c
	if (!ctx.cr6.eq) goto loc_82EE7B1C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29284(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29284);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7b1c
	if (!ctx.cr0.eq) goto loc_82EE7B1C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29284
	ctx.r31.s64 = ctx.r11.s64 + -29284;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14948
	ctx.r6.s64 = ctx.r11.s64 + -14948;
	// li r5,128
	ctx.r5.s64 = 128;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ee4928
	ctx.lr = 0x82EE7B08;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE7B10;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7b1c
	if (!ctx.cr0.eq) goto loc_82EE7B1C;
	// twi 31,r0,22
loc_82EE7B1C:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ca3190
	ctx.lr = 0x82EE7B30;
	sub_82CA3190(ctx, base);
	// li r5,312
	ctx.r5.s64 = 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x82ca3190
	ctx.lr = 0x82EE7B44;
	sub_82CA3190(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,312
	ctx.r5.s64 = 312;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cbe018
	ctx.lr = 0x82EE7B68;
	sub_82CBE018(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82ee7b90
	if (!ctx.cr6.eq) goto loc_82EE7B90;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82ee7bf8
	ctx.lr = 0x82EE7B8C;
	sub_82EE7BF8(ctx, base);
	// b 0x82ee7be0
	goto loc_82EE7BE0;
loc_82EE7B90:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29285(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29285);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7bd8
	if (!ctx.cr0.eq) goto loc_82EE7BD8;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29285
	ctx.r31.s64 = ctx.r11.s64 + -29285;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,5664
	ctx.r6.s64 = ctx.r11.s64 + 5664;
	// li r5,140
	ctx.r5.s64 = 140;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ee4928
	ctx.lr = 0x82EE7BC4;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE7BCC;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7bd8
	if (!ctx.cr0.eq) goto loc_82EE7BD8;
	// twi 31,r0,22
loc_82EE7BD8:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82ee7a30
	ctx.lr = 0x82EE7BE0;
	sub_82EE7A30(ctx, base);
loc_82EE7BE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7BF4"))) PPC_WEAK_FUNC(sub_82EE7BF4);
PPC_FUNC_IMPL(__imp__sub_82EE7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7BF8"))) PPC_WEAK_FUNC(sub_82EE7BF8);
PPC_FUNC_IMPL(__imp__sub_82EE7BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ee7c64
	if (ctx.cr6.eq) goto loc_82EE7C64;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29282(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29282);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7c64
	if (!ctx.cr0.eq) goto loc_82EE7C64;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29282
	ctx.r31.s64 = ctx.r11.s64 + -29282;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14916
	ctx.r6.s64 = ctx.r11.s64 + -14916;
	// li r5,147
	ctx.r5.s64 = 147;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ee4928
	ctx.lr = 0x82EE7C50;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE7C58;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7c64
	if (!ctx.cr0.eq) goto loc_82EE7C64;
	// twi 31,r0,22
loc_82EE7C64:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82ee7de0
	if (ctx.cr6.eq) goto loc_82EE7DE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82cbc558
	ctx.lr = 0x82EE7C90;
	sub_82CBC558(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82ee7cac
	if (ctx.cr6.eq) goto loc_82EE7CAC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,996
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 996, ctx.xer);
	// bne cr6,0x82ee7cb0
	if (!ctx.cr6.eq) goto loc_82EE7CB0;
loc_82EE7CAC:
	// b 0x82ee7de0
	goto loc_82EE7DE0;
loc_82EE7CB0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee7dcc
	if (!ctx.cr6.eq) goto loc_82EE7DCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82ee7d18
	if (!ctx.cr6.gt) goto loc_82EE7D18;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29283(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29283);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7d18
	if (!ctx.cr0.eq) goto loc_82EE7D18;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29283
	ctx.r31.s64 = ctx.r11.s64 + -29283;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14924
	ctx.r6.s64 = ctx.r11.s64 + -14924;
	// li r5,159
	ctx.r5.s64 = 159;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ee4928
	ctx.lr = 0x82EE7D04;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE7D0C;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee7d18
	if (!ctx.cr0.eq) goto loc_82EE7D18;
	// twi 31,r0,22
loc_82EE7D18:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ee7dcc
	if (!ctx.cr6.gt) goto loc_82EE7DCC;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee8070
	ctx.lr = 0x82EE7D30;
	sub_82EE8070(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee8008
	ctx.lr = 0x82EE7D4C;
	sub_82EE8008(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x82ee7d78
	goto loc_82EE7D78;
loc_82EE7D60:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82EE7D78:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ee7dc0
	if (!ctx.cr6.lt) goto loc_82EE7DC0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee80b8
	ctx.lr = 0x82EE7D98;
	sub_82EE80B8(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x82ca2c60
	ctx.lr = 0x82EE7DBC;
	sub_82CA2C60(ctx, base);
	// b 0x82ee7d60
	goto loc_82EE7D60;
loc_82EE7DC0:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee7ab0
	ctx.lr = 0x82EE7DC8;
	sub_82EE7AB0(ctx, base);
	// b 0x82ee7de0
	goto loc_82EE7DE0;
loc_82EE7DCC:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee7a30
	ctx.lr = 0x82EE7DD4;
	sub_82EE7A30(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82EE7DE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7DF4"))) PPC_WEAK_FUNC(sub_82EE7DF4);
PPC_FUNC_IMPL(__imp__sub_82EE7DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7DF8"))) PPC_WEAK_FUNC(sub_82EE7DF8);
PPC_FUNC_IMPL(__imp__sub_82EE7DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ffe110
	ctx.lr = 0x82EE7E18;
	sub_82FFE110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee6dd8
	ctx.lr = 0x82EE7E24;
	sub_82EE6DD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8488
	ctx.lr = 0x82EE7E30;
	sub_82EE8488(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7E44"))) PPC_WEAK_FUNC(sub_82EE7E44);
PPC_FUNC_IMPL(__imp__sub_82EE7E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE7E48"))) PPC_WEAK_FUNC(sub_82EE7E48);
PPC_FUNC_IMPL(__imp__sub_82EE7E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8580
	ctx.lr = 0x82EE7E60;
	sub_82EE8580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7E70"))) PPC_WEAK_FUNC(sub_82EE7E70);
PPC_FUNC_IMPL(__imp__sub_82EE7E70) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee83d0
	ctx.lr = 0x82EE7E8C;
	sub_82EE83D0(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee7ea0
	if (!ctx.cr6.lt) goto loc_82EE7EA0;
	// bl 0x82ee8618
	ctx.lr = 0x82EE7E9C;
	sub_82EE8618(ctx, base);
	// b 0x82ee7fb8
	goto loc_82EE7FB8;
loc_82EE7EA0:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee8240
	ctx.lr = 0x82EE7EA8;
	sub_82EE8240(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee7fb8
	if (!ctx.cr6.lt) goto loc_82EE7FB8;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee8668
	ctx.lr = 0x82EE7EC0;
	sub_82EE8668(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee8288
	ctx.lr = 0x82EE7ED8;
	sub_82EE8288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee7fc8
	ctx.lr = 0x82EE7EF4;
	sub_82EE7FC8(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82ee8c70
	ctx.lr = 0x82EE7F08;
	sub_82EE8C70(ctx, base);
	// b 0x82ee7f1c
	goto loc_82EE7F1C;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ffcf48
	ctx.lr = 0x82EE7F1C;
	sub_82FFCF48(ctx, base);
loc_82EE7F1C:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee8070
	ctx.lr = 0x82EE7F24;
	sub_82EE8070(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee7f7c
	if (ctx.cr6.eq) goto loc_82EE7F7C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee8548
	ctx.lr = 0x82EE7F50;
	sub_82EE8548(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r5,r11,r10
	ctx.r5.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ffcf48
	ctx.lr = 0x82EE7F7C;
	sub_82FFCF48(ctx, base);
loc_82EE7F7C:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82EE7FB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7FC8"))) PPC_WEAK_FUNC(sub_82EE7FC8);
PPC_FUNC_IMPL(__imp__sub_82EE7FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8698
	ctx.lr = 0x82EE7FF0;
	sub_82EE8698(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8004"))) PPC_WEAK_FUNC(sub_82EE8004);
PPC_FUNC_IMPL(__imp__sub_82EE8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8008"))) PPC_WEAK_FUNC(sub_82EE8008);
PPC_FUNC_IMPL(__imp__sub_82EE8008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r3.u32);
	// stw r4,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r4.u32);
	// li r5,312
	ctx.r5.s64 = 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82ca3190
	ctx.lr = 0x82EE802C;
	sub_82CA3190(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// li r5,264
	ctx.r5.s64 = 264;
	// bl 0x82ca2c60
	ctx.lr = 0x82EE803C;
	sub_82CA2C60(ctx, base);
	// ld r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// ld r6,360(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// ld r7,368(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// ld r8,376(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// ld r9,384(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// ld r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// lwz r4,700(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r3,692(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// bl 0x82ee82c8
	ctx.lr = 0x82EE8060;
	sub_82EE82C8(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8070"))) PPC_WEAK_FUNC(sub_82EE8070);
PPC_FUNC_IMPL(__imp__sub_82EE8070) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee8090
	if (!ctx.cr6.eq) goto loc_82EE8090;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82ee80b0
	goto loc_82EE80B0;
loc_82EE8090:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82EE80B0:
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE80B8"))) PPC_WEAK_FUNC(sub_82EE80B8);
PPC_FUNC_IMPL(__imp__sub_82EE80B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8070
	ctx.lr = 0x82EE80D4;
	sub_82EE8070(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82ee80e4
	if (ctx.cr6.lt) goto loc_82EE80E4;
	// twi 31,r0,22
loc_82EE80E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8108"))) PPC_WEAK_FUNC(sub_82EE8108);
PPC_FUNC_IMPL(__imp__sub_82EE8108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// bl 0x82ee8cb0
	ctx.lr = 0x82EE8138;
	sub_82EE8CB0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,-312
	ctx.r4.s64 = ctx.r11.s64 + -312;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee8548
	ctx.lr = 0x82EE8154;
	sub_82EE8548(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8190"))) PPC_WEAK_FUNC(sub_82EE8190);
PPC_FUNC_IMPL(__imp__sub_82EE8190) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee8288
	ctx.lr = 0x82EE81AC;
	sub_82EE8288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82ee7fc8
	ctx.lr = 0x82EE81C8;
	sub_82EE7FC8(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82ee83f8
	ctx.lr = 0x82EE81DC;
	sub_82EE83F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE81EC"))) PPC_WEAK_FUNC(sub_82EE81EC);
PPC_FUNC_IMPL(__imp__sub_82EE81EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE81F0"))) PPC_WEAK_FUNC(sub_82EE81F0);
PPC_FUNC_IMPL(__imp__sub_82EE81F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee86d8
	ctx.lr = 0x82EE8220;
	sub_82EE86D8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8240"))) PPC_WEAK_FUNC(sub_82EE8240);
PPC_FUNC_IMPL(__imp__sub_82EE8240) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee8260
	if (!ctx.cr6.eq) goto loc_82EE8260;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82ee8280
	goto loc_82EE8280;
loc_82EE8260:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82EE8280:
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8288"))) PPC_WEAK_FUNC(sub_82EE8288);
PPC_FUNC_IMPL(__imp__sub_82EE8288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8698
	ctx.lr = 0x82EE82B0;
	sub_82EE8698(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE82C4"))) PPC_WEAK_FUNC(sub_82EE82C4);
PPC_FUNC_IMPL(__imp__sub_82EE82C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE82C8"))) PPC_WEAK_FUNC(sub_82EE82C8);
PPC_FUNC_IMPL(__imp__sub_82EE82C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee8070
	ctx.lr = 0x82EE8304;
	sub_82EE8070(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee8350
	if (!ctx.cr6.lt) goto loc_82EE8350;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee8070
	ctx.lr = 0x82EE8320;
	sub_82EE8070(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee8288
	ctx.lr = 0x82EE8338;
	sub_82EE8288(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82ee8710
	ctx.lr = 0x82EE834C;
	sub_82EE8710(ctx, base);
	// b 0x82ee83b8
	goto loc_82EE83B8;
loc_82EE8350:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee8070
	ctx.lr = 0x82EE8358;
	sub_82EE8070(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ee83b8
	if (!ctx.cr6.lt) goto loc_82EE83B8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee8288
	ctx.lr = 0x82EE8370;
	sub_82EE8288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ee7fc8
	ctx.lr = 0x82EE8394;
	sub_82EE7FC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ee81f0
	ctx.lr = 0x82EE83A4;
	sub_82EE81F0(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82ee83f8
	ctx.lr = 0x82EE83B8;
	sub_82EE83F8(ctx, base);
loc_82EE83B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82EE83D0"))) PPC_WEAK_FUNC(sub_82EE83D0);
PPC_FUNC_IMPL(__imp__sub_82EE83D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8ac8
	ctx.lr = 0x82EE83E8;
	sub_82EE8AC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE83F8"))) PPC_WEAK_FUNC(sub_82EE83F8);
PPC_FUNC_IMPL(__imp__sub_82EE83F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ffd328
	ctx.lr = 0x82EE8420;
	sub_82FFD328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee8460
	if (ctx.cr0.eq) goto loc_82EE8460;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ee8cb0
	ctx.lr = 0x82EE843C;
	sub_82EE8CB0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee8548
	ctx.lr = 0x82EE8454;
	sub_82EE8548(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82EE8460:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8488"))) PPC_WEAK_FUNC(sub_82EE8488);
PPC_FUNC_IMPL(__imp__sub_82EE8488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee84d8
	if (!ctx.cr6.eq) goto loc_82EE84D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee8538
	goto loc_82EE8538;
	// b 0x82ee8534
	goto loc_82EE8534;
loc_82EE84D8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee83d0
	ctx.lr = 0x82EE84E0;
	sub_82EE83D0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee84f4
	if (!ctx.cr6.lt) goto loc_82EE84F4;
	// bl 0x82ee8618
	ctx.lr = 0x82EE84F0;
	sub_82EE8618(ctx, base);
	// b 0x82ee8534
	goto loc_82EE8534;
loc_82EE84F4:
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8668
	ctx.lr = 0x82EE8500;
	sub_82EE8668(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82EE8534:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EE8538:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8548"))) PPC_WEAK_FUNC(sub_82EE8548);
PPC_FUNC_IMPL(__imp__sub_82EE8548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee8d48
	ctx.lr = 0x82EE8570;
	sub_82EE8D48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8580"))) PPC_WEAK_FUNC(sub_82EE8580);
PPC_FUNC_IMPL(__imp__sub_82EE8580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee85e4
	if (ctx.cr6.eq) goto loc_82EE85E4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8548
	ctx.lr = 0x82EE85B8;
	sub_82EE8548(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r5,r11,r10
	ctx.r5.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ffcf48
	ctx.lr = 0x82EE85E4;
	sub_82FFCF48(ctx, base);
loc_82EE85E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8618"))) PPC_WEAK_FUNC(sub_82EE8618);
PPC_FUNC_IMPL(__imp__sub_82EE8618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,5628
	ctx.r4.s64 = ctx.r11.s64 + 5628;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822f2020
	ctx.lr = 0x82EE8634;
	sub_822F2020(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1ec0
	ctx.lr = 0x82EE8640;
	sub_822F1EC0(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82EE8644;
	sub_822F1F00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1e28
	ctx.lr = 0x82EE864C;
	sub_822F1E28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82171810
	ctx.lr = 0x82EE8654;
	sub_82171810(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8664"))) PPC_WEAK_FUNC(sub_82EE8664);
PPC_FUNC_IMPL(__imp__sub_82EE8664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8668"))) PPC_WEAK_FUNC(sub_82EE8668);
PPC_FUNC_IMPL(__imp__sub_82EE8668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee8d98
	ctx.lr = 0x82EE8688;
	sub_82EE8D98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8698"))) PPC_WEAK_FUNC(sub_82EE8698);
PPC_FUNC_IMPL(__imp__sub_82EE8698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8b00
	ctx.lr = 0x82EE86C0;
	sub_82EE8B00(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE86D4"))) PPC_WEAK_FUNC(sub_82EE86D4);
PPC_FUNC_IMPL(__imp__sub_82EE86D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE86D8"))) PPC_WEAK_FUNC(sub_82EE86D8);
PPC_FUNC_IMPL(__imp__sub_82EE86D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee8b88
	ctx.lr = 0x82EE86F8;
	sub_82EE8B88(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE870C"))) PPC_WEAK_FUNC(sub_82EE870C);
PPC_FUNC_IMPL(__imp__sub_82EE870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8710"))) PPC_WEAK_FUNC(sub_82EE8710);
PPC_FUNC_IMPL(__imp__sub_82EE8710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r3.u32);
	// std r4,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r4.u64);
	// stw r5,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r5.u32);
	// stw r6,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r6.u32);
	// lwz r4,476(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x82ca2c60
	ctx.lr = 0x82EE8740;
	sub_82CA2C60(ctx, base);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8240
	ctx.lr = 0x82EE8748;
	sub_82EE8240(ctx, base);
	// stw r3,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r3.u32);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee875c
	if (!ctx.cr6.eq) goto loc_82EE875C;
	// b 0x82ee8ab0
	goto loc_82EE8AB0;
loc_82EE875C:
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee83d0
	ctx.lr = 0x82EE8764;
	sub_82EE83D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8070
	ctx.lr = 0x82EE8770;
	sub_82EE8070(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ee8788
	if (!ctx.cr6.lt) goto loc_82EE8788;
	// bl 0x82ee8618
	ctx.lr = 0x82EE8784;
	sub_82EE8618(ctx, base);
	// b 0x82ee8ab0
	goto loc_82EE8AB0;
loc_82EE8788:
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8070
	ctx.lr = 0x82EE8790;
	sub_82EE8070(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee8954
	if (!ctx.cr6.lt) goto loc_82EE8954;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee83d0
	ctx.lr = 0x82EE87AC;
	sub_82EE83D0(ctx, base);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// li r10,2
	ctx.r10.s64 = 2;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ee87d4
	if (!ctx.cr6.lt) goto loc_82EE87D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// b 0x82ee87ec
	goto loc_82EE87EC;
loc_82EE87D4:
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// li r10,2
	ctx.r10.s64 = 2;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
loc_82EE87EC:
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8070
	ctx.lr = 0x82EE87FC;
	sub_82EE8070(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ee8824
	if (!ctx.cr6.lt) goto loc_82EE8824;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8070
	ctx.lr = 0x82EE8818;
	sub_82EE8070(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
loc_82EE8824:
	// lwz r4,392(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8668
	ctx.lr = 0x82EE8830;
	sub_82EE8668(ctx, base);
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
	// lwz r6,400(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r5,460(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8e10
	ctx.lr = 0x82EE8854;
	sub_82EE8E10(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8c20
	ctx.lr = 0x82EE886C;
	sub_82EE8C20(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// lwz r6,396(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8e10
	ctx.lr = 0x82EE8888;
	sub_82EE8E10(ctx, base);
	// b 0x82ee88ac
	goto loc_82EE88AC;
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8548
	ctx.lr = 0x82EE889C;
	sub_82EE8548(ctx, base);
	// lwz r5,392(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ffcf48
	ctx.lr = 0x82EE88AC;
	sub_82FFCF48(ctx, base);
loc_82EE88AC:
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8070
	ctx.lr = 0x82EE88B4;
	sub_82EE8070(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee8914
	if (ctx.cr6.eq) goto loc_82EE8914;
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8548
	ctx.lr = 0x82EE88E8;
	sub_82EE8548(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r5,r11,r10
	ctx.r5.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ffcf48
	ctx.lr = 0x82EE8914;
	sub_82FFCF48(ctx, base);
loc_82EE8914:
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82ee8ab0
	goto loc_82EE8AB0;
loc_82EE8954:
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ee8a40
	if (!ctx.cr6.lt) goto loc_82EE8A40;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8e10
	ctx.lr = 0x82EE899C;
	sub_82EE8E10(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8c20
	ctx.lr = 0x82EE89D0;
	sub_82EE8C20(ctx, base);
	// b 0x82ee8a00
	goto loc_82EE8A00;
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8548
	ctx.lr = 0x82EE8A00;
	sub_82EE8548(ctx, base);
loc_82EE8A00:
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82ee8e50
	ctx.lr = 0x82EE8A3C;
	sub_82EE8E50(ctx, base);
	// b 0x82ee8ab0
	goto loc_82EE8AB0;
loc_82EE8A40:
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r11.u32);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82ee8e10
	ctx.lr = 0x82EE8A70;
	sub_82EE8E10(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82ee8eb0
	ctx.lr = 0x82EE8A94;
	sub_82EE8EB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82ee8e50
	ctx.lr = 0x82EE8AB0;
	sub_82EE8E50(ctx, base);
loc_82EE8AB0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8AC4"))) PPC_WEAK_FUNC(sub_82EE8AC4);
PPC_FUNC_IMPL(__imp__sub_82EE8AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8AC8"))) PPC_WEAK_FUNC(sub_82EE8AC8);
PPC_FUNC_IMPL(__imp__sub_82EE8AC8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ee8af0
	if (!ctx.cr6.gt) goto loc_82EE8AF0;
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// b 0x82ee8af8
	goto loc_82EE8AF8;
loc_82EE8AF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
loc_82EE8AF8:
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8B00"))) PPC_WEAK_FUNC(sub_82EE8B00);
PPC_FUNC_IMPL(__imp__sub_82EE8B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ffe258
	ctx.lr = 0x82EE8B20;
	sub_82FFE258(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee8b54
	if (ctx.cr6.eq) goto loc_82EE8B54;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ee8b54
	if (ctx.cr6.gt) goto loc_82EE8B54;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ee8b58
	if (!ctx.cr6.gt) goto loc_82EE8B58;
loc_82EE8B54:
	// twi 31,r0,22
loc_82EE8B58:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8B84"))) PPC_WEAK_FUNC(sub_82EE8B84);
PPC_FUNC_IMPL(__imp__sub_82EE8B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8B88"))) PPC_WEAK_FUNC(sub_82EE8B88);
PPC_FUNC_IMPL(__imp__sub_82EE8B88) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee8ba4
	if (!ctx.cr6.eq) goto loc_82EE8BA4;
	// twi 31,r0,22
loc_82EE8BA4:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ee8bf4
	if (ctx.cr6.gt) goto loc_82EE8BF4;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ee8bf8
	if (!ctx.cr6.lt) goto loc_82EE8BF8;
loc_82EE8BF4:
	// twi 31,r0,22
loc_82EE8BF8:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// mulli r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 * 312;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8C1C"))) PPC_WEAK_FUNC(sub_82EE8C1C);
PPC_FUNC_IMPL(__imp__sub_82EE8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8C20"))) PPC_WEAK_FUNC(sub_82EE8C20);
PPC_FUNC_IMPL(__imp__sub_82EE8C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee8f48
	ctx.lr = 0x82EE8C50;
	sub_82EE8F48(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8C70"))) PPC_WEAK_FUNC(sub_82EE8C70);
PPC_FUNC_IMPL(__imp__sub_82EE8C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x82ee8fb8
	ctx.lr = 0x82EE8CA0;
	sub_82EE8FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8CB0"))) PPC_WEAK_FUNC(sub_82EE8CB0);
PPC_FUNC_IMPL(__imp__sub_82EE8CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EE8CB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82eee428
	ctx.lr = 0x82EE8CE8;
	sub_82EEE428(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82ee9070
	ctx.lr = 0x82EE8D0C;
	sub_82EE9070(ctx, base);
	// lbz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82ee9040
	ctx.lr = 0x82EE8D1C;
	sub_82EE9040(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82ee9040
	ctx.lr = 0x82EE8D28;
	sub_82EE9040(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// bl 0x82ee9088
	ctx.lr = 0x82EE8D40;
	sub_82EE9088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EE8D48"))) PPC_WEAK_FUNC(sub_82EE8D48);
PPC_FUNC_IMPL(__imp__sub_82EE8D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82eee428
	ctx.lr = 0x82EE8D6C;
	sub_82EEE428(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9150
	ctx.lr = 0x82EE8D84;
	sub_82EE9150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8D94"))) PPC_WEAK_FUNC(sub_82EE8D94);
PPC_FUNC_IMPL(__imp__sub_82EE8D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8D98"))) PPC_WEAK_FUNC(sub_82EE8D98);
PPC_FUNC_IMPL(__imp__sub_82EE8D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82ee8dc4
	if (ctx.cr6.gt) goto loc_82EE8DC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x82ee8df4
	goto loc_82EE8DF4;
loc_82EE8DC4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,-1
	ctx.r10.s64 = -1;
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// cmplwi cr6,r11,312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 312, ctx.xer);
	// bge cr6,0x82ee8df4
	if (!ctx.cr6.lt) goto loc_82EE8DF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1d48
	ctx.lr = 0x82EE8DE8;
	sub_822F1D48(ctx, base);
	// bl 0x822f1f00
	ctx.lr = 0x82EE8DEC;
	sub_822F1F00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f1cf0
	ctx.lr = 0x82EE8DF4;
	sub_822F1CF0(ctx, base);
loc_82EE8DF4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 * 312;
	// bl 0x8217dd10
	ctx.lr = 0x82EE8E00;
	sub_8217DD10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8E10"))) PPC_WEAK_FUNC(sub_82EE8E10);
PPC_FUNC_IMPL(__imp__sub_82EE8E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee91b0
	ctx.lr = 0x82EE8E40;
	sub_82EE91B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8E50"))) PPC_WEAK_FUNC(sub_82EE8E50);
PPC_FUNC_IMPL(__imp__sub_82EE8E50) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82ee9040
	ctx.lr = 0x82EE8E7C;
	sub_82EE9040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82ee9040
	ctx.lr = 0x82EE8E88;
	sub_82EE9040(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ee9238
	ctx.lr = 0x82EE8E94;
	sub_82EE9238(ctx, base);
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

__attribute__((alias("__imp__sub_82EE8EAC"))) PPC_WEAK_FUNC(sub_82EE8EAC);
PPC_FUNC_IMPL(__imp__sub_82EE8EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8EB0"))) PPC_WEAK_FUNC(sub_82EE8EB0);
PPC_FUNC_IMPL(__imp__sub_82EE8EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EE8EB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82ee9298
	ctx.lr = 0x82EE8EE4;
	sub_82EE9298(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82ee9070
	ctx.lr = 0x82EE8F08;
	sub_82EE9070(ctx, base);
	// lbz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82ee9040
	ctx.lr = 0x82EE8F18;
	sub_82EE9040(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82ee9040
	ctx.lr = 0x82EE8F24;
	sub_82EE9040(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// bl 0x82ee92a8
	ctx.lr = 0x82EE8F3C;
	sub_82EE92A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EE8F44"))) PPC_WEAK_FUNC(sub_82EE8F44);
PPC_FUNC_IMPL(__imp__sub_82EE8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8F48"))) PPC_WEAK_FUNC(sub_82EE8F48);
PPC_FUNC_IMPL(__imp__sub_82EE8F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82eee428
	ctx.lr = 0x82EE8F84;
	sub_82EEE428(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9320
	ctx.lr = 0x82EE8FA4;
	sub_82EE9320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE8FB4"))) PPC_WEAK_FUNC(sub_82EE8FB4);
PPC_FUNC_IMPL(__imp__sub_82EE8FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE8FB8"))) PPC_WEAK_FUNC(sub_82EE8FB8);
PPC_FUNC_IMPL(__imp__sub_82EE8FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EE8FC0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82ee9298
	ctx.lr = 0x82EE8FF0;
	sub_82EE9298(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82ee9408
	ctx.lr = 0x82EE9010;
	sub_82EE9408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ee9408
	ctx.lr = 0x82EE901C;
	sub_82EE9408(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// bl 0x82ee9438
	ctx.lr = 0x82EE9034;
	sub_82EE9438(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EE903C"))) PPC_WEAK_FUNC(sub_82EE903C);
PPC_FUNC_IMPL(__imp__sub_82EE903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9040"))) PPC_WEAK_FUNC(sub_82EE9040);
PPC_FUNC_IMPL(__imp__sub_82EE9040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9480
	ctx.lr = 0x82EE905C;
	sub_82EE9480(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE906C"))) PPC_WEAK_FUNC(sub_82EE906C);
PPC_FUNC_IMPL(__imp__sub_82EE906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9070"))) PPC_WEAK_FUNC(sub_82EE9070);
PPC_FUNC_IMPL(__imp__sub_82EE9070) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9084"))) PPC_WEAK_FUNC(sub_82EE9084);
PPC_FUNC_IMPL(__imp__sub_82EE9084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9088"))) PPC_WEAK_FUNC(sub_82EE9088);
PPC_FUNC_IMPL(__imp__sub_82EE9088) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stb r6,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r6.u8);
	// stb r7,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r7.u8);
	// stb r8,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r8.u8);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r1,85
	ctx.r11.s64 = ctx.r1.s64 + 85;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// lbz r31,86(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82ee9040
	ctx.lr = 0x82EE9118;
	sub_82EE9040(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r7,97(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x82ee9498
	ctx.lr = 0x82EE9134;
	sub_82EE9498(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82EE914C"))) PPC_WEAK_FUNC(sub_82EE914C);
PPC_FUNC_IMPL(__imp__sub_82EE914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9150"))) PPC_WEAK_FUNC(sub_82EE9150);
PPC_FUNC_IMPL(__imp__sub_82EE9150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// b 0x82ee917c
	goto loc_82EE917C;
loc_82EE9170:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82EE917C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee919c
	if (ctx.cr6.eq) goto loc_82EE919C;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ffe4d0
	ctx.lr = 0x82EE9198;
	sub_82FFE4D0(ctx, base);
	// b 0x82ee9170
	goto loc_82EE9170;
loc_82EE919C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE91AC"))) PPC_WEAK_FUNC(sub_82EE91AC);
PPC_FUNC_IMPL(__imp__sub_82EE91AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE91B0"))) PPC_WEAK_FUNC(sub_82EE91B0);
PPC_FUNC_IMPL(__imp__sub_82EE91B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EE91B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82ee9298
	ctx.lr = 0x82EE91E8;
	sub_82EE9298(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82ee9040
	ctx.lr = 0x82EE9208;
	sub_82EE9040(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82ee9040
	ctx.lr = 0x82EE9214;
	sub_82EE9040(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// bl 0x82ee9438
	ctx.lr = 0x82EE922C;
	sub_82EE9438(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EE9234"))) PPC_WEAK_FUNC(sub_82EE9234);
PPC_FUNC_IMPL(__imp__sub_82EE9234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9238"))) PPC_WEAK_FUNC(sub_82EE9238);
PPC_FUNC_IMPL(__imp__sub_82EE9238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// b 0x82ee9260
	goto loc_82EE9260;
loc_82EE9254:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82EE9260:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee9284
	if (ctx.cr6.eq) goto loc_82EE9284;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x82ca2c60
	ctx.lr = 0x82EE9280;
	sub_82CA2C60(ctx, base);
	// b 0x82ee9254
	goto loc_82EE9254;
loc_82EE9284:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9294"))) PPC_WEAK_FUNC(sub_82EE9294);
PPC_FUNC_IMPL(__imp__sub_82EE9294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9298"))) PPC_WEAK_FUNC(sub_82EE9298);
PPC_FUNC_IMPL(__imp__sub_82EE9298) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lbz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE92A4"))) PPC_WEAK_FUNC(sub_82EE92A4);
PPC_FUNC_IMPL(__imp__sub_82EE92A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE92A8"))) PPC_WEAK_FUNC(sub_82EE92A8);
PPC_FUNC_IMPL(__imp__sub_82EE92A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// stb r7,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r7.u8);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82eee428
	ctx.lr = 0x82EE92EC;
	sub_82EEE428(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,143(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9510
	ctx.lr = 0x82EE930C;
	sub_82EE9510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE931C"))) PPC_WEAK_FUNC(sub_82EE931C);
PPC_FUNC_IMPL(__imp__sub_82EE931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9320"))) PPC_WEAK_FUNC(sub_82EE9320);
PPC_FUNC_IMPL(__imp__sub_82EE9320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stb r7,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r7.u8);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee9368
	goto loc_82EE9368;
loc_82EE9350:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82EE9368:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ee9388
	if (!ctx.cr6.gt) goto loc_82EE9388;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ee93d0
	ctx.lr = 0x82EE9384;
	sub_82EE93D0(ctx, base);
	// b 0x82ee9350
	goto loc_82EE9350;
loc_82EE9388:
	// b 0x82ee93bc
	goto loc_82EE93BC;
	// b 0x82ee939c
	goto loc_82EE939C;
loc_82EE9390:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE939C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee93bc
	if (ctx.cr6.eq) goto loc_82EE93BC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ffe4d0
	ctx.lr = 0x82EE93B8;
	sub_82FFE4D0(ctx, base);
	// b 0x82ee9390
	goto loc_82EE9390;
loc_82EE93BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE93CC"))) PPC_WEAK_FUNC(sub_82EE93CC);
PPC_FUNC_IMPL(__imp__sub_82EE93CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE93D0"))) PPC_WEAK_FUNC(sub_82EE93D0);
PPC_FUNC_IMPL(__imp__sub_82EE93D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ee95d8
	ctx.lr = 0x82EE93F4;
	sub_82EE95D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9404"))) PPC_WEAK_FUNC(sub_82EE9404);
PPC_FUNC_IMPL(__imp__sub_82EE9404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9408"))) PPC_WEAK_FUNC(sub_82EE9408);
PPC_FUNC_IMPL(__imp__sub_82EE9408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9648
	ctx.lr = 0x82EE9424;
	sub_82EE9648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9434"))) PPC_WEAK_FUNC(sub_82EE9434);
PPC_FUNC_IMPL(__imp__sub_82EE9434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9438"))) PPC_WEAK_FUNC(sub_82EE9438);
PPC_FUNC_IMPL(__imp__sub_82EE9438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stb r7,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r7.u8);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9678
	ctx.lr = 0x82EE9470;
	sub_82EE9678(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9480"))) PPC_WEAK_FUNC(sub_82EE9480);
PPC_FUNC_IMPL(__imp__sub_82EE9480) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stb r4,31(r1)
	PPC_STORE_U8(ctx.r1.u32 + 31, ctx.r4.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9494"))) PPC_WEAK_FUNC(sub_82EE9494);
PPC_FUNC_IMPL(__imp__sub_82EE9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9498"))) PPC_WEAK_FUNC(sub_82EE9498);
PPC_FUNC_IMPL(__imp__sub_82EE9498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// stb r7,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r7.u8);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// b 0x82ee94d8
	goto loc_82EE94D8;
loc_82EE94C0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82EE94D8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee94fc
	if (ctx.cr6.eq) goto loc_82EE94FC;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x82ca2c60
	ctx.lr = 0x82EE94F8;
	sub_82CA2C60(ctx, base);
	// b 0x82ee94c0
	goto loc_82EE94C0;
loc_82EE94FC:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9510"))) PPC_WEAK_FUNC(sub_82EE9510);
PPC_FUNC_IMPL(__imp__sub_82EE9510) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stb r6,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r6.u8);
	// stb r7,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r7.u8);
	// stb r8,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r8.u8);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,312
	ctx.r10.s64 = 312;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r1,85
	ctx.r11.s64 = ctx.r1.s64 + 85;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// lbz r31,86(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82ee9040
	ctx.lr = 0x82EE95A0;
	sub_82EE9040(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r7,97(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x82ee9700
	ctx.lr = 0x82EE95BC;
	sub_82EE9700(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82EE95D4"))) PPC_WEAK_FUNC(sub_82EE95D4);
PPC_FUNC_IMPL(__imp__sub_82EE95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE95D8"))) PPC_WEAK_FUNC(sub_82EE95D8);
PPC_FUNC_IMPL(__imp__sub_82EE95D8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x82c2ce58
	ctx.lr = 0x82EE9600;
	sub_82C2CE58(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee962c
	if (ctx.cr6.eq) goto loc_82EE962C;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x82ca2c60
	ctx.lr = 0x82EE9620;
	sub_82CA2C60(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82ee9634
	goto loc_82EE9634;
loc_82EE962C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82EE9634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9644"))) PPC_WEAK_FUNC(sub_82EE9644);
PPC_FUNC_IMPL(__imp__sub_82EE9644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9648"))) PPC_WEAK_FUNC(sub_82EE9648);
PPC_FUNC_IMPL(__imp__sub_82EE9648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ffe658
	ctx.lr = 0x82EE9664;
	sub_82FFE658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9674"))) PPC_WEAK_FUNC(sub_82EE9674);
PPC_FUNC_IMPL(__imp__sub_82EE9674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9678"))) PPC_WEAK_FUNC(sub_82EE9678);
PPC_FUNC_IMPL(__imp__sub_82EE9678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EE9680;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82eee428
	ctx.lr = 0x82EE96B4;
	sub_82EEE428(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82ee9040
	ctx.lr = 0x82EE96D4;
	sub_82EE9040(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82ee9040
	ctx.lr = 0x82EE96E0;
	sub_82EE9040(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// bl 0x82ee9778
	ctx.lr = 0x82EE96F8;
	sub_82EE9778(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EE9700"))) PPC_WEAK_FUNC(sub_82EE9700);
PPC_FUNC_IMPL(__imp__sub_82EE9700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// stb r7,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r7.u8);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
loc_82EE9724:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee9760
	if (ctx.cr6.eq) goto loc_82EE9760;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x82ca2c60
	ctx.lr = 0x82EE975C;
	sub_82CA2C60(ctx, base);
	// b 0x82ee9724
	goto loc_82EE9724;
loc_82EE9760:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9774"))) PPC_WEAK_FUNC(sub_82EE9774);
PPC_FUNC_IMPL(__imp__sub_82EE9774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9778"))) PPC_WEAK_FUNC(sub_82EE9778);
PPC_FUNC_IMPL(__imp__sub_82EE9778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stb r7,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r7.u8);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee97c0
	goto loc_82EE97C0;
loc_82EE97A8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82EE97C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee97e4
	if (ctx.cr6.eq) goto loc_82EE97E4;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ee93d0
	ctx.lr = 0x82EE97E0;
	sub_82EE93D0(ctx, base);
	// b 0x82ee97a8
	goto loc_82EE97A8;
loc_82EE97E4:
	// b 0x82ee9818
	goto loc_82EE9818;
	// b 0x82ee97f8
	goto loc_82EE97F8;
loc_82EE97EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE97F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee9818
	if (ctx.cr6.eq) goto loc_82EE9818;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ffe4d0
	ctx.lr = 0x82EE9814;
	sub_82FFE4D0(ctx, base);
	// b 0x82ee97ec
	goto loc_82EE97EC;
loc_82EE9818:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE982C"))) PPC_WEAK_FUNC(sub_82EE982C);
PPC_FUNC_IMPL(__imp__sub_82EE982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9830"))) PPC_WEAK_FUNC(sub_82EE9830);
PPC_FUNC_IMPL(__imp__sub_82EE9830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EE9838;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// addi r31,r1,224
	ctx.r31.s64 = ctx.r1.s64 + 224;
	// addi r30,r1,228
	ctx.r30.s64 = ctx.r1.s64 + 228;
	// lwz r29,300(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83004e60
	ctx.lr = 0x82EE9858;
	sub_83004E60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82cc1db8
	ctx.lr = 0x82EE9868;
	sub_82CC1DB8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x82ee9888
	if (ctx.cr6.eq) goto loc_82EE9888;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = ctx.r11.u64 | 16389;
	// b 0x82ee9910
	goto loc_82EE9910;
loc_82EE9888:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83004e48
	ctx.lr = 0x82EE9890;
	sub_83004E48(ctx, base);
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x82ffe658
	ctx.lr = 0x82EE9898;
	sub_82FFE658(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x82ee6c58
	ctx.lr = 0x82EE98A8;
	sub_82EE6C58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83004e50
	ctx.lr = 0x82EE98B8;
	sub_83004E50(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83004e50
	ctx.lr = 0x82EE98D0;
	sub_83004E50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83004e58
	ctx.lr = 0x82EE98DC;
	sub_83004E58(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83002680
	ctx.lr = 0x82EE98EC;
	sub_83002680(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ee9908
	if (!ctx.cr6.eq) goto loc_82EE9908;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ee9910
	goto loc_82EE9910;
	// b 0x82ee9910
	goto loc_82EE9910;
loc_82EE9908:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = ctx.r11.u64 | 16389;
loc_82EE9910:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EE9918"))) PPC_WEAK_FUNC(sub_82EE9918);
PPC_FUNC_IMPL(__imp__sub_82EE9918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ca70c0
	ctx.lr = 0x82EE9938;
	sub_82CA70C0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822cd828
	ctx.lr = 0x82EE9958;
	sub_822CD828(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9968"))) PPC_WEAK_FUNC(sub_82EE9968);
PPC_FUNC_IMPL(__imp__sub_82EE9968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee99a8
	ctx.lr = 0x82EE9980;
	sub_82EE99A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// bl 0x82eed4f0
	ctx.lr = 0x82EE998C;
	sub_82EED4F0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee7730
	ctx.lr = 0x82EE9994;
	sub_82EE7730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE99A4"))) PPC_WEAK_FUNC(sub_82EE99A4);
PPC_FUNC_IMPL(__imp__sub_82EE99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE99A8"))) PPC_WEAK_FUNC(sub_82EE99A8);
PPC_FUNC_IMPL(__imp__sub_82EE99A8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee99d0
	goto loc_82EE99D0;
loc_82EE99C4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE99D0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// bl 0x82eed518
	ctx.lr = 0x82EE99DC;
	sub_82EED518(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ee9a44
	if (!ctx.cr6.lt) goto loc_82EE9A44;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// bl 0x82eed560
	ctx.lr = 0x82EE99F8;
	sub_82EED560(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee9a38
	if (ctx.cr6.eq) goto loc_82EE9A38;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EE9A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x82ee9a40
	goto loc_82EE9A40;
loc_82EE9A38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82EE9A40:
	// b 0x82ee99c4
	goto loc_82EE99C4;
loc_82EE9A44:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// bl 0x82eed6d0
	ctx.lr = 0x82EE9A50;
	sub_82EED6D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9A60"))) PPC_WEAK_FUNC(sub_82EE9A60);
PPC_FUNC_IMPL(__imp__sub_82EE9A60) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee7930
	ctx.lr = 0x82EE9A7C;
	sub_82EE7930(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee9bd0
	ctx.lr = 0x82EE9A84;
	sub_82EE9BD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9bbc
	if (!ctx.cr0.eq) goto loc_82EE9BBC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// bl 0x82eed518
	ctx.lr = 0x82EE9A98;
	sub_82EED518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ee9bbc
	if (!ctx.cr0.eq) goto loc_82EE9BBC;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee99a8
	ctx.lr = 0x82EE9AA8;
	sub_82EE99A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ee9ac0
	goto loc_82EE9AC0;
loc_82EE9AB4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EE9AC0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee9bf0
	ctx.lr = 0x82EE9AC8;
	sub_82EE9BF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ee9b60
	if (!ctx.cr6.lt) goto loc_82EE9B60;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee7768
	ctx.lr = 0x82EE9AE0;
	sub_82EE7768(ctx, base);
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lis r10,22593
	ctx.r10.s64 = 1480654848;
	// ori r10,r10,2333
	ctx.r10.u64 = ctx.r10.u64 | 2333;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ee9b5c
	if (!ctx.cr6.eq) goto loc_82EE9B5C;
	// li r3,872
	ctx.r3.s64 = 872;
	// bl 0x8217dd10
	ctx.lr = 0x82EE9AFC;
	sub_8217DD10(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ee9b1c
	if (ctx.cr6.eq) goto loc_82EE9B1C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82ee1ae8
	ctx.lr = 0x82EE9B14;
	sub_82EE1AE8(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// b 0x82ee9b24
	goto loc_82EE9B24;
loc_82EE9B1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82EE9B24:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee7768
	ctx.lr = 0x82EE9B38;
	sub_82EE7768(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ee2830
	ctx.lr = 0x82EE9B4C;
	sub_82EE2830(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// bl 0x82eed5b0
	ctx.lr = 0x82EE9B5C;
	sub_82EED5B0(ctx, base);
loc_82EE9B5C:
	// b 0x82ee9ab4
	goto loc_82EE9AB4;
loc_82EE9B60:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee9bf0
	ctx.lr = 0x82EE9B68;
	sub_82EE9BF0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82ee9b80
	goto loc_82EE9B80;
loc_82EE9B74:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82EE9B80:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ee9bbc
	if (ctx.cr6.lt) goto loc_82EE9BBC;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee7768
	ctx.lr = 0x82EE9B98;
	sub_82EE7768(ctx, base);
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lis r10,22593
	ctx.r10.s64 = 1480654848;
	// ori r10,r10,2333
	ctx.r10.u64 = ctx.r10.u64 | 2333;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ee9bb8
	if (ctx.cr6.eq) goto loc_82EE9BB8;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82ee7980
	ctx.lr = 0x82EE9BB8;
	sub_82EE7980(ctx, base);
loc_82EE9BB8:
	// b 0x82ee9b74
	goto loc_82EE9B74;
loc_82EE9BBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9BCC"))) PPC_WEAK_FUNC(sub_82EE9BCC);
PPC_FUNC_IMPL(__imp__sub_82EE9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9BD0"))) PPC_WEAK_FUNC(sub_82EE9BD0);
PPC_FUNC_IMPL(__imp__sub_82EE9BD0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9BF0"))) PPC_WEAK_FUNC(sub_82EE9BF0);
PPC_FUNC_IMPL(__imp__sub_82EE9BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82ee8070
	ctx.lr = 0x82EE9C0C;
	sub_82EE8070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9C1C"))) PPC_WEAK_FUNC(sub_82EE9C1C);
PPC_FUNC_IMPL(__imp__sub_82EE9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9C20"))) PPC_WEAK_FUNC(sub_82EE9C20);
PPC_FUNC_IMPL(__imp__sub_82EE9C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9bd0
	ctx.lr = 0x82EE9C38;
	sub_82EE9BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9C58"))) PPC_WEAK_FUNC(sub_82EE9C58);
PPC_FUNC_IMPL(__imp__sub_82EE9C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fe7b78
	ctx.lr = 0x82EE9C70;
	sub_82FE7B78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-14880
	ctx.r11.s64 = ctx.r11.s64 + -14880;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,-14888
	ctx.r10.s64 = ctx.r10.s64 + -14888;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1128, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1129(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1129, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1144, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1160, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1161(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1161, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,254
	ctx.r10.s64 = 254;
	// stw r10,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,1176
	ctx.r3.s64 = ctx.r11.s64 + 1176;
	// bl 0x830eb7c0
	ctx.lr = 0x82EE9D38;
	sub_830EB7C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1244, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1245(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1245, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bl 0x830eae80
	ctx.lr = 0x82EE9D5C;
	sub_830EAE80(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,1256
	ctx.r3.s64 = ctx.r11.s64 + 1256;
	// bl 0x830eae80
	ctx.lr = 0x82EE9D68;
	sub_830EAE80(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9D7C"))) PPC_WEAK_FUNC(sub_82EE9D7C);
PPC_FUNC_IMPL(__imp__sub_82EE9D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9D80"))) PPC_WEAK_FUNC(sub_82EE9D80);
PPC_FUNC_IMPL(__imp__sub_82EE9D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee9dc8
	ctx.lr = 0x82EE9D9C;
	sub_82EE9DC8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ee9db0
	if (ctx.cr0.eq) goto loc_82EE9DB0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82eeee88
	ctx.lr = 0x82EE9DB0;
	sub_82EEEE88(ctx, base);
loc_82EE9DB0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9DC4"))) PPC_WEAK_FUNC(sub_82EE9DC4);
PPC_FUNC_IMPL(__imp__sub_82EE9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9DC8"))) PPC_WEAK_FUNC(sub_82EE9DC8);
PPC_FUNC_IMPL(__imp__sub_82EE9DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-14880
	ctx.r11.s64 = ctx.r11.s64 + -14880;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,-14888
	ctx.r10.s64 = ctx.r10.s64 + -14888;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,1256
	ctx.r3.s64 = ctx.r11.s64 + 1256;
	// bl 0x830eaf08
	ctx.lr = 0x82EE9E10;
	sub_830EAF08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bl 0x830eaf08
	ctx.lr = 0x82EE9E1C;
	sub_830EAF08(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fe7c70
	ctx.lr = 0x82EE9E24;
	sub_82FE7C70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE9E34"))) PPC_WEAK_FUNC(sub_82EE9E34);
PPC_FUNC_IMPL(__imp__sub_82EE9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EE9E38"))) PPC_WEAK_FUNC(sub_82EE9E38);
PPC_FUNC_IMPL(__imp__sub_82EE9E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r3.u32);
	// stw r4,1452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1452, ctx.r4.u32);
	// stw r5,1460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1460, ctx.r5.u32);
	// stw r6,1468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1468, ctx.r6.u32);
	// stw r7,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r7.u32);
	// stw r8,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r8.u32);
	// stw r9,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, ctx.r9.u32);
	// stw r10,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r10.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ee9ec4
	if (ctx.cr6.eq) goto loc_82EE9EC4;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29273(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29273);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9ec4
	if (!ctx.cr0.eq) goto loc_82EE9EC4;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29273
	ctx.r31.s64 = ctx.r11.s64 + -29273;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14668
	ctx.r6.s64 = ctx.r11.s64 + -14668;
	// li r5,210
	ctx.r5.s64 = 210;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1240
	ctx.r3.s64 = ctx.r1.s64 + 1240;
	// bl 0x82ee4928
	ctx.lr = 0x82EE9EB0;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE9EB8;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9ec4
	if (!ctx.cr0.eq) goto loc_82EE9EC4;
	// twi 31,r0,22
loc_82EE9EC4:
	// lwz r11,1452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee9f18
	if (!ctx.cr6.eq) goto loc_82EE9F18;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29274(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29274);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9f18
	if (!ctx.cr0.eq) goto loc_82EE9F18;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29274
	ctx.r31.s64 = ctx.r11.s64 + -29274;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14480
	ctx.r6.s64 = ctx.r11.s64 + -14480;
	// li r5,211
	ctx.r5.s64 = 211;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1256
	ctx.r3.s64 = ctx.r1.s64 + 1256;
	// bl 0x82ee4928
	ctx.lr = 0x82EE9F04;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE9F0C;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9f18
	if (!ctx.cr0.eq) goto loc_82EE9F18;
	// twi 31,r0,22
loc_82EE9F18:
	// lwz r11,1460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee9f6c
	if (!ctx.cr6.eq) goto loc_82EE9F6C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29275(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29275);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9f6c
	if (!ctx.cr0.eq) goto loc_82EE9F6C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29275
	ctx.r31.s64 = ctx.r11.s64 + -29275;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14696
	ctx.r6.s64 = ctx.r11.s64 + -14696;
	// li r5,212
	ctx.r5.s64 = 212;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// bl 0x82ee4928
	ctx.lr = 0x82EE9F58;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE9F60;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9f6c
	if (!ctx.cr0.eq) goto loc_82EE9F6C;
	// twi 31,r0,22
loc_82EE9F6C:
	// lwz r11,1468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ee9fc0
	if (!ctx.cr6.eq) goto loc_82EE9FC0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29276(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29276);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9fc0
	if (!ctx.cr0.eq) goto loc_82EE9FC0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29276
	ctx.r31.s64 = ctx.r11.s64 + -29276;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14716
	ctx.r6.s64 = ctx.r11.s64 + -14716;
	// li r5,213
	ctx.r5.s64 = 213;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1288
	ctx.r3.s64 = ctx.r1.s64 + 1288;
	// bl 0x82ee4928
	ctx.lr = 0x82EE9FAC;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EE9FB4;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ee9fc0
	if (!ctx.cr0.eq) goto loc_82EE9FC0;
	// twi 31,r0,22
loc_82EE9FC0:
	// lwz r11,1492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea014
	if (!ctx.cr6.eq) goto loc_82EEA014;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29277(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29277);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea014
	if (!ctx.cr0.eq) goto loc_82EEA014;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29277
	ctx.r31.s64 = ctx.r11.s64 + -29277;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14500
	ctx.r6.s64 = ctx.r11.s64 + -14500;
	// li r5,214
	ctx.r5.s64 = 214;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1304
	ctx.r3.s64 = ctx.r1.s64 + 1304;
	// bl 0x82ee4928
	ctx.lr = 0x82EEA000;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EEA008;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea014
	if (!ctx.cr0.eq) goto loc_82EEA014;
	// twi 31,r0,22
loc_82EEA014:
	// lwz r11,1476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea068
	if (!ctx.cr6.eq) goto loc_82EEA068;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29278(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29278);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea068
	if (!ctx.cr0.eq) goto loc_82EEA068;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29278
	ctx.r31.s64 = ctx.r11.s64 + -29278;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14736
	ctx.r6.s64 = ctx.r11.s64 + -14736;
	// li r5,215
	ctx.r5.s64 = 215;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x82ee4928
	ctx.lr = 0x82EEA054;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EEA05C;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea068
	if (!ctx.cr0.eq) goto loc_82EEA068;
	// twi 31,r0,22
loc_82EEA068:
	// lwz r11,1484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea0bc
	if (!ctx.cr6.eq) goto loc_82EEA0BC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29279(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29279);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea0bc
	if (!ctx.cr0.eq) goto loc_82EEA0BC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-29279
	ctx.r31.s64 = ctx.r11.s64 + -29279;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14752
	ctx.r6.s64 = ctx.r11.s64 + -14752;
	// li r5,216
	ctx.r5.s64 = 216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1336
	ctx.r3.s64 = ctx.r1.s64 + 1336;
	// bl 0x82ee4928
	ctx.lr = 0x82EEA0A8;
	sub_82EE4928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb310
	ctx.lr = 0x82EEA0B0;
	sub_830EB310(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea0bc
	if (!ctx.cr0.eq) goto loc_82EEA0BC;
	// twi 31,r0,22
loc_82EEA0BC:
	// lwz r4,1492(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// bl 0x830ea888
	ctx.lr = 0x82EEA0CC;
	sub_830EA888(ctx, base);
	// lwz r4,1500(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r3,r11,868
	ctx.r3.s64 = ctx.r11.s64 + 868;
	// bl 0x830ea888
	ctx.lr = 0x82EEA0DC;
	sub_830EA888(ctx, base);
	// lwz r11,1452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea10c
	if (ctx.cr6.eq) goto loc_82EEA10C;
	// lwz r11,1460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea10c
	if (ctx.cr6.eq) goto loc_82EEA10C;
	// lwz r11,1468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea10c
	if (ctx.cr6.eq) goto loc_82EEA10C;
	// lwz r11,1492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea118
	if (!ctx.cr6.eq) goto loc_82EEA118;
loc_82EEA10C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// b 0x82eea490
	goto loc_82EEA490;
loc_82EEA118:
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1476(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1476);
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1484);
	// stw r10,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r10.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// stw r10,1240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1240, ctx.r10.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1524(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1524);
	// stw r10,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r10.u32);
	// lwz r7,1508(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r6,1492(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15524
	ctx.r5.s64 = ctx.r11.s64 + -15524;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82ee49a8
	ctx.lr = 0x82EEA170;
	sub_82EE49A8(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
	// lwz r11,1248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82eea1c4
	if (ctx.cr6.lt) goto loc_82EEA1C4;
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
	// lwz r11,1248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r3.u32);
	// b 0x82eea1cc
	goto loc_82EEA1CC;
loc_82EEA1C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r11.u32);
loc_82EEA1CC:
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// stw r10,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// lwz r6,1492(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-15468
	ctx.r5.s64 = ctx.r11.s64 + -15468;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee4808
	ctx.lr = 0x82EEA1F0;
	sub_82EE4808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r11.u8);
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,449
	ctx.r3.s64 = ctx.r1.s64 + 449;
	// bl 0x82ca3190
	ctx.lr = 0x82EEA208;
	sub_82CA3190(ctx, base);
	// lwz r4,1492(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82ee9918
	ctx.lr = 0x82EEA214;
	sub_82EE9918(ctx, base);
	// addi r11,r1,1348
	ctx.r11.s64 = ctx.r1.s64 + 1348;
	// stw r11,1352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1352, ctx.r11.u32);
	// lwz r3,1352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1352);
	// bl 0x82ee6c88
	ctx.lr = 0x82EEA224;
	sub_82EE6C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee6a10
	ctx.lr = 0x82EEA230;
	sub_82EE6A10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee6aa0
	ctx.lr = 0x82EEA240;
	sub_82EE6AA0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee9830
	ctx.lr = 0x82EEA24C;
	sub_82EE9830(ctx, base);
	// stw r3,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82eea278
	if (!ctx.cr6.lt) goto loc_82EEA278;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r11.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee6a68
	ctx.lr = 0x82EEA270;
	sub_82EE6A68(ctx, base);
	// lwz r3,1356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1356);
	// b 0x82eea490
	goto loc_82EEA490;
loc_82EEA278:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee6c58
	ctx.lr = 0x82EEA280;
	sub_82EE6C58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r3,r10,1256
	ctx.r3.s64 = ctx.r10.s64 + 1256;
	// lwz r11,1256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r10,1444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r3,r10,1256
	ctx.r3.s64 = ctx.r10.s64 + 1256;
	// lwz r11,1256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14776
	ctx.r4.s64 = ctx.r11.s64 + -14776;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// stw r3,1144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1144, ctx.r3.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea354
	if (!ctx.cr6.eq) goto loc_82EEA354;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29280);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea354
	if (!ctx.cr0.eq) goto loc_82EEA354;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-14544
	ctx.r31.s64 = ctx.r11.s64 + -14544;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r11,-29280
	ctx.r30.s64 = ctx.r11.s64 + -29280;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14564
	ctx.r6.s64 = ctx.r11.s64 + -14564;
	// li r5,263
	ctx.r5.s64 = 263;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82ee4928
	ctx.lr = 0x82EEA33C;
	sub_82EE4928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x830eb3e8
	ctx.lr = 0x82EEA348;
	sub_830EB3E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea354
	if (!ctx.cr0.eq) goto loc_82EEA354;
	// twi 31,r0,22
loc_82EEA354:
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14796
	ctx.r4.s64 = ctx.r11.s64 + -14796;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// stw r3,1148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1148, ctx.r3.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r11,1148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea3e4
	if (!ctx.cr6.eq) goto loc_82EEA3E4;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lbz r11,-29281(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -29281);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea3e4
	if (!ctx.cr0.eq) goto loc_82EEA3E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-14608
	ctx.r31.s64 = ctx.r11.s64 + -14608;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r11,-29281
	ctx.r30.s64 = ctx.r11.s64 + -29281;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14632
	ctx.r6.s64 = ctx.r11.s64 + -14632;
	// li r5,266
	ctx.r5.s64 = 266;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82ee4928
	ctx.lr = 0x82EEA3CC;
	sub_82EE4928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x830eb3e8
	ctx.lr = 0x82EEA3D8;
	sub_830EB3E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eea3e4
	if (!ctx.cr0.eq) goto loc_82EEA3E4;
	// twi 31,r0,22
loc_82EEA3E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14816
	ctx.r4.s64 = ctx.r11.s64 + -14816;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea428
	if (ctx.cr6.eq) goto loc_82EEA428;
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82ee4630
	ctx.lr = 0x82EEA428;
	sub_82EE4630(ctx, base);
loc_82EEA428:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1460(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1460);
	// lwz r4,1452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1452);
	// lwz r3,1444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// bl 0x82fe7d18
	ctx.lr = 0x82EEA43C;
	sub_82FE7D18(ctx, base);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// bl 0x82266070
	ctx.lr = 0x82EEA44C;
	sub_82266070(ctx, base);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// stw r3,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1128, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2716);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// bl 0x82fe79c0
	ctx.lr = 0x82EEA474;
	sub_82FE79C0(ctx, base);
	// lwz r3,1444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// bl 0x82eeb1b0
	ctx.lr = 0x82EEA47C;
	sub_82EEB1B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r11.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee6a68
	ctx.lr = 0x82EEA48C;
	sub_82EE6A68(ctx, base);
	// lwz r3,1388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1388);
loc_82EEA490:
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
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

__attribute__((alias("__imp__sub_82EEA4A8"))) PPC_WEAK_FUNC(sub_82EEA4A8);
PPC_FUNC_IMPL(__imp__sub_82EEA4A8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea4d4
	if (!ctx.cr6.eq) goto loc_82EEA4D4;
	// b 0x82eea6e4
	goto loc_82EEA6E4;
loc_82EEA4D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,5868
	ctx.r4.s64 = ctx.r11.s64 + 5868;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82EEA4FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea6e4
	if (ctx.cr6.eq) goto loc_82EEA6E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14396
	ctx.r4.s64 = ctx.r11.s64 + -14396;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea6b8
	if (ctx.cr6.eq) goto loc_82EEA6B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_82EEA55C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea6b8
	if (ctx.cr6.eq) goto loc_82EEA6B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-14408
	ctx.r31.s64 = ctx.r11.s64 + -14408;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eee108
	ctx.lr = 0x82EEA5B4;
	sub_82EEE108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eea618
	if (ctx.cr0.eq) goto loc_82EEA618;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8221fc28
	ctx.lr = 0x82EEA5D4;
	sub_8221FC28(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEA5E0;
	sub_82EEEFB8(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEA5F0;
	sub_82EEEFB8(ctx, base);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-14436
	ctx.r30.s64 = ctx.r11.s64 + -14436;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEA604;
	sub_82EEF0E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82eeefe0
	ctx.lr = 0x82EEA614;
	sub_82EEEFE0(ctx, base);
	// b 0x82eea698
	goto loc_82EEA698;
loc_82EEA618:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8221fc28
	ctx.lr = 0x82EEA630;
	sub_8221FC28(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEA63C;
	sub_82EEEFB8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEA664;
	sub_82EEEFB8(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEA674;
	sub_82EEEFB8(ctx, base);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-14468
	ctx.r30.s64 = ctx.r11.s64 + -14468;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEA688;
	sub_82EEF0E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82eeefe0
	ctx.lr = 0x82EEA698;
	sub_82EEEFE0(ctx, base);
loc_82EEA698:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82eea55c
	goto loc_82EEA55C;
loc_82EEA6B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,5868
	ctx.r4.s64 = ctx.r11.s64 + 5868;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82eea4fc
	goto loc_82EEA4FC;
loc_82EEA6E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82EEA6FC"))) PPC_WEAK_FUNC(sub_82EEA6FC);
PPC_FUNC_IMPL(__imp__sub_82EEA6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEA700"))) PPC_WEAK_FUNC(sub_82EEA700);
PPC_FUNC_IMPL(__imp__sub_82EEA700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-1088
	ctx.r31.s64 = ctx.r1.s64 + -1088;
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r3.u32);
	// stw r4,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r4.u32);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea72c
	if (!ctx.cr6.eq) goto loc_82EEA72C;
	// b 0x82eeaf48
	goto loc_82EEAF48;
loc_82EEA72C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14216
	ctx.r4.s64 = ctx.r11.s64 + -14216;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eea770
	if (!ctx.cr6.eq) goto loc_82EEA770;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2804
	ctx.r11.s64 = ctx.r11.s64 + 2804;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82eea8b8
	goto loc_82EEA8B8;
loc_82EEA770:
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82eed730
	ctx.lr = 0x82EEA778;
	sub_82EED730(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEA784;
	sub_82EEEFB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14240
	ctx.r6.s64 = ctx.r11.s64 + -14240;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-14252
	ctx.r5.s64 = ctx.r11.s64 + -14252;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ee4808
	ctx.lr = 0x82EEA7A0;
	sub_82EE4808(ctx, base);
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEA7A8;
	sub_82EEF0E0(ctx, base);
	// stw r3,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,368
	ctx.r5.s64 = ctx.r31.s64 + 368;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,1040(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1040, ctx.r11.u64);
	// lfd f0,1040(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1040);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82eeef90
	ctx.lr = 0x82EEA7F0;
	sub_82EEEF90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14816
	ctx.r6.s64 = ctx.r11.s64 + -14816;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-14252
	ctx.r5.s64 = ctx.r11.s64 + -14252;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ee4808
	ctx.lr = 0x82EEA80C;
	sub_82EE4808(ctx, base);
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEA814;
	sub_82EEF0E0(ctx, base);
	// stw r3,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,368
	ctx.r5.s64 = ctx.r31.s64 + 368;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-14272
	ctx.r6.s64 = ctx.r11.s64 + -14272;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-14216
	ctx.r5.s64 = ctx.r11.s64 + -14216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14288
	ctx.r4.s64 = ctx.r11.s64 + -14288;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eea8b8
	if (ctx.cr6.eq) goto loc_82EEA8B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14408
	ctx.r4.s64 = ctx.r11.s64 + -14408;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// bl 0x82ee4630
	ctx.lr = 0x82EEA8B8;
	sub_82EE4630(ctx, base);
loc_82EEA8B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14288
	ctx.r4.s64 = ctx.r11.s64 + -14288;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
loc_82EEA8E8:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeab0c
	if (ctx.cr6.eq) goto loc_82EEAB0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14216
	ctx.r4.s64 = ctx.r11.s64 + -14216;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14300
	ctx.r4.s64 = ctx.r11.s64 + -14300;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14408
	ctx.r4.s64 = ctx.r11.s64 + -14408;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEA968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeaad4
	if (ctx.cr6.eq) goto loc_82EEAAD4;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeaad4
	if (ctx.cr6.eq) goto loc_82EEAAD4;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeaad4
	if (ctx.cr6.eq) goto loc_82EEAAD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 409, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r11.u8);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82eed730
	ctx.lr = 0x82EEA9A8;
	sub_82EED730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14316
	ctx.r4.s64 = ctx.r11.s64 + -14316;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82eee108
	ctx.lr = 0x82EEA9BC;
	sub_82EEE108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eea9f0
	if (ctx.cr0.eq) goto loc_82EEA9F0;
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82eeebb8
	ctx.lr = 0x82EEA9D0;
	sub_82EEEBB8(ctx, base);
	// stb r3,409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 409, ctx.r3.u8);
	// lbz r11,409(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 409);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eea9ec
	if (ctx.cr0.eq) goto loc_82EEA9EC;
	// lfd f1,432(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 432);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82eeef90
	ctx.lr = 0x82EEA9EC;
	sub_82EEEF90(ctx, base);
loc_82EEA9EC:
	// b 0x82eeaa74
	goto loc_82EEAA74;
loc_82EEA9F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14332
	ctx.r4.s64 = ctx.r11.s64 + -14332;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82eee108
	ctx.lr = 0x82EEAA04;
	sub_82EEE108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeaa38
	if (ctx.cr0.eq) goto loc_82EEAA38;
	// addi r4,r31,440
	ctx.r4.s64 = ctx.r31.s64 + 440;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82ee4770
	ctx.lr = 0x82EEAA18;
	sub_82EE4770(ctx, base);
	// stb r3,409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 409, ctx.r3.u8);
	// lbz r11,409(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 409);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeaa34
	if (ctx.cr0.eq) goto loc_82EEAA34;
	// lbz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 440);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82eeef68
	ctx.lr = 0x82EEAA34;
	sub_82EEEF68(ctx, base);
loc_82EEAA34:
	// b 0x82eeaa74
	goto loc_82EEAA74;
loc_82EEAA38:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14348
	ctx.r4.s64 = ctx.r11.s64 + -14348;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82eee108
	ctx.lr = 0x82EEAA4C;
	sub_82EEE108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeaa6c
	if (ctx.cr0.eq) goto loc_82EEAA6C;
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEAA60;
	sub_82EEEFB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 409, ctx.r11.u8);
	// b 0x82eeaa74
	goto loc_82EEAA74;
loc_82EEAA6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r11.u8);
loc_82EEAA74:
	// lbz r11,409(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 409);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeaad4
	if (ctx.cr0.eq) goto loc_82EEAAD4;
	// lbz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 408);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeaad4
	if (ctx.cr0.eq) goto loc_82EEAAD4;
	// lwz r6,404(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-14252
	ctx.r5.s64 = ctx.r11.s64 + -14252;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x82ee4808
	ctx.lr = 0x82EEAAA4;
	sub_82EE4808(ctx, base);
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEAAAC;
	sub_82EEF0E0(ctx, base);
	// stw r3,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,416
	ctx.r5.s64 = ctx.r31.s64 + 416;
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// lwz r3,1052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EEAAD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14288
	ctx.r4.s64 = ctx.r11.s64 + -14288;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// b 0x82eea8e8
	goto loc_82EEA8E8;
loc_82EEAB0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14376
	ctx.r4.s64 = ctx.r11.s64 + -14376;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r3.u32);
loc_82EEAB3C:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeaf48
	if (ctx.cr6.eq) goto loc_82EEAF48;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14216
	ctx.r4.s64 = ctx.r11.s64 + -14216;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14300
	ctx.r4.s64 = ctx.r11.s64 + -14300;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r3.u32);
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeaf10
	if (ctx.cr6.eq) goto loc_82EEAF10;
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeaf10
	if (ctx.cr6.eq) goto loc_82EEAF10;
	// lwz r6,720(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-14252
	ctx.r5.s64 = ctx.r11.s64 + -14252;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// bl 0x82ee4808
	ctx.lr = 0x82EEABC8;
	sub_82EE4808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 724, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14388
	ctx.r4.s64 = ctx.r11.s64 + -14388;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEABFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r3.u32);
loc_82EEAC00:
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeac44
	if (ctx.cr6.eq) goto loc_82EEAC44;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14388
	ctx.r4.s64 = ctx.r11.s64 + -14388;
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r3.u32);
	// b 0x82eeac00
	goto loc_82EEAC00;
loc_82EEAC44:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14316
	ctx.r4.s64 = ctx.r11.s64 + -14316;
	// lwz r3,716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// bl 0x82eee108
	ctx.lr = 0x82EEAC58;
	sub_82EEE108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeadb8
	if (ctx.cr0.eq) goto loc_82EEADB8;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82ca9e84
	ctx.lr = 0x82EEAC74;
	sub_82CA9E84(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// lwz r11,1056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// bl 0x82ca3190
	ctx.lr = 0x82EEACA0;
	sub_82CA3190(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14388
	ctx.r4.s64 = ctx.r11.s64 + -14388;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEACC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// b 0x82eead08
	goto loc_82EEAD08;
loc_82EEACD4:
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14388
	ctx.r4.s64 = ctx.r11.s64 + -14388;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r3.u32);
loc_82EEAD08:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eead74
	if (ctx.cr6.eq) goto loc_82EEAD74;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// lwz r10,728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82eead74
	if (!ctx.cr6.lt) goto loc_82EEAD74;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14408
	ctx.r4.s64 = ctx.r11.s64 + -14408;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r3.u32);
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eead70
	if (ctx.cr6.eq) goto loc_82EEAD70;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,1000(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// bl 0x82eeebb8
	ctx.lr = 0x82EEAD70;
	sub_82EEEBB8(ctx, base);
loc_82EEAD70:
	// b 0x82eeacd4
	goto loc_82EEACD4;
loc_82EEAD74:
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEAD7C;
	sub_82EEF0E0(ctx, base);
	// stw r3,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,728(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r7,1000(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,736
	ctx.r5.s64 = ctx.r31.s64 + 736;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEADB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r3.u8);
	// b 0x82eeaf10
	goto loc_82EEAF10;
loc_82EEADB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14348
	ctx.r4.s64 = ctx.r11.s64 + -14348;
	// lwz r3,716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// bl 0x82eee108
	ctx.lr = 0x82EEADCC;
	sub_82EEE108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeaf10
	if (ctx.cr0.eq) goto loc_82EEAF10;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82ca9e84
	ctx.lr = 0x82EEADE8;
	sub_82CA9E84(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x82ca3190
	ctx.lr = 0x82EEAE14;
	sub_82CA3190(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14388
	ctx.r4.s64 = ctx.r11.s64 + -14388;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// b 0x82eeae7c
	goto loc_82EEAE7C;
loc_82EEAE48:
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14388
	ctx.r4.s64 = ctx.r11.s64 + -14388;
	// lwz r11,1028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r3.u32);
loc_82EEAE7C:
	// lwz r11,1028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeaed0
	if (ctx.cr6.eq) goto loc_82EEAED0;
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lwz r10,728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82eeaed0
	if (!ctx.cr6.lt) goto loc_82EEAED0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14408
	ctx.r4.s64 = ctx.r11.s64 + -14408;
	// lwz r11,1028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,1028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x82eeae48
	goto loc_82EEAE48;
loc_82EEAED0:
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEAED8;
	sub_82EEF0E0(ctx, base);
	// stw r3,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,728(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r7,1020(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,736
	ctx.r5.s64 = ctx.r31.s64 + 736;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,1068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// lwz r11,1068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,1024(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1024, ctx.r3.u8);
loc_82EEAF10:
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14376
	ctx.r4.s64 = ctx.r11.s64 + -14376;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEAF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r3.u32);
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// b 0x82eeab3c
	goto loc_82EEAB3C;
loc_82EEAF48:
	// addi r1,r31,1088
	ctx.r1.s64 = ctx.r31.s64 + 1088;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEAF5C"))) PPC_WEAK_FUNC(sub_82EEAF5C);
PPC_FUNC_IMPL(__imp__sub_82EEAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEAF60"))) PPC_WEAK_FUNC(sub_82EEAF60);
PPC_FUNC_IMPL(__imp__sub_82EEAF60) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lbz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1128);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eeafa8
	if (!ctx.cr0.eq) goto loc_82EEAFA8;
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82eeb1a0
	ctx.lr = 0x82EEAF94;
	sub_82EEB1A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eeafa8
	if (!ctx.cr0.eq) goto loc_82EEAFA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82eebbb0
	ctx.lr = 0x82EEAFA8;
	sub_82EEBBB0(ctx, base);
loc_82EEAFA8:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lbz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1128);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeb028
	if (ctx.cr0.eq) goto loc_82EEB028;
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82eeb190
	ctx.lr = 0x82EEAFC0;
	sub_82EEB190(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeb028
	if (ctx.cr0.eq) goto loc_82EEB028;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8221fc28
	ctx.lr = 0x82EEAFE4;
	sub_8221FC28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82eeef90
	ctx.lr = 0x82EEAFF4;
	sub_82EEEF90(ctx, base);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEAFFC;
	sub_82EEF0E0(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14184
	ctx.r4.s64 = ctx.r11.s64 + -14184;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EEB028:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221fc28
	ctx.lr = 0x82EEB040;
	sub_8221FC28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB050;
	sub_82EEEF90(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB074;
	sub_82EEEF90(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB098;
	sub_82EEEF90(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82eeb160
	ctx.lr = 0x82EEB0A4;
	sub_82EEB160(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB0B0;
	sub_82EEEF90(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82eeb170
	ctx.lr = 0x82EEB0BC;
	sub_82EEB170(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB0C8;
	sub_82EEEF90(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82eeb160
	ctx.lr = 0x82EEB0D4;
	sub_82EEB160(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB0E0;
	sub_82EEEF90(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82eeb170
	ctx.lr = 0x82EEB0EC;
	sub_82EEB170(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB0F8;
	sub_82EEEF90(ctx, base);
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82eeb180
	ctx.lr = 0x82EEB100;
	sub_82EEB180(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB120;
	sub_82EEEF90(ctx, base);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-14204
	ctx.r30.s64 = ctx.r11.s64 + -14204;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB134;
	sub_82EEF0E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82eeefe0
	ctx.lr = 0x82EEB144;
	sub_82EEEFE0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_82EEB15C"))) PPC_WEAK_FUNC(sub_82EEB15C);
PPC_FUNC_IMPL(__imp__sub_82EEB15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEB160"))) PPC_WEAK_FUNC(sub_82EEB160);
PPC_FUNC_IMPL(__imp__sub_82EEB160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB170"))) PPC_WEAK_FUNC(sub_82EEB170);
PPC_FUNC_IMPL(__imp__sub_82EEB170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB180"))) PPC_WEAK_FUNC(sub_82EEB180);
PPC_FUNC_IMPL(__imp__sub_82EEB180) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB190"))) PPC_WEAK_FUNC(sub_82EEB190);
PPC_FUNC_IMPL(__imp__sub_82EEB190) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lhz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB1A0"))) PPC_WEAK_FUNC(sub_82EEB1A0);
PPC_FUNC_IMPL(__imp__sub_82EEB1A0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB1B0"))) PPC_WEAK_FUNC(sub_82EEB1B0);
PPC_FUNC_IMPL(__imp__sub_82EEB1B0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221fc28
	ctx.lr = 0x82EEB1D8;
	sub_8221FC28(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB1E0;
	sub_82EEF0E0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14156
	ctx.r4.s64 = ctx.r11.s64 + -14156;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB21C"))) PPC_WEAK_FUNC(sub_82EEB21C);
PPC_FUNC_IMPL(__imp__sub_82EEB21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EEB220"))) PPC_WEAK_FUNC(sub_82EEB220);
PPC_FUNC_IMPL(__imp__sub_82EEB220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r3.u32);
	// stw r4,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221fc28
	ctx.lr = 0x82EEB25C;
	sub_8221FC28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB26C;
	sub_82EEEF90(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82ee1cf8
	ctx.lr = 0x82EEB278;
	sub_82EE1CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82eeefb8
	ctx.lr = 0x82EEB288;
	sub_82EEEFB8(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82ee1df0
	ctx.lr = 0x82EEB294;
	sub_82EE1DF0(ctx, base);
	// std r3,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r3.u64);
	// lfd f0,352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB2AC;
	sub_82EEEF90(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82ee1fc0
	ctx.lr = 0x82EEB2B8;
	sub_82EE1FC0(ctx, base);
	// std r3,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r3.u64);
	// lfd f0,360(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB2D0;
	sub_82EEEF90(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82ee1e60
	ctx.lr = 0x82EEB2DC;
	sub_82EE1E60(ctx, base);
	// std r3,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r3.u64);
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB2F4;
	sub_82EEEF90(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82eeb698
	ctx.lr = 0x82EEB300;
	sub_82EEB698(ctx, base);
	// std r3,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r3.u64);
	// lfd f0,376(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB318;
	sub_82EEEF90(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82ee1f30
	ctx.lr = 0x82EEB32C;
	sub_82EE1F30(ctx, base);
	// std r3,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r3.u64);
	// lfd f0,384(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB344;
	sub_82EEEF90(ctx, base);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-13992
	ctx.r30.s64 = ctx.r11.s64 + -13992;
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB358;
	sub_82EEF0E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x82eeefe0
	ctx.lr = 0x82EEB368;
	sub_82EEEFE0(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeb388
	if (ctx.cr6.eq) goto loc_82EEB388;
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eebe88
	ctx.lr = 0x82EEB384;
	sub_82EEBE88(ctx, base);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
loc_82EEB388:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82eeb39c
	if (!ctx.cr6.lt) goto loc_82EEB39C;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// b 0x82eeb680
	goto loc_82EEB680;
loc_82EEB39C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// b 0x82eeb3b4
	goto loc_82EEB3B4;
loc_82EEB3A8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
loc_82EEB3B4:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x82eeb434
	if (!ctx.cr6.lt) goto loc_82EEB434;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8221fc28
	ctx.lr = 0x82EEB3D8;
	sub_8221FC28(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f0,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82eeef90
	ctx.lr = 0x82EEB3F4;
	sub_82EEEF90(ctx, base);
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82ee20b0
	ctx.lr = 0x82EEB404;
	sub_82EE20B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eeb430
	if (ctx.cr0.eq) goto loc_82EEB430;
	// addi r31,r1,256
	ctx.r31.s64 = ctx.r1.s64 + 256;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-14020
	ctx.r30.s64 = ctx.r11.s64 + -14020;
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB420;
	sub_82EEF0E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82eeefe0
	ctx.lr = 0x82EEB430;
	sub_82EEEFE0(ctx, base);
loc_82EEB430:
	// b 0x82eeb3a8
	goto loc_82EEB3A8;
loc_82EEB434:
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r11,1140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eeb464
	if (ctx.cr6.eq) goto loc_82EEB464;
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,1156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eea4a8
	ctx.lr = 0x82EEB454;
	sub_82EEA4A8(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,1140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eea4a8
	ctx.lr = 0x82EEB464;
	sub_82EEA4A8(ctx, base);
loc_82EEB464:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x832b22cc
	ctx.lr = 0x82EEB46C;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r11.u64);
	// lfd f0,400(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82eeef40
	ctx.lr = 0x82EEB494;
	sub_82EEEF40(ctx, base);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB49C;
	sub_82EEF0E0(ctx, base);
	// stw r3,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14040
	ctx.r4.s64 = ctx.r11.s64 + -14040;
	// lwz r3,408(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lbz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1128);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// lfd f0,416(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82eeef40
	ctx.lr = 0x82EEB4E8;
	sub_82EEEF40(ctx, base);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB4F0;
	sub_82EEF0E0(ctx, base);
	// stw r3,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14060
	ctx.r4.s64 = ctx.r11.s64 + -14060;
	// lwz r3,424(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lbz r11,1129(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1129);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r11.u64);
	// lfd f0,432(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82eeef40
	ctx.lr = 0x82EEB53C;
	sub_82EEEF40(ctx, base);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB544;
	sub_82EEF0E0(ctx, base);
	// stw r3,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14084
	ctx.r4.s64 = ctx.r11.s64 + -14084;
	// lwz r3,440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lfs f0,1164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,27524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.f0.u64);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r11.u64);
	// lfd f0,456(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82eeef40
	ctx.lr = 0x82EEB5A8;
	sub_82EEEF40(ctx, base);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB5B0;
	sub_82EEF0E0(ctx, base);
	// stw r3,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14104
	ctx.r4.s64 = ctx.r11.s64 + -14104;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lfs f0,1168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,27524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.f0.u64);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r11.u64);
	// lfd f0,480(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82eeef40
	ctx.lr = 0x82EEB614;
	sub_82EEEF40(ctx, base);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB61C;
	sub_82EEF0E0(ctx, base);
	// stw r3,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14124
	ctx.r4.s64 = ctx.r11.s64 + -14124;
	// lwz r3,488(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82eef0e0
	ctx.lr = 0x82EEB650;
	sub_82EEF0E0(ctx, base);
	// stw r3,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-14136
	ctx.r4.s64 = ctx.r11.s64 + -14136;
	// lwz r3,492(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r11,492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EEB67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEB680:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

__attribute__((alias("__imp__sub_82EEB698"))) PPC_WEAK_FUNC(sub_82EEB698);
PPC_FUNC_IMPL(__imp__sub_82EEB698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ee1ed0
	ctx.lr = 0x82EEB6B0;
	sub_82EE1ED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

