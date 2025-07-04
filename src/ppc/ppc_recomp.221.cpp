#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_83289358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21628
	ctx.r3.s64 = ctx.r10.s64 + 21628;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6096
	ctx.r3.s64 = ctx.r9.s64 + -6096;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289358) {
	__imp__sub_83289358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21632
	ctx.r3.s64 = ctx.r10.s64 + 21632;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6080
	ctx.r3.s64 = ctx.r9.s64 + -6080;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289398) {
	__imp__sub_83289398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832893D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21636
	ctx.r3.s64 = ctx.r10.s64 + 21636;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5976
	ctx.r3.s64 = ctx.r9.s64 + -5976;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832893D8) {
	__imp__sub_832893D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21640
	ctx.r3.s64 = ctx.r10.s64 + 21640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5960
	ctx.r3.s64 = ctx.r9.s64 + -5960;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289418) {
	__imp__sub_83289418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5944
	ctx.r3.s64 = r11.s64 + -5944;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83289458) {
	__imp__sub_83289458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,21664
	ctx.r3.s64 = r11.s64 + 21664;
	// bl 0x82aaff50
	sub_82AAFF50(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-5856
	ctx.r3.s64 = ctx.r10.s64 + -5856;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289468) {
	__imp__sub_83289468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832894A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21776
	ctx.r3.s64 = ctx.r10.s64 + 21776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5840
	ctx.r3.s64 = ctx.r9.s64 + -5840;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832894A0) {
	__imp__sub_832894A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832894E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21780
	ctx.r3.s64 = ctx.r10.s64 + 21780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5824
	ctx.r3.s64 = ctx.r9.s64 + -5824;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832894E0) {
	__imp__sub_832894E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5808
	ctx.r3.s64 = r11.s64 + -5808;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83289520) {
	__imp__sub_83289520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21788
	ctx.r3.s64 = ctx.r10.s64 + 21788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5728
	ctx.r3.s64 = ctx.r9.s64 + -5728;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289530) {
	__imp__sub_83289530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21792
	ctx.r3.s64 = ctx.r10.s64 + 21792;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5712
	ctx.r3.s64 = ctx.r9.s64 + -5712;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289570) {
	__imp__sub_83289570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832895B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5696
	ctx.r3.s64 = r11.s64 + -5696;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832895B0) {
	__imp__sub_832895B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832895C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5680
	ctx.r3.s64 = r11.s64 + -5680;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832895C0) {
	__imp__sub_832895C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832895D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5664
	ctx.r3.s64 = r11.s64 + -5664;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832895D0) {
	__imp__sub_832895D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832895E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5648
	ctx.r3.s64 = r11.s64 + -5648;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832895E0) {
	__imp__sub_832895E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832895F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5632
	ctx.r3.s64 = r11.s64 + -5632;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832895F0) {
	__imp__sub_832895F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5616
	ctx.r3.s64 = r11.s64 + -5616;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83289600) {
	__imp__sub_83289600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5600
	ctx.r3.s64 = r11.s64 + -5600;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83289610) {
	__imp__sub_83289610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-5584
	ctx.r3.s64 = r11.s64 + -5584;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83289620) {
	__imp__sub_83289620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21956
	ctx.r3.s64 = ctx.r10.s64 + 21956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5568
	ctx.r3.s64 = ctx.r9.s64 + -5568;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289630) {
	__imp__sub_83289630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21960
	ctx.r3.s64 = ctx.r10.s64 + 21960;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5552
	ctx.r3.s64 = ctx.r9.s64 + -5552;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289670) {
	__imp__sub_83289670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832896B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21964
	ctx.r3.s64 = ctx.r10.s64 + 21964;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5536
	ctx.r3.s64 = ctx.r9.s64 + -5536;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832896B0) {
	__imp__sub_832896B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832896F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21968
	ctx.r3.s64 = ctx.r10.s64 + 21968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5520
	ctx.r3.s64 = ctx.r9.s64 + -5520;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832896F0) {
	__imp__sub_832896F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21972
	ctx.r3.s64 = ctx.r10.s64 + 21972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5504
	ctx.r3.s64 = ctx.r9.s64 + -5504;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289730) {
	__imp__sub_83289730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,21976
	ctx.r3.s64 = ctx.r10.s64 + 21976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5488
	ctx.r3.s64 = ctx.r9.s64 + -5488;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289770) {
	__imp__sub_83289770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832897B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,21984
	ctx.r3.s64 = r11.s64 + 21984;
	// b 0x8223bd98
	sub_8223BD98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832897B0) {
	__imp__sub_832897B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832897C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22048
	ctx.r3.s64 = ctx.r10.s64 + 22048;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5472
	ctx.r3.s64 = ctx.r9.s64 + -5472;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832897C0) {
	__imp__sub_832897C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22052
	ctx.r3.s64 = ctx.r10.s64 + 22052;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5456
	ctx.r3.s64 = ctx.r9.s64 + -5456;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289800) {
	__imp__sub_83289800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// vspltisw v0,1
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x1)));
	// lis r11,-31950
	r11.s64 = -2093875200;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-21504
	ctx.r9.s64 = r11.s64 + -21504;
	// vcfux v0,v0,0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::cvtepu32_f32(simd::load_u32(ctx.v0.u32)));
	// stvx128 v0,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289840) {
	__imp__sub_83289840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// vspltisw v0,1
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x1)));
	// lis r11,-31950
	r11.s64 = -2093875200;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-21472
	ctx.r9.s64 = r11.s64 + -21472;
	// vcfux v0,v0,0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::cvtepu32_f32(simd::load_u32(ctx.v0.u32)));
	// stvx128 v0,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289860) {
	__imp__sub_83289860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-21440
	ctx.r9.s64 = r11.s64 + -21440;
	// stvx128 v0,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289880) {
	__imp__sub_83289880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22056
	ctx.r3.s64 = ctx.r10.s64 + 22056;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5440
	ctx.r3.s64 = ctx.r9.s64 + -5440;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289898) {
	__imp__sub_83289898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832898D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22060
	ctx.r3.s64 = ctx.r10.s64 + 22060;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5424
	ctx.r3.s64 = ctx.r9.s64 + -5424;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832898D8) {
	__imp__sub_832898D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc4
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r11,-8680
	ctx.r9.s64 = r11.s64 + -8680;
	// addi r8,r1,-204
	ctx.r8.s64 = ctx.r1.s64 + -204;
	// addi r7,r1,-200
	ctx.r7.s64 = ctx.r1.s64 + -200;
	// addi r6,r1,-196
	ctx.r6.s64 = ctx.r1.s64 + -196;
	// lfs f13,2280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// lfs f0,-18788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18788);
	f0.f64 = double(temp.f32);
	// addi r4,r1,-192
	ctx.r4.s64 = ctx.r1.s64 + -192;
	// stfs f0,-204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// addi r3,r1,-188
	ctx.r3.s64 = ctx.r1.s64 + -188;
	// stfs f0,-200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// addi r30,r1,-176
	r30.s64 = ctx.r1.s64 + -176;
	// lfs f12,-18776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18776);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r1,-172
	r29.s64 = ctx.r1.s64 + -172;
	// stfs f12,-208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// addi r28,r1,-168
	r28.s64 = ctx.r1.s64 + -168;
	// lfs f12,-19172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19172);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r1,-164
	r27.s64 = ctx.r1.s64 + -164;
	// stfs f0,-196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// addi r10,r1,-184
	ctx.r10.s64 = ctx.r1.s64 + -184;
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r31,r1,-180
	r31.s64 = ctx.r1.s64 + -180;
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// addi r26,r1,-160
	r26.s64 = ctx.r1.s64 + -160;
	// stfs f0,-176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// addi r25,r1,-156
	r25.s64 = ctx.r1.s64 + -156;
	// stfs f0,-172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// addi r24,r1,-152
	r24.s64 = ctx.r1.s64 + -152;
	// stfs f0,-168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r23,r1,-148
	r23.s64 = ctx.r1.s64 + -148;
	// stfs f0,-164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// addi r21,r1,-140
	r21.s64 = ctx.r1.s64 + -140;
	// lfs f11,-9248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9248);
	ctx.f11.f64 = double(temp.f32);
	// addi r22,r1,-144
	r22.s64 = ctx.r1.s64 + -144;
	// stfs f0,-148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r20,r1,-136
	r20.s64 = ctx.r1.s64 + -136;
	// stfs f13,-184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r19,r1,-140
	r19.s64 = ctx.r1.s64 + -140;
	// stfs f11,-180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// stfs f0,-160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// stfs f0,-156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f0,-152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lvlx v0,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v12,v0,4,3
	simd::store_f32(ctx.v12.f32, simd::blend_f32<4>(simd::load_f32(ctx.v12.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v13,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lfs f10,-20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v10,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v11,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v11.f32))));
	// lvlx v9,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v0,v12,v12
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v12.u8));
	// lvlx v7,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v7,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v9,v10,4,3
	simd::store_f32(ctx.v9.f32, simd::blend_f32<4>(simd::load_f32(ctx.v9.f32), simd::permute_f32<57>(simd::load_f32(ctx.v10.f32))));
	// lvlx v6,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v5,0,r28
	temp.u32 = r0.u32 + r28.u32;
	simd::store_shuffled(ctx.v5,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v6,v7,4,3
	simd::store_f32(ctx.v6.f32, simd::blend_f32<4>(simd::load_f32(ctx.v6.f32), simd::permute_f32<57>(simd::load_f32(ctx.v7.f32))));
	// lvlx v4,0,r27
	temp.u32 = r0.u32 + r27.u32;
	simd::store_shuffled(ctx.v4,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v4,v5,4,3
	simd::store_f32(ctx.v4.f32, simd::blend_f32<4>(simd::load_f32(ctx.v4.f32), simd::permute_f32<57>(simd::load_f32(ctx.v5.f32))));
	// stfs f0,-136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// lvlx v31,0,r23
	temp.u32 = r0.u32 + r23.u32;
	simd::store_shuffled(v31,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v12,v9,v9
	simd::store_i8(ctx.v12.u8, simd::load_i8(ctx.v9.u8));
	// lvlx v8,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v0,v6,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v6.f32))));
	// lvlx v11,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v3,0,r26
	temp.u32 = r0.u32 + r26.u32;
	simd::store_shuffled(ctx.v3,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v8,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v8.f32))));
	// lvlx v2,0,r25
	temp.u32 = r0.u32 + r25.u32;
	simd::store_shuffled(ctx.v2,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v4,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(ctx.v4.f32))));
	// lvlx v1,0,r24
	temp.u32 = r0.u32 + r24.u32;
	simd::store_shuffled(ctx.v1,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v2,v3,4,3
	simd::store_f32(ctx.v2.f32, simd::blend_f32<4>(simd::load_f32(ctx.v2.f32), simd::permute_f32<57>(simd::load_f32(ctx.v3.f32))));
	// lvlx v29,0,r21
	temp.u32 = r0.u32 + r21.u32;
	simd::store_shuffled(v29,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v31,v1,4,3
	simd::store_f32(v31.f32, simd::blend_f32<4>(simd::load_f32(v31.f32), simd::permute_f32<57>(simd::load_f32(ctx.v1.f32))));
	// lvlx v30,0,r22
	temp.u32 = r0.u32 + r22.u32;
	simd::store_shuffled(v30,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f10,-140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f12,-148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stfs f11,-144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lfs f12,3388(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3388);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lfs f11,-972(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -972);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// stfs f13,-160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// stfs f11,-164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// addi r4,r1,-156
	ctx.r4.s64 = ctx.r1.s64 + -156;
	// lfs f10,3384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3384);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,-168
	ctx.r7.s64 = ctx.r1.s64 + -168;
	// stfs f10,-168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r3,r1,-148
	ctx.r3.s64 = ctx.r1.s64 + -148;
	// stfs f12,-152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// stfs f12,-156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// addi r8,r1,-164
	ctx.r8.s64 = ctx.r1.s64 + -164;
	// stfs f0,-172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// addi r31,r1,-172
	r31.s64 = ctx.r1.s64 + -172;
	// stfs f0,-176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// addi r10,r10,22064
	ctx.r10.s64 = ctx.r10.s64 + 22064;
	// stfs f0,-180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// li r30,16
	r30.s64 = 16;
	// lvlx v28,0,r20
	temp.u32 = r0.u32 + r20.u32;
	simd::store_shuffled(v28,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r27,r1,-176
	r27.s64 = ctx.r1.s64 + -176;
	// lvlx v10,0,r19
	temp.u32 = r0.u32 + r19.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r26,r1,-180
	r26.s64 = ctx.r1.s64 + -180;
	// li r29,32
	r29.s64 = 32;
	// vrlimi128 v10,v28,4,3
	simd::store_f32(ctx.v10.f32, simd::blend_f32<4>(simd::load_f32(ctx.v10.f32), simd::permute_f32<57>(simd::load_f32(v28.f32))));
	// li r28,48
	r28.s64 = 48;
	// vrlimi128 v12,v2,3,2
	simd::store_f32(ctx.v12.f32, simd::blend_f32<3>(simd::load_f32(ctx.v12.f32), simd::permute_f32<78>(simd::load_f32(ctx.v2.f32))));
	// vrlimi128 v11,v31,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(v31.f32))));
	// lvlx v8,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v29,v30,4,3
	simd::store_f32(v29.f32, simd::blend_f32<4>(simd::load_f32(v29.f32), simd::permute_f32<57>(simd::load_f32(v30.f32))));
	// lfs f10,-8680(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8680);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v13,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r3,r1,-136
	ctx.r3.s64 = ctx.r1.s64 + -136;
	// stfs f0,-136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// addi r11,r1,-140
	r11.s64 = ctx.r1.s64 + -140;
	// lvlx v9,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// stfs f0,-140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// addi r25,r1,-164
	r25.s64 = ctx.r1.s64 + -164;
	// stfs f0,-144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// vrlimi128 v10,v29,3,2
	simd::store_f32(ctx.v10.f32, simd::blend_f32<3>(simd::load_f32(ctx.v10.f32), simd::permute_f32<78>(simd::load_f32(v29.f32))));
	// lvlx v27,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(v27,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r9,r1,-148
	ctx.r9.s64 = ctx.r1.s64 + -148;
	// lvlx v26,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v26,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// stfs f0,-148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// vrlimi128 v26,v27,4,3
	simd::store_f32(v26.f32, simd::blend_f32<4>(simd::load_f32(v26.f32), simd::permute_f32<57>(simd::load_f32(v27.f32))));
	// lvlx v23,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v23,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lvlx v25,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v25,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// lvlx v24,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(v24,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v9,v25,4,3
	simd::store_f32(ctx.v9.f32, simd::blend_f32<4>(simd::load_f32(ctx.v9.f32), simd::permute_f32<57>(simd::load_f32(v25.f32))));
	// lvlx v22,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(v22,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v8,v24,4,3
	simd::store_f32(ctx.v8.f32, simd::blend_f32<4>(simd::load_f32(ctx.v8.f32), simd::permute_f32<57>(simd::load_f32(v24.f32))));
	// stfs f13,-168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r4,r1,-156
	ctx.r4.s64 = ctx.r1.s64 + -156;
	// lvlx v21,0,r27
	temp.u32 = r0.u32 + r27.u32;
	simd::store_shuffled(v21,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v22,v23,4,3
	simd::store_f32(v22.f32, simd::blend_f32<4>(simd::load_f32(v22.f32), simd::permute_f32<57>(simd::load_f32(v23.f32))));
	// lvlx v20,0,r26
	temp.u32 = r0.u32 + r26.u32;
	simd::store_shuffled(v20,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r31,r1,-168
	r31.s64 = ctx.r1.s64 + -168;
	// lfs f13,3380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3380);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,-172
	ctx.r7.s64 = ctx.r1.s64 + -172;
	// stfs f0,-160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r30,r1,-176
	r30.s64 = ctx.r1.s64 + -176;
	// stfs f0,-164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// stfs f0,-152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f0,-156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f10,-172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f12,-176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f10,-180(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// stfs f0,-188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// stfs f12,-192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v11,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f11,-196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// addi r29,r1,-180
	r29.s64 = ctx.r1.s64 + -180;
	// stfs f13,-184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r28,r1,-184
	r28.s64 = ctx.r1.s64 + -184;
	// stfs f0,-200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// addi r27,r1,-188
	r27.s64 = ctx.r1.s64 + -188;
	// stfs f0,-204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// addi r26,r1,-192
	r26.s64 = ctx.r1.s64 + -192;
	// stfs f0,-208(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// addi r24,r1,-196
	r24.s64 = ctx.r1.s64 + -196;
	// stfs f0,-132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// addi r23,r1,-200
	r23.s64 = ctx.r1.s64 + -200;
	// stfs f0,-128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// addi r22,r1,-204
	r22.s64 = ctx.r1.s64 + -204;
	// stfs f0,-124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// vor v0,v26,v26
	simd::store_i8(ctx.v0.u8, simd::load_i8(v26.u8));
	// lvlx v18,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(v18,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v13,v22,v22
	simd::store_i8(ctx.v13.u8, simd::load_i8(v22.u8));
	// lvlx v17,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v17,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r9,r1,-132
	ctx.r9.s64 = ctx.r1.s64 + -132;
	// lvlx v19,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(v19,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// lvlx v16,0,r25
	temp.u32 = r0.u32 + r25.u32;
	simd::store_shuffled(v16,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v18,v19,4,3
	simd::store_f32(v18.f32, simd::blend_f32<4>(simd::load_f32(v18.f32), simd::permute_f32<57>(simd::load_f32(v19.f32))));
	// vrlimi128 v16,v17,4,3
	simd::store_f32(v16.f32, simd::blend_f32<4>(simd::load_f32(v16.f32), simd::permute_f32<57>(simd::load_f32(v17.f32))));
	// lvlx v15,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(v15,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v14,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(v14,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r3,112
	ctx.r3.s64 = 112;
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r11,128
	r11.s64 = 128;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// lvlx128 v63,r0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(v63,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r7,r1,-124
	ctx.r7.s64 = ctx.r1.s64 + -124;
	// lvlx128 v61,r0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v61,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx128 v60,r0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(v60,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v0,v18,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(v18.f32))));
	// lvlx128 v62,r0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(v62,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v16,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(v16.f32))));
	// lvlx v11,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v20,v21,4,3
	simd::store_f32(v20.f32, simd::blend_f32<4>(simd::load_f32(v20.f32), simd::permute_f32<57>(simd::load_f32(v21.f32))));
	// lvlx128 v59,r0,r27
	temp.u32 = r0.u32 + r27.u32;
	simd::store_shuffled(v59,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v14,v15,4,3
	simd::store_f32(v14.f32, simd::blend_f32<4>(simd::load_f32(v14.f32), simd::permute_f32<57>(simd::load_f32(v15.f32))));
	// lvlx128 v58,r0,r28
	temp.u32 = r0.u32 + r28.u32;
	simd::store_shuffled(v58,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v12,v63,4,3
	simd::store_f32(ctx.v12.f32, simd::blend_f32<4>(simd::load_f32(ctx.v12.f32), simd::permute_f32<57>(simd::load_f32(v63.f32))));
	// lvlx128 v57,r0,r26
	temp.u32 = r0.u32 + r26.u32;
	simd::store_shuffled(v57,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v62,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(v62.f32))));
	// lvlx128 v56,r0,r24
	temp.u32 = r0.u32 + r24.u32;
	simd::store_shuffled(v56,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v60,v61,4,3
	simd::store_f32(v60.f32, simd::blend_f32<4>(simd::load_f32(v60.f32), simd::permute_f32<57>(simd::load_f32(v61.f32))));
	// lvlx128 v55,r0,r23
	temp.u32 = r0.u32 + r23.u32;
	simd::store_shuffled(v55,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v59,v58,4,3
	simd::store_f32(v59.f32, simd::blend_f32<4>(simd::load_f32(v59.f32), simd::permute_f32<57>(simd::load_f32(v58.f32))));
	// lvlx128 v54,r0,r22
	temp.u32 = r0.u32 + r22.u32;
	simd::store_shuffled(v54,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v56,v57,4,3
	simd::store_f32(v56.f32, simd::blend_f32<4>(simd::load_f32(v56.f32), simd::permute_f32<57>(simd::load_f32(v57.f32))));
	// vrlimi128 v54,v55,4,3
	simd::store_f32(v54.f32, simd::blend_f32<4>(simd::load_f32(v54.f32), simd::permute_f32<57>(simd::load_f32(v55.f32))));
	// lvlx128 v52,r0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(v52,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx128 v51,r0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v51,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r6,64
	ctx.r6.s64 = 64;
	// lvlx128 v53,r0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(v53,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r4,80
	ctx.r4.s64 = 80;
	// lvlx128 v50,r0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v50,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r31,96
	r31.s64 = 96;
	// stvx128 v0,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// li r3,144
	ctx.r3.s64 = 144;
	// stvx128 v13,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// li r11,160
	r11.s64 = 160;
	// vrlimi128 v9,v20,3,2
	simd::store_f32(ctx.v9.f32, simd::blend_f32<3>(simd::load_f32(ctx.v9.f32), simd::permute_f32<78>(simd::load_f32(v20.f32))));
	// stvx128 v10,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// vrlimi128 v8,v14,3,2
	simd::store_f32(ctx.v8.f32, simd::blend_f32<3>(simd::load_f32(ctx.v8.f32), simd::permute_f32<78>(simd::load_f32(v14.f32))));
	// li r9,176
	ctx.r9.s64 = 176;
	// vrlimi128 v12,v60,3,2
	simd::store_f32(ctx.v12.f32, simd::blend_f32<3>(simd::load_f32(ctx.v12.f32), simd::permute_f32<78>(simd::load_f32(v60.f32))));
	// li r8,192
	ctx.r8.s64 = 192;
	// vor128 v0,v59,v59
	simd::store_i8(ctx.v0.u8, simd::load_i8(v59.u8));
	// vrlimi128 v52,v53,4,3
	simd::store_f32(v52.f32, simd::blend_f32<4>(simd::load_f32(v52.f32), simd::permute_f32<57>(simd::load_f32(v53.f32))));
	// stvx128 v9,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// vor128 v13,v56,v56
	simd::store_i8(ctx.v13.u8, simd::load_i8(v56.u8));
	// stvx128 v8,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v8), &VectorMaskL[(ea & 0xF) * 16]);
	// vrlimi128 v50,v51,4,3
	simd::store_f32(v50.f32, simd::blend_f32<4>(simd::load_f32(v50.f32), simd::permute_f32<57>(simd::load_f32(v51.f32))));
	// stvx128 v12,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// vrlimi128 v11,v54,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(v54.f32))));
	// vrlimi128 v0,v52,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(v52.f32))));
	// vrlimi128 v13,v50,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(v50.f32))));
	// stvx128 v11,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_83289918) {
	__imp__sub_83289918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22272
	ctx.r3.s64 = ctx.r10.s64 + 22272;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5384
	ctx.r3.s64 = ctx.r9.s64 + -5384;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289CF8) {
	__imp__sub_83289CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22276
	ctx.r3.s64 = ctx.r10.s64 + 22276;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5368
	ctx.r3.s64 = ctx.r9.s64 + -5368;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289D38) {
	__imp__sub_83289D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22280
	ctx.r3.s64 = ctx.r10.s64 + 22280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5352
	ctx.r3.s64 = ctx.r9.s64 + -5352;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289D78) {
	__imp__sub_83289D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22284
	ctx.r3.s64 = ctx.r10.s64 + 22284;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5336
	ctx.r3.s64 = ctx.r9.s64 + -5336;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289DB8) {
	__imp__sub_83289DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22288
	ctx.r3.s64 = ctx.r10.s64 + 22288;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5320
	ctx.r3.s64 = ctx.r9.s64 + -5320;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289DF8) {
	__imp__sub_83289DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22292
	ctx.r3.s64 = ctx.r10.s64 + 22292;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5304
	ctx.r3.s64 = ctx.r9.s64 + -5304;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289E38) {
	__imp__sub_83289E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22296
	ctx.r3.s64 = ctx.r10.s64 + 22296;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5288
	ctx.r3.s64 = ctx.r9.s64 + -5288;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289E78) {
	__imp__sub_83289E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22300
	ctx.r3.s64 = ctx.r10.s64 + 22300;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5272
	ctx.r3.s64 = ctx.r9.s64 + -5272;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289EB8) {
	__imp__sub_83289EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22304
	ctx.r3.s64 = ctx.r10.s64 + 22304;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5256
	ctx.r3.s64 = ctx.r9.s64 + -5256;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289EF8) {
	__imp__sub_83289EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22308
	ctx.r3.s64 = ctx.r10.s64 + 22308;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5240
	ctx.r3.s64 = ctx.r9.s64 + -5240;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289F38) {
	__imp__sub_83289F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22312
	ctx.r3.s64 = ctx.r10.s64 + 22312;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5224
	ctx.r3.s64 = ctx.r9.s64 + -5224;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289F78) {
	__imp__sub_83289F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22316
	ctx.r3.s64 = ctx.r10.s64 + 22316;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5208
	ctx.r3.s64 = ctx.r9.s64 + -5208;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289FB8) {
	__imp__sub_83289FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83289FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22320
	ctx.r3.s64 = ctx.r10.s64 + 22320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5192
	ctx.r3.s64 = ctx.r9.s64 + -5192;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83289FF8) {
	__imp__sub_83289FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22324
	ctx.r3.s64 = ctx.r10.s64 + 22324;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5176
	ctx.r3.s64 = ctx.r9.s64 + -5176;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A038) {
	__imp__sub_8328A038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22328
	ctx.r3.s64 = ctx.r10.s64 + 22328;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5160
	ctx.r3.s64 = ctx.r9.s64 + -5160;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A078) {
	__imp__sub_8328A078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22332
	ctx.r3.s64 = ctx.r10.s64 + 22332;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5144
	ctx.r3.s64 = ctx.r9.s64 + -5144;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A0B8) {
	__imp__sub_8328A0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r5,r6,22336
	ctx.r5.s64 = ctx.r6.s64 + 22336;
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A0F8) {
	__imp__sub_8328A0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r4,r7,-28272
	ctx.r4.s64 = ctx.r7.s64 + -28272;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r3,r6,-28256
	ctx.r3.s64 = ctx.r6.s64 + -28256;
	// lvlx v11,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r5,-28240
	r11.s64 = ctx.r5.s64 + -28240;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vspltw v8,v0,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lvlx v10,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v9,v10,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r10,22352
	ctx.r9.s64 = ctx.r10.s64 + 22352;
	// li r7,32
	ctx.r7.s64 = 32;
	// vand v0,v11,v0
	simd::store_u8(ctx.v0.u8, simd::and_u8(simd::load_u8(ctx.v11.u8), simd::load_u8(ctx.v0.u8)));
	// vand v13,v8,v13
	simd::store_u8(ctx.v13.u8, simd::and_u8(simd::load_u8(ctx.v8.u8), simd::load_u8(ctx.v13.u8)));
	// vand v12,v9,v12
	simd::store_u8(ctx.v12.u8, simd::and_u8(simd::load_u8(ctx.v9.u8), simd::load_u8(ctx.v12.u8)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A150) {
	__imp__sub_8328A150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22400
	ctx.r3.s64 = ctx.r10.s64 + 22400;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5128
	ctx.r3.s64 = ctx.r9.s64 + -5128;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A1D8) {
	__imp__sub_8328A1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22404
	ctx.r3.s64 = ctx.r10.s64 + 22404;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5112
	ctx.r3.s64 = ctx.r9.s64 + -5112;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A218) {
	__imp__sub_8328A218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22408
	ctx.r3.s64 = ctx.r10.s64 + 22408;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5096
	ctx.r3.s64 = ctx.r9.s64 + -5096;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A258) {
	__imp__sub_8328A258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22412
	ctx.r3.s64 = ctx.r10.s64 + 22412;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5080
	ctx.r3.s64 = ctx.r9.s64 + -5080;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A298) {
	__imp__sub_8328A298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22416
	ctx.r3.s64 = ctx.r10.s64 + 22416;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5064
	ctx.r3.s64 = ctx.r9.s64 + -5064;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A2D8) {
	__imp__sub_8328A2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22420
	ctx.r3.s64 = ctx.r10.s64 + 22420;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5048
	ctx.r3.s64 = ctx.r9.s64 + -5048;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A318) {
	__imp__sub_8328A318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22424
	ctx.r3.s64 = ctx.r10.s64 + 22424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5032
	ctx.r3.s64 = ctx.r9.s64 + -5032;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A358) {
	__imp__sub_8328A358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22428
	ctx.r3.s64 = ctx.r10.s64 + 22428;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5016
	ctx.r3.s64 = ctx.r9.s64 + -5016;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A398) {
	__imp__sub_8328A398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22432
	ctx.r3.s64 = ctx.r10.s64 + 22432;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5000
	ctx.r3.s64 = ctx.r9.s64 + -5000;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A3D8) {
	__imp__sub_8328A3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22436
	ctx.r3.s64 = ctx.r10.s64 + 22436;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4984
	ctx.r3.s64 = ctx.r9.s64 + -4984;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A418) {
	__imp__sub_8328A418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22440
	ctx.r3.s64 = ctx.r10.s64 + 22440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4968
	ctx.r3.s64 = ctx.r9.s64 + -4968;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A458) {
	__imp__sub_8328A458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22444
	ctx.r3.s64 = ctx.r10.s64 + 22444;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4952
	ctx.r3.s64 = ctx.r9.s64 + -4952;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A498) {
	__imp__sub_8328A498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22448
	ctx.r3.s64 = ctx.r10.s64 + 22448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4936
	ctx.r3.s64 = ctx.r9.s64 + -4936;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A4D8) {
	__imp__sub_8328A4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22452
	ctx.r3.s64 = ctx.r10.s64 + 22452;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4920
	ctx.r3.s64 = ctx.r9.s64 + -4920;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A518) {
	__imp__sub_8328A518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22456
	ctx.r3.s64 = ctx.r10.s64 + 22456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4904
	ctx.r3.s64 = ctx.r9.s64 + -4904;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A558) {
	__imp__sub_8328A558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22460
	ctx.r3.s64 = ctx.r10.s64 + 22460;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4888
	ctx.r3.s64 = ctx.r9.s64 + -4888;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A598) {
	__imp__sub_8328A598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22464
	ctx.r3.s64 = ctx.r10.s64 + 22464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4872
	ctx.r3.s64 = ctx.r9.s64 + -4872;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A5D8) {
	__imp__sub_8328A5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,22468
	ctx.r3.s64 = ctx.r10.s64 + 22468;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4856
	ctx.r3.s64 = ctx.r9.s64 + -4856;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A618) {
	__imp__sub_8328A618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,22472
	ctx.r3.s64 = r11.s64 + 22472;
	// b 0x82aafda8
	sub_82AAFDA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328A658) {
	__imp__sub_8328A658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23052
	ctx.r3.s64 = ctx.r10.s64 + 23052;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4840
	ctx.r3.s64 = ctx.r9.s64 + -4840;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A668) {
	__imp__sub_8328A668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23056
	ctx.r3.s64 = ctx.r10.s64 + 23056;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4824
	ctx.r3.s64 = ctx.r9.s64 + -4824;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A6A8) {
	__imp__sub_8328A6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23060
	ctx.r3.s64 = ctx.r10.s64 + 23060;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4808
	ctx.r3.s64 = ctx.r9.s64 + -4808;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A6E8) {
	__imp__sub_8328A6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23064
	ctx.r3.s64 = ctx.r10.s64 + 23064;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4792
	ctx.r3.s64 = ctx.r9.s64 + -4792;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A728) {
	__imp__sub_8328A728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23068
	ctx.r3.s64 = ctx.r10.s64 + 23068;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4776
	ctx.r3.s64 = ctx.r9.s64 + -4776;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A768) {
	__imp__sub_8328A768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23072
	ctx.r3.s64 = ctx.r10.s64 + 23072;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4760
	ctx.r3.s64 = ctx.r9.s64 + -4760;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A7A8) {
	__imp__sub_8328A7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-4744
	ctx.r3.s64 = r11.s64 + -4744;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328A7E8) {
	__imp__sub_8328A7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23092
	ctx.r3.s64 = ctx.r10.s64 + 23092;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4656
	ctx.r3.s64 = ctx.r9.s64 + -4656;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A7F8) {
	__imp__sub_8328A7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23096
	ctx.r3.s64 = ctx.r10.s64 + 23096;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4640
	ctx.r3.s64 = ctx.r9.s64 + -4640;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328A838) {
	__imp__sub_8328A838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328A878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc4
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// addi r9,r11,-27852
	ctx.r9.s64 = r11.s64 + -27852;
	// addi r8,r1,-188
	ctx.r8.s64 = ctx.r1.s64 + -188;
	// addi r7,r1,-184
	ctx.r7.s64 = ctx.r1.s64 + -184;
	// addi r6,r1,-180
	ctx.r6.s64 = ctx.r1.s64 + -180;
	// lfs f12,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27852);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lfs f0,384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 384);
	f0.f64 = double(temp.f32);
	// addi r4,r1,-172
	ctx.r4.s64 = ctx.r1.s64 + -172;
	// lfs f13,396(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,-168
	ctx.r3.s64 = ctx.r1.s64 + -168;
	// stfs f0,-192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r9,r1,-164
	ctx.r9.s64 = ctx.r1.s64 + -164;
	// stfs f13,-188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stfs f13,-184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r30,r1,-156
	r30.s64 = ctx.r1.s64 + -156;
	// stfs f0,-180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// addi r29,r1,-152
	r29.s64 = ctx.r1.s64 + -152;
	// stfs f0,-176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// addi r28,r1,-148
	r28.s64 = ctx.r1.s64 + -148;
	// stfs f0,-172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// stfs f13,-168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r26,r1,-140
	r26.s64 = ctx.r1.s64 + -140;
	// stfs f13,-164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// addi r25,r1,-136
	r25.s64 = ctx.r1.s64 + -136;
	// stfs f0,-160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r24,r1,-132
	r24.s64 = ctx.r1.s64 + -132;
	// stfs f0,-156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// addi r23,r1,-128
	r23.s64 = ctx.r1.s64 + -128;
	// stfs f0,-152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// addi r22,r1,-124
	r22.s64 = ctx.r1.s64 + -124;
	// stfs f0,-148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r21,r1,-120
	r21.s64 = ctx.r1.s64 + -120;
	// stfs f0,-144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r20,r1,-116
	r20.s64 = ctx.r1.s64 + -116;
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// lis r19,-31950
	r19.s64 = -2093875200;
	// stfs f0,-136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// addi r19,r19,-21248
	r19.s64 = r19.s64 + -21248;
	// stfs f0,-128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f13,-124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f13,-116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// lvlx v10,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v12,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v9,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v0,v13,v13
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v13.u8));
	// lvlx v8,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v12,v10,4,3
	simd::store_f32(ctx.v12.f32, simd::blend_f32<4>(simd::load_f32(ctx.v12.f32), simd::permute_f32<57>(simd::load_f32(ctx.v10.f32))));
	// lvlx v7,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(ctx.v7,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v13,v11,v11
	simd::store_i8(ctx.v13.u8, simd::load_i8(ctx.v11.u8));
	// lvlx v6,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v8,v9,4,3
	simd::store_f32(ctx.v8.f32, simd::blend_f32<4>(simd::load_f32(ctx.v8.f32), simd::permute_f32<57>(simd::load_f32(ctx.v9.f32))));
	// lvlx v5,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(ctx.v5,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v6,v7,4,3
	simd::store_f32(ctx.v6.f32, simd::blend_f32<4>(simd::load_f32(ctx.v6.f32), simd::permute_f32<57>(simd::load_f32(ctx.v7.f32))));
	// lvlx v4,0,r28
	temp.u32 = r0.u32 + r28.u32;
	simd::store_shuffled(ctx.v4,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v3,0,r27
	temp.u32 = r0.u32 + r27.u32;
	simd::store_shuffled(ctx.v3,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v4,v5,4,3
	simd::store_f32(ctx.v4.f32, simd::blend_f32<4>(simd::load_f32(ctx.v4.f32), simd::permute_f32<57>(simd::load_f32(ctx.v5.f32))));
	// lvlx v2,0,r26
	temp.u32 = r0.u32 + r26.u32;
	simd::store_shuffled(ctx.v2,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v11,v8,v8
	simd::store_i8(ctx.v11.u8, simd::load_i8(ctx.v8.u8));
	// vrlimi128 v2,v3,4,3
	simd::store_f32(ctx.v2.f32, simd::blend_f32<4>(simd::load_f32(ctx.v2.f32), simd::permute_f32<57>(simd::load_f32(ctx.v3.f32))));
	// lvlx v1,0,r25
	temp.u32 = r0.u32 + r25.u32;
	simd::store_shuffled(ctx.v1,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v31,0,r24
	temp.u32 = r0.u32 + r24.u32;
	simd::store_shuffled(v31,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v0,v6,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v6.f32))));
	// lvlx v30,0,r23
	temp.u32 = r0.u32 + r23.u32;
	simd::store_shuffled(v30,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v31,v1,4,3
	simd::store_f32(v31.f32, simd::blend_f32<4>(simd::load_f32(v31.f32), simd::permute_f32<57>(simd::load_f32(ctx.v1.f32))));
	// lvlx v29,0,r22
	temp.u32 = r0.u32 + r22.u32;
	simd::store_shuffled(v29,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v4,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(ctx.v4.f32))));
	// lvlx v28,0,r21
	temp.u32 = r0.u32 + r21.u32;
	simd::store_shuffled(v28,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v12,v2,3,2
	simd::store_f32(ctx.v12.f32, simd::blend_f32<3>(simd::load_f32(ctx.v12.f32), simd::permute_f32<78>(simd::load_f32(ctx.v2.f32))));
	// lvlx v10,0,r20
	temp.u32 = r0.u32 + r20.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// addi r7,r1,-120
	ctx.r7.s64 = ctx.r1.s64 + -120;
	// stfs f13,-124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// addi r6,r1,-124
	ctx.r6.s64 = ctx.r1.s64 + -124;
	// stfs f13,-116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// addi r8,r1,-116
	ctx.r8.s64 = ctx.r1.s64 + -116;
	// stfs f13,-128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// stfs f0,-132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// addi r4,r1,-132
	ctx.r4.s64 = ctx.r1.s64 + -132;
	// stfs f0,-136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// addi r3,r1,-136
	ctx.r3.s64 = ctx.r1.s64 + -136;
	// stfs f12,-140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// addi r11,r1,-140
	r11.s64 = ctx.r1.s64 + -140;
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// stfs f0,-148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r9,r1,-148
	ctx.r9.s64 = ctx.r1.s64 + -148;
	// stfs f13,-152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// addi r31,r1,-152
	r31.s64 = ctx.r1.s64 + -152;
	// stfs f0,-156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// addi r30,r1,-156
	r30.s64 = ctx.r1.s64 + -156;
	// stfs f13,-160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r29,r1,-160
	r29.s64 = ctx.r1.s64 + -160;
	// stfs f0,-164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// li r28,16
	r28.s64 = 16;
	// stfs f0,-168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// li r27,48
	r27.s64 = 48;
	// stfs f0,-172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// li r26,80
	r26.s64 = 80;
	// li r25,112
	r25.s64 = 112;
	// vrlimi128 v10,v28,4,3
	simd::store_f32(ctx.v10.f32, simd::blend_f32<4>(simd::load_f32(ctx.v10.f32), simd::permute_f32<57>(simd::load_f32(v28.f32))));
	// addi r24,r1,-164
	r24.s64 = ctx.r1.s64 + -164;
	// vrlimi128 v11,v31,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(v31.f32))));
	// addi r23,r1,-168
	r23.s64 = ctx.r1.s64 + -168;
	// vrlimi128 v29,v30,4,3
	simd::store_f32(v29.f32, simd::blend_f32<4>(simd::load_f32(v29.f32), simd::permute_f32<57>(simd::load_f32(v30.f32))));
	// addi r22,r1,-172
	r22.s64 = ctx.r1.s64 + -172;
	// stfs f0,-176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f0,-180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// addi r21,r1,-176
	r21.s64 = ctx.r1.s64 + -176;
	// lvlx v9,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r7,r1,-116
	ctx.r7.s64 = ctx.r1.s64 + -116;
	// stfs f13,-120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// vrlimi128 v10,v29,3,2
	simd::store_f32(ctx.v10.f32, simd::blend_f32<3>(simd::load_f32(ctx.v10.f32), simd::permute_f32<78>(simd::load_f32(v29.f32))));
	// lvlx v26,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v26,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r1,-120
	ctx.r6.s64 = ctx.r1.s64 + -120;
	// lvlx v27,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v27,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,-180
	ctx.r8.s64 = ctx.r1.s64 + -180;
	// lvlx v8,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v9,v27,4,3
	simd::store_f32(ctx.v9.f32, simd::blend_f32<4>(simd::load_f32(ctx.v9.f32), simd::permute_f32<57>(simd::load_f32(v27.f32))));
	// lvlx v25,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(v25,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v8,v26,4,3
	simd::store_f32(ctx.v8.f32, simd::blend_f32<4>(simd::load_f32(ctx.v8.f32), simd::permute_f32<57>(simd::load_f32(v26.f32))));
	// lvlx v7,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v7,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r5,r1,-124
	ctx.r5.s64 = ctx.r1.s64 + -124;
	// lvlx v24,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(v24,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v7,v25,4,3
	simd::store_f32(ctx.v7.f32, simd::blend_f32<4>(simd::load_f32(ctx.v7.f32), simd::permute_f32<57>(simd::load_f32(v25.f32))));
	// lvlx v6,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// lvlx v23,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(v23,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v6,v24,4,3
	simd::store_f32(ctx.v6.f32, simd::blend_f32<4>(simd::load_f32(ctx.v6.f32), simd::permute_f32<57>(simd::load_f32(v24.f32))));
	// lvlx v22,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(v22,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r3,r1,-132
	ctx.r3.s64 = ctx.r1.s64 + -132;
	// lvlx v21,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(v21,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v22,v23,4,3
	simd::store_f32(v22.f32, simd::blend_f32<4>(simd::load_f32(v22.f32), simd::permute_f32<57>(simd::load_f32(v23.f32))));
	// lvlx v20,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(v20,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,-136
	r11.s64 = ctx.r1.s64 + -136;
	// lvlx v19,0,r24
	temp.u32 = r0.u32 + r24.u32;
	simd::store_shuffled(v19,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v20,v21,4,3
	simd::store_f32(v20.f32, simd::blend_f32<4>(simd::load_f32(v20.f32), simd::permute_f32<57>(simd::load_f32(v21.f32))));
	// lvlx v18,0,r23
	temp.u32 = r0.u32 + r23.u32;
	simd::store_shuffled(v18,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v17,0,r22
	temp.u32 = r0.u32 + r22.u32;
	simd::store_shuffled(v17,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f12,-124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f12,-128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// lvlx v16,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v16,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stvx128 v0,r19,r28
	ea = (r19.u32 + r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r19,r27
	ea = (r19.u32 + r27.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r19,r26
	ea = (r19.u32 + r26.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v11,r19,r25
	ea = (r19.u32 + r25.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,-140
	ctx.r10.s64 = ctx.r1.s64 + -140;
	// lvlx v0,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v14,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(v14,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v0,v16,4,3
	simd::store_f32(ctx.v0.f32, simd::blend_f32<4>(simd::load_f32(ctx.v0.f32), simd::permute_f32<57>(simd::load_f32(v16.f32))));
	// lvlx v13,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v18,v19,4,3
	simd::store_f32(v18.f32, simd::blend_f32<4>(simd::load_f32(v18.f32), simd::permute_f32<57>(simd::load_f32(v19.f32))));
	// lvlx128 v63,r0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v63,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v14,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(v14.f32))));
	// lvlx128 v62,r0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v62,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r9,144
	ctx.r9.s64 = 144;
	// lvlx v15,0,r21
	temp.u32 = r0.u32 + r21.u32;
	simd::store_shuffled(v15,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v62,v63,4,3
	simd::store_f32(v62.f32, simd::blend_f32<4>(simd::load_f32(v62.f32), simd::permute_f32<57>(simd::load_f32(v63.f32))));
	// lvlx128 v61,r0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(v61,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v15,v17,4,3
	simd::store_f32(v15.f32, simd::blend_f32<4>(simd::load_f32(v15.f32), simd::permute_f32<57>(simd::load_f32(v17.f32))));
	// lvlx128 v60,r0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(v60,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r8,176
	ctx.r8.s64 = 176;
	// vrlimi128 v60,v61,4,3
	simd::store_f32(v60.f32, simd::blend_f32<4>(simd::load_f32(v60.f32), simd::permute_f32<57>(simd::load_f32(v61.f32))));
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,240
	ctx.r6.s64 = 240;
	// vrlimi128 v9,v22,3,2
	simd::store_f32(ctx.v9.f32, simd::blend_f32<3>(simd::load_f32(ctx.v9.f32), simd::permute_f32<78>(simd::load_f32(v22.f32))));
	// li r5,272
	ctx.r5.s64 = 272;
	// vrlimi128 v8,v20,3,2
	simd::store_f32(ctx.v8.f32, simd::blend_f32<3>(simd::load_f32(ctx.v8.f32), simd::permute_f32<78>(simd::load_f32(v20.f32))));
	// li r4,304
	ctx.r4.s64 = 304;
	// vrlimi128 v7,v18,3,2
	simd::store_f32(ctx.v7.f32, simd::blend_f32<3>(simd::load_f32(ctx.v7.f32), simd::permute_f32<78>(simd::load_f32(v18.f32))));
	// li r3,336
	ctx.r3.s64 = 336;
	// vrlimi128 v6,v15,3,2
	simd::store_f32(ctx.v6.f32, simd::blend_f32<3>(simd::load_f32(ctx.v6.f32), simd::permute_f32<78>(simd::load_f32(v15.f32))));
	// vrlimi128 v0,v62,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(v62.f32))));
	// stvx128 v10,r19,r9
	ea = (r19.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// vrlimi128 v13,v60,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(v60.f32))));
	// stvx128 v9,r19,r8
	ea = (r19.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v8,r19,r7
	ea = (r19.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v8), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v7,r19,r6
	ea = (r19.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v7), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v6,r19,r5
	ea = (r19.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v6), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r19,r4
	ea = (r19.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r19,r3
	ea = (r19.u32 + ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_8328A878) {
	__imp__sub_8328A878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r8,r1,-188
	ctx.r8.s64 = ctx.r1.s64 + -188;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// addi r7,r1,-184
	ctx.r7.s64 = ctx.r1.s64 + -184;
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-180
	ctx.r6.s64 = ctx.r1.s64 + -180;
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// addi r4,r1,-172
	ctx.r4.s64 = ctx.r1.s64 + -172;
	// stfs f0,-188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// addi r3,r1,-168
	ctx.r3.s64 = ctx.r1.s64 + -168;
	// stfs f0,-184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r11,r1,-164
	r11.s64 = ctx.r1.s64 + -164;
	// stfs f0,-180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// stfs f13,-176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// addi r31,r1,-156
	r31.s64 = ctx.r1.s64 + -156;
	// stfs f13,-172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// addi r30,r1,-152
	r30.s64 = ctx.r1.s64 + -152;
	// stfs f0,-168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r29,r1,-148
	r29.s64 = ctx.r1.s64 + -148;
	// stfs f0,-164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// addi r28,r1,-144
	r28.s64 = ctx.r1.s64 + -144;
	// stfs f0,-160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r27,r1,-140
	r27.s64 = ctx.r1.s64 + -140;
	// stfs f0,-156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// addi r26,r1,-136
	r26.s64 = ctx.r1.s64 + -136;
	// stfs f0,-152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// addi r25,r1,-132
	r25.s64 = ctx.r1.s64 + -132;
	// stfs f13,-148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r24,r1,-128
	r24.s64 = ctx.r1.s64 + -128;
	// stfs f0,-144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r23,r1,-124
	r23.s64 = ctx.r1.s64 + -124;
	// stfs f0,-140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// addi r22,r1,-120
	r22.s64 = ctx.r1.s64 + -120;
	// stfs f0,-136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// addi r21,r1,-116
	r21.s64 = ctx.r1.s64 + -116;
	// stfs f0,-132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lis r20,-31950
	r20.s64 = -2093875200;
	// stfs f0,-128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f13,-124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// addi r20,r20,-20896
	r20.s64 = r20.s64 + -20896;
	// stfs f0,-120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f13,-116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,-116
	ctx.r8.s64 = ctx.r1.s64 + -116;
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// lvlx v10,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v12,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v9,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v0,v13,v13
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v13.u8));
	// lvlx v8,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v12,v10,4,3
	simd::store_f32(ctx.v12.f32, simd::blend_f32<4>(simd::load_f32(ctx.v12.f32), simd::permute_f32<57>(simd::load_f32(ctx.v10.f32))));
	// lvlx v7,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v7,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v13,v11,v11
	simd::store_i8(ctx.v13.u8, simd::load_i8(ctx.v11.u8));
	// lvlx v6,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v8,v9,4,3
	simd::store_f32(ctx.v8.f32, simd::blend_f32<4>(simd::load_f32(ctx.v8.f32), simd::permute_f32<57>(simd::load_f32(ctx.v9.f32))));
	// lvlx v5,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v5,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v6,v7,4,3
	simd::store_f32(ctx.v6.f32, simd::blend_f32<4>(simd::load_f32(ctx.v6.f32), simd::permute_f32<57>(simd::load_f32(ctx.v7.f32))));
	// lvlx v4,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(ctx.v4,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v3,0,r28
	temp.u32 = r0.u32 + r28.u32;
	simd::store_shuffled(ctx.v3,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v4,v5,4,3
	simd::store_f32(ctx.v4.f32, simd::blend_f32<4>(simd::load_f32(ctx.v4.f32), simd::permute_f32<57>(simd::load_f32(ctx.v5.f32))));
	// lvlx v2,0,r27
	temp.u32 = r0.u32 + r27.u32;
	simd::store_shuffled(ctx.v2,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v11,v8,v8
	simd::store_i8(ctx.v11.u8, simd::load_i8(ctx.v8.u8));
	// vrlimi128 v2,v3,4,3
	simd::store_f32(ctx.v2.f32, simd::blend_f32<4>(simd::load_f32(ctx.v2.f32), simd::permute_f32<57>(simd::load_f32(ctx.v3.f32))));
	// lvlx v1,0,r26
	temp.u32 = r0.u32 + r26.u32;
	simd::store_shuffled(ctx.v1,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v31,0,r25
	temp.u32 = r0.u32 + r25.u32;
	simd::store_shuffled(v31,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v0,v6,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v6.f32))));
	// lvlx v30,0,r24
	temp.u32 = r0.u32 + r24.u32;
	simd::store_shuffled(v30,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v31,v1,4,3
	simd::store_f32(v31.f32, simd::blend_f32<4>(simd::load_f32(v31.f32), simd::permute_f32<57>(simd::load_f32(ctx.v1.f32))));
	// lvlx v29,0,r23
	temp.u32 = r0.u32 + r23.u32;
	simd::store_shuffled(v29,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v4,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(ctx.v4.f32))));
	// lvlx v28,0,r22
	temp.u32 = r0.u32 + r22.u32;
	simd::store_shuffled(v28,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v12,v2,3,2
	simd::store_f32(ctx.v12.f32, simd::blend_f32<3>(simd::load_f32(ctx.v12.f32), simd::permute_f32<78>(simd::load_f32(ctx.v2.f32))));
	// lvlx v10,0,r21
	temp.u32 = r0.u32 + r21.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r1,-124
	ctx.r6.s64 = ctx.r1.s64 + -124;
	// stfs f0,-124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// stfs f13,-128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// addi r7,r1,-120
	ctx.r7.s64 = ctx.r1.s64 + -120;
	// stfs f0,-116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// vrlimi128 v10,v28,4,3
	simd::store_f32(ctx.v10.f32, simd::blend_f32<4>(simd::load_f32(ctx.v10.f32), simd::permute_f32<57>(simd::load_f32(v28.f32))));
	// lvlx v27,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v27,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v29,v30,4,3
	simd::store_f32(v29.f32, simd::blend_f32<4>(simd::load_f32(v29.f32), simd::permute_f32<57>(simd::load_f32(v30.f32))));
	// lvlx v25,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v25,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r4,16
	ctx.r4.s64 = 16;
	// lvlx v9,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r3,48
	ctx.r3.s64 = 48;
	// lvlx v26,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v26,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v26,v27,4,3
	simd::store_f32(v26.f32, simd::blend_f32<4>(simd::load_f32(v26.f32), simd::permute_f32<57>(simd::load_f32(v27.f32))));
	// vrlimi128 v9,v25,4,3
	simd::store_f32(ctx.v9.f32, simd::blend_f32<4>(simd::load_f32(ctx.v9.f32), simd::permute_f32<57>(simd::load_f32(v25.f32))));
	// li r11,80
	r11.s64 = 80;
	// li r10,112
	ctx.r10.s64 = 112;
	// vrlimi128 v11,v31,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(v31.f32))));
	// li r9,144
	ctx.r9.s64 = 144;
	// vrlimi128 v10,v29,3,2
	simd::store_f32(ctx.v10.f32, simd::blend_f32<3>(simd::load_f32(ctx.v10.f32), simd::permute_f32<78>(simd::load_f32(v29.f32))));
	// li r8,176
	ctx.r8.s64 = 176;
	// stvx128 v0,r20,r4
	ea = (r20.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vrlimi128 v9,v26,3,2
	simd::store_f32(ctx.v9.f32, simd::blend_f32<3>(simd::load_f32(ctx.v9.f32), simd::permute_f32<78>(simd::load_f32(v26.f32))));
	// stvx128 v13,r20,r3
	ea = (r20.u32 + ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r20,r11
	ea = (r20.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v11,r20,r10
	ea = (r20.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v10,r20,r9
	ea = (r20.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v9,r20,r8
	ea = (r20.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c18
	return;
}

PPC_WEAK_FUNC(sub_8328AB98) {
	__imp__sub_8328AB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23100
	ctx.r3.s64 = ctx.r10.s64 + 23100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4624
	ctx.r3.s64 = ctx.r9.s64 + -4624;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AD60) {
	__imp__sub_8328AD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328ADA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23104
	ctx.r3.s64 = ctx.r10.s64 + 23104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4608
	ctx.r3.s64 = ctx.r9.s64 + -4608;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328ADA0) {
	__imp__sub_8328ADA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23108
	ctx.r3.s64 = ctx.r10.s64 + 23108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4592
	ctx.r3.s64 = ctx.r9.s64 + -4592;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328ADE0) {
	__imp__sub_8328ADE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23112
	ctx.r3.s64 = ctx.r10.s64 + 23112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4576
	ctx.r3.s64 = ctx.r9.s64 + -4576;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AE20) {
	__imp__sub_8328AE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23116
	ctx.r3.s64 = ctx.r10.s64 + 23116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4560
	ctx.r3.s64 = ctx.r9.s64 + -4560;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AE60) {
	__imp__sub_8328AE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23120
	ctx.r3.s64 = ctx.r10.s64 + 23120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4544
	ctx.r3.s64 = ctx.r9.s64 + -4544;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AEA0) {
	__imp__sub_8328AEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23124
	ctx.r3.s64 = ctx.r10.s64 + 23124;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4528
	ctx.r3.s64 = ctx.r9.s64 + -4528;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AEE0) {
	__imp__sub_8328AEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23128
	ctx.r3.s64 = ctx.r10.s64 + 23128;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4512
	ctx.r3.s64 = ctx.r9.s64 + -4512;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AF20) {
	__imp__sub_8328AF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23132
	ctx.r3.s64 = ctx.r10.s64 + 23132;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4496
	ctx.r3.s64 = ctx.r9.s64 + -4496;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AF60) {
	__imp__sub_8328AF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23136
	ctx.r3.s64 = ctx.r10.s64 + 23136;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4480
	ctx.r3.s64 = ctx.r9.s64 + -4480;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AFA0) {
	__imp__sub_8328AFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328AFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23140
	ctx.r3.s64 = ctx.r10.s64 + 23140;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4464
	ctx.r3.s64 = ctx.r9.s64 + -4464;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328AFE0) {
	__imp__sub_8328AFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23144
	ctx.r3.s64 = ctx.r10.s64 + 23144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4448
	ctx.r3.s64 = ctx.r9.s64 + -4448;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B020) {
	__imp__sub_8328B020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23148
	ctx.r3.s64 = ctx.r10.s64 + 23148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4432
	ctx.r3.s64 = ctx.r9.s64 + -4432;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B060) {
	__imp__sub_8328B060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23152
	ctx.r3.s64 = ctx.r10.s64 + 23152;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4416
	ctx.r3.s64 = ctx.r9.s64 + -4416;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B0A0) {
	__imp__sub_8328B0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lfs f13,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,23168
	ctx.r4.s64 = ctx.r5.s64 + 23168;
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lfs f0,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B0E0) {
	__imp__sub_8328B0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23184
	ctx.r3.s64 = ctx.r10.s64 + 23184;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4400
	ctx.r3.s64 = ctx.r9.s64 + -4400;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B148) {
	__imp__sub_8328B148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23188
	ctx.r3.s64 = ctx.r10.s64 + 23188;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4384
	ctx.r3.s64 = ctx.r9.s64 + -4384;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B188) {
	__imp__sub_8328B188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,23192
	r11.s64 = r11.s64 + 23192;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4368
	ctx.r3.s64 = ctx.r9.s64 + -4368;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328B1C8) {
	__imp__sub_8328B1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23212
	ctx.r3.s64 = ctx.r10.s64 + 23212;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4344
	ctx.r3.s64 = ctx.r9.s64 + -4344;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B1F0) {
	__imp__sub_8328B1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23216
	ctx.r3.s64 = ctx.r10.s64 + 23216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4328
	ctx.r3.s64 = ctx.r9.s64 + -4328;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B230) {
	__imp__sub_8328B230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r7,r1,-88
	ctx.r7.s64 = ctx.r1.s64 + -88;
	// addi r9,r11,-27468
	ctx.r9.s64 = r11.s64 + -27468;
	// addi r6,r1,-84
	ctx.r6.s64 = ctx.r1.s64 + -84;
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lfs f13,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// stfs f13,-84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// addi r30,r1,-64
	r30.s64 = ctx.r1.s64 + -64;
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r29,r1,-60
	r29.s64 = ctx.r1.s64 + -60;
	// stfs f0,-88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// lvlx v13,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r1,-60
	ctx.r6.s64 = ctx.r1.s64 + -60;
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// addi r9,r1,-72
	ctx.r9.s64 = ctx.r1.s64 + -72;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r31,r1,-68
	r31.s64 = ctx.r1.s64 + -68;
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r4,r1,-76
	ctx.r4.s64 = ctx.r1.s64 + -76;
	// stfs f0,-60(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// addi r3,r1,-76
	ctx.r3.s64 = ctx.r1.s64 + -76;
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// lvlx v4,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v4,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvlx v3,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(ctx.v3,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r28,32
	r28.s64 = 32;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// li r27,48
	r27.s64 = 48;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vrlimi128 v12,v0,4,3
	simd::store_f32(ctx.v12.f32, simd::blend_f32<4>(simd::load_f32(ctx.v12.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v10,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v13,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v13.f32))));
	// lvlx v31,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v31,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v3,v4,4,3
	simd::store_f32(ctx.v3.f32, simd::blend_f32<4>(simd::load_f32(ctx.v3.f32), simd::permute_f32<57>(simd::load_f32(ctx.v4.f32))));
	// lvlx v30,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v30,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// stfs f0,-72(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f13,-68(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// addi r5,r5,23232
	ctx.r5.s64 = ctx.r5.s64 + 23232;
	// stfs f0,-96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// vrlimi128 v12,v3,3,2
	simd::store_f32(ctx.v12.f32, simd::blend_f32<3>(simd::load_f32(ctx.v12.f32), simd::permute_f32<78>(simd::load_f32(ctx.v3.f32))));
	// stfs f0,-92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lvlx v6,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v5,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(ctx.v5,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v2,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v2,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v1,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v1,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-76(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvlx v9,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,-76(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vrlimi128 v30,v31,4,3
	simd::store_f32(v30.f32, simd::blend_f32<4>(simd::load_f32(v30.f32), simd::permute_f32<57>(simd::load_f32(v31.f32))));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// vrlimi128 v9,v10,4,3
	simd::store_f32(ctx.v9.f32, simd::blend_f32<4>(simd::load_f32(ctx.v9.f32), simd::permute_f32<57>(simd::load_f32(ctx.v10.f32))));
	// lvlx v8,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v7,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v7,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v7,v8,4,3
	simd::store_f32(ctx.v7.f32, simd::blend_f32<4>(simd::load_f32(ctx.v7.f32), simd::permute_f32<57>(simd::load_f32(ctx.v8.f32))));
	// vor v13,v30,v30
	simd::store_i8(ctx.v13.u8, simd::load_i8(v30.u8));
	// stvx128 v12,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// vor v0,v9,v9
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v9.u8));
	// vrlimi128 v5,v6,4,3
	simd::store_f32(ctx.v5.f32, simd::blend_f32<4>(simd::load_f32(ctx.v5.f32), simd::permute_f32<57>(simd::load_f32(ctx.v6.f32))));
	// vrlimi128 v1,v2,4,3
	simd::store_f32(ctx.v1.f32, simd::blend_f32<4>(simd::load_f32(ctx.v1.f32), simd::permute_f32<57>(simd::load_f32(ctx.v2.f32))));
	// vrlimi128 v0,v7,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v7.f32))));
	// vrlimi128 v13,v5,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(ctx.v5.f32))));
	// vrlimi128 v11,v1,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(ctx.v1.f32))));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v11,r5,r27
	ea = (ctx.r5.u32 + r27.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_8328B270) {
	__imp__sub_8328B270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B3A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b38158
	sub_82B38158(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328B3A8) {
	__imp__sub_8328B3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23300(r11)
	PPC_STORE_U32(r11.u32 + 23300, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B3B0) {
	__imp__sub_8328B3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23304(r11)
	PPC_STORE_U32(r11.u32 + 23304, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B3C0) {
	__imp__sub_8328B3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23308(r11)
	PPC_STORE_U32(r11.u32 + 23308, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B3D0) {
	__imp__sub_8328B3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23312(r11)
	PPC_STORE_U32(r11.u32 + 23312, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B3E0) {
	__imp__sub_8328B3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23316(r11)
	PPC_STORE_U32(r11.u32 + 23316, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B3F0) {
	__imp__sub_8328B3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23320(r11)
	PPC_STORE_U32(r11.u32 + 23320, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B400) {
	__imp__sub_8328B400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23324(r11)
	PPC_STORE_U32(r11.u32 + 23324, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B410) {
	__imp__sub_8328B410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23328(r11)
	PPC_STORE_U32(r11.u32 + 23328, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B420) {
	__imp__sub_8328B420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-4312
	ctx.r3.s64 = r11.s64 + -4312;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328B430) {
	__imp__sub_8328B430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23340
	ctx.r3.s64 = r11.s64 + 23340;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-4296
	ctx.r3.s64 = ctx.r10.s64 + -4296;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B440) {
	__imp__sub_8328B440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,1
	r11.s64 = 1;
	// addi r7,r8,23368
	ctx.r7.s64 = ctx.r8.s64 + 23368;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,23368(r8)
	PPC_STORE_U8(ctx.r8.u32 + 23368, r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r10.u8);
	// stb r9,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r9.u8);
	// stb r8,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r8.u8);
	// stb r11,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B478) {
	__imp__sub_8328B478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23376
	ctx.r3.s64 = r11.s64 + 23376;
	// bl 0x82a12b08
	sub_82A12B08(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-4288
	ctx.r3.s64 = ctx.r10.s64 + -4288;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B4A8) {
	__imp__sub_8328B4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23388
	ctx.r3.s64 = r11.s64 + 23388;
	// bl 0x82a12b08
	sub_82A12B08(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-4272
	ctx.r3.s64 = ctx.r10.s64 + -4272;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B4E0) {
	__imp__sub_8328B4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,2804
	ctx.r4.s64 = r11.s64 + 2804;
	// addi r3,r10,23400
	ctx.r3.s64 = ctx.r10.s64 + 23400;
	// bl 0x822d6b40
	sub_822D6B40(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4256
	ctx.r3.s64 = ctx.r9.s64 + -4256;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B518) {
	__imp__sub_8328B518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,23404
	ctx.r3.s64 = ctx.r10.s64 + 23404;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-4240
	ctx.r3.s64 = ctx.r9.s64 + -4240;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B558) {
	__imp__sub_8328B558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_8328B5A0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8328b5a0
	if (!cr0.eq) goto loc_8328B5A0;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-4224
	ctx.r3.s64 = ctx.r7.s64 + -4224;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328B598) {
	__imp__sub_8328B598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b5ec
	if (cr6.eq) goto loc_8328B5EC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8328B5EC:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b5f8
	if (cr0.eq) goto loc_8328B5F8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B5F8:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b604
	if (cr0.eq) goto loc_8328B604;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B604:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,23412
	ctx.r8.s64 = ctx.r9.s64 + 23412;
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, r11.u8);
	// addi r3,r7,-4208
	ctx.r3.s64 = ctx.r7.s64 + -4208;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B5C8) {
	__imp__sub_8328B5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23432(r11)
	PPC_STORE_U32(r11.u32 + 23432, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B658) {
	__imp__sub_8328B658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r8,23448
	ctx.r6.s64 = ctx.r8.s64 + 23448;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,23448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23448, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, r11.u32);
	// stw r7,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r7.u32);
	// stw r10,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r10.u32);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stw r8,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r8.u32);
	// stw r11,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, r11.u32);
	// stw r7,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r7.u32);
	// stw r10,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r10.u32);
	// stw r9,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r9.u32);
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// stw r11,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, r11.u32);
	// stw r7,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r7.u32);
	// stw r10,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r10.u32);
	// stw r9,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r9.u32);
	// stw r8,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r8.u32);
	// stw r11,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, r11.u32);
	// stw r7,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r7.u32);
	// stw r10,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r10.u32);
	// stw r9,108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 108, ctx.r9.u32);
	// stw r8,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r8.u32);
	// stw r11,116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 116, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B668) {
	__imp__sub_8328B668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b724
	if (cr6.eq) goto loc_8328B724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8328B724:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b730
	if (cr0.eq) goto loc_8328B730;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B730:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b73c
	if (cr0.eq) goto loc_8328B73C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B73C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,23436
	ctx.r8.s64 = ctx.r9.s64 + 23436;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r3,r7,-4080
	ctx.r3.s64 = ctx.r7.s64 + -4080;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B700) {
	__imp__sub_8328B700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23568
	ctx.r3.s64 = r11.s64 + 23568;
	// bl 0x823b0a18
	sub_823B0A18(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-4064
	ctx.r3.s64 = ctx.r10.s64 + -4064;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B790) {
	__imp__sub_8328B790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23580
	ctx.r3.s64 = r11.s64 + 23580;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-4048
	ctx.r3.s64 = ctx.r10.s64 + -4048;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B7C8) {
	__imp__sub_8328B7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b824
	if (cr6.eq) goto loc_8328B824;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8328B824:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b830
	if (cr0.eq) goto loc_8328B830;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B830:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b83c
	if (cr0.eq) goto loc_8328B83C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B83C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,23608
	ctx.r8.s64 = ctx.r9.s64 + 23608;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r3,r7,-4040
	ctx.r3.s64 = ctx.r7.s64 + -4040;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B800) {
	__imp__sub_8328B800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b8b4
	if (cr6.eq) goto loc_8328B8B4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8328B8B4:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b8c0
	if (cr0.eq) goto loc_8328B8C0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B8C0:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b8cc
	if (cr0.eq) goto loc_8328B8CC;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B8CC:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,23620
	ctx.r8.s64 = ctx.r9.s64 + 23620;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r3,r7,-4024
	ctx.r3.s64 = ctx.r7.s64 + -4024;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B890) {
	__imp__sub_8328B890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20680
	ctx.r9.s64 = r11.s64 + -20680;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// addi r3,r8,-4008
	ctx.r3.s64 = ctx.r8.s64 + -4008;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328B920) {
	__imp__sub_8328B920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b964
	if (cr6.eq) goto loc_8328B964;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8328B964:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b970
	if (cr0.eq) goto loc_8328B970;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B970:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328b97c
	if (cr0.eq) goto loc_8328B97C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328B97C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,23632
	ctx.r8.s64 = ctx.r9.s64 + 23632;
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r11.u8);
	// addi r3,r7,-3992
	ctx.r3.s64 = ctx.r7.s64 + -3992;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328B940) {
	__imp__sub_8328B940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_8328B9D8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8328b9d8
	if (!cr0.eq) goto loc_8328B9D8;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-3976
	ctx.r3.s64 = ctx.r7.s64 + -3976;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328B9D0) {
	__imp__sub_8328B9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3960
	ctx.r3.s64 = r11.s64 + -3960;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BA00) {
	__imp__sub_8328BA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3864
	ctx.r3.s64 = r11.s64 + -3864;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BA10) {
	__imp__sub_8328BA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3768
	ctx.r3.s64 = r11.s64 + -3768;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BA20) {
	__imp__sub_8328BA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3672
	ctx.r3.s64 = r11.s64 + -3672;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BA30) {
	__imp__sub_8328BA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23660
	ctx.r3.s64 = r11.s64 + 23660;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3656
	ctx.r3.s64 = ctx.r10.s64 + -3656;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BA40) {
	__imp__sub_8328BA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3648
	ctx.r3.s64 = r11.s64 + -3648;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BA78) {
	__imp__sub_8328BA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23688
	ctx.r3.s64 = r11.s64 + 23688;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3632
	ctx.r3.s64 = ctx.r10.s64 + -3632;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BA88) {
	__imp__sub_8328BA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23700
	ctx.r3.s64 = r11.s64 + 23700;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3616
	ctx.r3.s64 = ctx.r10.s64 + -3616;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BAC0) {
	__imp__sub_8328BAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23712
	ctx.r3.s64 = r11.s64 + 23712;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3600
	ctx.r3.s64 = ctx.r10.s64 + -3600;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BAF8) {
	__imp__sub_8328BAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23724
	ctx.r3.s64 = r11.s64 + 23724;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3584
	ctx.r3.s64 = ctx.r10.s64 + -3584;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BB30) {
	__imp__sub_8328BB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-20584
	r31.s64 = r11.s64 + -20584;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328bb9c
	if (cr6.eq) goto loc_8328BB9C;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_8328BB9C:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328bba8
	if (cr0.eq) goto loc_8328BBA8;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_8328BBA8:
	// li r11,0
	r11.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r3,r10,-3568
	ctx.r3.s64 = ctx.r10.s64 + -3568;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BB68) {
	__imp__sub_8328BB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r8,23736
	ctx.r7.s64 = ctx.r8.s64 + 23736;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,23736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23736, r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BBD8) {
	__imp__sub_8328BBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r8,23752
	ctx.r7.s64 = ctx.r8.s64 + 23752;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,23752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23752, r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BC00) {
	__imp__sub_8328BC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23776
	ctx.r3.s64 = r11.s64 + 23776;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3480
	ctx.r3.s64 = ctx.r10.s64 + -3480;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BC28) {
	__imp__sub_8328BC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23808
	ctx.r3.s64 = r11.s64 + 23808;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3472
	ctx.r3.s64 = ctx.r10.s64 + -3472;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BC60) {
	__imp__sub_8328BC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r8,r10,7120
	ctx.r8.s64 = ctx.r10.s64 + 7120;
	// li r11,0
	r11.s64 = 0;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r11,28488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28488, r11.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// std r11,7120(r10)
	PPC_STORE_U64(ctx.r10.u32 + 7120, r11.u64);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, r11.u64);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// std r11,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, r11.u64);
	// lis r4,-31957
	ctx.r4.s64 = -2094333952;
	// std r11,32(r8)
	PPC_STORE_U64(ctx.r8.u32 + 32, r11.u64);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r11.u32);
	// addi r3,r4,-3464
	ctx.r3.s64 = ctx.r4.s64 + -3464;
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r11.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, r11.u32);
	// stw r10,28484(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28484, ctx.r10.u32);
	// std r9,7176(r6)
	PPC_STORE_U64(ctx.r6.u32 + 7176, ctx.r9.u64);
	// std r11,7168(r5)
	PPC_STORE_U64(ctx.r5.u32 + 7168, r11.u64);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BC98) {
	__imp__sub_8328BC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23856
	ctx.r3.s64 = r11.s64 + 23856;
	// bl 0x823d2790
	sub_823D2790(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3456
	ctx.r3.s64 = ctx.r10.s64 + -3456;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BCF8) {
	__imp__sub_8328BCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23868
	ctx.r3.s64 = r11.s64 + 23868;
	// bl 0x823d2790
	sub_823D2790(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3440
	ctx.r3.s64 = ctx.r10.s64 + -3440;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BD30) {
	__imp__sub_8328BD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328bd8c
	if (cr6.eq) goto loc_8328BD8C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8328BD8C:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328bd98
	if (cr0.eq) goto loc_8328BD98;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328BD98:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328bda4
	if (cr0.eq) goto loc_8328BDA4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328BDA4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,23880
	ctx.r8.s64 = ctx.r9.s64 + 23880;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// addi r3,r7,-3424
	ctx.r3.s64 = ctx.r7.s64 + -3424;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BD68) {
	__imp__sub_8328BD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,23900
	ctx.r3.s64 = r11.s64 + 23900;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-3408
	ctx.r3.s64 = ctx.r10.s64 + -3408;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BDF8) {
	__imp__sub_8328BDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r10,23928
	ctx.r6.s64 = ctx.r10.s64 + 23928;
	// addi r7,r11,7532
	ctx.r7.s64 = r11.s64 + 7532;
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,23928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23928, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// addi r3,r5,-3400
	ctx.r3.s64 = ctx.r5.s64 + -3400;
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, r11.u32);
	// stw r8,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// stw r7,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r7.u32);
	// stw r9,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r9.u32);
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, r11.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BE30) {
	__imp__sub_8328BE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3312
	ctx.r3.s64 = r11.s64 + -3312;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BE98) {
	__imp__sub_8328BE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,7
	r30.s64 = 7;
	// addi r11,r11,23992
	r11.s64 = r11.s64 + 23992;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,56
	r31.s64 = r11.s64 + 56;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r28,r11,7532
	r28.s64 = r11.s64 + 7532;
loc_8328BED0:
	// lis r11,-32091
	r11.s64 = -2103115776;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-22256
	ctx.r6.s64 = r11.s64 + -22256;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,-56
	ctx.r3.s64 = r31.s64 + -56;
	// bl 0x8221fc28
	sub_8221FC28(ctx, base);
	// stw r28,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r28.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r29.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r31,r31,76
	r31.s64 = r31.s64 + 76;
	// bge 0x8328bed0
	if (!cr0.lt) goto loc_8328BED0;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3224
	ctx.r3.s64 = r11.s64 + -3224;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8328BEA8) {
	__imp__sub_8328BEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3144
	ctx.r3.s64 = r11.s64 + -3144;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BF18) {
	__imp__sub_8328BF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-3048
	ctx.r3.s64 = r11.s64 + -3048;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BF28) {
	__imp__sub_8328BF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2960
	ctx.r3.s64 = r11.s64 + -2960;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BF38) {
	__imp__sub_8328BF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2872
	ctx.r3.s64 = r11.s64 + -2872;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328BF48) {
	__imp__sub_8328BF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328bf7c
	if (cr6.eq) goto loc_8328BF7C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8328BF7C:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328bf88
	if (cr0.eq) goto loc_8328BF88;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328BF88:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328bf94
	if (cr0.eq) goto loc_8328BF94;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328BF94:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,24604
	ctx.r8.s64 = ctx.r9.s64 + 24604;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r3,r7,-2856
	ctx.r3.s64 = ctx.r7.s64 + -2856;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BF58) {
	__imp__sub_8328BF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328BFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,24616
	ctx.r3.s64 = r11.s64 + 24616;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-2840
	ctx.r3.s64 = ctx.r10.s64 + -2840;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328BFE8) {
	__imp__sub_8328BFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,24644
	r31.s64 = r11.s64 + 24644;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// addi r3,r10,-2832
	ctx.r3.s64 = ctx.r10.s64 + -2832;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C020) {
	__imp__sub_8328C020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	r11.s64 = -2092236800;
	// addi r3,r11,8320
	ctx.r3.s64 = r11.s64 + 8320;
	// bl 0x82a12b08
	sub_82A12B08(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-2816
	ctx.r3.s64 = ctx.r10.s64 + -2816;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C078) {
	__imp__sub_8328C078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// li r11,1
	r11.s64 = 1;
	// addi r7,r10,-32624
	ctx.r7.s64 = ctx.r10.s64 + -32624;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8192(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8192, r11.u32);
	// stw r10,8196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8196, ctx.r10.u32);
	// stw r9,16392(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16392, ctx.r9.u32);
	// stw r8,16396(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16396, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C0B0) {
	__imp__sub_8328C0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-16224
	ctx.r3.s64 = r11.s64 + -16224;
	// b 0x82b74cc8
	sub_82B74CC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C0E0) {
	__imp__sub_8328C0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2800
	ctx.r3.s64 = r11.s64 + -2800;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C0F0) {
	__imp__sub_8328C0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-9320
	ctx.r3.s64 = r11.s64 + -9320;
	// bl 0x8246c600
	sub_8246C600(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-2784
	ctx.r3.s64 = ctx.r10.s64 + -2784;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C100) {
	__imp__sub_8328C100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-9308
	ctx.r3.s64 = r11.s64 + -9308;
	// bl 0x8246c600
	sub_8246C600(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-2768
	ctx.r3.s64 = ctx.r10.s64 + -2768;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C138) {
	__imp__sub_8328C138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2752
	ctx.r3.s64 = r11.s64 + -2752;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C170) {
	__imp__sub_8328C170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2736
	ctx.r3.s64 = r11.s64 + -2736;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C180) {
	__imp__sub_8328C180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_8328C198:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8328c198
	if (!cr0.eq) goto loc_8328C198;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-2648
	ctx.r3.s64 = ctx.r7.s64 + -2648;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C190) {
	__imp__sub_8328C190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2632
	ctx.r3.s64 = r11.s64 + -2632;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C1C0) {
	__imp__sub_8328C1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2544
	ctx.r3.s64 = r11.s64 + -2544;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C1D0) {
	__imp__sub_8328C1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2480
	ctx.r3.s64 = r11.s64 + -2480;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C1E0) {
	__imp__sub_8328C1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2392
	ctx.r3.s64 = r11.s64 + -2392;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C1F0) {
	__imp__sub_8328C1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2304
	ctx.r3.s64 = r11.s64 + -2304;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C200) {
	__imp__sub_8328C200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2216
	ctx.r3.s64 = r11.s64 + -2216;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C210) {
	__imp__sub_8328C210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-23816
	ctx.r4.s64 = r11.s64 + -23816;
	// addi r3,r10,-9180
	ctx.r3.s64 = ctx.r10.s64 + -9180;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-2128
	ctx.r3.s64 = ctx.r9.s64 + -2128;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C220) {
	__imp__sub_8328C220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r11,-9176
	r11.s64 = r11.s64 + -9176;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8328C270:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bge 0x8328c270
	if (!cr0.lt) goto loc_8328C270;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-2112
	ctx.r3.s64 = r11.s64 + -2112;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C260) {
	__imp__sub_8328C260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-23708
	ctx.r4.s64 = r11.s64 + -23708;
	// addi r3,r10,-8976
	ctx.r3.s64 = ctx.r10.s64 + -8976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-2024
	ctx.r3.s64 = ctx.r9.s64 + -2024;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C2A0) {
	__imp__sub_8328C2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	r11.s64 = -2092171264;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r31,r11,-8968
	r31.s64 = r11.s64 + -8968;
	// addi r4,r10,-22848
	ctx.r4.s64 = ctx.r10.s64 + -22848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r10,720
	ctx.r10.s64 = 720;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r30,0
	r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// li r11,1280
	r11.s64 = 1280;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// li r10,1280
	ctx.r10.s64 = 1280;
	// li r9,720
	ctx.r9.s64 = 720;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r4,r8,-22908
	ctx.r4.s64 = ctx.r8.s64 + -22908;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1024
	r11.s64 = 1024;
	// li r10,576
	ctx.r10.s64 = 576;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r9,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r9,576
	ctx.r9.s64 = 576;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// stb r11,212(r31)
	PPC_STORE_U8(r31.u32 + 212, r11.u8);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r9,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// addi r4,r7,-22976
	ctx.r4.s64 = ctx.r7.s64 + -22976;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1280
	r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// li r10,1280
	ctx.r10.s64 = 1280;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// li r11,512
	r11.s64 = 512;
	// stw r10,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r10.u32);
	// stw r9,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,512
	ctx.r9.s64 = 512;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// li r11,1280
	r11.s64 = 1280;
	// stw r10,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r9.u32);
	// li r10,720
	ctx.r10.s64 = 720;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stb r9,320(r31)
	PPC_STORE_U8(r31.u32 + 320, ctx.r9.u8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-23036
	ctx.r4.s64 = ctx.r6.s64 + -23036;
	// addi r3,r31,324
	ctx.r3.s64 = r31.s64 + 324;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1280
	r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r11,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,1
	r11.s64 = 1;
	// stw r10,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r10.u32);
	// stw r9,336(r31)
	PPC_STORE_U32(r31.u32 + 336, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r9.u32);
	// li r10,640
	ctx.r10.s64 = 640;
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
	// li r9,720
	ctx.r9.s64 = 720;
	// li r11,640
	r11.s64 = 640;
	// stw r10,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// stw r9,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r11.u32);
	// li r9,1280
	ctx.r9.s64 = 1280;
	// li r11,720
	r11.s64 = 720;
	// stw r10,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// stb r10,428(r31)
	PPC_STORE_U8(r31.u32 + 428, ctx.r10.u8);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// stw r9,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r9.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r11.u32);
	// addi r4,r4,-23104
	ctx.r4.s64 = ctx.r4.s64 + -23104;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1280
	r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r11,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,1
	r11.s64 = 1;
	// stw r10,440(r31)
	PPC_STORE_U32(r31.u32 + 440, ctx.r10.u32);
	// stw r9,444(r31)
	PPC_STORE_U32(r31.u32 + 444, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,452(r31)
	PPC_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// stw r9,456(r31)
	PPC_STORE_U32(r31.u32 + 456, ctx.r9.u32);
	// li r10,640
	ctx.r10.s64 = 640;
	// stw r11,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r11.u32);
	// li r9,720
	ctx.r9.s64 = 720;
	// li r11,640
	r11.s64 = 640;
	// stw r10,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r11.u32);
	// li r9,1280
	ctx.r9.s64 = 1280;
	// li r11,720
	r11.s64 = 720;
	// stw r10,476(r31)
	PPC_STORE_U32(r31.u32 + 476, ctx.r10.u32);
	// stw r9,480(r31)
	PPC_STORE_U32(r31.u32 + 480, ctx.r9.u32);
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// stw r11,484(r31)
	PPC_STORE_U32(r31.u32 + 484, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stb r10,536(r31)
	PPC_STORE_U8(r31.u32 + 536, ctx.r10.u8);
	// addi r4,r3,-23176
	ctx.r4.s64 = ctx.r3.s64 + -23176;
	// addi r3,r31,540
	ctx.r3.s64 = r31.s64 + 540;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1280
	r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r10,548(r31)
	PPC_STORE_U32(r31.u32 + 548, ctx.r10.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(r31.u32 + 552, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,556(r31)
	PPC_STORE_U32(r31.u32 + 556, r11.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(r31.u32 + 560, ctx.r10.u32);
	// li r10,1280
	ctx.r10.s64 = 1280;
	// stw r9,564(r31)
	PPC_STORE_U32(r31.u32 + 564, ctx.r9.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r10,572(r31)
	PPC_STORE_U32(r31.u32 + 572, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,576(r31)
	PPC_STORE_U32(r31.u32 + 576, ctx.r9.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,1280
	ctx.r9.s64 = 1280;
	// stw r11,568(r31)
	PPC_STORE_U32(r31.u32 + 568, r11.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(r31.u32 + 580, r11.u32);
	// li r11,512
	r11.s64 = 512;
	// stw r10,584(r31)
	PPC_STORE_U32(r31.u32 + 584, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,588(r31)
	PPC_STORE_U32(r31.u32 + 588, ctx.r9.u32);
	// li r9,512
	ctx.r9.s64 = 512;
	// stw r11,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r11.u32);
	// li r11,1280
	r11.s64 = 1280;
	// stw r10,596(r31)
	PPC_STORE_U32(r31.u32 + 596, ctx.r10.u32);
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r9,600(r31)
	PPC_STORE_U32(r31.u32 + 600, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r11.u32);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stw r10,608(r31)
	PPC_STORE_U32(r31.u32 + 608, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stb r9,644(r31)
	PPC_STORE_U8(r31.u32 + 644, ctx.r9.u8);
	// addi r4,r11,-23236
	ctx.r4.s64 = r11.s64 + -23236;
	// addi r3,r31,648
	ctx.r3.s64 = r31.s64 + 648;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1280
	r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r11,652(r31)
	PPC_STORE_U32(r31.u32 + 652, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r10,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,668(r31)
	PPC_STORE_U32(r31.u32 + 668, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,676(r31)
	PPC_STORE_U32(r31.u32 + 676, r11.u32);
	// li r10,320
	ctx.r10.s64 = 320;
	// li r11,320
	r11.s64 = 320;
	// stw r9,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r9.u32);
	// stw r10,680(r31)
	PPC_STORE_U32(r31.u32 + 680, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,688(r31)
	PPC_STORE_U32(r31.u32 + 688, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,720
	r11.s64 = 720;
	// stw r9,672(r31)
	PPC_STORE_U32(r31.u32 + 672, ctx.r9.u32);
	// stw r10,692(r31)
	PPC_STORE_U32(r31.u32 + 692, ctx.r10.u32);
	// li r9,720
	ctx.r9.s64 = 720;
	// stw r11,700(r31)
	PPC_STORE_U32(r31.u32 + 700, r11.u32);
	// li r10,640
	ctx.r10.s64 = 640;
	// li r11,960
	r11.s64 = 960;
	// stw r9,684(r31)
	PPC_STORE_U32(r31.u32 + 684, ctx.r9.u32);
	// stw r10,704(r31)
	PPC_STORE_U32(r31.u32 + 704, ctx.r10.u32);
	// li r9,640
	ctx.r9.s64 = 640;
	// stw r11,712(r31)
	PPC_STORE_U32(r31.u32 + 712, r11.u32);
	// li r10,960
	ctx.r10.s64 = 960;
	// li r11,720
	r11.s64 = 720;
	// stw r9,696(r31)
	PPC_STORE_U32(r31.u32 + 696, ctx.r9.u32);
	// stw r10,720(r31)
	PPC_STORE_U32(r31.u32 + 720, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r11.u32);
	// li r11,1280
	r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r9,708(r31)
	PPC_STORE_U32(r31.u32 + 708, ctx.r9.u32);
	// stw r9,724(r31)
	PPC_STORE_U32(r31.u32 + 724, ctx.r9.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,732(r31)
	PPC_STORE_U32(r31.u32 + 732, ctx.r10.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r11,728(r31)
	PPC_STORE_U32(r31.u32 + 728, r11.u32);
	// addi r3,r31,756
	ctx.r3.s64 = r31.s64 + 756;
	// stb r9,752(r31)
	PPC_STORE_U8(r31.u32 + 752, ctx.r9.u8);
	// addi r4,r10,-23304
	ctx.r4.s64 = ctx.r10.s64 + -23304;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1280
	r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r11,760(r31)
	PPC_STORE_U32(r31.u32 + 760, r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,764(r31)
	PPC_STORE_U32(r31.u32 + 764, ctx.r10.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r9,768(r31)
	PPC_STORE_U32(r31.u32 + 768, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,772(r31)
	PPC_STORE_U32(r31.u32 + 772, r11.u32);
	// stw r9,780(r31)
	PPC_STORE_U32(r31.u32 + 780, ctx.r9.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,776(r31)
	PPC_STORE_U32(r31.u32 + 776, ctx.r10.u32);
	// li r9,720
	ctx.r9.s64 = 720;
	// li r10,320
	ctx.r10.s64 = 320;
	// stw r11,784(r31)
	PPC_STORE_U32(r31.u32 + 784, r11.u32);
	// stw r9,792(r31)
	PPC_STORE_U32(r31.u32 + 792, ctx.r9.u32);
	// li r11,320
	r11.s64 = 320;
	// stw r10,788(r31)
	PPC_STORE_U32(r31.u32 + 788, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,640
	ctx.r9.s64 = 640;
	// stw r11,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r11.u32);
	// stw r10,800(r31)
	PPC_STORE_U32(r31.u32 + 800, ctx.r10.u32);
	// li r11,720
	r11.s64 = 720;
	// stw r9,804(r31)
	PPC_STORE_U32(r31.u32 + 804, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,640
	ctx.r10.s64 = 640;
	// stw r11,808(r31)
	PPC_STORE_U32(r31.u32 + 808, r11.u32);
	// stw r9,816(r31)
	PPC_STORE_U32(r31.u32 + 816, ctx.r9.u32);
	// li r11,960
	r11.s64 = 960;
	// stw r10,812(r31)
	PPC_STORE_U32(r31.u32 + 812, ctx.r10.u32);
	// li r10,720
	ctx.r10.s64 = 720;
	// li r9,960
	ctx.r9.s64 = 960;
	// stw r11,820(r31)
	PPC_STORE_U32(r31.u32 + 820, r11.u32);
	// stw r10,824(r31)
	PPC_STORE_U32(r31.u32 + 824, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,828(r31)
	PPC_STORE_U32(r31.u32 + 828, ctx.r9.u32);
	// li r10,1280
	ctx.r10.s64 = 1280;
	// li r9,720
	ctx.r9.s64 = 720;
	// stw r11,832(r31)
	PPC_STORE_U32(r31.u32 + 832, r11.u32);
	// stb r11,860(r31)
	PPC_STORE_U8(r31.u32 + 860, r11.u8);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r10,836(r31)
	PPC_STORE_U32(r31.u32 + 836, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r9,840(r31)
	PPC_STORE_U32(r31.u32 + 840, ctx.r9.u32);
	// addi r4,r8,-23368
	ctx.r4.s64 = ctx.r8.s64 + -23368;
	// addi r3,r31,864
	ctx.r3.s64 = r31.s64 + 864;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1280
	r11.s64 = 1280;
	// li r9,58
	ctx.r9.s64 = 58;
	// stw r11,868(r31)
	PPC_STORE_U32(r31.u32 + 868, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r9,876(r31)
	PPC_STORE_U32(r31.u32 + 876, ctx.r9.u32);
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r11,880(r31)
	PPC_STORE_U32(r31.u32 + 880, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,1280
	ctx.r9.s64 = 1280;
	// stw r10,872(r31)
	PPC_STORE_U32(r31.u32 + 872, ctx.r10.u32);
	// stw r11,888(r31)
	PPC_STORE_U32(r31.u32 + 888, r11.u32);
	// li r11,144
	r11.s64 = 144;
	// stw r9,896(r31)
	PPC_STORE_U32(r31.u32 + 896, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,900(r31)
	PPC_STORE_U32(r31.u32 + 900, r11.u32);
	// li r9,144
	ctx.r9.s64 = 144;
	// li r11,1280
	r11.s64 = 1280;
	// stw r10,884(r31)
	PPC_STORE_U32(r31.u32 + 884, ctx.r10.u32);
	// stw r9,908(r31)
	PPC_STORE_U32(r31.u32 + 908, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,912(r31)
	PPC_STORE_U32(r31.u32 + 912, r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r11,288
	r11.s64 = 288;
	// stw r10,892(r31)
	PPC_STORE_U32(r31.u32 + 892, ctx.r10.u32);
	// stw r10,904(r31)
	PPC_STORE_U32(r31.u32 + 904, ctx.r10.u32);
	// li r10,288
	ctx.r10.s64 = 288;
	// stw r9,920(r31)
	PPC_STORE_U32(r31.u32 + 920, ctx.r9.u32);
	// li r9,432
	ctx.r9.s64 = 432;
	// stw r11,924(r31)
	PPC_STORE_U32(r31.u32 + 924, r11.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,916(r31)
	PPC_STORE_U32(r31.u32 + 916, ctx.r10.u32);
	// stw r9,932(r31)
	PPC_STORE_U32(r31.u32 + 932, ctx.r9.u32);
	// addi r4,r5,28344
	ctx.r4.s64 = ctx.r5.s64 + 28344;
	// li r10,1280
	ctx.r10.s64 = 1280;
	// stw r11,936(r31)
	PPC_STORE_U32(r31.u32 + 936, r11.u32);
	// li r9,1280
	ctx.r9.s64 = 1280;
	// stw r10,928(r31)
	PPC_STORE_U32(r31.u32 + 928, ctx.r10.u32);
	// li r10,432
	ctx.r10.s64 = 432;
	// li r11,576
	r11.s64 = 576;
	// stw r9,944(r31)
	PPC_STORE_U32(r31.u32 + 944, ctx.r9.u32);
	// stw r10,940(r31)
	PPC_STORE_U32(r31.u32 + 940, ctx.r10.u32);
	// li r9,576
	ctx.r9.s64 = 576;
	// stw r11,948(r31)
	PPC_STORE_U32(r31.u32 + 948, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,1280
	r11.s64 = 1280;
	// stw r9,956(r31)
	PPC_STORE_U32(r31.u32 + 956, ctx.r9.u32);
	// stw r10,952(r31)
	PPC_STORE_U32(r31.u32 + 952, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,960(r31)
	PPC_STORE_U32(r31.u32 + 960, r11.u32);
	// li r10,720
	ctx.r10.s64 = 720;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stb r9,968(r31)
	PPC_STORE_U8(r31.u32 + 968, ctx.r9.u8);
	// stw r10,964(r31)
	PPC_STORE_U32(r31.u32 + 964, ctx.r10.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(r31.u32 + 972, r11.u32);
loc_8328C84C:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x8328c84c
	if (!cr0.eq) goto loc_8328C84C;
	// lwz r11,972(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(972) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8328c87c
	if (cr6.eq) goto loc_8328C87C;
	// addi r3,r31,972
	ctx.r3.s64 = r31.s64 + 972;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8328C87C:
	// mr r11,r30
	r11.u64 = r30.u64;
	// std r30,976(r31)
	PPC_STORE_U64(r31.u32 + 976, r30.u64);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,984(r31)
	PPC_STORE_U32(r31.u32 + 984, r11.u32);
	// addi r11,r31,976
	r11.s64 = r31.s64 + 976;
	// stw r30,988(r31)
	PPC_STORE_U32(r31.u32 + 988, r30.u32);
	// addi r3,r10,-2008
	ctx.r3.s64 = ctx.r10.s64 + -2008;
	// stw r30,992(r31)
	PPC_STORE_U32(r31.u32 + 992, r30.u32);
	// stw r30,1076(r31)
	PPC_STORE_U32(r31.u32 + 1076, r30.u32);
	// addi r11,r31,988
	r11.s64 = r31.s64 + 988;
	// addi r11,r31,1076
	r11.s64 = r31.s64 + 1076;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C2E0) {
	__imp__sub_8328C2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1904
	ctx.r3.s64 = r11.s64 + -1904;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328C8C8) {
	__imp__sub_8328C8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22712
	ctx.r4.s64 = r11.s64 + -22712;
	// addi r3,r10,-7888
	ctx.r3.s64 = ctx.r10.s64 + -7888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1840
	ctx.r3.s64 = ctx.r9.s64 + -1840;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C8D8) {
	__imp__sub_8328C8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22700
	ctx.r4.s64 = r11.s64 + -22700;
	// addi r3,r10,-7884
	ctx.r3.s64 = ctx.r10.s64 + -7884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1824
	ctx.r3.s64 = ctx.r9.s64 + -1824;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C918) {
	__imp__sub_8328C918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22680
	ctx.r4.s64 = r11.s64 + -22680;
	// addi r3,r10,-7880
	ctx.r3.s64 = ctx.r10.s64 + -7880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1808
	ctx.r3.s64 = ctx.r9.s64 + -1808;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C958) {
	__imp__sub_8328C958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22664
	ctx.r4.s64 = r11.s64 + -22664;
	// addi r3,r10,-7876
	ctx.r3.s64 = ctx.r10.s64 + -7876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1792
	ctx.r3.s64 = ctx.r9.s64 + -1792;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C998) {
	__imp__sub_8328C998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22640
	ctx.r4.s64 = r11.s64 + -22640;
	// addi r3,r10,-7872
	ctx.r3.s64 = ctx.r10.s64 + -7872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1776
	ctx.r3.s64 = ctx.r9.s64 + -1776;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328C9D8) {
	__imp__sub_8328C9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22616
	ctx.r4.s64 = r11.s64 + -22616;
	// addi r3,r10,-7868
	ctx.r3.s64 = ctx.r10.s64 + -7868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1760
	ctx.r3.s64 = ctx.r9.s64 + -1760;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CA18) {
	__imp__sub_8328CA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22596
	ctx.r4.s64 = r11.s64 + -22596;
	// addi r3,r10,-7864
	ctx.r3.s64 = ctx.r10.s64 + -7864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1744
	ctx.r3.s64 = ctx.r9.s64 + -1744;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CA58) {
	__imp__sub_8328CA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-30972
	ctx.r4.s64 = r11.s64 + -30972;
	// addi r3,r10,-7860
	ctx.r3.s64 = ctx.r10.s64 + -7860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1728
	ctx.r3.s64 = ctx.r9.s64 + -1728;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CA98) {
	__imp__sub_8328CA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22580
	ctx.r4.s64 = r11.s64 + -22580;
	// addi r3,r10,-7856
	ctx.r3.s64 = ctx.r10.s64 + -7856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1712
	ctx.r3.s64 = ctx.r9.s64 + -1712;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CAD8) {
	__imp__sub_8328CAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22556
	ctx.r4.s64 = r11.s64 + -22556;
	// addi r3,r10,-7852
	ctx.r3.s64 = ctx.r10.s64 + -7852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1696
	ctx.r3.s64 = ctx.r9.s64 + -1696;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CB18) {
	__imp__sub_8328CB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22532
	ctx.r4.s64 = r11.s64 + -22532;
	// addi r3,r10,-7848
	ctx.r3.s64 = ctx.r10.s64 + -7848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1680
	ctx.r3.s64 = ctx.r9.s64 + -1680;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CB58) {
	__imp__sub_8328CB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-7372
	ctx.r4.s64 = r11.s64 + -7372;
	// addi r3,r10,-7844
	ctx.r3.s64 = ctx.r10.s64 + -7844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1664
	ctx.r3.s64 = ctx.r9.s64 + -1664;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CB98) {
	__imp__sub_8328CB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-22516
	ctx.r4.s64 = r11.s64 + -22516;
	// addi r3,r10,-7840
	ctx.r3.s64 = ctx.r10.s64 + -7840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1648
	ctx.r3.s64 = ctx.r9.s64 + -1648;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CBD8) {
	__imp__sub_8328CBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1632
	ctx.r3.s64 = r11.s64 + -1632;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328CC18) {
	__imp__sub_8328CC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1616
	ctx.r3.s64 = r11.s64 + -1616;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328CC28) {
	__imp__sub_8328CC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1600
	ctx.r3.s64 = r11.s64 + -1600;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328CC38) {
	__imp__sub_8328CC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1584
	ctx.r3.s64 = r11.s64 + -1584;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8328CC48) {
	__imp__sub_8328CC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r11,30136
	ctx.r3.s64 = r11.s64 + 30136;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7692, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CC58) {
	__imp__sub_8328CC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-17064
	ctx.r3.s64 = r11.s64 + -17064;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7688, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CC90) {
	__imp__sub_8328CC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-17052
	ctx.r3.s64 = r11.s64 + -17052;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7684, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CCC8) {
	__imp__sub_8328CCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-17044
	ctx.r3.s64 = r11.s64 + -17044;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7680, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CD00) {
	__imp__sub_8328CD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-17036
	ctx.r3.s64 = r11.s64 + -17036;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7676, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CD38) {
	__imp__sub_8328CD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-17024
	ctx.r3.s64 = r11.s64 + -17024;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7672, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CD70) {
	__imp__sub_8328CD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-17012
	ctx.r3.s64 = r11.s64 + -17012;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7668, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CDA8) {
	__imp__sub_8328CDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7664, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CDE0) {
	__imp__sub_8328CDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16988
	ctx.r3.s64 = r11.s64 + -16988;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7660, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CE18) {
	__imp__sub_8328CE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16976
	ctx.r3.s64 = r11.s64 + -16976;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7656, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CE50) {
	__imp__sub_8328CE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16964
	ctx.r3.s64 = r11.s64 + -16964;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7652, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CE88) {
	__imp__sub_8328CE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16956
	ctx.r3.s64 = r11.s64 + -16956;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7648, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CEC0) {
	__imp__sub_8328CEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16948
	ctx.r3.s64 = r11.s64 + -16948;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7644, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CEF8) {
	__imp__sub_8328CEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16940
	ctx.r3.s64 = r11.s64 + -16940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7640, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CF30) {
	__imp__sub_8328CF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16932
	ctx.r3.s64 = r11.s64 + -16932;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7636, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CF68) {
	__imp__sub_8328CF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16924
	ctx.r3.s64 = r11.s64 + -16924;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7632, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CFA0) {
	__imp__sub_8328CFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328CFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16916
	ctx.r3.s64 = r11.s64 + -16916;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7628, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328CFD8) {
	__imp__sub_8328CFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16900
	ctx.r3.s64 = r11.s64 + -16900;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7624, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D010) {
	__imp__sub_8328D010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16888
	ctx.r3.s64 = r11.s64 + -16888;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7620, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D048) {
	__imp__sub_8328D048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16876
	ctx.r3.s64 = r11.s64 + -16876;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7616, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D080) {
	__imp__sub_8328D080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16868
	ctx.r3.s64 = r11.s64 + -16868;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7612, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D0B8) {
	__imp__sub_8328D0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16864
	ctx.r3.s64 = r11.s64 + -16864;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7608, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D0F0) {
	__imp__sub_8328D0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16856
	ctx.r3.s64 = r11.s64 + -16856;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7604, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D128) {
	__imp__sub_8328D128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16848
	ctx.r3.s64 = r11.s64 + -16848;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7600, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D160) {
	__imp__sub_8328D160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16836
	ctx.r3.s64 = r11.s64 + -16836;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7596, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D198) {
	__imp__sub_8328D198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16824
	ctx.r3.s64 = r11.s64 + -16824;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7592, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D1D0) {
	__imp__sub_8328D1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16812
	ctx.r3.s64 = r11.s64 + -16812;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7588, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D208) {
	__imp__sub_8328D208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16800
	ctx.r3.s64 = r11.s64 + -16800;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7584, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D240) {
	__imp__sub_8328D240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r11,11180
	ctx.r3.s64 = r11.s64 + 11180;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7580, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D278) {
	__imp__sub_8328D278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16784
	ctx.r3.s64 = r11.s64 + -16784;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7576, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D2B0) {
	__imp__sub_8328D2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16768
	ctx.r3.s64 = r11.s64 + -16768;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7572, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D2E8) {
	__imp__sub_8328D2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16756
	ctx.r3.s64 = r11.s64 + -16756;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7568, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D320) {
	__imp__sub_8328D320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16744
	ctx.r3.s64 = r11.s64 + -16744;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7564, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D358) {
	__imp__sub_8328D358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16736
	ctx.r3.s64 = r11.s64 + -16736;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7560, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D390) {
	__imp__sub_8328D390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16720
	ctx.r3.s64 = r11.s64 + -16720;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7556, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D3C8) {
	__imp__sub_8328D3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16704
	ctx.r3.s64 = r11.s64 + -16704;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7552, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D400) {
	__imp__sub_8328D400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16688
	ctx.r3.s64 = r11.s64 + -16688;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7548, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D438) {
	__imp__sub_8328D438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16672
	ctx.r3.s64 = r11.s64 + -16672;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7544, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D470) {
	__imp__sub_8328D470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16656
	ctx.r3.s64 = r11.s64 + -16656;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7540, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D4A8) {
	__imp__sub_8328D4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16640
	ctx.r3.s64 = r11.s64 + -16640;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7536, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D4E0) {
	__imp__sub_8328D4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16624
	ctx.r3.s64 = r11.s64 + -16624;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7532, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D518) {
	__imp__sub_8328D518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16608
	ctx.r3.s64 = r11.s64 + -16608;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7528, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D550) {
	__imp__sub_8328D550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16592
	ctx.r3.s64 = r11.s64 + -16592;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7524, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D588) {
	__imp__sub_8328D588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16576
	ctx.r3.s64 = r11.s64 + -16576;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7520, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D5C0) {
	__imp__sub_8328D5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16560
	ctx.r3.s64 = r11.s64 + -16560;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7516, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D5F8) {
	__imp__sub_8328D5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16548
	ctx.r3.s64 = r11.s64 + -16548;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7512, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D630) {
	__imp__sub_8328D630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16536
	ctx.r3.s64 = r11.s64 + -16536;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7508, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D668) {
	__imp__sub_8328D668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16524
	ctx.r3.s64 = r11.s64 + -16524;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7504, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D6A0) {
	__imp__sub_8328D6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16512
	ctx.r3.s64 = r11.s64 + -16512;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7500, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D6D8) {
	__imp__sub_8328D6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16500
	ctx.r3.s64 = r11.s64 + -16500;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7496, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D710) {
	__imp__sub_8328D710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16488
	ctx.r3.s64 = r11.s64 + -16488;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7492, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D748) {
	__imp__sub_8328D748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16476
	ctx.r3.s64 = r11.s64 + -16476;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7488, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D780) {
	__imp__sub_8328D780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16464
	ctx.r3.s64 = r11.s64 + -16464;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7484, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D7B8) {
	__imp__sub_8328D7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16452
	ctx.r3.s64 = r11.s64 + -16452;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7480, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D7F0) {
	__imp__sub_8328D7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16436
	ctx.r3.s64 = r11.s64 + -16436;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7476, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D828) {
	__imp__sub_8328D828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16424
	ctx.r3.s64 = r11.s64 + -16424;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7472, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D860) {
	__imp__sub_8328D860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16412
	ctx.r3.s64 = r11.s64 + -16412;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7468, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D898) {
	__imp__sub_8328D898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8328D8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16400
	ctx.r3.s64 = r11.s64 + -16400;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7464, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8328D8D0) {
	__imp__sub_8328D8D0(ctx, base);
}

