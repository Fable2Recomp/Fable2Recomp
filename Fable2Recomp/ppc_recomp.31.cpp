#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82388D90"))) PPC_WEAK_FUNC(sub_82388D90);
PPC_FUNC_IMPL(__imp__sub_82388D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82214c28
	ctx.lr = 0x82388DA4;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388de0
	if (ctx.cr6.eq) goto loc_82388DE0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,17012
	ctx.r10.s64 = ctx.r11.s64 + 17012;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82388DC4;
	sub_821B25A8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x82713cd8
	ctx.lr = 0x82388DE0;
	sub_82713CD8(ctx, base);
loc_82388DE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388DF0"))) PPC_WEAK_FUNC(sub_82388DF0);
PPC_FUNC_IMPL(__imp__sub_82388DF0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r10,r11,16940
	ctx.r10.s64 = ctx.r11.s64 + 16940;
	// stb r6,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r6.u8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82388E1C;
	sub_821B25A8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x8238b598
	ctx.lr = 0x82388E38;
	sub_8238B598(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388E48"))) PPC_WEAK_FUNC(sub_82388E48);
PPC_FUNC_IMPL(__imp__sub_82388E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82214c28
	ctx.lr = 0x82388E5C;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388e9c
	if (ctx.cr6.eq) goto loc_82388E9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,17864
	ctx.r10.s64 = ctx.r11.s64 + 17864;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82388E80;
	sub_821B25A8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x8238b7e8
	ctx.lr = 0x82388E9C;
	sub_8238B7E8(ctx, base);
loc_82388E9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388EAC"))) PPC_WEAK_FUNC(sub_82388EAC);
PPC_FUNC_IMPL(__imp__sub_82388EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388EB0"))) PPC_WEAK_FUNC(sub_82388EB0);
PPC_FUNC_IMPL(__imp__sub_82388EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82214c28
	ctx.lr = 0x82388EC4;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388f04
	if (ctx.cr6.eq) goto loc_82388F04;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,17876
	ctx.r10.s64 = ctx.r11.s64 + 17876;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82388EE8;
	sub_821B25A8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x82395af0
	ctx.lr = 0x82388F04;
	sub_82395AF0(ctx, base);
loc_82388F04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388F14"))) PPC_WEAK_FUNC(sub_82388F14);
PPC_FUNC_IMPL(__imp__sub_82388F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388F18"))) PPC_WEAK_FUNC(sub_82388F18);
PPC_FUNC_IMPL(__imp__sub_82388F18) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82214c28
	ctx.lr = 0x82388F34;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388fc0
	if (ctx.cr6.eq) goto loc_82388FC0;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82388f58
	if (ctx.cr6.eq) goto loc_82388F58;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x82388fc0
	if (!ctx.cr6.lt) goto loc_82388FC0;
loc_82388F58:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r10,r11,17888
	ctx.r10.s64 = ctx.r11.s64 + 17888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82388F74;
	sub_82CA3190(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82388f88
	if (!ctx.cr6.eq) goto loc_82388F88;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r11,63
	ctx.r5.s64 = ctx.r11.s64 + 63;
	// b 0x82388f8c
	goto loc_82388F8C;
loc_82388F88:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82388F8C:
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ca39c0
	ctx.lr = 0x82388F9C;
	sub_82CA39C0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821b25a8
	ctx.lr = 0x82388FA4;
	sub_821B25A8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// bl 0x8238b8d8
	ctx.lr = 0x82388FC0;
	sub_8238B8D8(ctx, base);
loc_82388FC0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82388FD8"))) PPC_WEAK_FUNC(sub_82388FD8);
PPC_FUNC_IMPL(__imp__sub_82388FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82214c28
	ctx.lr = 0x82388FEC;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238902c
	if (ctx.cr6.eq) goto loc_8238902C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,17900
	ctx.r10.s64 = ctx.r11.s64 + 17900;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82389010;
	sub_821B25A8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x823d5360
	ctx.lr = 0x8238902C;
	sub_823D5360(ctx, base);
loc_8238902C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238903C"))) PPC_WEAK_FUNC(sub_8238903C);
PPC_FUNC_IMPL(__imp__sub_8238903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389040"))) PPC_WEAK_FUNC(sub_82389040);
PPC_FUNC_IMPL(__imp__sub_82389040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82214c28
	ctx.lr = 0x82389054;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389090
	if (ctx.cr6.eq) goto loc_82389090;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,17924
	ctx.r10.s64 = ctx.r11.s64 + 17924;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82389074;
	sub_821B25A8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x82713cd8
	ctx.lr = 0x82389090;
	sub_82713CD8(ctx, base);
loc_82389090:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823890A0"))) PPC_WEAK_FUNC(sub_823890A0);
PPC_FUNC_IMPL(__imp__sub_823890A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82214c28
	ctx.lr = 0x823890B4;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823890f0
	if (ctx.cr6.eq) goto loc_823890F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,17936
	ctx.r10.s64 = ctx.r11.s64 + 17936;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x823890D4;
	sub_821B25A8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x82713cd8
	ctx.lr = 0x823890F0;
	sub_82713CD8(ctx, base);
loc_823890F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389100"))) PPC_WEAK_FUNC(sub_82389100);
PPC_FUNC_IMPL(__imp__sub_82389100) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,776(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5256);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82389180
	if (!ctx.cr6.gt) goto loc_82389180;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f1,776(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 776, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,16964
	ctx.r10.s64 = ctx.r11.s64 + 16964;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821b25a8
	ctx.lr = 0x82389140;
	sub_821B25A8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lbz r8,-6435(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -6435);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// beq cr6,0x8238917c
	if (ctx.cr6.eq) goto loc_8238917C;
	// bl 0x8238b9d0
	ctx.lr = 0x8238916C;
	sub_8238B9D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8238917C:
	// bl 0x8238bac0
	ctx.lr = 0x82389180;
	sub_8238BAC0(ctx, base);
loc_82389180:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389190"))) PPC_WEAK_FUNC(sub_82389190);
PPC_FUNC_IMPL(__imp__sub_82389190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82389198;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r28,152
	ctx.r31.s64 = ctx.r28.s64 + 152;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823891AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x823891B4;
	sub_8221BE68(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823891ac
	if (!ctx.cr0.eq) goto loc_823891AC;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,384
	ctx.r3.s64 = ctx.r28.s64 + 384;
	// bl 0x82ca3190
	ctx.lr = 0x823891D4;
	sub_82CA3190(ctx, base);
	// stw r29,768(r28)
	PPC_STORE_U32(ctx.r28.u32 + 768, ctx.r29.u32);
	// stw r29,772(r28)
	PPC_STORE_U32(ctx.r28.u32 + 772, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_823891E4"))) PPC_WEAK_FUNC(sub_823891E4);
PPC_FUNC_IMPL(__imp__sub_823891E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823891E8"))) PPC_WEAK_FUNC(sub_823891E8);
PPC_FUNC_IMPL(__imp__sub_823891E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x823891F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823896f8
	if (!ctx.cr6.eq) goto loc_823896F8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389318
	if (ctx.cr6.eq) goto loc_82389318;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389254
	if (ctx.cr6.eq) goto loc_82389254;
	// lbz r10,49(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8238931c
	goto loc_8238931C;
loc_82389254:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823892c0
	if (!ctx.cr0.gt) goto loc_823892C0;
loc_82389270:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,49
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 49, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// blt cr6,0x82389290
	if (ctx.cr6.lt) goto loc_82389290;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82389290:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823892ac
	if (ctx.cr6.eq) goto loc_823892AC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823892b4
	goto loc_823892B4;
loc_823892AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823892B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82389270
	if (ctx.cr6.gt) goto loc_82389270;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823892C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82389304
	if (ctx.cr6.eq) goto loc_82389304;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x823892dc
	if (ctx.cr6.gt) goto loc_823892DC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823892DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389304
	if (!ctx.cr6.eq) goto loc_82389304;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8238931c
	goto loc_8238931C;
loc_82389304:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8238931c
	goto loc_8238931C;
loc_82389318:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238931C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389344
	if (ctx.cr6.eq) goto loc_82389344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82389338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82389724
	if (!ctx.cr6.eq) goto loc_82389724;
loc_82389344:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x82389364;
	sub_8222C210(ctx, base);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r6,r7,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8238945c
	if (ctx.cr6.eq) goto loc_8238945C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823893a0
	if (ctx.cr6.eq) goto loc_823893A0;
	// lbz r10,111(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 111);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82389460
	goto loc_82389460;
loc_823893A0:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238940c
	if (!ctx.cr0.gt) goto loc_8238940C;
loc_823893BC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,111
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 111, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// blt cr6,0x823893dc
	if (ctx.cr6.lt) goto loc_823893DC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_823893DC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823893f8
	if (ctx.cr6.eq) goto loc_823893F8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82389400
	goto loc_82389400;
loc_823893F8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82389400:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823893bc
	if (ctx.cr6.gt) goto loc_823893BC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238940C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238944c
	if (ctx.cr6.eq) goto loc_8238944C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82389428
	if (ctx.cr6.gt) goto loc_82389428;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82389428:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238944c
	if (!ctx.cr6.eq) goto loc_8238944C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82389460
	goto loc_82389460;
loc_8238944C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82389460
	goto loc_82389460;
loc_8238945C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82389460:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823895ac
	if (ctx.cr6.eq) goto loc_823895AC;
	// lbz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823895ac
	if (!ctx.cr6.eq) goto loc_823895AC;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389570
	if (ctx.cr6.eq) goto loc_82389570;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823894b4
	if (ctx.cr6.eq) goto loc_823894B4;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82389574
	goto loc_82389574;
loc_823894B4:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82389520
	if (!ctx.cr0.gt) goto loc_82389520;
loc_823894D0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// blt cr6,0x823894f0
	if (ctx.cr6.lt) goto loc_823894F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_823894F0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238950c
	if (ctx.cr6.eq) goto loc_8238950C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82389514
	goto loc_82389514;
loc_8238950C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82389514:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823894d0
	if (ctx.cr6.gt) goto loc_823894D0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82389520:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82389560
	if (ctx.cr6.eq) goto loc_82389560;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x8238953c
	if (ctx.cr6.gt) goto loc_8238953C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238953C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389560
	if (!ctx.cr6.eq) goto loc_82389560;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82389574
	goto loc_82389574;
loc_82389560:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82389574
	goto loc_82389574;
loc_82389570:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82389574:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823895a8
	if (ctx.cr6.eq) goto loc_823895A8;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82389598
	if (ctx.cr6.eq) goto loc_82389598;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821e8870
	ctx.lr = 0x82389594;
	sub_821E8870(ctx, base);
	// b 0x8238959c
	goto loc_8238959C;
loc_82389598:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8238959C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823895ac
	if (!ctx.cr6.eq) goto loc_823895AC;
loc_823895A8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823895AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389724
	if (ctx.cr6.eq) goto loc_82389724;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,12,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823896c0
	if (ctx.cr6.eq) goto loc_823896C0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823895fc
	if (ctx.cr6.eq) goto loc_823895FC;
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x823896c4
	goto loc_823896C4;
loc_823895FC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82389668
	if (!ctx.cr0.gt) goto loc_82389668;
loc_82389618:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// blt cr6,0x82389638
	if (ctx.cr6.lt) goto loc_82389638;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82389638:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82389654
	if (ctx.cr6.eq) goto loc_82389654;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238965c
	goto loc_8238965C;
loc_82389654:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238965C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82389618
	if (ctx.cr6.gt) goto loc_82389618;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82389668:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823896ac
	if (ctx.cr6.eq) goto loc_823896AC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82389684
	if (ctx.cr6.gt) goto loc_82389684;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82389684:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823896ac
	if (!ctx.cr6.eq) goto loc_823896AC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x823896c4
	goto loc_823896C4;
loc_823896AC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x823896c4
	goto loc_823896C4;
loc_823896C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823896C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823896dc
	if (ctx.cr6.eq) goto loc_823896DC;
	// lbz r11,25(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238970c
	if (!ctx.cr6.eq) goto loc_8238970C;
loc_823896DC:
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238970c
	if (!ctx.cr6.eq) goto loc_8238970C;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r11,-27380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27380);
	// stb r29,112(r28)
	PPC_STORE_U8(ctx.r28.u32 + 112, ctx.r29.u8);
	// b 0x82389708
	goto loc_82389708;
loc_823896F8:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-27380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27380);
	// stb r10,112(r28)
	PPC_STORE_U8(ctx.r28.u32 + 112, ctx.r10.u8);
loc_82389708:
	// stw r11,264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 264, ctx.r11.u32);
loc_8238970C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389724
	if (ctx.cr6.eq) goto loc_82389724;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821781e0
	ctx.lr = 0x82389724;
	sub_821781E0(ctx, base);
loc_82389724:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8238972C"))) PPC_WEAK_FUNC(sub_8238972C);
PPC_FUNC_IMPL(__imp__sub_8238972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389730"))) PPC_WEAK_FUNC(sub_82389730);
PPC_FUNC_IMPL(__imp__sub_82389730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82389738;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r27,-31927
	ctx.r27.s64 = -2092367872;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238979c
	if (ctx.cr6.eq) goto loc_8238979C;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238976C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,101
	ctx.r8.s64 = 101;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82279a40
	ctx.lr = 0x8238979C;
	sub_82279A40(ctx, base);
loc_8238979C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823898a8
	if (ctx.cr6.eq) goto loc_823898A8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823897e4
	if (ctx.cr6.eq) goto loc_823897E4;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823898ac
	goto loc_823898AC;
loc_823897E4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82389850
	if (!ctx.cr0.gt) goto loc_82389850;
loc_82389800:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82389820
	if (ctx.cr6.lt) goto loc_82389820;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82389820:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238983c
	if (ctx.cr6.eq) goto loc_8238983C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82389844
	goto loc_82389844;
loc_8238983C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82389844:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82389800
	if (ctx.cr6.gt) goto loc_82389800;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82389850:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82389894
	if (ctx.cr6.eq) goto loc_82389894;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238986c
	if (ctx.cr6.gt) goto loc_8238986C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8238986C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389894
	if (!ctx.cr6.eq) goto loc_82389894;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823898ac
	goto loc_823898AC;
loc_82389894:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823898ac
	goto loc_823898AC;
loc_823898A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823898AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389930
	if (ctx.cr6.eq) goto loc_82389930;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
loc_823898BC:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823898d4
	if (ctx.cr6.eq) goto loc_823898D4;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x821e8870
	ctx.lr = 0x823898D0;
	sub_821E8870(ctx, base);
	// b 0x823898d8
	goto loc_823898D8;
loc_823898D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823898D8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389930
	if (ctx.cr6.eq) goto loc_82389930;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823898bc
	if (ctx.cr6.eq) goto loc_823898BC;
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389904
	if (ctx.cr6.eq) goto loc_82389904;
	// lbz r11,26821(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26821);
	// b 0x82389908
	goto loc_82389908;
loc_82389904:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82389908:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823898bc
	if (ctx.cr6.eq) goto loc_823898BC;
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// li r5,25
	ctx.r5.s64 = 25;
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x8233a810
	ctx.lr = 0x8238992C;
	sub_8233A810(ctx, base);
	// b 0x823898bc
	goto loc_823898BC;
loc_82389930:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389a34
	if (ctx.cr6.eq) goto loc_82389A34;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389970
	if (ctx.cr6.eq) goto loc_82389970;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389a38
	goto loc_82389A38;
loc_82389970:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823899dc
	if (!ctx.cr0.gt) goto loc_823899DC;
loc_8238998C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823899ac
	if (ctx.cr6.lt) goto loc_823899AC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_823899AC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823899c8
	if (ctx.cr6.eq) goto loc_823899C8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823899d0
	goto loc_823899D0;
loc_823899C8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823899D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238998c
	if (ctx.cr6.gt) goto loc_8238998C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823899DC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82389a20
	if (ctx.cr6.eq) goto loc_82389A20;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823899f8
	if (ctx.cr6.gt) goto loc_823899F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823899F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389a20
	if (!ctx.cr6.eq) goto loc_82389A20;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389a38
	goto loc_82389A38;
loc_82389A20:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389a38
	goto loc_82389A38;
loc_82389A34:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82389A38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389a5c
	if (ctx.cr6.eq) goto loc_82389A5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82435e30
	ctx.lr = 0x82389A50;
	sub_82435E30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82432a88
	ctx.lr = 0x82389A5C;
	sub_82432A88(ctx, base);
loc_82389A5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82389A64"))) PPC_WEAK_FUNC(sub_82389A64);
PPC_FUNC_IMPL(__imp__sub_82389A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389A68"))) PPC_WEAK_FUNC(sub_82389A68);
PPC_FUNC_IMPL(__imp__sub_82389A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82389A70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lbz r10,780(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 780);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82389b04
	if (ctx.cr6.eq) goto loc_82389B04;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389ab8
	if (ctx.cr6.eq) goto loc_82389AB8;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82389abc
	if (!ctx.cr6.eq) goto loc_82389ABC;
loc_82389AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82389ABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389b00
	if (ctx.cr6.eq) goto loc_82389B00;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82389b00
	if (!ctx.cr6.eq) goto loc_82389B00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,17540
	ctx.r9.s64 = ctx.r11.s64 + 17540;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r29,140(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x82389AF0;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82395af0
	ctx.lr = 0x82389B00;
	sub_82395AF0(ctx, base);
loc_82389B00:
	// stb r30,780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 780, ctx.r30.u8);
loc_82389B04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82389B0C"))) PPC_WEAK_FUNC(sub_82389B0C);
PPC_FUNC_IMPL(__imp__sub_82389B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389B10"))) PPC_WEAK_FUNC(sub_82389B10);
PPC_FUNC_IMPL(__imp__sub_82389B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82389B18;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389b50
	if (ctx.cr6.eq) goto loc_82389B50;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82389b54
	if (!ctx.cr6.eq) goto loc_82389B54;
loc_82389B50:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389B54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389b90
	if (ctx.cr6.eq) goto loc_82389B90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r11,18068
	ctx.r9.s64 = ctx.r11.s64 + 18068;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r31,140(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x82389B78;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82713cd8
	ctx.lr = 0x82389B88;
	sub_82713CD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82389B90:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389c98
	if (ctx.cr6.eq) goto loc_82389C98;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389bd4
	if (ctx.cr6.eq) goto loc_82389BD4;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389c9c
	goto loc_82389C9C;
loc_82389BD4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82389c40
	if (!ctx.cr0.gt) goto loc_82389C40;
loc_82389BF0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82389c10
	if (ctx.cr6.lt) goto loc_82389C10;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82389C10:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82389c2c
	if (ctx.cr6.eq) goto loc_82389C2C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82389c34
	goto loc_82389C34;
loc_82389C2C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82389C34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82389bf0
	if (ctx.cr6.gt) goto loc_82389BF0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82389C40:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82389c84
	if (ctx.cr6.eq) goto loc_82389C84;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82389c5c
	if (ctx.cr6.gt) goto loc_82389C5C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389C5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389c84
	if (!ctx.cr6.eq) goto loc_82389C84;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389c9c
	goto loc_82389C9C;
loc_82389C84:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389c9c
	goto loc_82389C9C;
loc_82389C98:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389C9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389cb0
	if (ctx.cr6.eq) goto loc_82389CB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82432a88
	ctx.lr = 0x82389CB0;
	sub_82432A88(ctx, base);
loc_82389CB0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389db8
	if (ctx.cr6.eq) goto loc_82389DB8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389cf4
	if (ctx.cr6.eq) goto loc_82389CF4;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389dbc
	goto loc_82389DBC;
loc_82389CF4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82389d60
	if (!ctx.cr0.gt) goto loc_82389D60;
loc_82389D10:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82389d30
	if (ctx.cr6.lt) goto loc_82389D30;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82389D30:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82389d4c
	if (ctx.cr6.eq) goto loc_82389D4C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82389d54
	goto loc_82389D54;
loc_82389D4C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82389D54:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82389d10
	if (ctx.cr6.gt) goto loc_82389D10;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82389D60:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82389da4
	if (ctx.cr6.eq) goto loc_82389DA4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82389d7c
	if (ctx.cr6.gt) goto loc_82389D7C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389D7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389da4
	if (!ctx.cr6.eq) goto loc_82389DA4;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389dbc
	goto loc_82389DBC;
loc_82389DA4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389dbc
	goto loc_82389DBC;
loc_82389DB8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389DBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389e5c
	if (ctx.cr6.eq) goto loc_82389E5C;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82389de0
	if (ctx.cr6.eq) goto loc_82389DE0;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x821e8870
	ctx.lr = 0x82389DDC;
	sub_821E8870(ctx, base);
	// b 0x82389de4
	goto loc_82389DE4;
loc_82389DE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82389DE4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389e5c
	if (!ctx.cr6.eq) goto loc_82389E5C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x82389DF8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82389e20
	if (ctx.cr6.eq) goto loc_82389E20;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82335168
	ctx.lr = 0x82389E0C;
	sub_82335168(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,-32200
	ctx.r9.s64 = ctx.r10.s64 + -32200;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82389e24
	goto loc_82389E24;
loc_82389E20:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389E24:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389e4c
	if (ctx.cr6.eq) goto loc_82389E4C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x82389E38;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8810
	ctx.lr = 0x82389E44;
	sub_823C8810(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82389E4C:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8810
	ctx.lr = 0x82389E5C;
	sub_823C8810(ctx, base);
loc_82389E5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82389E64"))) PPC_WEAK_FUNC(sub_82389E64);
PPC_FUNC_IMPL(__imp__sub_82389E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389E68"))) PPC_WEAK_FUNC(sub_82389E68);
PPC_FUNC_IMPL(__imp__sub_82389E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82389E70;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389f94
	if (ctx.cr6.eq) goto loc_82389F94;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389ed0
	if (ctx.cr6.eq) goto loc_82389ED0;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389f98
	goto loc_82389F98;
loc_82389ED0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82389f3c
	if (!ctx.cr0.gt) goto loc_82389F3C;
loc_82389EEC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82389f0c
	if (ctx.cr6.lt) goto loc_82389F0C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82389F0C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82389f28
	if (ctx.cr6.eq) goto loc_82389F28;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82389f30
	goto loc_82389F30;
loc_82389F28:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82389F30:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82389eec
	if (ctx.cr6.gt) goto loc_82389EEC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82389F3C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82389f80
	if (ctx.cr6.eq) goto loc_82389F80;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82389f58
	if (ctx.cr6.gt) goto loc_82389F58;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389F58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389f80
	if (!ctx.cr6.eq) goto loc_82389F80;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389f98
	goto loc_82389F98;
loc_82389F80:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82389f98
	goto loc_82389F98;
loc_82389F94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389F98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389fc4
	if (ctx.cr6.eq) goto loc_82389FC4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389fb8
	if (ctx.cr6.eq) goto loc_82389FB8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82389fc0
	goto loc_82389FC0;
loc_82389FB8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
loc_82389FC0:
	// bl 0x82547ec8
	ctx.lr = 0x82389FC4;
	sub_82547EC8(ctx, base);
loc_82389FC4:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r9,26912(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82389ff0
	if (ctx.cr6.eq) goto loc_82389FF0;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82389ff4
	if (!ctx.cr6.eq) goto loc_82389FF4;
loc_82389FF0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82389FF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a06c
	if (ctx.cr6.eq) goto loc_8238A06C;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238a06c
	if (!ctx.cr6.eq) goto loc_8238A06C;
	// lbz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 284);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238a028
	if (!ctx.cr6.eq) goto loc_8238A028;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a06c
	if (ctx.cr6.eq) goto loc_8238A06C;
loc_8238A028:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// addi r10,r11,18032
	ctx.r10.s64 = ctx.r11.s64 + 18032;
	// stb r31,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r31.u8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r27,140(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x8238A050;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8238ab78
	ctx.lr = 0x8238A060;
	sub_8238AB78(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,11192
	ctx.r7.s64 = ctx.r8.s64 + 11192;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
loc_8238A06C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238a07c
	if (!ctx.cr6.eq) goto loc_8238A07C;
	// stb r28,284(r30)
	PPC_STORE_U8(ctx.r30.u32 + 284, ctx.r28.u8);
loc_8238A07C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238a184
	if (ctx.cr6.eq) goto loc_8238A184;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238a0c0
	if (ctx.cr6.eq) goto loc_8238A0C0;
	// lbz r10,34(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238a188
	goto loc_8238A188;
loc_8238A0C0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238a12c
	if (!ctx.cr0.gt) goto loc_8238A12C;
loc_8238A0DC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,34
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 34, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238a0fc
	if (ctx.cr6.lt) goto loc_8238A0FC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_8238A0FC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238a118
	if (ctx.cr6.eq) goto loc_8238A118;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238a120
	goto loc_8238A120;
loc_8238A118:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238A120:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238a0dc
	if (ctx.cr6.gt) goto loc_8238A0DC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238A12C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238a170
	if (ctx.cr6.eq) goto loc_8238A170;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238a148
	if (ctx.cr6.gt) goto loc_8238A148;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8238A148:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238a170
	if (!ctx.cr6.eq) goto loc_8238A170;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238a188
	goto loc_8238A188;
loc_8238A170:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238a188
	goto loc_8238A188;
loc_8238A184:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8238A188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a1a4
	if (ctx.cr6.eq) goto loc_8238A1A4;
	// lbz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 284);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,101(r10)
	PPC_STORE_U8(ctx.r10.u32 + 101, ctx.r8.u8);
loc_8238A1A4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238a2ac
	if (ctx.cr6.eq) goto loc_8238A2AC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238a1e8
	if (ctx.cr6.eq) goto loc_8238A1E8;
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238a2b0
	goto loc_8238A2B0;
loc_8238A1E8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238a254
	if (!ctx.cr0.gt) goto loc_8238A254;
loc_8238A204:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238a224
	if (ctx.cr6.lt) goto loc_8238A224;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_8238A224:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238a240
	if (ctx.cr6.eq) goto loc_8238A240;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238a248
	goto loc_8238A248;
loc_8238A240:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238A248:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238a204
	if (ctx.cr6.gt) goto loc_8238A204;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238A254:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238a298
	if (ctx.cr6.eq) goto loc_8238A298;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238a270
	if (ctx.cr6.gt) goto loc_8238A270;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8238A270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238a298
	if (!ctx.cr6.eq) goto loc_8238A298;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238a2b0
	goto loc_8238A2B0;
loc_8238A298:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238a2b0
	goto loc_8238A2B0;
loc_8238A2AC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8238A2B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a2cc
	if (ctx.cr6.eq) goto loc_8238A2CC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,29(r10)
	PPC_STORE_U8(ctx.r10.u32 + 29, ctx.r8.u8);
loc_8238A2CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8238A2D8"))) PPC_WEAK_FUNC(sub_8238A2D8);
PPC_FUNC_IMPL(__imp__sub_8238A2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r10,772(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// lwz r5,768(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// subf. r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8238a32c
	if (!ctx.cr0.gt) goto loc_8238A32C;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,420(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8238a3e0
	if (ctx.cr6.lt) goto loc_8238A3E0;
loc_8238A32C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8238a344
	if (!ctx.cr6.lt) goto loc_8238A344;
	// stw r9,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r9.u32);
loc_8238A344:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm r5,r8,22,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238a364
	if (ctx.cr6.eq) goto loc_8238A364;
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// lfs f31,-6440(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6440);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8238a36c
	goto loc_8238A36C;
loc_8238A364:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f31,-18864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18864);
	ctx.f31.f64 = double(temp.f32);
loc_8238A36C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stb r7,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r7.u8);
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// std r4,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r4.u64);
	// bl 0x8221eb58
	ctx.lr = 0x8238A3B4;
	sub_8221EB58(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// lfd f0,28352(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 28352);
	// lfd f13,28360(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 28360);
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fdiv f9,f10,f13
	ctx.f9.f64 = ctx.f10.f64 / ctx.f13.f64;
	// fadd f8,f9,f31
	ctx.f8.f64 = ctx.f9.f64 + ctx.f31.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8238A3E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A3F8"))) PPC_WEAK_FUNC(sub_8238A3F8);
PPC_FUNC_IMPL(__imp__sub_8238A3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238A400;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// lwz r10,768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8238a618
	if (ctx.cr0.eq) goto loc_8238A618;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8238a454
	if (!ctx.cr6.eq) goto loc_8238A454;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x8238a60c
	goto loc_8238A60C;
loc_8238A454:
	// bl 0x8221eb78
	ctx.lr = 0x8238A458;
	sub_8221EB78(ctx, base);
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// lwz r10,768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic. r6,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r6.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x8238a618
	if (!ctx.cr0.gt) goto loc_8238A618;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
loc_8238A47C:
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8238a4e8
	if (!ctx.cr6.lt) goto loc_8238A4E8;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238a4e8
	if (ctx.cr6.eq) goto loc_8238A4E8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8238a47c
	if (ctx.cr6.lt) goto loc_8238A47C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8238A4E8:
	// lfs f13,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x8238a510
	if (ctx.cr6.lt) goto loc_8238A510;
	// lbz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238a510
	if (ctx.cr6.eq) goto loc_8238A510;
	// lvx128 v1,r0,r30
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// b 0x8238a60c
	goto loc_8238A60C;
loc_8238A510:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r10,r10,-27468
	ctx.r10.s64 = ctx.r10.s64 + -27468;
	// lfs f1,-25888(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x8238a564
	if (!ctx.cr6.gt) goto loc_8238A564;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,9556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9556);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8238a558
	if (!ctx.cr6.gt) goto loc_8238A558;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8238a564
	goto loc_8238A564;
loc_8238A558:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8238a564
	if (!ctx.cr6.lt) goto loc_8238A564;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8238A564:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lvx128 v13,r0,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// vspltisw v11,-1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// std r4,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v6,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vslw v10,v11,v11
	ctx.v10.u32[0] = ctx.v11.u32[0] << (ctx.v11.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v11.u32[1] << (ctx.v11.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v11.u32[2] << (ctx.v11.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v11.u32[3] << (ctx.v11.u8[12] & 0x1F);
	// vcmpgefp v4,v6,v12
	_mm_store_ps(ctx.v4.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)));
	// vxor v5,v0,v10
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v9,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vspltw v7,v9,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// vnor v3,v4,v4
	// vsel v2,v0,v5,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vsubfp v1,v2,v13
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v31,v1,v7,v13
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v31,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821f2e50
	ctx.lr = 0x8238A5EC;
	sub_821F2E50(ctx, base);
	// lvx128 v30,r0,r30
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vsubfp128 v29,v30,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v127.f32)));
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lvlx v28,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v1,v28,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vmaddcfp128 v1,v29,v1,v127
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v127.f32)));
loc_8238A60C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a628
	ctx.lr = 0x8238A618;
	sub_8238A628(ctx, base);
loc_8238A618:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238A628"))) PPC_WEAK_FUNC(sub_8238A628);
PPC_FUNC_IMPL(__imp__sub_8238A628) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// std r4,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r4.u64);
	// std r5,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r5.u64);
	// lwz r31,124(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238a7bc
	if (ctx.cr6.eq) goto loc_8238A7BC;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238a69c
	if (ctx.cr6.eq) goto loc_8238A69C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8220ca28
	ctx.lr = 0x8238A678;
	sub_8220CA28(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lfs f1,-8236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8236);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238A698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8238a7bc
	goto loc_8238A7BC;
loc_8238A69C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238A6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238A6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lvx128 v13,r0,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r11,-8236
	ctx.r30.s64 = ctx.r11.s64 + -8236;
	// vsubfp128 v0,v127,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f0,-25888(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8238a730
	if (ctx.cr6.lt) goto loc_8238A730;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,-19616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -19616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// vmaddfp v1,v0,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238A730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238A730:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// lfs f0,2240(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8238a7bc
	if (ctx.cr6.gt) goto loc_8238A7BC;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v9,-1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lfs f0,-19616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -19616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vcmpgefp v8,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// vslw v7,v9,v9
	ctx.v7.u32[0] = ctx.v9.u32[0] << (ctx.v9.u8[0] & 0x1F);
	ctx.v7.u32[1] = ctx.v9.u32[1] << (ctx.v9.u8[4] & 0x1F);
	ctx.v7.u32[2] = ctx.v9.u32[2] << (ctx.v9.u8[8] & 0x1F);
	ctx.v7.u32[3] = ctx.v9.u32[3] << (ctx.v9.u8[12] & 0x1F);
	// lvlx v6,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v5,v6,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vxor v4,v13,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// vnor v3,v8,v8
	// vsel v2,v13,v4,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vsubfp v1,v2,v0
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v31,v1,v5,v0
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v31,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238A7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238A7BC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A7DC"))) PPC_WEAK_FUNC(sub_8238A7DC);
PPC_FUNC_IMPL(__imp__sub_8238A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A7E0"))) PPC_WEAK_FUNC(sub_8238A7E0);
PPC_FUNC_IMPL(__imp__sub_8238A7E0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x8238A7FC;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a82c
	if (ctx.cr6.eq) goto loc_8238A82C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-22200
	ctx.r7.s64 = ctx.r9.s64 + -22200;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8238a830
	goto loc_8238A830;
loc_8238A82C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238A830:
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

__attribute__((alias("__imp__sub_8238A848"))) PPC_WEAK_FUNC(sub_8238A848);
PPC_FUNC_IMPL(__imp__sub_8238A848) {
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
	// bl 0x829ff648
	ctx.lr = 0x8238A868;
	sub_829FF648(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238a8b0
	if (ctx.cr6.eq) goto loc_8238A8B0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x8238A87C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238a8a8
	if (ctx.cr6.eq) goto loc_8238A8A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32105
	ctx.r9.s64 = -2104033280;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-32320
	ctx.r7.s64 = ctx.r9.s64 + -32320;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8238a8ac
	goto loc_8238A8AC;
loc_8238A8A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238A8AC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8238A8B0:
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

__attribute__((alias("__imp__sub_8238A8C8"))) PPC_WEAK_FUNC(sub_8238A8C8);
PPC_FUNC_IMPL(__imp__sub_8238A8C8) {
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
	// bl 0x829ff648
	ctx.lr = 0x8238A8E8;
	sub_829FF648(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238a930
	if (ctx.cr6.eq) goto loc_8238A930;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x8238A8FC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238a928
	if (ctx.cr6.eq) goto loc_8238A928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-22168
	ctx.r7.s64 = ctx.r9.s64 + -22168;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8238a92c
	goto loc_8238A92C;
loc_8238A928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238A92C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8238A930:
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

__attribute__((alias("__imp__sub_8238A948"))) PPC_WEAK_FUNC(sub_8238A948);
PPC_FUNC_IMPL(__imp__sub_8238A948) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238A964"))) PPC_WEAK_FUNC(sub_8238A964);
PPC_FUNC_IMPL(__imp__sub_8238A964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A968"))) PPC_WEAK_FUNC(sub_8238A968);
PPC_FUNC_IMPL(__imp__sub_8238A968) {
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
	// beq cr6,0x8238a9a4
	if (ctx.cr6.eq) goto loc_8238A9A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x8238A994;
	sub_821940C8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x8221be68
	ctx.lr = 0x8238A9A4;
	sub_8221BE68(ctx, base);
loc_8238A9A4:
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

__attribute__((alias("__imp__sub_8238A9B8"))) PPC_WEAK_FUNC(sub_8238A9B8);
PPC_FUNC_IMPL(__imp__sub_8238A9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8238A9C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8238A9EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8238a9fc
	if (ctx.cr6.eq) goto loc_8238A9FC;
	// twi 31,r0,22
loc_8238A9FC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238aa80
	if (ctx.cr6.eq) goto loc_8238AA80;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238aa14
	if (!ctx.cr6.eq) goto loc_8238AA14;
	// twi 31,r0,22
loc_8238AA14:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x8238aa80
	if (!ctx.cr6.gt) goto loc_8238AA80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238aa48
	if (!ctx.cr6.eq) goto loc_8238AA48;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8238aa4c
	if (ctx.cr6.eq) goto loc_8238AA4C;
loc_8238AA48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8238AA4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238aa68
	if (ctx.cr6.eq) goto loc_8238AA68;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228a900
	ctx.lr = 0x8238AA68;
	sub_8228A900(ctx, base);
loc_8238AA68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238aa78
	if (!ctx.cr6.eq) goto loc_8238AA78;
	// twi 31,r0,22
loc_8238AA78:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8238a9ec
	goto loc_8238A9EC;
loc_8238AA80:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238aa98
	if (!ctx.cr6.eq) goto loc_8238AA98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8238AA98:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8238AAAC"))) PPC_WEAK_FUNC(sub_8238AAAC);
PPC_FUNC_IMPL(__imp__sub_8238AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AAB0"))) PPC_WEAK_FUNC(sub_8238AAB0);
PPC_FUNC_IMPL(__imp__sub_8238AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238ab60
	if (!ctx.cr6.gt) goto loc_8238AB60;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238AAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238AB08;
	sub_82C816D0(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r6,16304
	ctx.r3.s64 = ctx.r6.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238AB24;
	sub_82C81690(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,16320
	ctx.r10.s64 = ctx.r11.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238AB40;
	sub_82325FC8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238AB50;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238AB58;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238AB60;
	sub_829CE870(ctx, base);
loc_8238AB60:
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AB74"))) PPC_WEAK_FUNC(sub_8238AB74);
PPC_FUNC_IMPL(__imp__sub_8238AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AB78"))) PPC_WEAK_FUNC(sub_8238AB78);
PPC_FUNC_IMPL(__imp__sub_8238AB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238AB80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238ac98
	if (!ctx.cr6.gt) goto loc_8238AC98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238ABB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238abcc
	if (ctx.cr6.eq) goto loc_8238ABCC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238abd8
	goto loc_8238ABD8;
loc_8238ABCC:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238ABD8:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238ABEC;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238AC08;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238AC24;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238AC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238AC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238AC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238AC88;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238AC90;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238AC98;
	sub_829CE870(ctx, base);
loc_8238AC98:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238ACA0"))) PPC_WEAK_FUNC(sub_8238ACA0);
PPC_FUNC_IMPL(__imp__sub_8238ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238ACA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238ad78
	if (!ctx.cr6.gt) goto loc_8238AD78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238ACD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238acf4
	if (ctx.cr6.eq) goto loc_8238ACF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238ad00
	goto loc_8238AD00;
loc_8238ACF4:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238AD00:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238AD14;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238AD30;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238AD4C;
	sub_82325FC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bbb0
	ctx.lr = 0x8238AD58;
	sub_8238BBB0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238AD68;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238AD70;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238AD78;
	sub_829CE870(ctx, base);
loc_8238AD78:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238AD80"))) PPC_WEAK_FUNC(sub_8238AD80);
PPC_FUNC_IMPL(__imp__sub_8238AD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238AD88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238ae74
	if (!ctx.cr6.gt) goto loc_8238AE74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238ADB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238add4
	if (ctx.cr6.eq) goto loc_8238ADD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238ade0
	goto loc_8238ADE0;
loc_8238ADD4:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238ADE0:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238ADF4;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238AE10;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238AE2C;
	sub_82325FC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r7,r7,16196
	ctx.r7.s64 = ctx.r7.s64 + 16196;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238AE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238AE64;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238AE6C;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238AE74;
	sub_829CE870(ctx, base);
loc_8238AE74:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238AE7C"))) PPC_WEAK_FUNC(sub_8238AE7C);
PPC_FUNC_IMPL(__imp__sub_8238AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AE80"))) PPC_WEAK_FUNC(sub_8238AE80);
PPC_FUNC_IMPL(__imp__sub_8238AE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238AE88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238af94
	if (!ctx.cr6.gt) goto loc_8238AF94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238AEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238aed4
	if (ctx.cr6.eq) goto loc_8238AED4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238aee0
	goto loc_8238AEE0;
loc_8238AED4:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238AEE0:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238AEF4;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238AF10;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238AF2C;
	sub_82325FC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r7,r7,16196
	ctx.r7.s64 = ctx.r7.s64 + 16196;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238AF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238AF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238AF84;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238AF8C;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238AF94;
	sub_829CE870(ctx, base);
loc_8238AF94:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238AF9C"))) PPC_WEAK_FUNC(sub_8238AF9C);
PPC_FUNC_IMPL(__imp__sub_8238AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AFA0"))) PPC_WEAK_FUNC(sub_8238AFA0);
PPC_FUNC_IMPL(__imp__sub_8238AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238AFA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b0a4
	if (!ctx.cr6.gt) goto loc_8238B0A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238AFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238aff4
	if (ctx.cr6.eq) goto loc_8238AFF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238b000
	goto loc_8238B000;
loc_8238AFF4:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238B000:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B014;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238B030;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238B04C;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238B068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238B084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B094;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238B09C;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B0A4;
	sub_829CE870(ctx, base);
loc_8238B0A4:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B0AC"))) PPC_WEAK_FUNC(sub_8238B0AC);
PPC_FUNC_IMPL(__imp__sub_8238B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B0B0"))) PPC_WEAK_FUNC(sub_8238B0B0);
PPC_FUNC_IMPL(__imp__sub_8238B0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B0B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b200
	if (!ctx.cr6.gt) goto loc_8238B200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b104
	if (ctx.cr6.eq) goto loc_8238B104;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// b 0x8238b110
	goto loc_8238B110;
loc_8238B104:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8238B110:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B124;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81690
	ctx.lr = 0x8238B140;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82325fc8
	ctx.lr = 0x8238B15C;
	sub_82325FC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r7,r7,16196
	ctx.r7.s64 = ctx.r7.s64 + 16196;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238B1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,92(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238B1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238B1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B1F0;
	sub_82317E50(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829ce870
	ctx.lr = 0x8238B1F8;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B200;
	sub_829CE870(ctx, base);
loc_8238B200:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B208"))) PPC_WEAK_FUNC(sub_8238B208);
PPC_FUNC_IMPL(__imp__sub_8238B208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B210;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b318
	if (!ctx.cr6.gt) goto loc_8238B318;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b25c
	if (ctx.cr6.eq) goto loc_8238B25C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238b268
	goto loc_8238B268;
loc_8238B25C:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238B268:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B27C;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238B298;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238B2B4;
	sub_82325FC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r7,r7,16196
	ctx.r7.s64 = ctx.r7.s64 + 16196;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238B2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B308;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238B310;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B318;
	sub_829CE870(ctx, base);
loc_8238B318:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B320"))) PPC_WEAK_FUNC(sub_8238B320);
PPC_FUNC_IMPL(__imp__sub_8238B320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B328;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b47c
	if (!ctx.cr6.gt) goto loc_8238B47C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b374
	if (ctx.cr6.eq) goto loc_8238B374;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// b 0x8238b380
	goto loc_8238B380;
loc_8238B374:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8238B380:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B394;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c81690
	ctx.lr = 0x8238B3B0;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82325fc8
	ctx.lr = 0x8238B3CC;
	sub_82325FC8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,92(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238B3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238B408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8238B424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8238B440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B46C;
	sub_82317E50(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829ce870
	ctx.lr = 0x8238B474;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B47C;
	sub_829CE870(ctx, base);
loc_8238B47C:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B484"))) PPC_WEAK_FUNC(sub_8238B484);
PPC_FUNC_IMPL(__imp__sub_8238B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B488"))) PPC_WEAK_FUNC(sub_8238B488);
PPC_FUNC_IMPL(__imp__sub_8238B488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B490;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b590
	if (!ctx.cr6.gt) goto loc_8238B590;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b4dc
	if (ctx.cr6.eq) goto loc_8238B4DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238b4e8
	goto loc_8238B4E8;
loc_8238B4DC:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238B4E8:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B4FC;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238B518;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238B534;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,92(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238B554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238B570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B580;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238B588;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B590;
	sub_829CE870(ctx, base);
loc_8238B590:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B598"))) PPC_WEAK_FUNC(sub_8238B598);
PPC_FUNC_IMPL(__imp__sub_8238B598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B5A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b6c4
	if (!ctx.cr6.gt) goto loc_8238B6C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b5ec
	if (ctx.cr6.eq) goto loc_8238B5EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238b5f8
	goto loc_8238B5F8;
loc_8238B5EC:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238B5F8:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B60C;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238B628;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238B644;
	sub_82325FC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r7,r7,16216
	ctx.r7.s64 = ctx.r7.s64 + 16216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238B688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238B6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B6B4;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238B6BC;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B6C4;
	sub_829CE870(ctx, base);
loc_8238B6C4:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B6CC"))) PPC_WEAK_FUNC(sub_8238B6CC);
PPC_FUNC_IMPL(__imp__sub_8238B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B6D0"))) PPC_WEAK_FUNC(sub_8238B6D0);
PPC_FUNC_IMPL(__imp__sub_8238B6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B6D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b7e0
	if (!ctx.cr6.gt) goto loc_8238B7E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b724
	if (ctx.cr6.eq) goto loc_8238B724;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238b730
	goto loc_8238B730;
loc_8238B724:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238B730:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B744;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238B760;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238B77C;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238B798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r7,r5,16228
	ctx.r7.s64 = ctx.r5.s64 + 16228;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B7D0;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238B7D8;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B7E0;
	sub_829CE870(ctx, base);
loc_8238B7E0:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B7E8"))) PPC_WEAK_FUNC(sub_8238B7E8);
PPC_FUNC_IMPL(__imp__sub_8238B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B7F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b8d0
	if (!ctx.cr6.gt) goto loc_8238B8D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b83c
	if (ctx.cr6.eq) goto loc_8238B83C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238b848
	goto loc_8238B848;
loc_8238B83C:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238B848:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B85C;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238B878;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238B894;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,116(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238B8B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B8C0;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238B8C8;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B8D0;
	sub_829CE870(ctx, base);
loc_8238B8D0:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B8D8"))) PPC_WEAK_FUNC(sub_8238B8D8);
PPC_FUNC_IMPL(__imp__sub_8238B8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B8E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238b9c4
	if (!ctx.cr6.gt) goto loc_8238B9C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238B910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238b92c
	if (ctx.cr6.eq) goto loc_8238B92C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238b938
	goto loc_8238B938;
loc_8238B92C:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238B938:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238B94C;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238B968;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238B984;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,92(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238B9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238B9B4;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238B9BC;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238B9C4;
	sub_829CE870(ctx, base);
loc_8238B9C4:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238B9CC"))) PPC_WEAK_FUNC(sub_8238B9CC);
PPC_FUNC_IMPL(__imp__sub_8238B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B9D0"))) PPC_WEAK_FUNC(sub_8238B9D0);
PPC_FUNC_IMPL(__imp__sub_8238B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238B9D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238bab8
	if (!ctx.cr6.gt) goto loc_8238BAB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238BA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238ba24
	if (ctx.cr6.eq) goto loc_8238BA24;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238ba30
	goto loc_8238BA30;
loc_8238BA24:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238BA30:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238BA44;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238BA60;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238BA7C;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238BA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238BAA8;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238BAB0;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238BAB8;
	sub_829CE870(ctx, base);
loc_8238BAB8:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238BAC0"))) PPC_WEAK_FUNC(sub_8238BAC0);
PPC_FUNC_IMPL(__imp__sub_8238BAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238BAC8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238bba8
	if (!ctx.cr6.gt) goto loc_8238BBA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238BAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238bb14
	if (ctx.cr6.eq) goto loc_8238BB14;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238bb20
	goto loc_8238BB20;
loc_8238BB14:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238BB20:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238BB34;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238BB50;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238BB6C;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238BB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317f98
	ctx.lr = 0x8238BB98;
	sub_82317F98(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238BBA0;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238BBA8;
	sub_829CE870(ctx, base);
loc_8238BBA8:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238BBB0"))) PPC_WEAK_FUNC(sub_8238BBB0);
PPC_FUNC_IMPL(__imp__sub_8238BBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238BBB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f11,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-8700
	ctx.r10.s64 = ctx.r10.s64 + -8700;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-9000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-19152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19152);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f13,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f1,f4,f13,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f10,f13,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fabs f12,f9
	ctx.f12.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f7,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fctiwz f3,f2
	ctx.f3.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fabs f6,f8
	ctx.f6.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f5,f7
	ctx.f5.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fctiwz f2,f1
	ctx.f2.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f1,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8238bc6c
	if (!ctx.cr6.gt) goto loc_8238BC6C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
loc_8238BC6C:
	// fcmpu cr6,f6,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// ble cr6,0x8238bc80
	if (!ctx.cr6.gt) goto loc_8238BC80;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
loc_8238BC80:
	// fcmpu cr6,f5,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// ble cr6,0x8238bc90
	if (!ctx.cr6.gt) goto loc_8238BC90;
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// li r9,3
	ctx.r9.s64 = 3;
loc_8238BC90:
	// lfs f13,-18768(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18768);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x8238bcc0
	if (!ctx.cr6.lt) goto loc_8238BCC0;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f10,40(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmuls f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f9,44(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_8238BCC0:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lfs f11,548(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x8238bd04
	if (ctx.cr6.eq) goto loc_8238BD04;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8238bcf8
	if (ctx.cr6.eq) goto loc_8238BCF8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x8238bce8
	if (ctx.cr6.eq) goto loc_8238BCE8;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8238bd08
	goto loc_8238BD08;
loc_8238BCE8:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8238bd10
	goto loc_8238BD10;
loc_8238BCF8:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8238bd0c
	goto loc_8238BD0C;
loc_8238BD04:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
loc_8238BD08:
	// lfs f12,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
loc_8238BD0C:
	// lfs f10,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
loc_8238BD10:
	// fmadds f12,f12,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// clrlwi r10,r6,8
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFFFF;
	// fmadds f13,f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// rlwinm r4,r8,24,0,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// fmadds f0,f10,f11,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// or r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// rlwinm r8,r8,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// rlwinm r4,r7,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r9,6,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xC0;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// clrlwi r6,r11,22
	ctx.r6.u64 = ctx.r11.u32 & 0x3FF;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r30,r6,18,14,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// clrlwi r10,r31,22
	ctx.r10.u64 = ctx.r31.u32 & 0x3FF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r31,r10,8,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r5,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// or r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r6,r6,18,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFFFC0000;
	// or r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 | ctx.r31.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r8,r5,28,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xF0000000;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r7,r29,r31
	ctx.r7.u64 = ctx.r29.u64 | ctx.r31.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r7,95(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stb r7,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r7.u8);
	// bl 0x82c80f50
	ctx.lr = 0x8238BDF0;
	sub_82C80F50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238BDF8"))) PPC_WEAK_FUNC(sub_8238BDF8);
PPC_FUNC_IMPL(__imp__sub_8238BDF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,218
	ctx.r3.s64 = 218;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BE00"))) PPC_WEAK_FUNC(sub_8238BE00);
PPC_FUNC_IMPL(__imp__sub_8238BE00) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12124
	ctx.r4.s64 = ctx.r11.s64 + 12124;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8238BE24;
	sub_8222CF18(ctx, base);
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

__attribute__((alias("__imp__sub_8238BE3C"))) PPC_WEAK_FUNC(sub_8238BE3C);
PPC_FUNC_IMPL(__imp__sub_8238BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BE40"))) PPC_WEAK_FUNC(sub_8238BE40);
PPC_FUNC_IMPL(__imp__sub_8238BE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r9,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r9.u8);
	// stb r11,86(r3)
	PPC_STORE_U8(ctx.r3.u32 + 86, ctx.r11.u8);
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r11.u8);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r9,95(r3)
	PPC_STORE_U8(ctx.r3.u32 + 95, ctx.r9.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r11,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r11.u8);
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// std r11,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_8238BE98:
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x8238be98
	if (!ctx.cr0.eq) goto loc_8238BE98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BEB0"))) PPC_WEAK_FUNC(sub_8238BEB0);
PPC_FUNC_IMPL(__imp__sub_8238BEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8238BEB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238bedc
	if (!ctx.cr6.eq) goto loc_8238BEDC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8238c480
	if (ctx.cr6.eq) goto loc_8238C480;
loc_8238BEDC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238bf68
	if (ctx.cr6.eq) goto loc_8238BF68;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238bf60
	if (!ctx.cr6.eq) goto loc_8238BF60;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238bf60
	if (!ctx.cr0.gt) goto loc_8238BF60;
loc_8238BF14:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 91, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238bf34
	if (ctx.cr6.lt) goto loc_8238BF34;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8238BF34:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238bf50
	if (ctx.cr6.eq) goto loc_8238BF50;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238bf58
	goto loc_8238BF58;
loc_8238BF50:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238BF58:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238bf14
	if (ctx.cr6.gt) goto loc_8238BF14;
loc_8238BF60:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238bf6c
	goto loc_8238BF6C;
loc_8238BF68:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238BF6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c480
	if (ctx.cr6.eq) goto loc_8238C480;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r31,28600(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28600);
	// bl 0x82266070
	ctx.lr = 0x8238BF84;
	sub_82266070(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238be40
	ctx.lr = 0x8238BF90;
	sub_8238BE40(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x8238bfb0
	if (ctx.cr6.eq) goto loc_8238BFB0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8238BFB0:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x821b25a8
	ctx.lr = 0x8238BFC0;
	sub_821B25A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r3,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r3.u64);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x8238c044
	if (ctx.cr6.eq) goto loc_8238C044;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82404800
	ctx.lr = 0x8238BFE4;
	sub_82404800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c044
	if (ctx.cr6.eq) goto loc_8238C044;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r8,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 4;
loc_8238C00C:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8238c028
	if (!ctx.cr6.lt) goto loc_8238C028;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// b 0x8238c030
	goto loc_8238C030;
loc_8238C028:
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8238C030:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8238c00c
	if (ctx.cr6.lt) goto loc_8238C00C;
loc_8238C044:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238c08c
	if (ctx.cr6.eq) goto loc_8238C08C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82577a30
	ctx.lr = 0x8238C05C;
	sub_82577A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c08c
	if (ctx.cr6.eq) goto loc_8238C08C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
loc_8238C08C:
	// lis r27,-31927
	ctx.r27.s64 = -2092367872;
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c0b8
	if (ctx.cr6.eq) goto loc_8238C0B8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822fcf18
	ctx.lr = 0x8238C0B8;
	sub_822FCF18(ctx, base);
loc_8238C0B8:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,30256
	ctx.r3.s64 = ctx.r11.s64 + 30256;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8238d988
	ctx.lr = 0x8238C0D8;
	sub_8238D988(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c214
	if (ctx.cr6.eq) goto loc_8238C214;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c1f8
	if (ctx.cr6.eq) goto loc_8238C1F8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c134
	if (ctx.cr6.eq) goto loc_8238C134;
	// lbz r10,13(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c1fc
	goto loc_8238C1FC;
loc_8238C134:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238c1a0
	if (!ctx.cr0.gt) goto loc_8238C1A0;
loc_8238C150:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238c170
	if (ctx.cr6.lt) goto loc_8238C170;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8238C170:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238c18c
	if (ctx.cr6.eq) goto loc_8238C18C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238c194
	goto loc_8238C194;
loc_8238C18C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238C194:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238c150
	if (ctx.cr6.gt) goto loc_8238C150;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238C1A0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238c1e4
	if (ctx.cr6.eq) goto loc_8238C1E4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238c1bc
	if (ctx.cr6.gt) goto loc_8238C1BC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238C1BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c1e4
	if (!ctx.cr6.eq) goto loc_8238C1E4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c1fc
	goto loc_8238C1FC;
loc_8238C1E4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c1fc
	goto loc_8238C1FC;
loc_8238C1F8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238C1FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c214
	if (ctx.cr6.eq) goto loc_8238C214;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8261af88
	ctx.lr = 0x8238C214;
	sub_8261AF88(ctx, base);
loc_8238C214:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8238c348
	if (!ctx.cr6.gt) goto loc_8238C348;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c324
	if (ctx.cr6.eq) goto loc_8238C324;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c260
	if (ctx.cr6.eq) goto loc_8238C260;
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c328
	goto loc_8238C328;
loc_8238C260:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238c2cc
	if (!ctx.cr0.gt) goto loc_8238C2CC;
loc_8238C27C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,81
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 81, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238c29c
	if (ctx.cr6.lt) goto loc_8238C29C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8238C29C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238c2b8
	if (ctx.cr6.eq) goto loc_8238C2B8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238c2c0
	goto loc_8238C2C0;
loc_8238C2B8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238C2C0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238c27c
	if (ctx.cr6.gt) goto loc_8238C27C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238C2CC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238c310
	if (ctx.cr6.eq) goto loc_8238C310;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,81
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 81, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238c2e8
	if (ctx.cr6.gt) goto loc_8238C2E8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238C2E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c310
	if (!ctx.cr6.eq) goto loc_8238C310;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c328
	goto loc_8238C328;
loc_8238C310:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c328
	goto loc_8238C328;
loc_8238C324:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238C328:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c348
	if (ctx.cr6.eq) goto loc_8238C348;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// neg r4,r26
	ctx.r4.s64 = -ctx.r26.s64;
	// bl 0x8239e698
	ctx.lr = 0x8238C348;
	sub_8239E698(ctx, base);
loc_8238C348:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c450
	if (ctx.cr6.eq) goto loc_8238C450;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c38c
	if (ctx.cr6.eq) goto loc_8238C38C;
	// lbz r9,57(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c454
	goto loc_8238C454;
loc_8238C38C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238c3f8
	if (!ctx.cr0.gt) goto loc_8238C3F8;
loc_8238C3A8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238c3c8
	if (ctx.cr6.lt) goto loc_8238C3C8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8238C3C8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238c3e4
	if (ctx.cr6.eq) goto loc_8238C3E4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238c3ec
	goto loc_8238C3EC;
loc_8238C3E4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238C3EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238c3a8
	if (ctx.cr6.gt) goto loc_8238C3A8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238C3F8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238c43c
	if (ctx.cr6.eq) goto loc_8238C43C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238c414
	if (ctx.cr6.gt) goto loc_8238C414;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238C414:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c43c
	if (!ctx.cr6.eq) goto loc_8238C43C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c454
	goto loc_8238C454;
loc_8238C43C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c454
	goto loc_8238C454;
loc_8238C450:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238C454:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c468
	if (ctx.cr6.eq) goto loc_8238C468;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x824a0100
	ctx.lr = 0x8238C468;
	sub_824A0100(ctx, base);
loc_8238C468:
	// lwz r11,26912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26912);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e8d28
	ctx.lr = 0x8238C480;
	sub_824E8D28(ctx, base);
loc_8238C480:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8238C488"))) PPC_WEAK_FUNC(sub_8238C488);
PPC_FUNC_IMPL(__imp__sub_8238C488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x8238C490;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r18,r20,12
	ctx.r18.s64 = ctx.r20.s64 + 12;
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c4b8
	if (!ctx.cr6.eq) goto loc_8238C4B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r6,r11,63
	ctx.r6.s64 = ctx.r11.s64 + 63;
	// b 0x8238c4bc
	goto loc_8238C4BC;
loc_8238C4B8:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8238C4BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,8(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r4,4(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r3,r11,-32028
	ctx.r3.s64 = ctx.r11.s64 + -32028;
	// bl 0x82172ee8
	ctx.lr = 0x8238C4D0;
	sub_82172EE8(ctx, base);
	// lis r16,-31927
	ctx.r16.s64 = -2092367872;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,26912(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c57c
	if (ctx.cr6.eq) goto loc_8238C57C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c578
	if (ctx.cr6.eq) goto loc_8238C578;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c528
	if (ctx.cr6.eq) goto loc_8238C528;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238c52c
	if (!ctx.cr6.eq) goto loc_8238C52C;
loc_8238C528:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_8238C52C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c678
	if (ctx.cr6.eq) goto loc_8238C678;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c648
	if (ctx.cr6.eq) goto loc_8238C648;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c584
	if (ctx.cr6.eq) goto loc_8238C584;
	// lbz r10,122(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 122);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c64c
	goto loc_8238C64C;
loc_8238C578:
	// bl 0x821940c8
	ctx.lr = 0x8238C57C;
	sub_821940C8(ctx, base);
loc_8238C57C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x8238c528
	goto loc_8238C528;
loc_8238C584:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238c5f0
	if (!ctx.cr0.gt) goto loc_8238C5F0;
loc_8238C5A0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,122
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 122, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238c5c0
	if (ctx.cr6.lt) goto loc_8238C5C0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
loc_8238C5C0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238c5dc
	if (ctx.cr6.eq) goto loc_8238C5DC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238c5e4
	goto loc_8238C5E4;
loc_8238C5DC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238C5E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238c5a0
	if (ctx.cr6.gt) goto loc_8238C5A0;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_8238C5F0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238c634
	if (ctx.cr6.eq) goto loc_8238C634;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238c60c
	if (ctx.cr6.gt) goto loc_8238C60C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8238C60C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c634
	if (!ctx.cr6.eq) goto loc_8238C634;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c64c
	goto loc_8238C64C;
loc_8238C634:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c64c
	goto loc_8238C64C;
loc_8238C648:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8238C64C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c678
	if (ctx.cr6.eq) goto loc_8238C678;
	// bl 0x821c2c18
	ctx.lr = 0x8238C65C;
	sub_821C2C18(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8238c678
	if (!ctx.cr6.lt) goto loc_8238C678;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31988
	ctx.r3.s64 = ctx.r11.s64 + -31988;
	// bl 0x82172ee8
	ctx.lr = 0x8238C670;
	sub_82172EE8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
loc_8238C678:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r10,r1,113
	ctx.r10.s64 = ctx.r1.s64 + 113;
	// stb r19,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r19.u8);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stb r19,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r19.u8);
	// rlwinm r8,r9,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1;
	// stb r19,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r19.u8);
	// stb r19,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r19.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238c714
	if (ctx.cr6.eq) goto loc_8238C714;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238c70c
	if (!ctx.cr6.eq) goto loc_8238C70C;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238c70c
	if (!ctx.cr0.gt) goto loc_8238C70C;
loc_8238C6C0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 91, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238c6e0
	if (ctx.cr6.lt) goto loc_8238C6E0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
loc_8238C6E0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238c6fc
	if (ctx.cr6.eq) goto loc_8238C6FC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238c704
	goto loc_8238C704;
loc_8238C6FC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238C704:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238c6c0
	if (ctx.cr6.gt) goto loc_8238C6C0;
loc_8238C70C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238c718
	goto loc_8238C718;
loc_8238C714:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8238C718:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c730
	if (ctx.cr6.eq) goto loc_8238C730;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r21,28600(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28600);
	// b 0x8238c734
	goto loc_8238C734;
loc_8238C730:
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8238C734:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r22,r11,30268
	ctx.r22.s64 = ctx.r11.s64 + 30268;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c7ac
	if (ctx.cr6.eq) goto loc_8238C7AC;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8238C750:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238c7ac
	if (ctx.cr6.eq) goto loc_8238C7AC;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,8(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8238c780
	if (!ctx.cr6.eq) goto loc_8238C780;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238c774
	if (!ctx.cr6.eq) goto loc_8238C774;
	// twi 31,r0,22
loc_8238C774:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x8238c794
	if (ctx.cr6.eq) goto loc_8238C794;
loc_8238C780:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238c78c
	if (!ctx.cr6.eq) goto loc_8238C78C;
	// twi 31,r0,22
loc_8238C78C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8238c750
	goto loc_8238C750;
loc_8238C794:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r3,r11,-31932
	ctx.r3.s64 = ctx.r11.s64 + -31932;
	// bl 0x82172ee8
	ctx.lr = 0x8238C7A4;
	sub_82172EE8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
loc_8238C7AC:
	// bl 0x82266070
	ctx.lr = 0x8238C7B0;
	sub_82266070(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8238be40
	ctx.lr = 0x8238C7BC;
	sub_8238BE40(ctx, base);
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// stw r21,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// addi r11,r20,20
	ctx.r11.s64 = ctx.r20.s64 + 20;
	// subf r9,r20,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r20.s64;
	// subf r8,r20,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r20.s64;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r7,132(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
loc_8238C7F8:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x8238c7f8
	if (!ctx.cr0.eq) goto loc_8238C7F8;
	// li r11,80
	ctx.r11.s64 = 80;
	// lfs f0,96(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f13,128(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r7,112
	ctx.r7.s64 = 112;
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lvx128 v0,r20,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r20.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f4,f12
	ctx.f4.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// lvx128 v13,r20,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r20.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fctidz f3,f10
	ctx.f3.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fctidz f2,f9
	ctx.f2.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lbz r11,135(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f5,f11
	ctx.f5.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// stfd f3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f3.u64);
	// lbz r9,135(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// stb r9,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r9.u8);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stfd f2,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f2.u64);
	// lbz r8,135(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// stfd f5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f5.u64);
	// lbz r10,183(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// fctidz f1,f8
	ctx.f1.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// lbz r7,135(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stfd f6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f6.u64);
	// lbz r5,135(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r5,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r5.u8);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// bl 0x821b25a8
	ctx.lr = 0x8238C900;
	sub_821B25A8(ctx, base);
	// std r3,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r3.u64);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8238d4a8
	ctx.lr = 0x8238C914;
	sub_8238D4A8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r30,r11,28344
	ctx.r30.s64 = ctx.r11.s64 + 28344;
	// addi r31,r10,28340
	ctx.r31.s64 = ctx.r10.s64 + 28340;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r26,-32246
	ctx.r26.s64 = -2113273856;
	// lis r23,-31927
	ctx.r23.s64 = -2092367872;
	// lis r24,-31927
	ctx.r24.s64 = -2092367872;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
	// addi r28,r10,14020
	ctx.r28.s64 = ctx.r10.s64 + 14020;
	// addi r27,r9,11628
	ctx.r27.s64 = ctx.r9.s64 + 11628;
	// beq cr6,0x8238cb90
	if (ctx.cr6.eq) goto loc_8238CB90;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827414a0
	ctx.lr = 0x8238C95C;
	sub_827414A0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x821f0108
	ctx.lr = 0x8238C968;
	sub_821F0108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82301d40
	ctx.lr = 0x8238C974;
	sub_82301D40(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-31892
	ctx.r4.s64 = ctx.r11.s64 + -31892;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8222cf18
	ctx.lr = 0x8238C988;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82301d40
	ctx.lr = 0x8238C994;
	sub_82301D40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822d6b40
	ctx.lr = 0x8238C9A0;
	sub_822D6B40(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b38b78
	ctx.lr = 0x8238C9B0;
	sub_82B38B78(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821c67d8
	ctx.lr = 0x8238C9B8;
	sub_821C67D8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8238C9BC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238c9bc
	if (!ctx.cr0.eq) goto loc_8238C9BC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822d6b40
	ctx.lr = 0x8238C9E4;
	sub_822D6B40(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821f0108
	ctx.lr = 0x8238C9F0;
	sub_821F0108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82b39978
	ctx.lr = 0x8238C9FC;
	sub_82B39978(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b38b78
	ctx.lr = 0x8238CA0C;
	sub_82B38B78(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821c67d8
	ctx.lr = 0x8238CA14;
	sub_821C67D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8238CA18:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238ca18
	if (!ctx.cr0.eq) goto loc_8238CA18;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821c67d8
	ctx.lr = 0x8238CA3C;
	sub_821C67D8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238CA40:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238ca40
	if (!ctx.cr0.eq) goto loc_8238CA40;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x821c67d8
	ctx.lr = 0x8238CA68;
	sub_821C67D8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8238CA6C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238ca6c
	if (!ctx.cr0.eq) goto loc_8238CA6C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8222cf18
	ctx.lr = 0x8238CA98;
	sub_8222CF18(ctx, base);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,-19068(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -19068);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,30248(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30248);
	// bl 0x823319a0
	ctx.lr = 0x8238CAB0;
	sub_823319A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f3f0
	ctx.lr = 0x8238CAB8;
	sub_8221F3F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8238ce90
	if (!ctx.cr6.eq) goto loc_8238CE90;
	// lwz r11,28060(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cae0
	if (ctx.cr6.eq) goto loc_8238CAE0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238CAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238CAE0:
	// bl 0x82cbbb58
	ctx.lr = 0x8238CAE4;
	sub_82CBBB58(ctx, base);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
loc_8238CAE8:
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8221be68
	ctx.lr = 0x8238CAF0;
	sub_8221BE68(ctx, base);
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,26788(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26788);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82332d48
	ctx.lr = 0x8238CB10;
	sub_82332D48(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221be68
	ctx.lr = 0x8238CB18;
	sub_8221BE68(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c67d8
	ctx.lr = 0x8238CB20;
	sub_821C67D8(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8238CB24:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cb24
	if (!ctx.cr0.eq) goto loc_8238CB24;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821c67d8
	ctx.lr = 0x8238CB48;
	sub_821C67D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8238CB4C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cb4c
	if (!ctx.cr0.eq) goto loc_8238CB4C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c67d8
	ctx.lr = 0x8238CB70;
	sub_821C67D8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238CB74:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cb74
	if (!ctx.cr0.eq) goto loc_8238CB74;
loc_8238CB90:
	// lwz r25,352(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8238cdc0
	if (!ctx.cr6.gt) goto loc_8238CDC0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-31868
	ctx.r4.s64 = ctx.r11.s64 + -31868;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8222cf18
	ctx.lr = 0x8238CBB0;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82301d40
	ctx.lr = 0x8238CBBC;
	sub_82301D40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d6b40
	ctx.lr = 0x8238CBC8;
	sub_822D6B40(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
loc_8238CBD0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cbd0
	if (!ctx.cr0.eq) goto loc_8238CBD0;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r7,11816
	ctx.r4.s64 = ctx.r7.s64 + 11816;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82b39260
	ctx.lr = 0x8238CC00;
	sub_82B39260(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b38b78
	ctx.lr = 0x8238CC10;
	sub_82B38B78(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821c67d8
	ctx.lr = 0x8238CC18;
	sub_821C67D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8238CC1C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cc1c
	if (!ctx.cr0.eq) goto loc_8238CC1C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c67d8
	ctx.lr = 0x8238CC40;
	sub_821C67D8(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8238CC44:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cc44
	if (!ctx.cr0.eq) goto loc_8238CC44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6b40
	ctx.lr = 0x8238CC6C;
	sub_822D6B40(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x821f0108
	ctx.lr = 0x8238CC78;
	sub_821F0108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b39978
	ctx.lr = 0x8238CC84;
	sub_82B39978(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b38b78
	ctx.lr = 0x8238CC94;
	sub_82B38B78(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c67d8
	ctx.lr = 0x8238CC9C;
	sub_821C67D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8238CCA0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cca0
	if (!ctx.cr0.eq) goto loc_8238CCA0;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x821c67d8
	ctx.lr = 0x8238CCC4;
	sub_821C67D8(ctx, base);
loc_8238CCC4:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238ccc4
	if (!ctx.cr0.eq) goto loc_8238CCC4;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821c67d8
	ctx.lr = 0x8238CCEC;
	sub_821C67D8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8238CCF0:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238ccf0
	if (!ctx.cr0.eq) goto loc_8238CCF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8222cf18
	ctx.lr = 0x8238CD1C;
	sub_8222CF18(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,-19068(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -19068);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,30252(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30252);
	// bl 0x823319a0
	ctx.lr = 0x8238CD34;
	sub_823319A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f3f0
	ctx.lr = 0x8238CD3C;
	sub_8221F3F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8238ceb0
	if (!ctx.cr6.eq) goto loc_8238CEB0;
	// lwz r11,28060(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cd64
	if (ctx.cr6.eq) goto loc_8238CD64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238CD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238CD64:
	// bl 0x82cbbb58
	ctx.lr = 0x8238CD68;
	sub_82CBBB58(ctx, base);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8238CD6C:
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8221be68
	ctx.lr = 0x8238CD74;
	sub_8221BE68(ctx, base);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,26788(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26788);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82332d48
	ctx.lr = 0x8238CD94;
	sub_82332D48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x8238CD9C;
	sub_8221BE68(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c67d8
	ctx.lr = 0x8238CDA4;
	sub_821C67D8(ctx, base);
loc_8238CDA4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238cda4
	if (!ctx.cr0.eq) goto loc_8238CDA4;
loc_8238CDC0:
	// lwz r11,26912(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r31,184(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8238ce0c
	if (ctx.cr6.eq) goto loc_8238CE0C;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r5,r31,272
	ctx.r5.s64 = ctx.r31.s64 + 272;
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// stw r11,145(r1)
	PPC_STORE_U32(ctx.r1.u32 + 145, ctx.r11.u32);
	// bl 0x82170cc8
	ctx.lr = 0x8238CDF8;
	sub_82170CC8(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fcd80
	ctx.lr = 0x8238CE0C;
	sub_822FCD80(ctx, base);
loc_8238CE0C:
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8238d988
	ctx.lr = 0x8238CE28;
	sub_8238D988(ctx, base);
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,26912(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 26912);
	// addi r7,r10,11180
	ctx.r7.s64 = ctx.r10.s64 + 11180;
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// stb r8,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r8.u8);
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// stw r9,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,140(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x8238CE58;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238da58
	ctx.lr = 0x8238CE68;
	sub_8238DA58(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r5,11192
	ctx.r4.s64 = ctx.r5.s64 + 11192;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r4.u32);
	// beq cr6,0x8238ce88
	if (ctx.cr6.eq) goto loc_8238CE88;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82741bd8
	ctx.lr = 0x8238CE88;
	sub_82741BD8(ctx, base);
loc_8238CE88:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
loc_8238CE90:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82287710
	ctx.lr = 0x8238CE9C;
	sub_82287710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822eab88
	ctx.lr = 0x8238CEA8;
	sub_822EAB88(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8238cae8
	goto loc_8238CAE8;
loc_8238CEB0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82287710
	ctx.lr = 0x8238CEBC;
	sub_82287710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eab88
	ctx.lr = 0x8238CEC8;
	sub_822EAB88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8238cd6c
	goto loc_8238CD6C;
}

__attribute__((alias("__imp__sub_8238CED0"))) PPC_WEAK_FUNC(sub_8238CED0);
PPC_FUNC_IMPL(__imp__sub_8238CED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x8238CED8;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-31844
	ctx.r3.s64 = ctx.r11.s64 + -31844;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// bl 0x82172ee8
	ctx.lr = 0x8238CEF0;
	sub_82172EE8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r28,r11,30256
	ctx.r28.s64 = ctx.r11.s64 + 30256;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r19,-31927
	ctx.r19.s64 = -2092367872;
	// lis r21,-32247
	ctx.r21.s64 = -2113339392;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r22,-31927
	ctx.r22.s64 = -2092367872;
	// addi r27,r7,28344
	ctx.r27.s64 = ctx.r7.s64 + 28344;
	// addi r29,r8,28340
	ctx.r29.s64 = ctx.r8.s64 + 28340;
	// addi r25,r9,3224
	ctx.r25.s64 = ctx.r9.s64 + 3224;
	// addi r24,r10,11628
	ctx.r24.s64 = ctx.r10.s64 + 11628;
	// addi r23,r11,-31792
	ctx.r23.s64 = ctx.r11.s64 + -31792;
loc_8238CF44:
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
loc_8238CF48:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238cf58
	if (ctx.cr6.eq) goto loc_8238CF58;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8238cf5c
	if (ctx.cr6.eq) goto loc_8238CF5C;
loc_8238CF58:
	// twi 31,r0,22
loc_8238CF5C:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8238d184
	if (ctx.cr6.eq) goto loc_8238D184;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8238cf70
	if (!ctx.cr6.eq) goto loc_8238CF70;
	// twi 31,r0,22
loc_8238CF70:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238cf80
	if (!ctx.cr6.eq) goto loc_8238CF80;
	// twi 31,r0,22
loc_8238CF80:
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8238d170
	if (!ctx.cr6.eq) goto loc_8238D170;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r20,12
	ctx.r4.s64 = ctx.r20.s64 + 12;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8222cf18
	ctx.lr = 0x8238CFA0;
	sub_8222CF18(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222cf18
	ctx.lr = 0x8238CFB0;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301d40
	ctx.lr = 0x8238CFBC;
	sub_82301D40(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d6b40
	ctx.lr = 0x8238CFC8;
	sub_822D6B40(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b39978
	ctx.lr = 0x8238CFD4;
	sub_82B39978(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b38b78
	ctx.lr = 0x8238CFE4;
	sub_82B38B78(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c67d8
	ctx.lr = 0x8238CFEC;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_8238CFF0:
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
	// bne 0x8238cff0
	if (!ctx.cr0.eq) goto loc_8238CFF0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8238D018;
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8238D01C:
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
	// bne 0x8238d01c
	if (!ctx.cr0.eq) goto loc_8238D01C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8222cf18
	ctx.lr = 0x8238D04C;
	sub_8222CF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,30248(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30248);
	// lfs f1,24712(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 24712);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823319a0
	ctx.lr = 0x8238D060;
	sub_823319A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f3f0
	ctx.lr = 0x8238D068;
	sub_8221F3F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8238d150
	if (!ctx.cr6.eq) goto loc_8238D150;
	// lwz r11,28060(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d090
	if (ctx.cr6.eq) goto loc_8238D090;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238D090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238D090:
	// bl 0x82cbbb58
	ctx.lr = 0x8238D094;
	sub_82CBBB58(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8238D098:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8221be68
	ctx.lr = 0x8238D0A0;
	sub_8221BE68(ctx, base);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,26788(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26788);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82332d48
	ctx.lr = 0x8238D0C0;
	sub_82332D48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a666a8
	ctx.lr = 0x8238D0D0;
	sub_82A666A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// bl 0x8221be68
	ctx.lr = 0x8238D0E4;
	sub_8221BE68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8238D0F0;
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8238D0F4:
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
	// bne 0x8238d0f4
	if (!ctx.cr0.eq) goto loc_8238D0F4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8238D11C;
	sub_821C67D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8238D120:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238d120
	if (!ctx.cr0.eq) goto loc_8238D120;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// b 0x8238cf48
	goto loc_8238CF48;
loc_8238D150:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82287710
	ctx.lr = 0x8238D15C;
	sub_82287710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eab88
	ctx.lr = 0x8238D168;
	sub_822EAB88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8238d098
	goto loc_8238D098;
loc_8238D170:
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d17c
	if (!ctx.cr6.eq) goto loc_8238D17C;
	// twi 31,r0,22
loc_8238D17C:
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8238cf44
	goto loc_8238CF44;
loc_8238D184:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_8238D18C"))) PPC_WEAK_FUNC(sub_8238D18C);
PPC_FUNC_IMPL(__imp__sub_8238D18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D190"))) PPC_WEAK_FUNC(sub_8238D190);
PPC_FUNC_IMPL(__imp__sub_8238D190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8238D198;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r11,30256
	ctx.r29.s64 = ctx.r11.s64 + 30256;
	// lis r23,-31927
	ctx.r23.s64 = -2092367872;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d384
	if (ctx.cr6.eq) goto loc_8238D384;
	// bl 0x82266070
	ctx.lr = 0x8238D1BC;
	sub_82266070(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r26,r10,-31760
	ctx.r26.s64 = ctx.r10.s64 + -31760;
	// addi r27,r11,28344
	ctx.r27.s64 = ctx.r11.s64 + 28344;
loc_8238D1E4:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_8238D1E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238d1f8
	if (ctx.cr6.eq) goto loc_8238D1F8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8238d1fc
	if (ctx.cr6.eq) goto loc_8238D1FC;
loc_8238D1F8:
	// twi 31,r0,22
loc_8238D1FC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238d384
	if (ctx.cr6.eq) goto loc_8238D384;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8238d214
	if (!ctx.cr6.eq) goto loc_8238D214;
	// twi 31,r0,22
loc_8238D214:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d224
	if (!ctx.cr6.eq) goto loc_8238D224;
	// twi 31,r0,22
loc_8238D224:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8238d300
	if (!ctx.cr6.gt) goto loc_8238D300;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d244
	if (!ctx.cr6.eq) goto loc_8238D244;
	// twi 31,r0,22
loc_8238D244:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x821b25a8
	ctx.lr = 0x8238D24C;
	sub_821B25A8(ctx, base);
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x8238d300
	if (!ctx.cr6.eq) goto loc_8238D300;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d268
	if (!ctx.cr6.eq) goto loc_8238D268;
	// twi 31,r0,22
loc_8238D268:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8238d4a8
	ctx.lr = 0x8238D274;
	sub_8238D4A8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238d288
	if (ctx.cr6.eq) goto loc_8238D288;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82741bd8
	ctx.lr = 0x8238D288;
	sub_82741BD8(ctx, base);
loc_8238D288:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a666a8
	ctx.lr = 0x8238D29C;
	sub_82A666A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x8222cf18
	ctx.lr = 0x8238D2B8;
	sub_8222CF18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82303aa0
	ctx.lr = 0x8238D2C8;
	sub_82303AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x8238D2D0;
	sub_821C67D8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8238D2D4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238d2d4
	if (!ctx.cr0.eq) goto loc_8238D2D4;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x8238d1e8
	goto loc_8238D1E8;
loc_8238D300:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d310
	if (!ctx.cr6.eq) goto loc_8238D310;
	// twi 31,r0,22
loc_8238D310:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,3000
	ctx.r10.s64 = ctx.r10.s64 + 3000;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8238d36c
	if (!ctx.cr6.gt) goto loc_8238D36C;
	// lwz r10,26912(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lwz r3,184(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d358
	if (ctx.cr6.eq) goto loc_8238D358;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d34c
	if (!ctx.cr6.eq) goto loc_8238D34C;
	// twi 31,r0,22
	// twi 31,r0,22
	// twi 31,r0,22
loc_8238D34C:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x822fcf18
	ctx.lr = 0x8238D358;
	sub_822FCF18(ctx, base);
loc_8238D358:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d368
	if (!ctx.cr6.eq) goto loc_8238D368;
	// twi 31,r0,22
loc_8238D368:
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8238D36C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d37c
	if (!ctx.cr6.eq) goto loc_8238D37C;
	// twi 31,r0,22
loc_8238D37C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8238d1e4
	goto loc_8238D1E4;
loc_8238D384:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,30268
	ctx.r29.s64 = ctx.r11.s64 + 30268;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d4a0
	if (ctx.cr6.eq) goto loc_8238D4A0;
	// bl 0x82266070
	ctx.lr = 0x8238D39C;
	sub_82266070(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8238D3B0:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_8238D3B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238d3c4
	if (ctx.cr6.eq) goto loc_8238D3C4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8238d3c8
	if (ctx.cr6.eq) goto loc_8238D3C8;
loc_8238D3C4:
	// twi 31,r0,22
loc_8238D3C8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238d4a0
	if (ctx.cr6.eq) goto loc_8238D4A0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8238d3e0
	if (!ctx.cr6.eq) goto loc_8238D3E0;
	// twi 31,r0,22
loc_8238D3E0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d3f0
	if (!ctx.cr6.eq) goto loc_8238D3F0;
	// twi 31,r0,22
loc_8238D3F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8238d424
	if (!ctx.cr6.gt) goto loc_8238D424;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a666a8
	ctx.lr = 0x8238D410;
	sub_82A666A8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8238d3b4
	goto loc_8238D3B4;
loc_8238D424:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d430
	if (!ctx.cr6.eq) goto loc_8238D430;
	// twi 31,r0,22
loc_8238D430:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8238d488
	if (!ctx.cr6.gt) goto loc_8238D488;
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lwz r3,184(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d474
	if (ctx.cr6.eq) goto loc_8238D474;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d468
	if (!ctx.cr6.eq) goto loc_8238D468;
	// twi 31,r0,22
	// twi 31,r0,22
loc_8238D468:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822fd080
	ctx.lr = 0x8238D474;
	sub_822FD080(ctx, base);
loc_8238D474:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d484
	if (!ctx.cr6.eq) goto loc_8238D484;
	// twi 31,r0,22
loc_8238D484:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8238D488:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d498
	if (!ctx.cr6.eq) goto loc_8238D498;
	// twi 31,r0,22
loc_8238D498:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8238d3b0
	goto loc_8238D3B0;
loc_8238D4A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8238D4A8"))) PPC_WEAK_FUNC(sub_8238D4A8);
PPC_FUNC_IMPL(__imp__sub_8238D4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8238D4B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r4,112(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8238d5f8
	if (!ctx.cr6.gt) goto loc_8238D5F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238d5d8
	if (ctx.cr6.eq) goto loc_8238D5D8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238d514
	if (ctx.cr6.eq) goto loc_8238D514;
	// lbz r10,81(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238d5dc
	goto loc_8238D5DC;
loc_8238D514:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238d580
	if (!ctx.cr0.gt) goto loc_8238D580;
loc_8238D530:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,81
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 81, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238d550
	if (ctx.cr6.lt) goto loc_8238D550;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8238D550:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238d56c
	if (ctx.cr6.eq) goto loc_8238D56C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238d574
	goto loc_8238D574;
loc_8238D56C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238D574:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238d530
	if (ctx.cr6.gt) goto loc_8238D530;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238D580:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238d5c4
	if (ctx.cr6.eq) goto loc_8238D5C4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,81
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 81, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238d59c
	if (ctx.cr6.gt) goto loc_8238D59C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8238D59C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d5c4
	if (!ctx.cr6.eq) goto loc_8238D5C4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238d5dc
	goto loc_8238D5DC;
loc_8238D5C4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238d5dc
	goto loc_8238D5DC;
loc_8238D5D8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8238D5DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d5f8
	if (ctx.cr6.eq) goto loc_8238D5F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8239e698
	ctx.lr = 0x8238D5F8;
	sub_8239E698(ctx, base);
loc_8238D5F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238d700
	if (ctx.cr6.eq) goto loc_8238D700;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238d63c
	if (ctx.cr6.eq) goto loc_8238D63C;
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238d704
	goto loc_8238D704;
loc_8238D63C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238d6a8
	if (!ctx.cr0.gt) goto loc_8238D6A8;
loc_8238D658:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238d678
	if (ctx.cr6.lt) goto loc_8238D678;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8238D678:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238d694
	if (ctx.cr6.eq) goto loc_8238D694;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238d69c
	goto loc_8238D69C;
loc_8238D694:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238D69C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238d658
	if (ctx.cr6.gt) goto loc_8238D658;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238D6A8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238d6ec
	if (ctx.cr6.eq) goto loc_8238D6EC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238d6c4
	if (ctx.cr6.gt) goto loc_8238D6C4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8238D6C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d6ec
	if (!ctx.cr6.eq) goto loc_8238D6EC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238d704
	goto loc_8238D704;
loc_8238D6EC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238d704
	goto loc_8238D704;
loc_8238D700:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8238D704:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d968
	if (ctx.cr6.eq) goto loc_8238D968;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261a508
	ctx.lr = 0x8238D720;
	sub_8261A508(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238d92c
	if (ctx.cr6.eq) goto loc_8238D92C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d744
	if (!ctx.cr6.eq) goto loc_8238D744;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d7d4
	if (ctx.cr6.eq) goto loc_8238D7D4;
loc_8238D744:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8238db88
	ctx.lr = 0x8238D754;
	sub_8238DB88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d7d0
	if (ctx.cr6.eq) goto loc_8238D7D0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
loc_8238D76C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x821d9ed8
	ctx.lr = 0x8238D778;
	sub_821D9ED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821d9ed8
	ctx.lr = 0x8238D784;
	sub_821D9ED8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d79c
	if (!ctx.cr6.eq) goto loc_8238D79C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238d7d0
	if (ctx.cr6.eq) goto loc_8238D7D0;
loc_8238D79C:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x825088d8
	ctx.lr = 0x8238D7C0;
	sub_825088D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8238d76c
	if (ctx.cr6.lt) goto loc_8238D76C;
loc_8238D7D0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8238D7D4:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r6,86(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 86);
	// addi r5,r11,-20472
	ctx.r5.s64 = ctx.r11.s64 + -20472;
	// lbz r8,-20472(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20472);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r7,3(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d82c
	if (!ctx.cr6.eq) goto loc_8238D82C;
	// lbz r11,85(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 85);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8238d82c
	if (!ctx.cr6.eq) goto loc_8238D82C;
	// lbz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 84);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8238d82c
	if (!ctx.cr6.eq) goto loc_8238D82C;
	// lbz r11,87(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 87);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x8238d830
	if (ctx.cr6.eq) goto loc_8238D830;
loc_8238D82C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8238D830:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d8b4
	if (!ctx.cr6.eq) goto loc_8238D8B4;
	// lfs f0,88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8238d8b4
	if (ctx.cr6.gt) goto loc_8238D8B4;
	// lbz r11,94(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 94);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d894
	if (!ctx.cr6.eq) goto loc_8238D894;
	// lbz r11,93(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 93);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d894
	if (!ctx.cr6.eq) goto loc_8238D894;
	// lbz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 92);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d894
	if (!ctx.cr6.eq) goto loc_8238D894;
	// lbz r11,95(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 95);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x8238d898
	if (ctx.cr6.eq) goto loc_8238D898;
loc_8238D894:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8238D898:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d8b4
	if (!ctx.cr6.eq) goto loc_8238D8B4;
	// lfs f13,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8238d92c
	if (!ctx.cr6.gt) goto loc_8238D92C;
loc_8238D8B4:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8238dc28
	ctx.lr = 0x8238D8C4;
	sub_8238DC28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d92c
	if (ctx.cr6.eq) goto loc_8238D92C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r28,92
	ctx.r10.s64 = ctx.r28.s64 + 92;
	// lbz r9,84(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 84);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lbz r7,85(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 85);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r6,86(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 86);
	// stb r6,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r6.u8);
	// lbz r5,87(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 87);
	// stb r5,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r5.u8);
	// lfs f0,88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r4,92(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 92);
	// stb r4,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// lbz r3,93(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 93);
	// stb r3,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r3.u8);
	// lbz r10,94(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 94);
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lbz r9,95(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 95);
	// stb r9,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r9.u8);
	// lfs f13,96(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8238D92C:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
	// stw r27,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r27.u32);
	// bl 0x8218df70
	ctx.lr = 0x8238D948;
	sub_8218DF70(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238d978
	if (ctx.cr6.eq) goto loc_8238D978;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82741bd8
	ctx.lr = 0x8238D95C;
	sub_82741BD8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8238D968:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
	// stw r27,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r27.u32);
loc_8238D978:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8238D984"))) PPC_WEAK_FUNC(sub_8238D984);
PPC_FUNC_IMPL(__imp__sub_8238D984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D988"))) PPC_WEAK_FUNC(sub_8238D988);
PPC_FUNC_IMPL(__imp__sub_8238D988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8238D990;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,236(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x8238D9B0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238d9c0
	if (ctx.cr6.eq) goto loc_8238D9C0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8238D9C0:
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238d9d0
	if (ctx.cr6.eq) goto loc_8238D9D0;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_8238D9D0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8238dcc8
	ctx.lr = 0x8238D9DC;
	sub_8238DCC8(ctx, base);
	// lis r11,546
	ctx.r11.s64 = 35782656;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r10,r11,8738
	ctx.r10.u64 = ctx.r11.u64 | 8738;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x8238da38
	if (!ctx.cr6.lt) goto loc_8238DA38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11140
	ctx.r4.s64 = ctx.r11.s64 + 11140;
	// bl 0x822f2020
	ctx.lr = 0x8238DA04;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x8238DA10;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r27,r10,5696
	ctx.r27.s64 = ctx.r10.s64 + 5696;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bl 0x822f1f00
	ctx.lr = 0x8238DA24;
	sub_822F1F00(ctx, base);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x8238DA30;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x8238DA38;
	sub_82171810(ctx, base);
loc_8238DA38:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8238DA58"))) PPC_WEAK_FUNC(sub_8238DA58);
PPC_FUNC_IMPL(__imp__sub_8238DA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238DA60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238db7c
	if (!ctx.cr6.gt) goto loc_8238DB7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238DA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8238daac
	if (ctx.cr6.eq) goto loc_8238DAAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8238dab8
	goto loc_8238DAB8;
loc_8238DAAC:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8238DAB8:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x8238DACC;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x8238DAE8;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x8238DB04;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238DB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238DB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238DB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x8238DB6C;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x8238DB74;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x8238DB7C;
	sub_829CE870(ctx, base);
loc_8238DB7C:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238DB84"))) PPC_WEAK_FUNC(sub_8238DB84);
PPC_FUNC_IMPL(__imp__sub_8238DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DB88"))) PPC_WEAK_FUNC(sub_8238DB88);
PPC_FUNC_IMPL(__imp__sub_8238DB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238DB90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x827418a8
	ctx.lr = 0x8238DBA8;
	sub_827418A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238dc18
	if (!ctx.cr6.eq) goto loc_8238DC18;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82741d88
	ctx.lr = 0x8238DBC4;
	sub_82741D88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x827419f0
	ctx.lr = 0x8238DBD0;
	sub_827419F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238dc04
	if (ctx.cr6.eq) goto loc_8238DC04;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238dbe4
	if (ctx.cr6.eq) goto loc_8238DBE4;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_8238DBE4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238dbf8
	if (ctx.cr6.eq) goto loc_8238DBF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82741bd8
	ctx.lr = 0x8238DBF8;
	sub_82741BD8(ctx, base);
loc_8238DBF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8238DC04:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238dc18
	if (ctx.cr6.eq) goto loc_8238DC18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82741bd8
	ctx.lr = 0x8238DC18;
	sub_82741BD8(ctx, base);
loc_8238DC18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238DC24"))) PPC_WEAK_FUNC(sub_8238DC24);
PPC_FUNC_IMPL(__imp__sub_8238DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DC28"))) PPC_WEAK_FUNC(sub_8238DC28);
PPC_FUNC_IMPL(__imp__sub_8238DC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238DC30;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x827418a8
	ctx.lr = 0x8238DC48;
	sub_827418A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238dcb8
	if (!ctx.cr6.eq) goto loc_8238DCB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82741d88
	ctx.lr = 0x8238DC64;
	sub_82741D88(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x827419f0
	ctx.lr = 0x8238DC70;
	sub_827419F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238dca4
	if (ctx.cr6.eq) goto loc_8238DCA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238dc84
	if (ctx.cr6.eq) goto loc_8238DC84;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_8238DC84:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238dc98
	if (ctx.cr6.eq) goto loc_8238DC98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82741bd8
	ctx.lr = 0x8238DC98;
	sub_82741BD8(ctx, base);
loc_8238DC98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8238DCA4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238dcb8
	if (ctx.cr6.eq) goto loc_8238DCB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82741bd8
	ctx.lr = 0x8238DCB8;
	sub_82741BD8(ctx, base);
loc_8238DCB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238DCC4"))) PPC_WEAK_FUNC(sub_8238DCC4);
PPC_FUNC_IMPL(__imp__sub_8238DCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DCC8"))) PPC_WEAK_FUNC(sub_8238DCC8);
PPC_FUNC_IMPL(__imp__sub_8238DCC8) {
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
	// beq cr6,0x8238dd84
	if (ctx.cr6.eq) goto loc_8238DD84;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x8238DD24;
	sub_82CA2C60(ctx, base);
	// lbz r6,87(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 87);
	// lbz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 84);
	// lbz r4,85(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 85);
	// lbz r3,86(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 86);
	// stb r6,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r6.u8);
	// stb r5,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r5.u8);
	// stb r4,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r4.u8);
	// stb r3,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r3.u8);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lbz r11,95(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 95);
	// lbz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 92);
	// lbz r9,93(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 93);
	// lbz r8,94(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 94);
	// stb r8,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r8.u8);
	// stb r9,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r9.u8);
	// stb r10,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r10.u8);
	// stb r11,95(r31)
	PPC_STORE_U8(ctx.r31.u32 + 95, ctx.r11.u8);
	// lfs f13,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// ld r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// std r7,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r7.u64);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
loc_8238DD84:
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

__attribute__((alias("__imp__sub_8238DD9C"))) PPC_WEAK_FUNC(sub_8238DD9C);
PPC_FUNC_IMPL(__imp__sub_8238DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DDA0"))) PPC_WEAK_FUNC(sub_8238DDA0);
PPC_FUNC_IMPL(__imp__sub_8238DDA0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82214f08
	ctx.lr = 0x8238DDC4;
	sub_82214F08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,11204
	ctx.r9.s64 = ctx.r11.s64 + 11204;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8238dde8
	if (ctx.cr6.eq) goto loc_8238DDE8;
	// bl 0x8221be68
	ctx.lr = 0x8238DDE4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238DDE8:
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

__attribute__((alias("__imp__sub_8238DE00"))) PPC_WEAK_FUNC(sub_8238DE00);
PPC_FUNC_IMPL(__imp__sub_8238DE00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238DE10"))) PPC_WEAK_FUNC(sub_8238DE10);
PPC_FUNC_IMPL(__imp__sub_8238DE10) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,126
	ctx.r11.s64 = ctx.r4.s64 + 126;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238DE20"))) PPC_WEAK_FUNC(sub_8238DE20);
PPC_FUNC_IMPL(__imp__sub_8238DE20) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b39978
	ctx.lr = 0x8238DE3C;
	sub_82B39978(ctx, base);
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

__attribute__((alias("__imp__sub_8238DE54"))) PPC_WEAK_FUNC(sub_8238DE54);
PPC_FUNC_IMPL(__imp__sub_8238DE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DE58"))) PPC_WEAK_FUNC(sub_8238DE58);
PPC_FUNC_IMPL(__imp__sub_8238DE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238DE60;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r10,-40
	ctx.r30.s64 = ctx.r10.s64 + -40;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lfs f31,-27416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -27416);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
	// bl 0x82a3ad50
	ctx.lr = 0x8238DEA8;
	sub_82A3AD50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82a3ad50
	ctx.lr = 0x8238DEB4;
	sub_82A3AD50(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238decc
	if (ctx.cr6.eq) goto loc_8238DECC;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lbz r29,26917(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26917);
loc_8238DECC:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238dee4
	if (ctx.cr6.eq) goto loc_8238DEE4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8238defc
	goto loc_8238DEFC;
loc_8238DEE4:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238df30
	if (ctx.cr6.eq) goto loc_8238DF30;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
loc_8238DEFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238df30
	if (ctx.cr6.eq) goto loc_8238DF30;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,26932(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26932);
	// bl 0x824e6c78
	ctx.lr = 0x8238DF10;
	sub_824E6C78(ctx, base);
	// lfs f0,-19192(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -19192);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f12,f1,f0,f31
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// lfs f0,-8608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8608);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,0(r30)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadd f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 + ctx.f13.f64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8238DF30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a5d80
	ctx.lr = 0x8238DF38;
	sub_821A5D80(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,344
	ctx.r10.s64 = ctx.r11.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// li r10,720
	ctx.r10.s64 = 720;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// li r11,1120
	ctx.r11.s64 = 1120;
	// bne cr6,0x8238df64
	if (!ctx.cr6.eq) goto loc_8238DF64;
	// li r11,960
	ctx.r11.s64 = 960;
loc_8238DF64:
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238DF78"))) PPC_WEAK_FUNC(sub_8238DF78);
PPC_FUNC_IMPL(__imp__sub_8238DF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238DF80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221ee38
	ctx.lr = 0x8238DF8C;
	sub_8221EE38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a496a8
	ctx.lr = 0x8238DF9C;
	sub_82A496A8(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2384
	ctx.r9.s64 = ctx.r11.s64 + -2384;
	// lfd f1,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x821a5840
	ctx.lr = 0x8238DFB4;
	sub_821A5840(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a49470
	ctx.lr = 0x8238DFBC;
	sub_82A49470(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a49470
	ctx.lr = 0x8238DFC8;
	sub_82A49470(ctx, base);
	// lis r29,-31946
	ctx.r29.s64 = -2093613056;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,-15616(r29)
	PPC_STORE_U32(ctx.r29.u32 + -15616, ctx.r11.u32);
	// bl 0x82a3ad50
	ctx.lr = 0x8238DFE0;
	sub_82A3AD50(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,-15616(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15616);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r31.u8);
	// bl 0x821dde30
	ctx.lr = 0x8238DFFC;
	sub_821DDE30(ctx, base);
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r6,r7,-31720
	ctx.r6.s64 = ctx.r7.s64 + -31720;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,-15620(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15620, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x821dde30
	ctx.lr = 0x8238E034;
	sub_821DDE30(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217da50
	ctx.lr = 0x8238E040;
	sub_8217DA50(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238E048"))) PPC_WEAK_FUNC(sub_8238E048);
PPC_FUNC_IMPL(__imp__sub_8238E048) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r3,288
	ctx.r3.s64 = 288;
	// addi r10,r11,-31724
	ctx.r10.s64 = ctx.r11.s64 + -31724;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x8238E070;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e084
	if (ctx.cr6.eq) goto loc_8238E084;
	// bl 0x8238de58
	ctx.lr = 0x8238E07C;
	sub_8238DE58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8238e088
	goto loc_8238E088;
loc_8238E084:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238E088:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8238E0A4"))) PPC_WEAK_FUNC(sub_8238E0A4);
PPC_FUNC_IMPL(__imp__sub_8238E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E0A8"))) PPC_WEAK_FUNC(sub_8238E0A8);
PPC_FUNC_IMPL(__imp__sub_8238E0A8) {
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
	// bl 0x8238e0f8
	ctx.lr = 0x8238E0C8;
	sub_8238E0F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e0e0
	if (ctx.cr6.eq) goto loc_8238E0E0;
	// bl 0x8221be68
	ctx.lr = 0x8238E0DC;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238E0E0:
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

__attribute__((alias("__imp__sub_8238E0F8"))) PPC_WEAK_FUNC(sub_8238E0F8);
PPC_FUNC_IMPL(__imp__sub_8238E0F8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-31724
	ctx.r10.s64 = ctx.r11.s64 + -31724;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e140
	if (ctx.cr6.eq) goto loc_8238E140;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,26452
	ctx.r10.s64 = ctx.r11.s64 + 26452;
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x8221be68
	ctx.lr = 0x8238E138;
	sub_8221BE68(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8238E140:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8238E160"))) PPC_WEAK_FUNC(sub_8238E160);
PPC_FUNC_IMPL(__imp__sub_8238E160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8238E168;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-15620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15620);
	// bl 0x821756e0
	ctx.lr = 0x8238E180;
	sub_821756E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x821756e0
	ctx.lr = 0x8238E18C;
	sub_821756E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x821756e0
	ctx.lr = 0x8238E198;
	sub_821756E0(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// lis r28,-31946
	ctx.r28.s64 = -2093613056;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r11,-15620(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15620, ctx.r11.u32);
	// lwz r3,-15616(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -15616);
	// bl 0x82a38fd8
	ctx.lr = 0x8238E1C0;
	sub_82A38FD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a38fd8
	ctx.lr = 0x8238E1CC;
	sub_82A38FD8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-15616(r28)
	PPC_STORE_U32(ctx.r28.u32 + -15616, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// bl 0x8217da50
	ctx.lr = 0x8238E1E0;
	sub_8217DA50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8238E1E8"))) PPC_WEAK_FUNC(sub_8238E1E8);
PPC_FUNC_IMPL(__imp__sub_8238E1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8238E1F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8217ab30
	ctx.lr = 0x8238E200;
	sub_8217AB30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,255
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 255, ctx.xer);
	// ble cr6,0x8238e210
	if (!ctx.cr6.gt) goto loc_8238E210;
	// li r28,255
	ctx.r28.s64 = 255;
loc_8238E210:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8238e240
	if (!ctx.cr6.gt) goto loc_8238E240;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// subf r29,r11,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8238E228:
	// lhzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x8217a980
	ctx.lr = 0x8238E230;
	sub_8217A980(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x8238e228
	if (!ctx.cr0.eq) goto loc_8238E228;
loc_8238E240:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-31700
	ctx.r4.s64 = ctx.r9.s64 + -31700;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// bl 0x82ca3bf0
	ctx.lr = 0x8238E25C;
	sub_82CA3BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8238e26c
	if (!ctx.cr6.eq) goto loc_8238E26C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8238E26C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8238E274"))) PPC_WEAK_FUNC(sub_8238E274);
PPC_FUNC_IMPL(__imp__sub_8238E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E278"))) PPC_WEAK_FUNC(sub_8238E278);
PPC_FUNC_IMPL(__imp__sub_8238E278) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,11512
	ctx.r10.s64 = 11512;
	// li r3,11512
	ctx.r3.s64 = 11512;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// stb r30,20575(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20575, ctx.r30.u8);
	// stb r30,20556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20556, ctx.r30.u8);
	// stb r30,20557(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20557, ctx.r30.u8);
	// stw r30,20560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20560, ctx.r30.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x82ca3c68
	ctx.lr = 0x8238E2C8;
	sub_82CA3C68(ctx, base);
	// stw r3,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238e2e0
	if (!ctx.cr6.eq) goto loc_8238E2E0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8238e330
	goto loc_8238E330;
loc_8238E2E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ca3190
	ctx.lr = 0x8238E2EC;
	sub_82CA3190(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82ca3190
	ctx.lr = 0x8238E2FC;
	sub_82CA3190(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8238E310:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8238e310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E310;
	// stw r30,20564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20564, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,20568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20568, ctx.r30.u32);
	// sth r30,20572(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20572, ctx.r30.u16);
	// stb r30,20574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20574, ctx.r30.u8);
loc_8238E330:
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

__attribute__((alias("__imp__sub_8238E348"))) PPC_WEAK_FUNC(sub_8238E348);
PPC_FUNC_IMPL(__imp__sub_8238E348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8238E350;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8238e37c
	if (!ctx.cr6.eq) goto loc_8238E37C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8238E37C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,4144
	ctx.r29.s64 = ctx.r31.s64 + 4144;
	// stw r30,8248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8248, ctx.r30.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// stw r30,8252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8252, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,8256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8256, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8260, ctx.r30.u32);
	// addi r28,r31,8248
	ctx.r28.s64 = ctx.r31.s64 + 8248;
	// stw r30,8264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8264, ctx.r30.u32);
	// bl 0x82ca3190
	ctx.lr = 0x8238E3AC;
	sub_82CA3190(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r3,26932(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26932);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cfa410
	ctx.lr = 0x8238E3D0;
	sub_82CFA410(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8238e3e0
	if (!ctx.cr6.eq) goto loc_8238E3E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8238E3E0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238e3f4
	if (!ctx.cr6.eq) goto loc_8238E3F4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r30,26949(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26949, ctx.r30.u8);
loc_8238E3F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8238E400"))) PPC_WEAK_FUNC(sub_8238E400);
PPC_FUNC_IMPL(__imp__sub_8238E400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8238E408;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8238e430
	if (!ctx.cr6.eq) goto loc_8238E430;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_8238E430:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8238e4dc
	if (ctx.cr6.eq) goto loc_8238E4DC;
	// addi r30,r3,8268
	ctx.r30.s64 = ctx.r3.s64 + 8268;
loc_8238E448:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238e460
	if (!ctx.cr6.eq) goto loc_8238E460;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8238e46c
	goto loc_8238E46C;
loc_8238E460:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_8238E46C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e49c
	if (ctx.cr6.eq) goto loc_8238E49C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8238e49c
	if (!ctx.cr6.lt) goto loc_8238E49C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8238e4c8
	goto loc_8238E4C8;
loc_8238E49C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8238e4ac
	if (!ctx.cr6.gt) goto loc_8238E4AC;
	// twi 31,r0,22
loc_8238E4AC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8238eb88
	ctx.lr = 0x8238E4C8;
	sub_8238EB88(ctx, base);
loc_8238E4C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238e448
	if (ctx.cr6.lt) goto loc_8238E448;
loc_8238E4DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8238E4E8"))) PPC_WEAK_FUNC(sub_8238E4E8);
PPC_FUNC_IMPL(__imp__sub_8238E4E8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238e518
	if (ctx.cr6.eq) goto loc_8238E518;
	// bl 0x8238e7d8
	ctx.lr = 0x8238E514;
	sub_8238E7D8(ctx, base);
	// stw r30,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r30.u32);
loc_8238E518:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238e7b8
	if (!ctx.cr6.eq) goto loc_8238E7B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8238e7b8
	if (ctx.cr6.eq) goto loc_8238E7B8;
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e7a8
	if (ctx.cr6.eq) goto loc_8238E7A8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-1212
	ctx.r9.s64 = ctx.r10.s64 + -1212;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8238e694
	if (!ctx.cr6.eq) goto loc_8238E694;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8268
	ctx.r3.s64 = ctx.r11.s64 + 8268;
	// bl 0x8238e1e8
	ctx.lr = 0x8238E56C;
	sub_8238E1E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e604
	if (ctx.cr6.eq) goto loc_8238E604;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r5,8248(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// lwz r10,26920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26920);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e598
	if (ctx.cr6.eq) goto loc_8238E598;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r11,26917(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26917);
	// b 0x8238e59c
	goto loc_8238E59C;
loc_8238E598:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238E59C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238e5d4
	if (!ctx.cr6.eq) goto loc_8238E5D4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,26912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e5c4
	if (ctx.cr6.eq) goto loc_8238E5C4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26821);
	// b 0x8238e5c8
	goto loc_8238E5C8;
loc_8238E5C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238E5C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e7a8
	if (ctx.cr6.eq) goto loc_8238E7A8;
loc_8238E5D4:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e7a8
	if (ctx.cr6.eq) goto loc_8238E7A8;
	// addi r4,r31,4144
	ctx.r4.s64 = ctx.r31.s64 + 4144;
	// bl 0x822f4d10
	ctx.lr = 0x8238E5E8;
	sub_822F4D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e7a8
	if (ctx.cr6.eq) goto loc_8238E7A8;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,26783(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26783, ctx.r11.u8);
	// b 0x8238e7a8
	goto loc_8238E7A8;
loc_8238E604:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// addi r4,r10,-31588
	ctx.r4.s64 = ctx.r10.s64 + -31588;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8268
	ctx.r3.s64 = ctx.r11.s64 + 8268;
	// bl 0x82ca3bf0
	ctx.lr = 0x8238E620;
	sub_82CA3BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e650
	if (ctx.cr6.eq) goto loc_8238E650;
	// addi r5,r31,4144
	ctx.r5.s64 = ctx.r31.s64 + 4144;
	// lwz r6,8248(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,19532
	ctx.r3.s64 = ctx.r31.s64 + 19532;
	// bl 0x82ca3730
	ctx.lr = 0x8238E63C;
	sub_82CA3730(ctx, base);
	// lwz r10,8248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20557(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20557, ctx.r11.u8);
	// stw r10,20560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20560, ctx.r10.u32);
	// b 0x8238e7a8
	goto loc_8238E7A8;
loc_8238E650:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// addi r4,r10,-31568
	ctx.r4.s64 = ctx.r10.s64 + -31568;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8268
	ctx.r3.s64 = ctx.r11.s64 + 8268;
	// bl 0x82ca3bf0
	ctx.lr = 0x8238E66C;
	sub_82CA3BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e7a8
	if (ctx.cr6.eq) goto loc_8238E7A8;
	// addi r5,r31,4144
	ctx.r5.s64 = ctx.r31.s64 + 4144;
	// lwz r6,8248(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,18508
	ctx.r3.s64 = ctx.r31.s64 + 18508;
	// bl 0x82ca3730
	ctx.lr = 0x8238E688;
	sub_82CA3730(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20556, ctx.r11.u8);
	// b 0x8238e7a8
	goto loc_8238E7A8;
loc_8238E694:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8238e7a8
	if (!ctx.cr6.eq) goto loc_8238E7A8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8238e780
	if (ctx.cr6.lt) goto loc_8238E780;
	// bne cr6,0x8238e7a8
	if (!ctx.cr6.eq) goto loc_8238E7A8;
	// lbz r10,4144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4144);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r11,r31,20571
	ctx.r11.s64 = ctx.r31.s64 + 20571;
	// addi r8,r31,4144
	ctx.r8.s64 = ctx.r31.s64 + 4144;
	// stb r10,20571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20571, ctx.r10.u8);
	// lbz r7,4145(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4145);
	// stb r7,20572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20572, ctx.r7.u8);
	// lbz r6,4146(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4146);
	// lwz r9,26920(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26920);
	// stb r6,20573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20573, ctx.r6.u8);
	// lbz r5,4147(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4147);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r5,20574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20574, ctx.r5.u8);
	// beq cr6,0x8238e6f0
	if (ctx.cr6.eq) goto loc_8238E6F0;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lbz r10,26917(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26917);
	// b 0x8238e6f4
	goto loc_8238E6F4;
loc_8238E6F0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8238E6F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e70c
	if (ctx.cr6.eq) goto loc_8238E70C;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// b 0x8238e740
	goto loc_8238E740;
loc_8238E70C:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r9,26912(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238e728
	if (ctx.cr6.eq) goto loc_8238E728;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lbz r10,26821(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26821);
	// b 0x8238e72c
	goto loc_8238E72C;
loc_8238E728:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8238E72C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e778
	if (ctx.cr6.eq) goto loc_8238E778;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
loc_8238E740:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824e7430
	ctx.lr = 0x8238E748;
	sub_824E7430(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,26949(r9)
	PPC_STORE_U8(ctx.r9.u32 + 26949, ctx.r11.u8);
	// stb r6,20575(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20575, ctx.r6.u8);
	// stb r10,26950(r8)
	PPC_STORE_U8(ctx.r8.u32 + 26950, ctx.r10.u8);
	// b 0x8238e7a8
	goto loc_8238E7A8;
loc_8238E778:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8238e7bc
	goto loc_8238E7BC;
loc_8238E780:
	// lwz r11,4144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4144);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20564, ctx.r11.u32);
	// lwz r9,4148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4148);
	// stw r9,20568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20568, ctx.r9.u32);
	// lhz r8,4152(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4152);
	// sth r8,20572(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20572, ctx.r8.u16);
	// lbz r7,4154(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4154);
	// stb r7,20574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20574, ctx.r7.u8);
	// stb r10,20575(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20575, ctx.r10.u8);
loc_8238E7A8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8238E7B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238E7BC:
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

__attribute__((alias("__imp__sub_8238E7D4"))) PPC_WEAK_FUNC(sub_8238E7D4);
PPC_FUNC_IMPL(__imp__sub_8238E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E7D8"))) PPC_WEAK_FUNC(sub_8238E7D8);
PPC_FUNC_IMPL(__imp__sub_8238E7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8238E7E0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r9,r10,-1212
	ctx.r9.s64 = ctx.r10.s64 + -1212;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8238eb0c
	if (ctx.cr6.eq) goto loc_8238EB0C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8238e8b0
	if (ctx.cr6.eq) goto loc_8238E8B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8238eb78
	if (!ctx.cr6.eq) goto loc_8238EB78;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r30,r11,-27460
	ctx.r30.s64 = ctx.r11.s64 + -27460;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r26,1024
	ctx.r26.s64 = 1024;
	// lis r27,-31927
	ctx.r27.s64 = -2092367872;
	// addi r28,r11,19872
	ctx.r28.s64 = ctx.r11.s64 + 19872;
loc_8238E838:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r3,26932(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26932);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82cfaff0
	ctx.lr = 0x8238E85C;
	sub_82CFAFF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238eb48
	if (!ctx.cr6.eq) goto loc_8238EB48;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// li r4,256
	ctx.r4.s64 = 256;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8268
	ctx.r3.s64 = ctx.r11.s64 + 8268;
	// bl 0x82ca3d30
	ctx.lr = 0x8238E884;
	sub_82CA3D30(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// blt cr6,0x8238e838
	if (ctx.cr6.lt) goto loc_8238E838;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_8238E8B0:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r10,-31548
	ctx.r7.s64 = ctx.r10.s64 + -31548;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,26932(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26932);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82cfaff0
	ctx.lr = 0x8238E8E0;
	sub_82CFAFF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238eb48
	if (!ctx.cr6.eq) goto loc_8238EB48;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,26932(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26932);
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,8244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82cfa6e8
	ctx.lr = 0x8238E908;
	sub_82CFA6E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238eb48
	if (!ctx.cr6.eq) goto loc_8238EB48;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_8238E91C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238e91c
	if (!ctx.cr0.eq) goto loc_8238E91C;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,31440
	ctx.r4.s64 = ctx.r7.s64 + 31440;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8238E94C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82374ca0
	ctx.lr = 0x8238E958;
	sub_82374CA0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8238E960;
	sub_82214F08(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8238e974
	if (!ctx.cr6.eq) goto loc_8238E974;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x8238e984
	goto loc_8238E984;
loc_8238E974:
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// ble cr6,0x8238e984
	if (!ctx.cr6.gt) goto loc_8238E984;
	// li r8,32
	ctx.r8.s64 = 32;
loc_8238E984:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8238e9c8
	if (!ctx.cr6.gt) goto loc_8238E9C8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r10,63
	ctx.r7.s64 = ctx.r10.s64 + 63;
loc_8238E99C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// beq cr6,0x8238e9ac
	if (ctx.cr6.eq) goto loc_8238E9AC;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8238E9AC:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// sth r5,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// blt cr6,0x8238e99c
	if (ctx.cr6.lt) goto loc_8238E99C;
loc_8238E9C8:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// sthx r24,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u16);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8238eaf4
	if (!ctx.cr6.gt) goto loc_8238EAF4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r27,r11,-31568
	ctx.r27.s64 = ctx.r11.s64 + -31568;
	// addi r26,r10,-31588
	ctx.r26.s64 = ctx.r10.s64 + -31588;
	// addi r28,r9,19872
	ctx.r28.s64 = ctx.r9.s64 + 19872;
loc_8238EA08:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,57(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 57);
	// bl 0x8238e1e8
	ctx.lr = 0x8238EA20;
	sub_8238E1E8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,57(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 57);
	// beq cr6,0x8238ea50
	if (ctx.cr6.eq) goto loc_8238EA50;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca3bf0
	ctx.lr = 0x8238EA44;
	sub_82CA3BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238ea98
	if (!ctx.cr6.eq) goto loc_8238EA98;
	// b 0x8238ea94
	goto loc_8238EA94;
loc_8238EA50:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ca3bf0
	ctx.lr = 0x8238EA58;
	sub_82CA3BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238ea68
	if (ctx.cr6.eq) goto loc_8238EA68;
	// lbz r11,20557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20557);
	// b 0x8238ea8c
	goto loc_8238EA8C;
loc_8238EA68:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,57(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 57);
	// bl 0x82ca3bf0
	ctx.lr = 0x8238EA80;
	sub_82CA3BF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238ea94
	if (ctx.cr6.eq) goto loc_8238EA94;
	// lbz r11,20556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20556);
loc_8238EA8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ea98
	if (ctx.cr6.eq) goto loc_8238EA98;
loc_8238EA94:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8238EA98:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238eadc
	if (ctx.cr6.eq) goto loc_8238EADC;
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,256
	ctx.r4.s64 = 256;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r11,8268
	ctx.r3.s64 = ctx.r11.s64 + 8268;
	// lwz r6,57(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 57);
	// bl 0x82ca3d30
	ctx.lr = 0x8238EAD0;
	sub_82CA3D30(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
loc_8238EADC:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,65
	ctx.r30.s64 = ctx.r30.s64 + 65;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238ea08
	if (ctx.cr6.lt) goto loc_8238EA08;
loc_8238EAF4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8238EAFC;
	sub_82214F08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_8238EB0C:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,2804
	ctx.r7.s64 = ctx.r8.s64 + 2804;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,26932(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26932);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cfaff0
	ctx.lr = 0x8238EB40;
	sub_82CFAFF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238eb58
	if (ctx.cr6.eq) goto loc_8238EB58;
loc_8238EB48:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_8238EB58:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r11,19872
	ctx.r5.s64 = ctx.r11.s64 + 19872;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,8268
	ctx.r3.s64 = ctx.r31.s64 + 8268;
	// bl 0x82ca3d30
	ctx.lr = 0x8238EB70;
	sub_82CA3D30(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_8238EB78:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8238EB88"))) PPC_WEAK_FUNC(sub_8238EB88);
PPC_FUNC_IMPL(__imp__sub_8238EB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238EB90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ebc0
	if (ctx.cr6.eq) goto loc_8238EBC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8238ebc8
	if (!ctx.cr0.eq) goto loc_8238EBC8;
loc_8238EBC0:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8238ebf8
	goto loc_8238EBF8;
loc_8238EBC8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8238ebd4
	if (!ctx.cr6.gt) goto loc_8238EBD4;
	// twi 31,r0,22
loc_8238EBD4:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238ebe8
	if (ctx.cr6.eq) goto loc_8238EBE8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8238ebec
	if (ctx.cr6.eq) goto loc_8238EBEC;
loc_8238EBE8:
	// twi 31,r0,22
loc_8238EBEC:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
loc_8238EBF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238ec68
	ctx.lr = 0x8238EC04;
	sub_8238EC68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8238ec18
	if (!ctx.cr6.gt) goto loc_8238EC18;
	// twi 31,r0,22
loc_8238EC18:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x8238ec48
	if (ctx.cr6.gt) goto loc_8238EC48;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8238ec4c
	if (!ctx.cr6.lt) goto loc_8238EC4C;
loc_8238EC48:
	// twi 31,r0,22
loc_8238EC4C:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238EC64"))) PPC_WEAK_FUNC(sub_8238EC64);
PPC_FUNC_IMPL(__imp__sub_8238EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238EC68"))) PPC_WEAK_FUNC(sub_8238EC68);
PPC_FUNC_IMPL(__imp__sub_8238EC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8238EC70;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238ec94
	if (!ctx.cr6.eq) goto loc_8238EC94;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8238eca0
	goto loc_8238ECA0;
loc_8238EC94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_8238ECA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238ecb0
	if (!ctx.cr6.eq) goto loc_8238ECB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8238ecbc
	goto loc_8238ECBC;
loc_8238ECB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
loc_8238ECBC:
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x8238ecdc
	if (!ctx.cr6.lt) goto loc_8238ECDC;
	// bl 0x82684b38
	ctx.lr = 0x8238ECD4;
	sub_82684B38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8238ECDC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238ecec
	if (!ctx.cr6.eq) goto loc_8238ECEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8238ecf8
	goto loc_8238ECF8;
loc_8238ECEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
loc_8238ECF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8238ee14
	if (!ctx.cr6.lt) goto loc_8238EE14;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8238ed1c
	if (ctx.cr6.lt) goto loc_8238ED1C;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8238ED1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238ed2c
	if (!ctx.cr6.eq) goto loc_8238ED2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8238ed38
	goto loc_8238ED38;
loc_8238ED2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
loc_8238ED38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8238ed64
	if (!ctx.cr6.lt) goto loc_8238ED64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238ed54
	if (!ctx.cr6.eq) goto loc_8238ED54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8238ed60
	goto loc_8238ED60;
loc_8238ED54:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
loc_8238ED60:
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_8238ED64:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333f78
	ctx.lr = 0x8238ED70;
	sub_82333F78(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r11,r5,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r30
	ctx.r28.u64 = ctx.r6.u64 + ctx.r30.u64;
	// beq 0x8238ed98
	if (ctx.cr0.eq) goto loc_8238ED98;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	ctx.lr = 0x8238ED98;
	sub_82CA3808(ctx, base);
loc_8238ED98:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238edc0
	if (ctx.cr0.eq) goto loc_8238EDC0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82ca3808
	ctx.lr = 0x8238EDC0;
	sub_82CA3808(ctx, base);
loc_8238EDC0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238edd4
	if (!ctx.cr6.eq) goto loc_8238EDD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8238ede0
	goto loc_8238EDE0;
loc_8238EDD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
loc_8238EDE0:
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238edf0
	if (ctx.cr6.eq) goto loc_8238EDF0;
	// bl 0x8221be68
	ctx.lr = 0x8238EDF0;
	sub_8221BE68(ctx, base);
loc_8238EDF0:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8238EE14:
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8238eea4
	if (!ctx.cr6.lt) goto loc_8238EEA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ee48
	if (ctx.cr6.eq) goto loc_8238EE48;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82ca3808
	ctx.lr = 0x8238EE48;
	sub_82CA3808(ctx, base);
loc_8238EE48:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r9.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238ee70
	if (ctx.cr6.eq) goto loc_8238EE70;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8238EE64:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8238ee64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238EE64;
loc_8238EE70:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8238ef14
	if (ctx.cr6.eq) goto loc_8238EF14;
loc_8238EE8C:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8238ee8c
	if (!ctx.cr6.eq) goto loc_8238EE8C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8238EEA4:
	// addi r28,r30,-4
	ctx.r28.s64 = ctx.r30.s64 + -4;
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r6,r30
	ctx.r27.u64 = ctx.r6.u64 + ctx.r30.u64;
	// beq 0x8238eecc
	if (ctx.cr0.eq) goto loc_8238EECC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3808
	ctx.lr = 0x8238EECC;
	sub_82CA3808(ctx, base);
loc_8238EECC:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238eef4
	if (!ctx.cr0.gt) goto loc_8238EEF4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82ca3808
	ctx.lr = 0x8238EEF4;
	sub_82CA3808(ctx, base);
loc_8238EEF4:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238ef14
	if (ctx.cr6.eq) goto loc_8238EF14;
loc_8238EF04:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238ef04
	if (!ctx.cr6.eq) goto loc_8238EF04;
loc_8238EF14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8238EF1C"))) PPC_WEAK_FUNC(sub_8238EF1C);
PPC_FUNC_IMPL(__imp__sub_8238EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238EF20"))) PPC_WEAK_FUNC(sub_8238EF20);
PPC_FUNC_IMPL(__imp__sub_8238EF20) {
	PPC_FUNC_PROLOGUE();
	// li r11,176
	ctx.r11.s64 = 176;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r10.u8);
	// stvx128 v1,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238EF34"))) PPC_WEAK_FUNC(sub_8238EF34);
PPC_FUNC_IMPL(__imp__sub_8238EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238EF38"))) PPC_WEAK_FUNC(sub_8238EF38);
PPC_FUNC_IMPL(__imp__sub_8238EF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8238EF40;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r29,12(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// bl 0x8229ad78
	ctx.lr = 0x8238EF78;
	sub_8229AD78(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8238efc8
	if (ctx.cr6.eq) goto loc_8238EFC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x8238EF90;
	sub_821F0108(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82390790
	ctx.lr = 0x8238EFA0;
	sub_82390790(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8238EFAC;
	sub_82214F08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238efc8
	if (ctx.cr6.eq) goto loc_8238EFC8;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238efcc
	if (!ctx.cr6.eq) goto loc_8238EFCC;
loc_8238EFC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238EFCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f01c
	if (!ctx.cr6.eq) goto loc_8238F01C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,13404
	ctx.r4.s64 = ctx.r11.s64 + 13404;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8238EFEC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x8238EFF8;
	sub_821F0108(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82390790
	ctx.lr = 0x8238F008;
	sub_82390790(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8238F014;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x8238F01C;
	sub_82214F08(ctx, base);
loc_8238F01C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238f038
	if (ctx.cr6.eq) goto loc_8238F038;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238f03c
	if (!ctx.cr6.eq) goto loc_8238F03C;
loc_8238F038:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238F03C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f064
	if (!ctx.cr6.eq) goto loc_8238F064;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82390890
	ctx.lr = 0x8238F060;
	sub_82390890(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8238F064:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238f080
	if (ctx.cr6.eq) goto loc_8238F080;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238f084
	if (!ctx.cr6.eq) goto loc_8238F084;
loc_8238F080:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238F084:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f0f8
	if (ctx.cr6.eq) goto loc_8238F0F8;
	// lwz r31,124(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238f0f8
	if (ctx.cr6.eq) goto loc_8238F0F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238F0B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8238F0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r5.u64);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r4.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8238F0F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8238F104"))) PPC_WEAK_FUNC(sub_8238F104);
PPC_FUNC_IMPL(__imp__sub_8238F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F108"))) PPC_WEAK_FUNC(sub_8238F108);
PPC_FUNC_IMPL(__imp__sub_8238F108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8238F110;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-31532
	ctx.r9.s64 = ctx.r11.s64 + -31532;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// blt cr6,0x8238f1b0
	if (ctx.cr6.lt) goto loc_8238F1B0;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238f1a0
	if (ctx.cr6.eq) goto loc_8238F1A0;
	// lbz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x8238f1a4
	if (!ctx.cr6.eq) goto loc_8238F1A4;
loc_8238F1A0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238F1A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f24c
	if (ctx.cr6.eq) goto loc_8238F24C;
loc_8238F1B0:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	ctx.lr = 0x8238F1B8;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238f1fc
	if (ctx.cr6.eq) goto loc_8238F1FC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r3,416
	ctx.r3.s64 = 416;
	// addi r10,r11,4400
	ctx.r10.s64 = ctx.r11.s64 + 4400;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x8238F1D8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238f1f0
	if (ctx.cr6.eq) goto loc_8238F1F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82422b08
	ctx.lr = 0x8238F1E8;
	sub_82422B08(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// b 0x8238f200
	goto loc_8238F200;
loc_8238F1F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// b 0x8238f200
	goto loc_8238F200;
loc_8238F1FC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8238F200:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829ff648
	ctx.lr = 0x8238F208;
	sub_829FF648(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238f24c
	if (ctx.cr6.eq) goto loc_8238F24C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x8238F21C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238f244
	if (ctx.cr6.eq) goto loc_8238F244;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-32105
	ctx.r9.s64 = -2104033280;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,-32320
	ctx.r8.s64 = ctx.r9.s64 + -32320;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8238f248
	goto loc_8238F248;
loc_8238F244:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238F248:
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8238F24C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// slw r10,r27,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r11,26840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26840);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r6,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r6.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238f2bc
	if (ctx.cr6.eq) goto loc_8238F2BC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// std r30,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r30.u64);
	// bl 0x82cbd0d0
	ctx.lr = 0x8238F2A0;
	sub_82CBD0D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8238f2c0
	if (!ctx.cr6.eq) goto loc_8238F2C0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8238F2BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238F2C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8238F2C8"))) PPC_WEAK_FUNC(sub_8238F2C8);
PPC_FUNC_IMPL(__imp__sub_8238F2C8) {
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
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82356698
	ctx.lr = 0x8238F2EC;
	sub_82356698(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x8238F300;
	sub_821940C8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x829ff648
	ctx.lr = 0x8238F310;
	sub_829FF648(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// addi r6,r8,-1124
	ctx.r6.s64 = ctx.r8.s64 + -1124;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8238f334
	if (ctx.cr6.eq) goto loc_8238F334;
	// bl 0x8221be68
	ctx.lr = 0x8238F330;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238F334:
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

__attribute__((alias("__imp__sub_8238F34C"))) PPC_WEAK_FUNC(sub_8238F34C);
PPC_FUNC_IMPL(__imp__sub_8238F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F350"))) PPC_WEAK_FUNC(sub_8238F350);
PPC_FUNC_IMPL(__imp__sub_8238F350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238F358;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x82274e10
	ctx.lr = 0x8238F378;
	sub_82274E10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238f3e4
	if (ctx.cr6.eq) goto loc_8238F3E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238F394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238f3e4
	if (ctx.cr6.eq) goto loc_8238F3E4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8238f3d4
	if (ctx.cr6.eq) goto loc_8238F3D4;
loc_8238F3B8:
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
	// bne 0x8238f3b8
	if (!ctx.cr0.eq) goto loc_8238F3B8;
loc_8238F3D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8245f7a8
	ctx.lr = 0x8238F3E4;
	sub_8245F7A8(ctx, base);
loc_8238F3E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x8238F3EC;
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238F3F4"))) PPC_WEAK_FUNC(sub_8238F3F4);
PPC_FUNC_IMPL(__imp__sub_8238F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F3F8"))) PPC_WEAK_FUNC(sub_8238F3F8);
PPC_FUNC_IMPL(__imp__sub_8238F3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238F400;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x82274e10
	ctx.lr = 0x8238F420;
	sub_82274E10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238f48c
	if (ctx.cr6.eq) goto loc_8238F48C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238F43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238f48c
	if (ctx.cr6.eq) goto loc_8238F48C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8238f47c
	if (ctx.cr6.eq) goto loc_8238F47C;
loc_8238F460:
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
	// bne 0x8238f460
	if (!ctx.cr0.eq) goto loc_8238F460;
loc_8238F47C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8245fa10
	ctx.lr = 0x8238F48C;
	sub_8245FA10(ctx, base);
loc_8238F48C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x8238F494;
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238F49C"))) PPC_WEAK_FUNC(sub_8238F49C);
PPC_FUNC_IMPL(__imp__sub_8238F49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F4A0"))) PPC_WEAK_FUNC(sub_8238F4A0);
PPC_FUNC_IMPL(__imp__sub_8238F4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8238F4A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f4d0
	if (ctx.cr6.eq) goto loc_8238F4D0;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lbz r10,26821(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26821);
	// b 0x8238f4d4
	goto loc_8238F4D4;
loc_8238F4D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8238F4D4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238f524
	if (ctx.cr6.eq) goto loc_8238F524;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x82274e10
	ctx.lr = 0x8238F4EC;
	sub_82274E10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238f524
	if (ctx.cr6.eq) goto loc_8238F524;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238F508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238f524
	if (ctx.cr6.eq) goto loc_8238F524;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8245fe00
	ctx.lr = 0x8238F524;
	sub_8245FE00(ctx, base);
loc_8238F524:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8238F52C"))) PPC_WEAK_FUNC(sub_8238F52C);
PPC_FUNC_IMPL(__imp__sub_8238F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F530"))) PPC_WEAK_FUNC(sub_8238F530);
PPC_FUNC_IMPL(__imp__sub_8238F530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8238F538;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822149c8
	ctx.lr = 0x8238F564;
	sub_822149C8(ctx, base);
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82978470
	ctx.lr = 0x8238F570;
	sub_82978470(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,5732
	ctx.r8.s64 = ctx.r9.s64 + 5732;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x8238F584;
	sub_821940C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8238fa40
	ctx.lr = 0x8238F58C;
	sub_8238FA40(ctx, base);
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,128(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// bl 0x82274e10
	ctx.lr = 0x8238F5A0;
	sub_82274E10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238f600
	if (ctx.cr6.eq) goto loc_8238F600;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	ctx.lr = 0x8238F5B4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238f5c8
	if (ctx.cr6.eq) goto loc_8238F5C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8248d630
	ctx.lr = 0x8238F5C4;
	sub_8248D630(ctx, base);
	// b 0x8238f5cc
	goto loc_8238F5CC;
loc_8238F5C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8238F5CC:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238f5e8
	if (ctx.cr6.eq) goto loc_8238F5E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x8238F5E0;
	sub_8254C780(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8238f5f0
	goto loc_8238F5F0;
loc_8238F5E8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_8238F5F0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,36(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82460088
	ctx.lr = 0x8238F600;
	sub_82460088(ctx, base);
loc_8238F600:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238f704
	if (ctx.cr6.eq) goto loc_8238F704;
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f640
	if (ctx.cr6.eq) goto loc_8238F640;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238f708
	goto loc_8238F708;
loc_8238F640:
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238f6ac
	if (!ctx.cr0.gt) goto loc_8238F6AC;
loc_8238F65C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238f67c
	if (ctx.cr6.lt) goto loc_8238F67C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8238F67C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238f698
	if (ctx.cr6.eq) goto loc_8238F698;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238f6a0
	goto loc_8238F6A0;
loc_8238F698:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238F6A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238f65c
	if (ctx.cr6.gt) goto loc_8238F65C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238F6AC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238f6f0
	if (ctx.cr6.eq) goto loc_8238F6F0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238f6c8
	if (ctx.cr6.gt) goto loc_8238F6C8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F6C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f6f0
	if (!ctx.cr6.eq) goto loc_8238F6F0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238f708
	goto loc_8238F708;
loc_8238F6F0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238f708
	goto loc_8238F708;
loc_8238F704:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F708:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f728
	if (!ctx.cr6.eq) goto loc_8238F728;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-31544
	ctx.r4.s64 = ctx.r11.s64 + -31544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82392538
	ctx.lr = 0x8238F728;
	sub_82392538(ctx, base);
loc_8238F728:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823beff0
	ctx.lr = 0x8238F730;
	sub_823BEFF0(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8238f774
	if (ctx.cr6.lt) goto loc_8238F774;
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238f764
	if (ctx.cr6.eq) goto loc_8238F764;
	// lbz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8238f768
	if (!ctx.cr6.eq) goto loc_8238F768;
loc_8238F764:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f780
	if (ctx.cr6.eq) goto loc_8238F780;
loc_8238F774:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82422eb0
	ctx.lr = 0x8238F780;
	sub_82422EB0(ctx, base);
loc_8238F780:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8238F788"))) PPC_WEAK_FUNC(sub_8238F788);
PPC_FUNC_IMPL(__imp__sub_8238F788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8238F790;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f7e0
	if (ctx.cr6.eq) goto loc_8238F7E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238f8d0
	if (ctx.cr6.eq) goto loc_8238F8D0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f7e0
	if (ctx.cr6.eq) goto loc_8238F7E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238F7CC;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238f7e4
	if (!ctx.cr6.eq) goto loc_8238F7E4;
loc_8238F7E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F7E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f820
	if (ctx.cr6.eq) goto loc_8238F820;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x825575c8
	ctx.lr = 0x8238F810;
	sub_825575C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823608f8
	ctx.lr = 0x8238F820;
	sub_823608F8(ctx, base);
loc_8238F820:
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238f848
	if (ctx.cr6.eq) goto loc_8238F848;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8238f84c
	if (!ctx.cr6.eq) goto loc_8238F84C;
loc_8238F848:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F84C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fa38
	if (ctx.cr6.eq) goto loc_8238FA38;
	// bl 0x8230b398
	ctx.lr = 0x8238F85C;
	sub_8230B398(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238f878
	if (ctx.cr6.eq) goto loc_8238F878;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238f87c
	if (!ctx.cr6.eq) goto loc_8238F87C;
loc_8238F878:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F87C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fa38
	if (ctx.cr6.eq) goto loc_8238FA38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238F894;
	sub_825575C8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238f9a0
	if (ctx.cr6.eq) goto loc_8238F9A0;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f8dc
	if (ctx.cr6.eq) goto loc_8238F8DC;
	// lbz r10,122(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 122);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238f9a4
	goto loc_8238F9A4;
loc_8238F8D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x8238F8D8;
	sub_821940C8(ctx, base);
	// b 0x8238f7e0
	goto loc_8238F7E0;
loc_8238F8DC:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238f948
	if (!ctx.cr0.gt) goto loc_8238F948;
loc_8238F8F8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,122
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 122, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8238f918
	if (ctx.cr6.lt) goto loc_8238F918;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8238F918:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238f934
	if (ctx.cr6.eq) goto loc_8238F934;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8238f93c
	goto loc_8238F93C;
loc_8238F934:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8238F93C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8238f8f8
	if (ctx.cr6.gt) goto loc_8238F8F8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8238F948:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8238f98c
	if (ctx.cr6.eq) goto loc_8238F98C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8238f964
	if (ctx.cr6.gt) goto loc_8238F964;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F964:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f98c
	if (!ctx.cr6.eq) goto loc_8238F98C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238f9a4
	goto loc_8238F9A4;
loc_8238F98C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8238f9a4
	goto loc_8238F9A4;
loc_8238F9A0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8238F9A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fa38
	if (ctx.cr6.eq) goto loc_8238FA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c2c18
	ctx.lr = 0x8238F9B8;
	sub_821C2C18(ctx, base);
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x8238fa04
	if (!ctx.cr6.eq) goto loc_8238FA04;
	// addi r9,r10,18740
	ctx.r9.s64 = ctx.r10.s64 + 18740;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x82526b78
	ctx.lr = 0x8238F9E8;
	sub_82526B78(ctx, base);
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// bl 0x8231f4f0
	ctx.lr = 0x8238F9FC;
	sub_8231F4F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8238FA04:
	// addi r8,r10,18740
	ctx.r8.s64 = ctx.r10.s64 + 18740;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// bl 0x82526b78
	ctx.lr = 0x8238FA24;
	sub_82526B78(ctx, base);
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// bl 0x8231f4f0
	ctx.lr = 0x8238FA38;
	sub_8231F4F0(ctx, base);
loc_8238FA38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8238FA40"))) PPC_WEAK_FUNC(sub_8238FA40);
PPC_FUNC_IMPL(__imp__sub_8238FA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8238FA48;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r24,20
	ctx.r26.s64 = ctx.r24.s64 + 20;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// ld r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82350c18
	ctx.lr = 0x8238FA84;
	sub_82350C18(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r28,r24,12
	ctx.r28.s64 = ctx.r24.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fac8
	if (ctx.cr6.eq) goto loc_8238FAC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238fb60
	if (ctx.cr6.eq) goto loc_8238FB60;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fac8
	if (ctx.cr6.eq) goto loc_8238FAC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FAB4;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238facc
	if (!ctx.cr6.eq) goto loc_8238FACC;
loc_8238FAC8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8238FACC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ff9c
	if (ctx.cr6.eq) goto loc_8238FF9C;
	// lis r25,-31927
	ctx.r25.s64 = -2092367872;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,124(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x8221f388
	ctx.lr = 0x8238FAF0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,5732
	ctx.r27.s64 = ctx.r11.s64 + 5732;
	// beq cr6,0x8238fb6c
	if (ctx.cr6.eq) goto loc_8238FB6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FB0C;
	sub_825575C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,7988
	ctx.r9.s64 = ctx.r10.s64 + 7988;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8238FB34;
	sub_822149C8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfd f13,3376(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3376);
	// lfs f0,-27468(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfd f13,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f13.u64);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825bb2c0
	ctx.lr = 0x8238FB5C;
	sub_825BB2C0(ctx, base);
	// b 0x8238fb70
	goto loc_8238FB70;
loc_8238FB60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821940c8
	ctx.lr = 0x8238FB68;
	sub_821940C8(ctx, base);
	// b 0x8238fac8
	goto loc_8238FAC8;
loc_8238FB6C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238FB70:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fb8c
	if (ctx.cr6.eq) goto loc_8238FB8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x8238FB84;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238fb94
	goto loc_8238FB94;
loc_8238FB8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_8238FB94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FB9C;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8238FBA4;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8238FBAC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fbf8
	if (ctx.cr6.eq) goto loc_8238FBF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FBC0;
	sub_825575C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,8308
	ctx.r9.s64 = ctx.r10.s64 + 8308;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8238FBE8;
	sub_822149C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825bb2c0
	ctx.lr = 0x8238FBF4;
	sub_825BB2C0(ctx, base);
	// b 0x8238fbfc
	goto loc_8238FBFC;
loc_8238FBF8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238FBFC:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fc18
	if (ctx.cr6.eq) goto loc_8238FC18;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x8238FC10;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238fc20
	goto loc_8238FC20;
loc_8238FC18:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_8238FC20:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FC28;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8238FC30;
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8238FC38;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fc94
	if (ctx.cr6.eq) goto loc_8238FC94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FC4C;
	sub_825575C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,8180
	ctx.r9.s64 = ctx.r10.s64 + 8180;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8238FC74;
	sub_822149C8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825bb2c0
	ctx.lr = 0x8238FC90;
	sub_825BB2C0(ctx, base);
	// b 0x8238fc98
	goto loc_8238FC98;
loc_8238FC94:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238FC98:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fcb4
	if (ctx.cr6.eq) goto loc_8238FCB4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c780
	ctx.lr = 0x8238FCAC;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238fcbc
	goto loc_8238FCBC;
loc_8238FCB4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_8238FCBC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FCC4;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8238FCCC;
	sub_829FF648(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8238FCD4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fcfc
	if (ctx.cr6.eq) goto loc_8238FCFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FCE8;
	sub_825575C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82746050
	ctx.lr = 0x8238FCF8;
	sub_82746050(ctx, base);
	// b 0x8238fd00
	goto loc_8238FD00;
loc_8238FCFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8238FD00:
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238fd1c
	if (ctx.cr6.eq) goto loc_8238FD1C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8254c780
	ctx.lr = 0x8238FD14;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238fd24
	goto loc_8238FD24;
loc_8238FD1C:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_8238FD24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FD2C;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8238FD34;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8238FD3C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fd88
	if (ctx.cr6.eq) goto loc_8238FD88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FD50;
	sub_825575C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,8340
	ctx.r9.s64 = ctx.r10.s64 + 8340;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8238FD78;
	sub_822149C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825bb2c0
	ctx.lr = 0x8238FD84;
	sub_825BB2C0(ctx, base);
	// b 0x8238fd8c
	goto loc_8238FD8C;
loc_8238FD88:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238FD8C:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fda8
	if (ctx.cr6.eq) goto loc_8238FDA8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254c780
	ctx.lr = 0x8238FDA0;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238fdb0
	goto loc_8238FDB0;
loc_8238FDA8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
loc_8238FDB0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FDB8;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x8238FDC0;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8238FDC8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fe14
	if (ctx.cr6.eq) goto loc_8238FE14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FDDC;
	sub_825575C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,8436
	ctx.r9.s64 = ctx.r10.s64 + 8436;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8238FE04;
	sub_822149C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825bb2c0
	ctx.lr = 0x8238FE10;
	sub_825BB2C0(ctx, base);
	// b 0x8238fe18
	goto loc_8238FE18;
loc_8238FE14:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238FE18:
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fe34
	if (ctx.cr6.eq) goto loc_8238FE34;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8254c780
	ctx.lr = 0x8238FE2C;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238fe3c
	goto loc_8238FE3C;
loc_8238FE34:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
loc_8238FE3C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FE44;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x8238FE4C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8238FE54;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fea0
	if (ctx.cr6.eq) goto loc_8238FEA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FE68;
	sub_825575C8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,3604
	ctx.r9.s64 = ctx.r10.s64 + 3604;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8238FE90;
	sub_822149C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825bb2c0
	ctx.lr = 0x8238FE9C;
	sub_825BB2C0(ctx, base);
	// b 0x8238fea4
	goto loc_8238FEA4;
loc_8238FEA0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238FEA4:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238fec0
	if (ctx.cr6.eq) goto loc_8238FEC0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8254c780
	ctx.lr = 0x8238FEB8;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238fec8
	goto loc_8238FEC8;
loc_8238FEC0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
loc_8238FEC8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FED0;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x8238FED8;
	sub_829FF648(ctx, base);
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8238ff00
	if (!ctx.cr6.eq) goto loc_8238FF00;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8238ff00
	if (ctx.cr6.eq) goto loc_8238FF00;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8238FF00:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ff9c
	if (ctx.cr6.eq) goto loc_8238FF9C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x8238FF14;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238ff64
	if (ctx.cr6.eq) goto loc_8238FF64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FF28;
	sub_825575C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r9,r10,8276
	ctx.r9.s64 = ctx.r10.s64 + 8276;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// bl 0x822149c8
	ctx.lr = 0x8238FF54;
	sub_822149C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825bb2c0
	ctx.lr = 0x8238FF60;
	sub_825BB2C0(ctx, base);
	// b 0x8238ff68
	goto loc_8238FF68;
loc_8238FF64:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238FF68:
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238ff84
	if (ctx.cr6.eq) goto loc_8238FF84;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8254c780
	ctx.lr = 0x8238FF7C;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8238ff8c
	goto loc_8238FF8C;
loc_8238FF84:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
loc_8238FF8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8238FF94;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x829ff648
	ctx.lr = 0x8238FF9C;
	sub_829FF648(ctx, base);
loc_8238FF9C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8238FFA4"))) PPC_WEAK_FUNC(sub_8238FFA4);
PPC_FUNC_IMPL(__imp__sub_8238FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238FFA8"))) PPC_WEAK_FUNC(sub_8238FFA8);
PPC_FUNC_IMPL(__imp__sub_8238FFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8238FFB0;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r26,r24,12
	ctx.r26.s64 = ctx.r24.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239000c
	if (ctx.cr6.eq) goto loc_8239000C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823900ac
	if (ctx.cr6.eq) goto loc_823900AC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239000c
	if (ctx.cr6.eq) goto loc_8239000C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825575c8
	ctx.lr = 0x8238FFF8;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390010
	if (!ctx.cr6.eq) goto loc_82390010;
loc_8239000C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82390010:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r25,-31927
	ctx.r25.s64 = -2092367872;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390590
	if (ctx.cr6.eq) goto loc_82390590;
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x828beec0
	ctx.lr = 0x82390038;
	sub_828BEEC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82390968
	ctx.lr = 0x82390044;
	sub_82390968(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82390590
	if (ctx.cr6.eq) goto loc_82390590;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825575c8
	ctx.lr = 0x82390058;
	sub_825575C8(ctx, base);
	// lwz r28,124(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82390590
	if (ctx.cr6.eq) goto loc_82390590;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x825575c8
	ctx.lr = 0x82390070;
	sub_825575C8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239017c
	if (ctx.cr6.eq) goto loc_8239017C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823900b8
	if (ctx.cr6.eq) goto loc_823900B8;
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82390180
	goto loc_82390180;
loc_823900AC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821940c8
	ctx.lr = 0x823900B4;
	sub_821940C8(ctx, base);
	// b 0x8239000c
	goto loc_8239000C;
loc_823900B8:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82390124
	if (!ctx.cr0.gt) goto loc_82390124;
loc_823900D4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,137
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 137, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823900f4
	if (ctx.cr6.lt) goto loc_823900F4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_823900F4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82390110
	if (ctx.cr6.eq) goto loc_82390110;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82390118
	goto loc_82390118;
loc_82390110:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82390118:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823900d4
	if (ctx.cr6.gt) goto loc_823900D4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82390124:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82390168
	if (ctx.cr6.eq) goto loc_82390168;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,137
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 137, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82390140
	if (ctx.cr6.gt) goto loc_82390140;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82390140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390168
	if (!ctx.cr6.eq) goto loc_82390168;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82390180
	goto loc_82390180;
loc_82390168:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82390180
	goto loc_82390180;
loc_8239017C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82390180:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390198
	if (ctx.cr6.eq) goto loc_82390198;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183240
	ctx.lr = 0x82390198;
	sub_82183240(ctx, base);
loc_82390198:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238ef38
	ctx.lr = 0x823901A8;
	sub_8238EF38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390380
	if (ctx.cr6.eq) goto loc_82390380;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823901D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,116(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823901F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x825575c8
	ctx.lr = 0x82390200;
	sub_825575C8(ctx, base);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r5,r6,18,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823902f4
	if (ctx.cr6.eq) goto loc_823902F4;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390238
	if (ctx.cr6.eq) goto loc_82390238;
	// lbz r10,110(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 110);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x823902f8
	goto loc_823902F8;
loc_82390238:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823902a4
	if (!ctx.cr0.gt) goto loc_823902A4;
loc_82390254:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,110
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 110, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82390274
	if (ctx.cr6.lt) goto loc_82390274;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_82390274:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82390290
	if (ctx.cr6.eq) goto loc_82390290;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82390298
	goto loc_82390298;
loc_82390290:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82390298:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82390254
	if (ctx.cr6.gt) goto loc_82390254;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823902A4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823902e4
	if (ctx.cr6.eq) goto loc_823902E4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823902c0
	if (ctx.cr6.gt) goto loc_823902C0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823902C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823902e4
	if (!ctx.cr6.eq) goto loc_823902E4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823902f8
	goto loc_823902F8;
loc_823902E4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823902f8
	goto loc_823902F8;
loc_823902F4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823902F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390430
	if (ctx.cr6.eq) goto loc_82390430;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-27468
	ctx.r9.s64 = ctx.r11.s64 + -27468;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r8,-28256
	ctx.r6.s64 = ctx.r8.s64 + -28256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821f58b0
	ctx.lr = 0x82390348;
	sub_821F58B0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,176
	ctx.r11.s64 = 176;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stb r10,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r10.u8);
	// lvx128 v11,r0,r5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239037C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82390430
	goto loc_82390430;
loc_82390380:
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r7,88(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r31,8(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823903AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lvx128 v1,r0,r3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823903d0
	if (ctx.cr6.eq) goto loc_823903D0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821eed10
	ctx.lr = 0x823903C8;
	sub_821EED10(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x823903d8
	goto loc_823903D8;
loc_823903D0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f31,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
loc_823903D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823903F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r9,-28176
	ctx.r7.s64 = ctx.r9.s64 + -28176;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v1,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v1,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82390430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82390430:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82390448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x825575c8
	ctx.lr = 0x82390454;
	sub_825575C8(ctx, base);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82390534
	if (ctx.cr6.eq) goto loc_82390534;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390488
	if (ctx.cr6.eq) goto loc_82390488;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82390534
	goto loc_82390534;
loc_82390488:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823904f4
	if (!ctx.cr0.gt) goto loc_823904F4;
loc_823904A4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823904c4
	if (ctx.cr6.lt) goto loc_823904C4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_823904C4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823904e0
	if (ctx.cr6.eq) goto loc_823904E0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823904e8
	goto loc_823904E8;
loc_823904E0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823904E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823904a4
	if (ctx.cr6.gt) goto loc_823904A4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823904F4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8239052c
	if (ctx.cr6.eq) goto loc_8239052C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82390510
	if (ctx.cr6.gt) goto loc_82390510;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82390510:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239052c
	if (!ctx.cr6.eq) goto loc_8239052C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82390530
	goto loc_82390530;
loc_8239052C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82390530:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82390534:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239054C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// lvx128 v1,r0,r3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82390590
	if (!ctx.cr6.eq) goto loc_82390590;
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390590
	if (ctx.cr6.eq) goto loc_82390590;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x822358a8
	ctx.lr = 0x82390590;
	sub_822358A8(ctx, base);
loc_82390590:
	// lwz r11,26912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26912);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823905d4
	if (!ctx.cr6.eq) goto loc_823905D4;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8222c210
	ctx.lr = 0x823905B8;
	sub_8222C210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82390968
	ctx.lr = 0x823905C4;
	sub_82390968(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823905d4
	if (ctx.cr6.eq) goto loc_823905D4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_823905D4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823905f8
	if (ctx.cr6.eq) goto loc_823905F8;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823905f8
	if (ctx.cr6.eq) goto loc_823905F8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824246f0
	ctx.lr = 0x823905F8;
	sub_824246F0(ctx, base);
loc_823905F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82390604"))) PPC_WEAK_FUNC(sub_82390604);
PPC_FUNC_IMPL(__imp__sub_82390604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390608"))) PPC_WEAK_FUNC(sub_82390608);
PPC_FUNC_IMPL(__imp__sub_82390608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82390610;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82390638
	if (ctx.cr6.gt) goto loc_82390638;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x8239063c
	if (!ctx.cr6.gt) goto loc_8239063C;
loc_82390638:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8239063C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823906f4
	if (ctx.cr6.eq) goto loc_823906F4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239068c
	if (ctx.cr6.eq) goto loc_8239068C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239077c
	if (ctx.cr6.eq) goto loc_8239077C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239068c
	if (ctx.cr6.eq) goto loc_8239068C;
	// bl 0x825575c8
	ctx.lr = 0x82390678;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390690
	if (!ctx.cr6.eq) goto loc_82390690;
loc_8239068C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82390690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823906f4
	if (!ctx.cr6.eq) goto loc_823906F4;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82264448
	ctx.lr = 0x823906B8;
	sub_82264448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823906d8
	if (ctx.cr6.eq) goto loc_823906D8;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823906dc
	if (!ctx.cr6.eq) goto loc_823906DC;
loc_823906D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823906DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823906f4
	if (ctx.cr6.eq) goto loc_823906F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f530
	ctx.lr = 0x823906F4;
	sub_8238F530(ctx, base);
loc_823906F4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390734
	if (ctx.cr6.eq) goto loc_82390734;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82390784
	if (ctx.cr6.eq) goto loc_82390784;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390734
	if (ctx.cr6.eq) goto loc_82390734;
	// bl 0x825575c8
	ctx.lr = 0x82390720;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390738
	if (!ctx.cr6.eq) goto loc_82390738;
loc_82390734:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82390738:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390774
	if (ctx.cr6.eq) goto loc_82390774;
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// bl 0x824246f0
	ctx.lr = 0x82390774;
	sub_824246F0(ctx, base);
loc_82390774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8239077C:
	// bl 0x821940c8
	ctx.lr = 0x82390780;
	sub_821940C8(ctx, base);
	// b 0x8239068c
	goto loc_8239068C;
loc_82390784:
	// bl 0x821940c8
	ctx.lr = 0x82390788;
	sub_821940C8(ctx, base);
	// b 0x82390734
	goto loc_82390734;
}

__attribute__((alias("__imp__sub_8239078C"))) PPC_WEAK_FUNC(sub_8239078C);
PPC_FUNC_IMPL(__imp__sub_8239078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390790"))) PPC_WEAK_FUNC(sub_82390790);
PPC_FUNC_IMPL(__imp__sub_82390790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82390798;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r28,r11,36
	ctx.r28.s64 = ctx.r11.s64 + 36;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823907c4
	if (ctx.cr6.eq) goto loc_823907C4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x823907cc
	goto loc_823907CC;
loc_823907C4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823907C8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_823907CC:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823907e8
	if (!ctx.cr6.eq) goto loc_823907E8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823907ec
	if (ctx.cr6.eq) goto loc_823907EC;
loc_823907E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823907EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390884
	if (!ctx.cr6.eq) goto loc_82390884;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82390864
	if (ctx.cr6.eq) goto loc_82390864;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203718
	ctx.lr = 0x82390818;
	sub_82203718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390864
	if (ctx.cr6.eq) goto loc_82390864;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8239083c
	if (!ctx.cr6.eq) goto loc_8239083C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82390858
	goto loc_82390858;
loc_8239083C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390854
	if (ctx.cr6.eq) goto loc_82390854;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390854
	if (ctx.cr6.eq) goto loc_82390854;
	// bl 0x8226d750
	ctx.lr = 0x82390850;
	sub_8226D750(ctx, base);
	// b 0x82390858
	goto loc_82390858;
loc_82390854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82390858:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390878
	if (!ctx.cr6.eq) goto loc_82390878;
loc_82390864:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823907c8
	if (ctx.cr6.eq) goto loc_823907C8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x823907cc
	goto loc_823907CC;
loc_82390878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82390884:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82390890"))) PPC_WEAK_FUNC(sub_82390890);
PPC_FUNC_IMPL(__imp__sub_82390890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82390898;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r28,r11,36
	ctx.r28.s64 = ctx.r11.s64 + 36;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823908c4
	if (ctx.cr6.eq) goto loc_823908C4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x823908cc
	goto loc_823908CC;
loc_823908C4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823908C8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_823908CC:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823908e8
	if (!ctx.cr6.eq) goto loc_823908E8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823908ec
	if (ctx.cr6.eq) goto loc_823908EC;
loc_823908E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823908EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239095c
	if (!ctx.cr6.eq) goto loc_8239095C;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239093c
	if (ctx.cr6.eq) goto loc_8239093C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203718
	ctx.lr = 0x82390918;
	sub_82203718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239093c
	if (ctx.cr6.eq) goto loc_8239093C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82463358
	ctx.lr = 0x82390930;
	sub_82463358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390950
	if (!ctx.cr6.eq) goto loc_82390950;
loc_8239093C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823908c8
	if (ctx.cr6.eq) goto loc_823908C8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x823908cc
	goto loc_823908CC;
loc_82390950:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8239095C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82390968"))) PPC_WEAK_FUNC(sub_82390968);
PPC_FUNC_IMPL(__imp__sub_82390968) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823909a0
	if (ctx.cr6.eq) goto loc_823909A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239099c
	if (ctx.cr6.eq) goto loc_8239099C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x823909a4
	goto loc_823909A4;
loc_8239099C:
	// bl 0x821940c8
	ctx.lr = 0x823909A0;
	sub_821940C8(ctx, base);
loc_823909A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823909A4:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_823909C8"))) PPC_WEAK_FUNC(sub_823909C8);
PPC_FUNC_IMPL(__imp__sub_823909C8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-31080
	ctx.r9.s64 = ctx.r11.s64 + -31080;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stvx128 v1,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// beq cr6,0x82390a34
	if (ctx.cr6.eq) goto loc_82390A34;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82390A18:
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
	// bne 0x82390a18
	if (!ctx.cr0.eq) goto loc_82390A18;
loc_82390A34:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82287710
	ctx.lr = 0x82390A40;
	sub_82287710(ctx, base);
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390A84"))) PPC_WEAK_FUNC(sub_82390A84);
PPC_FUNC_IMPL(__imp__sub_82390A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390A88"))) PPC_WEAK_FUNC(sub_82390A88);
PPC_FUNC_IMPL(__imp__sub_82390A88) {
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
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x821c6868
	ctx.lr = 0x82390AAC;
	sub_821C6868(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x821de318
	ctx.lr = 0x82390AB4;
	sub_821DE318(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82390ad8
	if (ctx.cr6.eq) goto loc_82390AD8;
	// bl 0x8221be68
	ctx.lr = 0x82390AD4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82390AD8:
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

__attribute__((alias("__imp__sub_82390AF0"))) PPC_WEAK_FUNC(sub_82390AF0);
PPC_FUNC_IMPL(__imp__sub_82390AF0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-31088
	ctx.r9.s64 = ctx.r11.s64 + -31088;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82390B44:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82390b44
	if (!ctx.cr0.lt) goto loc_82390B44;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stb r30,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r30.u8);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// bl 0x8235e278
	ctx.lr = 0x82390B7C;
	sub_8235E278(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_82390B90:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82390b90
	if (!ctx.cr0.eq) goto loc_82390B90;
	// lbz r6,145(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 145);
	// li r7,204
	ctx.r7.s64 = 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// clrlwi r5,r6,27
	ctx.r5.u64 = ctx.r6.u32 & 0x1F;
	// sth r30,136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 136, ctx.r30.u16);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// rlwinm r5,r5,0,30,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r7,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r7.u8);
	// stb r5,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r5.u8);
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

__attribute__((alias("__imp__sub_82390BEC"))) PPC_WEAK_FUNC(sub_82390BEC);
PPC_FUNC_IMPL(__imp__sub_82390BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390BF0"))) PPC_WEAK_FUNC(sub_82390BF0);
PPC_FUNC_IMPL(__imp__sub_82390BF0) {
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
	// bl 0x82390c40
	ctx.lr = 0x82390C10;
	sub_82390C40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390c28
	if (ctx.cr6.eq) goto loc_82390C28;
	// bl 0x8221be68
	ctx.lr = 0x82390C24;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82390C28:
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

__attribute__((alias("__imp__sub_82390C40"))) PPC_WEAK_FUNC(sub_82390C40);
PPC_FUNC_IMPL(__imp__sub_82390C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82390C48;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r30,r11,30304
	ctx.r30.s64 = ctx.r11.s64 + 30304;
	// addi r8,r9,-31088
	ctx.r8.s64 = ctx.r9.s64 + -31088;
	// lbz r10,144(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 144);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// clrlwi r7,r10,25
	ctx.r7.u64 = ctx.r10.u32 & 0x7F;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stb r7,144(r26)
	PPC_STORE_U8(ctx.r26.u32 + 144, ctx.r7.u8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82390C84:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82390C88:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82390c98
	if (ctx.cr6.eq) goto loc_82390C98;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82390c9c
	if (ctx.cr6.eq) goto loc_82390C9C;
loc_82390C98:
	// twi 31,r0,22
loc_82390C9C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82390d34
	if (ctx.cr6.eq) goto loc_82390D34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82390cb4
	if (!ctx.cr6.eq) goto loc_82390CB4;
	// twi 31,r0,22
loc_82390CB4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82390cc4
	if (!ctx.cr6.eq) goto loc_82390CC4;
	// twi 31,r0,22
loc_82390CC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390cec
	if (ctx.cr6.eq) goto loc_82390CEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82390ce8
	if (ctx.cr6.eq) goto loc_82390CE8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82390cf0
	goto loc_82390CF0;
loc_82390CE8:
	// bl 0x821940c8
	ctx.lr = 0x82390CEC;
	sub_821940C8(ctx, base);
loc_82390CEC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82390CF0:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82390d1c
	if (!ctx.cr6.eq) goto loc_82390D1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823945b8
	ctx.lr = 0x82390D08;
	sub_823945B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82390c88
	goto loc_82390C88;
loc_82390D1C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82390d2c
	if (!ctx.cr6.eq) goto loc_82390D2C;
	// twi 31,r0,22
loc_82390D2C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82390c84
	goto loc_82390C84;
loc_82390D34:
	// lwz r29,72(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82390dc4
	if (ctx.cr6.eq) goto loc_82390DC4;
	// addi r28,r26,36
	ctx.r28.s64 = ctx.r26.s64 + 36;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82390D4C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82390D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,254
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 254, ctx.xer);
	// blt cr6,0x82390d78
	if (ctx.cr6.lt) goto loc_82390D78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ee4c0
	ctx.lr = 0x82390D78;
	sub_824EE4C0(ctx, base);
loc_82390D78:
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// slw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r7,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390db0
	if (ctx.cr6.eq) goto loc_82390DB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82390DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82390DB0:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82390d4c
	if (!ctx.cr6.eq) goto loc_82390D4C;
loc_82390DC4:
	// lwz r9,72(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r30,r26,68
	ctx.r30.s64 = ctx.r26.s64 + 68;
	// lwz r10,76(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82390e1c
	if (ctx.cr6.eq) goto loc_82390E1C;
	// subf r8,r10,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r10.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82390e18
	if (ctx.cr6.eq) goto loc_82390E18;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82390DF8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82390df8
	if (!ctx.cr6.eq) goto loc_82390DF8;
loc_82390E18:
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
loc_82390E1C:
	// lwz r3,140(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390e30
	if (ctx.cr6.eq) goto loc_82390E30;
	// bl 0x8221be68
	ctx.lr = 0x82390E2C;
	sub_8221BE68(ctx, base);
	// stw r25,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r25.u32);
loc_82390E30:
	// addi r3,r26,128
	ctx.r3.s64 = ctx.r26.s64 + 128;
	// bl 0x821c67d8
	ctx.lr = 0x82390E38;
	sub_821C67D8(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_82390E40:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82390e40
	if (!ctx.cr0.eq) goto loc_82390E40;
	// stw r25,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r25.u32);
	// addi r3,r26,108
	ctx.r3.s64 = ctx.r26.s64 + 108;
	// bl 0x82a0f5c0
	ctx.lr = 0x82390E68;
	sub_82A0F5C0(ctx, base);
	// lwz r3,112(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// bl 0x8221be68
	ctx.lr = 0x82390E70;
	sub_8221BE68(ctx, base);
	// stw r25,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r25.u32);
	// addi r31,r26,88
	ctx.r31.s64 = ctx.r26.s64 + 88;
	// lwz r3,92(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390e88
	if (ctx.cr6.eq) goto loc_82390E88;
	// bl 0x8221be68
	ctx.lr = 0x82390E88;
	sub_8221BE68(ctx, base);
loc_82390E88:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390ea4
	if (ctx.cr6.eq) goto loc_82390EA4;
	// bl 0x8221be68
	ctx.lr = 0x82390EA4;
	sub_8221BE68(ctx, base);
loc_82390EA4:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// bl 0x8229a410
	ctx.lr = 0x82390EB8;
	sub_8229A410(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82390EC0"))) PPC_WEAK_FUNC(sub_82390EC0);
PPC_FUNC_IMPL(__imp__sub_82390EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82390EC8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,30304
	ctx.r29.s64 = ctx.r11.s64 + 30304;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82390EE4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82390EE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82390ef8
	if (ctx.cr6.eq) goto loc_82390EF8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82390efc
	if (ctx.cr6.eq) goto loc_82390EFC;
loc_82390EF8:
	// twi 31,r0,22
loc_82390EFC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82390fb4
	if (ctx.cr6.eq) goto loc_82390FB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82390f14
	if (!ctx.cr6.eq) goto loc_82390F14;
	// twi 31,r0,22
loc_82390F14:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82390f24
	if (!ctx.cr6.eq) goto loc_82390F24;
	// twi 31,r0,22
loc_82390F24:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390f60
	if (ctx.cr6.eq) goto loc_82390F60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82390f94
	if (ctx.cr6.eq) goto loc_82390F94;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390f60
	if (ctx.cr6.eq) goto loc_82390F60;
	// lbz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390f64
	if (!ctx.cr6.eq) goto loc_82390F64;
loc_82390F60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82390F64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390f9c
	if (!ctx.cr6.eq) goto loc_82390F9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823945b8
	ctx.lr = 0x82390F80;
	sub_823945B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82390ee8
	goto loc_82390EE8;
loc_82390F94:
	// bl 0x821940c8
	ctx.lr = 0x82390F98;
	sub_821940C8(ctx, base);
	// b 0x82390f60
	goto loc_82390F60;
loc_82390F9C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82390fac
	if (!ctx.cr6.eq) goto loc_82390FAC;
	// twi 31,r0,22
loc_82390FAC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82390ee4
	goto loc_82390EE4;
loc_82390FB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82390FBC"))) PPC_WEAK_FUNC(sub_82390FBC);
PPC_FUNC_IMPL(__imp__sub_82390FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390FC0"))) PPC_WEAK_FUNC(sub_82390FC0);
PPC_FUNC_IMPL(__imp__sub_82390FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8239100c
	if (!ctx.cr6.eq) goto loc_8239100C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82391010
	goto loc_82391010;
loc_8239100C:
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_82391010:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82391030
	ctx.lr = 0x8239101C;
	sub_82391030(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239102C"))) PPC_WEAK_FUNC(sub_8239102C);
PPC_FUNC_IMPL(__imp__sub_8239102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391030"))) PPC_WEAK_FUNC(sub_82391030);
PPC_FUNC_IMPL(__imp__sub_82391030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82391038;
	sub_82CA2BDC(ctx, base);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8221f388
	ctx.lr = 0x8239106C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82391184
	if (ctx.cr6.eq) goto loc_82391184;
	// bl 0x82390af0
	ctx.lr = 0x82391078;
	sub_82390AF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82391184
	if (ctx.cr6.eq) goto loc_82391184;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82265160
	ctx.lr = 0x82391090;
	sub_82265160(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r3,26964(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26964);
	// bl 0x8235f240
	ctx.lr = 0x823910B0;
	sub_8235F240(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393498
	ctx.lr = 0x823910D0;
	sub_82393498(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,140(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x823910EC;
	sub_821B25A8(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x8231a470
	ctx.lr = 0x82391108;
	sub_8231A470(ctx, base);
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82391124
	if (ctx.cr6.eq) goto loc_82391124;
	// lbz r11,54(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82391128
	if (!ctx.cr6.eq) goto loc_82391128;
loc_82391124:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82391128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391144
	if (ctx.cr6.eq) goto loc_82391144;
	// lbz r11,239(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82391144
	if (!ctx.cr6.eq) goto loc_82391144;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82391144:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391170
	if (ctx.cr6.eq) goto loc_82391170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823915d8
	ctx.lr = 0x82391158;
	sub_823915D8(ctx, base);
	// lwz r11,26964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26964);
	// lbz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391170
	if (ctx.cr6.eq) goto loc_82391170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392f70
	ctx.lr = 0x82391170;
	sub_82392F70(ctx, base);
loc_82391170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82391184:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82391198"))) PPC_WEAK_FUNC(sub_82391198);
PPC_FUNC_IMPL(__imp__sub_82391198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823911A0;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,27600(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27600);
	// bne cr6,0x823911d8
	if (!ctx.cr6.eq) goto loc_823911D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// b 0x823911dc
	goto loc_823911DC;
loc_823911D8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823911DC:
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x823911E8;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cdc48
	ctx.lr = 0x823911F8;
	sub_822CDC48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82391280
	if (ctx.cr6.eq) goto loc_82391280;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82391260
	if (!ctx.cr6.eq) goto loc_82391260;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82391030
	ctx.lr = 0x82391250;
	sub_82391030(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82391260:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82391030
	ctx.lr = 0x82391270;
	sub_82391030(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82391280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82391294"))) PPC_WEAK_FUNC(sub_82391294);
PPC_FUNC_IMPL(__imp__sub_82391294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391298"))) PPC_WEAK_FUNC(sub_82391298);
PPC_FUNC_IMPL(__imp__sub_82391298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823912A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,27600(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27600);
	// bne cr6,0x823912d0
	if (!ctx.cr6.eq) goto loc_823912D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// b 0x823912d4
	goto loc_823912D4;
loc_823912D0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823912D4:
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x823912E0;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cdc48
	ctx.lr = 0x823912F0;
	sub_822CDC48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823913d8
	if (ctx.cr6.eq) goto loc_823913D8;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x8221f388
	ctx.lr = 0x82391304;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823913c8
	if (ctx.cr6.eq) goto loc_823913C8;
	// bl 0x82390af0
	ctx.lr = 0x82391310;
	sub_82390AF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823913bc
	if (ctx.cr6.eq) goto loc_823913BC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82265160
	ctx.lr = 0x82391358;
	sub_82265160(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r3,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r3.u64);
	// lwz r3,26964(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26964);
	// bl 0x8235f240
	ctx.lr = 0x82391370;
	sub_8235F240(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393498
	ctx.lr = 0x82391390;
	sub_82393498(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392348
	ctx.lr = 0x8239139C;
	sub_82392348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823915d8
	ctx.lr = 0x823913A4;
	sub_823915D8(ctx, base);
	// lwz r11,26964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26964);
	// lbz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823913bc
	if (ctx.cr6.eq) goto loc_823913BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392f70
	ctx.lr = 0x823913BC;
	sub_82392F70(ctx, base);
loc_823913BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_823913C8:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_823913D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_823913E4"))) PPC_WEAK_FUNC(sub_823913E4);
PPC_FUNC_IMPL(__imp__sub_823913E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823913E8"))) PPC_WEAK_FUNC(sub_823913E8);
PPC_FUNC_IMPL(__imp__sub_823913E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823913F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8221f388
	ctx.lr = 0x82391408;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823915cc
	if (ctx.cr6.eq) goto loc_823915CC;
	// bl 0x82390af0
	ctx.lr = 0x82391414;
	sub_82390AF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823915cc
	if (ctx.cr6.eq) goto loc_823915CC;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82265160
	ctx.lr = 0x82391430;
	sub_82265160(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,26964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26964);
	// bl 0x8235f240
	ctx.lr = 0x82391444;
	sub_8235F240(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393498
	ctx.lr = 0x82391464;
	sub_82393498(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82391564
	if (ctx.cr6.eq) goto loc_82391564;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823914a4
	if (ctx.cr6.eq) goto loc_823914A4;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82391568
	goto loc_82391568;
loc_823914A4:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82391514
	if (!ctx.cr0.gt) goto loc_82391514;
loc_823914C4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823914e4
	if (ctx.cr6.lt) goto loc_823914E4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823914E4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82391500
	if (ctx.cr6.eq) goto loc_82391500;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82391508
	goto loc_82391508;
loc_82391500:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82391508:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823914c4
	if (ctx.cr6.gt) goto loc_823914C4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82391514:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82391554
	if (ctx.cr6.eq) goto loc_82391554;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82391530
	if (ctx.cr6.gt) goto loc_82391530;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82391530:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82391554
	if (!ctx.cr6.eq) goto loc_82391554;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82391568
	goto loc_82391568;
loc_82391554:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82391568
	goto loc_82391568;
loc_82391564:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82391568:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82391590
	if (ctx.cr6.eq) goto loc_82391590;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239158C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lvx128 v1,r0,r3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82391590:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x8231a470
	ctx.lr = 0x823915C0;
	sub_8231A470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_823915CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_823915D8"))) PPC_WEAK_FUNC(sub_823915D8);
PPC_FUNC_IMPL(__imp__sub_823915D8) {
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
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// lwz r31,72(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// stb r9,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r9.u8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8239163c
	if (ctx.cr6.eq) goto loc_8239163C;
loc_8239160C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239162c
	if (!ctx.cr6.eq) goto loc_8239162C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239162C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239162C:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8239160c
	if (!ctx.cr6.eq) goto loc_8239160C;
loc_8239163C:
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// ori r9,r11,144
	ctx.r9.u64 = ctx.r11.u64 | 144;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r9,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r9.u8);
	// beq cr6,0x823916bc
	if (ctx.cr6.eq) goto loc_823916BC;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82391684
	if (!ctx.cr6.eq) goto loc_82391684;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82391684:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82391698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x823916bc
	if (ctx.cr6.eq) goto loc_823916BC;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x8253bdb0
	ctx.lr = 0x823916BC;
	sub_8253BDB0(ctx, base);
loc_823916BC:
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

__attribute__((alias("__imp__sub_823916D4"))) PPC_WEAK_FUNC(sub_823916D4);
PPC_FUNC_IMPL(__imp__sub_823916D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823916D8"))) PPC_WEAK_FUNC(sub_823916D8);
PPC_FUNC_IMPL(__imp__sub_823916D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,145(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239182c
	if (!ctx.cr6.eq) goto loc_8239182C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823917e0
	if (ctx.cr6.eq) goto loc_823917E0;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391728
	if (ctx.cr6.eq) goto loc_82391728;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823917e4
	goto loc_823917E4;
loc_82391728:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82391790
	if (!ctx.cr0.gt) goto loc_82391790;
loc_82391740:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82391760
	if (ctx.cr6.lt) goto loc_82391760;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82391760:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8239177c
	if (ctx.cr6.eq) goto loc_8239177C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82391784
	goto loc_82391784;
loc_8239177C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82391784:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82391740
	if (ctx.cr6.gt) goto loc_82391740;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
loc_82391790:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823917d0
	if (ctx.cr6.eq) goto loc_823917D0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x823917ac
	if (ctx.cr6.gt) goto loc_823917AC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_823917AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823917d0
	if (!ctx.cr6.eq) goto loc_823917D0;
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823917e4
	goto loc_823917E4;
loc_823917D0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823917e4
	goto loc_823917E4;
loc_823917E0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_823917E4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82391800
	if (ctx.cr6.eq) goto loc_82391800;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82391800
	if (!ctx.cr6.eq) goto loc_82391800;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82391800:
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239182c
	if (ctx.cr6.eq) goto loc_8239182C;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239182c
	if (ctx.cr6.eq) goto loc_8239182C;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8239182C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391834"))) PPC_WEAK_FUNC(sub_82391834);
PPC_FUNC_IMPL(__imp__sub_82391834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391838"))) PPC_WEAK_FUNC(sub_82391838);
PPC_FUNC_IMPL(__imp__sub_82391838) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823919ec
	if (ctx.cr6.eq) goto loc_823919EC;
	// rlwimi r11,r10,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-31048
	ctx.r8.s64 = ctx.r10.s64 + -31048;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82202e90
	ctx.lr = 0x82391888;
	sub_82202E90(ctx, base);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// rlwinm r4,r5,5,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0x1;
	// addi r6,r7,-1124
	ctx.r6.s64 = ctx.r7.s64 + -1124;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82391990
	if (ctx.cr6.eq) goto loc_82391990;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823918d0
	if (ctx.cr6.eq) goto loc_823918D0;
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82391994
	goto loc_82391994;
loc_823918D0:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82391940
	if (!ctx.cr0.gt) goto loc_82391940;
loc_823918F0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 91, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82391910
	if (ctx.cr6.lt) goto loc_82391910;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82391910:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8239192c
	if (ctx.cr6.eq) goto loc_8239192C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82391934
	goto loc_82391934;
loc_8239192C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82391934:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823918f0
	if (ctx.cr6.gt) goto loc_823918F0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82391940:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82391980
	if (ctx.cr6.eq) goto loc_82391980;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8239195c
	if (ctx.cr6.gt) goto loc_8239195C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239195C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82391980
	if (!ctx.cr6.eq) goto loc_82391980;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82391994
	goto loc_82391994;
loc_82391980:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82391994
	goto loc_82391994;
loc_82391990:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82391994:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823919ec
	if (ctx.cr6.eq) goto loc_823919EC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82214c28
	ctx.lr = 0x823919A8;
	sub_82214C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823919ec
	if (ctx.cr6.eq) goto loc_823919EC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,16540
	ctx.r9.s64 = ctx.r10.s64 + 16540;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,140(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x823919DC;
	sub_821B25A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395af0
	ctx.lr = 0x823919EC;
	sub_82395AF0(ctx, base);
loc_823919EC:
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

__attribute__((alias("__imp__sub_82391A04"))) PPC_WEAK_FUNC(sub_82391A04);
PPC_FUNC_IMPL(__imp__sub_82391A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391A08"))) PPC_WEAK_FUNC(sub_82391A08);
PPC_FUNC_IMPL(__imp__sub_82391A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82391A10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-31524
	ctx.r4.s64 = ctx.r11.s64 + -31524;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82391A30;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16ec0
	ctx.lr = 0x82391A40;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391A48;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-31516
	ctx.r4.s64 = ctx.r10.s64 + -31516;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82391A5C;
	sub_8222CF18(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8244dae0
	ctx.lr = 0x82391A6C;
	sub_8244DAE0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391A74;
	sub_82214F08(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-31504
	ctx.r4.s64 = ctx.r9.s64 + -31504;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x8222cf18
	ctx.lr = 0x82391A90;
	sub_8222CF18(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,63
	ctx.r29.s64 = ctx.r11.s64 + 63;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391aac
	if (ctx.cr6.eq) goto loc_82391AAC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82391AAC:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395be0
	ctx.lr = 0x82391AB8;
	sub_82395BE0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391AC0;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x821d9ed8
	ctx.lr = 0x82391ACC;
	sub_821D9ED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25388
	ctx.r4.s64 = ctx.r10.s64 + 25388;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x8222cf18
	ctx.lr = 0x82391AF4;
	sub_8222CF18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391b08
	if (ctx.cr6.eq) goto loc_82391B08;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82391B08:
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395be0
	ctx.lr = 0x82391B14;
	sub_82395BE0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391B1C;
	sub_82214F08(ctx, base);
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r4,r11,-31492
	ctx.r4.s64 = ctx.r11.s64 + -31492;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82391B3C;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16e20
	ctx.lr = 0x82391B4C;
	sub_82A16E20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391B54;
	sub_82214F08(ctx, base);
	// lbz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwimi r6,r11,3,28,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x8) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF7);
	// addi r4,r8,-31472
	ctx.r4.s64 = ctx.r8.s64 + -31472;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// bl 0x8222cf18
	ctx.lr = 0x82391B84;
	sub_8222CF18(ctx, base);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16e20
	ctx.lr = 0x82391B94;
	sub_82A16E20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391B9C;
	sub_82214F08(ctx, base);
	// lbz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwimi r6,r11,2,29,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x4) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFFB);
	// addi r4,r8,-31448
	ctx.r4.s64 = ctx.r8.s64 + -31448;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// bl 0x8222cf18
	ctx.lr = 0x82391BCC;
	sub_8222CF18(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16e20
	ctx.lr = 0x82391BDC;
	sub_82A16E20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391BE4;
	sub_82214F08(ctx, base);
	// lbz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwimi r6,r11,1,30,30
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFFD);
	// addi r4,r8,-31432
	ctx.r4.s64 = ctx.r8.s64 + -31432;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// bl 0x8222cf18
	ctx.lr = 0x82391C14;
	sub_8222CF18(ctx, base);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16e20
	ctx.lr = 0x82391C24;
	sub_82A16E20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391C2C;
	sub_82214F08(ctx, base);
	// lbz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lbz r11,145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 145);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-31416
	ctx.r4.s64 = ctx.r8.s64 + -31416;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwimi r7,r6,0,31,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// stb r7,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r7.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// bl 0x8222cf18
	ctx.lr = 0x82391C5C;
	sub_8222CF18(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16e20
	ctx.lr = 0x82391C6C;
	sub_82A16E20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82391C74;
	sub_82214F08(ctx, base);
	// lbz r8,145(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 145);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwimi r8,r7,7,17,24
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 7) & 0x7F80) | (ctx.r8.u64 & 0xFFFFFFFFFFFF807F);
	// stb r8,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82391C8C"))) PPC_WEAK_FUNC(sub_82391C8C);
PPC_FUNC_IMPL(__imp__sub_82391C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391C90"))) PPC_WEAK_FUNC(sub_82391C90);
PPC_FUNC_IMPL(__imp__sub_82391C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82391C98;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// bl 0x82391a08
	ctx.lr = 0x82391CAC;
	sub_82391A08(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r23,-31927
	ctx.r23.s64 = -2092367872;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// addi r27,r11,28344
	ctx.r27.s64 = ctx.r11.s64 + 28344;
	// addi r24,r10,-31528
	ctx.r24.s64 = ctx.r10.s64 + -31528;
	// bne cr6,0x82391e80
	if (!ctx.cr6.eq) goto loc_82391E80;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r28,r29,108
	ctx.r28.s64 = ctx.r29.s64 + 108;
	// addi r22,r10,-31380
	ctx.r22.s64 = ctx.r10.s64 + -31380;
	// addi r25,r9,-31392
	ctx.r25.s64 = ctx.r9.s64 + -31392;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r21,r11,63
	ctx.r21.s64 = ctx.r11.s64 + 63;
loc_82391CF0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r28,r28
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82391d00
	if (ctx.cr6.eq) goto loc_82391D00;
	// twi 31,r0,22
loc_82391D00:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82391dc0
	if (ctx.cr6.eq) goto loc_82391DC0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82391D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82391d30
	if (!ctx.cr6.eq) goto loc_82391D30;
	// twi 31,r0,22
loc_82391D30:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8222cf18
	ctx.lr = 0x82391D48;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391d5c
	if (ctx.cr6.eq) goto loc_82391D5C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82391D5C:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395be0
	ctx.lr = 0x82391D68;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x82391D70;
	sub_821C67D8(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82391D74:
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
	// bne 0x82391d74
	if (!ctx.cr0.eq) goto loc_82391D74;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82391DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82391db8
	if (!ctx.cr6.eq) goto loc_82391DB8;
	// twi 31,r0,22
loc_82391DB8:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82391cf0
	goto loc_82391CF0;
loc_82391DC0:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,-31360
	ctx.r4.s64 = ctx.r10.s64 + -31360;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82391DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r30,72(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82391e6c
	if (ctx.cr6.eq) goto loc_82391E6C;
loc_82391DE4:
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82391E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d9e18
	ctx.lr = 0x82391E1C;
	sub_821D9E18(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c67d8
	ctx.lr = 0x82391E28;
	sub_821C67D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82391E2C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82391e2c
	if (!ctx.cr0.eq) goto loc_82391E2C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82395be0
	ctx.lr = 0x82391E5C;
	sub_82395BE0(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82391de4
	if (!ctx.cr6.eq) goto loc_82391DE4;
loc_82391E6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82391E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82391E80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-31352
	ctx.r4.s64 = ctx.r10.s64 + -31352;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82391E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lwz r4,124(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r6,-28224
	ctx.r3.s64 = ctx.r6.s64 + -28224;
	// lfs f0,-27456(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82391f34
	if (ctx.cr6.eq) goto loc_82391F34;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82391EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82391F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r4,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r3,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
loc_82391F34:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-31340
	ctx.r4.s64 = ctx.r11.s64 + -31340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82391F48;
	sub_8222CF18(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a17080
	ctx.lr = 0x82391F58;
	sub_82A17080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x82391F60;
	sub_821C67D8(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82391F64:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82391f64
	if (!ctx.cr0.eq) goto loc_82391F64;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-31328
	ctx.r4.s64 = ctx.r7.s64 + -31328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82391F94;
	sub_8222CF18(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a17140
	ctx.lr = 0x82391FA4;
	sub_82A17140(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x82391FAC;
	sub_821C67D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82391FB0:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82391fb0
	if (!ctx.cr0.eq) goto loc_82391FB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82391FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-31316
	ctx.r4.s64 = ctx.r9.s64 + -31316;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82391FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r30,72(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823920f8
	if (ctx.cr6.eq) goto loc_823920F8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-31296
	ctx.r28.s64 = ctx.r11.s64 + -31296;
loc_82392014:
	// lwz r11,26912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26912);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r22,4(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82392044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821d9e18
	ctx.lr = 0x82392050;
	sub_821D9E18(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x8239205C;
	sub_821C67D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82392060:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82392060
	if (!ctx.cr0.eq) goto loc_82392060;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82392098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823920B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823920D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823920E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82392014
	if (!ctx.cr6.eq) goto loc_82392014;
loc_823920F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239210C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82392114"))) PPC_WEAK_FUNC(sub_82392114);
PPC_FUNC_IMPL(__imp__sub_82392114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392118"))) PPC_WEAK_FUNC(sub_82392118);
PPC_FUNC_IMPL(__imp__sub_82392118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82392120;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// bl 0x82391a08
	ctx.lr = 0x82392134;
	sub_82391A08(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,26964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26964);
	// bl 0x8235f240
	ctx.lr = 0x82392144;
	sub_8235F240(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r22,r11,-31392
	ctx.r22.s64 = ctx.r11.s64 + -31392;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82392164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823922a8
	if (ctx.cr6.eq) goto loc_823922A8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r26,r23,108
	ctx.r26.s64 = ctx.r23.s64 + 108;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r20,-31927
	ctx.r20.s64 = -2092367872;
	// addi r24,r11,28344
	ctx.r24.s64 = ctx.r11.s64 + 28344;
	// addi r19,r10,63
	ctx.r19.s64 = ctx.r10.s64 + 63;
	// addi r21,r9,-31380
	ctx.r21.s64 = ctx.r9.s64 + -31380;
loc_82392194:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x823921A8;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823921bc
	if (ctx.cr6.eq) goto loc_823921BC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823921BC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395be0
	ctx.lr = 0x823921C8;
	sub_82395BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	ctx.lr = 0x823921D0;
	sub_821C67D8(ctx, base);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_823921D4:
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
	// bne 0x823921d4
	if (!ctx.cr0.eq) goto loc_823921D4;
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8221f3f0
	ctx.lr = 0x82392204;
	sub_8221F3F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82392234
	if (!ctx.cr6.eq) goto loc_82392234;
	// lwz r11,28060(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239222c
	if (ctx.cr6.eq) goto loc_8239222C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239222C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239222C:
	// bl 0x82cbbb58
	ctx.lr = 0x82392230;
	sub_82CBBB58(ctx, base);
	// b 0x82392238
	goto loc_82392238;
loc_82392234:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82392238:
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82392248
	if (ctx.cr6.eq) goto loc_82392248;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_82392248:
	// addic. r11,r31,8
	ctx.xer.ca = ctx.r31.u32 > 4294967287;
	ctx.r11.s64 = ctx.r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82392258
	if (ctx.cr0.eq) goto loc_82392258;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82392258:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825bba48
	ctx.lr = 0x82392264;
	sub_825BBA48(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82392284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239229C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82392194
	if (!ctx.cr6.eq) goto loc_82392194;
loc_823922A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,28(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82393498
	ctx.lr = 0x823922C8;
	sub_82393498(ctx, base);
	// lwz r4,124(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 124);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8239233c
	if (ctx.cr6.eq) goto loc_8239233C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,140(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823922F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,124(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 124);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82392310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,28(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// bl 0x821b25a8
	ctx.lr = 0x82392320;
	sub_821B25A8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r23,128
	ctx.r5.s64 = ctx.r23.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8231a470
	ctx.lr = 0x8239233C;
	sub_8231A470(ctx, base);
loc_8239233C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82392344"))) PPC_WEAK_FUNC(sub_82392344);
PPC_FUNC_IMPL(__imp__sub_82392344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392348"))) PPC_WEAK_FUNC(sub_82392348);
PPC_FUNC_IMPL(__imp__sub_82392348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82392350;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823923c8
	if (!ctx.cr0.gt) goto loc_823923C8;
loc_82392378:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82392398
	if (ctx.cr6.lt) goto loc_82392398;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82392398:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823923b4
	if (ctx.cr6.eq) goto loc_823923B4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823923bc
	goto loc_823923BC;
loc_823923B4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823923BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82392378
	if (ctx.cr6.gt) goto loc_82392378;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_823923C8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82392400
	if (ctx.cr6.eq) goto loc_82392400;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x823923e4
	if (ctx.cr6.lt) goto loc_823923E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823923E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392400
	if (!ctx.cr6.eq) goto loc_82392400;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82392404
	goto loc_82392404;
loc_82392400:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82392404:
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82392530
	if (ctx.cr6.eq) goto loc_82392530;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392530
	if (!ctx.cr6.eq) goto loc_82392530;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239243C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82394688
	ctx.lr = 0x82392448;
	sub_82394688(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r7,r8,5732
	ctx.r7.s64 = ctx.r8.s64 + 5732;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x822149c8
	ctx.lr = 0x82392464;
	sub_822149C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cf7c8
	ctx.lr = 0x82392470;
	sub_821CF7C8(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r29,r6,5732
	ctx.r29.s64 = ctx.r6.s64 + 5732;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x821940c8
	ctx.lr = 0x82392488;
	sub_821940C8(ctx, base);
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r4,30304
	ctx.r11.s64 = ctx.r4.s64 + 30304;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823949a8
	ctx.lr = 0x823924AC;
	sub_823949A8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821940c8
	ctx.lr = 0x823924B8;
	sub_821940C8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823924CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26912);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r5,88(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823924FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9e18
	ctx.lr = 0x82392508;
	sub_821D9E18(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82392514;
	sub_82214F08(ctx, base);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825bb9d0
	ctx.lr = 0x82392530;
	sub_825BB9D0(ctx, base);
loc_82392530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82392538"))) PPC_WEAK_FUNC(sub_82392538);
PPC_FUNC_IMPL(__imp__sub_82392538) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82644a10
	ctx.lr = 0x82392570;
	sub_82644A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392598
	ctx.lr = 0x82392580;
	sub_82392598(ctx, base);
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

__attribute__((alias("__imp__sub_82392598"))) PPC_WEAK_FUNC(sub_82392598);
PPC_FUNC_IMPL(__imp__sub_82392598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x823925A0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 144);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239266c
	if (ctx.cr6.eq) goto loc_8239266C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82644968
	ctx.lr = 0x823925DC;
	sub_82644968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239266c
	if (ctx.cr6.eq) goto loc_8239266C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823925F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239266c
	if (ctx.cr6.eq) goto loc_8239266C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82392610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r29,36
	ctx.r25.s64 = ctx.r29.s64 + 36;
	// cmplwi cr6,r31,254
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 254, ctx.xer);
	// blt cr6,0x82392628
	if (ctx.cr6.lt) goto loc_82392628;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824ee4c0
	ctx.lr = 0x82392628;
	sub_824EE4C0(ctx, base);
loc_82392628:
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// li r26,1
	ctx.r26.s64 = 1;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// slw r9,r26,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r11,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82392678
	if (ctx.cr6.eq) goto loc_82392678;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392678
	if (!ctx.cr6.eq) goto loc_82392678;
loc_82392654:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239266C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239266C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82392678:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239268C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82392698
	if (!ctx.cr6.eq) goto loc_82392698;
	// stw r28,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r28.u32);
loc_82392698:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823926AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823926c8
	if (ctx.cr6.eq) goto loc_823926C8;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392654
	if (!ctx.cr6.eq) goto loc_82392654;
	// stw r28,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r28.u32);
loc_823926C8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x823928e8
	if (ctx.cr6.eq) goto loc_823928E8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823926F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8239275c
	if (!ctx.cr0.gt) goto loc_8239275C;
loc_8239270C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// blt cr6,0x8239272c
	if (ctx.cr6.lt) goto loc_8239272C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8239272C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82392748
	if (ctx.cr6.eq) goto loc_82392748;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82392750
	goto loc_82392750;
loc_82392748:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82392750:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8239270c
	if (ctx.cr6.gt) goto loc_8239270C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239275C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82392794
	if (ctx.cr6.eq) goto loc_82392794;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82392778
	if (ctx.cr6.lt) goto loc_82392778;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82392778:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392794
	if (!ctx.cr6.eq) goto loc_82392794;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82392798
	goto loc_82392798;
loc_82392794:
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82392798:
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823928e8
	if (ctx.cr6.eq) goto loc_823928E8;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x823927e4
	if (ctx.cr6.eq) goto loc_823927E4;
loc_823927CC:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823927e4
	if (ctx.cr6.eq) goto loc_823927E4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823927cc
	if (!ctx.cr6.eq) goto loc_823927CC;
loc_823927E4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8239280c
	if (ctx.cr6.eq) goto loc_8239280C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r11,r29,88
	ctx.r11.s64 = ctx.r29.s64 + 88;
	// bl 0x82c49bc8
	ctx.lr = 0x82392800;
	sub_82C49BC8(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
loc_8239280C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r31,r11,30304
	ctx.r31.s64 = ctx.r11.s64 + 30304;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82392824:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82392828:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82392838
	if (ctx.cr6.eq) goto loc_82392838;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8239283c
	if (ctx.cr6.eq) goto loc_8239283C;
loc_82392838:
	// twi 31,r0,22
loc_8239283C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823928ac
	if (ctx.cr6.eq) goto loc_823928AC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82392850
	if (!ctx.cr6.eq) goto loc_82392850;
	// twi 31,r0,22
loc_82392850:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82392860
	if (!ctx.cr6.eq) goto loc_82392860;
	// twi 31,r0,22
loc_82392860:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82392898
	if (!ctx.cr6.eq) goto loc_82392898;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823945b8
	ctx.lr = 0x82392880;
	sub_823945B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82392828
	goto loc_82392828;
loc_82392898:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823928a4
	if (!ctx.cr6.eq) goto loc_823928A4;
	// twi 31,r0,22
loc_823928A4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82392824
	goto loc_82392824;
loc_823928AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823928C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823928e0
	if (ctx.cr6.eq) goto loc_823928E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823928E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823928E0:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_823928E8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823929cc
	if (!ctx.cr6.eq) goto loc_823929CC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r29,68
	ctx.r31.s64 = ctx.r29.s64 + 68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239290C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82392928
	if (!ctx.cr6.eq) goto loc_82392928;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x82392934
	goto loc_82392934;
loc_82392928:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_82392934:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82392964
	if (!ctx.cr6.lt) goto loc_82392964;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392958
	if (ctx.cr6.eq) goto loc_82392958;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82392958:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82392980
	goto loc_82392980;
loc_82392964:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a68bb8
	ctx.lr = 0x82392980;
	sub_82A68BB8(ctx, base);
loc_82392980:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stb r26,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r26.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823929c4
	if (ctx.cr6.eq) goto loc_823929C4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lbz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8241cfb0
	ctx.lr = 0x823929C0;
	sub_8241CFB0(ctx, base);
	// stb r27,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r27.u8);
loc_823929C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82392a88
	ctx.lr = 0x823929CC;
	sub_82392A88(ctx, base);
loc_823929CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823929E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,254
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 254, ctx.xer);
	// blt cr6,0x823929f4
	if (ctx.cr6.lt) goto loc_823929F4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824ee4c0
	ctx.lr = 0x823929F4;
	sub_824EE4C0(ctx, base);
loc_823929F4:
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// slw r9,r26,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r11,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r7,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r7.u32);
	// lbz r6,144(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 144);
	// rlwinm r5,r6,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82392a48
	if (ctx.cr6.eq) goto loc_82392A48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9f40
	ctx.lr = 0x82392A28;
	sub_821D9F40(ctx, base);
	// bl 0x821b2710
	ctx.lr = 0x82392A2C;
	sub_821B2710(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82392A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82392A48:
	// lbz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 144);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82392a6c
	if (ctx.cr6.eq) goto loc_82392A6C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82392A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82392A6C:
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x82365780
	ctx.lr = 0x82392A78;
	sub_82365780(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82392A84"))) PPC_WEAK_FUNC(sub_82392A84);
PPC_FUNC_IMPL(__imp__sub_82392A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392A88"))) PPC_WEAK_FUNC(sub_82392A88);
PPC_FUNC_IMPL(__imp__sub_82392A88) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82392ad0
	if (!ctx.cr6.eq) goto loc_82392AD0;
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82392ad0
	if (!ctx.cr6.eq) goto loc_82392AD0;
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392ad0
	if (!ctx.cr6.eq) goto loc_82392AD0;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392b58
	if (ctx.cr6.eq) goto loc_82392B58;
loc_82392AD0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392ae8
	if (!ctx.cr6.eq) goto loc_82392AE8;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x8221f388
	ctx.lr = 0x82392AE4;
	sub_8221F388(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
loc_82392AE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82392AF0:
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,254
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 254, ctx.xer);
	// blt cr6,0x82392af0
	if (ctx.cr6.lt) goto loc_82392AF0;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82392b58
	if (ctx.cr0.eq) goto loc_82392B58;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82392B24:
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stbx r7,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82392b24
	if (ctx.cr6.lt) goto loc_82392B24;
loc_82392B58:
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

__attribute__((alias("__imp__sub_82392B6C"))) PPC_WEAK_FUNC(sub_82392B6C);
PPC_FUNC_IMPL(__imp__sub_82392B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392B70"))) PPC_WEAK_FUNC(sub_82392B70);
PPC_FUNC_IMPL(__imp__sub_82392B70) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,26964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26964);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392b98
	if (ctx.cr6.eq) goto loc_82392B98;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82392ba0
	goto loc_82392BA0;
loc_82392B98:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82392BA0:
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r4,12
	ctx.r4.s64 = 12;
loc_82392BA8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82392bbc
	if (!ctx.cr6.eq) goto loc_82392BBC;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82392bc0
	if (ctx.cr6.eq) goto loc_82392BC0;
loc_82392BBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82392BC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392c7c
	if (!ctx.cr6.eq) goto loc_82392C7C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392bec
	if (ctx.cr6.eq) goto loc_82392BEC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82392bf0
	if (!ctx.cr6.eq) goto loc_82392BF0;
loc_82392BEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82392BF0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82392c60
	if (ctx.cr6.eq) goto loc_82392C60;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r9,r9,148
	ctx.r9.s64 = ctx.r9.s64 + 148;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82392c18
	if (ctx.cr6.eq) goto loc_82392C18;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
loc_82392C18:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82392c38
	if (ctx.cr6.eq) goto loc_82392C38;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r10,r8,r4
	ctx.r10.s32 = ctx.r8.s32 / ctx.r4.s32;
loc_82392C38:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r31,140(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x82392c60
	if (ctx.cr6.eq) goto loc_82392C60;
	// addi r9,r9,254
	ctx.r9.s64 = ctx.r9.s64 + 254;
loc_82392C60:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392c74
	if (!ctx.cr6.eq) goto loc_82392C74;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82392ba8
	goto loc_82392BA8;
loc_82392C74:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82392ba8
	goto loc_82392BA8;
loc_82392C7C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392C84"))) PPC_WEAK_FUNC(sub_82392C84);
PPC_FUNC_IMPL(__imp__sub_82392C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392C88"))) PPC_WEAK_FUNC(sub_82392C88);
PPC_FUNC_IMPL(__imp__sub_82392C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82392C90;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392e04
	if (!ctx.cr6.eq) goto loc_82392E04;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82392ce8
	if (ctx.cr6.eq) goto loc_82392CE8;
loc_82392CD0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82392ce8
	if (ctx.cr6.eq) goto loc_82392CE8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82392cd0
	if (!ctx.cr6.eq) goto loc_82392CD0;
loc_82392CE8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82392e04
	if (!ctx.cr6.eq) goto loc_82392E04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82392D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82392D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,92(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r31,r28,88
	ctx.r31.s64 = ctx.r28.s64 + 88;
	// li r30,12
	ctx.r30.s64 = 12;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r7,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r7.u64);
	// bne cr6,0x82392d48
	if (!ctx.cr6.eq) goto loc_82392D48;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x82392d54
	goto loc_82392D54;
loc_82392D48:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r9,r9,r30
	ctx.r9.s32 = ctx.r9.s32 / ctx.r30.s32;
loc_82392D54:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r10,r30
	ctx.r8.s32 = ctx.r10.s32 / ctx.r30.s32;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82392d90
	if (!ctx.cr6.lt) goto loc_82392D90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392d84
	if (ctx.cr6.eq) goto loc_82392D84;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82392D84:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82392dac
	goto loc_82392DAC;
loc_82392D90:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823955a8
	ctx.lr = 0x82392DAC;
	sub_823955A8(ctx, base);
loc_82392DAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82392df4
	if (ctx.cr6.eq) goto loc_82392DF4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lbz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// divw r5,r9,r30
	ctx.r5.s32 = ctx.r9.s32 / ctx.r30.s32;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82395d00
	ctx.lr = 0x82392DF0;
	sub_82395D00(ctx, base);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
loc_82392DF4:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,26964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26964);
	// bl 0x82360330
	ctx.lr = 0x82392E04;
	sub_82360330(ctx, base);
loc_82392E04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82392E0C"))) PPC_WEAK_FUNC(sub_82392E0C);
PPC_FUNC_IMPL(__imp__sub_82392E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392E10"))) PPC_WEAK_FUNC(sub_82392E10);
PPC_FUNC_IMPL(__imp__sub_82392E10) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82392e64
	if (ctx.cr6.eq) goto loc_82392E64;
loc_82392E4C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82392e64
	if (ctx.cr6.eq) goto loc_82392E64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82392e4c
	if (!ctx.cr6.eq) goto loc_82392E4C;
loc_82392E64:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82392e8c
	if (ctx.cr6.eq) goto loc_82392E8C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// bl 0x82c49bc8
	ctx.lr = 0x82392E80;
	sub_82C49BC8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82392E8C:
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

__attribute__((alias("__imp__sub_82392EA0"))) PPC_WEAK_FUNC(sub_82392EA0);
PPC_FUNC_IMPL(__imp__sub_82392EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26951(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26951, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392EAC"))) PPC_WEAK_FUNC(sub_82392EAC);
PPC_FUNC_IMPL(__imp__sub_82392EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392EB0"))) PPC_WEAK_FUNC(sub_82392EB0);
PPC_FUNC_IMPL(__imp__sub_82392EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea90
	ctx.lr = 0x82392EC8;
	sub_821EEA90(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30336
	ctx.r3.s64 = ctx.r11.s64 + 30336;
	// bl 0x82265160
	ctx.lr = 0x82392ED8;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82392EE0;
	sub_82214F08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392EF0"))) PPC_WEAK_FUNC(sub_82392EF0);
PPC_FUNC_IMPL(__imp__sub_82392EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stfs f1,26968(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26968, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392EFC"))) PPC_WEAK_FUNC(sub_82392EFC);
PPC_FUNC_IMPL(__imp__sub_82392EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392F00"))) PPC_WEAK_FUNC(sub_82392F00);
PPC_FUNC_IMPL(__imp__sub_82392F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26972(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26972, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392F0C"))) PPC_WEAK_FUNC(sub_82392F0C);
PPC_FUNC_IMPL(__imp__sub_82392F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392F10"))) PPC_WEAK_FUNC(sub_82392F10);
PPC_FUNC_IMPL(__imp__sub_82392F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-27487(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27487, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392F1C"))) PPC_WEAK_FUNC(sub_82392F1C);
PPC_FUNC_IMPL(__imp__sub_82392F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392F20"))) PPC_WEAK_FUNC(sub_82392F20);
PPC_FUNC_IMPL(__imp__sub_82392F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea90
	ctx.lr = 0x82392F38;
	sub_821EEA90(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30340
	ctx.r3.s64 = ctx.r11.s64 + 30340;
	// bl 0x82265160
	ctx.lr = 0x82392F48;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82392F50;
	sub_82214F08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392F60"))) PPC_WEAK_FUNC(sub_82392F60);
PPC_FUNC_IMPL(__imp__sub_82392F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,26973(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26973, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392F6C"))) PPC_WEAK_FUNC(sub_82392F6C);
PPC_FUNC_IMPL(__imp__sub_82392F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392F70"))) PPC_WEAK_FUNC(sub_82392F70);
PPC_FUNC_IMPL(__imp__sub_82392F70) {
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
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// lwz r31,72(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// stb r9,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r9.u8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82392fd4
	if (ctx.cr6.eq) goto loc_82392FD4;
loc_82392FA4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392fc4
	if (!ctx.cr6.eq) goto loc_82392FC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82392FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82392FC4:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82392fa4
	if (!ctx.cr6.eq) goto loc_82392FA4;
loc_82392FD4:
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stb r10,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82392FF8"))) PPC_WEAK_FUNC(sub_82392FF8);
PPC_FUNC_IMPL(__imp__sub_82392FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82393000;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r5,26912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82393024
	if (ctx.cr6.eq) goto loc_82393024;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lbz r11,26821(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26821);
	// b 0x82393028
	goto loc_82393028;
loc_82393024:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82393028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823930f4
	if (ctx.cr6.eq) goto loc_823930F4;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lbz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823930f4
	if (!ctx.cr6.eq) goto loc_823930F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,140(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x821b25a8
	ctx.lr = 0x82393050;
	sub_821B25A8(ctx, base);
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393070
	if (ctx.cr6.eq) goto loc_82393070;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82393074
	if (!ctx.cr6.eq) goto loc_82393074;
loc_82393070:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82393074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823930f4
	if (ctx.cr6.eq) goto loc_823930F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317438
	ctx.lr = 0x8239308C;
	sub_82317438(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823930a8
	if (ctx.cr6.eq) goto loc_823930A8;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823930ac
	if (!ctx.cr6.eq) goto loc_823930AC;
loc_823930A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823930AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823930f0
	if (ctx.cr6.eq) goto loc_823930F0;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x82319f70
	ctx.lr = 0x823930C0;
	sub_82319F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823930f0
	if (ctx.cr6.eq) goto loc_823930F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823097f8
	ctx.lr = 0x823930D4;
	sub_823097F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232c578
	ctx.lr = 0x823930E4;
	sub_8232C578(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,11192
	ctx.r10.s64 = ctx.r11.s64 + 11192;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_823930F0:
	// lwz r5,26912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
loc_823930F4:
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239313c
	if (ctx.cr6.eq) goto loc_8239313C;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82393120
	if (!ctx.cr6.eq) goto loc_82393120;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239313c
	if (!ctx.cr6.eq) goto loc_8239313C;
loc_82393120:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x8253c208
	ctx.lr = 0x82393138;
	sub_8253C208(ctx, base);
	// lwz r5,26912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
loc_8239313C:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r10,-31060
	ctx.r9.s64 = ctx.r10.s64 + -31060;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r5,169(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 169);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stb r5,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r5.u8);
	// bl 0x82202e90
	ctx.lr = 0x8239316C;
	sub_82202E90(ctx, base);
	// lbz r10,144(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 144);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r4,-1124
	ctx.r11.s64 = ctx.r4.s64 + -1124;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r3,-31927
	ctx.r3.s64 = -2092367872;
	// stb r9,144(r28)
	PPC_STORE_U8(ctx.r28.u32 + 144, ctx.r9.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,26964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26964);
	// bl 0x82361728
	ctx.lr = 0x82393198;
	sub_82361728(ctx, base);
	// lwz r8,36(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82393294
	if (ctx.cr6.eq) goto loc_82393294;
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823931d4
	if (ctx.cr6.eq) goto loc_823931D4;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82393298
	goto loc_82393298;
loc_823931D4:
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82393244
	if (!ctx.cr0.gt) goto loc_82393244;
loc_823931F4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82393214
	if (ctx.cr6.lt) goto loc_82393214;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82393214:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82393230
	if (ctx.cr6.eq) goto loc_82393230;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82393238
	goto loc_82393238;
loc_82393230:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82393238:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823931f4
	if (ctx.cr6.gt) goto loc_823931F4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82393244:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82393284
	if (ctx.cr6.eq) goto loc_82393284;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82393260
	if (ctx.cr6.gt) goto loc_82393260;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82393260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82393284
	if (!ctx.cr6.eq) goto loc_82393284;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82393298
	goto loc_82393298;
loc_82393284:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82393298
	goto loc_82393298;
loc_82393294:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82393298:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823932ac
	if (ctx.cr6.eq) goto loc_823932AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82748ce8
	ctx.lr = 0x823932AC;
	sub_82748CE8(ctx, base);
loc_823932AC:
	// lwz r31,72(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823932ec
	if (ctx.cr6.eq) goto loc_823932EC;
loc_823932BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823932D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82392348
	ctx.lr = 0x823932DC;
	sub_82392348(ctx, base);
	// lwz r9,76(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823932bc
	if (!ctx.cr6.eq) goto loc_823932BC;
loc_823932EC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_823932F4"))) PPC_WEAK_FUNC(sub_823932F4);
PPC_FUNC_IMPL(__imp__sub_823932F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823932F8"))) PPC_WEAK_FUNC(sub_823932F8);
PPC_FUNC_IMPL(__imp__sub_823932F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82393300;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239348c
	if (ctx.cr6.eq) goto loc_8239348C;
	// bl 0x821e5498
	ctx.lr = 0x82393318;
	sub_821E5498(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393328
	if (ctx.cr6.eq) goto loc_82393328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823932f8
	ctx.lr = 0x82393328;
	sub_823932F8(ctx, base);
loc_82393328:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a12b08
	ctx.lr = 0x82393330;
	sub_82A12B08(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x82393344;
	sub_821F3C28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829fbc40
	ctx.lr = 0x82393354;
	sub_829FBC40(ctx, base);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8239347c
	if (ctx.cr6.eq) goto loc_8239347C;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r27,-31926
	ctx.r27.s64 = -2092302336;
	// addi r26,r11,-7836
	ctx.r26.s64 = ctx.r11.s64 + -7836;
loc_82393374:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne cr6,0x82393424
	if (!ctx.cr6.eq) goto loc_82393424;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823933c0
	if (ctx.cr6.eq) goto loc_823933C0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823933c0
	if (!ctx.cr6.eq) goto loc_823933C0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,-7848(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7848);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823933c0
	if (!ctx.cr6.eq) goto loc_823933C0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_823933C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8282ea08
	ctx.lr = 0x823933D8;
	sub_8282EA08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82728a68
	ctx.lr = 0x823933E8;
	sub_82728A68(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393400
	if (ctx.cr6.eq) goto loc_82393400;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82393404
	if (ctx.cr6.eq) goto loc_82393404;
loc_82393400:
	// twi 31,r0,22
loc_82393404:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82393470
	if (ctx.cr6.eq) goto loc_82393470;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a4c60
	ctx.lr = 0x82393420;
	sub_826A4C60(ctx, base);
	// b 0x82393470
	goto loc_82393470;
loc_82393424:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82728a68
	ctx.lr = 0x82393434;
	sub_82728A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239344c
	if (ctx.cr6.eq) goto loc_8239344C;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82393450
	if (ctx.cr6.eq) goto loc_82393450;
loc_8239344C:
	// twi 31,r0,22
loc_82393450:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82393470
	if (!ctx.cr6.eq) goto loc_82393470;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8282ea08
	ctx.lr = 0x82393470;
	sub_8282EA08(ctx, base);
loc_82393470:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82393374
	if (!ctx.cr6.eq) goto loc_82393374;
loc_8239347C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x82393484;
	sub_8221BE68(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8233dd70
	ctx.lr = 0x8239348C;
	sub_8233DD70(ctx, base);
loc_8239348C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82393494"))) PPC_WEAK_FUNC(sub_82393494);
PPC_FUNC_IMPL(__imp__sub_82393494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393498"))) PPC_WEAK_FUNC(sub_82393498);
PPC_FUNC_IMPL(__imp__sub_82393498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x823934A0;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r30,r11,30344
	ctx.r30.s64 = ctx.r11.s64 + 30344;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82393578
	if (ctx.cr6.eq) goto loc_82393578;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r9,-28224
	ctx.r7.s64 = ctx.r9.s64 + -28224;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// stvx128 v10,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823946e8
	ctx.lr = 0x82393528;
	sub_823946E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393538:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82393538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393538;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82393578
	if (ctx.cr6.eq) goto loc_82393578;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823946e8
	ctx.lr = 0x82393564;
	sub_823946E8(ctx, base);
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
loc_82393578:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821d9ed8
	ctx.lr = 0x82393584;
	sub_821D9ED8(ctx, base);
	// lis r24,-31927
	ctx.r24.s64 = -2092367872;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r11,26912(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26912);
	// stw r10,28(r19)
	PPC_STORE_U32(ctx.r19.u32 + 28, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,32(r19)
	PPC_STORE_U32(ctx.r19.u32 + 32, ctx.r9.u32);
	// beq cr6,0x823935b4
	if (ctx.cr6.eq) goto loc_823935B4;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lbz r10,26821(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26821);
	// b 0x823935b8
	goto loc_823935B8;
loc_823935B4:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_823935B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394284
	if (ctx.cr6.eq) goto loc_82394284;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823935e8
	if (ctx.cr6.eq) goto loc_823935E8;
	// lbz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823935ec
	if (!ctx.cr6.eq) goto loc_823935EC;
loc_823935E8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823935EC:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,27600(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27600);
	// bl 0x821e3e10
	ctx.lr = 0x82393600;
	sub_821E3E10(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a12b08
	ctx.lr = 0x8239360C;
	sub_82A12B08(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823932f8
	ctx.lr = 0x82393618;
	sub_823932F8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r26.u8);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
loc_82393654:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239366c
	if (ctx.cr6.eq) goto loc_8239366C;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82393670
	if (ctx.cr6.eq) goto loc_82393670;
loc_8239366C:
	// twi 31,r0,22
loc_82393670:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82393c14
	if (ctx.cr6.eq) goto loc_82393C14;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82393688
	if (!ctx.cr6.eq) goto loc_82393688;
	// twi 31,r0,22
loc_82393688:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82393698
	if (!ctx.cr6.eq) goto loc_82393698;
	// twi 31,r0,22
loc_82393698:
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x823943b0
	ctx.lr = 0x823936AC;
	sub_823943B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82393b6c
	if (!ctx.cr6.eq) goto loc_82393B6C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393af8
	if (ctx.cr6.eq) goto loc_82393AF8;
	// lwz r11,26912(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82644968
	ctx.lr = 0x823936D8;
	sub_82644968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823936e8
	if (ctx.cr6.eq) goto loc_823936E8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x823936ec
	goto loc_823936EC;
loc_823936E8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823936EC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,237
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 237, ctx.xer);
	// bgt cr6,0x82393c08
	if (ctx.cr6.gt) goto loc_82393C08;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// addi r12,r12,14096
	ctx.r12.s64 = ctx.r12.s64 + 14096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82393AC8;
	case 1:
		goto loc_82393AC8;
	case 2:
		goto loc_82393AC8;
	case 3:
		goto loc_82393AC8;
	case 4:
		goto loc_82393AC8;
	case 5:
		goto loc_82393AC8;
	case 6:
		goto loc_82393AC8;
	case 7:
		goto loc_82393AC8;
	case 8:
		goto loc_82393C08;
	case 9:
		goto loc_82393C08;
	case 10:
		goto loc_82393C08;
	case 11:
		goto loc_82393AC8;
	case 12:
		goto loc_82393AC8;
	case 13:
		goto loc_82393C08;
	case 14:
		goto loc_82393AC8;
	case 15:
		goto loc_82393C08;
	case 16:
		goto loc_82393AC8;
	case 17:
		goto loc_82393AC8;
	case 18:
		goto loc_82393AC8;
	case 19:
		goto loc_82393AC8;
	case 20:
		goto loc_82393AC8;
	case 21:
		goto loc_82393AC8;
	case 22:
		goto loc_82393AC8;
	case 23:
		goto loc_82393AC8;
	case 24:
		goto loc_82393C08;
	case 25:
		goto loc_82393C08;
	case 26:
		goto loc_82393C08;
	case 27:
		goto loc_82393AC8;
	case 28:
		goto loc_82393C08;
	case 29:
		goto loc_82393AC8;
	case 30:
		goto loc_82393AC8;
	case 31:
		goto loc_82393AC8;
	case 32:
		goto loc_82393AC8;
	case 33:
		goto loc_82393AC8;
	case 34:
		goto loc_82393C08;
	case 35:
		goto loc_82393C08;
	case 36:
		goto loc_82393AC8;
	case 37:
		goto loc_82393AC8;
	case 38:
		goto loc_82393AC8;
	case 39:
		goto loc_82393AC8;
	case 40:
		goto loc_82393C08;
	case 41:
		goto loc_82393C08;
	case 42:
		goto loc_82393AC8;
	case 43:
		goto loc_82393AC8;
	case 44:
		goto loc_82393AC8;
	case 45:
		goto loc_82393C08;
	case 46:
		goto loc_82393C08;
	case 47:
		goto loc_82393C08;
	case 48:
		goto loc_82393AC8;
	case 49:
		goto loc_82393AC8;
	case 50:
		goto loc_82393C08;
	case 51:
		goto loc_82393C08;
	case 52:
		goto loc_82393C08;
	case 53:
		goto loc_82393C08;
	case 54:
		goto loc_82393C08;
	case 55:
		goto loc_82393AC8;
	case 56:
		goto loc_82393AC8;
	case 57:
		goto loc_82393AC8;
	case 58:
		goto loc_82393AC8;
	case 59:
		goto loc_82393C08;
	case 60:
		goto loc_82393C08;
	case 61:
		goto loc_82393C08;
	case 62:
		goto loc_82393AC8;
	case 63:
		goto loc_82393AC8;
	case 64:
		goto loc_82393C08;
	case 65:
		goto loc_82393C08;
	case 66:
		goto loc_82393AC8;
	case 67:
		goto loc_82393AC8;
	case 68:
		goto loc_82393C08;
	case 69:
		goto loc_82393C08;
	case 70:
		goto loc_82393C08;
	case 71:
		goto loc_82393C08;
	case 72:
		goto loc_82393AC8;
	case 73:
		goto loc_82393AC8;
	case 74:
		goto loc_82393C08;
	case 75:
		goto loc_82393AC8;
	case 76:
		goto loc_82393AC8;
	case 77:
		goto loc_82393C08;
	case 78:
		goto loc_82393C08;
	case 79:
		goto loc_82393AC8;
	case 80:
		goto loc_82393AC8;
	case 81:
		goto loc_82393AC8;
	case 82:
		goto loc_82393AC8;
	case 83:
		goto loc_82393C08;
	case 84:
		goto loc_82393AC8;
	case 85:
		goto loc_82393AC8;
	case 86:
		goto loc_82393AC8;
	case 87:
		goto loc_82393C08;
	case 88:
		goto loc_82393C08;
	case 89:
		goto loc_82393C08;
	case 90:
		goto loc_82393AC8;
	case 91:
		goto loc_82393C08;
	case 92:
		goto loc_82393C08;
	case 93:
		goto loc_82393C08;
	case 94:
		goto loc_82393C08;
	case 95:
		goto loc_82393C08;
	case 96:
		goto loc_82393AC8;
	case 97:
		goto loc_82393AC8;
	case 98:
		goto loc_82393AC8;
	case 99:
		goto loc_82393AC8;
	case 100:
		goto loc_82393AC8;
	case 101:
		goto loc_82393C08;
	case 102:
		goto loc_82393C08;
	case 103:
		goto loc_82393C08;
	case 104:
		goto loc_82393C08;
	case 105:
		goto loc_82393C08;
	case 106:
		goto loc_82393C08;
	case 107:
		goto loc_82393C08;
	case 108:
		goto loc_82393AC8;
	case 109:
		goto loc_82393AC8;
	case 110:
		goto loc_82393AC8;
	case 111:
		goto loc_82393AC8;
	case 112:
		goto loc_82393AC8;
	case 113:
		goto loc_82393AC8;
	case 114:
		goto loc_82393C08;
	case 115:
		goto loc_82393AC8;
	case 116:
		goto loc_82393C08;
	case 117:
		goto loc_82393AC8;
	case 118:
		goto loc_82393AC8;
	case 119:
		goto loc_82393C08;
	case 120:
		goto loc_82393AC8;
	case 121:
		goto loc_82393AC8;
	case 122:
		goto loc_82393C08;
	case 123:
		goto loc_82393C08;
	case 124:
		goto loc_82393C08;
	case 125:
		goto loc_82393C08;
	case 126:
		goto loc_82393AC8;
	case 127:
		goto loc_82393AC8;
	case 128:
		goto loc_82393C08;
	case 129:
		goto loc_82393C08;
	case 130:
		goto loc_82393C08;
	case 131:
		goto loc_82393AC8;
	case 132:
		goto loc_82393AC8;
	case 133:
		goto loc_82393AC8;
	case 134:
		goto loc_82393AC8;
	case 135:
		goto loc_82393C08;
	case 136:
		goto loc_82393AC8;
	case 137:
		goto loc_82393C08;
	case 138:
		goto loc_82393C08;
	case 139:
		goto loc_82393AC8;
	case 140:
		goto loc_82393AC8;
	case 141:
		goto loc_82393C08;
	case 142:
		goto loc_82393C08;
	case 143:
		goto loc_82393C08;
	case 144:
		goto loc_82393C08;
	case 145:
		goto loc_82393AC8;
	case 146:
		goto loc_82393AC8;
	case 147:
		goto loc_82393AC8;
	case 148:
		goto loc_82393C08;
	case 149:
		goto loc_82393C08;
	case 150:
		goto loc_82393AC8;
	case 151:
		goto loc_82393C08;
	case 152:
		goto loc_82393C08;
	case 153:
		goto loc_82393AC8;
	case 154:
		goto loc_82393C08;
	case 155:
		goto loc_82393C08;
	case 156:
		goto loc_82393C08;
	case 157:
		goto loc_82393AC8;
	case 158:
		goto loc_82393AC8;
	case 159:
		goto loc_82393AC8;
	case 160:
		goto loc_82393C08;
	case 161:
		goto loc_82393AC8;
	case 162:
		goto loc_82393C08;
	case 163:
		goto loc_82393AC8;
	case 164:
		goto loc_82393C08;
	case 165:
		goto loc_82393C08;
	case 166:
		goto loc_82393C08;
	case 167:
		goto loc_82393C08;
	case 168:
		goto loc_82393C08;
	case 169:
		goto loc_82393C08;
	case 170:
		goto loc_82393C08;
	case 171:
		goto loc_82393C08;
	case 172:
		goto loc_82393AC8;
	case 173:
		goto loc_82393AC8;
	case 174:
		goto loc_82393AC8;
	case 175:
		goto loc_82393AC8;
	case 176:
		goto loc_82393C08;
	case 177:
		goto loc_82393C08;
	case 178:
		goto loc_82393AC8;
	case 179:
		goto loc_82393C08;
	case 180:
		goto loc_82393C08;
	case 181:
		goto loc_82393C08;
	case 182:
		goto loc_82393C08;
	case 183:
		goto loc_82393C08;
	case 184:
		goto loc_82393C08;
	case 185:
		goto loc_82393C08;
	case 186:
		goto loc_82393C08;
	case 187:
		goto loc_82393C08;
	case 188:
		goto loc_82393C08;
	case 189:
		goto loc_82393C08;
	case 190:
		goto loc_82393AC8;
	case 191:
		goto loc_82393AC8;
	case 192:
		goto loc_82393C08;
	case 193:
		goto loc_82393C08;
	case 194:
		goto loc_82393C08;
	case 195:
		goto loc_82393C08;
	case 196:
		goto loc_82393C08;
	case 197:
		goto loc_82393C08;
	case 198:
		goto loc_82393C08;
	case 199:
		goto loc_82393AC8;
	case 200:
		goto loc_82393C08;
	case 201:
		goto loc_82393AC8;
	case 202:
		goto loc_82393C08;
	case 203:
		goto loc_82393C08;
	case 204:
		goto loc_82393AC8;
	case 205:
		goto loc_82393AC8;
	case 206:
		goto loc_82393AC8;
	case 207:
		goto loc_82393AC8;
	case 208:
		goto loc_82393AC8;
	case 209:
		goto loc_82393C08;
	case 210:
		goto loc_82393AC8;
	case 211:
		goto loc_82393AC8;
	case 212:
		goto loc_82393AC8;
	case 213:
		goto loc_82393C08;
	case 214:
		goto loc_82393AC8;
	case 215:
		goto loc_82393C08;
	case 216:
		goto loc_82393C08;
	case 217:
		goto loc_82393C08;
	case 218:
		goto loc_82393AC8;
	case 219:
		goto loc_82393C08;
	case 220:
		goto loc_82393AC8;
	case 221:
		goto loc_82393C08;
	case 222:
		goto loc_82393C08;
	case 223:
		goto loc_82393C08;
	case 224:
		goto loc_82393C08;
	case 225:
		goto loc_82393C08;
	case 226:
		goto loc_82393AC8;
	case 227:
		goto loc_82393AC8;
	case 228:
		goto loc_82393AC8;
	case 229:
		goto loc_82393C08;
	case 230:
		goto loc_82393C08;
	case 231:
		goto loc_82393C08;
	case 232:
		goto loc_82393C08;
	case 233:
		goto loc_82393AC8;
	case 234:
		goto loc_82393C08;
	case 235:
		goto loc_82393C08;
	case 236:
		goto loc_82393C08;
	case 237:
		goto loc_82393AC8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15368(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15368);
	// lwz r17,15048(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15048);
loc_82393AC8:
	// addi r31,r19,108
	ctx.r31.s64 = ctx.r19.s64 + 108;
	// lwz r11,112(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 112);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// ld r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// b 0x82393b24
	goto loc_82393B24;
loc_82393AF8:
	// lwz r11,112(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 112);
	// addi r31,r19,108
	ctx.r31.s64 = ctx.r19.s64 + 108;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
loc_82393B24:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r30,112(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 112);
	// bl 0x823459d8
	ctx.lr = 0x82393B30;
	sub_823459D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393b44
	if (ctx.cr6.eq) goto loc_82393B44;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82393b48
	if (ctx.cr6.eq) goto loc_82393B48;
loc_82393B44:
	// twi 31,r0,22
loc_82393B48:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82393c08
	if (!ctx.cr6.eq) goto loc_82393C08;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82392598
	ctx.lr = 0x82393B64;
	sub_82392598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393c08
	if (ctx.cr6.eq) goto loc_82393C08;
loc_82393B6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82393B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82393b94
	if (!ctx.cr6.eq) goto loc_82393B94;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x82393ba0
	goto loc_82393BA0;
loc_82393B94:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r10,r17,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r17.s64;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
loc_82393BA0:
	// subf r10,r17,r18
	ctx.r10.s64 = ctx.r18.s64 - ctx.r17.s64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82393bdc
	if (!ctx.cr6.lt) goto loc_82393BDC;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82393bc0
	if (ctx.cr6.eq) goto loc_82393BC0;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r18)
	PPC_STORE_U64(ctx.r18.u32 + 0, ctx.r11.u64);
loc_82393BC0:
	// addi r18,r18,8
	ctx.r18.s64 = ctx.r18.s64 + 8;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r26.u8);
	// bl 0x82a596f0
	ctx.lr = 0x82393BD8;
	sub_82A596F0(ctx, base);
	// b 0x82393654
	goto loc_82393654;
loc_82393BDC:
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82a68bb8
	ctx.lr = 0x82393BF8;
	sub_82A68BB8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r18,136(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r17,132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r26.u8);
loc_82393C08:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a596f0
	ctx.lr = 0x82393C10;
	sub_82A596F0(ctx, base);
	// b 0x82393654
	goto loc_82393654;
loc_82393C14:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r20,r11,-31528
	ctx.r20.s64 = ctx.r11.s64 + -31528;
	// beq cr6,0x82393e3c
	if (ctx.cr6.eq) goto loc_82393E3C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r10,-31360
	ctx.r4.s64 = ctx.r10.s64 + -31360;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82393C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82393d90
	if (ctx.cr6.eq) goto loc_82393D90;
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
loc_82393C50:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82393C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82393ca8
	if (ctx.cr6.eq) goto loc_82393CA8;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82393C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82393CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82393cac
	goto loc_82393CAC;
loc_82393CA8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82393CAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393d7c
	if (ctx.cr6.eq) goto loc_82393D7C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x823943b0
	ctx.lr = 0x82393CC4;
	sub_823943B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82393c50
	if (!ctx.cr6.eq) goto loc_82393C50;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82392598
	ctx.lr = 0x82393CD8;
	sub_82392598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393c50
	if (ctx.cr6.eq) goto loc_82393C50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82393CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bne cr6,0x82393d0c
	if (!ctx.cr6.eq) goto loc_82393D0C;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x82393d18
	goto loc_82393D18;
loc_82393D0C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r10,r17,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r17.s64;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
loc_82393D18:
	// subf r10,r17,r18
	ctx.r10.s64 = ctx.r18.s64 - ctx.r17.s64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82393d4c
	if (!ctx.cr6.lt) goto loc_82393D4C;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82393d38
	if (ctx.cr6.eq) goto loc_82393D38;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r18)
	PPC_STORE_U64(ctx.r18.u32 + 0, ctx.r11.u64);
loc_82393D38:
	// addi r18,r18,8
	ctx.r18.s64 = ctx.r18.s64 + 8;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r26.u8);
	// b 0x82393c50
	goto loc_82393C50;
loc_82393D4C:
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82a68bb8
	ctx.lr = 0x82393D68;
	sub_82A68BB8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r18,136(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r17,132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r26.u8);
	// b 0x82393c50
	goto loc_82393C50;
loc_82393D7C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82393D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82393D90:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r10,-31352
	ctx.r4.s64 = ctx.r10.s64 + -31352;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82393DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823946e8
	ctx.lr = 0x82393DC0;
	sub_823946E8(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r8,-31340
	ctx.r4.s64 = ctx.r8.s64 + -31340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82393DD8;
	sub_8222CF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a17080
	ctx.lr = 0x82393DE8;
	sub_82A17080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82393DF0;
	sub_82214F08(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-31328
	ctx.r4.s64 = ctx.r7.s64 + -31328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82393E04;
	sub_8222CF18(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a17140
	ctx.lr = 0x82393E14;
	sub_82A17140(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82393E1C;
	sub_82214F08(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82393E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82393e40
	goto loc_82393E40;
loc_82393E3C:
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82393E40:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82393e84
	if (ctx.cr6.eq) goto loc_82393E84;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82393e84
	if (!ctx.cr6.eq) goto loc_82393E84;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823946e8
	ctx.lr = 0x82393E64;
	sub_823946E8(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lvx128 v0,r0,r25
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82393e84
	if (!ctx.cr6.eq) goto loc_82393E84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_82393E84:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82393ed4
	if (ctx.cr6.eq) goto loc_82393ED4;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82393ed4
	if (!ctx.cr6.eq) goto loc_82393ED4;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823946e8
	ctx.lr = 0x82393EA8;
	sub_823946E8(ctx, base);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ld r7,8(r23)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// bne cr6,0x82393ed4
	if (!ctx.cr6.eq) goto loc_82393ED4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_82393ED4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393f08
	if (ctx.cr6.eq) goto loc_82393F08;
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// subf r11,r17,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r17.s64;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// lbz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// ld r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8241cfb0
	ctx.lr = 0x82393F08;
	sub_8241CFB0(ctx, base);
loc_82393F08:
	// lwz r11,26912(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26912);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// bl 0x824ebb78
	ctx.lr = 0x82393F1C;
	sub_824EBB78(ctx, base);
	// lbz r9,144(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 144);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// stb r8,144(r19)
	PPC_STORE_U8(ctx.r19.u32 + 144, ctx.r8.u8);
	// beq cr6,0x82393f50
	if (ctx.cr6.eq) goto loc_82393F50;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r10,-31316
	ctx.r4.s64 = ctx.r10.s64 + -31316;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82393F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82393F50:
	// lwz r27,72(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// lwz r11,76(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 76);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82394130
	if (ctx.cr6.eq) goto loc_82394130;
	// subf r11,r17,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r17.s64;
	// srawi r26,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 3;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r25,r11,-31296
	ctx.r25.s64 = ctx.r11.s64 + -31296;
loc_82393F70:
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82393fd0
	if (!ctx.cr6.gt) goto loc_82393FD0;
loc_82393F84:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82393fa4
	if (ctx.cr6.lt) goto loc_82393FA4;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
loc_82393FA4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82393fc0
	if (ctx.cr6.eq) goto loc_82393FC0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82393fc8
	goto loc_82393FC8;
loc_82393FC0:
	// subf r31,r8,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82393FC8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82393f84
	if (ctx.cr6.gt) goto loc_82393F84;
loc_82393FD0:
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x82394120
	if (ctx.cr6.eq) goto loc_82394120;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82393fec
	if (ctx.cr6.lt) goto loc_82393FEC;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82393FEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394120
	if (!ctx.cr6.eq) goto loc_82394120;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x829fb7d0
	ctx.lr = 0x8239400C;
	sub_829FB7D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82394024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823940ec
	if (ctx.cr6.eq) goto loc_823940EC;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
loc_82394034:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82394050
	if (ctx.cr6.eq) goto loc_82394050;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82394050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82394050:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82394068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823940ac
	if (ctx.cr6.eq) goto loc_823940AC;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82394094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823940ac
	if (ctx.cr6.eq) goto loc_823940AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82394034
	if (!ctx.cr6.eq) goto loc_82394034;
loc_823940AC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823940ec
	if (ctx.cr6.eq) goto loc_823940EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823940D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823940EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823940EC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8239410c
	if (ctx.cr6.eq) goto loc_8239410C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239410C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239410C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82394120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82394120:
	// lwz r11,76(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 76);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82393f70
	if (!ctx.cr6.eq) goto loc_82393F70;
loc_82394130:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8239414c
	if (ctx.cr6.eq) goto loc_8239414C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239414C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8239414C:
	// lwz r10,36(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82394244
	if (ctx.cr6.eq) goto loc_82394244;
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394188
	if (ctx.cr6.eq) goto loc_82394188;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,72(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82394248
	goto loc_82394248;
loc_82394188:
	// lwz r10,72(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// lwz r6,76(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 76);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823941f4
	if (!ctx.cr0.gt) goto loc_823941F4;
loc_823941A4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x823941c4
	if (ctx.cr6.lt) goto loc_823941C4;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
loc_823941C4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823941e0
	if (ctx.cr6.eq) goto loc_823941E0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823941e8
	goto loc_823941E8;
loc_823941E0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823941E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823941a4
	if (ctx.cr6.gt) goto loc_823941A4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_823941F4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82394234
	if (ctx.cr6.eq) goto loc_82394234;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82394210
	if (ctx.cr6.gt) goto loc_82394210;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82394210:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394234
	if (!ctx.cr6.eq) goto loc_82394234;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82394248
	goto loc_82394248;
loc_82394234:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82394248
	goto loc_82394248;
loc_82394244:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_82394248:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239425c
	if (ctx.cr6.eq) goto loc_8239425C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222b338
	ctx.lr = 0x8239425C;
	sub_8222B338(ctx, base);
loc_8239425C:
	// lbz r11,144(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 144);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// ori r10,r11,160
	ctx.r10.u64 = ctx.r11.u64 | 160;
	// stb r10,144(r19)
	PPC_STORE_U8(ctx.r19.u32 + 144, ctx.r10.u8);
	// beq cr6,0x82394278
	if (ctx.cr6.eq) goto loc_82394278;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8221be68
	ctx.lr = 0x82394278;
	sub_8221BE68(ctx, base);
loc_82394278:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233dd70
	ctx.lr = 0x82394280;
	sub_8233DD70(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82394284:
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823948a0
	ctx.lr = 0x82394294;
	sub_823948A0(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239429C"))) PPC_WEAK_FUNC(sub_8239429C);
PPC_FUNC_IMPL(__imp__sub_8239429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823942A0"))) PPC_WEAK_FUNC(sub_823942A0);
PPC_FUNC_IMPL(__imp__sub_823942A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,30344
	ctx.r8.s64 = ctx.r11.s64 + 30344;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r7,81(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823942e8
	if (!ctx.cr6.eq) goto loc_823942E8;
loc_823942C0:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823942d4
	if (!ctx.cr6.lt) goto loc_823942D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x823942dc
	goto loc_823942DC;
loc_823942D4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823942DC:
	// lbz r7,81(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823942c0
	if (ctx.cr6.eq) goto loc_823942C0;
loc_823942E8:
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// beq cr6,0x8239430c
	if (ctx.cr6.eq) goto loc_8239430C;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8239430c
	if (ctx.cr6.lt) goto loc_8239430C;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// b 0x82394318
	goto loc_82394318;
loc_8239430C:
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
loc_82394318:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82394334
	if (ctx.cr6.eq) goto loc_82394334;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82394338
	if (ctx.cr6.eq) goto loc_82394338;
loc_82394334:
	// twi 31,r0,22
loc_82394338:
	// lwz r11,-4(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823943a8
	if (ctx.cr6.eq) goto loc_823943A8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82394350
	if (!ctx.cr6.eq) goto loc_82394350;
	// twi 31,r0,22
loc_82394350:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82394360
	if (!ctx.cr6.eq) goto loc_82394360;
	// twi 31,r0,22
loc_82394360:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239437c
	if (ctx.cr6.eq) goto loc_8239437C;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8239437C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823943a0
	if (ctx.cr6.eq) goto loc_823943A0;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
loc_823943A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823943A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823943B0"))) PPC_WEAK_FUNC(sub_823943B0);
PPC_FUNC_IMPL(__imp__sub_823943B0) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82644968
	ctx.lr = 0x823943E0;
	sub_82644968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823943f0
	if (ctx.cr6.eq) goto loc_823943F0;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x823943f4
	goto loc_823943F4;
loc_823943F0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823943F4:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82394464
	if (!ctx.cr0.gt) goto loc_82394464;
loc_82394414:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82394434
	if (ctx.cr6.lt) goto loc_82394434;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82394434:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82394450
	if (ctx.cr6.eq) goto loc_82394450;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82394458
	goto loc_82394458;
loc_82394450:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82394458:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82394414
	if (ctx.cr6.gt) goto loc_82394414;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82394464:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8239449c
	if (ctx.cr6.eq) goto loc_8239449C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82394480
	if (ctx.cr6.lt) goto loc_82394480;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82394480:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239449c
	if (!ctx.cr6.eq) goto loc_8239449C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823944a0
	goto loc_823944A0;
loc_8239449C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_823944A0:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823944c4
	if (ctx.cr6.eq) goto loc_823944C4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
loc_823944C4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_823944DC"))) PPC_WEAK_FUNC(sub_823944DC);
PPC_FUNC_IMPL(__imp__sub_823944DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823944E0"))) PPC_WEAK_FUNC(sub_823944E0);
PPC_FUNC_IMPL(__imp__sub_823944E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b09b0
	ctx.lr = 0x823944F8;
	sub_823B09B0(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// addi r4,r10,-31272
	ctx.r4.s64 = ctx.r10.s64 + -31272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x82394510;
	sub_82350E30(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,11952
	ctx.r5.s64 = ctx.r9.s64 + 11952;
	// addi r4,r8,-31252
	ctx.r4.s64 = ctx.r8.s64 + -31252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x82394528;
	sub_823588E8(ctx, base);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,12016
	ctx.r5.s64 = ctx.r7.s64 + 12016;
	// addi r4,r6,-31224
	ctx.r4.s64 = ctx.r6.s64 + -31224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395c68
	ctx.lr = 0x82394540;
	sub_82395C68(ctx, base);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r5,12032
	ctx.r5.s64 = ctx.r5.s64 + 12032;
	// addi r4,r4,-31196
	ctx.r4.s64 = ctx.r4.s64 + -31196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x82394558;
	sub_82350E30(ctx, base);
	// lis r3,-32199
	ctx.r3.s64 = -2110193664;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r3,12064
	ctx.r5.s64 = ctx.r3.s64 + 12064;
	// addi r4,r11,-31176
	ctx.r4.s64 = ctx.r11.s64 + -31176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823588e8
	ctx.lr = 0x82394570;
	sub_823588E8(ctx, base);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,12048
	ctx.r5.s64 = ctx.r10.s64 + 12048;
	// addi r4,r9,-31148
	ctx.r4.s64 = ctx.r9.s64 + -31148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x82394588;
	sub_82350E30(ctx, base);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r8,12128
	ctx.r5.s64 = ctx.r8.s64 + 12128;
	// addi r4,r7,-31120
	ctx.r4.s64 = ctx.r7.s64 + -31120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82350e30
	ctx.lr = 0x823945A0;
	sub_82350E30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x823945A8;
	sub_829FF648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823945B8"))) PPC_WEAK_FUNC(sub_823945B8);
PPC_FUNC_IMPL(__imp__sub_823945B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x823945C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// bne cr6,0x823945e0
	if (!ctx.cr6.eq) goto loc_823945E0;
	// twi 31,r0,22
loc_823945E0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823945f4
	if (!ctx.cr6.eq) goto loc_823945F4;
	// twi 31,r0,22
loc_823945F4:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,30304
	ctx.r30.s64 = ctx.r11.s64 + 30304;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82394670
	if (ctx.cr6.eq) goto loc_82394670;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x82394640;
	sub_821940C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// bl 0x8221be68
	ctx.lr = 0x82394650;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// std r4,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82394670:
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82394684"))) PPC_WEAK_FUNC(sub_82394684);
PPC_FUNC_IMPL(__imp__sub_82394684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394688"))) PPC_WEAK_FUNC(sub_82394688);
PPC_FUNC_IMPL(__imp__sub_82394688) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,254
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 254, ctx.xer);
	// blt cr6,0x823946b0
	if (ctx.cr6.lt) goto loc_823946B0;
	// bl 0x824ee4c0
	ctx.lr = 0x823946B0;
	sub_824EE4C0(ctx, base);
loc_823946B0:
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_823946E8"))) PPC_WEAK_FUNC(sub_823946E8);
PPC_FUNC_IMPL(__imp__sub_823946E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r11,30344
	ctx.r8.s64 = ctx.r11.s64 + 30344;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r7,81(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82394744
	if (!ctx.cr6.eq) goto loc_82394744;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8239471C:
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82394730
	if (!ctx.cr6.lt) goto loc_82394730;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82394738
	goto loc_82394738;
loc_82394730:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82394738:
	// lbz r5,81(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239471c
	if (ctx.cr6.eq) goto loc_8239471C;
loc_82394744:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82394768
	if (ctx.cr6.eq) goto loc_82394768;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82394808
	if (!ctx.cr6.lt) goto loc_82394808;
loc_82394768:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r7,-28224
	ctx.r5.s64 = ctx.r7.s64 + -28224;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,6
	ctx.r9.s64 = 6;
	// stvx128 v10,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823947C4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823947c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823947C4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82394a90
	ctx.lr = 0x823947EC;
	sub_82394A90(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82394804
	if (!ctx.cr6.eq) goto loc_82394804;
	// twi 31,r0,22
loc_82394804:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82394808:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82394818
	if (!ctx.cr6.eq) goto loc_82394818;
	// twi 31,r0,22
loc_82394818:
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239482C"))) PPC_WEAK_FUNC(sub_8239482C);
PPC_FUNC_IMPL(__imp__sub_8239482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394830"))) PPC_WEAK_FUNC(sub_82394830);
PPC_FUNC_IMPL(__imp__sub_82394830) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,30344
	ctx.r31.s64 = ctx.r11.s64 + 30344;
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
	// bl 0x82394cb8
	ctx.lr = 0x82394874;
	sub_82394CB8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8239487C;
	sub_8221BE68(ctx, base);
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

__attribute__((alias("__imp__sub_823948A0"))) PPC_WEAK_FUNC(sub_823948A0);
PPC_FUNC_IMPL(__imp__sub_823948A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x823948A8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,30344
	ctx.r29.s64 = ctx.r11.s64 + 30344;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r8,81(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823948fc
	if (!ctx.cr6.eq) goto loc_823948FC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_823948D4:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823948ec
	if (!ctx.cr6.lt) goto loc_823948EC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823948f0
	goto loc_823948F0;
loc_823948EC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_823948F0:
	// lbz r7,81(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823948d4
	if (ctx.cr6.eq) goto loc_823948D4;
loc_823948FC:
	// lbz r8,81(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82394940
	if (!ctx.cr6.eq) goto loc_82394940;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82394918:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8239492c
	if (!ctx.cr6.lt) goto loc_8239492C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82394934
	goto loc_82394934;
loc_8239492C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82394934:
	// lbz r8,81(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82394918
	if (ctx.cr6.eq) goto loc_82394918;
loc_82394940:
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
loc_82394954:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394968
	if (ctx.cr6.eq) goto loc_82394968;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8239496c
	if (ctx.cr6.eq) goto loc_8239496C;
loc_82394968:
	// twi 31,r0,22
loc_8239496C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82394988
	if (ctx.cr6.eq) goto loc_82394988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82413ca8
	ctx.lr = 0x82394984;
	sub_82413CA8(ctx, base);
	// b 0x82394954
	goto loc_82394954;
loc_82394988:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82394cb8
	ctx.lr = 0x8239499C;
	sub_82394CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_823949A8"))) PPC_WEAK_FUNC(sub_823949A8);
PPC_FUNC_IMPL(__imp__sub_823949A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x823949B0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r27,236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x823949CC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823949dc
	if (ctx.cr6.eq) goto loc_823949DC;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_823949DC:
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823949ec
	if (ctx.cr6.eq) goto loc_823949EC;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_823949EC:
	// addic. r30,r31,8
	ctx.xer.ca = ctx.r31.u32 > 4294967287;
	ctx.r30.s64 = ctx.r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82394a08
	if (ctx.cr0.eq) goto loc_82394A08;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cf7c8
	ctx.lr = 0x82394A00;
	sub_821CF7C8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82394A08:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// addi r30,r11,30304
	ctx.r30.s64 = ctx.r11.s64 + 30304;
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82394a70
	if (!ctx.cr6.lt) goto loc_82394A70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11140
	ctx.r4.s64 = ctx.r11.s64 + 11140;
	// bl 0x822f2020
	ctx.lr = 0x82394A38;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82394A44;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r10,5696
	ctx.r28.s64 = ctx.r10.s64 + 5696;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// bl 0x822f1f00
	ctx.lr = 0x82394A58;
	sub_822F1F00(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x82394A64;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x82394A6C;
	sub_82171810(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82394A70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82394A8C"))) PPC_WEAK_FUNC(sub_82394A8C);
PPC_FUNC_IMPL(__imp__sub_82394A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394A90"))) PPC_WEAK_FUNC(sub_82394A90);
PPC_FUNC_IMPL(__imp__sub_82394A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82394A98;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,30344
	ctx.r31.s64 = ctx.r11.s64 + 30344;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// std r26,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r26.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394aec
	if (!ctx.cr6.eq) goto loc_82394AEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82395330
	ctx.lr = 0x82394AE0;
	sub_82395330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82394AEC:
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// beq cr6,0x82394b08
	if (ctx.cr6.eq) goto loc_82394B08;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82394b0c
	if (ctx.cr6.eq) goto loc_82394B0C;
loc_82394B08:
	// twi 31,r0,22
loc_82394B0C:
	// lwz r28,196(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82394b4c
	if (!ctx.cr6.eq) goto loc_82394B4C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82394c84
	if (!ctx.cr6.lt) goto loc_82394C84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395330
	ctx.lr = 0x82394B40;
	sub_82395330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82394B4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394b5c
	if (ctx.cr6.eq) goto loc_82394B5C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82394b60
	if (ctx.cr6.eq) goto loc_82394B60;
loc_82394B5C:
	// twi 31,r0,22
loc_82394B60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82394b9c
	if (!ctx.cr6.eq) goto loc_82394B9C;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82394c84
	if (!ctx.cr6.lt) goto loc_82394C84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395330
	ctx.lr = 0x82394B90;
	sub_82395330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82394B9C:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82394c00
	if (!ctx.cr6.lt) goto loc_82394C00;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x82395a28
	ctx.lr = 0x82394BB4;
	sub_82395A28(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82394bfc
	if (!ctx.cr6.lt) goto loc_82394BFC;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82394c70
	if (!ctx.cr6.eq) goto loc_82394C70;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82394BE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82395330
	ctx.lr = 0x82394BF0;
	sub_82395330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82394BFC:
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82394C00:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82394c84
	if (!ctx.cr6.lt) goto loc_82394C84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x82413ca8
	ctx.lr = 0x82394C18;
	sub_82413CA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394c2c
	if (ctx.cr6.eq) goto loc_82394C2C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82394c30
	if (ctx.cr6.eq) goto loc_82394C30;
loc_82394C2C:
	// twi 31,r0,22
loc_82394C30:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82394c50
	if (ctx.cr6.eq) goto loc_82394C50;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82394c84
	if (!ctx.cr6.lt) goto loc_82394C84;
loc_82394C50:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394be8
	if (ctx.cr6.eq) goto loc_82394BE8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82394C70:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82395330
	ctx.lr = 0x82394C78;
	sub_82395330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82394C84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82394dc8
	ctx.lr = 0x82394C94;
	sub_82394DC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82394CB4"))) PPC_WEAK_FUNC(sub_82394CB4);
PPC_FUNC_IMPL(__imp__sub_82394CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394CB8"))) PPC_WEAK_FUNC(sub_82394CB8);
PPC_FUNC_IMPL(__imp__sub_82394CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82394CC0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,30344
	ctx.r31.s64 = ctx.r11.s64 + 30344;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82394cf4
	if (ctx.cr6.eq) goto loc_82394CF4;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82394cf8
	if (ctx.cr6.eq) goto loc_82394CF8;
loc_82394CF4:
	// twi 31,r0,22
loc_82394CF8:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82394d70
	if (!ctx.cr6.eq) goto loc_82394D70;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82394d1c
	if (ctx.cr6.eq) goto loc_82394D1C;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82394d20
	if (ctx.cr6.eq) goto loc_82394D20;
loc_82394D1C:
	// twi 31,r0,22
loc_82394D20:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82394d70
	if (!ctx.cr6.eq) goto loc_82394D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823958c0
	ctx.lr = 0x82394D34;
	sub_823958C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82394D70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82394d80
	if (ctx.cr6.eq) goto loc_82394D80;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82394d84
	if (ctx.cr6.eq) goto loc_82394D84;
loc_82394D80:
	// twi 31,r0,22
loc_82394D84:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82394db8
	if (ctx.cr6.eq) goto loc_82394DB8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82413ca8
	ctx.lr = 0x82394D9C;
	sub_82413CA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82394f08
	ctx.lr = 0x82394DAC;
	sub_82394F08(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82394d70
	goto loc_82394D70;
loc_82394DB8:
	// std r5,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82394DC8"))) PPC_WEAK_FUNC(sub_82394DC8);
PPC_FUNC_IMPL(__imp__sub_82394DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82394DD0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r28,r11,30344
	ctx.r28.s64 = ctx.r11.s64 + 30344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82394e3c
	if (!ctx.cr6.eq) goto loc_82394E3C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82394E08:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subfc r7,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r6,31
	ctx.r29.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82394e2c
	if (ctx.cr6.eq) goto loc_82394E2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82394e30
	goto loc_82394E30;
loc_82394E2C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82394E30:
	// lbz r8,81(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82394e08
	if (ctx.cr6.eq) goto loc_82394E08;
loc_82394E3C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394e9c
	if (ctx.cr6.eq) goto loc_82394E9C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82394e98
	if (!ctx.cr6.eq) goto loc_82394E98;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82395330
	ctx.lr = 0x82394E74;
	sub_82395330(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82394E98:
	// bl 0x82395a28
	ctx.lr = 0x82394E9C;
	sub_82395A28(ctx, base);
loc_82394E9C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82394eec
	if (!ctx.cr6.lt) goto loc_82394EEC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395330
	ctx.lr = 0x82394EC8;
	sub_82395330(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82394EEC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82394F08"))) PPC_WEAK_FUNC(sub_82394F08);
PPC_FUNC_IMPL(__imp__sub_82394F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82394F10;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394f70
	if (ctx.cr6.eq) goto loc_82394F70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x822f2020
	ctx.lr = 0x82394F3C;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82394F48;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r10,5696
	ctx.r30.s64 = ctx.r10.s64 + 5696;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x822f1f00
	ctx.lr = 0x82394F5C;
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x82394F68;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x82394F70;
	sub_82171810(ctx, base);
loc_82394F70:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x82413ca8
	ctx.lr = 0x82394F7C;
	sub_82413CA8(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,81(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394f94
	if (ctx.cr6.eq) goto loc_82394F94;
	// lwz r27,8(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82394fbc
	goto loc_82394FBC;
loc_82394F94:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82394fac
	if (ctx.cr6.eq) goto loc_82394FAC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// b 0x82394fbc
	goto loc_82394FBC;
loc_82394FAC:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x823950b4
	if (!ctx.cr6.eq) goto loc_823950B4;
loc_82394FBC:
	// lbz r11,81(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 81);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394fd0
	if (!ctx.cr6.eq) goto loc_82394FD0;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
loc_82394FD0:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r28,r11,30344
	ctx.r28.s64 = ctx.r11.s64 + 30344;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82394ff0
	if (!ctx.cr6.eq) goto loc_82394FF0;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x82395008
	goto loc_82395008;
loc_82394FF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82395004
	if (!ctx.cr6.eq) goto loc_82395004;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82395008
	goto loc_82395008;
loc_82395004:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_82395008:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8239505c
	if (!ctx.cr6.eq) goto loc_8239505C;
	// lbz r11,81(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239502c
	if (ctx.cr6.eq) goto loc_8239502C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82395054
	goto loc_82395054;
loc_8239502C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82395054
	if (!ctx.cr6.eq) goto loc_82395054;
loc_82395040:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82395040
	if (ctx.cr6.eq) goto loc_82395040;
loc_82395054:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8239505C:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82395150
	if (!ctx.cr6.eq) goto loc_82395150;
	// lbz r11,81(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395084
	if (ctx.cr6.eq) goto loc_82395084;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82395150
	goto loc_82395150;
loc_82395084:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r8,81(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823950ac
	if (!ctx.cr6.eq) goto loc_823950AC;
loc_82395098:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,81(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82395098
	if (ctx.cr6.eq) goto loc_82395098;
loc_823950AC:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82395150
	goto loc_82395150;
loc_823950B4:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823950d4
	if (!ctx.cr6.eq) goto loc_823950D4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x823950fc
	goto loc_823950FC;
loc_823950D4:
	// lbz r10,81(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 81);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823950e8
	if (!ctx.cr6.eq) goto loc_823950E8;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
loc_823950E8:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_823950FC:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r28,r10,30344
	ctx.r28.s64 = ctx.r10.s64 + 30344;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8239511c
	if (!ctx.cr6.eq) goto loc_8239511C;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82395138
	goto loc_82395138;
loc_8239511C:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82395134
	if (!ctx.cr6.eq) goto loc_82395134;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82395138
	goto loc_82395138;
loc_82395134:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82395138:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r9,80(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 80);
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// stb r9,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r9.u8);
	// stb r8,80(r26)
	PPC_STORE_U8(ctx.r26.u32 + 80, ctx.r8.u8);
loc_82395150:
	// lbz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823952f0
	if (!ctx.cr6.eq) goto loc_823952F0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823952ec
	if (ctx.cr6.eq) goto loc_823952EC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82395174:
	// lbz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823952ec
	if (!ctx.cr6.eq) goto loc_823952EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82395230
	if (!ctx.cr6.eq) goto loc_82395230;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823951b4
	if (!ctx.cr6.eq) goto loc_823951B4;
	// stb r29,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82395928
	ctx.lr = 0x823951B0;
	sub_82395928(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_823951B4:
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82395284
	if (!ctx.cr6.eq) goto loc_82395284;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823951e0
	if (!ctx.cr6.eq) goto loc_823951E0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82395280
	if (ctx.cr6.eq) goto loc_82395280;
loc_823951E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8239520c
	if (!ctx.cr6.eq) goto loc_8239520C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r29.u8);
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// bl 0x823959a8
	ctx.lr = 0x82395208;
	sub_823959A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8239520C:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r29.u8);
	// bl 0x82395928
	ctx.lr = 0x8239522C;
	sub_82395928(ctx, base);
	// b 0x823952ec
	goto loc_823952EC;
loc_82395230:
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82395254
	if (!ctx.cr6.eq) goto loc_82395254;
	// stb r29,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823959a8
	ctx.lr = 0x82395250;
	sub_823959A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82395254:
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82395284
	if (!ctx.cr6.eq) goto loc_82395284;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823952a0
	if (!ctx.cr6.eq) goto loc_823952A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823952a0
	if (!ctx.cr6.eq) goto loc_823952A0;
loc_82395280:
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
loc_82395284:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82395174
	if (!ctx.cr6.eq) goto loc_82395174;
	// b 0x823952ec
	goto loc_823952EC;
loc_823952A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823952cc
	if (!ctx.cr6.eq) goto loc_823952CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r29.u8);
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// bl 0x82395928
	ctx.lr = 0x823952C8;
	sub_82395928(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_823952CC:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r29.u8);
	// bl 0x823959a8
	ctx.lr = 0x823952EC;
	sub_823959A8(ctx, base);
loc_823952EC:
	// stb r29,80(r27)
	PPC_STORE_U8(ctx.r27.u32 + 80, ctx.r29.u8);
loc_823952F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8221be68
	ctx.lr = 0x823952F8;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395320
	if (ctx.cr6.eq) goto loc_82395320;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// std r10,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82395320:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82395330"))) PPC_WEAK_FUNC(sub_82395330);
PPC_FUNC_IMPL(__imp__sub_82395330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82395338;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// addi r30,r11,30344
	ctx.r30.s64 = ctx.r11.s64 + 30344;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823953ac
	if (ctx.cr6.lt) goto loc_823953AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// bl 0x822f2020
	ctx.lr = 0x82395378;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82395384;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r10,5696
	ctx.r29.s64 = ctx.r10.s64 + 5696;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x822f1f00
	ctx.lr = 0x82395398;
	sub_822F1F00(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x823953A4;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x823953AC;
	sub_82171810(ctx, base);
loc_823953AC:
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x823953B8;
	sub_8221F388(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823953ec
	if (ctx.cr6.eq) goto loc_823953EC;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x823953E4;
	sub_82CA2C60(ctx, base);
	// stb r25,80(r27)
	PPC_STORE_U8(ctx.r27.u32 + 80, ctx.r25.u8);
	// stb r25,81(r27)
	PPC_STORE_U8(ctx.r27.u32 + 81, ctx.r25.u8);
loc_823953EC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82395418
	if (!ctx.cr6.eq) goto loc_82395418;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82395458
	goto loc_82395458;
loc_82395418:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395444
	if (ctx.cr6.eq) goto loc_82395444;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8239545c
	if (!ctx.cr6.eq) goto loc_8239545C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8239545c
	goto loc_8239545C;
loc_82395444:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8239545c
	if (!ctx.cr6.eq) goto loc_8239545C;
loc_82395458:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_8239545C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82395584
	if (!ctx.cr6.eq) goto loc_82395584;
loc_82395478:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82395500
	if (!ctx.cr6.eq) goto loc_82395500;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823954c0
	if (!ctx.cr6.eq) goto loc_823954C0;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r29.u8);
	// stb r29,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r29.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,80(r7)
	PPC_STORE_U8(ctx.r7.u32 + 80, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82395570
	goto loc_82395570;
loc_823954C0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823954d8
	if (!ctx.cr6.eq) goto loc_823954D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82395928
	ctx.lr = 0x823954D8;
	sub_82395928(ctx, base);
loc_823954D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x823959a8
	ctx.lr = 0x823954FC;
	sub_823959A8(ctx, base);
	// b 0x82395570
	goto loc_82395570;
loc_82395500:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82395534
	if (!ctx.cr6.eq) goto loc_82395534;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r29.u8);
	// stb r29,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r29.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,80(r7)
	PPC_STORE_U8(ctx.r7.u32 + 80, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82395570
	goto loc_82395570;
loc_82395534:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8239554c
	if (!ctx.cr6.eq) goto loc_8239554C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823959a8
	ctx.lr = 0x8239554C;
	sub_823959A8(ctx, base);
loc_8239554C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82395928
	ctx.lr = 0x82395570;
	sub_82395928(ctx, base);
loc_82395570:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82395478
	if (ctx.cr6.eq) goto loc_82395478;
loc_82395584:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r29.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_823955A4"))) PPC_WEAK_FUNC(sub_823955A4);
PPC_FUNC_IMPL(__imp__sub_823955A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823955A8"))) PPC_WEAK_FUNC(sub_823955A8);
PPC_FUNC_IMPL(__imp__sub_823955A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x823955B0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r26,4(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r31,12
	ctx.r31.s64 = 12;
	// lwz r25,8(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823955e0
	if (!ctx.cr6.eq) goto loc_823955E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823955ec
	goto loc_823955EC;
loc_823955E0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r9,r31
	ctx.r9.s32 = ctx.r9.s32 / ctx.r31.s32;
loc_823955EC:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// subf r8,r11,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r11.s64;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// divw r11,r8,r31
	ctx.r11.s32 = ctx.r8.s32 / ctx.r31.s32;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bge cr6,0x82395618
	if (!ctx.cr6.lt) goto loc_82395618;
	// bl 0x82a97648
	ctx.lr = 0x82395610;
	sub_82A97648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82395618:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82395750
	if (!ctx.cr6.lt) goto loc_82395750;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239563c
	if (ctx.cr6.lt) goto loc_8239563C;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8239563C:
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82395648
	if (!ctx.cr6.lt) goto loc_82395648;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_82395648:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264efe0
	ctx.lr = 0x82395654;
	sub_8264EFE0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8239569c
	if (ctx.cr6.eq) goto loc_8239569C;
loc_8239566C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239568c
	if (ctx.cr6.eq) goto loc_8239568C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_8239568C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8239566c
	if (!ctx.cr6.eq) goto loc_8239566C;
loc_8239569C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823956b0
	if (ctx.cr6.eq) goto loc_823956B0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_823956B0:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823956fc
	if (ctx.cr6.eq) goto loc_823956FC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_823956CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823956ec
	if (ctx.cr6.eq) goto loc_823956EC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_823956EC:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823956cc
	if (!ctx.cr6.eq) goto loc_823956CC;
loc_823956FC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r11,r10,r31
	ctx.r11.s32 = ctx.r10.s32 / ctx.r31.s32;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x8239571c
	if (ctx.cr6.eq) goto loc_8239571C;
	// bl 0x8221be68
	ctx.lr = 0x8239571C;
	sub_8221BE68(ctx, base);
loc_8239571C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82395750:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r9,r10,r31
	ctx.r9.s32 = ctx.r10.s32 / ctx.r31.s32;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x82395814
	if (!ctx.cr6.lt) goto loc_82395814;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823957a4
	if (ctx.cr6.eq) goto loc_823957A4;
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
loc_82395774:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395794
	if (ctx.cr6.eq) goto loc_82395794;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
loc_82395794:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82395774
	if (!ctx.cr6.eq) goto loc_82395774;
loc_823957A4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r31
	ctx.r8.s32 = ctx.r9.s32 / ctx.r31.s32;
	// subfic r9,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r8.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823957dc
	if (ctx.cr6.eq) goto loc_823957DC;
loc_823957BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823957d0
	if (ctx.cr6.eq) goto loc_823957D0;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r26,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
loc_823957D0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x823957bc
	if (!ctx.cr0.eq) goto loc_823957BC;
loc_823957DC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823958b4
	if (ctx.cr6.eq) goto loc_823958B4;
loc_823957F4:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823957f4
	if (!ctx.cr6.eq) goto loc_823957F4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82395814:
	// addi r10,r7,-12
	ctx.r10.s64 = ctx.r7.s64 + -12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82395858
	if (ctx.cr6.eq) goto loc_82395858;
loc_82395828:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82395848
	if (ctx.cr6.eq) goto loc_82395848;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
loc_82395848:
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82395828
	if (!ctx.cr6.eq) goto loc_82395828;
loc_82395858:
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82395890
	if (ctx.cr6.eq) goto loc_82395890;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
loc_82395868:
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// bne cr6,0x82395868
	if (!ctx.cr6.eq) goto loc_82395868;
loc_82395890:
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823958b4
	if (ctx.cr6.eq) goto loc_823958B4;
loc_8239589C:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8239589c
	if (!ctx.cr6.eq) goto loc_8239589C;
loc_823958B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_823958BC"))) PPC_WEAK_FUNC(sub_823958BC);
PPC_FUNC_IMPL(__imp__sub_823958BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823958C0"))) PPC_WEAK_FUNC(sub_823958C0);
PPC_FUNC_IMPL(__imp__sub_823958C0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239590c
	if (!ctx.cr6.eq) goto loc_8239590C;
loc_823958E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823958c0
	ctx.lr = 0x823958F4;
	sub_823958C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x82395900;
	sub_8221BE68(ctx, base);
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823958e8
	if (ctx.cr6.eq) goto loc_823958E8;
loc_8239590C:
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

__attribute__((alias("__imp__sub_82395924"))) PPC_WEAK_FUNC(sub_82395924);
PPC_FUNC_IMPL(__imp__sub_82395924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395928"))) PPC_WEAK_FUNC(sub_82395928);
PPC_FUNC_IMPL(__imp__sub_82395928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82395948
	if (!ctx.cr6.eq) goto loc_82395948;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82395948:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r10,30344
	ctx.r8.s64 = ctx.r10.s64 + 30344;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82395978
	if (!ctx.cr6.eq) goto loc_82395978;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82395978:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82395998
	if (!ctx.cr6.eq) goto loc_82395998;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82395998:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823959A8"))) PPC_WEAK_FUNC(sub_823959A8);
PPC_FUNC_IMPL(__imp__sub_823959A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823959c8
	if (!ctx.cr6.eq) goto loc_823959C8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_823959C8:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r10,30344
	ctx.r8.s64 = ctx.r10.s64 + 30344;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823959f8
	if (!ctx.cr6.eq) goto loc_823959F8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_823959F8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82395a18
	if (!ctx.cr6.eq) goto loc_82395A18;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82395A18:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82395A28"))) PPC_WEAK_FUNC(sub_82395A28);
PPC_FUNC_IMPL(__imp__sub_82395A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395a38
	if (!ctx.cr6.eq) goto loc_82395A38;
	// twi 31,r0,22
loc_82395A38:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395a64
	if (ctx.cr6.eq) goto loc_82395A64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82395A5C:
	// twi 31,r0,22
	// blr 
	return;
loc_82395A64:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82395aa0
	if (!ctx.cr6.eq) goto loc_82395AA0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82395a98
	if (!ctx.cr6.eq) goto loc_82395A98;
loc_82395A84:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82395a84
	if (ctx.cr6.eq) goto loc_82395A84;
loc_82395A98:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82395AA0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82395ad8
	if (!ctx.cr6.eq) goto loc_82395AD8;
loc_82395AB0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82395ad8
	if (!ctx.cr6.eq) goto loc_82395AD8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395ab0
	if (ctx.cr6.eq) goto loc_82395AB0;
loc_82395AD8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82395a5c
	if (!ctx.cr6.eq) goto loc_82395A5C;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82395AF0"))) PPC_WEAK_FUNC(sub_82395AF0);
PPC_FUNC_IMPL(__imp__sub_82395AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82395AF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82395bd8
	if (!ctx.cr6.gt) goto loc_82395BD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82395B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82395b44
	if (ctx.cr6.eq) goto loc_82395B44;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82395b50
	goto loc_82395B50;
loc_82395B44:
	// rldicl r11,r30,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82395B50:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82c816d0
	ctx.lr = 0x82395B64;
	sub_82C816D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,16304
	ctx.r10.s64 = ctx.r11.s64 + 16304;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x82395B80;
	sub_82C81690(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,16320
	ctx.r8.s64 = ctx.r9.s64 + 16320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82325fc8
	ctx.lr = 0x82395B9C;
	sub_82325FC8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82395BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82317e50
	ctx.lr = 0x82395BC8;
	sub_82317E50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x82395BD0;
	sub_829CE870(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ce870
	ctx.lr = 0x82395BD8;
	sub_829CE870(ctx, base);
loc_82395BD8:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82395BE0"))) PPC_WEAK_FUNC(sub_82395BE0);
PPC_FUNC_IMPL(__imp__sub_82395BE0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82395C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82395c4c
	if (ctx.cr6.eq) goto loc_82395C4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82395C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82395C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82395c50
	goto loc_82395C50;
loc_82395C4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82395C50:
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

__attribute__((alias("__imp__sub_82395C68"))) PPC_WEAK_FUNC(sub_82395C68);
PPC_FUNC_IMPL(__imp__sub_82395C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82395C70;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395cf4
	if (ctx.cr6.eq) goto loc_82395CF4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x82395CA0;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x82395CAC;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,31312
	ctx.r4.s64 = ctx.r10.s64 + 31312;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82395CC8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x82395CD8;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82395CE8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_82395CF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82395CFC"))) PPC_WEAK_FUNC(sub_82395CFC);
PPC_FUNC_IMPL(__imp__sub_82395CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395D00"))) PPC_WEAK_FUNC(sub_82395D00);
PPC_FUNC_IMPL(__imp__sub_82395D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82395D08;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// std r26,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r26.u64);
	// li r28,12
	ctx.r28.s64 = 12;
	// std r24,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r24.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82395ddc
	if (!ctx.cr6.gt) goto loc_82395DDC;
loc_82395D40:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82395dfc
	if (!ctx.cr6.gt) goto loc_82395DFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395ef8
	ctx.lr = 0x82395D5C;
	sub_82395EF8(ctx, base);
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r9,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r9.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// subf r6,r31,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r31.s64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// divw r5,r7,r28
	ctx.r5.s32 = ctx.r7.s32 / ctx.r28.s32;
	// divw r4,r6,r28
	ctx.r4.s32 = ctx.r6.s32 / ctx.r28.s32;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bge cr6,0x82395db4
	if (!ctx.cr6.lt) goto loc_82395DB4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82395d00
	ctx.lr = 0x82395DA4;
	sub_82395D00(ctx, base);
	// ld r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r26,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r26.u64);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// b 0x82395dcc
	goto loc_82395DCC;
loc_82395DB4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82395d00
	ctx.lr = 0x82395DC0;
	sub_82395D00(ctx, base);
	// ld r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r24,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r24.u64);
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_82395DCC:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x82395d40
	if (ctx.cr6.gt) goto loc_82395D40;
loc_82395DDC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82395df4
	if (!ctx.cr6.gt) goto loc_82395DF4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b14718
	ctx.lr = 0x82395DF4;
	sub_82B14718(ctx, base);
loc_82395DF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82395DFC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82395ddc
	if (!ctx.cr6.gt) goto loc_82395DDC;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// divw r25,r11,r28
	ctx.r25.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x82395e64
	if (!ctx.cr6.gt) goto loc_82395E64;
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82395e64
	if (!ctx.cr0.gt) goto loc_82395E64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82395E30:
	// addi r29,r29,-12
	ctx.r29.s64 = ctx.r29.s64 + -12;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826188e0
	ctx.lr = 0x82395E5C;
	sub_826188E0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82395e30
	if (ctx.cr6.gt) goto loc_82395E30;
loc_82395E64:
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x82395df4
	if (!ctx.cr6.gt) goto loc_82395DF4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82395ed8
	if (!ctx.cr6.gt) goto loc_82395ED8;
loc_82395E80:
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r7,r31,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r7,r28
	ctx.r5.s32 = ctx.r7.s32 / ctx.r28.s32;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// bl 0x826188e0
	ctx.lr = 0x82395ED8;
	sub_826188E0(ctx, base);
loc_82395ED8:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82395e80
	if (ctx.cr6.gt) goto loc_82395E80;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82395EF4"))) PPC_WEAK_FUNC(sub_82395EF4);
PPC_FUNC_IMPL(__imp__sub_82395EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395EF8"))) PPC_WEAK_FUNC(sub_82395EF8);
PPC_FUNC_IMPL(__imp__sub_82395EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82395F00;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r28,-12
	ctx.r10.s64 = ctx.r28.s64 + -12;
	// subf r9,r29,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r29.s64;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ld r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823966f8
	ctx.lr = 0x82395F64;
	sub_823966F8(ctx, base);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// bge cr6,0x82395fdc
	if (!ctx.cr6.lt) goto loc_82395FDC;
loc_82395F88:
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82395fa0
	if (ctx.cr6.lt) goto loc_82395FA0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82395FA0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82395fdc
	if (!ctx.cr6.eq) goto loc_82395FDC;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82395fc0
	if (ctx.cr6.lt) goto loc_82395FC0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82395FC0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82395fdc
	if (!ctx.cr6.eq) goto loc_82395FDC;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82395f88
	if (ctx.cr6.lt) goto loc_82395F88;
loc_82395FDC:
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82396038
	if (!ctx.cr6.lt) goto loc_82396038;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82395FEC:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82396000
	if (ctx.cr6.lt) goto loc_82396000;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82396000:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82396038
	if (!ctx.cr6.eq) goto loc_82396038;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8239601c
	if (ctx.cr6.lt) goto loc_8239601C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239601C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82396038
	if (!ctx.cr6.eq) goto loc_82396038;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82395fec
	if (ctx.cr6.lt) goto loc_82395FEC;
loc_82396038:
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82396050:
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823960f4
	if (!ctx.cr6.lt) goto loc_823960F4;
loc_82396058:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82396070
	if (ctx.cr6.lt) goto loc_82396070;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82396070:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823960e4
	if (!ctx.cr6.eq) goto loc_823960E4;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8239608c
	if (ctx.cr6.lt) goto loc_8239608C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239608C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823960f4
	if (!ctx.cr6.eq) goto loc_823960F4;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
loc_823960E4:
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82396058
	if (ctx.cr6.lt) goto loc_82396058;
loc_823960F4:
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82396194
	if (!ctx.cr6.gt) goto loc_82396194;
loc_823960FC:
	// lwz r9,-12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	// addi r10,r4,-12
	ctx.r10.s64 = ctx.r4.s64 + -12;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x82396118
	if (ctx.cr6.lt) goto loc_82396118;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82396118:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82396184
	if (!ctx.cr6.eq) goto loc_82396184;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x82396138
	if (ctx.cr6.lt) goto loc_82396138;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82396138:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82396190
	if (!ctx.cr6.eq) goto loc_82396190;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_82396184:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823960fc
	if (ctx.cr6.lt) goto loc_823960FC;
loc_82396190:
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
loc_82396194:
	// bne cr6,0x8239624c
	if (!ctx.cr6.eq) goto loc_8239624C;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82396334
	if (ctx.cr6.eq) goto loc_82396334;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823961e0
	if (ctx.cr6.eq) goto loc_823961E0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
loc_823961E0:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// b 0x82396050
	goto loc_82396050;
loc_8239624C:
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// addi r4,r4,-12
	ctx.r4.s64 = ctx.r4.s64 + -12;
	// bne cr6,0x823962e4
	if (!ctx.cr6.eq) goto loc_823962E4;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823962a0
	if (ctx.cr6.eq) goto loc_823962A0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_823962A0:
	// addi r5,r5,-12
	ctx.r5.s64 = ctx.r5.s64 + -12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// b 0x82396050
	goto loc_82396050;
loc_823962E4:
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// b 0x82396050
	goto loc_82396050;
loc_82396334:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// std r10,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82396350"))) PPC_WEAK_FUNC(sub_82396350);
PPC_FUNC_IMPL(__imp__sub_82396350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82396358;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ld r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82396820
	ctx.lr = 0x823963B0;
	sub_82396820(ctx, base);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// bge cr6,0x82396428
	if (!ctx.cr6.lt) goto loc_82396428;
loc_823963D4:
	// lwz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x823963ec
	if (ctx.cr6.lt) goto loc_823963EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823963EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396428
	if (!ctx.cr6.eq) goto loc_82396428;
	// lwz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8239640c
	if (ctx.cr6.lt) goto loc_8239640C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239640C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396428
	if (!ctx.cr6.eq) goto loc_82396428;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823963d4
	if (ctx.cr6.lt) goto loc_823963D4;
loc_82396428:
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82396484
	if (!ctx.cr6.lt) goto loc_82396484;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82396438:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239644c
	if (ctx.cr6.lt) goto loc_8239644C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239644C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396484
	if (!ctx.cr6.eq) goto loc_82396484;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82396468
	if (ctx.cr6.lt) goto loc_82396468;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82396468:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396484
	if (!ctx.cr6.eq) goto loc_82396484;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82396438
	if (ctx.cr6.lt) goto loc_82396438;
loc_82396484:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_8239649C:
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82396528
	if (!ctx.cr6.lt) goto loc_82396528;
loc_823964A4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823964bc
	if (ctx.cr6.lt) goto loc_823964BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823964BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396518
	if (!ctx.cr6.eq) goto loc_82396518;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x823964d8
	if (ctx.cr6.lt) goto loc_823964D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823964D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396528
	if (!ctx.cr6.eq) goto loc_82396528;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
loc_82396518:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823964a4
	if (ctx.cr6.lt) goto loc_823964A4;
loc_82396528:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x823965b4
	if (!ctx.cr6.gt) goto loc_823965B4;
loc_82396530:
	// lwz r10,-8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8239654c
	if (ctx.cr6.lt) goto loc_8239654C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239654C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823965a4
	if (!ctx.cr6.eq) goto loc_823965A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8239656c
	if (ctx.cr6.lt) goto loc_8239656C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239656C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823965b0
	if (!ctx.cr6.eq) goto loc_823965B0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_823965A4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82396530
	if (ctx.cr6.lt) goto loc_82396530;
loc_823965B0:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
loc_823965B4:
	// bne cr6,0x8239663c
	if (!ctx.cr6.eq) goto loc_8239663C;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823966dc
	if (ctx.cr6.eq) goto loc_823966DC;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823965e8
	if (ctx.cr6.eq) goto loc_823965E8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
loc_823965E8:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8239649c
	goto loc_8239649C;
loc_8239663C:
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// bne cr6,0x823966a4
	if (!ctx.cr6.eq) goto loc_823966A4;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82396678
	if (ctx.cr6.eq) goto loc_82396678;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
loc_82396678:
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// b 0x8239649c
	goto loc_8239649C;
loc_823966A4:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// b 0x8239649c
	goto loc_8239649C;
loc_823966DC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// std r10,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_823966F8"))) PPC_WEAK_FUNC(sub_823966F8);
PPC_FUNC_IMPL(__imp__sub_823966F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82396700;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// li r11,12
	ctx.r11.s64 = 12;
	// std r28,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r28.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r24,212(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r9,r10,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r10.s64;
	// divw r11,r9,r11
	ctx.r11.s32 = ctx.r9.s32 / ctx.r11.s32;
	// std r29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r29.u64);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x8239680c
	if (!ctx.cr6.gt) goto loc_8239680C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r5,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r4,r25,r10
	ctx.r4.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82396938
	ctx.lr = 0x82396784;
	sub_82396938(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82396938
	ctx.lr = 0x823967B4;
	sub_82396938(ctx, base);
	// subf r10,r25,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r25.s64;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// subf r31,r31,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r31.s64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82396938
	ctx.lr = 0x823967E0;
	sub_82396938(ctx, base);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82396938
	ctx.lr = 0x82396804;
	sub_82396938(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_8239680C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82396938
	ctx.lr = 0x82396818;
	sub_82396938(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82396820"))) PPC_WEAK_FUNC(sub_82396820);
PPC_FUNC_IMPL(__imp__sub_82396820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82396828;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r28,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r28.u64);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r24,212(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r11,r10,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// std r29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r29.u64);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x82396920
	if (!ctx.cr6.gt) goto loc_82396920;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r11,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82455ba0
	ctx.lr = 0x82396898;
	sub_82455BA0(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82455ba0
	ctx.lr = 0x823968C8;
	sub_82455BA0(ctx, base);
	// subf r4,r25,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r25.s64;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// subf r31,r31,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r31.s64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82455ba0
	ctx.lr = 0x823968F4;
	sub_82455BA0(ctx, base);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82455ba0
	ctx.lr = 0x82396918;
	sub_82455BA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82396920:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82455ba0
	ctx.lr = 0x8239692C;
	sub_82455BA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82396934"))) PPC_WEAK_FUNC(sub_82396934);
PPC_FUNC_IMPL(__imp__sub_82396934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396938"))) PPC_WEAK_FUNC(sub_82396938);
PPC_FUNC_IMPL(__imp__sub_82396938) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x82396964
	if (ctx.cr6.lt) goto loc_82396964;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82396964:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823969a8
	if (ctx.cr6.eq) goto loc_823969A8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_823969A8:
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x823969c4
	if (ctx.cr6.lt) goto loc_823969C4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_823969C4:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82396a08
	if (ctx.cr6.eq) goto loc_82396A08;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82396A08:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x82396a20
	if (ctx.cr6.lt) goto loc_82396A20;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82396A20:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396A68"))) PPC_WEAK_FUNC(sub_82396A68);
PPC_FUNC_IMPL(__imp__sub_82396A68) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82396A70;
	sub_82CA2BDC(ctx, base);
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r26,12
	ctx.r26.s64 = 12;
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r4,36(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r31,20(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r9,r31,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r31.s64;
	// divw. r6,r10,r26
	ctx.r6.s32 = ctx.r10.s32 / ctx.r26.s32;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// divw r9,r9,r26
	ctx.r9.s32 = ctx.r9.s32 / ctx.r26.s32;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// beq 0x82396ac0
	if (ctx.cr0.eq) goto loc_82396AC0;
loc_82396AA8:
	// divw r10,r5,r11
	ctx.r10.s32 = ctx.r5.s32 / ctx.r11.s32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r8,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82396aa8
	if (!ctx.cr0.eq) goto loc_82396AA8;
loc_82396AC0:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82396be8
	if (!ctx.cr6.lt) goto loc_82396BE8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82396be8
	if (!ctx.cr6.gt) goto loc_82396BE8;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82396AEC:
	// std r3,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r3.u64);
	// add r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r7,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r7.u32);
	// ld r10,-104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r27,8(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// std r10,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r10.u64);
	// bne cr6,0x82396b1c
	if (!ctx.cr6.eq) goto loc_82396B1C;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// b 0x82396b30
	goto loc_82396B30;
loc_82396B1C:
	// std r10,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r10.u64);
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// ld r11,-112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r11,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r11.u64);
loc_82396B30:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82396bcc
	if (ctx.cr6.eq) goto loc_82396BCC;
loc_82396B44:
	// lwz r9,-100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / ctx.r26.s32;
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r25.u32);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r25.u32);
	// bge cr6,0x82396b90
	if (!ctx.cr6.lt) goto loc_82396B90;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// std r8,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// addi r10,r1,-88
	ctx.r10.s64 = ctx.r1.s64 + -88;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// ld r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r9,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r9.u64);
	// b 0x82396bb8
	goto loc_82396BB8;
loc_82396B90:
	// std r3,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r3.u64);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r9.u32);
	// ld r8,-112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r8.u64);
loc_82396BB8:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82396b44
	if (!ctx.cr6.eq) goto loc_82396B44;
loc_82396BCC:
	// lwz r11,-100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,-12
	ctx.r7.s64 = ctx.r7.s64 + -12;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// bgt 0x82396aec
	if (ctx.cr0.gt) goto loc_82396AEC;
loc_82396BE8:
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82396BEC"))) PPC_WEAK_FUNC(sub_82396BEC);
PPC_FUNC_IMPL(__imp__sub_82396BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396BF0"))) PPC_WEAK_FUNC(sub_82396BF0);
PPC_FUNC_IMPL(__imp__sub_82396BF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,275
	ctx.r3.s64 = 275;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396BF8"))) PPC_WEAK_FUNC(sub_82396BF8);
PPC_FUNC_IMPL(__imp__sub_82396BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,273
	ctx.r3.s64 = 273;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396C00"))) PPC_WEAK_FUNC(sub_82396C00);
PPC_FUNC_IMPL(__imp__sub_82396C00) {
	PPC_FUNC_PROLOGUE();
	// li r3,185
	ctx.r3.s64 = 185;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396C08"))) PPC_WEAK_FUNC(sub_82396C08);
PPC_FUNC_IMPL(__imp__sub_82396C08) {
	PPC_FUNC_PROLOGUE();
	// li r3,258
	ctx.r3.s64 = 258;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396C10"))) PPC_WEAK_FUNC(sub_82396C10);
PPC_FUNC_IMPL(__imp__sub_82396C10) {
	PPC_FUNC_PROLOGUE();
	// li r3,95
	ctx.r3.s64 = 95;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396C18"))) PPC_WEAK_FUNC(sub_82396C18);
PPC_FUNC_IMPL(__imp__sub_82396C18) {
	PPC_FUNC_PROLOGUE();
	// li r3,114
	ctx.r3.s64 = 114;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396C20"))) PPC_WEAK_FUNC(sub_82396C20);
PPC_FUNC_IMPL(__imp__sub_82396C20) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r8,80
	ctx.r8.s64 = 80;
	// addi r6,r9,-31008
	ctx.r6.s64 = ctx.r9.s64 + -31008;
	// li r7,96
	ctx.r7.s64 = 96;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// li r6,112
	ctx.r6.s64 = 112;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// li r30,128
	ctx.r30.s64 = 128;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82396CD4;
	sub_82CA3190(ctx, base);
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

__attribute__((alias("__imp__sub_82396CF0"))) PPC_WEAK_FUNC(sub_82396CF0);
PPC_FUNC_IMPL(__imp__sub_82396CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396D1C"))) PPC_WEAK_FUNC(sub_82396D1C);
PPC_FUNC_IMPL(__imp__sub_82396D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396D20"))) PPC_WEAK_FUNC(sub_82396D20);
PPC_FUNC_IMPL(__imp__sub_82396D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r11.u8);
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r11.u8);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396D44"))) PPC_WEAK_FUNC(sub_82396D44);
PPC_FUNC_IMPL(__imp__sub_82396D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396D48"))) PPC_WEAK_FUNC(sub_82396D48);
PPC_FUNC_IMPL(__imp__sub_82396D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396D90"))) PPC_WEAK_FUNC(sub_82396D90);
PPC_FUNC_IMPL(__imp__sub_82396D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82396D98;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stb r29,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r29.u8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x8221f388
	ctx.lr = 0x82396DCC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396e04
	if (ctx.cr6.eq) goto loc_82396E04;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r10,20576
	ctx.r7.s64 = ctx.r10.s64 + 20576;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
loc_82396E04:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8221be68
	ctx.lr = 0x82396E0C;
	sub_8221BE68(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82396E18"))) PPC_WEAK_FUNC(sub_82396E18);
PPC_FUNC_IMPL(__imp__sub_82396E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396E58"))) PPC_WEAK_FUNC(sub_82396E58);
PPC_FUNC_IMPL(__imp__sub_82396E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82396E60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stb r29,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r29.u8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x8221f388
	ctx.lr = 0x82396E94;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396ec4
	if (ctx.cr6.eq) goto loc_82396EC4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r10,20584
	ctx.r7.s64 = ctx.r10.s64 + 20584;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_82396EC4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8221be68
	ctx.lr = 0x82396ECC;
	sub_8221BE68(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82396ED8"))) PPC_WEAK_FUNC(sub_82396ED8);
PPC_FUNC_IMPL(__imp__sub_82396ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82396EE0;
	sub_82CA2BEC(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-30960
	ctx.r7.s64 = ctx.r11.s64 + -30960;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r5,r6,28344
	ctx.r5.s64 = ctx.r6.s64 + 28344;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82396F04:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82396f04
	if (!ctx.cr0.eq) goto loc_82396F04;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// addi r5,r1,-40
	ctx.r5.s64 = ctx.r1.s64 + -40;
	// addi r31,r1,-48
	ctx.r31.s64 = ctx.r1.s64 + -48;
	// lfs f0,-27468(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,-40
	ctx.r4.s64 = ctx.r1.s64 + -40;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r9,r1,-44
	ctx.r9.s64 = ctx.r1.s64 + -44;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-44
	ctx.r8.s64 = ctx.r1.s64 + -44;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r6,r1,-44
	ctx.r6.s64 = ctx.r1.s64 + -44;
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// li r30,80
	ctx.r30.s64 = 80;
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r29,112
	ctx.r29.s64 = 112;
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lvlx v8,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// vrlimi128 v7,v11,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// lvlx v10,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vrlimi128 v13,v9,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// stvx128 v7,r3,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stvx128 v13,r3,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
loc_82396FC4:
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82396fc4
	if (!ctx.cr0.eq) goto loc_82396FC4;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82396FDC"))) PPC_WEAK_FUNC(sub_82396FDC);
PPC_FUNC_IMPL(__imp__sub_82396FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396FE0"))) PPC_WEAK_FUNC(sub_82396FE0);
PPC_FUNC_IMPL(__imp__sub_82396FE0) {
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82214f08
	ctx.lr = 0x82397004;
	sub_82214F08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,11192
	ctx.r9.s64 = ctx.r11.s64 + 11192;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82397028
	if (ctx.cr6.eq) goto loc_82397028;
	// bl 0x8221be68
	ctx.lr = 0x82397024;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82397028:
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

__attribute__((alias("__imp__sub_82397040"))) PPC_WEAK_FUNC(sub_82397040);
PPC_FUNC_IMPL(__imp__sub_82397040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82397048;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830418b0
	ctx.lr = 0x8239705C;
	sub_830418B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397348
	ctx.lr = 0x8239706C;
	sub_82397348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830418b0
	ctx.lr = 0x82397074;
	sub_830418B0(ctx, base);
	// subf r31,r29,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r29.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8228a610
	ctx.lr = 0x82397084;
	sub_8228A610(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd3f8
	ctx.lr = 0x82397098;
	sub_82CBD3F8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823970B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd3d0
	ctx.lr = 0x823970CC;
	sub_82CBD3D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8221f388
	ctx.lr = 0x823970D4;
	sub_8221F388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c816d0
	ctx.lr = 0x823970E4;
	sub_82C816D0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823970F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82c816e0
	ctx.lr = 0x82397108;
	sub_82C816E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82cbd3d0
	ctx.lr = 0x82397120;
	sub_82CBD3D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cbd4b8
	ctx.lr = 0x82397128;
	sub_82CBD4B8(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,112(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82397144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82397160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x82397170;
	sub_82C81690(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r8,16320
	ctx.r7.s64 = ctx.r8.s64 + 16320;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x8228a610
	ctx.lr = 0x82397188;
	sub_8228A610(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823971A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c816e0
	ctx.lr = 0x823971AC;
	sub_82C816E0(ctx, base);
	// bl 0x8221be68
	ctx.lr = 0x823971B0;
	sub_8221BE68(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x823971B8;
	sub_829CE870(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ce870
	ctx.lr = 0x823971C0;
	sub_829CE870(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_823971C8"))) PPC_WEAK_FUNC(sub_823971C8);
PPC_FUNC_IMPL(__imp__sub_823971C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x823971D0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82397204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82397220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8221f388
	ctx.lr = 0x82397228;
	sub_8221F388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c816d0
	ctx.lr = 0x82397238;
	sub_82C816D0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cbd508
	ctx.lr = 0x8239724C;
	sub_82CBD508(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82397264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830418b0
	ctx.lr = 0x82397270;
	sub_830418B0(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// bl 0x82c816e0
	ctx.lr = 0x82397280;
	sub_82C816E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82cbd490
	ctx.lr = 0x82397298;
	sub_82CBD490(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82cbd4b8
	ctx.lr = 0x823972A0;
	sub_82CBD4B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830418b0
	ctx.lr = 0x823972A8;
	sub_830418B0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228a610
	ctx.lr = 0x823972B8;
	sub_8228A610(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c81690
	ctx.lr = 0x823972C8;
	sub_82C81690(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r3,16320
	ctx.r11.s64 = ctx.r3.s64 + 16320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8232dbb8
	ctx.lr = 0x823972E0;
	sub_8232DBB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c816e0
	ctx.lr = 0x823972E8;
	sub_82C816E0(ctx, base);
	// bl 0x8221be68
	ctx.lr = 0x823972EC;
	sub_8221BE68(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x829ce870
	ctx.lr = 0x823972F4;
	sub_829CE870(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ce870
	ctx.lr = 0x823972FC;
	sub_829CE870(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82397304"))) PPC_WEAK_FUNC(sub_82397304);
PPC_FUNC_IMPL(__imp__sub_82397304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397308"))) PPC_WEAK_FUNC(sub_82397308);
PPC_FUNC_IMPL(__imp__sub_82397308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,-30852
	ctx.r6.s64 = ctx.r9.s64 + -30852;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stvx128 v0,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397348"))) PPC_WEAK_FUNC(sub_82397348);
PPC_FUNC_IMPL(__imp__sub_82397348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82397350;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397374
	if (!ctx.cr6.eq) goto loc_82397374;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82397380
	goto loc_82397380;
loc_82397374:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
loc_82397380:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823973A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c4da10
	ctx.lr = 0x823973A8;
	sub_82C4DA10(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232ece8
	ctx.lr = 0x823973C0;
	sub_8232ECE8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823973d4
	if (!ctx.cr6.gt) goto loc_823973D4;
	// twi 31,r0,22
loc_823973D4:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r27,r10,16320
	ctx.r27.s64 = ctx.r10.s64 + 16320;
loc_823973DC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823973f0
	if (!ctx.cr6.gt) goto loc_823973F0;
	// twi 31,r0,22
loc_823973F0:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823973fc
	if (ctx.cr6.eq) goto loc_823973FC;
	// twi 31,r0,22
loc_823973FC:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823974e0
	if (ctx.cr6.eq) goto loc_823974E0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82397410
	if (ctx.cr6.lt) goto loc_82397410;
	// twi 31,r0,22
loc_82397410:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239742C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82397440
	if (ctx.cr6.lt) goto loc_82397440;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82397440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a46de8
	ctx.lr = 0x8239744C;
	sub_82A46DE8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82397474
	if (!ctx.cr6.lt) goto loc_82397474;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82397468
	if (ctx.cr6.lt) goto loc_82397468;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82397468:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d4190
	ctx.lr = 0x82397474;
	sub_824D4190(ctx, base);
loc_82397474:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82397484
	if (ctx.cr6.lt) goto loc_82397484;
	// twi 31,r0,22
loc_82397484:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c81690
	ctx.lr = 0x82397494;
	sub_82C81690(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8228a610
	ctx.lr = 0x823974A4;
	sub_8228A610(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823974C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ce870
	ctx.lr = 0x823974C8;
	sub_829CE870(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823974d8
	if (ctx.cr6.lt) goto loc_823974D8;
	// twi 31,r0,22
loc_823974D8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x823973dc
	goto loc_823973DC;
loc_823974E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_823974E8"))) PPC_WEAK_FUNC(sub_823974E8);
PPC_FUNC_IMPL(__imp__sub_823974E8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30840
	ctx.r4.s64 = ctx.r11.s64 + -30840;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x8239750C;
	sub_8222CF18(ctx, base);
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

__attribute__((alias("__imp__sub_82397524"))) PPC_WEAK_FUNC(sub_82397524);
PPC_FUNC_IMPL(__imp__sub_82397524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397528"))) PPC_WEAK_FUNC(sub_82397528);
PPC_FUNC_IMPL(__imp__sub_82397528) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,771(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 771);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397530"))) PPC_WEAK_FUNC(sub_82397530);
PPC_FUNC_IMPL(__imp__sub_82397530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397538"))) PPC_WEAK_FUNC(sub_82397538);
PPC_FUNC_IMPL(__imp__sub_82397538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397540"))) PPC_WEAK_FUNC(sub_82397540);
PPC_FUNC_IMPL(__imp__sub_82397540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82397548;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82397564:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82397564
	if (!ctx.cr0.eq) goto loc_82397564;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8239758C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8239758c
	if (!ctx.cr0.eq) goto loc_8239758C;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
loc_823975B0:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwcx. r3,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823975b0
	if (!ctx.cr0.eq) goto loc_823975B0;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-20036
	ctx.r4.s64 = ctx.r10.s64 + -20036;
	// bl 0x82265160
	ctx.lr = 0x823975DC;
	sub_82265160(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r29,r9,3224
	ctx.r29.s64 = ctx.r9.s64 + 3224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82275368
	ctx.lr = 0x823975F0;
	sub_82275368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82275368
	ctx.lr = 0x823975FC;
	sub_82275368(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// addi r6,r8,-16800
	ctx.r6.s64 = ctx.r8.s64 + -16800;
	// stb r30,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r30.u8);
	// stb r7,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lfs f0,-16800(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16800);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,-10668(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -10668);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-10656(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -10656);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8100(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

