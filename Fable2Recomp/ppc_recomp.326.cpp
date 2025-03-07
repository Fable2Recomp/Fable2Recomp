#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8328EAB4"))) PPC_WEAK_FUNC(sub_8328EAB4);
PPC_FUNC_IMPL(__imp__sub_8328EAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EAB8"))) PPC_WEAK_FUNC(sub_8328EAB8);
PPC_FUNC_IMPL(__imp__sub_8328EAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// bl 0x82188cf0
	ctx.lr = 0x8328EAD0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7076, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EAEC"))) PPC_WEAK_FUNC(sub_8328EAEC);
PPC_FUNC_IMPL(__imp__sub_8328EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EAF0"))) PPC_WEAK_FUNC(sub_8328EAF0);
PPC_FUNC_IMPL(__imp__sub_8328EAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// bl 0x82188cf0
	ctx.lr = 0x8328EB08;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7072, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EB24"))) PPC_WEAK_FUNC(sub_8328EB24);
PPC_FUNC_IMPL(__imp__sub_8328EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EB28"))) PPC_WEAK_FUNC(sub_8328EB28);
PPC_FUNC_IMPL(__imp__sub_8328EB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// bl 0x82188cf0
	ctx.lr = 0x8328EB40;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7068, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EB5C"))) PPC_WEAK_FUNC(sub_8328EB5C);
PPC_FUNC_IMPL(__imp__sub_8328EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EB60"))) PPC_WEAK_FUNC(sub_8328EB60);
PPC_FUNC_IMPL(__imp__sub_8328EB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// bl 0x82188cf0
	ctx.lr = 0x8328EB78;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EB94"))) PPC_WEAK_FUNC(sub_8328EB94);
PPC_FUNC_IMPL(__imp__sub_8328EB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EB98"))) PPC_WEAK_FUNC(sub_8328EB98);
PPC_FUNC_IMPL(__imp__sub_8328EB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x82188cf0
	ctx.lr = 0x8328EBB0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7060, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EBCC"))) PPC_WEAK_FUNC(sub_8328EBCC);
PPC_FUNC_IMPL(__imp__sub_8328EBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EBD0"))) PPC_WEAK_FUNC(sub_8328EBD0);
PPC_FUNC_IMPL(__imp__sub_8328EBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82188cf0
	ctx.lr = 0x8328EBE8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7056, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC04"))) PPC_WEAK_FUNC(sub_8328EC04);
PPC_FUNC_IMPL(__imp__sub_8328EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EC08"))) PPC_WEAK_FUNC(sub_8328EC08);
PPC_FUNC_IMPL(__imp__sub_8328EC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11588
	ctx.r3.s64 = ctx.r11.s64 + -11588;
	// bl 0x82188cf0
	ctx.lr = 0x8328EC20;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7052, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC3C"))) PPC_WEAK_FUNC(sub_8328EC3C);
PPC_FUNC_IMPL(__imp__sub_8328EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EC40"))) PPC_WEAK_FUNC(sub_8328EC40);
PPC_FUNC_IMPL(__imp__sub_8328EC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// bl 0x82188cf0
	ctx.lr = 0x8328EC58;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC74"))) PPC_WEAK_FUNC(sub_8328EC74);
PPC_FUNC_IMPL(__imp__sub_8328EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EC78"))) PPC_WEAK_FUNC(sub_8328EC78);
PPC_FUNC_IMPL(__imp__sub_8328EC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// bl 0x82188cf0
	ctx.lr = 0x8328EC90;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7044, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ECAC"))) PPC_WEAK_FUNC(sub_8328ECAC);
PPC_FUNC_IMPL(__imp__sub_8328ECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328ECB0"))) PPC_WEAK_FUNC(sub_8328ECB0);
PPC_FUNC_IMPL(__imp__sub_8328ECB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,4156
	ctx.r3.s64 = ctx.r11.s64 + 4156;
	// bl 0x82188cf0
	ctx.lr = 0x8328ECC8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7040, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ECE4"))) PPC_WEAK_FUNC(sub_8328ECE4);
PPC_FUNC_IMPL(__imp__sub_8328ECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328ECE8"))) PPC_WEAK_FUNC(sub_8328ECE8);
PPC_FUNC_IMPL(__imp__sub_8328ECE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82188cf0
	ctx.lr = 0x8328ED00;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7036, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ED1C"))) PPC_WEAK_FUNC(sub_8328ED1C);
PPC_FUNC_IMPL(__imp__sub_8328ED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328ED20"))) PPC_WEAK_FUNC(sub_8328ED20);
PPC_FUNC_IMPL(__imp__sub_8328ED20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x82188cf0
	ctx.lr = 0x8328ED38;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7032, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ED54"))) PPC_WEAK_FUNC(sub_8328ED54);
PPC_FUNC_IMPL(__imp__sub_8328ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328ED58"))) PPC_WEAK_FUNC(sub_8328ED58);
PPC_FUNC_IMPL(__imp__sub_8328ED58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11548
	ctx.r3.s64 = ctx.r11.s64 + -11548;
	// bl 0x82188cf0
	ctx.lr = 0x8328ED70;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ED88"))) PPC_WEAK_FUNC(sub_8328ED88);
PPC_FUNC_IMPL(__imp__sub_8328ED88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11540
	ctx.r3.s64 = ctx.r11.s64 + -11540;
	// bl 0x82188cf0
	ctx.lr = 0x8328EDA0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EDB8"))) PPC_WEAK_FUNC(sub_8328EDB8);
PPC_FUNC_IMPL(__imp__sub_8328EDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// bl 0x82188cf0
	ctx.lr = 0x8328EDD0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EDE8"))) PPC_WEAK_FUNC(sub_8328EDE8);
PPC_FUNC_IMPL(__imp__sub_8328EDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// bl 0x82188cf0
	ctx.lr = 0x8328EE00;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EE18"))) PPC_WEAK_FUNC(sub_8328EE18);
PPC_FUNC_IMPL(__imp__sub_8328EE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-11508
	ctx.r3.s64 = ctx.r11.s64 + -11508;
	// bl 0x82188cf0
	ctx.lr = 0x8328EE30;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EE48"))) PPC_WEAK_FUNC(sub_8328EE48);
PPC_FUNC_IMPL(__imp__sub_8328EE48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,3336
	ctx.r3.s64 = ctx.r11.s64 + 3336;
	// bl 0x82188cf0
	ctx.lr = 0x8328EE60;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EE78"))) PPC_WEAK_FUNC(sub_8328EE78);
PPC_FUNC_IMPL(__imp__sub_8328EE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = ctx.r11.s64 + -16052;
	// bl 0x82188cf0
	ctx.lr = 0x8328EE90;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7004, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EEAC"))) PPC_WEAK_FUNC(sub_8328EEAC);
PPC_FUNC_IMPL(__imp__sub_8328EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EEB0"))) PPC_WEAK_FUNC(sub_8328EEB0);
PPC_FUNC_IMPL(__imp__sub_8328EEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// bl 0x82188cf0
	ctx.lr = 0x8328EEC8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7000, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EEE4"))) PPC_WEAK_FUNC(sub_8328EEE4);
PPC_FUNC_IMPL(__imp__sub_8328EEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EEE8"))) PPC_WEAK_FUNC(sub_8328EEE8);
PPC_FUNC_IMPL(__imp__sub_8328EEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = ctx.r11.s64 + -16012;
	// bl 0x82188cf0
	ctx.lr = 0x8328EF00;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6996, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EF1C"))) PPC_WEAK_FUNC(sub_8328EF1C);
PPC_FUNC_IMPL(__imp__sub_8328EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EF20"))) PPC_WEAK_FUNC(sub_8328EF20);
PPC_FUNC_IMPL(__imp__sub_8328EF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// bl 0x82188cf0
	ctx.lr = 0x8328EF38;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6992, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EF54"))) PPC_WEAK_FUNC(sub_8328EF54);
PPC_FUNC_IMPL(__imp__sub_8328EF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EF58"))) PPC_WEAK_FUNC(sub_8328EF58);
PPC_FUNC_IMPL(__imp__sub_8328EF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// bl 0x82188cf0
	ctx.lr = 0x8328EF70;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6988, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EF8C"))) PPC_WEAK_FUNC(sub_8328EF8C);
PPC_FUNC_IMPL(__imp__sub_8328EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EF90"))) PPC_WEAK_FUNC(sub_8328EF90);
PPC_FUNC_IMPL(__imp__sub_8328EF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// bl 0x82188cf0
	ctx.lr = 0x8328EFA8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6984, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EFC4"))) PPC_WEAK_FUNC(sub_8328EFC4);
PPC_FUNC_IMPL(__imp__sub_8328EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EFC8"))) PPC_WEAK_FUNC(sub_8328EFC8);
PPC_FUNC_IMPL(__imp__sub_8328EFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x82188cf0
	ctx.lr = 0x8328EFE0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6980, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EFFC"))) PPC_WEAK_FUNC(sub_8328EFFC);
PPC_FUNC_IMPL(__imp__sub_8328EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F000"))) PPC_WEAK_FUNC(sub_8328F000);
PPC_FUNC_IMPL(__imp__sub_8328F000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = ctx.r11.s64 + -15916;
	// bl 0x82188cf0
	ctx.lr = 0x8328F018;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6976, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F034"))) PPC_WEAK_FUNC(sub_8328F034);
PPC_FUNC_IMPL(__imp__sub_8328F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F038"))) PPC_WEAK_FUNC(sub_8328F038);
PPC_FUNC_IMPL(__imp__sub_8328F038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// bl 0x82188cf0
	ctx.lr = 0x8328F050;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F06C"))) PPC_WEAK_FUNC(sub_8328F06C);
PPC_FUNC_IMPL(__imp__sub_8328F06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F070"))) PPC_WEAK_FUNC(sub_8328F070);
PPC_FUNC_IMPL(__imp__sub_8328F070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// bl 0x82188cf0
	ctx.lr = 0x8328F088;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6968, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F0A4"))) PPC_WEAK_FUNC(sub_8328F0A4);
PPC_FUNC_IMPL(__imp__sub_8328F0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F0A8"))) PPC_WEAK_FUNC(sub_8328F0A8);
PPC_FUNC_IMPL(__imp__sub_8328F0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// bl 0x82188cf0
	ctx.lr = 0x8328F0C0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6964, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F0DC"))) PPC_WEAK_FUNC(sub_8328F0DC);
PPC_FUNC_IMPL(__imp__sub_8328F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F0E0"))) PPC_WEAK_FUNC(sub_8328F0E0);
PPC_FUNC_IMPL(__imp__sub_8328F0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// bl 0x82188cf0
	ctx.lr = 0x8328F0F8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6960, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F114"))) PPC_WEAK_FUNC(sub_8328F114);
PPC_FUNC_IMPL(__imp__sub_8328F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F118"))) PPC_WEAK_FUNC(sub_8328F118);
PPC_FUNC_IMPL(__imp__sub_8328F118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// bl 0x82188cf0
	ctx.lr = 0x8328F130;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6956, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F14C"))) PPC_WEAK_FUNC(sub_8328F14C);
PPC_FUNC_IMPL(__imp__sub_8328F14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F150"))) PPC_WEAK_FUNC(sub_8328F150);
PPC_FUNC_IMPL(__imp__sub_8328F150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x82188cf0
	ctx.lr = 0x8328F168;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6952, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F184"))) PPC_WEAK_FUNC(sub_8328F184);
PPC_FUNC_IMPL(__imp__sub_8328F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F188"))) PPC_WEAK_FUNC(sub_8328F188);
PPC_FUNC_IMPL(__imp__sub_8328F188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82188cf0
	ctx.lr = 0x8328F1A0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6948, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F1BC"))) PPC_WEAK_FUNC(sub_8328F1BC);
PPC_FUNC_IMPL(__imp__sub_8328F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F1C0"))) PPC_WEAK_FUNC(sub_8328F1C0);
PPC_FUNC_IMPL(__imp__sub_8328F1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r9,r11,-6944
	ctx.r9.s64 = ctx.r11.s64 + -6944;
	// addi r11,r10,18928
	ctx.r11.s64 = ctx.r10.s64 + 18928;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8328F1DC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8328f1dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328F1DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F1F4"))) PPC_WEAK_FUNC(sub_8328F1F4);
PPC_FUNC_IMPL(__imp__sub_8328F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F1F8"))) PPC_WEAK_FUNC(sub_8328F1F8);
PPC_FUNC_IMPL(__imp__sub_8328F1F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// bl 0x82188cf0
	ctx.lr = 0x8328F210;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-6880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F228"))) PPC_WEAK_FUNC(sub_8328F228);
PPC_FUNC_IMPL(__imp__sub_8328F228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-9556
	ctx.r3.s64 = ctx.r11.s64 + -9556;
	// bl 0x82188cf0
	ctx.lr = 0x8328F240;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-6876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F258"))) PPC_WEAK_FUNC(sub_8328F258);
PPC_FUNC_IMPL(__imp__sub_8328F258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-9548
	ctx.r3.s64 = ctx.r11.s64 + -9548;
	// bl 0x82188cf0
	ctx.lr = 0x8328F270;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-6872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6872, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F28C"))) PPC_WEAK_FUNC(sub_8328F28C);
PPC_FUNC_IMPL(__imp__sub_8328F28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F290"))) PPC_WEAK_FUNC(sub_8328F290);
PPC_FUNC_IMPL(__imp__sub_8328F290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-9540
	ctx.r3.s64 = ctx.r11.s64 + -9540;
	// bl 0x82188cf0
	ctx.lr = 0x8328F2A8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-6868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6868, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F2C4"))) PPC_WEAK_FUNC(sub_8328F2C4);
PPC_FUNC_IMPL(__imp__sub_8328F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F2C8"))) PPC_WEAK_FUNC(sub_8328F2C8);
PPC_FUNC_IMPL(__imp__sub_8328F2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = ctx.r11.s64 + -16052;
	// bl 0x82188cf0
	ctx.lr = 0x8328F2E0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6864, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F2FC"))) PPC_WEAK_FUNC(sub_8328F2FC);
PPC_FUNC_IMPL(__imp__sub_8328F2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F300"))) PPC_WEAK_FUNC(sub_8328F300);
PPC_FUNC_IMPL(__imp__sub_8328F300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// bl 0x82188cf0
	ctx.lr = 0x8328F318;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6860, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F334"))) PPC_WEAK_FUNC(sub_8328F334);
PPC_FUNC_IMPL(__imp__sub_8328F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F338"))) PPC_WEAK_FUNC(sub_8328F338);
PPC_FUNC_IMPL(__imp__sub_8328F338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = ctx.r11.s64 + -16012;
	// bl 0x82188cf0
	ctx.lr = 0x8328F350;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6856, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F36C"))) PPC_WEAK_FUNC(sub_8328F36C);
PPC_FUNC_IMPL(__imp__sub_8328F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F370"))) PPC_WEAK_FUNC(sub_8328F370);
PPC_FUNC_IMPL(__imp__sub_8328F370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// bl 0x82188cf0
	ctx.lr = 0x8328F388;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6852, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F3A4"))) PPC_WEAK_FUNC(sub_8328F3A4);
PPC_FUNC_IMPL(__imp__sub_8328F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F3A8"))) PPC_WEAK_FUNC(sub_8328F3A8);
PPC_FUNC_IMPL(__imp__sub_8328F3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// bl 0x82188cf0
	ctx.lr = 0x8328F3C0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6848, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F3DC"))) PPC_WEAK_FUNC(sub_8328F3DC);
PPC_FUNC_IMPL(__imp__sub_8328F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F3E0"))) PPC_WEAK_FUNC(sub_8328F3E0);
PPC_FUNC_IMPL(__imp__sub_8328F3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// bl 0x82188cf0
	ctx.lr = 0x8328F3F8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6844, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F414"))) PPC_WEAK_FUNC(sub_8328F414);
PPC_FUNC_IMPL(__imp__sub_8328F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F418"))) PPC_WEAK_FUNC(sub_8328F418);
PPC_FUNC_IMPL(__imp__sub_8328F418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x82188cf0
	ctx.lr = 0x8328F430;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6840, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F44C"))) PPC_WEAK_FUNC(sub_8328F44C);
PPC_FUNC_IMPL(__imp__sub_8328F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F450"))) PPC_WEAK_FUNC(sub_8328F450);
PPC_FUNC_IMPL(__imp__sub_8328F450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = ctx.r11.s64 + -15916;
	// bl 0x82188cf0
	ctx.lr = 0x8328F468;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6836, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F484"))) PPC_WEAK_FUNC(sub_8328F484);
PPC_FUNC_IMPL(__imp__sub_8328F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F488"))) PPC_WEAK_FUNC(sub_8328F488);
PPC_FUNC_IMPL(__imp__sub_8328F488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// bl 0x82188cf0
	ctx.lr = 0x8328F4A0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F4BC"))) PPC_WEAK_FUNC(sub_8328F4BC);
PPC_FUNC_IMPL(__imp__sub_8328F4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F4C0"))) PPC_WEAK_FUNC(sub_8328F4C0);
PPC_FUNC_IMPL(__imp__sub_8328F4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// bl 0x82188cf0
	ctx.lr = 0x8328F4D8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6828, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F4F4"))) PPC_WEAK_FUNC(sub_8328F4F4);
PPC_FUNC_IMPL(__imp__sub_8328F4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F4F8"))) PPC_WEAK_FUNC(sub_8328F4F8);
PPC_FUNC_IMPL(__imp__sub_8328F4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// bl 0x82188cf0
	ctx.lr = 0x8328F510;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6824, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F52C"))) PPC_WEAK_FUNC(sub_8328F52C);
PPC_FUNC_IMPL(__imp__sub_8328F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F530"))) PPC_WEAK_FUNC(sub_8328F530);
PPC_FUNC_IMPL(__imp__sub_8328F530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// bl 0x82188cf0
	ctx.lr = 0x8328F548;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6820, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F564"))) PPC_WEAK_FUNC(sub_8328F564);
PPC_FUNC_IMPL(__imp__sub_8328F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F568"))) PPC_WEAK_FUNC(sub_8328F568);
PPC_FUNC_IMPL(__imp__sub_8328F568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// bl 0x82188cf0
	ctx.lr = 0x8328F580;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6816, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F59C"))) PPC_WEAK_FUNC(sub_8328F59C);
PPC_FUNC_IMPL(__imp__sub_8328F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F5A0"))) PPC_WEAK_FUNC(sub_8328F5A0);
PPC_FUNC_IMPL(__imp__sub_8328F5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x82188cf0
	ctx.lr = 0x8328F5B8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6812, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F5D4"))) PPC_WEAK_FUNC(sub_8328F5D4);
PPC_FUNC_IMPL(__imp__sub_8328F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F5D8"))) PPC_WEAK_FUNC(sub_8328F5D8);
PPC_FUNC_IMPL(__imp__sub_8328F5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82188cf0
	ctx.lr = 0x8328F5F0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6808, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F60C"))) PPC_WEAK_FUNC(sub_8328F60C);
PPC_FUNC_IMPL(__imp__sub_8328F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F610"))) PPC_WEAK_FUNC(sub_8328F610);
PPC_FUNC_IMPL(__imp__sub_8328F610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = ctx.r11.s64 + -16052;
	// bl 0x82188cf0
	ctx.lr = 0x8328F628;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6804, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F644"))) PPC_WEAK_FUNC(sub_8328F644);
PPC_FUNC_IMPL(__imp__sub_8328F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F648"))) PPC_WEAK_FUNC(sub_8328F648);
PPC_FUNC_IMPL(__imp__sub_8328F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// bl 0x82188cf0
	ctx.lr = 0x8328F660;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6800, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F67C"))) PPC_WEAK_FUNC(sub_8328F67C);
PPC_FUNC_IMPL(__imp__sub_8328F67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F680"))) PPC_WEAK_FUNC(sub_8328F680);
PPC_FUNC_IMPL(__imp__sub_8328F680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = ctx.r11.s64 + -16012;
	// bl 0x82188cf0
	ctx.lr = 0x8328F698;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6796, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F6B4"))) PPC_WEAK_FUNC(sub_8328F6B4);
PPC_FUNC_IMPL(__imp__sub_8328F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F6B8"))) PPC_WEAK_FUNC(sub_8328F6B8);
PPC_FUNC_IMPL(__imp__sub_8328F6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// bl 0x82188cf0
	ctx.lr = 0x8328F6D0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6792, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F6EC"))) PPC_WEAK_FUNC(sub_8328F6EC);
PPC_FUNC_IMPL(__imp__sub_8328F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F6F0"))) PPC_WEAK_FUNC(sub_8328F6F0);
PPC_FUNC_IMPL(__imp__sub_8328F6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// bl 0x82188cf0
	ctx.lr = 0x8328F708;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6788, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F724"))) PPC_WEAK_FUNC(sub_8328F724);
PPC_FUNC_IMPL(__imp__sub_8328F724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F728"))) PPC_WEAK_FUNC(sub_8328F728);
PPC_FUNC_IMPL(__imp__sub_8328F728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// bl 0x82188cf0
	ctx.lr = 0x8328F740;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6784, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F75C"))) PPC_WEAK_FUNC(sub_8328F75C);
PPC_FUNC_IMPL(__imp__sub_8328F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F760"))) PPC_WEAK_FUNC(sub_8328F760);
PPC_FUNC_IMPL(__imp__sub_8328F760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x82188cf0
	ctx.lr = 0x8328F778;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6780, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F794"))) PPC_WEAK_FUNC(sub_8328F794);
PPC_FUNC_IMPL(__imp__sub_8328F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F798"))) PPC_WEAK_FUNC(sub_8328F798);
PPC_FUNC_IMPL(__imp__sub_8328F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = ctx.r11.s64 + -15916;
	// bl 0x82188cf0
	ctx.lr = 0x8328F7B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6776, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F7CC"))) PPC_WEAK_FUNC(sub_8328F7CC);
PPC_FUNC_IMPL(__imp__sub_8328F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F7D0"))) PPC_WEAK_FUNC(sub_8328F7D0);
PPC_FUNC_IMPL(__imp__sub_8328F7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// bl 0x82188cf0
	ctx.lr = 0x8328F7E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6772, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F804"))) PPC_WEAK_FUNC(sub_8328F804);
PPC_FUNC_IMPL(__imp__sub_8328F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F808"))) PPC_WEAK_FUNC(sub_8328F808);
PPC_FUNC_IMPL(__imp__sub_8328F808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// bl 0x82188cf0
	ctx.lr = 0x8328F820;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6768, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F83C"))) PPC_WEAK_FUNC(sub_8328F83C);
PPC_FUNC_IMPL(__imp__sub_8328F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F840"))) PPC_WEAK_FUNC(sub_8328F840);
PPC_FUNC_IMPL(__imp__sub_8328F840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// bl 0x82188cf0
	ctx.lr = 0x8328F858;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F874"))) PPC_WEAK_FUNC(sub_8328F874);
PPC_FUNC_IMPL(__imp__sub_8328F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F878"))) PPC_WEAK_FUNC(sub_8328F878);
PPC_FUNC_IMPL(__imp__sub_8328F878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// bl 0x82188cf0
	ctx.lr = 0x8328F890;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F8AC"))) PPC_WEAK_FUNC(sub_8328F8AC);
PPC_FUNC_IMPL(__imp__sub_8328F8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F8B0"))) PPC_WEAK_FUNC(sub_8328F8B0);
PPC_FUNC_IMPL(__imp__sub_8328F8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// bl 0x82188cf0
	ctx.lr = 0x8328F8C8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6756, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F8E4"))) PPC_WEAK_FUNC(sub_8328F8E4);
PPC_FUNC_IMPL(__imp__sub_8328F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F8E8"))) PPC_WEAK_FUNC(sub_8328F8E8);
PPC_FUNC_IMPL(__imp__sub_8328F8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x82188cf0
	ctx.lr = 0x8328F900;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6752, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F91C"))) PPC_WEAK_FUNC(sub_8328F91C);
PPC_FUNC_IMPL(__imp__sub_8328F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F920"))) PPC_WEAK_FUNC(sub_8328F920);
PPC_FUNC_IMPL(__imp__sub_8328F920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82188cf0
	ctx.lr = 0x8328F938;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6748, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F954"))) PPC_WEAK_FUNC(sub_8328F954);
PPC_FUNC_IMPL(__imp__sub_8328F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F958"))) PPC_WEAK_FUNC(sub_8328F958);
PPC_FUNC_IMPL(__imp__sub_8328F958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F964"))) PPC_WEAK_FUNC(sub_8328F964);
PPC_FUNC_IMPL(__imp__sub_8328F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F968"))) PPC_WEAK_FUNC(sub_8328F968);
PPC_FUNC_IMPL(__imp__sub_8328F968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1504
	ctx.r3.s64 = ctx.r11.s64 + -1504;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F974"))) PPC_WEAK_FUNC(sub_8328F974);
PPC_FUNC_IMPL(__imp__sub_8328F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F978"))) PPC_WEAK_FUNC(sub_8328F978);
PPC_FUNC_IMPL(__imp__sub_8328F978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1488
	ctx.r3.s64 = ctx.r11.s64 + -1488;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F984"))) PPC_WEAK_FUNC(sub_8328F984);
PPC_FUNC_IMPL(__imp__sub_8328F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F988"))) PPC_WEAK_FUNC(sub_8328F988);
PPC_FUNC_IMPL(__imp__sub_8328F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1472
	ctx.r3.s64 = ctx.r11.s64 + -1472;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F994"))) PPC_WEAK_FUNC(sub_8328F994);
PPC_FUNC_IMPL(__imp__sub_8328F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F998"))) PPC_WEAK_FUNC(sub_8328F998);
PPC_FUNC_IMPL(__imp__sub_8328F998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15748
	ctx.r3.s64 = ctx.r11.s64 + -15748;
	// bl 0x82188cf0
	ctx.lr = 0x8328F9B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6704, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F9CC"))) PPC_WEAK_FUNC(sub_8328F9CC);
PPC_FUNC_IMPL(__imp__sub_8328F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F9D0"))) PPC_WEAK_FUNC(sub_8328F9D0);
PPC_FUNC_IMPL(__imp__sub_8328F9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15736
	ctx.r3.s64 = ctx.r11.s64 + -15736;
	// bl 0x82188cf0
	ctx.lr = 0x8328F9E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6700, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA04"))) PPC_WEAK_FUNC(sub_8328FA04);
PPC_FUNC_IMPL(__imp__sub_8328FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FA08"))) PPC_WEAK_FUNC(sub_8328FA08);
PPC_FUNC_IMPL(__imp__sub_8328FA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15724
	ctx.r3.s64 = ctx.r11.s64 + -15724;
	// bl 0x82188cf0
	ctx.lr = 0x8328FA20;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6696, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA3C"))) PPC_WEAK_FUNC(sub_8328FA3C);
PPC_FUNC_IMPL(__imp__sub_8328FA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FA40"))) PPC_WEAK_FUNC(sub_8328FA40);
PPC_FUNC_IMPL(__imp__sub_8328FA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15704
	ctx.r3.s64 = ctx.r11.s64 + -15704;
	// bl 0x82188cf0
	ctx.lr = 0x8328FA58;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6692, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA74"))) PPC_WEAK_FUNC(sub_8328FA74);
PPC_FUNC_IMPL(__imp__sub_8328FA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FA78"))) PPC_WEAK_FUNC(sub_8328FA78);
PPC_FUNC_IMPL(__imp__sub_8328FA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15684
	ctx.r3.s64 = ctx.r11.s64 + -15684;
	// bl 0x82188cf0
	ctx.lr = 0x8328FA90;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6688, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FAAC"))) PPC_WEAK_FUNC(sub_8328FAAC);
PPC_FUNC_IMPL(__imp__sub_8328FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FAB0"))) PPC_WEAK_FUNC(sub_8328FAB0);
PPC_FUNC_IMPL(__imp__sub_8328FAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15672
	ctx.r3.s64 = ctx.r11.s64 + -15672;
	// bl 0x82188cf0
	ctx.lr = 0x8328FAC8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6684, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FAE4"))) PPC_WEAK_FUNC(sub_8328FAE4);
PPC_FUNC_IMPL(__imp__sub_8328FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FAE8"))) PPC_WEAK_FUNC(sub_8328FAE8);
PPC_FUNC_IMPL(__imp__sub_8328FAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15660
	ctx.r3.s64 = ctx.r11.s64 + -15660;
	// bl 0x82188cf0
	ctx.lr = 0x8328FB00;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6680, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB1C"))) PPC_WEAK_FUNC(sub_8328FB1C);
PPC_FUNC_IMPL(__imp__sub_8328FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FB20"))) PPC_WEAK_FUNC(sub_8328FB20);
PPC_FUNC_IMPL(__imp__sub_8328FB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15644
	ctx.r3.s64 = ctx.r11.s64 + -15644;
	// bl 0x82188cf0
	ctx.lr = 0x8328FB38;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6676, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB54"))) PPC_WEAK_FUNC(sub_8328FB54);
PPC_FUNC_IMPL(__imp__sub_8328FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FB58"))) PPC_WEAK_FUNC(sub_8328FB58);
PPC_FUNC_IMPL(__imp__sub_8328FB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15628
	ctx.r3.s64 = ctx.r11.s64 + -15628;
	// bl 0x82188cf0
	ctx.lr = 0x8328FB70;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6672, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB8C"))) PPC_WEAK_FUNC(sub_8328FB8C);
PPC_FUNC_IMPL(__imp__sub_8328FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FB90"))) PPC_WEAK_FUNC(sub_8328FB90);
PPC_FUNC_IMPL(__imp__sub_8328FB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15608
	ctx.r3.s64 = ctx.r11.s64 + -15608;
	// bl 0x82188cf0
	ctx.lr = 0x8328FBA8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6668, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FBC4"))) PPC_WEAK_FUNC(sub_8328FBC4);
PPC_FUNC_IMPL(__imp__sub_8328FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FBC8"))) PPC_WEAK_FUNC(sub_8328FBC8);
PPC_FUNC_IMPL(__imp__sub_8328FBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15592
	ctx.r3.s64 = ctx.r11.s64 + -15592;
	// bl 0x82188cf0
	ctx.lr = 0x8328FBE0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6664, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FBFC"))) PPC_WEAK_FUNC(sub_8328FBFC);
PPC_FUNC_IMPL(__imp__sub_8328FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FC00"))) PPC_WEAK_FUNC(sub_8328FC00);
PPC_FUNC_IMPL(__imp__sub_8328FC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15572
	ctx.r3.s64 = ctx.r11.s64 + -15572;
	// bl 0x82188cf0
	ctx.lr = 0x8328FC18;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6660, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC34"))) PPC_WEAK_FUNC(sub_8328FC34);
PPC_FUNC_IMPL(__imp__sub_8328FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FC38"))) PPC_WEAK_FUNC(sub_8328FC38);
PPC_FUNC_IMPL(__imp__sub_8328FC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15548
	ctx.r3.s64 = ctx.r11.s64 + -15548;
	// bl 0x82188cf0
	ctx.lr = 0x8328FC50;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6656, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC6C"))) PPC_WEAK_FUNC(sub_8328FC6C);
PPC_FUNC_IMPL(__imp__sub_8328FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FC70"))) PPC_WEAK_FUNC(sub_8328FC70);
PPC_FUNC_IMPL(__imp__sub_8328FC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15528
	ctx.r3.s64 = ctx.r11.s64 + -15528;
	// bl 0x82188cf0
	ctx.lr = 0x8328FC88;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6652, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FCA4"))) PPC_WEAK_FUNC(sub_8328FCA4);
PPC_FUNC_IMPL(__imp__sub_8328FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FCA8"))) PPC_WEAK_FUNC(sub_8328FCA8);
PPC_FUNC_IMPL(__imp__sub_8328FCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15512
	ctx.r3.s64 = ctx.r11.s64 + -15512;
	// bl 0x82188cf0
	ctx.lr = 0x8328FCC0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6648, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FCDC"))) PPC_WEAK_FUNC(sub_8328FCDC);
PPC_FUNC_IMPL(__imp__sub_8328FCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FCE0"))) PPC_WEAK_FUNC(sub_8328FCE0);
PPC_FUNC_IMPL(__imp__sub_8328FCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15492
	ctx.r3.s64 = ctx.r11.s64 + -15492;
	// bl 0x82188cf0
	ctx.lr = 0x8328FCF8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6644, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD14"))) PPC_WEAK_FUNC(sub_8328FD14);
PPC_FUNC_IMPL(__imp__sub_8328FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FD18"))) PPC_WEAK_FUNC(sub_8328FD18);
PPC_FUNC_IMPL(__imp__sub_8328FD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15468
	ctx.r3.s64 = ctx.r11.s64 + -15468;
	// bl 0x82188cf0
	ctx.lr = 0x8328FD30;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6640, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD4C"))) PPC_WEAK_FUNC(sub_8328FD4C);
PPC_FUNC_IMPL(__imp__sub_8328FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FD50"))) PPC_WEAK_FUNC(sub_8328FD50);
PPC_FUNC_IMPL(__imp__sub_8328FD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15460
	ctx.r3.s64 = ctx.r11.s64 + -15460;
	// bl 0x82188cf0
	ctx.lr = 0x8328FD68;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6636, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD84"))) PPC_WEAK_FUNC(sub_8328FD84);
PPC_FUNC_IMPL(__imp__sub_8328FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FD88"))) PPC_WEAK_FUNC(sub_8328FD88);
PPC_FUNC_IMPL(__imp__sub_8328FD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15448
	ctx.r3.s64 = ctx.r11.s64 + -15448;
	// bl 0x82188cf0
	ctx.lr = 0x8328FDA0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6632, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FDBC"))) PPC_WEAK_FUNC(sub_8328FDBC);
PPC_FUNC_IMPL(__imp__sub_8328FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FDC0"))) PPC_WEAK_FUNC(sub_8328FDC0);
PPC_FUNC_IMPL(__imp__sub_8328FDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15440
	ctx.r3.s64 = ctx.r11.s64 + -15440;
	// bl 0x82188cf0
	ctx.lr = 0x8328FDD8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6628, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FDF4"))) PPC_WEAK_FUNC(sub_8328FDF4);
PPC_FUNC_IMPL(__imp__sub_8328FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FDF8"))) PPC_WEAK_FUNC(sub_8328FDF8);
PPC_FUNC_IMPL(__imp__sub_8328FDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15432
	ctx.r3.s64 = ctx.r11.s64 + -15432;
	// bl 0x82188cf0
	ctx.lr = 0x8328FE10;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6624, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE2C"))) PPC_WEAK_FUNC(sub_8328FE2C);
PPC_FUNC_IMPL(__imp__sub_8328FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FE30"))) PPC_WEAK_FUNC(sub_8328FE30);
PPC_FUNC_IMPL(__imp__sub_8328FE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15424
	ctx.r3.s64 = ctx.r11.s64 + -15424;
	// bl 0x82188cf0
	ctx.lr = 0x8328FE48;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6620, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE64"))) PPC_WEAK_FUNC(sub_8328FE64);
PPC_FUNC_IMPL(__imp__sub_8328FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FE68"))) PPC_WEAK_FUNC(sub_8328FE68);
PPC_FUNC_IMPL(__imp__sub_8328FE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15416
	ctx.r3.s64 = ctx.r11.s64 + -15416;
	// bl 0x82188cf0
	ctx.lr = 0x8328FE80;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6616, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE9C"))) PPC_WEAK_FUNC(sub_8328FE9C);
PPC_FUNC_IMPL(__imp__sub_8328FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FEA0"))) PPC_WEAK_FUNC(sub_8328FEA0);
PPC_FUNC_IMPL(__imp__sub_8328FEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-15408
	ctx.r3.s64 = ctx.r11.s64 + -15408;
	// bl 0x82188cf0
	ctx.lr = 0x8328FEB8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6612, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FED4"))) PPC_WEAK_FUNC(sub_8328FED4);
PPC_FUNC_IMPL(__imp__sub_8328FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FED8"))) PPC_WEAK_FUNC(sub_8328FED8);
PPC_FUNC_IMPL(__imp__sub_8328FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FEE4"))) PPC_WEAK_FUNC(sub_8328FEE4);
PPC_FUNC_IMPL(__imp__sub_8328FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FEE8"))) PPC_WEAK_FUNC(sub_8328FEE8);
PPC_FUNC_IMPL(__imp__sub_8328FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FEF4"))) PPC_WEAK_FUNC(sub_8328FEF4);
PPC_FUNC_IMPL(__imp__sub_8328FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FEF8"))) PPC_WEAK_FUNC(sub_8328FEF8);
PPC_FUNC_IMPL(__imp__sub_8328FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1368
	ctx.r3.s64 = ctx.r11.s64 + -1368;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF04"))) PPC_WEAK_FUNC(sub_8328FF04);
PPC_FUNC_IMPL(__imp__sub_8328FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF08"))) PPC_WEAK_FUNC(sub_8328FF08);
PPC_FUNC_IMPL(__imp__sub_8328FF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF14"))) PPC_WEAK_FUNC(sub_8328FF14);
PPC_FUNC_IMPL(__imp__sub_8328FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF18"))) PPC_WEAK_FUNC(sub_8328FF18);
PPC_FUNC_IMPL(__imp__sub_8328FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1336
	ctx.r3.s64 = ctx.r11.s64 + -1336;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF24"))) PPC_WEAK_FUNC(sub_8328FF24);
PPC_FUNC_IMPL(__imp__sub_8328FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF28"))) PPC_WEAK_FUNC(sub_8328FF28);
PPC_FUNC_IMPL(__imp__sub_8328FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1232
	ctx.r3.s64 = ctx.r11.s64 + -1232;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF34"))) PPC_WEAK_FUNC(sub_8328FF34);
PPC_FUNC_IMPL(__imp__sub_8328FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF38"))) PPC_WEAK_FUNC(sub_8328FF38);
PPC_FUNC_IMPL(__imp__sub_8328FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1216
	ctx.r3.s64 = ctx.r11.s64 + -1216;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF44"))) PPC_WEAK_FUNC(sub_8328FF44);
PPC_FUNC_IMPL(__imp__sub_8328FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF48"))) PPC_WEAK_FUNC(sub_8328FF48);
PPC_FUNC_IMPL(__imp__sub_8328FF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18900
	ctx.r3.s64 = ctx.r11.s64 + 18900;
	// bl 0x82bfbd78
	ctx.lr = 0x8328FF60;
	sub_82BFBD78(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1128
	ctx.r3.s64 = ctx.r10.s64 + -1128;
	// bl 0x82ca3700
	ctx.lr = 0x8328FF6C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FF7C"))) PPC_WEAK_FUNC(sub_8328FF7C);
PPC_FUNC_IMPL(__imp__sub_8328FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF80"))) PPC_WEAK_FUNC(sub_8328FF80);
PPC_FUNC_IMPL(__imp__sub_8328FF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-968
	ctx.r3.s64 = ctx.r11.s64 + -968;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF8C"))) PPC_WEAK_FUNC(sub_8328FF8C);
PPC_FUNC_IMPL(__imp__sub_8328FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF90"))) PPC_WEAK_FUNC(sub_8328FF90);
PPC_FUNC_IMPL(__imp__sub_8328FF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18924
	ctx.r3.s64 = ctx.r11.s64 + 18924;
	// bl 0x821f7798
	ctx.lr = 0x8328FFA8;
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1016
	ctx.r3.s64 = ctx.r10.s64 + -1016;
	// bl 0x82ca3700
	ctx.lr = 0x8328FFB4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FFC4"))) PPC_WEAK_FUNC(sub_8328FFC4);
PPC_FUNC_IMPL(__imp__sub_8328FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FFC8"))) PPC_WEAK_FUNC(sub_8328FFC8);
PPC_FUNC_IMPL(__imp__sub_8328FFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x823445b0
	ctx.lr = 0x8328FFE0;
	sub_823445B0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-928
	ctx.r3.s64 = ctx.r10.s64 + -928;
	// bl 0x82ca3700
	ctx.lr = 0x8328FFEC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FFFC"))) PPC_WEAK_FUNC(sub_8328FFFC);
PPC_FUNC_IMPL(__imp__sub_8328FFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290000"))) PPC_WEAK_FUNC(sub_83290000);
PPC_FUNC_IMPL(__imp__sub_83290000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18940
	ctx.r3.s64 = ctx.r11.s64 + 18940;
	// bl 0x821f7798
	ctx.lr = 0x83290018;
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1000
	ctx.r3.s64 = ctx.r10.s64 + -1000;
	// bl 0x82ca3700
	ctx.lr = 0x83290024;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290034"))) PPC_WEAK_FUNC(sub_83290034);
PPC_FUNC_IMPL(__imp__sub_83290034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290038"))) PPC_WEAK_FUNC(sub_83290038);
PPC_FUNC_IMPL(__imp__sub_83290038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// bl 0x821f7798
	ctx.lr = 0x83290050;
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-984
	ctx.r3.s64 = ctx.r10.s64 + -984;
	// bl 0x82ca3700
	ctx.lr = 0x8329005C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329006C"))) PPC_WEAK_FUNC(sub_8329006C);
PPC_FUNC_IMPL(__imp__sub_8329006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290070"))) PPC_WEAK_FUNC(sub_83290070);
PPC_FUNC_IMPL(__imp__sub_83290070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// bl 0x82c03b90
	ctx.lr = 0x83290088;
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-816
	ctx.r3.s64 = ctx.r10.s64 + -816;
	// bl 0x82ca3700
	ctx.lr = 0x83290094;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832900A4"))) PPC_WEAK_FUNC(sub_832900A4);
PPC_FUNC_IMPL(__imp__sub_832900A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832900A8"))) PPC_WEAK_FUNC(sub_832900A8);
PPC_FUNC_IMPL(__imp__sub_832900A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,8995
	ctx.r11.s64 = 589496320;
	// addi r8,r10,19064
	ctx.r8.s64 = ctx.r10.s64 + 19064;
	// ori r11,r11,8995
	ctx.r11.u64 = ctx.r11.u64 | 8995;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r10,-22356
	ctx.r10.s64 = ctx.r10.s64 + -22356;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_832900DC:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x832900dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832900DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832900FC"))) PPC_WEAK_FUNC(sub_832900FC);
PPC_FUNC_IMPL(__imp__sub_832900FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290100"))) PPC_WEAK_FUNC(sub_83290100);
PPC_FUNC_IMPL(__imp__sub_83290100) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,8995
	ctx.r11.s64 = 589496320;
	// addi r31,r10,19080
	ctx.r31.s64 = ctx.r10.s64 + 19080;
	// ori r11,r11,8995
	ctx.r11.u64 = ctx.r11.u64 | 8995;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-22344
	ctx.r4.s64 = ctx.r8.s64 + -22344;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x83290144;
	sub_82CA2C60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83290160"))) PPC_WEAK_FUNC(sub_83290160);
PPC_FUNC_IMPL(__imp__sub_83290160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19104
	ctx.r3.s64 = ctx.r11.s64 + 19104;
	// bl 0x82c03b90
	ctx.lr = 0x83290178;
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-736
	ctx.r3.s64 = ctx.r10.s64 + -736;
	// bl 0x82ca3700
	ctx.lr = 0x83290184;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290194"))) PPC_WEAK_FUNC(sub_83290194);
PPC_FUNC_IMPL(__imp__sub_83290194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290198"))) PPC_WEAK_FUNC(sub_83290198);
PPC_FUNC_IMPL(__imp__sub_83290198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,25268
	ctx.r4.s64 = ctx.r11.s64 + 25268;
	// addi r3,r10,19192
	ctx.r3.s64 = ctx.r10.s64 + 19192;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832901BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-720
	ctx.r3.s64 = ctx.r9.s64 + -720;
	// bl 0x82ca3700
	ctx.lr = 0x832901C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832901D8"))) PPC_WEAK_FUNC(sub_832901D8);
PPC_FUNC_IMPL(__imp__sub_832901D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19196
	ctx.r3.s64 = ctx.r11.s64 + 19196;
	// bl 0x823445b0
	ctx.lr = 0x832901F0;
	sub_823445B0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-704
	ctx.r3.s64 = ctx.r10.s64 + -704;
	// bl 0x82ca3700
	ctx.lr = 0x832901FC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329020C"))) PPC_WEAK_FUNC(sub_8329020C);
PPC_FUNC_IMPL(__imp__sub_8329020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290210"))) PPC_WEAK_FUNC(sub_83290210);
PPC_FUNC_IMPL(__imp__sub_83290210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19208
	ctx.r3.s64 = ctx.r11.s64 + 19208;
	// bl 0x82a12828
	ctx.lr = 0x83290228;
	sub_82A12828(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-592
	ctx.r3.s64 = ctx.r10.s64 + -592;
	// bl 0x82ca3700
	ctx.lr = 0x83290234;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290244"))) PPC_WEAK_FUNC(sub_83290244);
PPC_FUNC_IMPL(__imp__sub_83290244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290248"))) PPC_WEAK_FUNC(sub_83290248);
PPC_FUNC_IMPL(__imp__sub_83290248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19220
	ctx.r3.s64 = ctx.r11.s64 + 19220;
	// bl 0x82c04dc8
	ctx.lr = 0x83290260;
	sub_82C04DC8(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-480
	ctx.r3.s64 = ctx.r10.s64 + -480;
	// bl 0x82ca3700
	ctx.lr = 0x8329026C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329027C"))) PPC_WEAK_FUNC(sub_8329027C);
PPC_FUNC_IMPL(__imp__sub_8329027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290280"))) PPC_WEAK_FUNC(sub_83290280);
PPC_FUNC_IMPL(__imp__sub_83290280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19232
	ctx.r3.s64 = ctx.r11.s64 + 19232;
	// bl 0x82c42f48
	ctx.lr = 0x83290298;
	sub_82C42F48(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-368
	ctx.r3.s64 = ctx.r10.s64 + -368;
	// bl 0x82ca3700
	ctx.lr = 0x832902A4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832902B4"))) PPC_WEAK_FUNC(sub_832902B4);
PPC_FUNC_IMPL(__imp__sub_832902B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832902B8"))) PPC_WEAK_FUNC(sub_832902B8);
PPC_FUNC_IMPL(__imp__sub_832902B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832902C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,19252
	ctx.r11.s64 = ctx.r11.s64 + 19252;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_832902D8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x832902E0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832902ec
	if (ctx.cr6.eq) goto loc_832902EC;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_832902EC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832902f8
	if (ctx.cr0.eq) goto loc_832902F8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_832902F8:
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bge 0x832902d8
	if (!ctx.cr0.lt) goto loc_832902D8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// bl 0x82ca3700
	ctx.lr = 0x83290318;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83290320"))) PPC_WEAK_FUNC(sub_83290320);
PPC_FUNC_IMPL(__imp__sub_83290320) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,19312
	ctx.r30.s64 = ctx.r11.s64 + 19312;
loc_83290340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b38560
	ctx.lr = 0x83290348;
	sub_82B38560(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bge 0x83290340
	if (!ctx.cr0.lt) goto loc_83290340;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// bl 0x82ca3700
	ctx.lr = 0x83290360;
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

__attribute__((alias("__imp__sub_83290378"))) PPC_WEAK_FUNC(sub_83290378);
PPC_FUNC_IMPL(__imp__sub_83290378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83290380;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r11,r11,19452
	ctx.r11.s64 = ctx.r11.s64 + 19452;
	// li r27,5
	ctx.r27.s64 = 5;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-22236
	ctx.r28.s64 = ctx.r11.s64 + -22236;
loc_832903A4:
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x82b385e8
	ctx.lr = 0x832903B0;
	sub_82B385E8(ctx, base);
	// stw r28,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r28.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bge 0x832903a4
	if (!ctx.cr0.lt) goto loc_832903A4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-176
	ctx.r3.s64 = ctx.r11.s64 + -176;
	// bl 0x82ca3700
	ctx.lr = 0x832903DC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832903E4"))) PPC_WEAK_FUNC(sub_832903E4);
PPC_FUNC_IMPL(__imp__sub_832903E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832903E8"))) PPC_WEAK_FUNC(sub_832903E8);
PPC_FUNC_IMPL(__imp__sub_832903E8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,19636
	ctx.r31.s64 = ctx.r11.s64 + 19636;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823445b0
	ctx.lr = 0x83290408;
	sub_823445B0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82b38560
	ctx.lr = 0x83290410;
	sub_82B38560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// bl 0x82ca3700
	ctx.lr = 0x83290424;
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

__attribute__((alias("__imp__sub_83290438"))) PPC_WEAK_FUNC(sub_83290438);
PPC_FUNC_IMPL(__imp__sub_83290438) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,19696
	ctx.r31.s64 = ctx.r11.s64 + 19696;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823445b0
	ctx.lr = 0x83290458;
	sub_823445B0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82b38560
	ctx.lr = 0x83290460;
	sub_82B38560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// bl 0x82ca3700
	ctx.lr = 0x83290474;
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

__attribute__((alias("__imp__sub_83290488"))) PPC_WEAK_FUNC(sub_83290488);
PPC_FUNC_IMPL(__imp__sub_83290488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19488
	ctx.r4.s64 = ctx.r11.s64 + -19488;
	// addi r3,r10,19768
	ctx.r3.s64 = ctx.r10.s64 + 19768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832904AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// bl 0x82ca3700
	ctx.lr = 0x832904B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832904C8"))) PPC_WEAK_FUNC(sub_832904C8);
PPC_FUNC_IMPL(__imp__sub_832904C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19472
	ctx.r4.s64 = ctx.r11.s64 + -19472;
	// addi r3,r10,19772
	ctx.r3.s64 = ctx.r10.s64 + 19772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832904EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,80
	ctx.r3.s64 = ctx.r9.s64 + 80;
	// bl 0x82ca3700
	ctx.lr = 0x832904F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290508"))) PPC_WEAK_FUNC(sub_83290508);
PPC_FUNC_IMPL(__imp__sub_83290508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19140
	ctx.r4.s64 = ctx.r11.s64 + -19140;
	// addi r3,r10,19776
	ctx.r3.s64 = ctx.r10.s64 + 19776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329052C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,96
	ctx.r3.s64 = ctx.r9.s64 + 96;
	// bl 0x82ca3700
	ctx.lr = 0x83290538;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290548"))) PPC_WEAK_FUNC(sub_83290548);
PPC_FUNC_IMPL(__imp__sub_83290548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19128
	ctx.r4.s64 = ctx.r11.s64 + -19128;
	// addi r3,r10,19780
	ctx.r3.s64 = ctx.r10.s64 + 19780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329056C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,112
	ctx.r3.s64 = ctx.r9.s64 + 112;
	// bl 0x82ca3700
	ctx.lr = 0x83290578;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290588"))) PPC_WEAK_FUNC(sub_83290588);
PPC_FUNC_IMPL(__imp__sub_83290588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// addi r3,r10,19784
	ctx.r3.s64 = ctx.r10.s64 + 19784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832905AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// bl 0x82ca3700
	ctx.lr = 0x832905B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832905C8"))) PPC_WEAK_FUNC(sub_832905C8);
PPC_FUNC_IMPL(__imp__sub_832905C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18544
	ctx.r4.s64 = ctx.r11.s64 + -18544;
	// addi r3,r10,19788
	ctx.r3.s64 = ctx.r10.s64 + 19788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832905EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,144
	ctx.r3.s64 = ctx.r9.s64 + 144;
	// bl 0x82ca3700
	ctx.lr = 0x832905F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290608"))) PPC_WEAK_FUNC(sub_83290608);
PPC_FUNC_IMPL(__imp__sub_83290608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18532
	ctx.r4.s64 = ctx.r11.s64 + -18532;
	// addi r3,r10,19792
	ctx.r3.s64 = ctx.r10.s64 + 19792;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329062C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,160
	ctx.r3.s64 = ctx.r9.s64 + 160;
	// bl 0x82ca3700
	ctx.lr = 0x83290638;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290648"))) PPC_WEAK_FUNC(sub_83290648);
PPC_FUNC_IMPL(__imp__sub_83290648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18304
	ctx.r4.s64 = ctx.r11.s64 + -18304;
	// addi r3,r10,19796
	ctx.r3.s64 = ctx.r10.s64 + 19796;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329066C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,176
	ctx.r3.s64 = ctx.r9.s64 + 176;
	// bl 0x82ca3700
	ctx.lr = 0x83290678;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290688"))) PPC_WEAK_FUNC(sub_83290688);
PPC_FUNC_IMPL(__imp__sub_83290688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// addi r3,r10,19800
	ctx.r3.s64 = ctx.r10.s64 + 19800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832906AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,192
	ctx.r3.s64 = ctx.r9.s64 + 192;
	// bl 0x82ca3700
	ctx.lr = 0x832906B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832906C8"))) PPC_WEAK_FUNC(sub_832906C8);
PPC_FUNC_IMPL(__imp__sub_832906C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18264
	ctx.r4.s64 = ctx.r11.s64 + -18264;
	// addi r3,r10,19804
	ctx.r3.s64 = ctx.r10.s64 + 19804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832906EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,208
	ctx.r3.s64 = ctx.r9.s64 + 208;
	// bl 0x82ca3700
	ctx.lr = 0x832906F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290708"))) PPC_WEAK_FUNC(sub_83290708);
PPC_FUNC_IMPL(__imp__sub_83290708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17944
	ctx.r4.s64 = ctx.r11.s64 + -17944;
	// addi r3,r10,19808
	ctx.r3.s64 = ctx.r10.s64 + 19808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329072C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,224
	ctx.r3.s64 = ctx.r9.s64 + 224;
	// bl 0x82ca3700
	ctx.lr = 0x83290738;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290748"))) PPC_WEAK_FUNC(sub_83290748);
PPC_FUNC_IMPL(__imp__sub_83290748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17920
	ctx.r4.s64 = ctx.r11.s64 + -17920;
	// addi r3,r10,19812
	ctx.r3.s64 = ctx.r10.s64 + 19812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329076C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,240
	ctx.r3.s64 = ctx.r9.s64 + 240;
	// bl 0x82ca3700
	ctx.lr = 0x83290778;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290788"))) PPC_WEAK_FUNC(sub_83290788);
PPC_FUNC_IMPL(__imp__sub_83290788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17904
	ctx.r4.s64 = ctx.r11.s64 + -17904;
	// addi r3,r10,19816
	ctx.r3.s64 = ctx.r10.s64 + 19816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832907AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,256
	ctx.r3.s64 = ctx.r9.s64 + 256;
	// bl 0x82ca3700
	ctx.lr = 0x832907B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832907C8"))) PPC_WEAK_FUNC(sub_832907C8);
PPC_FUNC_IMPL(__imp__sub_832907C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17828
	ctx.r4.s64 = ctx.r11.s64 + -17828;
	// addi r3,r10,19820
	ctx.r3.s64 = ctx.r10.s64 + 19820;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832907EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,272
	ctx.r3.s64 = ctx.r9.s64 + 272;
	// bl 0x82ca3700
	ctx.lr = 0x832907F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290808"))) PPC_WEAK_FUNC(sub_83290808);
PPC_FUNC_IMPL(__imp__sub_83290808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17804
	ctx.r4.s64 = ctx.r11.s64 + -17804;
	// addi r3,r10,19824
	ctx.r3.s64 = ctx.r10.s64 + 19824;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329082C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,288
	ctx.r3.s64 = ctx.r9.s64 + 288;
	// bl 0x82ca3700
	ctx.lr = 0x83290838;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290848"))) PPC_WEAK_FUNC(sub_83290848);
PPC_FUNC_IMPL(__imp__sub_83290848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17784
	ctx.r4.s64 = ctx.r11.s64 + -17784;
	// addi r3,r10,19828
	ctx.r3.s64 = ctx.r10.s64 + 19828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329086C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,304
	ctx.r3.s64 = ctx.r9.s64 + 304;
	// bl 0x82ca3700
	ctx.lr = 0x83290878;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290888"))) PPC_WEAK_FUNC(sub_83290888);
PPC_FUNC_IMPL(__imp__sub_83290888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17588
	ctx.r4.s64 = ctx.r11.s64 + -17588;
	// addi r3,r10,19832
	ctx.r3.s64 = ctx.r10.s64 + 19832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832908AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,320
	ctx.r3.s64 = ctx.r9.s64 + 320;
	// bl 0x82ca3700
	ctx.lr = 0x832908B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832908C8"))) PPC_WEAK_FUNC(sub_832908C8);
PPC_FUNC_IMPL(__imp__sub_832908C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17572
	ctx.r4.s64 = ctx.r11.s64 + -17572;
	// addi r3,r10,19836
	ctx.r3.s64 = ctx.r10.s64 + 19836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832908EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,336
	ctx.r3.s64 = ctx.r9.s64 + 336;
	// bl 0x82ca3700
	ctx.lr = 0x832908F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290908"))) PPC_WEAK_FUNC(sub_83290908);
PPC_FUNC_IMPL(__imp__sub_83290908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17560
	ctx.r4.s64 = ctx.r11.s64 + -17560;
	// addi r3,r10,19840
	ctx.r3.s64 = ctx.r10.s64 + 19840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329092C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,352
	ctx.r3.s64 = ctx.r9.s64 + 352;
	// bl 0x82ca3700
	ctx.lr = 0x83290938;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290948"))) PPC_WEAK_FUNC(sub_83290948);
PPC_FUNC_IMPL(__imp__sub_83290948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17380
	ctx.r4.s64 = ctx.r11.s64 + -17380;
	// addi r3,r10,19844
	ctx.r3.s64 = ctx.r10.s64 + 19844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329096C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,368
	ctx.r3.s64 = ctx.r9.s64 + 368;
	// bl 0x82ca3700
	ctx.lr = 0x83290978;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290988"))) PPC_WEAK_FUNC(sub_83290988);
PPC_FUNC_IMPL(__imp__sub_83290988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17360
	ctx.r4.s64 = ctx.r11.s64 + -17360;
	// addi r3,r10,19848
	ctx.r3.s64 = ctx.r10.s64 + 19848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832909AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,384
	ctx.r3.s64 = ctx.r9.s64 + 384;
	// bl 0x82ca3700
	ctx.lr = 0x832909B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832909C8"))) PPC_WEAK_FUNC(sub_832909C8);
PPC_FUNC_IMPL(__imp__sub_832909C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// addi r3,r10,19852
	ctx.r3.s64 = ctx.r10.s64 + 19852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832909EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,400
	ctx.r3.s64 = ctx.r9.s64 + 400;
	// bl 0x82ca3700
	ctx.lr = 0x832909F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290A08"))) PPC_WEAK_FUNC(sub_83290A08);
PPC_FUNC_IMPL(__imp__sub_83290A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17076
	ctx.r4.s64 = ctx.r11.s64 + -17076;
	// addi r3,r10,19856
	ctx.r3.s64 = ctx.r10.s64 + 19856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290A2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,416
	ctx.r3.s64 = ctx.r9.s64 + 416;
	// bl 0x82ca3700
	ctx.lr = 0x83290A38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

