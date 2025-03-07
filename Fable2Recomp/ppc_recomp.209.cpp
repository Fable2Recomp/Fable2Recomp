#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D7EB1C"))) PPC_WEAK_FUNC(sub_82D7EB1C);
PPC_FUNC_IMPL(__imp__sub_82D7EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB20"))) PPC_WEAK_FUNC(sub_82D7EB20);
PPC_FUNC_IMPL(__imp__sub_82D7EB20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22928
	ctx.r11.s64 = ctx.r11.s64 + -22928;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EB40"))) PPC_WEAK_FUNC(sub_82D7EB40);
PPC_FUNC_IMPL(__imp__sub_82D7EB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EB4C"))) PPC_WEAK_FUNC(sub_82D7EB4C);
PPC_FUNC_IMPL(__imp__sub_82D7EB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB50"))) PPC_WEAK_FUNC(sub_82D7EB50);
PPC_FUNC_IMPL(__imp__sub_82D7EB50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EB64"))) PPC_WEAK_FUNC(sub_82D7EB64);
PPC_FUNC_IMPL(__imp__sub_82D7EB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB68"))) PPC_WEAK_FUNC(sub_82D7EB68);
PPC_FUNC_IMPL(__imp__sub_82D7EB68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29060
	ctx.r11.s64 = ctx.r11.s64 + -29060;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EB88"))) PPC_WEAK_FUNC(sub_82D7EB88);
PPC_FUNC_IMPL(__imp__sub_82D7EB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29060
	ctx.r3.s64 = ctx.r11.s64 + -29060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EB94"))) PPC_WEAK_FUNC(sub_82D7EB94);
PPC_FUNC_IMPL(__imp__sub_82D7EB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EB98"))) PPC_WEAK_FUNC(sub_82D7EB98);
PPC_FUNC_IMPL(__imp__sub_82D7EB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EBAC"))) PPC_WEAK_FUNC(sub_82D7EBAC);
PPC_FUNC_IMPL(__imp__sub_82D7EBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EBB0"))) PPC_WEAK_FUNC(sub_82D7EBB0);
PPC_FUNC_IMPL(__imp__sub_82D7EBB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29588
	ctx.r11.s64 = ctx.r11.s64 + -29588;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EBD0"))) PPC_WEAK_FUNC(sub_82D7EBD0);
PPC_FUNC_IMPL(__imp__sub_82D7EBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29588
	ctx.r3.s64 = ctx.r11.s64 + -29588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EBDC"))) PPC_WEAK_FUNC(sub_82D7EBDC);
PPC_FUNC_IMPL(__imp__sub_82D7EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EBE0"))) PPC_WEAK_FUNC(sub_82D7EBE0);
PPC_FUNC_IMPL(__imp__sub_82D7EBE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EBF4"))) PPC_WEAK_FUNC(sub_82D7EBF4);
PPC_FUNC_IMPL(__imp__sub_82D7EBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EBF8"))) PPC_WEAK_FUNC(sub_82D7EBF8);
PPC_FUNC_IMPL(__imp__sub_82D7EBF8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7ec40
	sub_82D7EC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC08"))) PPC_WEAK_FUNC(sub_82D7EC08);
PPC_FUNC_IMPL(__imp__sub_82D7EC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EC0C"))) PPC_WEAK_FUNC(sub_82D7EC0C);
PPC_FUNC_IMPL(__imp__sub_82D7EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC10"))) PPC_WEAK_FUNC(sub_82D7EC10);
PPC_FUNC_IMPL(__imp__sub_82D7EC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ec40
	ctx.lr = 0x82D7EC28;
	sub_82D7EC40(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EC3C"))) PPC_WEAK_FUNC(sub_82D7EC3C);
PPC_FUNC_IMPL(__imp__sub_82D7EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC40"))) PPC_WEAK_FUNC(sub_82D7EC40);
PPC_FUNC_IMPL(__imp__sub_82D7EC40) {
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
	// bl 0x82d7a438
	ctx.lr = 0x82D7EC58;
	sub_82D7A438(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,-22744
	ctx.r9.s64 = ctx.r11.s64 + -22744;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7ECA8"))) PPC_WEAK_FUNC(sub_82D7ECA8);
PPC_FUNC_IMPL(__imp__sub_82D7ECA8) {
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
	// bl 0x82d9ac20
	ctx.lr = 0x82D7ECC8;
	sub_82D9AC20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ecf0
	if (ctx.cr6.eq) goto loc_82D7ECF0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,48
	ctx.r6.s64 = 48;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7ECF0;
	sub_82D4ECA8(ctx, base);
loc_82D7ECF0:
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

__attribute__((alias("__imp__sub_82D7ED0C"))) PPC_WEAK_FUNC(sub_82D7ED0C);
PPC_FUNC_IMPL(__imp__sub_82D7ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED10"))) PPC_WEAK_FUNC(sub_82D7ED10);
PPC_FUNC_IMPL(__imp__sub_82D7ED10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ED14"))) PPC_WEAK_FUNC(sub_82D7ED14);
PPC_FUNC_IMPL(__imp__sub_82D7ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED18"))) PPC_WEAK_FUNC(sub_82D7ED18);
PPC_FUNC_IMPL(__imp__sub_82D7ED18) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d85388
	sub_82D85388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED28"))) PPC_WEAK_FUNC(sub_82D7ED28);
PPC_FUNC_IMPL(__imp__sub_82D7ED28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ED2C"))) PPC_WEAK_FUNC(sub_82D7ED2C);
PPC_FUNC_IMPL(__imp__sub_82D7ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED30"))) PPC_WEAK_FUNC(sub_82D7ED30);
PPC_FUNC_IMPL(__imp__sub_82D7ED30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7ED44"))) PPC_WEAK_FUNC(sub_82D7ED44);
PPC_FUNC_IMPL(__imp__sub_82D7ED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED48"))) PPC_WEAK_FUNC(sub_82D7ED48);
PPC_FUNC_IMPL(__imp__sub_82D7ED48) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85388
	ctx.lr = 0x82D7ED60;
	sub_82D85388(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ED74"))) PPC_WEAK_FUNC(sub_82D7ED74);
PPC_FUNC_IMPL(__imp__sub_82D7ED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED78"))) PPC_WEAK_FUNC(sub_82D7ED78);
PPC_FUNC_IMPL(__imp__sub_82D7ED78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ED7C"))) PPC_WEAK_FUNC(sub_82D7ED7C);
PPC_FUNC_IMPL(__imp__sub_82D7ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED80"))) PPC_WEAK_FUNC(sub_82D7ED80);
PPC_FUNC_IMPL(__imp__sub_82D7ED80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7ED94"))) PPC_WEAK_FUNC(sub_82D7ED94);
PPC_FUNC_IMPL(__imp__sub_82D7ED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED98"))) PPC_WEAK_FUNC(sub_82D7ED98);
PPC_FUNC_IMPL(__imp__sub_82D7ED98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ED9C"))) PPC_WEAK_FUNC(sub_82D7ED9C);
PPC_FUNC_IMPL(__imp__sub_82D7ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EDA0"))) PPC_WEAK_FUNC(sub_82D7EDA0);
PPC_FUNC_IMPL(__imp__sub_82D7EDA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22316
	ctx.r11.s64 = ctx.r11.s64 + -22316;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EDC0"))) PPC_WEAK_FUNC(sub_82D7EDC0);
PPC_FUNC_IMPL(__imp__sub_82D7EDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-22316
	ctx.r3.s64 = ctx.r11.s64 + -22316;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EDCC"))) PPC_WEAK_FUNC(sub_82D7EDCC);
PPC_FUNC_IMPL(__imp__sub_82D7EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EDD0"))) PPC_WEAK_FUNC(sub_82D7EDD0);
PPC_FUNC_IMPL(__imp__sub_82D7EDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EDD4"))) PPC_WEAK_FUNC(sub_82D7EDD4);
PPC_FUNC_IMPL(__imp__sub_82D7EDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EDD8"))) PPC_WEAK_FUNC(sub_82D7EDD8);
PPC_FUNC_IMPL(__imp__sub_82D7EDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EDEC"))) PPC_WEAK_FUNC(sub_82D7EDEC);
PPC_FUNC_IMPL(__imp__sub_82D7EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EDF0"))) PPC_WEAK_FUNC(sub_82D7EDF0);
PPC_FUNC_IMPL(__imp__sub_82D7EDF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EDF4"))) PPC_WEAK_FUNC(sub_82D7EDF4);
PPC_FUNC_IMPL(__imp__sub_82D7EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EDF8"))) PPC_WEAK_FUNC(sub_82D7EDF8);
PPC_FUNC_IMPL(__imp__sub_82D7EDF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22124
	ctx.r11.s64 = ctx.r11.s64 + -22124;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EE18"))) PPC_WEAK_FUNC(sub_82D7EE18);
PPC_FUNC_IMPL(__imp__sub_82D7EE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-22124
	ctx.r3.s64 = ctx.r11.s64 + -22124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EE24"))) PPC_WEAK_FUNC(sub_82D7EE24);
PPC_FUNC_IMPL(__imp__sub_82D7EE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE28"))) PPC_WEAK_FUNC(sub_82D7EE28);
PPC_FUNC_IMPL(__imp__sub_82D7EE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EE2C"))) PPC_WEAK_FUNC(sub_82D7EE2C);
PPC_FUNC_IMPL(__imp__sub_82D7EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE30"))) PPC_WEAK_FUNC(sub_82D7EE30);
PPC_FUNC_IMPL(__imp__sub_82D7EE30) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d9b5b8
	sub_82D9B5B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EE40"))) PPC_WEAK_FUNC(sub_82D7EE40);
PPC_FUNC_IMPL(__imp__sub_82D7EE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EE44"))) PPC_WEAK_FUNC(sub_82D7EE44);
PPC_FUNC_IMPL(__imp__sub_82D7EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE48"))) PPC_WEAK_FUNC(sub_82D7EE48);
PPC_FUNC_IMPL(__imp__sub_82D7EE48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EE5C"))) PPC_WEAK_FUNC(sub_82D7EE5C);
PPC_FUNC_IMPL(__imp__sub_82D7EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE60"))) PPC_WEAK_FUNC(sub_82D7EE60);
PPC_FUNC_IMPL(__imp__sub_82D7EE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9b5b8
	ctx.lr = 0x82D7EE78;
	sub_82D9B5B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EE8C"))) PPC_WEAK_FUNC(sub_82D7EE8C);
PPC_FUNC_IMPL(__imp__sub_82D7EE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE90"))) PPC_WEAK_FUNC(sub_82D7EE90);
PPC_FUNC_IMPL(__imp__sub_82D7EE90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EEA4"))) PPC_WEAK_FUNC(sub_82D7EEA4);
PPC_FUNC_IMPL(__imp__sub_82D7EEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEA8"))) PPC_WEAK_FUNC(sub_82D7EEA8);
PPC_FUNC_IMPL(__imp__sub_82D7EEA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-28956
	ctx.r11.s64 = ctx.r11.s64 + -28956;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EEC8"))) PPC_WEAK_FUNC(sub_82D7EEC8);
PPC_FUNC_IMPL(__imp__sub_82D7EEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28956
	ctx.r3.s64 = ctx.r11.s64 + -28956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EED4"))) PPC_WEAK_FUNC(sub_82D7EED4);
PPC_FUNC_IMPL(__imp__sub_82D7EED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EED8"))) PPC_WEAK_FUNC(sub_82D7EED8);
PPC_FUNC_IMPL(__imp__sub_82D7EED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EEDC"))) PPC_WEAK_FUNC(sub_82D7EEDC);
PPC_FUNC_IMPL(__imp__sub_82D7EEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEE0"))) PPC_WEAK_FUNC(sub_82D7EEE0);
PPC_FUNC_IMPL(__imp__sub_82D7EEE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EEF4"))) PPC_WEAK_FUNC(sub_82D7EEF4);
PPC_FUNC_IMPL(__imp__sub_82D7EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEF8"))) PPC_WEAK_FUNC(sub_82D7EEF8);
PPC_FUNC_IMPL(__imp__sub_82D7EEF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EEFC"))) PPC_WEAK_FUNC(sub_82D7EEFC);
PPC_FUNC_IMPL(__imp__sub_82D7EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF00"))) PPC_WEAK_FUNC(sub_82D7EF00);
PPC_FUNC_IMPL(__imp__sub_82D7EF00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-21268
	ctx.r11.s64 = ctx.r11.s64 + -21268;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF20"))) PPC_WEAK_FUNC(sub_82D7EF20);
PPC_FUNC_IMPL(__imp__sub_82D7EF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-21268
	ctx.r3.s64 = ctx.r11.s64 + -21268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF2C"))) PPC_WEAK_FUNC(sub_82D7EF2C);
PPC_FUNC_IMPL(__imp__sub_82D7EF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF30"))) PPC_WEAK_FUNC(sub_82D7EF30);
PPC_FUNC_IMPL(__imp__sub_82D7EF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EF44"))) PPC_WEAK_FUNC(sub_82D7EF44);
PPC_FUNC_IMPL(__imp__sub_82D7EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF48"))) PPC_WEAK_FUNC(sub_82D7EF48);
PPC_FUNC_IMPL(__imp__sub_82D7EF48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29164
	ctx.r11.s64 = ctx.r11.s64 + -29164;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF68"))) PPC_WEAK_FUNC(sub_82D7EF68);
PPC_FUNC_IMPL(__imp__sub_82D7EF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29164
	ctx.r3.s64 = ctx.r11.s64 + -29164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF74"))) PPC_WEAK_FUNC(sub_82D7EF74);
PPC_FUNC_IMPL(__imp__sub_82D7EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF78"))) PPC_WEAK_FUNC(sub_82D7EF78);
PPC_FUNC_IMPL(__imp__sub_82D7EF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EF8C"))) PPC_WEAK_FUNC(sub_82D7EF8C);
PPC_FUNC_IMPL(__imp__sub_82D7EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF90"))) PPC_WEAK_FUNC(sub_82D7EF90);
PPC_FUNC_IMPL(__imp__sub_82D7EF90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-21020
	ctx.r11.s64 = ctx.r11.s64 + -21020;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EFB0"))) PPC_WEAK_FUNC(sub_82D7EFB0);
PPC_FUNC_IMPL(__imp__sub_82D7EFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-21020
	ctx.r3.s64 = ctx.r11.s64 + -21020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EFBC"))) PPC_WEAK_FUNC(sub_82D7EFBC);
PPC_FUNC_IMPL(__imp__sub_82D7EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFC0"))) PPC_WEAK_FUNC(sub_82D7EFC0);
PPC_FUNC_IMPL(__imp__sub_82D7EFC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7EFD4"))) PPC_WEAK_FUNC(sub_82D7EFD4);
PPC_FUNC_IMPL(__imp__sub_82D7EFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFD8"))) PPC_WEAK_FUNC(sub_82D7EFD8);
PPC_FUNC_IMPL(__imp__sub_82D7EFD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d9c638
	sub_82D9C638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EFE8"))) PPC_WEAK_FUNC(sub_82D7EFE8);
PPC_FUNC_IMPL(__imp__sub_82D7EFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EFEC"))) PPC_WEAK_FUNC(sub_82D7EFEC);
PPC_FUNC_IMPL(__imp__sub_82D7EFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFF0"))) PPC_WEAK_FUNC(sub_82D7EFF0);
PPC_FUNC_IMPL(__imp__sub_82D7EFF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9c638
	ctx.lr = 0x82D7F008;
	sub_82D9C638(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F01C"))) PPC_WEAK_FUNC(sub_82D7F01C);
PPC_FUNC_IMPL(__imp__sub_82D7F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F020"))) PPC_WEAK_FUNC(sub_82D7F020);
PPC_FUNC_IMPL(__imp__sub_82D7F020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F034"))) PPC_WEAK_FUNC(sub_82D7F034);
PPC_FUNC_IMPL(__imp__sub_82D7F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F038"))) PPC_WEAK_FUNC(sub_82D7F038);
PPC_FUNC_IMPL(__imp__sub_82D7F038) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7f080
	sub_82D7F080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F048"))) PPC_WEAK_FUNC(sub_82D7F048);
PPC_FUNC_IMPL(__imp__sub_82D7F048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F04C"))) PPC_WEAK_FUNC(sub_82D7F04C);
PPC_FUNC_IMPL(__imp__sub_82D7F04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F050"))) PPC_WEAK_FUNC(sub_82D7F050);
PPC_FUNC_IMPL(__imp__sub_82D7F050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7f080
	ctx.lr = 0x82D7F068;
	sub_82D7F080(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F07C"))) PPC_WEAK_FUNC(sub_82D7F07C);
PPC_FUNC_IMPL(__imp__sub_82D7F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F080"))) PPC_WEAK_FUNC(sub_82D7F080);
PPC_FUNC_IMPL(__imp__sub_82D7F080) {
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
	// bl 0x82d7a438
	ctx.lr = 0x82D7F098;
	sub_82D7A438(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,17116
	ctx.r9.s64 = ctx.r11.s64 + 17116;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7F0E8"))) PPC_WEAK_FUNC(sub_82D7F0E8);
PPC_FUNC_IMPL(__imp__sub_82D7F0E8) {
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
	// bl 0x82d9cee8
	ctx.lr = 0x82D7F108;
	sub_82D9CEE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7f130
	if (ctx.cr6.eq) goto loc_82D7F130;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,48
	ctx.r6.s64 = 48;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7F130;
	sub_82D4ECA8(ctx, base);
loc_82D7F130:
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

__attribute__((alias("__imp__sub_82D7F14C"))) PPC_WEAK_FUNC(sub_82D7F14C);
PPC_FUNC_IMPL(__imp__sub_82D7F14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F150"))) PPC_WEAK_FUNC(sub_82D7F150);
PPC_FUNC_IMPL(__imp__sub_82D7F150) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d76050
	sub_82D76050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F160"))) PPC_WEAK_FUNC(sub_82D7F160);
PPC_FUNC_IMPL(__imp__sub_82D7F160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F164"))) PPC_WEAK_FUNC(sub_82D7F164);
PPC_FUNC_IMPL(__imp__sub_82D7F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F168"))) PPC_WEAK_FUNC(sub_82D7F168);
PPC_FUNC_IMPL(__imp__sub_82D7F168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F17C"))) PPC_WEAK_FUNC(sub_82D7F17C);
PPC_FUNC_IMPL(__imp__sub_82D7F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F180"))) PPC_WEAK_FUNC(sub_82D7F180);
PPC_FUNC_IMPL(__imp__sub_82D7F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d76050
	ctx.lr = 0x82D7F198;
	sub_82D76050(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F1AC"))) PPC_WEAK_FUNC(sub_82D7F1AC);
PPC_FUNC_IMPL(__imp__sub_82D7F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F1B0"))) PPC_WEAK_FUNC(sub_82D7F1B0);
PPC_FUNC_IMPL(__imp__sub_82D7F1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F1C4"))) PPC_WEAK_FUNC(sub_82D7F1C4);
PPC_FUNC_IMPL(__imp__sub_82D7F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F1C8"))) PPC_WEAK_FUNC(sub_82D7F1C8);
PPC_FUNC_IMPL(__imp__sub_82D7F1C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-16056
	ctx.r11.s64 = ctx.r11.s64 + -16056;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F1E8"))) PPC_WEAK_FUNC(sub_82D7F1E8);
PPC_FUNC_IMPL(__imp__sub_82D7F1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-16056
	ctx.r3.s64 = ctx.r11.s64 + -16056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F1F4"))) PPC_WEAK_FUNC(sub_82D7F1F4);
PPC_FUNC_IMPL(__imp__sub_82D7F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F1F8"))) PPC_WEAK_FUNC(sub_82D7F1F8);
PPC_FUNC_IMPL(__imp__sub_82D7F1F8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7f908
	sub_82D7F908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F208"))) PPC_WEAK_FUNC(sub_82D7F208);
PPC_FUNC_IMPL(__imp__sub_82D7F208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F20C"))) PPC_WEAK_FUNC(sub_82D7F20C);
PPC_FUNC_IMPL(__imp__sub_82D7F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F210"))) PPC_WEAK_FUNC(sub_82D7F210);
PPC_FUNC_IMPL(__imp__sub_82D7F210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F224"))) PPC_WEAK_FUNC(sub_82D7F224);
PPC_FUNC_IMPL(__imp__sub_82D7F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F228"))) PPC_WEAK_FUNC(sub_82D7F228);
PPC_FUNC_IMPL(__imp__sub_82D7F228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7f908
	ctx.lr = 0x82D7F240;
	sub_82D7F908(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F254"))) PPC_WEAK_FUNC(sub_82D7F254);
PPC_FUNC_IMPL(__imp__sub_82D7F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F258"))) PPC_WEAK_FUNC(sub_82D7F258);
PPC_FUNC_IMPL(__imp__sub_82D7F258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F26C"))) PPC_WEAK_FUNC(sub_82D7F26C);
PPC_FUNC_IMPL(__imp__sub_82D7F26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F270"))) PPC_WEAK_FUNC(sub_82D7F270);
PPC_FUNC_IMPL(__imp__sub_82D7F270) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29484
	ctx.r11.s64 = ctx.r11.s64 + -29484;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F290"))) PPC_WEAK_FUNC(sub_82D7F290);
PPC_FUNC_IMPL(__imp__sub_82D7F290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29484
	ctx.r3.s64 = ctx.r11.s64 + -29484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F29C"))) PPC_WEAK_FUNC(sub_82D7F29C);
PPC_FUNC_IMPL(__imp__sub_82D7F29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F2A0"))) PPC_WEAK_FUNC(sub_82D7F2A0);
PPC_FUNC_IMPL(__imp__sub_82D7F2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F2B4"))) PPC_WEAK_FUNC(sub_82D7F2B4);
PPC_FUNC_IMPL(__imp__sub_82D7F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F2B8"))) PPC_WEAK_FUNC(sub_82D7F2B8);
PPC_FUNC_IMPL(__imp__sub_82D7F2B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-14136
	ctx.r11.s64 = ctx.r11.s64 + -14136;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F2D8"))) PPC_WEAK_FUNC(sub_82D7F2D8);
PPC_FUNC_IMPL(__imp__sub_82D7F2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F2E4"))) PPC_WEAK_FUNC(sub_82D7F2E4);
PPC_FUNC_IMPL(__imp__sub_82D7F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F2E8"))) PPC_WEAK_FUNC(sub_82D7F2E8);
PPC_FUNC_IMPL(__imp__sub_82D7F2E8) {
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
	// bl 0x82d80cb8
	ctx.lr = 0x82D7F308;
	sub_82D80CB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7f330
	if (ctx.cr6.eq) goto loc_82D7F330;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7F330;
	sub_82D4ECA8(ctx, base);
loc_82D7F330:
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

__attribute__((alias("__imp__sub_82D7F34C"))) PPC_WEAK_FUNC(sub_82D7F34C);
PPC_FUNC_IMPL(__imp__sub_82D7F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F350"))) PPC_WEAK_FUNC(sub_82D7F350);
PPC_FUNC_IMPL(__imp__sub_82D7F350) {
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
	// bl 0x82d85a30
	ctx.lr = 0x82D7F370;
	sub_82D85A30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7f398
	if (ctx.cr6.eq) goto loc_82D7F398;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7F398;
	sub_82D4ECA8(ctx, base);
loc_82D7F398:
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

__attribute__((alias("__imp__sub_82D7F3B4"))) PPC_WEAK_FUNC(sub_82D7F3B4);
PPC_FUNC_IMPL(__imp__sub_82D7F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F3B8"))) PPC_WEAK_FUNC(sub_82D7F3B8);
PPC_FUNC_IMPL(__imp__sub_82D7F3B8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d7f400
	if (ctx.cr6.eq) goto loc_82D7F400;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,40
	ctx.r6.s64 = 40;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7F400;
	sub_82D4ECA8(ctx, base);
loc_82D7F400:
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

__attribute__((alias("__imp__sub_82D7F418"))) PPC_WEAK_FUNC(sub_82D7F418);
PPC_FUNC_IMPL(__imp__sub_82D7F418) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-14032
	ctx.r11.s64 = ctx.r11.s64 + -14032;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F438"))) PPC_WEAK_FUNC(sub_82D7F438);
PPC_FUNC_IMPL(__imp__sub_82D7F438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F44C"))) PPC_WEAK_FUNC(sub_82D7F44C);
PPC_FUNC_IMPL(__imp__sub_82D7F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F450"))) PPC_WEAK_FUNC(sub_82D7F450);
PPC_FUNC_IMPL(__imp__sub_82D7F450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-14032
	ctx.r3.s64 = ctx.r11.s64 + -14032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F45C"))) PPC_WEAK_FUNC(sub_82D7F45C);
PPC_FUNC_IMPL(__imp__sub_82D7F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F460"))) PPC_WEAK_FUNC(sub_82D7F460);
PPC_FUNC_IMPL(__imp__sub_82D7F460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F474"))) PPC_WEAK_FUNC(sub_82D7F474);
PPC_FUNC_IMPL(__imp__sub_82D7F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F478"))) PPC_WEAK_FUNC(sub_82D7F478);
PPC_FUNC_IMPL(__imp__sub_82D7F478) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-14168
	ctx.r11.s64 = ctx.r11.s64 + -14168;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F498"))) PPC_WEAK_FUNC(sub_82D7F498);
PPC_FUNC_IMPL(__imp__sub_82D7F498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-14168
	ctx.r3.s64 = ctx.r11.s64 + -14168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F4A4"))) PPC_WEAK_FUNC(sub_82D7F4A4);
PPC_FUNC_IMPL(__imp__sub_82D7F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4A8"))) PPC_WEAK_FUNC(sub_82D7F4A8);
PPC_FUNC_IMPL(__imp__sub_82D7F4A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F4AC"))) PPC_WEAK_FUNC(sub_82D7F4AC);
PPC_FUNC_IMPL(__imp__sub_82D7F4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4B0"))) PPC_WEAK_FUNC(sub_82D7F4B0);
PPC_FUNC_IMPL(__imp__sub_82D7F4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F4B4"))) PPC_WEAK_FUNC(sub_82D7F4B4);
PPC_FUNC_IMPL(__imp__sub_82D7F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4B8"))) PPC_WEAK_FUNC(sub_82D7F4B8);
PPC_FUNC_IMPL(__imp__sub_82D7F4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F4CC"))) PPC_WEAK_FUNC(sub_82D7F4CC);
PPC_FUNC_IMPL(__imp__sub_82D7F4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4D0"))) PPC_WEAK_FUNC(sub_82D7F4D0);
PPC_FUNC_IMPL(__imp__sub_82D7F4D0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7ca30
	sub_82D7CA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F4E0"))) PPC_WEAK_FUNC(sub_82D7F4E0);
PPC_FUNC_IMPL(__imp__sub_82D7F4E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F4E4"))) PPC_WEAK_FUNC(sub_82D7F4E4);
PPC_FUNC_IMPL(__imp__sub_82D7F4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F4E8"))) PPC_WEAK_FUNC(sub_82D7F4E8);
PPC_FUNC_IMPL(__imp__sub_82D7F4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ca30
	ctx.lr = 0x82D7F500;
	sub_82D7CA30(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F514"))) PPC_WEAK_FUNC(sub_82D7F514);
PPC_FUNC_IMPL(__imp__sub_82D7F514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F518"))) PPC_WEAK_FUNC(sub_82D7F518);
PPC_FUNC_IMPL(__imp__sub_82D7F518) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d7d588
	sub_82D7D588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F51C"))) PPC_WEAK_FUNC(sub_82D7F51C);
PPC_FUNC_IMPL(__imp__sub_82D7F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F520"))) PPC_WEAK_FUNC(sub_82D7F520);
PPC_FUNC_IMPL(__imp__sub_82D7F520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F534"))) PPC_WEAK_FUNC(sub_82D7F534);
PPC_FUNC_IMPL(__imp__sub_82D7F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F538"))) PPC_WEAK_FUNC(sub_82D7F538);
PPC_FUNC_IMPL(__imp__sub_82D7F538) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F558"))) PPC_WEAK_FUNC(sub_82D7F558);
PPC_FUNC_IMPL(__imp__sub_82D7F558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F564"))) PPC_WEAK_FUNC(sub_82D7F564);
PPC_FUNC_IMPL(__imp__sub_82D7F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F568"))) PPC_WEAK_FUNC(sub_82D7F568);
PPC_FUNC_IMPL(__imp__sub_82D7F568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F57C"))) PPC_WEAK_FUNC(sub_82D7F57C);
PPC_FUNC_IMPL(__imp__sub_82D7F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F580"))) PPC_WEAK_FUNC(sub_82D7F580);
PPC_FUNC_IMPL(__imp__sub_82D7F580) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,26196
	ctx.r11.s64 = ctx.r11.s64 + 26196;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F5A0"))) PPC_WEAK_FUNC(sub_82D7F5A0);
PPC_FUNC_IMPL(__imp__sub_82D7F5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,26196
	ctx.r3.s64 = ctx.r11.s64 + 26196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F5AC"))) PPC_WEAK_FUNC(sub_82D7F5AC);
PPC_FUNC_IMPL(__imp__sub_82D7F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F5B0"))) PPC_WEAK_FUNC(sub_82D7F5B0);
PPC_FUNC_IMPL(__imp__sub_82D7F5B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32040
	ctx.r12.s64 = -2099773440;
	// addi r12,r12,-2604
	ctx.r12.s64 = ctx.r12.s64 + -2604;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82D7F5F8
		return;
	case 1:
		// ERROR: 0x82D7F61C
		return;
	case 2:
		// ERROR: 0x82D7F640
		return;
	case 3:
		// ERROR: 0x82D7F648
		return;
	case 4:
		// ERROR: 0x82D7F66C
		return;
	case 5:
		// ERROR: 0x82D7F690
		return;
	case 6:
		// ERROR: 0x82D7F698
		return;
	case 7:
		// ERROR: 0x82D7F6BC
		return;
	case 8:
		// ERROR: 0x82D7F6E0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82D7F5D4"))) PPC_WEAK_FUNC(sub_82D7F5D4);
PPC_FUNC_IMPL(__imp__sub_82D7F5D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r22,-2568(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2568);
	// lwz r22,-2532(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2532);
	// lwz r22,-2496(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2496);
	// lwz r22,-2488(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2488);
	// lwz r22,-2452(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2452);
	// lwz r22,-2416(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2416);
	// lwz r22,-2408(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2408);
	// lwz r22,-2372(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2372);
	// lwz r22,-2336(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2336);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,2848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f13,2920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F61C"))) PPC_WEAK_FUNC(sub_82D7F61C);
PPC_FUNC_IMPL(__imp__sub_82D7F61C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,2824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F640"))) PPC_WEAK_FUNC(sub_82D7F640);
PPC_FUNC_IMPL(__imp__sub_82D7F640) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82d7f6e4
	// ERROR 82D7F6E4
	return;
}

__attribute__((alias("__imp__sub_82D7F648"))) PPC_WEAK_FUNC(sub_82D7F648);
PPC_FUNC_IMPL(__imp__sub_82D7F648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f0,2848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f13,2920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F66C"))) PPC_WEAK_FUNC(sub_82D7F66C);
PPC_FUNC_IMPL(__imp__sub_82D7F66C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f0,2824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F690"))) PPC_WEAK_FUNC(sub_82D7F690);
PPC_FUNC_IMPL(__imp__sub_82D7F690) {
	PPC_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82d7f6e4
	// ERROR 82D7F6E4
	return;
}

__attribute__((alias("__imp__sub_82D7F698"))) PPC_WEAK_FUNC(sub_82D7F698);
PPC_FUNC_IMPL(__imp__sub_82D7F698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,2848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f13,2920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F6BC"))) PPC_WEAK_FUNC(sub_82D7F6BC);
PPC_FUNC_IMPL(__imp__sub_82D7F6BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,2824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F6E0"))) PPC_WEAK_FUNC(sub_82D7F6E0);
PPC_FUNC_IMPL(__imp__sub_82D7F6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f0,2920(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f13,3192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F704"))) PPC_WEAK_FUNC(sub_82D7F704);
PPC_FUNC_IMPL(__imp__sub_82D7F704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F708"))) PPC_WEAK_FUNC(sub_82D7F708);
PPC_FUNC_IMPL(__imp__sub_82D7F708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r5,48
	ctx.r5.s64 = 48;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r9,r11,-11716
	ctx.r9.s64 = ctx.r11.s64 + -11716;
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// li r4,250
	ctx.r4.s64 = 250;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r30,20
	ctx.r30.s64 = 20;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,3628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3628);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lfs f12,2824(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2824);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,-11724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11724);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lfs f0,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f13,-24(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lfs f11,3164(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3164);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f10,-11728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11728);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f9,-11732(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11732);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,3052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3052);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,2704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2704);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,2936(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2936);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f6,2968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2968);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f5,2948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2948);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f4,26348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26348);
	ctx.f4.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// stvx128 v0,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r10,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r10.u8);
	// stfs f12,116(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// stvx128 v13,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// stw r31,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stfs f10,136(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f9,140(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f8,172(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f7,168(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f4,148(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// lfs f12,2768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2768);
	ctx.f12.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r30.u32);
	// stb r10,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r10.u8);
	// stb r10,167(r3)
	PPC_STORE_U8(ctx.r3.u32 + 167, ctx.r10.u8);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stw r8,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r8.u32);
	// stfs f12,188(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// stb r11,165(r3)
	PPC_STORE_U8(ctx.r3.u32 + 165, ctx.r11.u8);
	// stb r11,166(r3)
	PPC_STORE_U8(ctx.r3.u32 + 166, ctx.r11.u8);
	// stb r9,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r9.u8);
	// stb r9,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r9.u8);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stb r10,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r10.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F8BC"))) PPC_WEAK_FUNC(sub_82D7F8BC);
PPC_FUNC_IMPL(__imp__sub_82D7F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8C0"))) PPC_WEAK_FUNC(sub_82D7F8C0);
PPC_FUNC_IMPL(__imp__sub_82D7F8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3204);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F904"))) PPC_WEAK_FUNC(sub_82D7F904);
PPC_FUNC_IMPL(__imp__sub_82D7F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F908"))) PPC_WEAK_FUNC(sub_82D7F908);
PPC_FUNC_IMPL(__imp__sub_82D7F908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-11716
	ctx.r11.s64 = ctx.r11.s64 + -11716;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F948"))) PPC_WEAK_FUNC(sub_82D7F948);
PPC_FUNC_IMPL(__imp__sub_82D7F948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F95C"))) PPC_WEAK_FUNC(sub_82D7F95C);
PPC_FUNC_IMPL(__imp__sub_82D7F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F960"))) PPC_WEAK_FUNC(sub_82D7F960);
PPC_FUNC_IMPL(__imp__sub_82D7F960) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d812f0
	sub_82D812F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F970"))) PPC_WEAK_FUNC(sub_82D7F970);
PPC_FUNC_IMPL(__imp__sub_82D7F970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F974"))) PPC_WEAK_FUNC(sub_82D7F974);
PPC_FUNC_IMPL(__imp__sub_82D7F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F978"))) PPC_WEAK_FUNC(sub_82D7F978);
PPC_FUNC_IMPL(__imp__sub_82D7F978) {
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
	// bl 0x82d812f0
	ctx.lr = 0x82D7F990;
	sub_82D812F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F9A4"))) PPC_WEAK_FUNC(sub_82D7F9A4);
PPC_FUNC_IMPL(__imp__sub_82D7F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9A8"))) PPC_WEAK_FUNC(sub_82D7F9A8);
PPC_FUNC_IMPL(__imp__sub_82D7F9A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F9BC"))) PPC_WEAK_FUNC(sub_82D7F9BC);
PPC_FUNC_IMPL(__imp__sub_82D7F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9C0"))) PPC_WEAK_FUNC(sub_82D7F9C0);
PPC_FUNC_IMPL(__imp__sub_82D7F9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7F9D4"))) PPC_WEAK_FUNC(sub_82D7F9D4);
PPC_FUNC_IMPL(__imp__sub_82D7F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9D8"))) PPC_WEAK_FUNC(sub_82D7F9D8);
PPC_FUNC_IMPL(__imp__sub_82D7F9D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,25548
	ctx.r11.s64 = ctx.r11.s64 + 25548;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F9F8"))) PPC_WEAK_FUNC(sub_82D7F9F8);
PPC_FUNC_IMPL(__imp__sub_82D7F9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,25548
	ctx.r3.s64 = ctx.r11.s64 + 25548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FA04"))) PPC_WEAK_FUNC(sub_82D7FA04);
PPC_FUNC_IMPL(__imp__sub_82D7FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FA08"))) PPC_WEAK_FUNC(sub_82D7FA08);
PPC_FUNC_IMPL(__imp__sub_82D7FA08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-29276
	ctx.r11.s64 = ctx.r11.s64 + -29276;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FA28"))) PPC_WEAK_FUNC(sub_82D7FA28);
PPC_FUNC_IMPL(__imp__sub_82D7FA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-29276
	ctx.r3.s64 = ctx.r11.s64 + -29276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FA34"))) PPC_WEAK_FUNC(sub_82D7FA34);
PPC_FUNC_IMPL(__imp__sub_82D7FA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FA38"))) PPC_WEAK_FUNC(sub_82D7FA38);
PPC_FUNC_IMPL(__imp__sub_82D7FA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7FA4C"))) PPC_WEAK_FUNC(sub_82D7FA4C);
PPC_FUNC_IMPL(__imp__sub_82D7FA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FA50"))) PPC_WEAK_FUNC(sub_82D7FA50);
PPC_FUNC_IMPL(__imp__sub_82D7FA50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-10188
	ctx.r11.s64 = ctx.r11.s64 + -10188;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FA70"))) PPC_WEAK_FUNC(sub_82D7FA70);
PPC_FUNC_IMPL(__imp__sub_82D7FA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10188
	ctx.r3.s64 = ctx.r11.s64 + -10188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FA7C"))) PPC_WEAK_FUNC(sub_82D7FA7C);
PPC_FUNC_IMPL(__imp__sub_82D7FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FA80"))) PPC_WEAK_FUNC(sub_82D7FA80);
PPC_FUNC_IMPL(__imp__sub_82D7FA80) {
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
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7fac0
	if (!ctx.cr6.eq) goto loc_82D7FAC0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7FAC0;
	sub_82D4ECA8(ctx, base);
loc_82D7FAC0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7faec
	if (!ctx.cr6.eq) goto loc_82D7FAEC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7FAEC;
	sub_82D4ECA8(ctx, base);
loc_82D7FAEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D7FB0C"))) PPC_WEAK_FUNC(sub_82D7FB0C);
PPC_FUNC_IMPL(__imp__sub_82D7FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB10"))) PPC_WEAK_FUNC(sub_82D7FB10);
PPC_FUNC_IMPL(__imp__sub_82D7FB10) {
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
	// bl 0x82d7fa80
	ctx.lr = 0x82D7FB30;
	sub_82D7FA80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7fb58
	if (ctx.cr6.eq) goto loc_82D7FB58;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7FB58;
	sub_82D4ECA8(ctx, base);
loc_82D7FB58:
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

__attribute__((alias("__imp__sub_82D7FB74"))) PPC_WEAK_FUNC(sub_82D7FB74);
PPC_FUNC_IMPL(__imp__sub_82D7FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB78"))) PPC_WEAK_FUNC(sub_82D7FB78);
PPC_FUNC_IMPL(__imp__sub_82D7FB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7FB8C"))) PPC_WEAK_FUNC(sub_82D7FB8C);
PPC_FUNC_IMPL(__imp__sub_82D7FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB90"))) PPC_WEAK_FUNC(sub_82D7FB90);
PPC_FUNC_IMPL(__imp__sub_82D7FB90) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d9e4f0
	sub_82D9E4F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FBA0"))) PPC_WEAK_FUNC(sub_82D7FBA0);
PPC_FUNC_IMPL(__imp__sub_82D7FBA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FBA4"))) PPC_WEAK_FUNC(sub_82D7FBA4);
PPC_FUNC_IMPL(__imp__sub_82D7FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FBA8"))) PPC_WEAK_FUNC(sub_82D7FBA8);
PPC_FUNC_IMPL(__imp__sub_82D7FBA8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9e4f0
	ctx.lr = 0x82D7FBC0;
	sub_82D9E4F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FBD4"))) PPC_WEAK_FUNC(sub_82D7FBD4);
PPC_FUNC_IMPL(__imp__sub_82D7FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FBD8"))) PPC_WEAK_FUNC(sub_82D7FBD8);
PPC_FUNC_IMPL(__imp__sub_82D7FBD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7FBEC"))) PPC_WEAK_FUNC(sub_82D7FBEC);
PPC_FUNC_IMPL(__imp__sub_82D7FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FBF0"))) PPC_WEAK_FUNC(sub_82D7FBF0);
PPC_FUNC_IMPL(__imp__sub_82D7FBF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-9092
	ctx.r11.s64 = ctx.r11.s64 + -9092;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FC10"))) PPC_WEAK_FUNC(sub_82D7FC10);
PPC_FUNC_IMPL(__imp__sub_82D7FC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-9092
	ctx.r3.s64 = ctx.r11.s64 + -9092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FC1C"))) PPC_WEAK_FUNC(sub_82D7FC1C);
PPC_FUNC_IMPL(__imp__sub_82D7FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC20"))) PPC_WEAK_FUNC(sub_82D7FC20);
PPC_FUNC_IMPL(__imp__sub_82D7FC20) {
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
	// bl 0x82d7ffb8
	ctx.lr = 0x82D7FC40;
	sub_82D7FFB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7fc68
	if (ctx.cr6.eq) goto loc_82D7FC68;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,46
	ctx.r6.s64 = 46;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7FC68;
	sub_82D4ECA8(ctx, base);
loc_82D7FC68:
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

__attribute__((alias("__imp__sub_82D7FC84"))) PPC_WEAK_FUNC(sub_82D7FC84);
PPC_FUNC_IMPL(__imp__sub_82D7FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC88"))) PPC_WEAK_FUNC(sub_82D7FC88);
PPC_FUNC_IMPL(__imp__sub_82D7FC88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7FC9C"))) PPC_WEAK_FUNC(sub_82D7FC9C);
PPC_FUNC_IMPL(__imp__sub_82D7FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FCA0"))) PPC_WEAK_FUNC(sub_82D7FCA0);
PPC_FUNC_IMPL(__imp__sub_82D7FCA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-8736
	ctx.r10.s64 = ctx.r10.s64 + -8736;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82d9e708
	sub_82D9E708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FCCC"))) PPC_WEAK_FUNC(sub_82D7FCCC);
PPC_FUNC_IMPL(__imp__sub_82D7FCCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FCD0"))) PPC_WEAK_FUNC(sub_82D7FCD0);
PPC_FUNC_IMPL(__imp__sub_82D7FCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-8736
	ctx.r11.s64 = ctx.r11.s64 + -8736;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d9e708
	ctx.lr = 0x82D7FCFC;
	sub_82D9E708(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FD10"))) PPC_WEAK_FUNC(sub_82D7FD10);
PPC_FUNC_IMPL(__imp__sub_82D7FD10) {
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
	// bl 0x82d9ed50
	ctx.lr = 0x82D7FD30;
	sub_82D9ED50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7fd58
	if (ctx.cr6.eq) goto loc_82D7FD58;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D7FD58;
	sub_82D4ECA8(ctx, base);
loc_82D7FD58:
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

__attribute__((alias("__imp__sub_82D7FD74"))) PPC_WEAK_FUNC(sub_82D7FD74);
PPC_FUNC_IMPL(__imp__sub_82D7FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FD78"))) PPC_WEAK_FUNC(sub_82D7FD78);
PPC_FUNC_IMPL(__imp__sub_82D7FD78) {
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
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d7a018
	ctx.lr = 0x82D7FDA0;
	sub_82D7A018(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7FDD4"))) PPC_WEAK_FUNC(sub_82D7FDD4);
PPC_FUNC_IMPL(__imp__sub_82D7FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FDD8"))) PPC_WEAK_FUNC(sub_82D7FDD8);
PPC_FUNC_IMPL(__imp__sub_82D7FDD8) {
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
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d7a018
	ctx.lr = 0x82D7FE00;
	sub_82D7A018(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7FE34"))) PPC_WEAK_FUNC(sub_82D7FE34);
PPC_FUNC_IMPL(__imp__sub_82D7FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FE38"))) PPC_WEAK_FUNC(sub_82D7FE38);
PPC_FUNC_IMPL(__imp__sub_82D7FE38) {
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
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7fe94
	if (ctx.cr6.eq) goto loc_82D7FE94;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7fe94
	if (!ctx.cr6.eq) goto loc_82D7FE94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7FE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7FE94:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7FEC8"))) PPC_WEAK_FUNC(sub_82D7FEC8);
PPC_FUNC_IMPL(__imp__sub_82D7FEC8) {
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
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ff24
	if (ctx.cr6.eq) goto loc_82D7FF24;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d7ff24
	if (!ctx.cr6.eq) goto loc_82D7FF24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D7FF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7FF24:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7FF58"))) PPC_WEAK_FUNC(sub_82D7FF58);
PPC_FUNC_IMPL(__imp__sub_82D7FF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-9092
	ctx.r9.s64 = ctx.r11.s64 + -9092;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r8,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FFB4"))) PPC_WEAK_FUNC(sub_82D7FFB4);
PPC_FUNC_IMPL(__imp__sub_82D7FFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FFB8"))) PPC_WEAK_FUNC(sub_82D7FFB8);
PPC_FUNC_IMPL(__imp__sub_82D7FFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82D7FFC0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-9092
	ctx.r10.s64 = ctx.r10.s64 + -9092;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82d80010
	if (!ctx.cr6.gt) goto loc_82D80010;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D7FFE8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d80000
	if (ctx.cr6.eq) goto loc_82D80000;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d7a018
	ctx.lr = 0x82D80000;
	sub_82D7A018(ctx, base);
loc_82D80000:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d7ffe8
	if (!ctx.cr6.eq) goto loc_82D7FFE8;
loc_82D80010:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d8004c
	if (!ctx.cr6.gt) goto loc_82D8004C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D80024:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8003c
	if (ctx.cr6.eq) goto loc_82D8003C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d7a018
	ctx.lr = 0x82D8003C;
	sub_82D7A018(ctx, base);
loc_82D8003C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d80024
	if (!ctx.cr6.eq) goto loc_82D80024;
loc_82D8004C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d800bc
	if (!ctx.cr6.gt) goto loc_82D800BC;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D80060:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d800ac
	if (ctx.cr6.eq) goto loc_82D800AC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d800ac
	if (ctx.cr6.eq) goto loc_82D800AC;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d800ac
	if (!ctx.cr6.eq) goto loc_82D800AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D800AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D800AC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d80060
	if (!ctx.cr6.eq) goto loc_82D80060;
loc_82D800BC:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d8012c
	if (!ctx.cr6.gt) goto loc_82D8012C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D800D0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8011c
	if (ctx.cr6.eq) goto loc_82D8011C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8011c
	if (ctx.cr6.eq) goto loc_82D8011C;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d8011c
	if (!ctx.cr6.eq) goto loc_82D8011C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8011C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8011C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d800d0
	if (!ctx.cr6.eq) goto loc_82D800D0;
loc_82D8012C:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d80158
	if (!ctx.cr6.eq) goto loc_82D80158;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D80158;
	sub_82D4ECA8(ctx, base);
loc_82D80158:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d80184
	if (!ctx.cr6.eq) goto loc_82D80184;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D80184;
	sub_82D4ECA8(ctx, base);
loc_82D80184:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d801b0
	if (!ctx.cr6.eq) goto loc_82D801B0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D801B0;
	sub_82D4ECA8(ctx, base);
loc_82D801B0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d801dc
	if (!ctx.cr6.eq) goto loc_82D801DC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D801DC;
	sub_82D4ECA8(ctx, base);
loc_82D801DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82D801F0"))) PPC_WEAK_FUNC(sub_82D801F0);
PPC_FUNC_IMPL(__imp__sub_82D801F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82D801F8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d8027c
	if (!ctx.cr6.lt) goto loc_82D8027C;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d80248
	if (!ctx.cr6.eq) goto loc_82D80248;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D80248;
	sub_82D4ECA8(ctx, base);
loc_82D80248:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D80264;
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D8027C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ble cr6,0x82d802b0
	if (!ctx.cr6.gt) goto loc_82D802B0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82D80298:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82d80298
	if (!ctx.cr6.eq) goto loc_82D80298;
loc_82D802B0:
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
	// addi r30,r28,44
	ctx.r30.s64 = ctx.r28.s64 + 44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d80328
	if (!ctx.cr6.lt) goto loc_82D80328;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d802f4
	if (!ctx.cr6.eq) goto loc_82D802F4;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D802F4;
	sub_82D4ECA8(ctx, base);
loc_82D802F4:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D80310;
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D80328:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ble cr6,0x82d8035c
	if (!ctx.cr6.gt) goto loc_82D8035C;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82D80344:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82d80344
	if (!ctx.cr6.eq) goto loc_82D80344;
loc_82D8035C:
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
	// addi r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 + 20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d803d4
	if (!ctx.cr6.lt) goto loc_82D803D4;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d803a0
	if (!ctx.cr6.eq) goto loc_82D803A0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D803A0;
	sub_82D4ECA8(ctx, base);
loc_82D803A0:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D803BC;
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D803D4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ble cr6,0x82d80408
	if (!ctx.cr6.gt) goto loc_82D80408;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82D803F0:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82d803f0
	if (!ctx.cr6.eq) goto loc_82D803F0;
loc_82D80408:
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d80480
	if (!ctx.cr6.lt) goto loc_82D80480;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8044c
	if (!ctx.cr6.eq) goto loc_82D8044C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82D8044C;
	sub_82D4ECA8(ctx, base);
loc_82D8044C:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D80468;
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D80480:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ble cr6,0x82d804b4
	if (!ctx.cr6.gt) goto loc_82D804B4;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82D8049C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82d8049c
	if (!ctx.cr6.eq) goto loc_82D8049C;
loc_82D804B4:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// lbz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 64);
	// stb r11,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82D804D4"))) PPC_WEAK_FUNC(sub_82D804D4);
PPC_FUNC_IMPL(__imp__sub_82D804D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D804D8"))) PPC_WEAK_FUNC(sub_82D804D8);
PPC_FUNC_IMPL(__imp__sub_82D804D8) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d80544
	if (ctx.cr6.eq) goto loc_82D80544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d79ff8
	ctx.lr = 0x82D80504;
	sub_82D79FF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d80528
	if (!ctx.cr6.eq) goto loc_82D80528;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D80528;
	sub_82D512F8(ctx, base);
loc_82D80528:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D80544:
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

__attribute__((alias("__imp__sub_82D8055C"))) PPC_WEAK_FUNC(sub_82D8055C);
PPC_FUNC_IMPL(__imp__sub_82D8055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80560"))) PPC_WEAK_FUNC(sub_82D80560);
PPC_FUNC_IMPL(__imp__sub_82D80560) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d805cc
	if (ctx.cr6.eq) goto loc_82D805CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d79ff8
	ctx.lr = 0x82D8058C;
	sub_82D79FF8(ctx, base);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d805b0
	if (!ctx.cr6.eq) goto loc_82D805B0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D805B0;
	sub_82D512F8(ctx, base);
loc_82D805B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D805CC:
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

__attribute__((alias("__imp__sub_82D805E4"))) PPC_WEAK_FUNC(sub_82D805E4);
PPC_FUNC_IMPL(__imp__sub_82D805E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D805E8"))) PPC_WEAK_FUNC(sub_82D805E8);
PPC_FUNC_IMPL(__imp__sub_82D805E8) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d80660
	if (ctx.cr6.eq) goto loc_82D80660;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d80620
	if (ctx.cr6.eq) goto loc_82D80620;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_82D80620:
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d80644
	if (!ctx.cr6.eq) goto loc_82D80644;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D80644;
	sub_82D512F8(ctx, base);
loc_82D80644:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D80660:
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

__attribute__((alias("__imp__sub_82D80678"))) PPC_WEAK_FUNC(sub_82D80678);
PPC_FUNC_IMPL(__imp__sub_82D80678) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d806f0
	if (ctx.cr6.eq) goto loc_82D806F0;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d806b0
	if (ctx.cr6.eq) goto loc_82D806B0;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_82D806B0:
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d806d4
	if (!ctx.cr6.eq) goto loc_82D806D4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82D806D4;
	sub_82D512F8(ctx, base);
loc_82D806D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D806F0:
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

__attribute__((alias("__imp__sub_82D80708"))) PPC_WEAK_FUNC(sub_82D80708);
PPC_FUNC_IMPL(__imp__sub_82D80708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82D80710;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,0(r13)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r20,4
	ctx.r20.s64 = 4;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r3,r20,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82D80730;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,-9092
	ctx.r11.s64 = ctx.r11.s64 + -9092;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,68
	ctx.r9.s64 = 68;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r22,-32768
	ctx.r22.s64 = -2147483648;
	// addi r24,r25,8
	ctx.r24.s64 = ctx.r25.s64 + 8;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r28,r25,20
	ctx.r28.s64 = ctx.r25.s64 + 20;
	// sth r10,6(r25)
	PPC_STORE_U16(ctx.r25.u32 + 6, ctx.r10.u16);
	// addi r21,r25,32
	ctx.r21.s64 = ctx.r25.s64 + 32;
	// sth r9,4(r25)
	PPC_STORE_U16(ctx.r25.u32 + 4, ctx.r9.u16);
	// addi r23,r25,44
	ctx.r23.s64 = ctx.r25.s64 + 44;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r26,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r26.u32);
	// stw r22,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r22.u32);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// stw r22,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r22.u32);
	// stw r26,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r26.u32);
	// stw r26,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r26.u32);
	// stw r22,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r22.u32);
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// stw r22,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r22.u32);
	// stw r26,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r26.u32);
	// stw r26,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r26.u32);
	// stb r10,64(r25)
	PPC_STORE_U8(ctx.r25.u32 + 64, ctx.r10.u8);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
	// lbz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 64);
	// stb r11,64(r25)
	PPC_STORE_U8(ctx.r25.u32 + 64, ctx.r11.u8);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d807f0
	if (!ctx.cr6.lt) goto loc_82D807F0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d807e0
	if (ctx.cr6.lt) goto loc_82D807E0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D807E0:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d51270
	ctx.lr = 0x82D807F0;
	sub_82D51270(ctx, base);
loc_82D807F0:
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r31,48(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d80828
	if (!ctx.cr6.lt) goto loc_82D80828;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d80818
	if (ctx.cr6.lt) goto loc_82D80818;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D80818:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d51270
	ctx.lr = 0x82D80828;
	sub_82D51270(ctx, base);
loc_82D80828:
	// stw r31,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r31,24(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d80860
	if (!ctx.cr6.lt) goto loc_82D80860;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d80850
	if (ctx.cr6.lt) goto loc_82D80850;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D80850:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d51270
	ctx.lr = 0x82D80860;
	sub_82D51270(ctx, base);
loc_82D80860:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r31,36(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82d80898
	if (!ctx.cr6.lt) goto loc_82D80898;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d80888
	if (ctx.cr6.lt) goto loc_82D80888;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D80888:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d51270
	ctx.lr = 0x82D80898;
	sub_82D51270(ctx, base);
loc_82D80898:
	// stw r31,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r31.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d808e8
	if (!ctx.cr6.gt) goto loc_82D808E8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82D808B0:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D808D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d808b0
	if (ctx.cr6.lt) goto loc_82D808B0;
loc_82D808E8:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d80934
	if (!ctx.cr6.gt) goto loc_82D80934;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82D808FC:
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8091C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d808fc
	if (ctx.cr6.lt) goto loc_82D808FC;
loc_82D80934:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d809fc
	if (!ctx.cr6.gt) goto loc_82D809FC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82D80948:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ble cr6,0x82d80984
	if (!ctx.cr6.gt) goto loc_82D80984;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_82D80968:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82d80a2c
	if (ctx.cr6.eq) goto loc_82D80A2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d80968
	if (ctx.cr6.lt) goto loc_82D80968;
loc_82D80984:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82D80988:
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d809bc
	if (!ctx.cr6.gt) goto loc_82D809BC;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_82D809A0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82d80a34
	if (ctx.cr6.eq) goto loc_82D80A34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d809a0
	if (ctx.cr6.lt) goto loc_82D809A0;
loc_82D809BC:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82D809C0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82d80e80
	ctx.lr = 0x82D809E4;
	sub_82D80E80(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d80948
	if (ctx.cr6.lt) goto loc_82D80948;
loc_82D809FC:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d80c9c
	if (!ctx.cr6.gt) goto loc_82D80C9C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82D80A10:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d80a3c
	if (!ctx.cr6.eq) goto loc_82D80A3C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stwx r26,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r26.u32);
	// b 0x82d80c88
	goto loc_82D80C88;
loc_82D80A2C:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// b 0x82d80988
	goto loc_82D80988;
loc_82D80A34:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82d809c0
	goto loc_82D809C0;
loc_82D80A3C:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D80A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d80a94
	if (!ctx.cr6.gt) goto loc_82D80A94;
	// bge cr6,0x82d80a84
	if (!ctx.cr6.lt) goto loc_82D80A84;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82D80A84:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51270
	ctx.lr = 0x82D80A94;
	sub_82D51270(ctx, base);
loc_82D80A94:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d80b08
	if (!ctx.cr6.gt) goto loc_82D80B08;
	// addi r6,r27,8
	ctx.r6.s64 = ctx.r27.s64 + 8;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_82D80AA8:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// ble cr6,0x82d80ae0
	if (!ctx.cr6.gt) goto loc_82D80AE0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82D80AC4:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82d80ae4
	if (ctx.cr6.eq) goto loc_82D80AE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d80ac4
	if (ctx.cr6.lt) goto loc_82D80AC4;
loc_82D80AE0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D80AE4:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne cr6,0x82d80aa8
	if (!ctx.cr6.eq) goto loc_82D80AA8;
loc_82D80B08:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D80B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d80b60
	if (!ctx.cr6.gt) goto loc_82D80B60;
	// bge cr6,0x82d80b50
	if (!ctx.cr6.lt) goto loc_82D80B50;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82D80B50:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	ctx.lr = 0x82D80B60;
	sub_82D51270(ctx, base);
loc_82D80B60:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d80bd4
	if (!ctx.cr6.gt) goto loc_82D80BD4;
	// addi r6,r27,44
	ctx.r6.s64 = ctx.r27.s64 + 44;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_82D80B74:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// ble cr6,0x82d80bac
	if (!ctx.cr6.gt) goto loc_82D80BAC;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82D80B90:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82d80bb0
	if (ctx.cr6.eq) goto loc_82D80BB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d80b90
	if (ctx.cr6.lt) goto loc_82D80B90;
loc_82D80BAC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D80BB0:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne cr6,0x82d80b74
	if (!ctx.cr6.eq) goto loc_82D80B74;
loc_82D80BD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D80BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d80c1c
	if (!ctx.cr6.eq) goto loc_82D80C1C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r20,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d4eca8
	ctx.lr = 0x82D80C1C;
	sub_82D4ECA8(ctx, base);
loc_82D80C1C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d80c40
	if (!ctx.cr6.eq) goto loc_82D80C40;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r20,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82d4eca8
	ctx.lr = 0x82D80C40;
	sub_82D4ECA8(ctx, base);
loc_82D80C40:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d80c64
	if (!ctx.cr6.eq) goto loc_82D80C64;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r20,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d4eca8
	ctx.lr = 0x82D80C64;
	sub_82D4ECA8(ctx, base);
loc_82D80C64:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d80c88
	if (!ctx.cr6.eq) goto loc_82D80C88;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r20,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82d4eca8
	ctx.lr = 0x82D80C88;
	sub_82D4ECA8(ctx, base);
loc_82D80C88:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d80a10
	if (ctx.cr6.lt) goto loc_82D80A10;
loc_82D80C9C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82D80CA8"))) PPC_WEAK_FUNC(sub_82D80CA8);
PPC_FUNC_IMPL(__imp__sub_82D80CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D80CAC"))) PPC_WEAK_FUNC(sub_82D80CAC);
PPC_FUNC_IMPL(__imp__sub_82D80CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80CB0"))) PPC_WEAK_FUNC(sub_82D80CB0);
PPC_FUNC_IMPL(__imp__sub_82D80CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D80CB4"))) PPC_WEAK_FUNC(sub_82D80CB4);
PPC_FUNC_IMPL(__imp__sub_82D80CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80CB8"))) PPC_WEAK_FUNC(sub_82D80CB8);
PPC_FUNC_IMPL(__imp__sub_82D80CB8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-14168
	ctx.r11.s64 = ctx.r11.s64 + -14168;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d80ce8
	if (ctx.cr6.eq) goto loc_82D80CE8;
	// bl 0x82d7a018
	ctx.lr = 0x82D80CE8;
	sub_82D7A018(ctx, base);
loc_82D80CE8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d80cf8
	if (ctx.cr6.eq) goto loc_82D80CF8;
	// bl 0x82d7a018
	ctx.lr = 0x82D80CF8;
	sub_82D7A018(ctx, base);
loc_82D80CF8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d80d3c
	if (ctx.cr6.eq) goto loc_82D80D3C;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d80d3c
	if (ctx.cr6.eq) goto loc_82D80D3C;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82d80d3c
	if (!ctx.cr6.eq) goto loc_82D80D3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D80D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D80D3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D80D5C"))) PPC_WEAK_FUNC(sub_82D80D5C);
PPC_FUNC_IMPL(__imp__sub_82D80D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80D60"))) PPC_WEAK_FUNC(sub_82D80D60);
PPC_FUNC_IMPL(__imp__sub_82D80D60) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-14168
	ctx.r10.s64 = ctx.r11.s64 + -14168;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82d7a218
	ctx.lr = 0x82D80DBC;
	sub_82D7A218(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d80dcc
	if (ctx.cr6.eq) goto loc_82D80DCC;
	// bl 0x82d7a218
	ctx.lr = 0x82D80DCC;
	sub_82D7A218(ctx, base);
loc_82D80DCC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d80dec
	if (ctx.cr6.eq) goto loc_82D80DEC;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_82D80DEC:
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

