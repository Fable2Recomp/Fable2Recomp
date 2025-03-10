#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83258448"))) PPC_WEAK_FUNC(sub_83258448);
PPC_FUNC_IMPL(__imp__sub_83258448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7852
	ctx.r4.s64 = ctx.r11.s64 + 7852;
	// addi r3,r10,-28856
	ctx.r3.s64 = ctx.r10.s64 + -28856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325846C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17008
	ctx.r3.s64 = ctx.r9.s64 + 17008;
	// bl 0x82ca3700
	ctx.lr = 0x83258478;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258488"))) PPC_WEAK_FUNC(sub_83258488);
PPC_FUNC_IMPL(__imp__sub_83258488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,8932
	ctx.r4.s64 = ctx.r11.s64 + 8932;
	// addi r3,r10,-28852
	ctx.r3.s64 = ctx.r10.s64 + -28852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832584AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17120
	ctx.r3.s64 = ctx.r9.s64 + 17120;
	// bl 0x82ca3700
	ctx.lr = 0x832584B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832584C8"))) PPC_WEAK_FUNC(sub_832584C8);
PPC_FUNC_IMPL(__imp__sub_832584C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// addi r3,r10,-28848
	ctx.r3.s64 = ctx.r10.s64 + -28848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832584EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17136
	ctx.r3.s64 = ctx.r9.s64 + 17136;
	// bl 0x82ca3700
	ctx.lr = 0x832584F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258508"))) PPC_WEAK_FUNC(sub_83258508);
PPC_FUNC_IMPL(__imp__sub_83258508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,9000
	ctx.r4.s64 = ctx.r11.s64 + 9000;
	// addi r3,r10,-28844
	ctx.r3.s64 = ctx.r10.s64 + -28844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325852C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17152
	ctx.r3.s64 = ctx.r9.s64 + 17152;
	// bl 0x82ca3700
	ctx.lr = 0x83258538;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258548"))) PPC_WEAK_FUNC(sub_83258548);
PPC_FUNC_IMPL(__imp__sub_83258548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,12588
	ctx.r4.s64 = ctx.r11.s64 + 12588;
	// addi r3,r10,-28840
	ctx.r3.s64 = ctx.r10.s64 + -28840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325856C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17184
	ctx.r3.s64 = ctx.r9.s64 + 17184;
	// bl 0x82ca3700
	ctx.lr = 0x83258578;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258588"))) PPC_WEAK_FUNC(sub_83258588);
PPC_FUNC_IMPL(__imp__sub_83258588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,13808
	ctx.r4.s64 = ctx.r11.s64 + 13808;
	// addi r3,r10,-28836
	ctx.r3.s64 = ctx.r10.s64 + -28836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832585AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17200
	ctx.r3.s64 = ctx.r9.s64 + 17200;
	// bl 0x82ca3700
	ctx.lr = 0x832585B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832585C8"))) PPC_WEAK_FUNC(sub_832585C8);
PPC_FUNC_IMPL(__imp__sub_832585C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,13816
	ctx.r4.s64 = ctx.r11.s64 + 13816;
	// addi r3,r10,-28832
	ctx.r3.s64 = ctx.r10.s64 + -28832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832585EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17216
	ctx.r3.s64 = ctx.r9.s64 + 17216;
	// bl 0x82ca3700
	ctx.lr = 0x832585F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258608"))) PPC_WEAK_FUNC(sub_83258608);
PPC_FUNC_IMPL(__imp__sub_83258608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,13832
	ctx.r4.s64 = ctx.r11.s64 + 13832;
	// addi r3,r10,-28828
	ctx.r3.s64 = ctx.r10.s64 + -28828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325862C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17232
	ctx.r3.s64 = ctx.r9.s64 + 17232;
	// bl 0x82ca3700
	ctx.lr = 0x83258638;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258648"))) PPC_WEAK_FUNC(sub_83258648);
PPC_FUNC_IMPL(__imp__sub_83258648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8325865C;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8325866c
	if (ctx.cr6.eq) goto loc_8325866C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8325866C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258678
	if (ctx.cr0.eq) goto loc_83258678;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258678:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258684
	if (ctx.cr0.eq) goto loc_83258684;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258684:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-28824
	ctx.r8.s64 = ctx.r9.s64 + -28824;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r3,r7,17248
	ctx.r3.s64 = ctx.r7.s64 + 17248;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832586C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832586D8"))) PPC_WEAK_FUNC(sub_832586D8);
PPC_FUNC_IMPL(__imp__sub_832586D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22340
	ctx.r4.s64 = ctx.r11.s64 + 22340;
	// addi r3,r10,-28812
	ctx.r3.s64 = ctx.r10.s64 + -28812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832586FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17264
	ctx.r3.s64 = ctx.r9.s64 + 17264;
	// bl 0x82ca3700
	ctx.lr = 0x83258708;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258718"))) PPC_WEAK_FUNC(sub_83258718);
PPC_FUNC_IMPL(__imp__sub_83258718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22348
	ctx.r4.s64 = ctx.r11.s64 + 22348;
	// addi r3,r10,-28808
	ctx.r3.s64 = ctx.r10.s64 + -28808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325873C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17280
	ctx.r3.s64 = ctx.r9.s64 + 17280;
	// bl 0x82ca3700
	ctx.lr = 0x83258748;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258758"))) PPC_WEAK_FUNC(sub_83258758);
PPC_FUNC_IMPL(__imp__sub_83258758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22356
	ctx.r4.s64 = ctx.r11.s64 + 22356;
	// addi r3,r10,-28804
	ctx.r3.s64 = ctx.r10.s64 + -28804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325877C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17296
	ctx.r3.s64 = ctx.r9.s64 + 17296;
	// bl 0x82ca3700
	ctx.lr = 0x83258788;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258798"))) PPC_WEAK_FUNC(sub_83258798);
PPC_FUNC_IMPL(__imp__sub_83258798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22364
	ctx.r4.s64 = ctx.r11.s64 + 22364;
	// addi r3,r10,-28800
	ctx.r3.s64 = ctx.r10.s64 + -28800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832587BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17312
	ctx.r3.s64 = ctx.r9.s64 + 17312;
	// bl 0x82ca3700
	ctx.lr = 0x832587C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832587D8"))) PPC_WEAK_FUNC(sub_832587D8);
PPC_FUNC_IMPL(__imp__sub_832587D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22372
	ctx.r4.s64 = ctx.r11.s64 + 22372;
	// addi r3,r10,-28796
	ctx.r3.s64 = ctx.r10.s64 + -28796;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832587FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17328
	ctx.r3.s64 = ctx.r9.s64 + 17328;
	// bl 0x82ca3700
	ctx.lr = 0x83258808;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258818"))) PPC_WEAK_FUNC(sub_83258818);
PPC_FUNC_IMPL(__imp__sub_83258818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22380
	ctx.r4.s64 = ctx.r11.s64 + 22380;
	// addi r3,r10,-28792
	ctx.r3.s64 = ctx.r10.s64 + -28792;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325883C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17344
	ctx.r3.s64 = ctx.r9.s64 + 17344;
	// bl 0x82ca3700
	ctx.lr = 0x83258848;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258858"))) PPC_WEAK_FUNC(sub_83258858);
PPC_FUNC_IMPL(__imp__sub_83258858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22388
	ctx.r4.s64 = ctx.r11.s64 + 22388;
	// addi r3,r10,-28788
	ctx.r3.s64 = ctx.r10.s64 + -28788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325887C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17360
	ctx.r3.s64 = ctx.r9.s64 + 17360;
	// bl 0x82ca3700
	ctx.lr = 0x83258888;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258898"))) PPC_WEAK_FUNC(sub_83258898);
PPC_FUNC_IMPL(__imp__sub_83258898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22396
	ctx.r4.s64 = ctx.r11.s64 + 22396;
	// addi r3,r10,-28784
	ctx.r3.s64 = ctx.r10.s64 + -28784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832588BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17376
	ctx.r3.s64 = ctx.r9.s64 + 17376;
	// bl 0x82ca3700
	ctx.lr = 0x832588C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832588D8"))) PPC_WEAK_FUNC(sub_832588D8);
PPC_FUNC_IMPL(__imp__sub_832588D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22412
	ctx.r4.s64 = ctx.r11.s64 + 22412;
	// addi r3,r10,-28780
	ctx.r3.s64 = ctx.r10.s64 + -28780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832588FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17392
	ctx.r3.s64 = ctx.r9.s64 + 17392;
	// bl 0x82ca3700
	ctx.lr = 0x83258908;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258918"))) PPC_WEAK_FUNC(sub_83258918);
PPC_FUNC_IMPL(__imp__sub_83258918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22428
	ctx.r4.s64 = ctx.r11.s64 + 22428;
	// addi r3,r10,-28776
	ctx.r3.s64 = ctx.r10.s64 + -28776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325893C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17408
	ctx.r3.s64 = ctx.r9.s64 + 17408;
	// bl 0x82ca3700
	ctx.lr = 0x83258948;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258958"))) PPC_WEAK_FUNC(sub_83258958);
PPC_FUNC_IMPL(__imp__sub_83258958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22436
	ctx.r4.s64 = ctx.r11.s64 + 22436;
	// addi r3,r10,-28772
	ctx.r3.s64 = ctx.r10.s64 + -28772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325897C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17424
	ctx.r3.s64 = ctx.r9.s64 + 17424;
	// bl 0x82ca3700
	ctx.lr = 0x83258988;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258998"))) PPC_WEAK_FUNC(sub_83258998);
PPC_FUNC_IMPL(__imp__sub_83258998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22444
	ctx.r4.s64 = ctx.r11.s64 + 22444;
	// addi r3,r10,-28768
	ctx.r3.s64 = ctx.r10.s64 + -28768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832589BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17440
	ctx.r3.s64 = ctx.r9.s64 + 17440;
	// bl 0x82ca3700
	ctx.lr = 0x832589C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832589D8"))) PPC_WEAK_FUNC(sub_832589D8);
PPC_FUNC_IMPL(__imp__sub_832589D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22456
	ctx.r4.s64 = ctx.r11.s64 + 22456;
	// addi r3,r10,-28764
	ctx.r3.s64 = ctx.r10.s64 + -28764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832589FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17456
	ctx.r3.s64 = ctx.r9.s64 + 17456;
	// bl 0x82ca3700
	ctx.lr = 0x83258A08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258A18"))) PPC_WEAK_FUNC(sub_83258A18);
PPC_FUNC_IMPL(__imp__sub_83258A18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,25268
	ctx.r4.s64 = ctx.r11.s64 + 25268;
	// addi r3,r10,-28760
	ctx.r3.s64 = ctx.r10.s64 + -28760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258A3C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17472
	ctx.r3.s64 = ctx.r9.s64 + 17472;
	// bl 0x82ca3700
	ctx.lr = 0x83258A48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258A58"))) PPC_WEAK_FUNC(sub_83258A58);
PPC_FUNC_IMPL(__imp__sub_83258A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22464
	ctx.r4.s64 = ctx.r11.s64 + 22464;
	// addi r3,r10,-28756
	ctx.r3.s64 = ctx.r10.s64 + -28756;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258A7C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17488
	ctx.r3.s64 = ctx.r9.s64 + 17488;
	// bl 0x82ca3700
	ctx.lr = 0x83258A88;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258A98"))) PPC_WEAK_FUNC(sub_83258A98);
PPC_FUNC_IMPL(__imp__sub_83258A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-32620
	ctx.r4.s64 = ctx.r11.s64 + -32620;
	// addi r3,r10,-28752
	ctx.r3.s64 = ctx.r10.s64 + -28752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258ABC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17504
	ctx.r3.s64 = ctx.r9.s64 + 17504;
	// bl 0x82ca3700
	ctx.lr = 0x83258AC8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258AD8"))) PPC_WEAK_FUNC(sub_83258AD8);
PPC_FUNC_IMPL(__imp__sub_83258AD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-28748
	ctx.r3.s64 = ctx.r10.s64 + -28748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258AFC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17624
	ctx.r3.s64 = ctx.r9.s64 + 17624;
	// bl 0x82ca3700
	ctx.lr = 0x83258B08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B18"))) PPC_WEAK_FUNC(sub_83258B18);
PPC_FUNC_IMPL(__imp__sub_83258B18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-28744
	ctx.r3.s64 = ctx.r10.s64 + -28744;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258B3C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17640
	ctx.r3.s64 = ctx.r9.s64 + 17640;
	// bl 0x82ca3700
	ctx.lr = 0x83258B48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B58"))) PPC_WEAK_FUNC(sub_83258B58);
PPC_FUNC_IMPL(__imp__sub_83258B58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-28740
	ctx.r3.s64 = ctx.r10.s64 + -28740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258B7C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17656
	ctx.r3.s64 = ctx.r9.s64 + 17656;
	// bl 0x82ca3700
	ctx.lr = 0x83258B88;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B98"))) PPC_WEAK_FUNC(sub_83258B98);
PPC_FUNC_IMPL(__imp__sub_83258B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,22688
	ctx.r3.s64 = ctx.r11.s64 + 22688;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258BB8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258BD0"))) PPC_WEAK_FUNC(sub_83258BD0);
PPC_FUNC_IMPL(__imp__sub_83258BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,22704
	ctx.r3.s64 = ctx.r11.s64 + 22704;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258BF0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258C08"))) PPC_WEAK_FUNC(sub_83258C08);
PPC_FUNC_IMPL(__imp__sub_83258C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_83258C10:
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
	// bne 0x83258c10
	if (!ctx.cr0.eq) goto loc_83258C10;
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-28728
	ctx.r6.s64 = ctx.r7.s64 + -28728;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// addi r3,r5,17672
	ctx.r3.s64 = ctx.r5.s64 + 17672;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stb r10,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r10.u8);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258C50"))) PPC_WEAK_FUNC(sub_83258C50);
PPC_FUNC_IMPL(__imp__sub_83258C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,26184
	ctx.r4.s64 = ctx.r11.s64 + 26184;
	// addi r3,r10,-28708
	ctx.r3.s64 = ctx.r10.s64 + -28708;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258C74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17792
	ctx.r3.s64 = ctx.r9.s64 + 17792;
	// bl 0x82ca3700
	ctx.lr = 0x83258C80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258C90"))) PPC_WEAK_FUNC(sub_83258C90);
PPC_FUNC_IMPL(__imp__sub_83258C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,26208
	ctx.r4.s64 = ctx.r11.s64 + 26208;
	// addi r3,r10,-28704
	ctx.r3.s64 = ctx.r10.s64 + -28704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258CB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17808
	ctx.r3.s64 = ctx.r9.s64 + 17808;
	// bl 0x82ca3700
	ctx.lr = 0x83258CC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258CD0"))) PPC_WEAK_FUNC(sub_83258CD0);
PPC_FUNC_IMPL(__imp__sub_83258CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,26228
	ctx.r4.s64 = ctx.r11.s64 + 26228;
	// addi r3,r10,-28700
	ctx.r3.s64 = ctx.r10.s64 + -28700;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258CF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17824
	ctx.r3.s64 = ctx.r9.s64 + 17824;
	// bl 0x82ca3700
	ctx.lr = 0x83258D00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D10"))) PPC_WEAK_FUNC(sub_83258D10);
PPC_FUNC_IMPL(__imp__sub_83258D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258D1C"))) PPC_WEAK_FUNC(sub_83258D1C);
PPC_FUNC_IMPL(__imp__sub_83258D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D20"))) PPC_WEAK_FUNC(sub_83258D20);
PPC_FUNC_IMPL(__imp__sub_83258D20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-28688
	ctx.r3.s64 = ctx.r10.s64 + -28688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258D44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17856
	ctx.r3.s64 = ctx.r9.s64 + 17856;
	// bl 0x82ca3700
	ctx.lr = 0x83258D50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D60"))) PPC_WEAK_FUNC(sub_83258D60);
PPC_FUNC_IMPL(__imp__sub_83258D60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-28684
	ctx.r3.s64 = ctx.r10.s64 + -28684;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258D84;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17872
	ctx.r3.s64 = ctx.r9.s64 + 17872;
	// bl 0x82ca3700
	ctx.lr = 0x83258D90;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DA0"))) PPC_WEAK_FUNC(sub_83258DA0);
PPC_FUNC_IMPL(__imp__sub_83258DA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-28680
	ctx.r3.s64 = ctx.r10.s64 + -28680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258DC4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17888
	ctx.r3.s64 = ctx.r9.s64 + 17888;
	// bl 0x82ca3700
	ctx.lr = 0x83258DD0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DE0"))) PPC_WEAK_FUNC(sub_83258DE0);
PPC_FUNC_IMPL(__imp__sub_83258DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,27512
	ctx.r4.s64 = ctx.r11.s64 + 27512;
	// addi r3,r10,-28676
	ctx.r3.s64 = ctx.r10.s64 + -28676;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258E04;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17904
	ctx.r3.s64 = ctx.r9.s64 + 17904;
	// bl 0x82ca3700
	ctx.lr = 0x83258E10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E20"))) PPC_WEAK_FUNC(sub_83258E20);
PPC_FUNC_IMPL(__imp__sub_83258E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,29108
	ctx.r4.s64 = ctx.r11.s64 + 29108;
	// addi r3,r10,-28672
	ctx.r3.s64 = ctx.r10.s64 + -28672;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258E44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17920
	ctx.r3.s64 = ctx.r9.s64 + 17920;
	// bl 0x82ca3700
	ctx.lr = 0x83258E50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E60"))) PPC_WEAK_FUNC(sub_83258E60);
PPC_FUNC_IMPL(__imp__sub_83258E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17936
	ctx.r3.s64 = ctx.r11.s64 + 17936;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258E6C"))) PPC_WEAK_FUNC(sub_83258E6C);
PPC_FUNC_IMPL(__imp__sub_83258E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E70"))) PPC_WEAK_FUNC(sub_83258E70);
PPC_FUNC_IMPL(__imp__sub_83258E70) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30900
	ctx.r10.s64 = ctx.r10.s64 + 30900;
	// addi r31,r9,-24552
	ctx.r31.s64 = ctx.r9.s64 + -24552;
loc_83258E94:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x83258e94
	if (!ctx.cr6.eq) goto loc_83258E94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82625e00
	ctx.lr = 0x83258EB4;
	sub_82625E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83258ec8
	if (!ctx.cr6.eq) goto loc_83258EC8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83258ed4
	goto loc_83258ED4;
loc_83258EC8:
	// bl 0x82625d68
	ctx.lr = 0x83258ECC;
	sub_82625D68(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83258ED4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,17736
	ctx.r11.s64 = ctx.r11.s64 + 17736;
	// addi r9,r10,-1124
	ctx.r9.s64 = ctx.r10.s64 + -1124;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r3,r10,18024
	ctx.r3.s64 = ctx.r10.s64 + 18024;
	// bl 0x82ca3700
	ctx.lr = 0x83258F0C;
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

__attribute__((alias("__imp__sub_83258F20"))) PPC_WEAK_FUNC(sub_83258F20);
PPC_FUNC_IMPL(__imp__sub_83258F20) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,-19236
	ctx.r6.s64 = ctx.r11.s64 + -19236;
	// addi r4,r9,31076
	ctx.r4.s64 = ctx.r9.s64 + 31076;
	// addi r3,r8,-28648
	ctx.r3.s64 = ctx.r8.s64 + -28648;
	// addi r5,r10,24456
	ctx.r5.s64 = ctx.r10.s64 + 24456;
	// bl 0x82e86010
	ctx.lr = 0x83258F50;
	sub_82E86010(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18072
	ctx.r3.s64 = ctx.r7.s64 + 18072;
	// bl 0x82ca3700
	ctx.lr = 0x83258F5C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F6C"))) PPC_WEAK_FUNC(sub_83258F6C);
PPC_FUNC_IMPL(__imp__sub_83258F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F70"))) PPC_WEAK_FUNC(sub_83258F70);
PPC_FUNC_IMPL(__imp__sub_83258F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	ctx.lr = 0x83258F84;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83258f94
	if (ctx.cr6.eq) goto loc_83258F94;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83258F94:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258fa0
	if (ctx.cr0.eq) goto loc_83258FA0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258FA0:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258fac
	if (ctx.cr0.eq) goto loc_83258FAC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258FAC:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-28372
	ctx.r8.s64 = ctx.r9.s64 + -28372;
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// addi r3,r7,18096
	ctx.r3.s64 = ctx.r7.s64 + 18096;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83258FF0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259000"))) PPC_WEAK_FUNC(sub_83259000);
PPC_FUNC_IMPL(__imp__sub_83259000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r8,-28256
	ctx.r6.s64 = ctx.r8.s64 + -28256;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r5,r7,-28240
	ctx.r5.s64 = ctx.r7.s64 + -28240;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v13,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r4,-31950
	ctx.r4.s64 = -2093875200;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,-24224
	ctx.r11.s64 = ctx.r4.s64 + -24224;
	// lvx128 v12,r0,r5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,32
	ctx.r3.s64 = 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// vand v12,v11,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vand v13,v10,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325906C"))) PPC_WEAK_FUNC(sub_8325906C);
PPC_FUNC_IMPL(__imp__sub_8325906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259070"))) PPC_WEAK_FUNC(sub_83259070);
PPC_FUNC_IMPL(__imp__sub_83259070) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-28360
	ctx.r3.s64 = ctx.r11.s64 + -28360;
	// bl 0x832b258c
	ctx.lr = 0x83259088;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18112
	ctx.r3.s64 = ctx.r10.s64 + 18112;
	// bl 0x82ca3700
	ctx.lr = 0x83259094;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832590A4"))) PPC_WEAK_FUNC(sub_832590A4);
PPC_FUNC_IMPL(__imp__sub_832590A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832590A8"))) PPC_WEAK_FUNC(sub_832590A8);
PPC_FUNC_IMPL(__imp__sub_832590A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-28332
	ctx.r3.s64 = ctx.r11.s64 + -28332;
	// bl 0x832b258c
	ctx.lr = 0x832590C0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18120
	ctx.r3.s64 = ctx.r10.s64 + 18120;
	// bl 0x82ca3700
	ctx.lr = 0x832590CC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832590DC"))) PPC_WEAK_FUNC(sub_832590DC);
PPC_FUNC_IMPL(__imp__sub_832590DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832590E0"))) PPC_WEAK_FUNC(sub_832590E0);
PPC_FUNC_IMPL(__imp__sub_832590E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r3,r8,-28304
	ctx.r3.s64 = ctx.r8.s64 + -28304;
	// addi r6,r11,-30068
	ctx.r6.s64 = ctx.r11.s64 + -30068;
	// addi r4,r9,31400
	ctx.r4.s64 = ctx.r9.s64 + 31400;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-10432
	ctx.r5.s64 = ctx.r10.s64 + -10432;
	// bl 0x82e7ef98
	ctx.lr = 0x83259118;
	sub_82E7EF98(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18128
	ctx.r3.s64 = ctx.r7.s64 + 18128;
	// bl 0x82ca3700
	ctx.lr = 0x83259124;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259134"))) PPC_WEAK_FUNC(sub_83259134);
PPC_FUNC_IMPL(__imp__sub_83259134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259138"))) PPC_WEAK_FUNC(sub_83259138);
PPC_FUNC_IMPL(__imp__sub_83259138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31420
	ctx.r4.s64 = ctx.r10.s64 + 31420;
	// addi r3,r9,-28028
	ctx.r3.s64 = ctx.r9.s64 + -28028;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9448
	ctx.r5.s64 = ctx.r11.s64 + -9448;
	// bl 0x82e7efd8
	ctx.lr = 0x8325916C;
	sub_82E7EFD8(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18152
	ctx.r3.s64 = ctx.r8.s64 + 18152;
	// bl 0x82ca3700
	ctx.lr = 0x83259178;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259188"))) PPC_WEAK_FUNC(sub_83259188);
PPC_FUNC_IMPL(__imp__sub_83259188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31484
	ctx.r4.s64 = ctx.r10.s64 + 31484;
	// addi r3,r9,-27752
	ctx.r3.s64 = ctx.r9.s64 + -27752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8360
	ctx.r5.s64 = ctx.r11.s64 + -8360;
	// bl 0x82e78e70
	ctx.lr = 0x832591B4;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18176
	ctx.r3.s64 = ctx.r8.s64 + 18176;
	// bl 0x82ca3700
	ctx.lr = 0x832591C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832591D0"))) PPC_WEAK_FUNC(sub_832591D0);
PPC_FUNC_IMPL(__imp__sub_832591D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31500
	ctx.r4.s64 = ctx.r10.s64 + 31500;
	// addi r3,r9,-27476
	ctx.r3.s64 = ctx.r9.s64 + -27476;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8272
	ctx.r5.s64 = ctx.r11.s64 + -8272;
	// bl 0x82e78e70
	ctx.lr = 0x832591FC;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18200
	ctx.r3.s64 = ctx.r8.s64 + 18200;
	// bl 0x82ca3700
	ctx.lr = 0x83259208;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259218"))) PPC_WEAK_FUNC(sub_83259218);
PPC_FUNC_IMPL(__imp__sub_83259218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31588
	ctx.r4.s64 = ctx.r10.s64 + 31588;
	// addi r3,r9,-27200
	ctx.r3.s64 = ctx.r9.s64 + -27200;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6816
	ctx.r5.s64 = ctx.r11.s64 + -6816;
	// bl 0x82e78e70
	ctx.lr = 0x83259244;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18224
	ctx.r3.s64 = ctx.r8.s64 + 18224;
	// bl 0x82ca3700
	ctx.lr = 0x83259250;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259260"))) PPC_WEAK_FUNC(sub_83259260);
PPC_FUNC_IMPL(__imp__sub_83259260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31608
	ctx.r4.s64 = ctx.r10.s64 + 31608;
	// addi r3,r9,-26924
	ctx.r3.s64 = ctx.r9.s64 + -26924;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6472
	ctx.r5.s64 = ctx.r11.s64 + -6472;
	// bl 0x82e78e70
	ctx.lr = 0x8325928C;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18248
	ctx.r3.s64 = ctx.r8.s64 + 18248;
	// bl 0x82ca3700
	ctx.lr = 0x83259298;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832592A8"))) PPC_WEAK_FUNC(sub_832592A8);
PPC_FUNC_IMPL(__imp__sub_832592A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x832592BC;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832592cc
	if (ctx.cr6.eq) goto loc_832592CC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_832592CC:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832592d8
	if (ctx.cr0.eq) goto loc_832592D8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832592D8:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-26648
	ctx.r8.s64 = ctx.r9.s64 + -26648;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18272
	ctx.r3.s64 = ctx.r7.s64 + 18272;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832592F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259308"))) PPC_WEAK_FUNC(sub_83259308);
PPC_FUNC_IMPL(__imp__sub_83259308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-32080
	ctx.r4.s64 = ctx.r10.s64 + -32080;
	// addi r3,r9,-26636
	ctx.r3.s64 = ctx.r9.s64 + -26636;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10672
	ctx.r5.s64 = ctx.r11.s64 + 10672;
	// bl 0x82e775d0
	ctx.lr = 0x83259334;
	sub_82E775D0(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18344
	ctx.r3.s64 = ctx.r8.s64 + 18344;
	// bl 0x82ca3700
	ctx.lr = 0x83259340;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259350"))) PPC_WEAK_FUNC(sub_83259350);
PPC_FUNC_IMPL(__imp__sub_83259350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-32068
	ctx.r4.s64 = ctx.r10.s64 + -32068;
	// addi r3,r9,-26360
	ctx.r3.s64 = ctx.r9.s64 + -26360;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11176
	ctx.r5.s64 = ctx.r11.s64 + 11176;
	// bl 0x82e78230
	ctx.lr = 0x83259384;
	sub_82E78230(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18368
	ctx.r3.s64 = ctx.r8.s64 + 18368;
	// bl 0x82ca3700
	ctx.lr = 0x83259390;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832593A0"))) PPC_WEAK_FUNC(sub_832593A0);
PPC_FUNC_IMPL(__imp__sub_832593A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-32004
	ctx.r4.s64 = ctx.r9.s64 + -32004;
	// addi r3,r8,-26084
	ctx.r3.s64 = ctx.r8.s64 + -26084;
	// addi r5,r10,12632
	ctx.r5.s64 = ctx.r10.s64 + 12632;
	// bl 0x82e78e70
	ctx.lr = 0x832593D0;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18392
	ctx.r3.s64 = ctx.r7.s64 + 18392;
	// bl 0x82ca3700
	ctx.lr = 0x832593DC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832593EC"))) PPC_WEAK_FUNC(sub_832593EC);
PPC_FUNC_IMPL(__imp__sub_832593EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832593F0"))) PPC_WEAK_FUNC(sub_832593F0);
PPC_FUNC_IMPL(__imp__sub_832593F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31976
	ctx.r4.s64 = ctx.r9.s64 + -31976;
	// addi r3,r8,-25808
	ctx.r3.s64 = ctx.r8.s64 + -25808;
	// addi r5,r10,18288
	ctx.r5.s64 = ctx.r10.s64 + 18288;
	// bl 0x82e78e70
	ctx.lr = 0x83259420;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18416
	ctx.r3.s64 = ctx.r7.s64 + 18416;
	// bl 0x82ca3700
	ctx.lr = 0x8325942C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325943C"))) PPC_WEAK_FUNC(sub_8325943C);
PPC_FUNC_IMPL(__imp__sub_8325943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259440"))) PPC_WEAK_FUNC(sub_83259440);
PPC_FUNC_IMPL(__imp__sub_83259440) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31936
	ctx.r4.s64 = ctx.r9.s64 + -31936;
	// addi r3,r8,-25532
	ctx.r3.s64 = ctx.r8.s64 + -25532;
	// addi r5,r10,26712
	ctx.r5.s64 = ctx.r10.s64 + 26712;
	// bl 0x82e78e70
	ctx.lr = 0x83259470;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18440
	ctx.r3.s64 = ctx.r7.s64 + 18440;
	// bl 0x82ca3700
	ctx.lr = 0x8325947C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325948C"))) PPC_WEAK_FUNC(sub_8325948C);
PPC_FUNC_IMPL(__imp__sub_8325948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259490"))) PPC_WEAK_FUNC(sub_83259490);
PPC_FUNC_IMPL(__imp__sub_83259490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-11708
	ctx.r3.s64 = ctx.r11.s64 + -11708;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832594B0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-25256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832594C8"))) PPC_WEAK_FUNC(sub_832594C8);
PPC_FUNC_IMPL(__imp__sub_832594C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31684
	ctx.r4.s64 = ctx.r9.s64 + -31684;
	// addi r3,r8,-25252
	ctx.r3.s64 = ctx.r8.s64 + -25252;
	// addi r5,r10,31784
	ctx.r5.s64 = ctx.r10.s64 + 31784;
	// bl 0x82e78e70
	ctx.lr = 0x832594F8;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18464
	ctx.r3.s64 = ctx.r7.s64 + 18464;
	// bl 0x82ca3700
	ctx.lr = 0x83259504;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259514"))) PPC_WEAK_FUNC(sub_83259514);
PPC_FUNC_IMPL(__imp__sub_83259514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259518"))) PPC_WEAK_FUNC(sub_83259518);
PPC_FUNC_IMPL(__imp__sub_83259518) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31556
	ctx.r4.s64 = ctx.r9.s64 + -31556;
	// addi r3,r8,-24976
	ctx.r3.s64 = ctx.r8.s64 + -24976;
	// addi r5,r10,-31192
	ctx.r5.s64 = ctx.r10.s64 + -31192;
	// bl 0x82e78e70
	ctx.lr = 0x83259548;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18488
	ctx.r3.s64 = ctx.r7.s64 + 18488;
	// bl 0x82ca3700
	ctx.lr = 0x83259554;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259564"))) PPC_WEAK_FUNC(sub_83259564);
PPC_FUNC_IMPL(__imp__sub_83259564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259568"))) PPC_WEAK_FUNC(sub_83259568);
PPC_FUNC_IMPL(__imp__sub_83259568) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31436
	ctx.r4.s64 = ctx.r9.s64 + -31436;
	// addi r3,r8,-24700
	ctx.r3.s64 = ctx.r8.s64 + -24700;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// bl 0x82e78e70
	ctx.lr = 0x83259598;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18512
	ctx.r3.s64 = ctx.r7.s64 + 18512;
	// bl 0x82ca3700
	ctx.lr = 0x832595A4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832595B4"))) PPC_WEAK_FUNC(sub_832595B4);
PPC_FUNC_IMPL(__imp__sub_832595B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832595B8"))) PPC_WEAK_FUNC(sub_832595B8);
PPC_FUNC_IMPL(__imp__sub_832595B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lfs f0,-28968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28968);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,-24424(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24424, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832595D0"))) PPC_WEAK_FUNC(sub_832595D0);
PPC_FUNC_IMPL(__imp__sub_832595D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8221f388
	ctx.lr = 0x832595E4;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832595f4
	if (ctx.cr6.eq) goto loc_832595F4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832595F4:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259600
	if (ctx.cr0.eq) goto loc_83259600;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259600:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8325960c
	if (ctx.cr0.eq) goto loc_8325960C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8325960C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-24420
	ctx.r8.s64 = ctx.r9.s64 + -24420;
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// addi r3,r7,18536
	ctx.r3.s64 = ctx.r7.s64 + 18536;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259650;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259660"))) PPC_WEAK_FUNC(sub_83259660);
PPC_FUNC_IMPL(__imp__sub_83259660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31280
	ctx.r4.s64 = ctx.r10.s64 + -31280;
	// addi r3,r9,-24408
	ctx.r3.s64 = ctx.r9.s64 + -24408;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20312
	ctx.r5.s64 = ctx.r11.s64 + -20312;
	// bl 0x82e7fa98
	ctx.lr = 0x8325968C;
	sub_82E7FA98(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18568
	ctx.r3.s64 = ctx.r8.s64 + 18568;
	// bl 0x82ca3700
	ctx.lr = 0x83259698;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832596A8"))) PPC_WEAK_FUNC(sub_832596A8);
PPC_FUNC_IMPL(__imp__sub_832596A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31248
	ctx.r4.s64 = ctx.r10.s64 + -31248;
	// addi r3,r9,-24132
	ctx.r3.s64 = ctx.r9.s64 + -24132;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19720
	ctx.r5.s64 = ctx.r11.s64 + -19720;
	// bl 0x82e7fa98
	ctx.lr = 0x832596D4;
	sub_82E7FA98(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18592
	ctx.r3.s64 = ctx.r8.s64 + 18592;
	// bl 0x82ca3700
	ctx.lr = 0x832596E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832596F0"))) PPC_WEAK_FUNC(sub_832596F0);
PPC_FUNC_IMPL(__imp__sub_832596F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x83259704;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83259714
	if (ctx.cr6.eq) goto loc_83259714;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83259714:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83259720
	if (ctx.cr0.eq) goto loc_83259720;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83259720:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23856
	ctx.r8.s64 = ctx.r9.s64 + -23856;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18616
	ctx.r3.s64 = ctx.r7.s64 + 18616;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259740;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259750"))) PPC_WEAK_FUNC(sub_83259750);
PPC_FUNC_IMPL(__imp__sub_83259750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31128
	ctx.r4.s64 = ctx.r10.s64 + -31128;
	// addi r3,r9,-23844
	ctx.r3.s64 = ctx.r9.s64 + -23844;
	// addi r5,r11,-18080
	ctx.r5.s64 = ctx.r11.s64 + -18080;
	// bl 0x82642760
	ctx.lr = 0x83259778;
	sub_82642760(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18688
	ctx.r3.s64 = ctx.r8.s64 + 18688;
	// bl 0x82ca3700
	ctx.lr = 0x83259784;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259794"))) PPC_WEAK_FUNC(sub_83259794);
PPC_FUNC_IMPL(__imp__sub_83259794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259798"))) PPC_WEAK_FUNC(sub_83259798);
PPC_FUNC_IMPL(__imp__sub_83259798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31120
	ctx.r4.s64 = ctx.r10.s64 + -31120;
	// addi r3,r9,-23576
	ctx.r3.s64 = ctx.r9.s64 + -23576;
	// addi r5,r11,-17600
	ctx.r5.s64 = ctx.r11.s64 + -17600;
	// bl 0x82642980
	ctx.lr = 0x832597C0;
	sub_82642980(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18712
	ctx.r3.s64 = ctx.r8.s64 + 18712;
	// bl 0x82ca3700
	ctx.lr = 0x832597CC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832597DC"))) PPC_WEAK_FUNC(sub_832597DC);
PPC_FUNC_IMPL(__imp__sub_832597DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832597E0"))) PPC_WEAK_FUNC(sub_832597E0);
PPC_FUNC_IMPL(__imp__sub_832597E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,22084
	ctx.r6.s64 = ctx.r11.s64 + 22084;
	// addi r4,r9,-31104
	ctx.r4.s64 = ctx.r9.s64 + -31104;
	// addi r3,r8,-23308
	ctx.r3.s64 = ctx.r8.s64 + -23308;
	// addi r5,r10,-1784
	ctx.r5.s64 = ctx.r10.s64 + -1784;
	// bl 0x82e7f410
	ctx.lr = 0x83259810;
	sub_82E7F410(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18736
	ctx.r3.s64 = ctx.r7.s64 + 18736;
	// bl 0x82ca3700
	ctx.lr = 0x8325981C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325982C"))) PPC_WEAK_FUNC(sub_8325982C);
PPC_FUNC_IMPL(__imp__sub_8325982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259830"))) PPC_WEAK_FUNC(sub_83259830);
PPC_FUNC_IMPL(__imp__sub_83259830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31072
	ctx.r4.s64 = ctx.r10.s64 + -31072;
	// addi r3,r9,-23032
	ctx.r3.s64 = ctx.r9.s64 + -23032;
	// addi r5,r11,-11976
	ctx.r5.s64 = ctx.r11.s64 + -11976;
	// bl 0x82642870
	ctx.lr = 0x83259858;
	sub_82642870(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18760
	ctx.r3.s64 = ctx.r8.s64 + 18760;
	// bl 0x82ca3700
	ctx.lr = 0x83259864;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259874"))) PPC_WEAK_FUNC(sub_83259874);
PPC_FUNC_IMPL(__imp__sub_83259874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259878"))) PPC_WEAK_FUNC(sub_83259878);
PPC_FUNC_IMPL(__imp__sub_83259878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31044
	ctx.r4.s64 = ctx.r10.s64 + -31044;
	// addi r3,r9,-22764
	ctx.r3.s64 = ctx.r9.s64 + -22764;
	// addi r5,r11,-7560
	ctx.r5.s64 = ctx.r11.s64 + -7560;
	// bl 0x826428f8
	ctx.lr = 0x832598A0;
	sub_826428F8(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18784
	ctx.r3.s64 = ctx.r8.s64 + 18784;
	// bl 0x82ca3700
	ctx.lr = 0x832598AC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832598BC"))) PPC_WEAK_FUNC(sub_832598BC);
PPC_FUNC_IMPL(__imp__sub_832598BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832598C0"))) PPC_WEAK_FUNC(sub_832598C0);
PPC_FUNC_IMPL(__imp__sub_832598C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31016
	ctx.r4.s64 = ctx.r10.s64 + -31016;
	// addi r3,r9,-22496
	ctx.r3.s64 = ctx.r9.s64 + -22496;
	// addi r5,r11,-4768
	ctx.r5.s64 = ctx.r11.s64 + -4768;
	// bl 0x826427e8
	ctx.lr = 0x832598E8;
	sub_826427E8(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18808
	ctx.r3.s64 = ctx.r8.s64 + 18808;
	// bl 0x82ca3700
	ctx.lr = 0x832598F4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259904"))) PPC_WEAK_FUNC(sub_83259904);
PPC_FUNC_IMPL(__imp__sub_83259904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259908"))) PPC_WEAK_FUNC(sub_83259908);
PPC_FUNC_IMPL(__imp__sub_83259908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r8,-22228
	ctx.r3.s64 = ctx.r8.s64 + -22228;
	// addi r6,r11,-30068
	ctx.r6.s64 = ctx.r11.s64 + -30068;
	// addi r4,r9,-30924
	ctx.r4.s64 = ctx.r9.s64 + -30924;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,15688
	ctx.r5.s64 = ctx.r10.s64 + 15688;
	// bl 0x82e7ef98
	ctx.lr = 0x83259940;
	sub_82E7EF98(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18992
	ctx.r3.s64 = ctx.r7.s64 + 18992;
	// bl 0x82ca3700
	ctx.lr = 0x8325994C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325995C"))) PPC_WEAK_FUNC(sub_8325995C);
PPC_FUNC_IMPL(__imp__sub_8325995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259960"))) PPC_WEAK_FUNC(sub_83259960);
PPC_FUNC_IMPL(__imp__sub_83259960) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-21952
	ctx.r3.s64 = ctx.r10.s64 + -21952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259984;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19016
	ctx.r3.s64 = ctx.r9.s64 + 19016;
	// bl 0x82ca3700
	ctx.lr = 0x83259990;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832599A0"))) PPC_WEAK_FUNC(sub_832599A0);
PPC_FUNC_IMPL(__imp__sub_832599A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-21948
	ctx.r3.s64 = ctx.r10.s64 + -21948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832599C4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19032
	ctx.r3.s64 = ctx.r9.s64 + 19032;
	// bl 0x82ca3700
	ctx.lr = 0x832599D0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832599E0"))) PPC_WEAK_FUNC(sub_832599E0);
PPC_FUNC_IMPL(__imp__sub_832599E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-21944
	ctx.r3.s64 = ctx.r10.s64 + -21944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259A04;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19048
	ctx.r3.s64 = ctx.r9.s64 + 19048;
	// bl 0x82ca3700
	ctx.lr = 0x83259A10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259A20"))) PPC_WEAK_FUNC(sub_83259A20);
PPC_FUNC_IMPL(__imp__sub_83259A20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-21940
	ctx.r3.s64 = ctx.r10.s64 + -21940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259A44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19064
	ctx.r3.s64 = ctx.r9.s64 + 19064;
	// bl 0x82ca3700
	ctx.lr = 0x83259A50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259A60"))) PPC_WEAK_FUNC(sub_83259A60);
PPC_FUNC_IMPL(__imp__sub_83259A60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-21936
	ctx.r3.s64 = ctx.r10.s64 + -21936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259A84;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19080
	ctx.r3.s64 = ctx.r9.s64 + 19080;
	// bl 0x82ca3700
	ctx.lr = 0x83259A90;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259AA0"))) PPC_WEAK_FUNC(sub_83259AA0);
PPC_FUNC_IMPL(__imp__sub_83259AA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-21932
	ctx.r3.s64 = ctx.r10.s64 + -21932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259AC4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19096
	ctx.r3.s64 = ctx.r9.s64 + 19096;
	// bl 0x82ca3700
	ctx.lr = 0x83259AD0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259AE0"))) PPC_WEAK_FUNC(sub_83259AE0);
PPC_FUNC_IMPL(__imp__sub_83259AE0) {
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
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r11,-21928
	ctx.r30.s64 = ctx.r11.s64 + -21928;
loc_83259B00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266d970
	ctx.lr = 0x83259B08;
	sub_8266D970(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// bge 0x83259b00
	if (!ctx.cr0.lt) goto loc_83259B00;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19112
	ctx.r3.s64 = ctx.r11.s64 + 19112;
	// bl 0x82ca3700
	ctx.lr = 0x83259B20;
	sub_82CA3700(ctx, base);
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

__attribute__((alias("__imp__sub_83259B38"))) PPC_WEAK_FUNC(sub_83259B38);
PPC_FUNC_IMPL(__imp__sub_83259B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19192
	ctx.r3.s64 = ctx.r11.s64 + 19192;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259B44"))) PPC_WEAK_FUNC(sub_83259B44);
PPC_FUNC_IMPL(__imp__sub_83259B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259B48"))) PPC_WEAK_FUNC(sub_83259B48);
PPC_FUNC_IMPL(__imp__sub_83259B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-21200
	ctx.r10.s64 = ctx.r11.s64 + -21200;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259B5C"))) PPC_WEAK_FUNC(sub_83259B5C);
PPC_FUNC_IMPL(__imp__sub_83259B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259B60"))) PPC_WEAK_FUNC(sub_83259B60);
PPC_FUNC_IMPL(__imp__sub_83259B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19208
	ctx.r3.s64 = ctx.r11.s64 + 19208;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259B6C"))) PPC_WEAK_FUNC(sub_83259B6C);
PPC_FUNC_IMPL(__imp__sub_83259B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259B70"))) PPC_WEAK_FUNC(sub_83259B70);
PPC_FUNC_IMPL(__imp__sub_83259B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	ctx.lr = 0x83259B84;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83259b94
	if (ctx.cr6.eq) goto loc_83259B94;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83259B94:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83259ba0
	if (ctx.cr0.eq) goto loc_83259BA0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83259BA0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21168
	ctx.r8.s64 = ctx.r9.s64 + -21168;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19296
	ctx.r3.s64 = ctx.r7.s64 + 19296;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259BC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259BD0"))) PPC_WEAK_FUNC(sub_83259BD0);
PPC_FUNC_IMPL(__imp__sub_83259BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25864
	ctx.r4.s64 = ctx.r11.s64 + -25864;
	// addi r3,r10,-21204
	ctx.r3.s64 = ctx.r10.s64 + -21204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259BF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19368
	ctx.r3.s64 = ctx.r9.s64 + 19368;
	// bl 0x82ca3700
	ctx.lr = 0x83259C00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259C10"))) PPC_WEAK_FUNC(sub_83259C10);
PPC_FUNC_IMPL(__imp__sub_83259C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,-12728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12728);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,-21152
	ctx.r4.s64 = ctx.r5.s64 + -21152;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259C70"))) PPC_WEAK_FUNC(sub_83259C70);
PPC_FUNC_IMPL(__imp__sub_83259C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-21136
	ctx.r10.s64 = ctx.r11.s64 + -21136;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259C84"))) PPC_WEAK_FUNC(sub_83259C84);
PPC_FUNC_IMPL(__imp__sub_83259C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259C88"))) PPC_WEAK_FUNC(sub_83259C88);
PPC_FUNC_IMPL(__imp__sub_83259C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25032
	ctx.r4.s64 = ctx.r11.s64 + -25032;
	// addi r3,r10,-21156
	ctx.r3.s64 = ctx.r10.s64 + -21156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259CAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19400
	ctx.r3.s64 = ctx.r9.s64 + 19400;
	// bl 0x82ca3700
	ctx.lr = 0x83259CB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259CC8"))) PPC_WEAK_FUNC(sub_83259CC8);
PPC_FUNC_IMPL(__imp__sub_83259CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25020
	ctx.r4.s64 = ctx.r11.s64 + -25020;
	// addi r3,r10,-21120
	ctx.r3.s64 = ctx.r10.s64 + -21120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259CEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19416
	ctx.r3.s64 = ctx.r9.s64 + 19416;
	// bl 0x82ca3700
	ctx.lr = 0x83259CF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259D08"))) PPC_WEAK_FUNC(sub_83259D08);
PPC_FUNC_IMPL(__imp__sub_83259D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25012
	ctx.r4.s64 = ctx.r11.s64 + -25012;
	// addi r3,r10,-21116
	ctx.r3.s64 = ctx.r10.s64 + -21116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259D2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19432
	ctx.r3.s64 = ctx.r9.s64 + 19432;
	// bl 0x82ca3700
	ctx.lr = 0x83259D38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259D48"))) PPC_WEAK_FUNC(sub_83259D48);
PPC_FUNC_IMPL(__imp__sub_83259D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25004
	ctx.r4.s64 = ctx.r11.s64 + -25004;
	// addi r3,r10,-21112
	ctx.r3.s64 = ctx.r10.s64 + -21112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259D6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19448
	ctx.r3.s64 = ctx.r9.s64 + 19448;
	// bl 0x82ca3700
	ctx.lr = 0x83259D78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259D88"))) PPC_WEAK_FUNC(sub_83259D88);
PPC_FUNC_IMPL(__imp__sub_83259D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24988
	ctx.r4.s64 = ctx.r11.s64 + -24988;
	// addi r3,r10,-21108
	ctx.r3.s64 = ctx.r10.s64 + -21108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259DAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19464
	ctx.r3.s64 = ctx.r9.s64 + 19464;
	// bl 0x82ca3700
	ctx.lr = 0x83259DB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259DC8"))) PPC_WEAK_FUNC(sub_83259DC8);
PPC_FUNC_IMPL(__imp__sub_83259DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24968
	ctx.r4.s64 = ctx.r11.s64 + -24968;
	// addi r3,r10,-21104
	ctx.r3.s64 = ctx.r10.s64 + -21104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259DEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19480
	ctx.r3.s64 = ctx.r9.s64 + 19480;
	// bl 0x82ca3700
	ctx.lr = 0x83259DF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259E08"))) PPC_WEAK_FUNC(sub_83259E08);
PPC_FUNC_IMPL(__imp__sub_83259E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24948
	ctx.r4.s64 = ctx.r11.s64 + -24948;
	// addi r3,r10,-21100
	ctx.r3.s64 = ctx.r10.s64 + -21100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259E2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19496
	ctx.r3.s64 = ctx.r9.s64 + 19496;
	// bl 0x82ca3700
	ctx.lr = 0x83259E38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259E48"))) PPC_WEAK_FUNC(sub_83259E48);
PPC_FUNC_IMPL(__imp__sub_83259E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24928
	ctx.r4.s64 = ctx.r11.s64 + -24928;
	// addi r3,r10,-21096
	ctx.r3.s64 = ctx.r10.s64 + -21096;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259E6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19512
	ctx.r3.s64 = ctx.r9.s64 + 19512;
	// bl 0x82ca3700
	ctx.lr = 0x83259E78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259E88"))) PPC_WEAK_FUNC(sub_83259E88);
PPC_FUNC_IMPL(__imp__sub_83259E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x83259E9C;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83259eac
	if (ctx.cr6.eq) goto loc_83259EAC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259EAC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259eb8
	if (ctx.cr0.eq) goto loc_83259EB8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259EB8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259ec4
	if (ctx.cr0.eq) goto loc_83259EC4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259EC4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-21092
	ctx.r8.s64 = ctx.r9.s64 + -21092;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// addi r3,r7,19528
	ctx.r3.s64 = ctx.r7.s64 + 19528;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259F08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259F18"))) PPC_WEAK_FUNC(sub_83259F18);
PPC_FUNC_IMPL(__imp__sub_83259F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	ctx.lr = 0x83259F2C;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83259f3c
	if (ctx.cr6.eq) goto loc_83259F3C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259F3C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f48
	if (ctx.cr0.eq) goto loc_83259F48;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259F48:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f54
	if (ctx.cr0.eq) goto loc_83259F54;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259F54:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-21080
	ctx.r8.s64 = ctx.r9.s64 + -21080;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// addi r3,r7,19544
	ctx.r3.s64 = ctx.r7.s64 + 19544;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259F98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259FA8"))) PPC_WEAK_FUNC(sub_83259FA8);
PPC_FUNC_IMPL(__imp__sub_83259FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x83259FBC;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83259fcc
	if (ctx.cr6.eq) goto loc_83259FCC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259FCC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259fd8
	if (ctx.cr0.eq) goto loc_83259FD8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259FD8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259fe4
	if (ctx.cr0.eq) goto loc_83259FE4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259FE4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-21068
	ctx.r8.s64 = ctx.r9.s64 + -21068;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// addi r3,r7,19560
	ctx.r3.s64 = ctx.r7.s64 + 19560;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8325A028;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A038"))) PPC_WEAK_FUNC(sub_8325A038);
PPC_FUNC_IMPL(__imp__sub_8325A038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	ctx.lr = 0x8325A04C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8325a05c
	if (ctx.cr6.eq) goto loc_8325A05C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8325A05C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8325a068
	if (ctx.cr0.eq) goto loc_8325A068;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8325A068:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21056
	ctx.r8.s64 = ctx.r9.s64 + -21056;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19576
	ctx.r3.s64 = ctx.r7.s64 + 19576;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8325A088;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A098"))) PPC_WEAK_FUNC(sub_8325A098);
PPC_FUNC_IMPL(__imp__sub_8325A098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A0A4"))) PPC_WEAK_FUNC(sub_8325A0A4);
PPC_FUNC_IMPL(__imp__sub_8325A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0A8"))) PPC_WEAK_FUNC(sub_8325A0A8);
PPC_FUNC_IMPL(__imp__sub_8325A0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-21024
	ctx.r10.s64 = ctx.r11.s64 + -21024;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A0BC"))) PPC_WEAK_FUNC(sub_8325A0BC);
PPC_FUNC_IMPL(__imp__sub_8325A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0C0"))) PPC_WEAK_FUNC(sub_8325A0C0);
PPC_FUNC_IMPL(__imp__sub_8325A0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8325A0D4;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8325a0e4
	if (ctx.cr6.eq) goto loc_8325A0E4;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8325A0E4:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8325a0f0
	if (ctx.cr0.eq) goto loc_8325A0F0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8325A0F0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21008
	ctx.r8.s64 = ctx.r9.s64 + -21008;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19736
	ctx.r3.s64 = ctx.r7.s64 + 19736;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8325A110;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A120"))) PPC_WEAK_FUNC(sub_8325A120);
PPC_FUNC_IMPL(__imp__sub_8325A120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	ctx.lr = 0x8325A134;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8325a144
	if (ctx.cr6.eq) goto loc_8325A144;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8325A144:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8325a150
	if (ctx.cr0.eq) goto loc_8325A150;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8325A150:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-20996
	ctx.r8.s64 = ctx.r9.s64 + -20996;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19808
	ctx.r3.s64 = ctx.r7.s64 + 19808;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8325A170;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A180"))) PPC_WEAK_FUNC(sub_8325A180);
PPC_FUNC_IMPL(__imp__sub_8325A180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25864
	ctx.r4.s64 = ctx.r11.s64 + -25864;
	// addi r3,r10,-21028
	ctx.r3.s64 = ctx.r10.s64 + -21028;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A1A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19880
	ctx.r3.s64 = ctx.r9.s64 + 19880;
	// bl 0x82ca3700
	ctx.lr = 0x8325A1B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A1C0"))) PPC_WEAK_FUNC(sub_8325A1C0);
PPC_FUNC_IMPL(__imp__sub_8325A1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A1CC"))) PPC_WEAK_FUNC(sub_8325A1CC);
PPC_FUNC_IMPL(__imp__sub_8325A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A1D0"))) PPC_WEAK_FUNC(sub_8325A1D0);
PPC_FUNC_IMPL(__imp__sub_8325A1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22264
	ctx.r4.s64 = ctx.r11.s64 + 22264;
	// addi r3,r10,-20968
	ctx.r3.s64 = ctx.r10.s64 + -20968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A1F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19912
	ctx.r3.s64 = ctx.r9.s64 + 19912;
	// bl 0x82ca3700
	ctx.lr = 0x8325A200;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A210"))) PPC_WEAK_FUNC(sub_8325A210);
PPC_FUNC_IMPL(__imp__sub_8325A210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A21C"))) PPC_WEAK_FUNC(sub_8325A21C);
PPC_FUNC_IMPL(__imp__sub_8325A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A220"))) PPC_WEAK_FUNC(sub_8325A220);
PPC_FUNC_IMPL(__imp__sub_8325A220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A22C"))) PPC_WEAK_FUNC(sub_8325A22C);
PPC_FUNC_IMPL(__imp__sub_8325A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A230"))) PPC_WEAK_FUNC(sub_8325A230);
PPC_FUNC_IMPL(__imp__sub_8325A230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22584
	ctx.r4.s64 = ctx.r11.s64 + -22584;
	// addi r3,r10,-20932
	ctx.r3.s64 = ctx.r10.s64 + -20932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A254;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20136
	ctx.r3.s64 = ctx.r9.s64 + 20136;
	// bl 0x82ca3700
	ctx.lr = 0x8325A260;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A270"))) PPC_WEAK_FUNC(sub_8325A270);
PPC_FUNC_IMPL(__imp__sub_8325A270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21668
	ctx.r4.s64 = ctx.r11.s64 + -21668;
	// addi r3,r10,-20928
	ctx.r3.s64 = ctx.r10.s64 + -20928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A294;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20152
	ctx.r3.s64 = ctx.r9.s64 + 20152;
	// bl 0x82ca3700
	ctx.lr = 0x8325A2A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A2B0"))) PPC_WEAK_FUNC(sub_8325A2B0);
PPC_FUNC_IMPL(__imp__sub_8325A2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-32620
	ctx.r4.s64 = ctx.r11.s64 + -32620;
	// addi r3,r10,-20924
	ctx.r3.s64 = ctx.r10.s64 + -20924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A2D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20168
	ctx.r3.s64 = ctx.r9.s64 + 20168;
	// bl 0x82ca3700
	ctx.lr = 0x8325A2E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A2F0"))) PPC_WEAK_FUNC(sub_8325A2F0);
PPC_FUNC_IMPL(__imp__sub_8325A2F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-20920
	ctx.r3.s64 = ctx.r10.s64 + -20920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A314;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20184
	ctx.r3.s64 = ctx.r9.s64 + 20184;
	// bl 0x82ca3700
	ctx.lr = 0x8325A320;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A330"))) PPC_WEAK_FUNC(sub_8325A330);
PPC_FUNC_IMPL(__imp__sub_8325A330) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-20916
	ctx.r3.s64 = ctx.r10.s64 + -20916;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A354;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20200
	ctx.r3.s64 = ctx.r9.s64 + 20200;
	// bl 0x82ca3700
	ctx.lr = 0x8325A360;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A370"))) PPC_WEAK_FUNC(sub_8325A370);
PPC_FUNC_IMPL(__imp__sub_8325A370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-20912
	ctx.r3.s64 = ctx.r10.s64 + -20912;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A394;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20216
	ctx.r3.s64 = ctx.r9.s64 + 20216;
	// bl 0x82ca3700
	ctx.lr = 0x8325A3A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A3B0"))) PPC_WEAK_FUNC(sub_8325A3B0);
PPC_FUNC_IMPL(__imp__sub_8325A3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A3BC"))) PPC_WEAK_FUNC(sub_8325A3BC);
PPC_FUNC_IMPL(__imp__sub_8325A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A3C0"))) PPC_WEAK_FUNC(sub_8325A3C0);
PPC_FUNC_IMPL(__imp__sub_8325A3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18164
	ctx.r4.s64 = ctx.r11.s64 + -18164;
	// addi r3,r10,-20888
	ctx.r3.s64 = ctx.r10.s64 + -20888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A3E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20336
	ctx.r3.s64 = ctx.r9.s64 + 20336;
	// bl 0x82ca3700
	ctx.lr = 0x8325A3F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A400"))) PPC_WEAK_FUNC(sub_8325A400);
PPC_FUNC_IMPL(__imp__sub_8325A400) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3608
	ctx.r4.s64 = ctx.r11.s64 + 3608;
	// addi r3,r10,-20884
	ctx.r3.s64 = ctx.r10.s64 + -20884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A424;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20352
	ctx.r3.s64 = ctx.r9.s64 + 20352;
	// bl 0x82ca3700
	ctx.lr = 0x8325A430;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A440"))) PPC_WEAK_FUNC(sub_8325A440);
PPC_FUNC_IMPL(__imp__sub_8325A440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18144
	ctx.r4.s64 = ctx.r11.s64 + -18144;
	// addi r3,r10,-20880
	ctx.r3.s64 = ctx.r10.s64 + -20880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A464;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20368
	ctx.r3.s64 = ctx.r9.s64 + 20368;
	// bl 0x82ca3700
	ctx.lr = 0x8325A470;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A480"))) PPC_WEAK_FUNC(sub_8325A480);
PPC_FUNC_IMPL(__imp__sub_8325A480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18108
	ctx.r4.s64 = ctx.r11.s64 + -18108;
	// addi r3,r10,-20876
	ctx.r3.s64 = ctx.r10.s64 + -20876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A4A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20384
	ctx.r3.s64 = ctx.r9.s64 + 20384;
	// bl 0x82ca3700
	ctx.lr = 0x8325A4B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A4C0"))) PPC_WEAK_FUNC(sub_8325A4C0);
PPC_FUNC_IMPL(__imp__sub_8325A4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18076
	ctx.r4.s64 = ctx.r11.s64 + -18076;
	// addi r3,r10,-20872
	ctx.r3.s64 = ctx.r10.s64 + -20872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A4E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20400
	ctx.r3.s64 = ctx.r9.s64 + 20400;
	// bl 0x82ca3700
	ctx.lr = 0x8325A4F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A500"))) PPC_WEAK_FUNC(sub_8325A500);
PPC_FUNC_IMPL(__imp__sub_8325A500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18020
	ctx.r4.s64 = ctx.r11.s64 + -18020;
	// addi r3,r10,-20868
	ctx.r3.s64 = ctx.r10.s64 + -20868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A524;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20416
	ctx.r3.s64 = ctx.r9.s64 + 20416;
	// bl 0x82ca3700
	ctx.lr = 0x8325A530;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A540"))) PPC_WEAK_FUNC(sub_8325A540);
PPC_FUNC_IMPL(__imp__sub_8325A540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17984
	ctx.r4.s64 = ctx.r11.s64 + -17984;
	// addi r3,r10,-20864
	ctx.r3.s64 = ctx.r10.s64 + -20864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A564;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20432
	ctx.r3.s64 = ctx.r9.s64 + 20432;
	// bl 0x82ca3700
	ctx.lr = 0x8325A570;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A580"))) PPC_WEAK_FUNC(sub_8325A580);
PPC_FUNC_IMPL(__imp__sub_8325A580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17936
	ctx.r4.s64 = ctx.r11.s64 + -17936;
	// addi r3,r10,-20860
	ctx.r3.s64 = ctx.r10.s64 + -20860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A5A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20448
	ctx.r3.s64 = ctx.r9.s64 + 20448;
	// bl 0x82ca3700
	ctx.lr = 0x8325A5B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A5C0"))) PPC_WEAK_FUNC(sub_8325A5C0);
PPC_FUNC_IMPL(__imp__sub_8325A5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17888
	ctx.r4.s64 = ctx.r11.s64 + -17888;
	// addi r3,r10,-20856
	ctx.r3.s64 = ctx.r10.s64 + -20856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A5E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20464
	ctx.r3.s64 = ctx.r9.s64 + 20464;
	// bl 0x82ca3700
	ctx.lr = 0x8325A5F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A600"))) PPC_WEAK_FUNC(sub_8325A600);
PPC_FUNC_IMPL(__imp__sub_8325A600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17852
	ctx.r4.s64 = ctx.r11.s64 + -17852;
	// addi r3,r10,-20852
	ctx.r3.s64 = ctx.r10.s64 + -20852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A624;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20480
	ctx.r3.s64 = ctx.r9.s64 + 20480;
	// bl 0x82ca3700
	ctx.lr = 0x8325A630;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A640"))) PPC_WEAK_FUNC(sub_8325A640);
PPC_FUNC_IMPL(__imp__sub_8325A640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17808
	ctx.r4.s64 = ctx.r11.s64 + -17808;
	// addi r3,r10,-20848
	ctx.r3.s64 = ctx.r10.s64 + -20848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A664;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20496
	ctx.r3.s64 = ctx.r9.s64 + 20496;
	// bl 0x82ca3700
	ctx.lr = 0x8325A670;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A680"))) PPC_WEAK_FUNC(sub_8325A680);
PPC_FUNC_IMPL(__imp__sub_8325A680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17744
	ctx.r4.s64 = ctx.r11.s64 + -17744;
	// addi r3,r10,-20844
	ctx.r3.s64 = ctx.r10.s64 + -20844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A6A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20512
	ctx.r3.s64 = ctx.r9.s64 + 20512;
	// bl 0x82ca3700
	ctx.lr = 0x8325A6B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A6C0"))) PPC_WEAK_FUNC(sub_8325A6C0);
PPC_FUNC_IMPL(__imp__sub_8325A6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-29220
	ctx.r4.s64 = ctx.r11.s64 + -29220;
	// addi r3,r10,-20840
	ctx.r3.s64 = ctx.r10.s64 + -20840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A6E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20528
	ctx.r3.s64 = ctx.r9.s64 + 20528;
	// bl 0x82ca3700
	ctx.lr = 0x8325A6F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A700"))) PPC_WEAK_FUNC(sub_8325A700);
PPC_FUNC_IMPL(__imp__sub_8325A700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-29208
	ctx.r4.s64 = ctx.r11.s64 + -29208;
	// addi r3,r10,-20836
	ctx.r3.s64 = ctx.r10.s64 + -20836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A724;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20544
	ctx.r3.s64 = ctx.r9.s64 + 20544;
	// bl 0x82ca3700
	ctx.lr = 0x8325A730;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A740"))) PPC_WEAK_FUNC(sub_8325A740);
PPC_FUNC_IMPL(__imp__sub_8325A740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-16424
	ctx.r4.s64 = ctx.r11.s64 + -16424;
	// addi r3,r10,-20832
	ctx.r3.s64 = ctx.r10.s64 + -20832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A764;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20560
	ctx.r3.s64 = ctx.r9.s64 + 20560;
	// bl 0x82ca3700
	ctx.lr = 0x8325A770;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A780"))) PPC_WEAK_FUNC(sub_8325A780);
PPC_FUNC_IMPL(__imp__sub_8325A780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-16464
	ctx.r4.s64 = ctx.r11.s64 + -16464;
	// addi r3,r10,-20828
	ctx.r3.s64 = ctx.r10.s64 + -20828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A7A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20576
	ctx.r3.s64 = ctx.r9.s64 + 20576;
	// bl 0x82ca3700
	ctx.lr = 0x8325A7B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A7C0"))) PPC_WEAK_FUNC(sub_8325A7C0);
PPC_FUNC_IMPL(__imp__sub_8325A7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-16440
	ctx.r4.s64 = ctx.r11.s64 + -16440;
	// addi r3,r10,-20824
	ctx.r3.s64 = ctx.r10.s64 + -20824;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A7E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20592
	ctx.r3.s64 = ctx.r9.s64 + 20592;
	// bl 0x82ca3700
	ctx.lr = 0x8325A7F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A800"))) PPC_WEAK_FUNC(sub_8325A800);
PPC_FUNC_IMPL(__imp__sub_8325A800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17684
	ctx.r4.s64 = ctx.r11.s64 + -17684;
	// addi r3,r10,-20820
	ctx.r3.s64 = ctx.r10.s64 + -20820;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A824;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20608
	ctx.r3.s64 = ctx.r9.s64 + 20608;
	// bl 0x82ca3700
	ctx.lr = 0x8325A830;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A840"))) PPC_WEAK_FUNC(sub_8325A840);
PPC_FUNC_IMPL(__imp__sub_8325A840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17672
	ctx.r4.s64 = ctx.r11.s64 + -17672;
	// addi r3,r10,-20816
	ctx.r3.s64 = ctx.r10.s64 + -20816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A864;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20624
	ctx.r3.s64 = ctx.r9.s64 + 20624;
	// bl 0x82ca3700
	ctx.lr = 0x8325A870;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A880"))) PPC_WEAK_FUNC(sub_8325A880);
PPC_FUNC_IMPL(__imp__sub_8325A880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17660
	ctx.r4.s64 = ctx.r11.s64 + -17660;
	// addi r3,r10,-20812
	ctx.r3.s64 = ctx.r10.s64 + -20812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A8A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20640
	ctx.r3.s64 = ctx.r9.s64 + 20640;
	// bl 0x82ca3700
	ctx.lr = 0x8325A8B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A8C0"))) PPC_WEAK_FUNC(sub_8325A8C0);
PPC_FUNC_IMPL(__imp__sub_8325A8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17648
	ctx.r4.s64 = ctx.r11.s64 + -17648;
	// addi r3,r10,-20808
	ctx.r3.s64 = ctx.r10.s64 + -20808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A8E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20656
	ctx.r3.s64 = ctx.r9.s64 + 20656;
	// bl 0x82ca3700
	ctx.lr = 0x8325A8F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A900"))) PPC_WEAK_FUNC(sub_8325A900);
PPC_FUNC_IMPL(__imp__sub_8325A900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17636
	ctx.r4.s64 = ctx.r11.s64 + -17636;
	// addi r3,r10,-20804
	ctx.r3.s64 = ctx.r10.s64 + -20804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A924;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20672
	ctx.r3.s64 = ctx.r9.s64 + 20672;
	// bl 0x82ca3700
	ctx.lr = 0x8325A930;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A940"))) PPC_WEAK_FUNC(sub_8325A940);
PPC_FUNC_IMPL(__imp__sub_8325A940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17612
	ctx.r4.s64 = ctx.r11.s64 + -17612;
	// addi r3,r10,-20800
	ctx.r3.s64 = ctx.r10.s64 + -20800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325A964;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20688
	ctx.r3.s64 = ctx.r9.s64 + 20688;
	// bl 0x82ca3700
	ctx.lr = 0x8325A970;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A980"))) PPC_WEAK_FUNC(sub_8325A980);
PPC_FUNC_IMPL(__imp__sub_8325A980) {
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
	// addi r31,r11,-20796
	ctx.r31.s64 = ctx.r11.s64 + -20796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82344e68
	ctx.lr = 0x8325A9A0;
	sub_82344E68(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r9.u8);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r3,r8,20704
	ctx.r3.s64 = ctx.r8.s64 + 20704;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8325A9D8;
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

__attribute__((alias("__imp__sub_8325A9EC"))) PPC_WEAK_FUNC(sub_8325A9EC);
PPC_FUNC_IMPL(__imp__sub_8325A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A9F0"))) PPC_WEAK_FUNC(sub_8325A9F0);
PPC_FUNC_IMPL(__imp__sub_8325A9F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-20784
	ctx.r3.s64 = ctx.r10.s64 + -20784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AA14;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20720
	ctx.r3.s64 = ctx.r9.s64 + 20720;
	// bl 0x82ca3700
	ctx.lr = 0x8325AA20;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AA30"))) PPC_WEAK_FUNC(sub_8325AA30);
PPC_FUNC_IMPL(__imp__sub_8325AA30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-20780
	ctx.r3.s64 = ctx.r10.s64 + -20780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AA54;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20736
	ctx.r3.s64 = ctx.r9.s64 + 20736;
	// bl 0x82ca3700
	ctx.lr = 0x8325AA60;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AA70"))) PPC_WEAK_FUNC(sub_8325AA70);
PPC_FUNC_IMPL(__imp__sub_8325AA70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-20776
	ctx.r3.s64 = ctx.r10.s64 + -20776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AA94;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20752
	ctx.r3.s64 = ctx.r9.s64 + 20752;
	// bl 0x82ca3700
	ctx.lr = 0x8325AAA0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AAB0"))) PPC_WEAK_FUNC(sub_8325AAB0);
PPC_FUNC_IMPL(__imp__sub_8325AAB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-20772
	ctx.r3.s64 = ctx.r11.s64 + -20772;
	// bl 0x82a12b08
	ctx.lr = 0x8325AAC8;
	sub_82A12B08(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,20768
	ctx.r3.s64 = ctx.r10.s64 + 20768;
	// bl 0x82ca3700
	ctx.lr = 0x8325AAD4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AAE4"))) PPC_WEAK_FUNC(sub_8325AAE4);
PPC_FUNC_IMPL(__imp__sub_8325AAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AAE8"))) PPC_WEAK_FUNC(sub_8325AAE8);
PPC_FUNC_IMPL(__imp__sub_8325AAE8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r11,-20760
	ctx.r31.s64 = ctx.r11.s64 + -20760;
	// addi r4,r10,-14784
	ctx.r4.s64 = ctx.r10.s64 + -14784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AB14;
	sub_8222CF18(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-14812
	ctx.r4.s64 = ctx.r9.s64 + -14812;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8222cf18
	ctx.lr = 0x8325AB28;
	sub_8222CF18(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-14840
	ctx.r4.s64 = ctx.r8.s64 + -14840;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8222cf18
	ctx.lr = 0x8325AB3C;
	sub_8222CF18(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-14868
	ctx.r4.s64 = ctx.r7.s64 + -14868;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8222cf18
	ctx.lr = 0x8325AB50;
	sub_8222CF18(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-14896
	ctx.r4.s64 = ctx.r6.s64 + -14896;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8222cf18
	ctx.lr = 0x8325AB64;
	sub_8222CF18(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-14924
	ctx.r4.s64 = ctx.r4.s64 + -14924;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8222cf18
	ctx.lr = 0x8325AB78;
	sub_8222CF18(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-14952
	ctx.r4.s64 = ctx.r3.s64 + -14952;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8222cf18
	ctx.lr = 0x8325AB8C;
	sub_8222CF18(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-14980
	ctx.r4.s64 = ctx.r11.s64 + -14980;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8222cf18
	ctx.lr = 0x8325ABA0;
	sub_8222CF18(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-15008
	ctx.r4.s64 = ctx.r10.s64 + -15008;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8222cf18
	ctx.lr = 0x8325ABB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20784
	ctx.r3.s64 = ctx.r9.s64 + 20784;
	// bl 0x82ca3700
	ctx.lr = 0x8325ABC0;
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

__attribute__((alias("__imp__sub_8325ABD4"))) PPC_WEAK_FUNC(sub_8325ABD4);
PPC_FUNC_IMPL(__imp__sub_8325ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325ABD8"))) PPC_WEAK_FUNC(sub_8325ABD8);
PPC_FUNC_IMPL(__imp__sub_8325ABD8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r11,-20720
	ctx.r31.s64 = ctx.r11.s64 + -20720;
	// addi r4,r10,-12972
	ctx.r4.s64 = ctx.r10.s64 + -12972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AC04;
	sub_8222CF18(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-12992
	ctx.r4.s64 = ctx.r9.s64 + -12992;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8222cf18
	ctx.lr = 0x8325AC20;
	sub_8222CF18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-13016
	ctx.r4.s64 = ctx.r8.s64 + -13016;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8222cf18
	ctx.lr = 0x8325AC3C;
	sub_8222CF18(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-13040
	ctx.r4.s64 = ctx.r7.s64 + -13040;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8222cf18
	ctx.lr = 0x8325AC58;
	sub_8222CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-13056
	ctx.r4.s64 = ctx.r6.s64 + -13056;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8222cf18
	ctx.lr = 0x8325AC74;
	sub_8222CF18(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-13076
	ctx.r4.s64 = ctx.r4.s64 + -13076;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8222cf18
	ctx.lr = 0x8325AC90;
	sub_8222CF18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-15700
	ctx.r4.s64 = ctx.r3.s64 + -15700;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8222cf18
	ctx.lr = 0x8325ACAC;
	sub_8222CF18(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-13088
	ctx.r4.s64 = ctx.r10.s64 + -13088;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8222cf18
	ctx.lr = 0x8325ACC8;
	sub_8222CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-13120
	ctx.r4.s64 = ctx.r9.s64 + -13120;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8222cf18
	ctx.lr = 0x8325ACE4;
	sub_8222CF18(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-13152
	ctx.r4.s64 = ctx.r8.s64 + -13152;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8222cf18
	ctx.lr = 0x8325AD00;
	sub_8222CF18(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-31956
	ctx.r4.s64 = ctx.r7.s64 + -31956;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8325AD1C;
	sub_8222CF18(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-13172
	ctx.r4.s64 = ctx.r6.s64 + -13172;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8325AD38;
	sub_8222CF18(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-13192
	ctx.r4.s64 = ctx.r4.s64 + -13192;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8222cf18
	ctx.lr = 0x8325AD54;
	sub_8222CF18(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-13212
	ctx.r4.s64 = ctx.r3.s64 + -13212;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8222cf18
	ctx.lr = 0x8325AD70;
	sub_8222CF18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-13236
	ctx.r4.s64 = ctx.r10.s64 + -13236;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8222cf18
	ctx.lr = 0x8325AD8C;
	sub_8222CF18(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-13260
	ctx.r4.s64 = ctx.r9.s64 + -13260;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x8325ADA8;
	sub_8222CF18(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-13284
	ctx.r4.s64 = ctx.r8.s64 + -13284;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8222cf18
	ctx.lr = 0x8325ADC4;
	sub_8222CF18(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r7,20920
	ctx.r3.s64 = ctx.r7.s64 + 20920;
	// bl 0x82ca3700
	ctx.lr = 0x8325ADD8;
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

__attribute__((alias("__imp__sub_8325ADEC"))) PPC_WEAK_FUNC(sub_8325ADEC);
PPC_FUNC_IMPL(__imp__sub_8325ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325ADF0"))) PPC_WEAK_FUNC(sub_8325ADF0);
PPC_FUNC_IMPL(__imp__sub_8325ADF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,-20584
	ctx.r3.s64 = ctx.r10.s64 + -20584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AE14;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21024
	ctx.r3.s64 = ctx.r9.s64 + 21024;
	// bl 0x82ca3700
	ctx.lr = 0x8325AE20;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AE30"))) PPC_WEAK_FUNC(sub_8325AE30);
PPC_FUNC_IMPL(__imp__sub_8325AE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12160
	ctx.r4.s64 = ctx.r11.s64 + -12160;
	// addi r3,r10,-20580
	ctx.r3.s64 = ctx.r10.s64 + -20580;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AE54;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21040
	ctx.r3.s64 = ctx.r9.s64 + 21040;
	// bl 0x82ca3700
	ctx.lr = 0x8325AE60;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AE70"))) PPC_WEAK_FUNC(sub_8325AE70);
PPC_FUNC_IMPL(__imp__sub_8325AE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// bl 0x82188cf0
	ctx.lr = 0x8325AE88;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20576, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AEA4"))) PPC_WEAK_FUNC(sub_8325AEA4);
PPC_FUNC_IMPL(__imp__sub_8325AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AEA8"))) PPC_WEAK_FUNC(sub_8325AEA8);
PPC_FUNC_IMPL(__imp__sub_8325AEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-12108
	ctx.r3.s64 = ctx.r11.s64 + -12108;
	// bl 0x82188cf0
	ctx.lr = 0x8325AEC0;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20572, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AEDC"))) PPC_WEAK_FUNC(sub_8325AEDC);
PPC_FUNC_IMPL(__imp__sub_8325AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AEE0"))) PPC_WEAK_FUNC(sub_8325AEE0);
PPC_FUNC_IMPL(__imp__sub_8325AEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// bl 0x82188cf0
	ctx.lr = 0x8325AEF8;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20568, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AF14"))) PPC_WEAK_FUNC(sub_8325AF14);
PPC_FUNC_IMPL(__imp__sub_8325AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AF18"))) PPC_WEAK_FUNC(sub_8325AF18);
PPC_FUNC_IMPL(__imp__sub_8325AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12084
	ctx.r4.s64 = ctx.r11.s64 + -12084;
	// addi r3,r10,-20564
	ctx.r3.s64 = ctx.r10.s64 + -20564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AF3C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21056
	ctx.r3.s64 = ctx.r9.s64 + 21056;
	// bl 0x82ca3700
	ctx.lr = 0x8325AF48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AF58"))) PPC_WEAK_FUNC(sub_8325AF58);
PPC_FUNC_IMPL(__imp__sub_8325AF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12052
	ctx.r4.s64 = ctx.r11.s64 + -12052;
	// addi r3,r10,-20560
	ctx.r3.s64 = ctx.r10.s64 + -20560;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325AF7C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21072
	ctx.r3.s64 = ctx.r9.s64 + 21072;
	// bl 0x82ca3700
	ctx.lr = 0x8325AF88;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AF98"))) PPC_WEAK_FUNC(sub_8325AF98);
PPC_FUNC_IMPL(__imp__sub_8325AF98) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17736
	ctx.r4.s64 = ctx.r11.s64 + 17736;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8325AFBC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x8325AFC8;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x8325AFD0;
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20556, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8325AFE4;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8325AFF0:
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
	// bne 0x8325aff0
	if (!ctx.cr0.eq) goto loc_8325AFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8325B01C;
	sub_821C67D8(ctx, base);
loc_8325B01C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8325b01c
	if (!ctx.cr0.eq) goto loc_8325B01C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// bl 0x82ca3700
	ctx.lr = 0x8325B044;
	sub_82CA3700(ctx, base);
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

__attribute__((alias("__imp__sub_8325B058"))) PPC_WEAK_FUNC(sub_8325B058);
PPC_FUNC_IMPL(__imp__sub_8325B058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-12044
	ctx.r3.s64 = ctx.r11.s64 + -12044;
	// bl 0x82188cf0
	ctx.lr = 0x8325B070;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20552, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B08C"))) PPC_WEAK_FUNC(sub_8325B08C);
PPC_FUNC_IMPL(__imp__sub_8325B08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B090"))) PPC_WEAK_FUNC(sub_8325B090);
PPC_FUNC_IMPL(__imp__sub_8325B090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-12028
	ctx.r3.s64 = ctx.r11.s64 + -12028;
	// bl 0x82188cf0
	ctx.lr = 0x8325B0A8;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20548, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B0C4"))) PPC_WEAK_FUNC(sub_8325B0C4);
PPC_FUNC_IMPL(__imp__sub_8325B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B0C8"))) PPC_WEAK_FUNC(sub_8325B0C8);
PPC_FUNC_IMPL(__imp__sub_8325B0C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = ctx.r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B0E8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B100"))) PPC_WEAK_FUNC(sub_8325B100);
PPC_FUNC_IMPL(__imp__sub_8325B100) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B120;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B138"))) PPC_WEAK_FUNC(sub_8325B138);
PPC_FUNC_IMPL(__imp__sub_8325B138) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = ctx.r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B158;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B170"))) PPC_WEAK_FUNC(sub_8325B170);
PPC_FUNC_IMPL(__imp__sub_8325B170) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = ctx.r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B190;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B1A8"))) PPC_WEAK_FUNC(sub_8325B1A8);
PPC_FUNC_IMPL(__imp__sub_8325B1A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = ctx.r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B1C8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B1E0"))) PPC_WEAK_FUNC(sub_8325B1E0);
PPC_FUNC_IMPL(__imp__sub_8325B1E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = ctx.r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B200;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B218"))) PPC_WEAK_FUNC(sub_8325B218);
PPC_FUNC_IMPL(__imp__sub_8325B218) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = ctx.r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B238;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B250"))) PPC_WEAK_FUNC(sub_8325B250);
PPC_FUNC_IMPL(__imp__sub_8325B250) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = ctx.r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B270;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B288"))) PPC_WEAK_FUNC(sub_8325B288);
PPC_FUNC_IMPL(__imp__sub_8325B288) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = ctx.r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B2A8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B2C0"))) PPC_WEAK_FUNC(sub_8325B2C0);
PPC_FUNC_IMPL(__imp__sub_8325B2C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B2E0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B2F8"))) PPC_WEAK_FUNC(sub_8325B2F8);
PPC_FUNC_IMPL(__imp__sub_8325B2F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B318;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B330"))) PPC_WEAK_FUNC(sub_8325B330);
PPC_FUNC_IMPL(__imp__sub_8325B330) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = ctx.r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B350;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B368"))) PPC_WEAK_FUNC(sub_8325B368);
PPC_FUNC_IMPL(__imp__sub_8325B368) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B388;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B3A0"))) PPC_WEAK_FUNC(sub_8325B3A0);
PPC_FUNC_IMPL(__imp__sub_8325B3A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B3C0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B3D8"))) PPC_WEAK_FUNC(sub_8325B3D8);
PPC_FUNC_IMPL(__imp__sub_8325B3D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B3F8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B410"))) PPC_WEAK_FUNC(sub_8325B410);
PPC_FUNC_IMPL(__imp__sub_8325B410) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B430;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B448"))) PPC_WEAK_FUNC(sub_8325B448);
PPC_FUNC_IMPL(__imp__sub_8325B448) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = ctx.r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B468;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B480"))) PPC_WEAK_FUNC(sub_8325B480);
PPC_FUNC_IMPL(__imp__sub_8325B480) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = ctx.r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B4A0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B4B8"))) PPC_WEAK_FUNC(sub_8325B4B8);
PPC_FUNC_IMPL(__imp__sub_8325B4B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B4D8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B4F0"))) PPC_WEAK_FUNC(sub_8325B4F0);
PPC_FUNC_IMPL(__imp__sub_8325B4F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = ctx.r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B510;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B528"))) PPC_WEAK_FUNC(sub_8325B528);
PPC_FUNC_IMPL(__imp__sub_8325B528) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = ctx.r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x8325B548;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B560"))) PPC_WEAK_FUNC(sub_8325B560);
PPC_FUNC_IMPL(__imp__sub_8325B560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-11980
	ctx.r3.s64 = ctx.r11.s64 + -11980;
	// bl 0x82188cf0
	ctx.lr = 0x8325B578;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B594"))) PPC_WEAK_FUNC(sub_8325B594);
PPC_FUNC_IMPL(__imp__sub_8325B594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B598"))) PPC_WEAK_FUNC(sub_8325B598);
PPC_FUNC_IMPL(__imp__sub_8325B598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-11964
	ctx.r3.s64 = ctx.r11.s64 + -11964;
	// bl 0x82188cf0
	ctx.lr = 0x8325B5B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20456, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B5CC"))) PPC_WEAK_FUNC(sub_8325B5CC);
PPC_FUNC_IMPL(__imp__sub_8325B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B5D0"))) PPC_WEAK_FUNC(sub_8325B5D0);
PPC_FUNC_IMPL(__imp__sub_8325B5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-11952
	ctx.r3.s64 = ctx.r11.s64 + -11952;
	// bl 0x82188cf0
	ctx.lr = 0x8325B5E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20452, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B604"))) PPC_WEAK_FUNC(sub_8325B604);
PPC_FUNC_IMPL(__imp__sub_8325B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B608"))) PPC_WEAK_FUNC(sub_8325B608);
PPC_FUNC_IMPL(__imp__sub_8325B608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-11940
	ctx.r3.s64 = ctx.r11.s64 + -11940;
	// bl 0x82188cf0
	ctx.lr = 0x8325B620;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20448, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B63C"))) PPC_WEAK_FUNC(sub_8325B63C);
PPC_FUNC_IMPL(__imp__sub_8325B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B640"))) PPC_WEAK_FUNC(sub_8325B640);
PPC_FUNC_IMPL(__imp__sub_8325B640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-11924
	ctx.r3.s64 = ctx.r11.s64 + -11924;
	// bl 0x82188cf0
	ctx.lr = 0x8325B658;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B674"))) PPC_WEAK_FUNC(sub_8325B674);
PPC_FUNC_IMPL(__imp__sub_8325B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B678"))) PPC_WEAK_FUNC(sub_8325B678);
PPC_FUNC_IMPL(__imp__sub_8325B678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-11908
	ctx.r3.s64 = ctx.r11.s64 + -11908;
	// bl 0x82188cf0
	ctx.lr = 0x8325B690;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20440, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B6AC"))) PPC_WEAK_FUNC(sub_8325B6AC);
PPC_FUNC_IMPL(__imp__sub_8325B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B6B0"))) PPC_WEAK_FUNC(sub_8325B6B0);
PPC_FUNC_IMPL(__imp__sub_8325B6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// bl 0x82188cf0
	ctx.lr = 0x8325B6C8;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20436, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B6E4"))) PPC_WEAK_FUNC(sub_8325B6E4);
PPC_FUNC_IMPL(__imp__sub_8325B6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B6E8"))) PPC_WEAK_FUNC(sub_8325B6E8);
PPC_FUNC_IMPL(__imp__sub_8325B6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-12028
	ctx.r3.s64 = ctx.r11.s64 + -12028;
	// bl 0x82188cf0
	ctx.lr = 0x8325B700;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20432, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B71C"))) PPC_WEAK_FUNC(sub_8325B71C);
PPC_FUNC_IMPL(__imp__sub_8325B71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B720"))) PPC_WEAK_FUNC(sub_8325B720);
PPC_FUNC_IMPL(__imp__sub_8325B720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-12044
	ctx.r3.s64 = ctx.r11.s64 + -12044;
	// bl 0x82188cf0
	ctx.lr = 0x8325B738;
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20428, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B754"))) PPC_WEAK_FUNC(sub_8325B754);
PPC_FUNC_IMPL(__imp__sub_8325B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B758"))) PPC_WEAK_FUNC(sub_8325B758);
PPC_FUNC_IMPL(__imp__sub_8325B758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11868
	ctx.r4.s64 = ctx.r11.s64 + -11868;
	// addi r3,r10,-20424
	ctx.r3.s64 = ctx.r10.s64 + -20424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325B77C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21096
	ctx.r3.s64 = ctx.r9.s64 + 21096;
	// bl 0x82ca3700
	ctx.lr = 0x8325B788;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B798"))) PPC_WEAK_FUNC(sub_8325B798);
PPC_FUNC_IMPL(__imp__sub_8325B798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,17852
	ctx.r4.s64 = ctx.r11.s64 + 17852;
	// addi r3,r10,-20420
	ctx.r3.s64 = ctx.r10.s64 + -20420;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325B7BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21112
	ctx.r3.s64 = ctx.r9.s64 + 21112;
	// bl 0x82ca3700
	ctx.lr = 0x8325B7C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B7D8"))) PPC_WEAK_FUNC(sub_8325B7D8);
PPC_FUNC_IMPL(__imp__sub_8325B7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,17864
	ctx.r4.s64 = ctx.r11.s64 + 17864;
	// addi r3,r10,-20416
	ctx.r3.s64 = ctx.r10.s64 + -20416;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325B7FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21128
	ctx.r3.s64 = ctx.r9.s64 + 21128;
	// bl 0x82ca3700
	ctx.lr = 0x8325B808;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B818"))) PPC_WEAK_FUNC(sub_8325B818);
PPC_FUNC_IMPL(__imp__sub_8325B818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12052
	ctx.r4.s64 = ctx.r11.s64 + -12052;
	// addi r3,r10,-20412
	ctx.r3.s64 = ctx.r10.s64 + -20412;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325B83C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21144
	ctx.r3.s64 = ctx.r9.s64 + 21144;
	// bl 0x82ca3700
	ctx.lr = 0x8325B848;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B858"))) PPC_WEAK_FUNC(sub_8325B858);
PPC_FUNC_IMPL(__imp__sub_8325B858) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-20408
	ctx.r31.s64 = ctx.r11.s64 + -20408;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325B884;
	sub_8222CF18(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18096
	ctx.r4.s64 = ctx.r9.s64 + 18096;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8222cf18
	ctx.lr = 0x8325B898;
	sub_8222CF18(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18056
	ctx.r4.s64 = ctx.r8.s64 + 18056;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8222cf18
	ctx.lr = 0x8325B8AC;
	sub_8222CF18(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18016
	ctx.r4.s64 = ctx.r7.s64 + 18016;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8222cf18
	ctx.lr = 0x8325B8C0;
	sub_8222CF18(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,17976
	ctx.r4.s64 = ctx.r6.s64 + 17976;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8222cf18
	ctx.lr = 0x8325B8D4;
	sub_8222CF18(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,17936
	ctx.r4.s64 = ctx.r4.s64 + 17936;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8222cf18
	ctx.lr = 0x8325B8E8;
	sub_8222CF18(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,17896
	ctx.r4.s64 = ctx.r3.s64 + 17896;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8222cf18
	ctx.lr = 0x8325B8FC;
	sub_8222CF18(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21160
	ctx.r3.s64 = ctx.r11.s64 + 21160;
	// bl 0x82ca3700
	ctx.lr = 0x8325B908;
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

__attribute__((alias("__imp__sub_8325B91C"))) PPC_WEAK_FUNC(sub_8325B91C);
PPC_FUNC_IMPL(__imp__sub_8325B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B920"))) PPC_WEAK_FUNC(sub_8325B920);
PPC_FUNC_IMPL(__imp__sub_8325B920) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-20380
	ctx.r31.s64 = ctx.r11.s64 + -20380;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325B94C;
	sub_8222CF18(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18256
	ctx.r4.s64 = ctx.r9.s64 + 18256;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8222cf18
	ctx.lr = 0x8325B960;
	sub_8222CF18(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8222cf18
	ctx.lr = 0x8325B974;
	sub_8222CF18(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18208
	ctx.r4.s64 = ctx.r7.s64 + 18208;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8222cf18
	ctx.lr = 0x8325B988;
	sub_8222CF18(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18184
	ctx.r4.s64 = ctx.r6.s64 + 18184;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8222cf18
	ctx.lr = 0x8325B99C;
	sub_8222CF18(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,18160
	ctx.r4.s64 = ctx.r4.s64 + 18160;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8222cf18
	ctx.lr = 0x8325B9B0;
	sub_8222CF18(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18136
	ctx.r4.s64 = ctx.r3.s64 + 18136;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8222cf18
	ctx.lr = 0x8325B9C4;
	sub_8222CF18(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// bl 0x82ca3700
	ctx.lr = 0x8325B9D0;
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

__attribute__((alias("__imp__sub_8325B9E4"))) PPC_WEAK_FUNC(sub_8325B9E4);
PPC_FUNC_IMPL(__imp__sub_8325B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B9E8"))) PPC_WEAK_FUNC(sub_8325B9E8);
PPC_FUNC_IMPL(__imp__sub_8325B9E8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17736
	ctx.r4.s64 = ctx.r11.s64 + 17736;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8325BA0C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x8325BA18;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x8325BA20;
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20352, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8325BA34;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8325BA40:
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
	// bne 0x8325ba40
	if (!ctx.cr0.eq) goto loc_8325BA40;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8325BA6C;
	sub_821C67D8(ctx, base);
loc_8325BA6C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8325ba6c
	if (!ctx.cr0.eq) goto loc_8325BA6C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// bl 0x82ca3700
	ctx.lr = 0x8325BA94;
	sub_82CA3700(ctx, base);
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

__attribute__((alias("__imp__sub_8325BAA8"))) PPC_WEAK_FUNC(sub_8325BAA8);
PPC_FUNC_IMPL(__imp__sub_8325BAA8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-11856
	ctx.r4.s64 = ctx.r11.s64 + -11856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8325BACC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x8325BAD8;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x8325BAE0;
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20348, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8325BAF4;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8325BB00:
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
	// bne 0x8325bb00
	if (!ctx.cr0.eq) goto loc_8325BB00;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8325BB2C;
	sub_821C67D8(ctx, base);
loc_8325BB2C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8325bb2c
	if (!ctx.cr0.eq) goto loc_8325BB2C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// bl 0x82ca3700
	ctx.lr = 0x8325BB54;
	sub_82CA3700(ctx, base);
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

__attribute__((alias("__imp__sub_8325BB68"))) PPC_WEAK_FUNC(sub_8325BB68);
PPC_FUNC_IMPL(__imp__sub_8325BB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-308
	ctx.r4.s64 = ctx.r11.s64 + -308;
	// addi r3,r10,-20344
	ctx.r3.s64 = ctx.r10.s64 + -20344;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BB8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21384
	ctx.r3.s64 = ctx.r9.s64 + 21384;
	// bl 0x82ca3700
	ctx.lr = 0x8325BB98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BBA8"))) PPC_WEAK_FUNC(sub_8325BBA8);
PPC_FUNC_IMPL(__imp__sub_8325BBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11828
	ctx.r4.s64 = ctx.r11.s64 + -11828;
	// addi r3,r10,-20340
	ctx.r3.s64 = ctx.r10.s64 + -20340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BBCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21400
	ctx.r3.s64 = ctx.r9.s64 + 21400;
	// bl 0x82ca3700
	ctx.lr = 0x8325BBD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BBE8"))) PPC_WEAK_FUNC(sub_8325BBE8);
PPC_FUNC_IMPL(__imp__sub_8325BBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11796
	ctx.r4.s64 = ctx.r11.s64 + -11796;
	// addi r3,r10,-20336
	ctx.r3.s64 = ctx.r10.s64 + -20336;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BC0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21416
	ctx.r3.s64 = ctx.r9.s64 + 21416;
	// bl 0x82ca3700
	ctx.lr = 0x8325BC18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BC28"))) PPC_WEAK_FUNC(sub_8325BC28);
PPC_FUNC_IMPL(__imp__sub_8325BC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11760
	ctx.r4.s64 = ctx.r11.s64 + -11760;
	// addi r3,r10,-20332
	ctx.r3.s64 = ctx.r10.s64 + -20332;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BC4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21432
	ctx.r3.s64 = ctx.r9.s64 + 21432;
	// bl 0x82ca3700
	ctx.lr = 0x8325BC58;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BC68"))) PPC_WEAK_FUNC(sub_8325BC68);
PPC_FUNC_IMPL(__imp__sub_8325BC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-32420
	ctx.r4.s64 = ctx.r11.s64 + -32420;
	// addi r3,r10,-20328
	ctx.r3.s64 = ctx.r10.s64 + -20328;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BC8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21448
	ctx.r3.s64 = ctx.r9.s64 + 21448;
	// bl 0x82ca3700
	ctx.lr = 0x8325BC98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BCA8"))) PPC_WEAK_FUNC(sub_8325BCA8);
PPC_FUNC_IMPL(__imp__sub_8325BCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11724
	ctx.r4.s64 = ctx.r11.s64 + -11724;
	// addi r3,r10,-20324
	ctx.r3.s64 = ctx.r10.s64 + -20324;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BCCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21464
	ctx.r3.s64 = ctx.r9.s64 + 21464;
	// bl 0x82ca3700
	ctx.lr = 0x8325BCD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BCE8"))) PPC_WEAK_FUNC(sub_8325BCE8);
PPC_FUNC_IMPL(__imp__sub_8325BCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11692
	ctx.r4.s64 = ctx.r11.s64 + -11692;
	// addi r3,r10,-20320
	ctx.r3.s64 = ctx.r10.s64 + -20320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BD0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21480
	ctx.r3.s64 = ctx.r9.s64 + 21480;
	// bl 0x82ca3700
	ctx.lr = 0x8325BD18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BD28"))) PPC_WEAK_FUNC(sub_8325BD28);
PPC_FUNC_IMPL(__imp__sub_8325BD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11660
	ctx.r4.s64 = ctx.r11.s64 + -11660;
	// addi r3,r10,-20316
	ctx.r3.s64 = ctx.r10.s64 + -20316;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BD4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21496
	ctx.r3.s64 = ctx.r9.s64 + 21496;
	// bl 0x82ca3700
	ctx.lr = 0x8325BD58;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BD68"))) PPC_WEAK_FUNC(sub_8325BD68);
PPC_FUNC_IMPL(__imp__sub_8325BD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11624
	ctx.r4.s64 = ctx.r11.s64 + -11624;
	// addi r3,r10,-20312
	ctx.r3.s64 = ctx.r10.s64 + -20312;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BD8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21512
	ctx.r3.s64 = ctx.r9.s64 + 21512;
	// bl 0x82ca3700
	ctx.lr = 0x8325BD98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BDA8"))) PPC_WEAK_FUNC(sub_8325BDA8);
PPC_FUNC_IMPL(__imp__sub_8325BDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,19820
	ctx.r4.s64 = ctx.r11.s64 + 19820;
	// addi r3,r10,-20308
	ctx.r3.s64 = ctx.r10.s64 + -20308;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BDCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21528
	ctx.r3.s64 = ctx.r9.s64 + 21528;
	// bl 0x82ca3700
	ctx.lr = 0x8325BDD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BDE8"))) PPC_WEAK_FUNC(sub_8325BDE8);
PPC_FUNC_IMPL(__imp__sub_8325BDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,19580
	ctx.r4.s64 = ctx.r11.s64 + 19580;
	// addi r3,r10,-20304
	ctx.r3.s64 = ctx.r10.s64 + -20304;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325BE0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21544
	ctx.r3.s64 = ctx.r9.s64 + 21544;
	// bl 0x82ca3700
	ctx.lr = 0x8325BE18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

