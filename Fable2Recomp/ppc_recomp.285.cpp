#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830F7048"))) PPC_WEAK_FUNC(sub_830F7048);
PPC_FUNC_IMPL(__imp__sub_830F7048) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6a08
	sub_830F6A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F704C"))) PPC_WEAK_FUNC(sub_830F704C);
PPC_FUNC_IMPL(__imp__sub_830F704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7050"))) PPC_WEAK_FUNC(sub_830F7050);
PPC_FUNC_IMPL(__imp__sub_830F7050) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6b38
	sub_830F6B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7054"))) PPC_WEAK_FUNC(sub_830F7054);
PPC_FUNC_IMPL(__imp__sub_830F7054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7058"))) PPC_WEAK_FUNC(sub_830F7058);
PPC_FUNC_IMPL(__imp__sub_830F7058) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6c28
	sub_830F6C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F705C"))) PPC_WEAK_FUNC(sub_830F705C);
PPC_FUNC_IMPL(__imp__sub_830F705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7060"))) PPC_WEAK_FUNC(sub_830F7060);
PPC_FUNC_IMPL(__imp__sub_830F7060) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6bb8
	sub_830F6BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7064"))) PPC_WEAK_FUNC(sub_830F7064);
PPC_FUNC_IMPL(__imp__sub_830F7064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7068"))) PPC_WEAK_FUNC(sub_830F7068);
PPC_FUNC_IMPL(__imp__sub_830F7068) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6cc8
	sub_830F6CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F706C"))) PPC_WEAK_FUNC(sub_830F706C);
PPC_FUNC_IMPL(__imp__sub_830F706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7070"))) PPC_WEAK_FUNC(sub_830F7070);
PPC_FUNC_IMPL(__imp__sub_830F7070) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6da0
	sub_830F6DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7074"))) PPC_WEAK_FUNC(sub_830F7074);
PPC_FUNC_IMPL(__imp__sub_830F7074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7078"))) PPC_WEAK_FUNC(sub_830F7078);
PPC_FUNC_IMPL(__imp__sub_830F7078) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6e88
	sub_830F6E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F707C"))) PPC_WEAK_FUNC(sub_830F707C);
PPC_FUNC_IMPL(__imp__sub_830F707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7080"))) PPC_WEAK_FUNC(sub_830F7080);
PPC_FUNC_IMPL(__imp__sub_830F7080) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x830f70fc
	if (ctx.cr6.lt) goto loc_830F70FC;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x830f7104
	if (ctx.cr6.eq) goto loc_830F7104;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x830f7104
	if (!ctx.cr6.eq) goto loc_830F7104;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,-20048
	ctx.r10.s64 = ctx.r10.s64 + -20048;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830f6f68
	ctx.lr = 0x830F70E8;
	sub_830F6F68(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830f70f8
	if (ctx.cr6.lt) goto loc_830F70F8;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_830F70F8:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_830F70FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830f7108
	goto loc_830F7108;
loc_830F7104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F7108:
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

__attribute__((alias("__imp__sub_830F7120"))) PPC_WEAK_FUNC(sub_830F7120);
PPC_FUNC_IMPL(__imp__sub_830F7120) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830f71b8
	if (ctx.cr6.lt) goto loc_830F71B8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830f71c0
	if (ctx.cr6.eq) goto loc_830F71C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830f7168
	if (ctx.cr6.eq) goto loc_830F7168;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x830f71b4
	goto loc_830F71B4;
loc_830F7168:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r10,r10,-20032
	ctx.r10.s64 = ctx.r10.s64 + -20032;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x830f6f68
	ctx.lr = 0x830F71A0;
	sub_830F6F68(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830f71b4
	if (ctx.cr6.lt) goto loc_830F71B4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_830F71B4:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_830F71B8:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// b 0x830f71c4
	goto loc_830F71C4;
loc_830F71C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F71C4:
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

__attribute__((alias("__imp__sub_830F71DC"))) PPC_WEAK_FUNC(sub_830F71DC);
PPC_FUNC_IMPL(__imp__sub_830F71DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F71E0"))) PPC_WEAK_FUNC(sub_830F71E0);
PPC_FUNC_IMPL(__imp__sub_830F71E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f7080
	sub_830F7080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F71E4"))) PPC_WEAK_FUNC(sub_830F71E4);
PPC_FUNC_IMPL(__imp__sub_830F71E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F71E8"))) PPC_WEAK_FUNC(sub_830F71E8);
PPC_FUNC_IMPL(__imp__sub_830F71E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f7120
	sub_830F7120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F71EC"))) PPC_WEAK_FUNC(sub_830F71EC);
PPC_FUNC_IMPL(__imp__sub_830F71EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F71F0"))) PPC_WEAK_FUNC(sub_830F71F0);
PPC_FUNC_IMPL(__imp__sub_830F71F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82caae18
	sub_82CAAE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F71F8"))) PPC_WEAK_FUNC(sub_830F71F8);
PPC_FUNC_IMPL(__imp__sub_830F71F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82ca5dc0
	ctx.lr = 0x830F720C;
	sub_82CA5DC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7220"))) PPC_WEAK_FUNC(sub_830F7220);
PPC_FUNC_IMPL(__imp__sub_830F7220) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7244"))) PPC_WEAK_FUNC(sub_830F7244);
PPC_FUNC_IMPL(__imp__sub_830F7244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7248"))) PPC_WEAK_FUNC(sub_830F7248);
PPC_FUNC_IMPL(__imp__sub_830F7248) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f7298
	if (ctx.cr6.eq) goto loc_830F7298;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r10,r10,-18568
	ctx.r10.s64 = ctx.r10.s64 + -18568;
loc_830F725C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x830f7280
	if (ctx.cr0.eq) goto loc_830F7280;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x830f725c
	if (ctx.cr6.eq) goto loc_830F725C;
loc_830F7280:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x830f7298
	if (!ctx.cr0.eq) goto loc_830F7298;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F7298:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F72A0"))) PPC_WEAK_FUNC(sub_830F72A0);
PPC_FUNC_IMPL(__imp__sub_830F72A0) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F72A8"))) PPC_WEAK_FUNC(sub_830F72A8);
PPC_FUNC_IMPL(__imp__sub_830F72A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830F72BC"))) PPC_WEAK_FUNC(sub_830F72BC);
PPC_FUNC_IMPL(__imp__sub_830F72BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F72C0"))) PPC_WEAK_FUNC(sub_830F72C0);
PPC_FUNC_IMPL(__imp__sub_830F72C0) {
	PPC_FUNC_PROLOGUE();
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
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x83102d70
	ctx.lr = 0x830F72E0;
	sub_83102D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830f72f4
	if (!ctx.cr0.eq) goto loc_830F72F4;
	// bl 0x831019f0
	ctx.lr = 0x830F72EC;
	sub_831019F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f72fc
	goto loc_830F72FC;
loc_830F72F4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_830F72FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F730C"))) PPC_WEAK_FUNC(sub_830F730C);
PPC_FUNC_IMPL(__imp__sub_830F730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7310"))) PPC_WEAK_FUNC(sub_830F7310);
PPC_FUNC_IMPL(__imp__sub_830F7310) {
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
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// beq cr6,0x830f7394
	if (ctx.cr6.eq) goto loc_830F7394;
	// cmplwi cr6,r5,20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 20, ctx.xer);
	// beq cr6,0x830f738c
	if (ctx.cr6.eq) goto loc_830F738C;
	// cmplwi cr6,r5,21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 21, ctx.xer);
	// beq cr6,0x830f7384
	if (ctx.cr6.eq) goto loc_830F7384;
	// cmplwi cr6,r5,22
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 22, ctx.xer);
	// beq cr6,0x830f7378
	if (ctx.cr6.eq) goto loc_830F7378;
	// cmplwi cr6,r5,23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 23, ctx.xer);
	// beq cr6,0x830f736c
	if (ctx.cr6.eq) goto loc_830F736C;
	// bl 0x82cbbb58
	ctx.lr = 0x830F735C;
	sub_82CBBB58(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x830f73f8
	goto loc_830F73F8;
loc_830F736C:
	// li r11,11
	ctx.r11.s64 = 11;
loc_830F7370:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x830f7408
	goto loc_830F7408;
loc_830F7378:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x830f73f0
	goto loc_830F73F0;
loc_830F7384:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x830f7370
	goto loc_830F7370;
loc_830F738C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x830f7370
	goto loc_830F7370;
loc_830F7394:
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bge cr6,0x830f73e4
	if (!ctx.cr6.lt) goto loc_830F73E4;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// beq cr6,0x830f73d4
	if (ctx.cr6.eq) goto loc_830F73D4;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x830f7384
	if (ctx.cr6.eq) goto loc_830F7384;
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x830f7378
	if (ctx.cr6.eq) goto loc_830F7378;
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// beq cr6,0x830f736c
	if (ctx.cr6.eq) goto loc_830F736C;
	// cmplwi cr6,r3,33
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33, ctx.xer);
	// beq cr6,0x830f738c
	if (ctx.cr6.eq) goto loc_830F738C;
	// bl 0x82cbbb58
	ctx.lr = 0x830F73C8;
	sub_82CBBB58(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x830f7404
	goto loc_830F7404;
loc_830F73D4:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// b 0x830f73f8
	goto loc_830F73F8;
loc_830F73E4:
	// rlwinm r11,r6,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_830F73F0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_830F73F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x830f7408
	if (!ctx.cr6.gt) goto loc_830F7408;
loc_830F7404:
	// bl 0x82cbbb58
	ctx.lr = 0x830F7408;
	sub_82CBBB58(ctx, base);
loc_830F7408:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x830f7418
	if (ctx.cr6.lt) goto loc_830F7418;
	// bl 0x82cbbb58
	ctx.lr = 0x830F7418;
	sub_82CBBB58(ctx, base);
loc_830F7418:
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

__attribute__((alias("__imp__sub_830F7430"))) PPC_WEAK_FUNC(sub_830F7430);
PPC_FUNC_IMPL(__imp__sub_830F7430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x830F7438;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r30,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x830f7474
	if (ctx.cr6.lt) goto loc_830F7474;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-18456
	ctx.r6.s64 = ctx.r11.s64 + -18456;
	// addi r5,r10,-18516
	ctx.r5.s64 = ctx.r10.s64 + -18516;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,808
	ctx.r7.s64 = 808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F7474;
	sub_831034D8(ctx, base);
loc_830F7474:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_830F7498"))) PPC_WEAK_FUNC(sub_830F7498);
PPC_FUNC_IMPL(__imp__sub_830F7498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x830F74A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r30,r31,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x830f74dc
	if (ctx.cr6.lt) goto loc_830F74DC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-18456
	ctx.r6.s64 = ctx.r11.s64 + -18456;
	// addi r5,r10,-18516
	ctx.r5.s64 = ctx.r10.s64 + -18516;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,814
	ctx.r7.s64 = 814;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F74DC;
	sub_831034D8(ctx, base);
loc_830F74DC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_830F7508"))) PPC_WEAK_FUNC(sub_830F7508);
PPC_FUNC_IMPL(__imp__sub_830F7508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x830f7550
	if (ctx.cr0.lt) goto loc_830F7550;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_830F751C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x830f7544
	if (ctx.cr6.eq) goto loc_830F7544;
	// li r10,31
	ctx.r10.s64 = 31;
loc_830F752C:
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x830f7558
	if (ctx.cr0.eq) goto loc_830F7558;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x830f752c
	if (!ctx.cr0.lt) goto loc_830F752C;
loc_830F7544:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x830f751c
	if (!ctx.cr0.lt) goto loc_830F751C;
loc_830F7550:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830F7558:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7564"))) PPC_WEAK_FUNC(sub_830F7564);
PPC_FUNC_IMPL(__imp__sub_830F7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7568"))) PPC_WEAK_FUNC(sub_830F7568);
PPC_FUNC_IMPL(__imp__sub_830F7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830F7570;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830f7588
	if (!ctx.cr6.eq) goto loc_830F7588;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830F7588:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830f75b0
	if (ctx.cr6.eq) goto loc_830F75B0;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
loc_830F7598:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f7430
	ctx.lr = 0x830F75A4;
	sub_830F7430(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830f7598
	if (ctx.cr6.lt) goto loc_830F7598;
loc_830F75B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830F75B8"))) PPC_WEAK_FUNC(sub_830F75B8);
PPC_FUNC_IMPL(__imp__sub_830F75B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830F75C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830F75E0;
	sub_82CA2C60(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830f7614
	if (!ctx.cr6.eq) goto loc_830F7614;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830f760c
	if (!ctx.cr6.eq) goto loc_830F760C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f7568
	ctx.lr = 0x830F7604;
	sub_830F7568(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_830F760C:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x830f76d8
	if (ctx.cr6.eq) goto loc_830F76D8;
loc_830F7614:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// beq cr6,0x830f7638
	if (ctx.cr6.eq) goto loc_830F7638;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830f7648
	if (!ctx.cr6.eq) goto loc_830F7648;
loc_830F7638:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x830f7648
	if (ctx.cr0.eq) goto loc_830F7648;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830F7648:
	// mr. r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq 0x830f77e8
	if (ctx.cr0.eq) goto loc_830F77E8;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_830F7660:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830f7670
	if (!ctx.cr6.lt) goto loc_830F7670;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_830F7670:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x830f75b8
	ctx.lr = 0x830F768C;
	sub_830F75B8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x830f76cc
	if (ctx.cr6.eq) goto loc_830F76CC;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_830F76CC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830f7660
	if (!ctx.cr0.eq) goto loc_830F7660;
	// b 0x830f77e8
	goto loc_830F77E8;
loc_830F76D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830f77e8
	if (ctx.cr6.eq) goto loc_830F77E8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x830f77e8
	if (ctx.cr6.eq) goto loc_830F77E8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_830F7700:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r11,6(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x830f7724
	if (ctx.cr6.eq) goto loc_830F7724;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x830f7734
	if (!ctx.cr6.eq) goto loc_830F7734;
loc_830F7724:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x830f7734
	if (ctx.cr0.eq) goto loc_830F7734;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830F7734:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lhz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830f7754
	if (!ctx.cr6.lt) goto loc_830F7754;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_830F7754:
	// lhz r10,6(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x830f75b8
	ctx.lr = 0x830F779C;
	sub_830F75B8(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x830f77dc
	if (ctx.cr6.eq) goto loc_830F77DC;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_830F77DC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x830f7700
	if (!ctx.cr0.eq) goto loc_830F7700;
loc_830F77E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830F77F0"))) PPC_WEAK_FUNC(sub_830F77F0);
PPC_FUNC_IMPL(__imp__sub_830F77F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x830f7828
	if (!ctx.cr6.eq) goto loc_830F7828;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830F7828:
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7860"))) PPC_WEAK_FUNC(sub_830F7860);
PPC_FUNC_IMPL(__imp__sub_830F7860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830F7868;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830f7904
	if (ctx.cr6.eq) goto loc_830F7904;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F788C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830f7904
	if (ctx.cr0.eq) goto loc_830F7904;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f7904
	if (ctx.cr6.eq) goto loc_830F7904;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq cr6,0x830f7904
	if (ctx.cr6.eq) goto loc_830F7904;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_830F78B4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x830f78f8
	if (!ctx.cr6.eq) goto loc_830F78F8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f77f0
	ctx.lr = 0x830F78E0;
	sub_830F77F0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f75b8
	ctx.lr = 0x830F78F8;
	sub_830F75B8(ctx, base);
loc_830F78F8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x830f78b4
	if (!ctx.cr0.eq) goto loc_830F78B4;
loc_830F7904:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830F790C"))) PPC_WEAK_FUNC(sub_830F790C);
PPC_FUNC_IMPL(__imp__sub_830F790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7910"))) PPC_WEAK_FUNC(sub_830F7910);
PPC_FUNC_IMPL(__imp__sub_830F7910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830F7918;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f7498
	ctx.lr = 0x830F7930;
	sub_830F7498(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f79a0
	if (!ctx.cr0.eq) goto loc_830F79A0;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// lwz r4,4680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f7508
	ctx.lr = 0x830F7948;
	sub_830F7508(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x830f7960
	if (!ctx.cr0.lt) goto loc_830F7960;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x830f79a8
	goto loc_830F79A8;
loc_830F7960:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f7430
	ctx.lr = 0x830F7974;
	sub_830F7430(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r29,328(r11)
	PPC_STORE_U8(ctx.r11.u32 + 328, ctx.r29.u8);
	// bl 0x830f7430
	ctx.lr = 0x830F798C;
	sub_830F7430(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830F79A0:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
loc_830F79A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830F79B0"))) PPC_WEAK_FUNC(sub_830F79B0);
PPC_FUNC_IMPL(__imp__sub_830F79B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830F79B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f7ad0
	if (ctx.cr0.eq) goto loc_830F7AD0;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f7ad0
	if (!ctx.cr0.eq) goto loc_830F7AD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830f79f4
	if (!ctx.cr0.eq) goto loc_830F79F4;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830f79f4
	if (!ctx.cr0.eq) goto loc_830F79F4;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x830f79f8
	if (!ctx.cr0.eq) goto loc_830F79F8;
loc_830F79F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830F79F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f7ad0
	if (ctx.cr0.eq) goto loc_830F7AD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r30,r10,12176
	ctx.r30.s64 = ctx.r10.s64 + 12176;
	// rlwinm r29,r11,10,25,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x830f7a34
	if (ctx.cr6.lt) goto loc_830F7A34;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f7a34
	if (!ctx.cr0.eq) goto loc_830F7A34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x830f7910
	ctx.lr = 0x830F7A30;
	sub_830F7910(ctx, base);
	// stb r3,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r3.u8);
loc_830F7A34:
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x830f7a5c
	if (ctx.cr6.lt) goto loc_830F7A5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f7a5c
	if (!ctx.cr0.eq) goto loc_830F7A5C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x830f7910
	ctx.lr = 0x830F7A58;
	sub_830F7910(ctx, base);
	// stb r3,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r3.u8);
loc_830F7A5C:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// addi r30,r11,12616
	ctx.r30.s64 = ctx.r11.s64 + 12616;
	// bge cr6,0x830f7a84
	if (!ctx.cr6.lt) goto loc_830F7A84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830f7aa0
	if (!ctx.cr6.eq) goto loc_830F7AA0;
loc_830F7A84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830f7aa0
	if (!ctx.cr0.eq) goto loc_830F7AA0;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f7910
	ctx.lr = 0x830F7A9C;
	sub_830F7910(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
loc_830F7AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830f7ac4
	if (!ctx.cr6.eq) goto loc_830F7AC4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,11(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// bl 0x830f7910
	ctx.lr = 0x830F7AC0;
	sub_830F7910(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
loc_830F7AC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830F7AD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830F7AD8"))) PPC_WEAK_FUNC(sub_830F7AD8);
PPC_FUNC_IMPL(__imp__sub_830F7AD8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x830f7af4
	if (ctx.cr0.eq) goto loc_830F7AF4;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
loc_830F7AF4:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// beq 0x830f7b64
	if (ctx.cr0.eq) goto loc_830F7B64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// bgt cr6,0x830f7b20
	if (ctx.cr6.gt) goto loc_830F7B20;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
loc_830F7B20:
	// clrlwi. r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// beq 0x830f7b38
	if (ctx.cr0.eq) goto loc_830F7B38;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x830f7b40
	if (!ctx.cr0.eq) goto loc_830F7B40;
loc_830F7B38:
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// slw r8,r4,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
loc_830F7B40:
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bne 0x830f7b50
	if (!ctx.cr0.eq) goto loc_830F7B50;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_830F7B50:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x830f7b68
	if (!ctx.cr0.eq) goto loc_830F7B68;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// b 0x830f7b6c
	goto loc_830F7B6C;
loc_830F7B64:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_830F7B68:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_830F7B6C:
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x830f7b84
	if (ctx.cr6.eq) goto loc_830F7B84;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_830F7B84:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f7b90
	if (ctx.cr0.eq) goto loc_830F7B90;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
loc_830F7B90:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7BAC"))) PPC_WEAK_FUNC(sub_830F7BAC);
PPC_FUNC_IMPL(__imp__sub_830F7BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7BB0"))) PPC_WEAK_FUNC(sub_830F7BB0);
PPC_FUNC_IMPL(__imp__sub_830F7BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830F7BB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-17912
	ctx.r31.s64 = ctx.r11.s64 + -17912;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
loc_830F7BD8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x830f7bfc
	if (!ctx.cr6.eq) goto loc_830F7BFC;
	// stwcx. r28,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830f7bd8
	if (!ctx.cr0.eq) goto loc_830F7BD8;
	// b 0x830f7c04
	goto loc_830F7C04;
loc_830F7BFC:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_830F7C04:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x830f7c48
	goto loc_830F7C48;
loc_830F7C0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cbc6b0
	ctx.lr = 0x830F7C14;
	sub_82CBC6B0(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_830F7C18:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x830f7c3c
	if (!ctx.cr6.eq) goto loc_830F7C3C;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830f7c18
	if (!ctx.cr0.eq) goto loc_830F7C18;
	// b 0x830f7c44
	goto loc_830F7C44;
loc_830F7C3C:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_830F7C44:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
loc_830F7C48:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830f7c0c
	if (ctx.cr6.eq) goto loc_830F7C0C;
	// lis r29,-31946
	ctx.r29.s64 = -2093613056;
	// lwz r11,-17876(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830f7c68
	if (!ctx.cr6.eq) goto loc_830F7C68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b258c
	ctx.lr = 0x830F7C68;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_830F7C68:
	// lwz r11,-17876(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17876);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-17876(r29)
	PPC_STORE_U32(ctx.r29.u32 + -17876, ctx.r11.u32);
loc_830F7C78:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830f7c78
	if (!ctx.cr0.eq) goto loc_830F7C78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b227c
	ctx.lr = 0x830F7C98;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831065a0
	ctx.lr = 0x830F7CA4;
	sub_831065A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b226c
	ctx.lr = 0x830F7CB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_830F7CB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x830f7d08
	if (!ctx.cr6.eq) goto loc_830F7D08;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830f7cb4
	if (!ctx.cr0.eq) goto loc_830F7CB4;
	// b 0x830f7d10
	goto loc_830F7D10;
loc_830F7CD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cbc6b0
	ctx.lr = 0x830F7CE0;
	sub_82CBC6B0(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_830F7CE4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x830f7d08
	if (!ctx.cr6.eq) goto loc_830F7D08;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830f7ce4
	if (!ctx.cr0.eq) goto loc_830F7CE4;
	// b 0x830f7d10
	goto loc_830F7D10;
loc_830F7D08:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_830F7D10:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830f7cd8
	if (ctx.cr6.eq) goto loc_830F7CD8;
	// lwz r11,-17876(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17876);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-17876(r29)
	PPC_STORE_U32(ctx.r29.u32 + -17876, ctx.r11.u32);
	// lwz r11,-17876(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17876);
loc_830F7D30:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830f7d30
	if (!ctx.cr0.eq) goto loc_830F7D30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830F7D54"))) PPC_WEAK_FUNC(sub_830F7D54);
PPC_FUNC_IMPL(__imp__sub_830F7D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7D58"))) PPC_WEAK_FUNC(sub_830F7D58);
PPC_FUNC_IMPL(__imp__sub_830F7D58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x830f7da8
	if (!ctx.cr6.eq) goto loc_830F7DA8;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x830f7d74
	if (!ctx.cr6.lt) goto loc_830F7D74;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_830F7D74:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830f7da8
	if (ctx.cr6.eq) goto loc_830F7DA8;
loc_830F7D88:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,20
	ctx.r8.u64 = ctx.r8.u32 & 0xFFF;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x830f7db0
	if (ctx.cr6.eq) goto loc_830F7DB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830f7d88
	if (ctx.cr6.lt) goto loc_830F7D88;
loc_830F7DA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830F7DB0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,24,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF0;
	// rlwinm r11,r11,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7DCC"))) PPC_WEAK_FUNC(sub_830F7DCC);
PPC_FUNC_IMPL(__imp__sub_830F7DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7DD0"))) PPC_WEAK_FUNC(sub_830F7DD0);
PPC_FUNC_IMPL(__imp__sub_830F7DD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830f7de0
	if (ctx.cr6.eq) goto loc_830F7DE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_830F7DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7DE8"))) PPC_WEAK_FUNC(sub_830F7DE8);
PPC_FUNC_IMPL(__imp__sub_830F7DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x830f7e20
	if (!ctx.cr6.eq) goto loc_830F7E20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830F7E20:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7E58"))) PPC_WEAK_FUNC(sub_830F7E58);
PPC_FUNC_IMPL(__imp__sub_830F7E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830F7E60;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830F7E80;
	sub_82CA2C60(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830f7eb4
	if (ctx.cr6.eq) goto loc_830F7EB4;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x830f7e58
	ctx.lr = 0x830F7EAC;
	sub_830F7E58(ctx, base);
	// mullw r28,r3,r31
	ctx.r28.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// b 0x830f7f64
	goto loc_830F7F64;
loc_830F7EB4:
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830f7f2c
	if (ctx.cr6.eq) goto loc_830F7F2C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x830f7f64
	if (ctx.cr6.eq) goto loc_830F7F64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_830F7ED4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,6(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x830f7e58
	ctx.lr = 0x830F7F18;
	sub_830F7E58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x830f7ed4
	if (!ctx.cr0.eq) goto loc_830F7ED4;
	// b 0x830f7f64
	goto loc_830F7F64;
loc_830F7F2C:
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mullw r28,r10,r9
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// beq cr6,0x830f7f4c
	if (ctx.cr6.eq) goto loc_830F7F4C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830f7f64
	if (!ctx.cr6.eq) goto loc_830F7F64;
loc_830F7F4C:
	// clrlwi. r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f7f5c
	if (!ctx.cr0.eq) goto loc_830F7F5C;
	// rlwinm r28,r28,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x830f7f64
	goto loc_830F7F64;
loc_830F7F5C:
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_830F7F64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830F7F70"))) PPC_WEAK_FUNC(sub_830F7F70);
PPC_FUNC_IMPL(__imp__sub_830F7F70) {
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
	// bne cr6,0x830f7f94
	if (!ctx.cr6.eq) goto loc_830F7F94;
	// bl 0x82cbbb58
	ctx.lr = 0x830F7F90;
	sub_82CBBB58(ctx, base);
	// b 0x830f7fbc
	goto loc_830F7FBC;
loc_830F7F94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f7fbc
	if (ctx.cr6.eq) goto loc_830F7FBC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f5f18
	ctx.lr = 0x830F7FAC;
	sub_821F5F18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_830F7FBC:
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

__attribute__((alias("__imp__sub_830F7FD0"))) PPC_WEAK_FUNC(sub_830F7FD0);
PPC_FUNC_IMPL(__imp__sub_830F7FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830F7FD8;
	sub_82CA2BE0(ctx, base);
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-18208
	ctx.r27.s64 = ctx.r10.s64 + -18208;
	// bne cr6,0x830f801c
	if (!ctx.cr6.eq) goto loc_830F801C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-18224
	ctx.r5.s64 = ctx.r11.s64 + -18224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F801C;
	sub_831034D8(ctx, base);
loc_830F801C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f8044
	if (ctx.cr6.lt) goto loc_830F8044;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-18280
	ctx.r5.s64 = ctx.r11.s64 + -18280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F8044;
	sub_831034D8(ctx, base);
loc_830F8044:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830f8078
	if (ctx.cr6.lt) goto loc_830F8078;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-18368
	ctx.r5.s64 = ctx.r11.s64 + -18368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F8078;
	sub_831034D8(ctx, base);
loc_830F8078:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stwx r26,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830F80C0"))) PPC_WEAK_FUNC(sub_830F80C0);
PPC_FUNC_IMPL(__imp__sub_830F80C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830F80C8;
	sub_82CA2BE0(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r27,r11,-18548
	ctx.r27.s64 = ctx.r11.s64 + -18548;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// addi r26,r10,-18208
	ctx.r26.s64 = ctx.r10.s64 + -18208;
	// blt cr6,0x830f8114
	if (ctx.cr6.lt) goto loc_830F8114;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-18056
	ctx.r5.s64 = ctx.r11.s64 + -18056;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F8114;
	sub_831034D8(ctx, base);
loc_830F8114:
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
	// blt cr6,0x830f8148
	if (ctx.cr6.lt) goto loc_830F8148;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-18128
	ctx.r5.s64 = ctx.r11.s64 + -18128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F8148;
	sub_831034D8(ctx, base);
loc_830F8148:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830f7fd0
	ctx.lr = 0x830F8178;
	sub_830F7FD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830F8180"))) PPC_WEAK_FUNC(sub_830F8180);
PPC_FUNC_IMPL(__imp__sub_830F8180) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830f81b4
	if (ctx.cr6.eq) goto loc_830F81B4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x821f5f18
	ctx.lr = 0x830F81B0;
	sub_821F5F18(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_830F81B4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_830F81D8"))) PPC_WEAK_FUNC(sub_830F81D8);
PPC_FUNC_IMPL(__imp__sub_830F81D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x830F81E0;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r17,1
	ctx.r17.s64 = 1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// beq 0x830f82ec
	if (ctx.cr0.eq) goto loc_830F82EC;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830f82ec
	if (ctx.cr6.eq) goto loc_830F82EC;
loc_830F8218:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x830f82ec
	if (!ctx.cr6.lt) goto loc_830F82EC;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// divwu r7,r30,r11
	ctx.r7.u32 = ctx.r30.u32 / ctx.r11.u32;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r7,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x8;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r8,r11,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f829c
	if (ctx.cr0.eq) goto loc_830F829C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x830f829c
	if (!ctx.cr6.eq) goto loc_830F829C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 * 12;
loc_830F829C:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x830F82B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// blt cr6,0x830f8218
	if (ctx.cr6.lt) goto loc_830F8218;
loc_830F82EC:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f842c
	if (ctx.cr0.eq) goto loc_830F842C;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// add r21,r26,r29
	ctx.r21.u64 = ctx.r26.u64 + ctx.r29.u64;
loc_830F8300:
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x830f842c
	if (!ctx.cr6.lt) goto loc_830F842C;
loc_830F8314:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x830f8424
	if (ctx.cr6.eq) goto loc_830F8424;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r25,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0x8;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f837c
	if (ctx.cr0.eq) goto loc_830F837C;
	// bl 0x82cbbb58
	ctx.lr = 0x830F837C;
	sub_82CBBB58(ctx, base);
loc_830F837C:
	// rlwinm r11,r30,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f8418
	if (ctx.cr0.eq) goto loc_830F8418;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// clrlwi r31,r11,20
	ctx.r31.u64 = ctx.r11.u32 & 0xFFF;
	// bne cr6,0x830f83a8
	if (!ctx.cr6.eq) goto loc_830F83A8;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_830F83A8:
	// rlwinm r9,r30,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mulli r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 * 12;
	// rlwinm. r27,r11,20,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r29,r11,16,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// or r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r28,r10,r26
	ctx.r28.u64 = ctx.r10.u64 + ctx.r26.u64;
	// beq 0x830f8418
	if (ctx.cr0.eq) goto loc_830F8418;
loc_830F83C8:
	// clrlwi r5,r29,31
	ctx.r5.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x830f8400
	if (!ctx.cr6.eq) goto loc_830F8400;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x830F83F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 1;
	// b 0x830f8408
	goto loc_830F8408;
loc_830F8400:
	// ble cr6,0x830f8408
	if (!ctx.cr6.gt) goto loc_830F8408;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
loc_830F8408:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x830f83c8
	if (!ctx.cr0.eq) goto loc_830F83C8;
loc_830F8418:
	// addi r22,r22,6
	ctx.r22.s64 = ctx.r22.s64 + 6;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x830f8314
	if (ctx.cr6.lt) goto loc_830F8314;
loc_830F8424:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x830f8300
	if (!ctx.cr6.eq) goto loc_830F8300;
loc_830F842C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_830F8434"))) PPC_WEAK_FUNC(sub_830F8434);
PPC_FUNC_IMPL(__imp__sub_830F8434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8438"))) PPC_WEAK_FUNC(sub_830F8438);
PPC_FUNC_IMPL(__imp__sub_830F8438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x830F8440;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83109398
	ctx.lr = 0x830F8460;
	sub_83109398(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83108300
	ctx.lr = 0x830F8468;
	sub_83108300(ctx, base);
	// b 0x830f84e4
	goto loc_830F84E4;
loc_830F846C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831086a8
	ctx.lr = 0x830F8474;
	sub_831086A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1978
	ctx.r11.s64 = ctx.r11.s64 + -1978;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x830f84d4
	if (ctx.cr6.gt) goto loc_830F84D4;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-17992
	ctx.r12.s64 = ctx.r12.s64 + -17992;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31984
	ctx.r12.s64 = -2096103424;
	// addi r12,r12,-31568
	ctx.r12.s64 = ctx.r12.s64 + -31568;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_830F84B0;
	case 1:
		goto loc_830F8568;
	case 2:
		goto loc_830F84CC;
	case 3:
		goto loc_830F8580;
	case 4:
		goto loc_830F858C;
	case 5:
		goto loc_830F85A4;
	case 6:
		goto loc_830F8520;
	case 7:
		goto loc_830F8538;
	case 8:
		goto loc_830F85BC;
	case 9:
		goto loc_830F8550;
	case 10:
		goto loc_830F84D4;
	case 11:
		goto loc_830F85F4;
	case 12:
		goto loc_830F84D4;
	case 13:
		goto loc_830F85D4;
	default:
		__builtin_unreachable();
	}
loc_830F84B0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f84bc
	if (ctx.cr0.eq) goto loc_830F84BC;
	// bl 0x82cbbb58
	ctx.lr = 0x830F84BC;
	sub_82CBBB58(ctx, base);
loc_830F84BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r11,r31,0,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F84CC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f84d8
	if (ctx.cr0.eq) goto loc_830F84D8;
loc_830F84D4:
	// bl 0x82cbbb58
	ctx.lr = 0x830F84D8;
	sub_82CBBB58(ctx, base);
loc_830F84D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83108600
	ctx.lr = 0x830F84E4;
	sub_83108600(ctx, base);
loc_830F84E4:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830f846c
	if (!ctx.cr0.eq) goto loc_830F846C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b96d88
	ctx.lr = 0x830F84FC;
	sub_82B96D88(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x830f8508
	if (ctx.cr6.eq) goto loc_830F8508;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_830F8508:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x830f8514
	if (ctx.cr6.eq) goto loc_830F8514;
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
loc_830F8514:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_830F8520:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f852c
	if (ctx.cr0.eq) goto loc_830F852C;
	// bl 0x82cbbb58
	ctx.lr = 0x830F852C;
	sub_82CBBB58(ctx, base);
loc_830F852C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,20,8,11
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r31.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F8538:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f8544
	if (ctx.cr0.eq) goto loc_830F8544;
	// bl 0x82cbbb58
	ctx.lr = 0x830F8544;
	sub_82CBBB58(ctx, base);
loc_830F8544:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,24,5,7
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x7000000) | (ctx.r31.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F8550:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f855c
	if (ctx.cr0.eq) goto loc_830F855C;
	// bl 0x82cbbb58
	ctx.lr = 0x830F855C;
	sub_82CBBB58(ctx, base);
loc_830F855C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,31,0,0
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r31.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F8568:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f8574
	if (!ctx.cr0.eq) goto loc_830F8574;
	// bl 0x82cbbb58
	ctx.lr = 0x830F8574;
	sub_82CBBB58(ctx, base);
loc_830F8574:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,8,18,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3F00) | (ctx.r31.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F8580:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f84d8
	if (!ctx.cr0.eq) goto loc_830F84D8;
	// b 0x830f84d4
	goto loc_830F84D4;
loc_830F858C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f8598
	if (!ctx.cr0.eq) goto loc_830F8598;
	// bl 0x82cbbb58
	ctx.lr = 0x830F8598;
	sub_82CBBB58(ctx, base);
loc_830F8598:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,18,13,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0x40000) | (ctx.r31.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F85A4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f85b0
	if (!ctx.cr0.eq) goto loc_830F85B0;
	// bl 0x82cbbb58
	ctx.lr = 0x830F85B0;
	sub_82CBBB58(ctx, base);
loc_830F85B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,19,12,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0x80000) | (ctx.r31.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F85BC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f85c8
	if (!ctx.cr0.eq) goto loc_830F85C8;
	// bl 0x82cbbb58
	ctx.lr = 0x830F85C8;
	sub_82CBBB58(ctx, base);
loc_830F85C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,27,1,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x78000000) | (ctx.r31.u64 & 0xFFFFFFFF87FFFFFF);
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F85D4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f85e0
	if (!ctx.cr0.eq) goto loc_830F85E0;
	// bl 0x82cbbb58
	ctx.lr = 0x830F85E0;
	sub_82CBBB58(ctx, base);
loc_830F85E0:
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// rlwinm r10,r27,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x830f84d8
	goto loc_830F84D8;
loc_830F85F4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f8600
	if (!ctx.cr0.eq) goto loc_830F8600;
	// bl 0x82cbbb58
	ctx.lr = 0x830F8600;
	sub_82CBBB58(ctx, base);
loc_830F8600:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r27,r11,1,30,30
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x830f84d8
	goto loc_830F84D8;
}

__attribute__((alias("__imp__sub_830F860C"))) PPC_WEAK_FUNC(sub_830F860C);
PPC_FUNC_IMPL(__imp__sub_830F860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8610"))) PPC_WEAK_FUNC(sub_830F8610);
PPC_FUNC_IMPL(__imp__sub_830F8610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x830F8618;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82ca3190
	ctx.lr = 0x830F8648;
	sub_82CA3190(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3190
	ctx.lr = 0x830F865C;
	sub_82CA3190(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82ca3190
	ctx.lr = 0x830F866C;
	sub_82CA3190(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82ca3190
	ctx.lr = 0x830F867C;
	sub_82CA3190(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82ca3190
	ctx.lr = 0x830F868C;
	sub_82CA3190(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r20,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r20.u8);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
	// b 0x830f8708
	goto loc_830F8708;
loc_830F86A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x830f8710
	if (ctx.cr6.eq) goto loc_830F8710;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x830f86cc
	if (!ctx.cr6.eq) goto loc_830F86CC;
	// rlwinm r11,r9,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x830f8708
	goto loc_830F8708;
loc_830F86CC:
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x830f86e4
	if (!ctx.cr6.eq) goto loc_830F86E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// bl 0x830f7430
	ctx.lr = 0x830F86E0;
	sub_830F7430(ctx, base);
	// b 0x830f86ec
	goto loc_830F86EC;
loc_830F86E4:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x830f86f4
	if (!ctx.cr6.eq) goto loc_830F86F4;
loc_830F86EC:
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// b 0x830f8708
	goto loc_830F8708;
loc_830F86F4:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x830f8704
	if (ctx.cr6.eq) goto loc_830F8704;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x830f8710
	if (!ctx.cr6.eq) goto loc_830F8710;
loc_830F8704:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_830F8708:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830f86a4
	if (ctx.cr6.lt) goto loc_830F86A4;
loc_830F8710:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f7860
	ctx.lr = 0x830F871C;
	sub_830F7860(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83109ac8
	ctx.lr = 0x830F8724;
	sub_83109AC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8310a428
	ctx.lr = 0x830F872C;
	sub_8310A428(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x830f8830
	if (ctx.cr0.eq) goto loc_830F8830;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r23,r8,-17912
	ctx.r23.s64 = ctx.r8.s64 + -17912;
	// addi r26,r9,-18548
	ctx.r26.s64 = ctx.r9.s64 + -18548;
	// addi r22,r10,-17956
	ctx.r22.s64 = ctx.r10.s64 + -17956;
	// addi r25,r11,-18456
	ctx.r25.s64 = ctx.r11.s64 + -18456;
loc_830F8758:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r28,r11,12,28,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x830f8788
	if (ctx.cr6.lt) goto loc_830F8788;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,910
	ctx.r7.s64 = 910;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F8784;
	sub_831034D8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830F8788:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f8820
	if (ctx.cr6.eq) goto loc_830F8820;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_830F879C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f880c
	if (ctx.cr0.eq) goto loc_830F880C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,20,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFF;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830f87f0
	if (ctx.cr6.lt) goto loc_830F87F0;
	// beq cr6,0x830f880c
	if (ctx.cr6.eq) goto loc_830F880C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x830f87e8
	if (ctx.cr6.lt) goto loc_830F87E8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1006
	ctx.r7.s64 = 1006;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x830F87E0;
	sub_831034D8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x830f880c
	goto loc_830F880C;
loc_830F87E8:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x830f880c
	goto loc_830F880C;
loc_830F87F0:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_830F880C:
	// rlwinm. r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x830f879c
	if (!ctx.cr0.eq) goto loc_830F879C;
loc_830F8820:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bne 0x830f8758
	if (!ctx.cr0.eq) goto loc_830F8758;
loc_830F8830:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_830F883C"))) PPC_WEAK_FUNC(sub_830F883C);
PPC_FUNC_IMPL(__imp__sub_830F883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8840"))) PPC_WEAK_FUNC(sub_830F8840);
PPC_FUNC_IMPL(__imp__sub_830F8840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830F8848;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f8870
	if (ctx.cr0.eq) goto loc_830F8870;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2932
	ctx.r3.u64 = ctx.r3.u64 | 2932;
	// b 0x830f8910
	goto loc_830F8910;
loc_830F8870:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mulli r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 * 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4d88
	ctx.lr = 0x830F8884;
	sub_821F4D88(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x830f8898
	if (!ctx.cr0.eq) goto loc_830F8898;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830f8910
	goto loc_830F8910;
loc_830F8898:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x830f8904
	if (!ctx.cr6.gt) goto loc_830F8904;
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
	// addi r6,r31,328
	ctx.r6.s64 = ctx.r31.s64 + 328;
loc_830F88B4:
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// rotlwi r10,r4,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// addi r10,r10,584
	ctx.r10.s64 = ctx.r10.s64 + 584;
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_830F88DC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x830f88dc
	if (!ctx.cr0.eq) goto loc_830F88DC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830f88b4
	if (ctx.cr6.lt) goto loc_830F88B4;
loc_830F8904:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_830F8910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830F8918"))) PPC_WEAK_FUNC(sub_830F8918);
PPC_FUNC_IMPL(__imp__sub_830F8918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x830F8920;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x830f894c
	if (!ctx.cr6.eq) goto loc_830F894C;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b970d0
	ctx.lr = 0x830F894C;
	sub_82B970D0(ctx, base);
loc_830F894C:
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_830F8958:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83109198
	ctx.lr = 0x830F8968;
	sub_83109198(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830f8a78
	if (!ctx.cr6.eq) goto loc_830F8A78;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x830f8980
	if (ctx.cr6.eq) goto loc_830F8980;
	// bl 0x82cbbb58
	ctx.lr = 0x830F8980;
	sub_82CBBB58(ctx, base);
loc_830F8980:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x830f89ac
	if (ctx.cr6.eq) goto loc_830F89AC;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830f89b0
	if (ctx.cr6.eq) goto loc_830F89B0;
loc_830F89AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830F89B0:
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r1,164
	ctx.r31.s64 = ctx.r1.s64 + 164;
loc_830F89BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,-16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f8a50
	if (ctx.cr6.eq) goto loc_830F8A50;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x830f89e0
	if (!ctx.cr6.eq) goto loc_830F89E0;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x830f8a44
	if (ctx.cr6.eq) goto loc_830F8A44;
loc_830F89E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f89fc
	if (ctx.cr6.eq) goto loc_830F89FC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b97038
	ctx.lr = 0x830F89F8;
	sub_82B97038(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_830F89FC:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x830f7310
	ctx.lr = 0x830F8A20;
	sub_830F7310(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r6,r11,4,0,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r6.u64 & 0xFFFFFFFF0000000F);
loc_830F8A44:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r25
	ctx.r11.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r25.u8 & 0x3F));
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_830F8A50:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x830f89bc
	if (ctx.cr6.lt) goto loc_830F89BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f8a78
	if (ctx.cr6.eq) goto loc_830F8A78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b97038
	ctx.lr = 0x830F8A78;
	sub_82B97038(ctx, base);
loc_830F8A78:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x830f8958
	if (ctx.cr6.lt) goto loc_830F8958;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_830F8A8C"))) PPC_WEAK_FUNC(sub_830F8A8C);
PPC_FUNC_IMPL(__imp__sub_830F8A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8A90"))) PPC_WEAK_FUNC(sub_830F8A90);
PPC_FUNC_IMPL(__imp__sub_830F8A90) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830f8bd0
	if (ctx.cr0.eq) goto loc_830F8BD0;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x830f8b78
	if (ctx.cr0.eq) goto loc_830F8B78;
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830f8af0
	if (ctx.cr0.eq) goto loc_830F8AF0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830f8ae4
	if (!ctx.cr6.eq) goto loc_830F8AE4;
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r10,r10,12,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1F;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwimi r8,r10,14,16,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xC000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_830F8AE4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82b97130
	ctx.lr = 0x830F8AEC;
	sub_82B97130(ctx, base);
	// b 0x830f8c10
	goto loc_830F8C10;
loc_830F8AF0:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830f8b68
	if (ctx.cr6.eq) goto loc_830F8B68;
loc_830F8B00:
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x830f8b1c
	if (ctx.cr6.eq) goto loc_830F8B1C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830f8b00
	if (!ctx.cr6.eq) goto loc_830F8B00;
loc_830F8B1C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830f8b68
	if (ctx.cr6.eq) goto loc_830F8B68;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,209
	ctx.r8.s64 = 209;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r8,3,20,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF000);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,24,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// rlwinm r5,r10,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// bl 0x82b971e8
	ctx.lr = 0x830F8B64;
	sub_82B971E8(ctx, base);
	// b 0x830f8c10
	goto loc_830F8C10;
loc_830F8B68:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82b97188
	ctx.lr = 0x830F8B74;
	sub_82B97188(ctx, base);
	// b 0x830f8c10
	goto loc_830F8C10;
loc_830F8B78:
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830f8bc4
	if (ctx.cr0.eq) goto loc_830F8BC4;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r9,63
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 63, ctx.xer);
	// bne cr6,0x830f8bc4
	if (!ctx.cr6.eq) goto loc_830F8BC4;
	// lbz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-241
	ctx.r7.s64 = -15794176;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r8,-17884
	ctx.r8.s64 = ctx.r8.s64 + -17884;
	// lis r6,-16
	ctx.r6.s64 = -1048576;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r7,r9,20,8,11
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xF00000) | (ctx.r7.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r6,r9,16,12,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xF0000) | (ctx.r6.u64 & 0xFFFFFFFFFFF0FFFF);
	// and r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_830F8BC4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82b97200
	ctx.lr = 0x830F8BCC;
	sub_82B97200(ctx, base);
	// b 0x830f8c10
	goto loc_830F8C10;
loc_830F8BD0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830f8c08
	if (ctx.cr0.eq) goto loc_830F8C08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_830F8C08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b97218
	ctx.lr = 0x830F8C10;
	sub_82B97218(ctx, base);
loc_830F8C10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8C20"))) PPC_WEAK_FUNC(sub_830F8C20);
PPC_FUNC_IMPL(__imp__sub_830F8C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x830F8C28;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x830f8d10
	if (!ctx.cr6.lt) goto loc_830F8D10;
loc_830F8C58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r22,r9,16,16,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r21,r9,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r3,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r22,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r21,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x831033e8
	ctx.lr = 0x830F8CD4;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830f8ce4
	if (!ctx.cr0.gt) goto loc_830F8CE4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x830f8d60
	if (!ctx.cr6.gt) goto loc_830F8D60;
loc_830F8CE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x831033e8
	ctx.lr = 0x830F8CF4;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830f8d04
	if (!ctx.cr0.gt) goto loc_830F8D04;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x830f8d74
	if (!ctx.cr6.gt) goto loc_830F8D74;
loc_830F8D04:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x830f8c58
	if (ctx.cr6.lt) goto loc_830F8C58;
loc_830F8D10:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r30,r11
	ctx.r3.u32 = ctx.r30.u32 / ctx.r11.u32;
loc_830F8D18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r5,r10,-30064
	ctx.r5.s64 = ctx.r10.s64 + -30064;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f81d8
	ctx.lr = 0x830F8D58;
	sub_830F81D8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_830F8D60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_830F8D64:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831033e8
	ctx.lr = 0x830F8D70;
	sub_831033E8(ctx, base);
	// b 0x830f8d18
	goto loc_830F8D18;
loc_830F8D74:
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// b 0x830f8d64
	goto loc_830F8D64;
}

__attribute__((alias("__imp__sub_830F8D7C"))) PPC_WEAK_FUNC(sub_830F8D7C);
PPC_FUNC_IMPL(__imp__sub_830F8D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8D80"))) PPC_WEAK_FUNC(sub_830F8D80);
PPC_FUNC_IMPL(__imp__sub_830F8D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x830F8D88;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,4684
	ctx.r3.s64 = 4684;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x821f4d88
	ctx.lr = 0x830F8DC4;
	sub_821F4D88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830f8dd8
	if (!ctx.cr0.eq) goto loc_830F8DD8;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x830f8e88
	goto loc_830F8E88;
loc_830F8DD8:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// xori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 ^ 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f8610
	ctx.lr = 0x830F8DFC;
	sub_830F8610(ctx, base);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,31152
	ctx.r5.s64 = ctx.r11.s64 + 31152;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f81d8
	ctx.lr = 0x830F8E1C;
	sub_830F81D8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f8840
	ctx.lr = 0x830F8E2C;
	sub_830F8840(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x830f8e68
	if (ctx.cr0.lt) goto loc_830F8E68;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,20
	ctx.r10.s64 = 20;
	// divwu. r29,r11,r10
	ctx.r29.u32 = ctx.r11.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830f8e68
	if (ctx.cr0.eq) goto loc_830F8E68;
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
loc_830F8E4C:
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b96f48
	ctx.lr = 0x830F8E5C;
	sub_82B96F48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x830f8e4c
	if (!ctx.cr0.eq) goto loc_830F8E4C;
loc_830F8E68:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5f18
	ctx.lr = 0x830F8E74;
	sub_821F5F18(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830f8e88
	if (ctx.cr6.eq) goto loc_830F8E88;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f5f18
	ctx.lr = 0x830F8E88;
	sub_821F5F18(ctx, base);
loc_830F8E88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_830F8E94"))) PPC_WEAK_FUNC(sub_830F8E94);
PPC_FUNC_IMPL(__imp__sub_830F8E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8E98"))) PPC_WEAK_FUNC(sub_830F8E98);
PPC_FUNC_IMPL(__imp__sub_830F8E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x830F8EA0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82ca3190
	ctx.lr = 0x830F8ED0;
	sub_82CA3190(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// bge cr6,0x830f9104
	if (!ctx.cr6.lt) goto loc_830F9104;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,-17876
	ctx.r24.s64 = ctx.r11.s64 + -17876;
loc_830F8F18:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x830f9104
	if (ctx.cr6.eq) goto loc_830F9104;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x830f90a0
	if (ctx.cr6.eq) goto loc_830F90A0;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x830f9024
	if (ctx.cr6.eq) goto loc_830F9024;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x830f8fbc
	if (ctx.cr6.eq) goto loc_830F8FBC;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// beq cr6,0x830f8f60
	if (ctx.cr6.eq) goto loc_830F8F60;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x830f9104
	if (!ctx.cr6.eq) goto loc_830F9104;
	// rlwinm r10,r9,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x830f90fc
	goto loc_830F90FC;
loc_830F8F60:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r4,256
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 256, ctx.xer);
	// bge cr6,0x830f9110
	if (!ctx.cr6.lt) goto loc_830F9110;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830f911c
	if (!ctx.cr0.eq) goto loc_830F911C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x82b96f48
	ctx.lr = 0x830F8FB4;
	sub_82B96F48(ctx, base);
loc_830F8FB4:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x830f90fc
	goto loc_830F90FC;
loc_830F8FBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x830f9128
	if (!ctx.cr6.lt) goto loc_830F9128;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x830f9134
	if (!ctx.cr0.eq) goto loc_830F9134;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x830f9014
	if (ctx.cr6.eq) goto loc_830F9014;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_830F9014:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b96ec8
	ctx.lr = 0x830F9020;
	sub_82B96EC8(ctx, base);
	// b 0x830f8fb4
	goto loc_830F8FB4;
loc_830F9024:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x830f9140
	if (!ctx.cr6.lt) goto loc_830F9140;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x830f914c
	if (!ctx.cr0.eq) goto loc_830F914C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x830f907c
	if (ctx.cr6.eq) goto loc_830F907C;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
loc_830F907C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r7,4
	ctx.r31.s64 = ctx.r7.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9094
	if (!ctx.cr6.eq) goto loc_830F9094;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_830F9094:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b96e48
	ctx.lr = 0x830F909C;
	sub_82B96E48(ctx, base);
	// b 0x830f90fc
	goto loc_830F90FC;
loc_830F90A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,2560
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2560, ctx.xer);
	// bne cr6,0x830f90fc
	if (!ctx.cr6.eq) goto loc_830F90FC;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x830f90fc
	if (!ctx.cr6.lt) goto loc_830F90FC;
	// rlwinm r10,r9,5,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x7;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x830f90fc
	if (ctx.cr6.lt) goto loc_830F90FC;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x830f90fc
	if (ctx.cr6.gt) goto loc_830F90FC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x830f90f0
	if (!ctx.cr6.eq) goto loc_830F90F0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_830F90F0:
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// stbx r10,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
loc_830F90FC:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x830f8f18
	if (ctx.cr6.lt) goto loc_830F8F18;
loc_830F9104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F9108:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_830F9110:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2935
	ctx.r3.u64 = ctx.r3.u64 | 2935;
	// b 0x830f9108
	goto loc_830F9108;
loc_830F911C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2944
	ctx.r3.u64 = ctx.r3.u64 | 2944;
	// b 0x830f9108
	goto loc_830F9108;
loc_830F9128:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2934
	ctx.r3.u64 = ctx.r3.u64 | 2934;
	// b 0x830f9108
	goto loc_830F9108;
loc_830F9134:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2943
	ctx.r3.u64 = ctx.r3.u64 | 2943;
	// b 0x830f9108
	goto loc_830F9108;
loc_830F9140:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2933
	ctx.r3.u64 = ctx.r3.u64 | 2933;
	// b 0x830f9108
	goto loc_830F9108;
loc_830F914C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2942
	ctx.r3.u64 = ctx.r3.u64 | 2942;
	// b 0x830f9108
	goto loc_830F9108;
}

__attribute__((alias("__imp__sub_830F9158"))) PPC_WEAK_FUNC(sub_830F9158);
PPC_FUNC_IMPL(__imp__sub_830F9158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x830F9160;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// bl 0x83109090
	ctx.lr = 0x830F918C;
	sub_83109090(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x830f91d8
	if (!ctx.cr6.lt) goto loc_830F91D8;
loc_830F91AC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831033e8
	ctx.lr = 0x830F91BC;
	sub_831033E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830f91cc
	if (!ctx.cr0.gt) goto loc_830F91CC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x830f921c
	if (!ctx.cr6.gt) goto loc_830F921C;
loc_830F91CC:
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x830f91ac
	if (ctx.cr6.lt) goto loc_830F91AC;
loc_830F91D8:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r29,r11
	ctx.r3.u32 = ctx.r29.u32 / ctx.r11.u32;
loc_830F91E0:
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// rlwinm. r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq 0x830f9204
	if (ctx.cr0.eq) goto loc_830F9204;
loc_830F91F0:
	// lwbrx r9,0,r11
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x830f91f0
	if (!ctx.cr0.eq) goto loc_830F91F0;
loc_830F9204:
	// bl 0x82b97a80
	ctx.lr = 0x830F9208;
	sub_82B97A80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830f9230
	if (!ctx.cr0.eq) goto loc_830F9230;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x830f9350
	goto loc_830F9350;
loc_830F921C:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831033e8
	ctx.lr = 0x830F922C;
	sub_831033E8(ctx, base);
	// b 0x830f91e0
	goto loc_830F91E0;
loc_830F9230:
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// li r4,50
	ctx.r4.s64 = 50;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x830f9244
	if (ctx.cr6.eq) goto loc_830F9244;
	// li r4,54
	ctx.r4.s64 = 54;
loc_830F9244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b96d48
	ctx.lr = 0x830F924C;
	sub_82B96D48(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f8918
	ctx.lr = 0x830F925C;
	sub_830F8918(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830f8d80
	ctx.lr = 0x830F9284;
	sub_830F8D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x830f9350
	if (ctx.cr0.lt) goto loc_830F9350;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f8e98
	ctx.lr = 0x830F92A4;
	sub_830F8E98(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x830f9350
	if (ctx.cr0.lt) goto loc_830F9350;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x830f92f4
	if (ctx.cr6.eq) goto loc_830F92F4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F92C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x830f92f4
	if (ctx.cr0.eq) goto loc_830F92F4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F92E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b96fe0
	ctx.lr = 0x830F92F4;
	sub_82B96FE0(ctx, base);
loc_830F92F4:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f8438
	ctx.lr = 0x830F9314;
	sub_830F8438(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x830f8c20
	ctx.lr = 0x830F9338;
	sub_830F8C20(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x830f9350
	if (ctx.cr6.eq) goto loc_830F9350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x82b97220
	ctx.lr = 0x830F9350;
	sub_82B97220(ctx, base);
loc_830F9350:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_830F935C"))) PPC_WEAK_FUNC(sub_830F935C);
PPC_FUNC_IMPL(__imp__sub_830F935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9360"))) PPC_WEAK_FUNC(sub_830F9360);
PPC_FUNC_IMPL(__imp__sub_830F9360) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x830f93f8
	goto loc_830F93F8;
loc_830F9380:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82b97430
	ctx.lr = 0x830F938C;
	sub_82B97430(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f93f4
	if (ctx.cr0.eq) goto loc_830F93F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f9418
	if (ctx.cr6.eq) goto loc_830F9418;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x830f93d4
	if (!ctx.cr6.gt) goto loc_830F93D4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x830f93c8
	if (ctx.cr6.eq) goto loc_830F93C8;
	// ble cr6,0x830f9418
	if (!ctx.cr6.gt) goto loc_830F9418;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x830f93d4
	if (!ctx.cr6.gt) goto loc_830F93D4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x830f9418
	if (!ctx.cr6.eq) goto loc_830F9418;
	// b 0x830f93f4
	goto loc_830F93F4;
loc_830F93C8:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f9418
	if (ctx.cr0.eq) goto loc_830F9418;
	// b 0x830f93f4
	goto loc_830F93F4;
loc_830F93D4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r10,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830f940c
	if (!ctx.cr0.eq) goto loc_830F940C;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,16468
	ctx.r11.u64 = ctx.r11.u64 & 16468;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830f9418
	if (!ctx.cr0.eq) goto loc_830F9418;
loc_830F93F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830F93F8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82b97300
	ctx.lr = 0x830F9400;
	sub_82B97300(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x830f9380
	if (ctx.cr6.gt) goto loc_830F9380;
	// b 0x830f9418
	goto loc_830F9418;
loc_830F940C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_830F9418:
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

__attribute__((alias("__imp__sub_830F9430"))) PPC_WEAK_FUNC(sub_830F9430);
PPC_FUNC_IMPL(__imp__sub_830F9430) {
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
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F947C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_830F949C"))) PPC_WEAK_FUNC(sub_830F949C);
PPC_FUNC_IMPL(__imp__sub_830F949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F94A0"))) PPC_WEAK_FUNC(sub_830F94A0);
PPC_FUNC_IMPL(__imp__sub_830F94A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x830F94A8;
	sub_82CA2BEC(ctx, base);
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
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F94BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830f950c
	if (ctx.cr6.eq) goto loc_830F950C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x830f94fc
	if (ctx.cr6.eq) goto loc_830F94FC;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// cmplwi cr6,r11,511
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 511, ctx.xer);
	// blt cr6,0x830f9504
	if (ctx.cr6.lt) goto loc_830F9504;
loc_830F94FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9430
	ctx.lr = 0x830F9504;
	sub_830F9430(ctx, base);
loc_830F9504:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x830f94bc
	if (!ctx.cr6.lt) goto loc_830F94BC;
loc_830F950C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_830F9514"))) PPC_WEAK_FUNC(sub_830F9514);
PPC_FUNC_IMPL(__imp__sub_830F9514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9518"))) PPC_WEAK_FUNC(sub_830F9518);
PPC_FUNC_IMPL(__imp__sub_830F9518) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f94a0
	sub_830F94A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F951C"))) PPC_WEAK_FUNC(sub_830F951C);
PPC_FUNC_IMPL(__imp__sub_830F951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9520"))) PPC_WEAK_FUNC(sub_830F9520);
PPC_FUNC_IMPL(__imp__sub_830F9520) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82caacc0
	ctx.lr = 0x830F9570;
	sub_82CAACC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r10,2143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2143, ctx.r10.u8);
	// bge 0x830f958c
	if (!ctx.cr0.lt) goto loc_830F958C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x830f9638
	goto loc_830F9638;
loc_830F958C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x830f9638
	if (!ctx.cr6.gt) goto loc_830F9638;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830f9608
	if (ctx.cr6.eq) goto loc_830F9608;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x830f95d8
	if (ctx.cr6.eq) goto loc_830F95D8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x830f95d8
	if (ctx.cr6.eq) goto loc_830F95D8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x830f95d0
	if (ctx.cr6.lt) goto loc_830F95D0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x830f95d8
	if (!ctx.cr6.gt) goto loc_830F95D8;
loc_830F95D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830f95dc
	goto loc_830F95DC;
loc_830F95D8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_830F95DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f9608
	if (!ctx.cr0.eq) goto loc_830F9608;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F9600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830f9628
	if (ctx.cr0.lt) goto loc_830F9628;
loc_830F9608:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830f9638
	if (!ctx.cr0.lt) goto loc_830F9638;
loc_830F9628:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830f9638
	if (ctx.cr6.lt) goto loc_830F9638;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_830F9638:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_830F9650"))) PPC_WEAK_FUNC(sub_830F9650);
PPC_FUNC_IMPL(__imp__sub_830F9650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x830F9658;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830f9734
	if (!ctx.cr0.eq) goto loc_830F9734;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830f9734
	if (ctx.cr0.eq) goto loc_830F9734;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// rlwinm. r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r27,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r27.u64);
	// clrlwi r30,r10,20
	ctx.r30.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r31,r10,16,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFF;
	// or r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 | ctx.r8.u64;
	// beq 0x830f9734
	if (ctx.cr0.eq) goto loc_830F9734;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_830F96B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b97460
	ctx.lr = 0x830F96C8;
	sub_82B97460(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r4,r31,31
	ctx.r4.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r5,r31,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x1;
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x830f7ad8
	ctx.lr = 0x830F96E8;
	sub_830F7AD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f970c
	if (ctx.cr0.eq) goto loc_830F970C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r11.u64 & 0xFFF0000);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_830F970C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x830f96b8
	if (!ctx.cr0.eq) goto loc_830F96B8;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x830f9734
	if (ctx.cr6.eq) goto loc_830F9734;
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9360
	ctx.lr = 0x830F9734;
	sub_830F9360(ctx, base);
loc_830F9734:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_830F973C"))) PPC_WEAK_FUNC(sub_830F973C);
PPC_FUNC_IMPL(__imp__sub_830F973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9740"))) PPC_WEAK_FUNC(sub_830F9740);
PPC_FUNC_IMPL(__imp__sub_830F9740) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830f977c
	if (!ctx.cr0.lt) goto loc_830F977C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830f977c
	if (ctx.cr6.lt) goto loc_830F977C;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_830F977C:
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

__attribute__((alias("__imp__sub_830F9790"))) PPC_WEAK_FUNC(sub_830F9790);
PPC_FUNC_IMPL(__imp__sub_830F9790) {
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
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830f97bc
	if (!ctx.cr6.eq) goto loc_830F97BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-17856
	ctx.r4.s64 = ctx.r11.s64 + -17856;
	// b 0x830f982c
	goto loc_830F982C;
loc_830F97BC:
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830f9834
	if (!ctx.cr6.eq) goto loc_830F9834;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830f97e0
	if (!ctx.cr6.eq) goto loc_830F97E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2304
	ctx.r4.s64 = ctx.r11.s64 + 2304;
	// b 0x830f982c
	goto loc_830F982C;
loc_830F97E0:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830f97f8
	if (!ctx.cr6.eq) goto loc_830F97F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-17864
	ctx.r4.s64 = ctx.r11.s64 + -17864;
	// b 0x830f982c
	goto loc_830F982C;
loc_830F97F8:
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830f9810
	if (!ctx.cr6.eq) goto loc_830F9810;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2312
	ctx.r4.s64 = ctx.r11.s64 + 2312;
	// b 0x830f982c
	goto loc_830F982C;
loc_830F9810:
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830f9824
	if (ctx.cr0.eq) goto loc_830F9824;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2296
	ctx.r4.s64 = ctx.r11.s64 + 2296;
	// b 0x830f982c
	goto loc_830F982C;
loc_830F9824:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2288
	ctx.r4.s64 = ctx.r11.s64 + 2288;
loc_830F982C:
	// bl 0x830f9520
	ctx.lr = 0x830F9830;
	sub_830F9520(ctx, base);
	// b 0x830f9848
	goto loc_830F9848;
loc_830F9834:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-17872
	ctx.r4.s64 = ctx.r11.s64 + -17872;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x830f9520
	ctx.lr = 0x830F9848;
	sub_830F9520(ctx, base);
loc_830F9848:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9858"))) PPC_WEAK_FUNC(sub_830F9858);
PPC_FUNC_IMPL(__imp__sub_830F9858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x830F9860;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830f98a4
	if (ctx.cr6.lt) goto loc_830F98A4;
	// beq cr6,0x830f989c
	if (ctx.cr6.eq) goto loc_830F989C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x830f9894
	if (ctx.cr6.lt) goto loc_830F9894;
	// bne cr6,0x830f98ac
	if (!ctx.cr6.eq) goto loc_830F98AC;
	// li r10,115
	ctx.r10.s64 = 115;
	// b 0x830f98b0
	goto loc_830F98B0;
loc_830F9894:
	// li r10,99
	ctx.r10.s64 = 99;
	// b 0x830f98b0
	goto loc_830F98B0;
loc_830F989C:
	// li r10,105
	ctx.r10.s64 = 105;
	// b 0x830f98b0
	goto loc_830F98B0;
loc_830F98A4:
	// li r10,98
	ctx.r10.s64 = 98;
	// b 0x830f98b0
	goto loc_830F98B0;
loc_830F98AC:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
loc_830F98B0:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f98d4
	if (!ctx.cr6.eq) goto loc_830F98D4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-17744
	ctx.r4.s64 = ctx.r11.s64 + -17744;
	// bl 0x8223f888
	ctx.lr = 0x830F98D0;
	sub_8223F888(ctx, base);
	// b 0x830f9904
	goto loc_830F9904;
loc_830F98D4:
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830f98f0
	if (!ctx.cr6.eq) goto loc_830F98F0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-17752
	ctx.r4.s64 = ctx.r11.s64 + -17752;
	// bl 0x8223f888
	ctx.lr = 0x830F98EC;
	sub_8223F888(ctx, base);
	// b 0x830f9904
	goto loc_830F9904;
loc_830F98F0:
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r9,-17760
	ctx.r4.s64 = ctx.r9.s64 + -17760;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x8223f888
	ctx.lr = 0x830F9904;
	sub_8223F888(ctx, base);
loc_830F9904:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r21,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r21.u8);
	// addi r3,r1,241
	ctx.r3.s64 = ctx.r1.s64 + 241;
	// bl 0x82ca3190
	ctx.lr = 0x830F991C;
	sub_82CA3190(ctx, base);
	// lwz r31,44(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830f9b44
	if (ctx.cr6.eq) goto loc_830F9B44;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f9b44
	if (ctx.cr6.eq) goto loc_830F9B44;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830f9b44
	if (!ctx.cr6.eq) goto loc_830F9B44;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9b44
	if (!ctx.cr6.eq) goto loc_830F9B44;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-17768
	ctx.r4.s64 = ctx.r11.s64 + -17768;
	// bl 0x8223f888
	ctx.lr = 0x830F995C;
	sub_8223F888(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830f9b0c
	if (!ctx.cr6.gt) goto loc_830F9B0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// addi r24,r11,5656
	ctx.r24.s64 = ctx.r11.s64 + 5656;
	// addi r28,r10,-17792
	ctx.r28.s64 = ctx.r10.s64 + -17792;
	// addi r27,r9,-17808
	ctx.r27.s64 = ctx.r9.s64 + -17808;
	// addi r30,r8,-6332
	ctx.r30.s64 = ctx.r8.s64 + -6332;
	// addi r26,r7,5664
	ctx.r26.s64 = ctx.r7.s64 + 5664;
	// addi r25,r6,3900
	ctx.r25.s64 = ctx.r6.s64 + 3900;
	// addi r29,r5,7908
	ctx.r29.s64 = ctx.r5.s64 + 7908;
loc_830F99A4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x830f99e0
	if (ctx.cr6.eq) goto loc_830F99E0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_830F99B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830f99b4
	if (!ctx.cr6.eq) goto loc_830F99B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_830F99C8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x830f99c8
	if (!ctx.cr6.eq) goto loc_830F99C8;
loc_830F99E0:
	// li r5,127
	ctx.r5.s64 = 127;
	// stb r21,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r21.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x82ca3190
	ctx.lr = 0x830F99F4;
	sub_82CA3190(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830f9aa4
	if (ctx.cr6.lt) goto loc_830F9AA4;
	// beq cr6,0x830f9a80
	if (ctx.cr6.eq) goto loc_830F9A80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x830f9a20
	if (ctx.cr6.lt) goto loc_830F9A20;
	// bne cr6,0x830f9ac8
	if (!ctx.cr6.eq) goto loc_830F9AC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8223f888
	ctx.lr = 0x830F9A1C;
	sub_8223F888(ctx, base);
	// b 0x830f9ac8
	goto loc_830F9AC8;
loc_830F9A20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8223f888
	ctx.lr = 0x830F9A7C;
	sub_8223F888(ctx, base);
	// b 0x830f9a9c
	goto loc_830F9A9C;
loc_830F9A80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8223f888
	ctx.lr = 0x830F9A9C;
	sub_8223F888(ctx, base);
loc_830F9A9C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x830f9ac8
	goto loc_830F9AC8;
loc_830F9AA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9ab8
	if (!ctx.cr6.eq) goto loc_830F9AB8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_830F9AB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8223f888
	ctx.lr = 0x830F9AC4;
	sub_8223F888(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_830F9AC8:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_830F9AD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830f9ad0
	if (!ctx.cr6.eq) goto loc_830F9AD0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_830F9AE4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x830f9ae4
	if (!ctx.cr6.eq) goto loc_830F9AE4;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830f99a4
	if (ctx.cr6.lt) goto loc_830F99A4;
loc_830F9B0C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r10,-17812
	ctx.r10.s64 = ctx.r10.s64 + -17812;
loc_830F9B18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830f9b18
	if (!ctx.cr6.eq) goto loc_830F9B18;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_830F9B2C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x830f9b2c
	if (!ctx.cr6.eq) goto loc_830F9B2C;
loc_830F9B44:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r9,20(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,10168
	ctx.r10.s64 = ctx.r10.s64 + 10168;
	// addi r7,r11,3224
	ctx.r7.s64 = ctx.r11.s64 + 3224;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x830f9b78
	goto loc_830F9B78;
loc_830F9B64:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830f9b9c
	if (ctx.cr6.eq) goto loc_830F9B9C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_830F9B78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830f9b64
	if (!ctx.cr6.eq) goto loc_830F9B64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_830F9B84:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// addi r10,r11,10112
	ctx.r10.s64 = ctx.r11.s64 + 10112;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x830f9bb8
	goto loc_830F9BB8;
loc_830F9B9C:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x830f9b84
	goto loc_830F9B84;
loc_830F9BA4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830f9bc4
	if (ctx.cr6.eq) goto loc_830F9BC4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_830F9BB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830f9ba4
	if (!ctx.cr6.eq) goto loc_830F9BA4;
	// b 0x830f9bc8
	goto loc_830F9BC8;
loc_830F9BC4:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_830F9BC8:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lwz r8,24(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r4,r5,-17852
	ctx.r4.s64 = ctx.r5.s64 + -17852;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830f9520
	ctx.lr = 0x830F9BF0;
	sub_830F9520(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_830F9BF8"))) PPC_WEAK_FUNC(sub_830F9BF8);
PPC_FUNC_IMPL(__imp__sub_830F9BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x830F9C00;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x830F9C30;
	sub_82CA2C60(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r11,-19760
	ctx.r27.s64 = ctx.r11.s64 + -19760;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830f9c50
	if (ctx.cr6.eq) goto loc_830F9C50;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-17712
	ctx.r4.s64 = ctx.r11.s64 + -17712;
	// b 0x830f9c6c
	goto loc_830F9C6C;
loc_830F9C50:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f9c68
	if (ctx.cr6.eq) goto loc_830F9C68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-17724
	ctx.r4.s64 = ctx.r11.s64 + -17724;
	// b 0x830f9c6c
	goto loc_830F9C6C;
loc_830F9C68:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_830F9C6C:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8223f888
	ctx.lr = 0x830F9C84;
	sub_8223F888(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830f9cb8
	if (!ctx.cr6.eq) goto loc_830F9CB8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830f9dbc
	if (!ctx.cr6.eq) goto loc_830F9DBC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830f9858
	ctx.lr = 0x830F9CAC;
	sub_830F9858(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830f9db0
	if (ctx.cr6.eq) goto loc_830F9DB0;
loc_830F9CB8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-17732
	ctx.r4.s64 = ctx.r11.s64 + -17732;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8223f888
	ctx.lr = 0x830F9CD4;
	sub_8223F888(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830f7e58
	ctx.lr = 0x830F9CF4;
	sub_830F7E58(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830f9ee4
	if (ctx.cr6.eq) goto loc_830F9EE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r11,3224
	ctx.r30.s64 = ctx.r11.s64 + 3224;
	// addi r25,r10,-17740
	ctx.r25.s64 = ctx.r10.s64 + -17740;
loc_830F9D14:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8223f888
	ctx.lr = 0x830F9D24;
	sub_8223F888(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830f9d38
	if (!ctx.cr6.lt) goto loc_830F9D38;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_830F9D38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x830f9bf8
	ctx.lr = 0x830F9D60;
	sub_830F9BF8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x830f9da0
	if (ctx.cr6.eq) goto loc_830F9DA0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_830F9DA0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x830f9d14
	if (ctx.cr6.lt) goto loc_830F9D14;
	// b 0x830f9ee4
	goto loc_830F9EE4;
loc_830F9DB0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f9ee4
	if (ctx.cr6.eq) goto loc_830F9EE4;
loc_830F9DBC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8223f888
	ctx.lr = 0x830F9DD8;
	sub_8223F888(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x830f9ee4
	if (ctx.cr6.eq) goto loc_830F9EE4;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r10,-6348
	ctx.r27.s64 = ctx.r10.s64 + -6348;
	// addi r26,r11,3224
	ctx.r26.s64 = ctx.r11.s64 + 3224;
loc_830F9E04:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x830f7e58
	ctx.lr = 0x830F9E58;
	sub_830F7E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830f9e70
	if (!ctx.cr6.lt) goto loc_830F9E70;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_830F9E70:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x830f9bf8
	ctx.lr = 0x830F9E98;
	sub_830F9BF8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x830f9ed8
	if (ctx.cr6.eq) goto loc_830F9ED8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_830F9ED8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x830f9e04
	if (!ctx.cr0.eq) goto loc_830F9E04;
loc_830F9EE4:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_830F9EEC"))) PPC_WEAK_FUNC(sub_830F9EEC);
PPC_FUNC_IMPL(__imp__sub_830F9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9EF0"))) PPC_WEAK_FUNC(sub_830F9EF0);
PPC_FUNC_IMPL(__imp__sub_830F9EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830F9EF8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830f9f98
	if (ctx.cr6.eq) goto loc_830F9F98;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x830f9f24
	if (!ctx.cr6.gt) goto loc_830F9F24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830f9f9c
	goto loc_830F9F9C;
loc_830F9F24:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830f9f98
	if (ctx.cr6.eq) goto loc_830F9F98;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x830f9f98
	if (ctx.cr6.eq) goto loc_830F9F98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
loc_830F9F50:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// bl 0x830f7de8
	ctx.lr = 0x830F9F6C;
	sub_830F7DE8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f9bf8
	ctx.lr = 0x830F9F8C;
	sub_830F9BF8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x830f9f50
	if (!ctx.cr0.eq) goto loc_830F9F50;
loc_830F9F98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F9F9C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830F9FA4"))) PPC_WEAK_FUNC(sub_830F9FA4);
PPC_FUNC_IMPL(__imp__sub_830F9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9FA8"))) PPC_WEAK_FUNC(sub_830F9FA8);
PPC_FUNC_IMPL(__imp__sub_830F9FA8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830f9fe8
	if (ctx.cr6.eq) goto loc_830F9FE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r4,r10,-6332
	ctx.r4.s64 = ctx.r10.s64 + -6332;
	// bl 0x830f9520
	ctx.lr = 0x830F9FE0;
	sub_830F9520(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_830F9FE8:
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

__attribute__((alias("__imp__sub_830F9FFC"))) PPC_WEAK_FUNC(sub_830F9FFC);
PPC_FUNC_IMPL(__imp__sub_830F9FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA000"))) PPC_WEAK_FUNC(sub_830FA000);
PPC_FUNC_IMPL(__imp__sub_830FA000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x830FA008;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82b97300
	ctx.lr = 0x830FA018;
	sub_82B97300(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x830fa058
	if (ctx.cr0.eq) goto loc_830FA058;
loc_830FA024:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82b97430
	ctx.lr = 0x830FA030;
	sub_82B97430(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f9650
	ctx.lr = 0x830FA04C;
	sub_830F9650(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830fa024
	if (ctx.cr6.lt) goto loc_830FA024;
loc_830FA058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_830FA060"))) PPC_WEAK_FUNC(sub_830FA060);
PPC_FUNC_IMPL(__imp__sub_830FA060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x830FA068;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r11,-17884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17884);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fa0b4
	if (ctx.cr6.eq) goto loc_830FA0B4;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bne 0x830fa0b8
	if (!ctx.cr0.eq) goto loc_830FA0B8;
loc_830FA0B4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_830FA0B8:
	// li r5,448
	ctx.r5.s64 = 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82ca3190
	ctx.lr = 0x830FA0C8;
	sub_82CA3190(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// bl 0x830f72c0
	ctx.lr = 0x830FA0E0;
	sub_830F72C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x830fa3ac
	if (ctx.cr0.lt) goto loc_830FA3AC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83102fd8
	ctx.lr = 0x830FA118;
	sub_83102FD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x830f7f70
	ctx.lr = 0x830FA124;
	sub_830F7F70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fa138
	if (ctx.cr6.eq) goto loc_830FA138;
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2156
	ctx.r28.u64 = ctx.r28.u64 | 2156;
	// b 0x830fa3a4
	goto loc_830FA3A4;
loc_830FA138:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830FA148:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x830fa148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830FA148;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,29168
	ctx.r10.s64 = ctx.r10.s64 + 29168;
	// lis r7,-31985
	ctx.r7.s64 = -2096168960;
	// lis r9,-31985
	ctx.r9.s64 = -2096168960;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r10,r7,29256
	ctx.r10.s64 = ctx.r7.s64 + 29256;
	// addi r9,r9,29344
	ctx.r9.s64 = ctx.r9.s64 + 29344;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// lis r6,-32099
	ctx.r6.s64 = -2103640064;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lis r4,-31968
	ctx.r4.s64 = -2095054848;
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// lis r8,-31985
	ctx.r8.s64 = -2096168960;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r10,r4,-11496
	ctx.r10.s64 = ctx.r4.s64 + -11496;
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// addi r8,r8,29176
	ctx.r8.s64 = ctx.r8.s64 + 29176;
	// addi r9,r6,-6032
	ctx.r9.s64 = ctx.r6.s64 + -6032;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r5,-31985
	ctx.r5.s64 = -2096168960;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r9,r3,29352
	ctx.r9.s64 = ctx.r3.s64 + 29352;
	// addi r8,r5,29216
	ctx.r8.s64 = ctx.r5.s64 + 29216;
	// addi r11,r11,-11496
	ctx.r11.s64 = ctx.r11.s64 + -11496;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r30,-32060
	ctx.r30.s64 = -2101084160;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r29,-32060
	ctx.r29.s64 = -2101084160;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r28,-32099
	ctx.r28.s64 = -2103640064;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r9,r30,12696
	ctx.r9.s64 = ctx.r30.s64 + 12696;
	// addi r10,r29,12696
	ctx.r10.s64 = ctx.r29.s64 + 12696;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r11,r28,-6032
	ctx.r11.s64 = ctx.r28.s64 + -6032;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r27,50
	ctx.r27.s64 = 50;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8310a678
	ctx.lr = 0x830FA220;
	sub_8310A678(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831063f8
	ctx.lr = 0x830FA23C;
	sub_831063F8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830fa37c
	if (ctx.cr0.eq) goto loc_830FA37C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8310ae38
	ctx.lr = 0x830FA250;
	sub_8310AE38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831067c8
	ctx.lr = 0x830FA25C;
	sub_831067C8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fa2b0
	if (ctx.cr6.eq) goto loc_830FA2B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824f2cf0
	ctx.lr = 0x830FA278;
	sub_824F2CF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827942f8
	ctx.lr = 0x830FA284;
	sub_827942F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8310b608
	ctx.lr = 0x830FA28C;
	sub_8310B608(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310bfc8
	ctx.lr = 0x830FA2A8;
	sub_8310BFC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830fa2e4
	goto loc_830FA2E4;
loc_830FA2B0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f7bb0
	ctx.lr = 0x830FA2BC;
	sub_830F7BB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830fa2ec
	if (!ctx.cr0.eq) goto loc_830FA2EC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824c23d0
	ctx.lr = 0x830FA2CC;
	sub_824C23D0(ctx, base);
	// bl 0x827942f8
	ctx.lr = 0x830FA2D0;
	sub_827942F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8310b768
	ctx.lr = 0x830FA2D8;
	sub_8310B768(ctx, base);
	// bl 0x83108300
	ctx.lr = 0x830FA2DC;
	sub_83108300(ctx, base);
	// bl 0x831086a8
	ctx.lr = 0x830FA2E0;
	sub_831086A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_830FA2E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x830fa2f8
	if (ctx.cr6.eq) goto loc_830FA2F8;
loc_830FA2EC:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// b 0x830fa368
	goto loc_830FA368;
loc_830FA2F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,924(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,916(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830f9158
	ctx.lr = 0x830FA320;
	sub_830F9158(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x830fa358
	if (ctx.cr0.lt) goto loc_830FA358;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x830fa000
	ctx.lr = 0x830FA338;
	sub_830FA000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b974f0
	ctx.lr = 0x830FA340;
	sub_82B974F0(ctx, base);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b975d8
	ctx.lr = 0x830FA354;
	sub_82B975D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_830FA358:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830fa368
	if (ctx.cr6.eq) goto loc_830FA368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b96c90
	ctx.lr = 0x830FA368;
	sub_82B96C90(ctx, base);
loc_830FA368:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83106860
	ctx.lr = 0x830FA370;
	sub_83106860(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8310b180
	ctx.lr = 0x830FA378;
	sub_8310B180(ctx, base);
	// b 0x830fa388
	goto loc_830FA388;
loc_830FA37C:
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2156
	ctx.r28.u64 = ctx.r28.u64 | 2156;
	// bl 0x82cbbb58
	ctx.lr = 0x830FA388;
	sub_82CBBB58(ctx, base);
loc_830FA388:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830fa39c
	if (ctx.cr6.eq) goto loc_830FA39C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831064e0
	ctx.lr = 0x830FA39C;
	sub_831064E0(ctx, base);
loc_830FA39C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8310ac58
	ctx.lr = 0x830FA3A4;
	sub_8310AC58(ctx, base);
loc_830FA3A4:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x830f8180
	ctx.lr = 0x830FA3AC;
	sub_830F8180(ctx, base);
loc_830FA3AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_830FA3B8"))) PPC_WEAK_FUNC(sub_830FA3B8);
PPC_FUNC_IMPL(__imp__sub_830FA3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x830FA3C0;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// lwz r11,-17884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17884);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fa404
	if (ctx.cr6.eq) goto loc_830FA404;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bne 0x830fa408
	if (!ctx.cr0.eq) goto loc_830FA408;
loc_830FA404:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
loc_830FA408:
	// li r5,1860
	ctx.r5.s64 = 1860;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82ca3190
	ctx.lr = 0x830FA418;
	sub_82CA3190(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,33024
	ctx.r3.u64 = ctx.r3.u64 | 33024;
	// bl 0x821f4d88
	ctx.lr = 0x830FA428;
	sub_821F4D88(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r16,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r16.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830FA440:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x830fa440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830FA440;
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r21,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82ca3190
	ctx.lr = 0x830FA460;
	sub_82CA3190(ctx, base);
	// lhz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 2);
	// addi r10,r1,2176
	ctx.r10.s64 = ctx.r1.s64 + 2176;
	// lis r9,16392
	ctx.r9.s64 = 1074266112;
	// stw r10,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r10.u32);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// blt cr6,0x830fa484
	if (ctx.cr6.lt) goto loc_830FA484;
	// bl 0x82cbbb58
	ctx.lr = 0x830FA484;
	sub_82CBBB58(ctx, base);
loc_830FA484:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// b 0x830fa560
	goto loc_830FA560;
loc_830FA498:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 31, ctx.xer);
	// beq cr6,0x830fa4dc
	if (ctx.cr6.eq) goto loc_830FA4DC;
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// beq cr6,0x830fa558
	if (ctx.cr6.eq) goto loc_830FA558;
	// cmplwi cr6,r9,48
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 48, ctx.xer);
	// beq cr6,0x830fa4d4
	if (ctx.cr6.eq) goto loc_830FA4D4;
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// beq cr6,0x830fa4d4
	if (ctx.cr6.eq) goto loc_830FA4D4;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x830fa568
	if (!ctx.cr6.eq) goto loc_830FA568;
	// rlwinm r11,r10,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x830fa55c
	goto loc_830FA55C;
loc_830FA4D4:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// b 0x830fa55c
	goto loc_830FA55C;
loc_830FA4DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x830fa558
	if (!ctx.cr6.eq) goto loc_830FA558;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r11.u32);
	// blt cr6,0x830fa508
	if (ctx.cr6.lt) goto loc_830FA508;
	// bl 0x82cbbb58
	ctx.lr = 0x830FA508;
	sub_82CBBB58(ctx, base);
loc_830FA508:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r10,20,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r30,612(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
loc_830FA558:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_830FA55C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830FA560:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x830fa498
	if (!ctx.cr6.eq) goto loc_830FA498;
loc_830FA568:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8310c938
	ctx.lr = 0x830FA574;
	sub_8310C938(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// addi r9,r1,1136
	ctx.r9.s64 = ctx.r1.s64 + 1136;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8310e078
	ctx.lr = 0x830FA59C;
	sub_8310E078(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x830fa9c8
	if (ctx.cr0.lt) goto loc_830FA9C8;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x830fa5b4
	if (!ctx.cr6.gt) goto loc_830FA5B4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FA5B4;
	sub_82CBBB58(ctx, base);
loc_830FA5B4:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830FA5C4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x830fa5c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830FA5C4;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,29168
	ctx.r10.s64 = ctx.r10.s64 + 29168;
	// lis r7,-31985
	ctx.r7.s64 = -2096168960;
	// lis r9,-31985
	ctx.r9.s64 = -2096168960;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r10,r7,29256
	ctx.r10.s64 = ctx.r7.s64 + 29256;
	// addi r9,r9,29344
	ctx.r9.s64 = ctx.r9.s64 + 29344;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// lis r6,-32099
	ctx.r6.s64 = -2103640064;
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// lis r4,-31968
	ctx.r4.s64 = -2095054848;
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// lis r8,-31985
	ctx.r8.s64 = -2096168960;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r10,r4,-11496
	ctx.r10.s64 = ctx.r4.s64 + -11496;
	// std r22,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r22.u64);
	// addi r8,r8,29176
	ctx.r8.s64 = ctx.r8.s64 + 29176;
	// addi r9,r6,-6032
	ctx.r9.s64 = ctx.r6.s64 + -6032;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r5,-31985
	ctx.r5.s64 = -2096168960;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r9,r3,29352
	ctx.r9.s64 = ctx.r3.s64 + 29352;
	// addi r8,r5,29216
	ctx.r8.s64 = ctx.r5.s64 + 29216;
	// addi r11,r11,-11496
	ctx.r11.s64 = ctx.r11.s64 + -11496;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r31,-32060
	ctx.r31.s64 = -2101084160;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r30,-32060
	ctx.r30.s64 = -2101084160;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r29,-32099
	ctx.r29.s64 = -2103640064;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r9,r31,12696
	ctx.r9.s64 = ctx.r31.s64 + 12696;
	// addi r10,r30,12696
	ctx.r10.s64 = ctx.r30.s64 + 12696;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r11,r29,-6032
	ctx.r11.s64 = ctx.r29.s64 + -6032;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r28,50
	ctx.r28.s64 = 50;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8310a678
	ctx.lr = 0x830FA69C;
	sub_8310A678(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831063f8
	ctx.lr = 0x830FA6B8;
	sub_831063F8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x830fa994
	if (ctx.cr0.eq) goto loc_830FA994;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8310ae38
	ctx.lr = 0x830FA6CC;
	sub_8310AE38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831067c8
	ctx.lr = 0x830FA6D8;
	sub_831067C8(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fa710
	if (ctx.cr6.eq) goto loc_830FA710;
loc_830FA6EC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830f80c0
	ctx.lr = 0x830FA700;
	sub_830F80C0(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830fa6ec
	if (ctx.cr6.lt) goto loc_830FA6EC;
loc_830FA710:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fa760
	if (ctx.cr6.eq) goto loc_830FA760;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824f2cf0
	ctx.lr = 0x830FA728;
	sub_824F2CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x827942f8
	ctx.lr = 0x830FA734;
	sub_827942F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8310b608
	ctx.lr = 0x830FA73C;
	sub_8310B608(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310bfc8
	ctx.lr = 0x830FA758;
	sub_8310BFC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830fa794
	goto loc_830FA794;
loc_830FA760:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f7bb0
	ctx.lr = 0x830FA76C;
	sub_830F7BB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830fa79c
	if (!ctx.cr0.eq) goto loc_830FA79C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824c23d0
	ctx.lr = 0x830FA77C;
	sub_824C23D0(ctx, base);
	// bl 0x827942f8
	ctx.lr = 0x830FA780;
	sub_827942F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8310b768
	ctx.lr = 0x830FA788;
	sub_8310B768(ctx, base);
	// bl 0x83108300
	ctx.lr = 0x830FA78C;
	sub_83108300(ctx, base);
	// bl 0x831086a8
	ctx.lr = 0x830FA790;
	sub_831086A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_830FA794:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x830fa7a4
	if (ctx.cr6.eq) goto loc_830FA7A4;
loc_830FA79C:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_830FA7A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x830fa980
	if (ctx.cr6.lt) goto loc_830FA980;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830fa7fc
	if (!ctx.cr6.eq) goto loc_830FA7FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83109250
	ctx.lr = 0x830FA7C4;
	sub_83109250(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83108300
	ctx.lr = 0x830FA7CC;
	sub_83108300(ctx, base);
	// b 0x830fa7f4
	goto loc_830FA7F4;
loc_830FA7D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831086a8
	ctx.lr = 0x830FA7D8;
	sub_831086A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fa7e8
	if (!ctx.cr6.eq) goto loc_830FA7E8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830FA7E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108600
	ctx.lr = 0x830FA7F4;
	sub_83108600(ctx, base);
loc_830FA7F4:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830fa7d0
	if (!ctx.cr0.eq) goto loc_830FA7D0;
loc_830FA7FC:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821f4d88
	ctx.lr = 0x830FA80C;
	sub_821F4D88(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x830fa81c
	if (!ctx.cr0.eq) goto loc_830FA81C;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
loc_830FA81C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x830fa8a4
	if (ctx.cr6.lt) goto loc_830FA8A4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830fa8a0
	if (!ctx.cr6.eq) goto loc_830FA8A0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83109250
	ctx.lr = 0x830FA83C;
	sub_83109250(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83108300
	ctx.lr = 0x830FA844;
	sub_83108300(ctx, base);
	// b 0x830fa898
	goto loc_830FA898;
loc_830FA848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831086a8
	ctx.lr = 0x830FA850;
	sub_831086A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fa88c
	if (!ctx.cr6.eq) goto loc_830FA88C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,356
	ctx.r10.s64 = ctx.r1.s64 + 356;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r9,r11,20,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r9,r11,0,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_830FA88C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108600
	ctx.lr = 0x830FA898;
	sub_83108600(ctx, base);
loc_830FA898:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830fa848
	if (!ctx.cr0.eq) goto loc_830FA848;
loc_830FA8A0:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
loc_830FA8A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// blt cr6,0x830fa96c
	if (ctx.cr6.lt) goto loc_830FA96C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,2668(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2668);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,2660(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2660);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f9158
	ctx.lr = 0x830FA8D4;
	sub_830F9158(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x830fa95c
	if (ctx.cr0.lt) goto loc_830FA95C;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x830fa000
	ctx.lr = 0x830FA8EC;
	sub_830FA000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b97400
	ctx.lr = 0x830FA8F4;
	sub_82B97400(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// beq 0x830fa93c
	if (ctx.cr0.eq) goto loc_830FA93C;
loc_830FA900:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b97460
	ctx.lr = 0x830FA910;
	sub_82B97460(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fa930
	if (ctx.cr6.eq) goto loc_830FA930;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fa930
	if (ctx.cr0.eq) goto loc_830FA930;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_830FA930:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830fa900
	if (ctx.cr6.lt) goto loc_830FA900;
loc_830FA93C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b974f0
	ctx.lr = 0x830FA944;
	sub_82B974F0(ctx, base);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b975d8
	ctx.lr = 0x830FA958;
	sub_82B975D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_830FA95C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830fa96c
	if (ctx.cr6.eq) goto loc_830FA96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b96c90
	ctx.lr = 0x830FA96C;
	sub_82B96C90(ctx, base);
loc_830FA96C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830fa980
	if (ctx.cr6.eq) goto loc_830FA980;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f5f18
	ctx.lr = 0x830FA980;
	sub_821F5F18(ctx, base);
loc_830FA980:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83106860
	ctx.lr = 0x830FA988;
	sub_83106860(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8310b180
	ctx.lr = 0x830FA990;
	sub_8310B180(ctx, base);
	// b 0x830fa9a0
	goto loc_830FA9A0;
loc_830FA994:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r22,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r22.u32);
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_830FA9A0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830fa9b4
	if (ctx.cr6.eq) goto loc_830FA9B4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831064e0
	ctx.lr = 0x830FA9B4;
	sub_831064E0(ctx, base);
loc_830FA9B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8310ac58
	ctx.lr = 0x830FA9BC;
	sub_8310AC58(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821f5f18
	ctx.lr = 0x830FA9C8;
	sub_821F5F18(ctx, base);
loc_830FA9C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_830FA9D4"))) PPC_WEAK_FUNC(sub_830FA9D4);
PPC_FUNC_IMPL(__imp__sub_830FA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA9D8"))) PPC_WEAK_FUNC(sub_830FA9D8);
PPC_FUNC_IMPL(__imp__sub_830FA9D8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830faa58
	if (ctx.cr6.eq) goto loc_830FAA58;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x830faa58
	if (ctx.cr6.lt) goto loc_830FAA58;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830faa58
	if (ctx.cr6.eq) goto loc_830FAA58;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830faa58
	if (ctx.cr6.eq) goto loc_830FAA58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-2
	ctx.r31.s64 = -131072;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830faa34
	if (!ctx.cr6.eq) goto loc_830FAA34;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x830fa3b8
	ctx.lr = 0x830FAA30;
	sub_830FA3B8(ctx, base);
	// b 0x830faa60
	goto loc_830FAA60;
loc_830FAA34:
	// lis r31,-1
	ctx.r31.s64 = -65536;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830faa58
	if (!ctx.cr6.eq) goto loc_830FAA58;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x830fa060
	ctx.lr = 0x830FAA54;
	sub_830FA060(ctx, base);
	// b 0x830faa60
	goto loc_830FAA60;
loc_830FAA58:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830FAA60:
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

__attribute__((alias("__imp__sub_830FAA74"))) PPC_WEAK_FUNC(sub_830FAA74);
PPC_FUNC_IMPL(__imp__sub_830FAA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FAA78"))) PPC_WEAK_FUNC(sub_830FAA78);
PPC_FUNC_IMPL(__imp__sub_830FAA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x830FAA80;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r23,r11,r8
	ctx.r23.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830fab90
	if (ctx.cr6.eq) goto loc_830FAB90;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ori r24,r3,2
	ctx.r24.u64 = ctx.r3.u64 | 2;
	// bne cr6,0x830faab8
	if (!ctx.cr6.eq) goto loc_830FAAB8;
	// ori r24,r3,1
	ctx.r24.u64 = ctx.r3.u64 | 1;
loc_830FAAB8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,124
	ctx.r29.s64 = ctx.r11.s64 + 124;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAACC;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,3200
	ctx.r28.s64 = ctx.r11.s64 + 3200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAAE0;
	sub_830F9520(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bne cr6,0x830fab1c
	if (!ctx.cr6.eq) goto loc_830FAB1C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// b 0x830fab24
	goto loc_830FAB24;
loc_830FAB1C:
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_830FAB24:
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-31985
	ctx.r9.s64 = -2096168960;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r10,-26816
	ctx.r6.s64 = ctx.r10.s64 + -26816;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r9,r9,32088
	ctx.r9.s64 = ctx.r9.s64 + 32088;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82bea9a8
	ctx.lr = 0x830FAB68;
	sub_82BEA9A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAB78;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAB84;
	sub_830F9520(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x830fab94
	if (ctx.cr6.lt) goto loc_830FAB94;
loc_830FAB90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FAB94:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_830FAB9C"))) PPC_WEAK_FUNC(sub_830FAB9C);
PPC_FUNC_IMPL(__imp__sub_830FAB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FABA0"))) PPC_WEAK_FUNC(sub_830FABA0);
PPC_FUNC_IMPL(__imp__sub_830FABA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FABA8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17668
	ctx.r4.s64 = ctx.r11.s64 + -17668;
	// bl 0x830f9520
	ctx.lr = 0x830FABC4;
	sub_830F9520(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,124
	ctx.r29.s64 = ctx.r11.s64 + 124;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FABD8;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,3200
	ctx.r28.s64 = ctx.r11.s64 + 3200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FABEC;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-17688
	ctx.r4.s64 = ctx.r11.s64 + -17688;
	// bl 0x830f9520
	ctx.lr = 0x830FAC00;
	sub_830F9520(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAC0C;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAC18;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17700
	ctx.r4.s64 = ctx.r11.s64 + -17700;
	// bl 0x830f9520
	ctx.lr = 0x830FAC28;
	sub_830F9520(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FAC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830fac58
	if (!ctx.cr0.lt) goto loc_830FAC58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830fac58
	if (ctx.cr6.lt) goto loc_830FAC58;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_830FAC58:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25328
	ctx.r4.s64 = ctx.r11.s64 + 25328;
	// bl 0x830f9520
	ctx.lr = 0x830FAC68;
	sub_830F9520(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAC74;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAC80;
	sub_830F9520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FAC8C"))) PPC_WEAK_FUNC(sub_830FAC8C);
PPC_FUNC_IMPL(__imp__sub_830FAC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FAC90"))) PPC_WEAK_FUNC(sub_830FAC90);
PPC_FUNC_IMPL(__imp__sub_830FAC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x830FAC98;
	sub_82CA2BB4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830faa78
	ctx.lr = 0x830FACCC;
	sub_830FAA78(ctx, base);
	// mr. r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt 0x830faf04
	if (ctx.cr0.lt) goto loc_830FAF04;
	// rlwinm. r11,r29,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830faf04
	if (ctx.cr0.eq) goto loc_830FAF04;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,124
	ctx.r29.s64 = ctx.r11.s64 + 124;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FACF0;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,3200
	ctx.r28.s64 = ctx.r11.s64 + 3200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAD04;
	sub_830F9520(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAD14;
	sub_830F9FA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// addi r4,r11,-17488
	ctx.r4.s64 = ctx.r11.s64 + -17488;
	// lhz r5,26(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// bl 0x830f9520
	ctx.lr = 0x830FAD2C;
	sub_830F9520(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAD38;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAD44;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17540
	ctx.r4.s64 = ctx.r11.s64 + -17540;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// bl 0x830f9520
	ctx.lr = 0x830FAD64;
	sub_830F9520(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAD70;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAD7C;
	sub_830F9520(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r17,r11,27,27,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x830faef4
	if (ctx.cr0.eq) goto loc_830FAEF4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17568
	ctx.r4.s64 = ctx.r11.s64 + -17568;
	// bl 0x830f9520
	ctx.lr = 0x830FAD9C;
	sub_830F9520(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FADA8;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FADB4;
	sub_830F9520(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x830faedc
	if (ctx.cr6.eq) goto loc_830FAEDC;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r23,r9,-17620
	ctx.r23.s64 = ctx.r9.s64 + -17620;
	// addi r26,r8,-17648
	ctx.r26.s64 = ctx.r8.s64 + -17648;
	// addi r25,r7,9464
	ctx.r25.s64 = ctx.r7.s64 + 9464;
	// addi r22,r6,-9824
	ctx.r22.s64 = ctx.r6.s64 + -9824;
	// addi r21,r5,-9820
	ctx.r21.s64 = ctx.r5.s64 + -9820;
	// addi r20,r4,-9816
	ctx.r20.s64 = ctx.r4.s64 + -9816;
	// addi r24,r10,3224
	ctx.r24.s64 = ctx.r10.s64 + 3224;
	// addi r19,r11,11952
	ctx.r19.s64 = ctx.r11.s64 + 11952;
loc_830FAE04:
	// lwz r30,0(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// rlwinm. r11,r30,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r30,28,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xF;
	// clrlwi r7,r30,28
	ctx.r7.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r9,r30,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xF;
	// bne 0x830fae24
	if (!ctx.cr0.eq) goto loc_830FAE24;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_830FAE24:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne 0x830fae34
	if (!ctx.cr0.eq) goto loc_830FAE34;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_830FAE34:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bne 0x830fae44
	if (!ctx.cr0.eq) goto loc_830FAE44;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_830FAE44:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// bne 0x830fae54
	if (!ctx.cr0.eq) goto loc_830FAE54;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_830FAE54:
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r30,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FAE78;
	sub_830F9520(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAE84;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAE90;
	sub_830F9520(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830faec8
	if (ctx.cr6.eq) goto loc_830FAEC8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830faec8
	if (ctx.cr6.lt) goto loc_830FAEC8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAEB0;
	sub_830F9520(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAEBC;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAEC8;
	sub_830F9520(ctx, base);
loc_830FAEC8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// clrlwi r16,r30,24
	ctx.r16.u64 = ctx.r30.u32 & 0xFF;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x830fae04
	if (ctx.cr6.lt) goto loc_830FAE04;
loc_830FAEDC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAEE8;
	sub_830F9FA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAEF4;
	sub_830F9520(ctx, base);
loc_830FAEF4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAF04;
	sub_830F9FA8(ctx, base);
loc_830FAF04:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c04
	// ERROR 82CA2C04
	return;
}

__attribute__((alias("__imp__sub_830FAF10"))) PPC_WEAK_FUNC(sub_830FAF10);
PPC_FUNC_IMPL(__imp__sub_830FAF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x830FAF18;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830faa78
	ctx.lr = 0x830FAF4C;
	sub_830FAA78(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fb32c
	if (ctx.cr0.lt) goto loc_830FB32C;
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fb32c
	if (ctx.cr0.eq) goto loc_830FB32C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r30,28(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r28,24(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r15,r11,256
	ctx.r15.s64 = ctx.r11.s64 + 256;
	// addi r16,r7,9464
	ctx.r16.s64 = ctx.r7.s64 + 9464;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// addi r22,r10,272
	ctx.r22.s64 = ctx.r10.s64 + 272;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r27,r9,3200
	ctx.r27.s64 = ctx.r9.s64 + 3200;
	// addi r26,r8,124
	ctx.r26.s64 = ctx.r8.s64 + 124;
	// beq cr6,0x830fb0b4
	if (ctx.cr6.eq) goto loc_830FB0B4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAFB0;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAFBC;
	sub_830F9520(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAFC8;
	sub_830F9FA8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-17228
	ctx.r4.s64 = ctx.r10.s64 + -17228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAFE0;
	sub_830F9520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FAFEC;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FAFF8;
	sub_830F9520(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fb0a8
	if (ctx.cr6.eq) goto loc_830FB0A8;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// addi r19,r8,-17232
	ctx.r19.s64 = ctx.r8.s64 + -17232;
	// addi r18,r9,10328
	ctx.r18.s64 = ctx.r9.s64 + 10328;
	// addi r17,r10,-17256
	ctx.r17.s64 = ctx.r10.s64 + -17256;
	// addi r20,r11,-17284
	ctx.r20.s64 = ctx.r11.s64 + -17284;
loc_830FB028:
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r11,r29,22,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3C;
	// clrlwi r8,r29,20
	ctx.r8.u64 = ctx.r29.u32 & 0xFFF;
	// rlwinm r7,r29,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FB050;
	sub_830F9520(ctx, base);
	// rlwinm. r11,r29,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fb064
	if (ctx.cr0.eq) goto loc_830FB064;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB064;
	sub_830F9520(ctx, base);
loc_830FB064:
	// rlwinm. r11,r29,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fb080
	if (ctx.cr0.eq) goto loc_830FB080;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FB080;
	sub_830F9520(ctx, base);
loc_830FB080:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB08C;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB098;
	sub_830F9520(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830fb028
	if (ctx.cr6.lt) goto loc_830FB028;
loc_830FB0A8:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB0B4;
	sub_830F9FA8(ctx, base);
loc_830FB0B4:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm. r21,r11,27,27,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x830fb32c
	if (ctx.cr0.eq) goto loc_830FB32C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB0CC;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB0D8;
	sub_830F9520(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB0E4;
	sub_830F9FA8(ctx, base);
	// add r11,r21,r30
	ctx.r11.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r4,r9,-17316
	ctx.r4.s64 = ctx.r9.s64 + -17316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r22,r10,r23
	ctx.r22.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lwz r14,32(r24)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FB11C;
	sub_830F9520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB128;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB134;
	sub_830F9520(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x830fb320
	if (ctx.cr6.eq) goto loc_830FB320;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r20,r3,-17376
	ctx.r20.s64 = ctx.r3.s64 + -17376;
	// addi r23,r4,-17392
	ctx.r23.s64 = ctx.r4.s64 + -17392;
	// addi r19,r5,-17620
	ctx.r19.s64 = ctx.r5.s64 + -17620;
	// addi r25,r6,-17420
	ctx.r25.s64 = ctx.r6.s64 + -17420;
	// addi r18,r7,-9824
	ctx.r18.s64 = ctx.r7.s64 + -9824;
	// addi r17,r8,-9820
	ctx.r17.s64 = ctx.r8.s64 + -9820;
	// addi r16,r9,-9816
	ctx.r16.s64 = ctx.r9.s64 + -9816;
	// addi r24,r10,3224
	ctx.r24.s64 = ctx.r10.s64 + 3224;
	// addi r15,r11,11952
	ctx.r15.s64 = ctx.r11.s64 + 11952;
	// b 0x830fb194
	goto loc_830FB194;
loc_830FB190:
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_830FB194:
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// rlwinm. r11,r29,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r5,r29,28,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xF;
	// clrlwi r7,r29,28
	ctx.r7.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r9,r29,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xF;
	// rlwinm r8,r29,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xF;
	// bne 0x830fb1b8
	if (!ctx.cr0.eq) goto loc_830FB1B8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_830FB1B8:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne 0x830fb1c8
	if (!ctx.cr0.eq) goto loc_830FB1C8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_830FB1C8:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne 0x830fb1d8
	if (!ctx.cr0.eq) goto loc_830FB1D8;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_830FB1D8:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bne 0x830fb1e8
	if (!ctx.cr0.eq) goto loc_830FB1E8;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_830FB1E8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB20C;
	sub_830F9520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB218;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB224;
	sub_830F9520(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830fb25c
	if (ctx.cr6.eq) goto loc_830FB25C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830fb25c
	if (ctx.cr6.lt) goto loc_830FB25C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB244;
	sub_830F9520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB250;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB25C;
	sub_830F9520(ctx, base);
loc_830FB25C:
	// rlwinm r30,r29,16,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bge cr6,0x830fb2d0
	if (!ctx.cr6.lt) goto loc_830FB2D0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830FB27C:
	// lwz r14,0(r29)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r6,r14,20
	ctx.r6.u64 = ctx.r14.u32 & 0xFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB294;
	sub_830F9520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB2A0;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB2AC;
	sub_830F9520(ctx, base);
	// rlwinm. r11,r14,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne 0x830fb2c8
	if (!ctx.cr0.eq) goto loc_830FB2C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x830fb27c
	if (ctx.cr6.lt) goto loc_830FB27C;
loc_830FB2C8:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x830fb2f4
	if (ctx.cr6.lt) goto loc_830FB2F4;
loc_830FB2D0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB2DC;
	sub_830F9520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB2E8;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB2F4;
	sub_830F9520(ctx, base);
loc_830FB2F4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB300;
	sub_830F9FA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB30C;
	sub_830F9520(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x830fb190
	if (ctx.cr6.lt) goto loc_830FB190;
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_830FB320:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB32C;
	sub_830F9FA8(ctx, base);
loc_830FB32C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB338"))) PPC_WEAK_FUNC(sub_830FB338);
PPC_FUNC_IMPL(__imp__sub_830FB338) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x830fb368
	if (!ctx.cr6.lt) goto loc_830FB368;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830FB368:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830fb3cc
	if (ctx.cr6.eq) goto loc_830FB3CC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x830fb3cc
	if (ctx.cr6.lt) goto loc_830FB3CC;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x830fb3b8
	if (ctx.cr6.lt) goto loc_830FB3B8;
	// beq cr6,0x830fb3a0
	if (ctx.cr6.eq) goto loc_830FB3A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830fb3cc
	goto loc_830FB3CC;
loc_830FB3A0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830faf10
	ctx.lr = 0x830FB3B4;
	sub_830FAF10(ctx, base);
	// b 0x830fb3cc
	goto loc_830FB3CC;
loc_830FB3B8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830fac90
	ctx.lr = 0x830FB3CC;
	sub_830FAC90(ctx, base);
loc_830FB3CC:
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

__attribute__((alias("__imp__sub_830FB3E0"))) PPC_WEAK_FUNC(sub_830FB3E0);
PPC_FUNC_IMPL(__imp__sub_830FB3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-22832(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -22832);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FB3F0;
	sub_82CA2BE8(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830fb41c
	if (!ctx.cr6.eq) goto loc_830FB41C;
loc_830FB410:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830fb4d0
	// ERROR 830FB4D0
	return;
loc_830FB41C:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x830fb410
	if (ctx.cr6.lt) goto loc_830FB410;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830fb410
	if (ctx.cr6.eq) goto loc_830FB410;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830fb410
	if (ctx.cr6.eq) goto loc_830FB410;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r30,228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x830fa9d8
	ctx.lr = 0x830FB458;
	sub_830FA9D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bge 0x830fb490
	if (!ctx.cr0.lt) goto loc_830FB490;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2921
	ctx.r11.u64 = ctx.r11.u64 | 2921;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830fb490
	if (!ctx.cr6.eq) goto loc_830FB490;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,-17056
	ctx.r6.s64 = ctx.r11.s64 + -17056;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x830FB490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FB490:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fb4cc
	// ERROR 830FB4CC
	return;
}

__attribute__((alias("__imp__sub_830FB3E8"))) PPC_WEAK_FUNC(sub_830FB3E8);
PPC_FUNC_IMPL(__imp__sub_830FB3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FB3F0;
	sub_82CA2BE8(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830fb41c
	if (!ctx.cr6.eq) goto loc_830FB41C;
loc_830FB410:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830fb4d0
	goto loc_830FB4D0;
loc_830FB41C:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x830fb410
	if (ctx.cr6.lt) goto loc_830FB410;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830fb410
	if (ctx.cr6.eq) goto loc_830FB410;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830fb410
	if (ctx.cr6.eq) goto loc_830FB410;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r30,228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x830fa9d8
	ctx.lr = 0x830FB458;
	sub_830FA9D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bge 0x830fb490
	if (!ctx.cr0.lt) goto loc_830FB490;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2921
	ctx.r11.u64 = ctx.r11.u64 | 2921;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830fb490
	if (!ctx.cr6.eq) goto loc_830FB490;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,-17056
	ctx.r6.s64 = ctx.r11.s64 + -17056;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x830FB490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FB490:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fb4cc
	goto loc_830FB4CC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r6,r11,-17112
	ctx.r6.s64 = ctx.r11.s64 + -17112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FB4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_830FB4CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830FB4D0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FB4A0"))) PPC_WEAK_FUNC(sub_830FB4A0);
PPC_FUNC_IMPL(__imp__sub_830FB4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r6,r11,-17112
	ctx.r6.s64 = ctx.r11.s64 + -17112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FB4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FB4D8"))) PPC_WEAK_FUNC(sub_830FB4D8);
PPC_FUNC_IMPL(__imp__sub_830FB4D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB4E4"))) PPC_WEAK_FUNC(sub_830FB4E4);
PPC_FUNC_IMPL(__imp__sub_830FB4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FB4E8"))) PPC_WEAK_FUNC(sub_830FB4E8);
PPC_FUNC_IMPL(__imp__sub_830FB4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x830FB4F0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x821f4d88
	ctx.lr = 0x830FB520;
	sub_821F4D88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830fb534
	if (!ctx.cr0.eq) goto loc_830FB534;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830fb6a0
	goto loc_830FB6A0;
loc_830FB534:
	// lwz r3,804(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830fb3e8
	ctx.lr = 0x830FB568;
	sub_830FB3E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x830fb580
	if (ctx.cr0.lt) goto loc_830FB580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b93038
	ctx.lr = 0x830FB580;
	sub_82B93038(ctx, base);
loc_830FB580:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5f18
	ctx.lr = 0x830FB58C;
	sub_821F5F18(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830fb69c
	if (ctx.cr6.lt) goto loc_830FB69C;
	// rlwinm. r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fb69c
	if (!ctx.cr0.eq) goto loc_830FB69C;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// rlwinm r27,r11,10,15,21
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FC00;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r10,32208
	ctx.r7.s64 = ctx.r10.s64 + 32208;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831fd318
	ctx.lr = 0x830FB5CC;
	sub_831FD318(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x830fb5e0
	if (ctx.cr0.lt) goto loc_830FB5E0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fb69c
	if (ctx.cr6.eq) goto loc_830FB69C;
loc_830FB5E0:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// sth r31,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r31.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// bge cr6,0x830fb620
	if (!ctx.cr6.lt) goto loc_830FB620;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r10,-23680
	ctx.r6.s64 = ctx.r10.s64 + -23680;
	// b 0x830fb628
	goto loc_830FB628;
loc_830FB620:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r10,-23732
	ctx.r6.s64 = ctx.r10.s64 + -23732;
loc_830FB628:
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x830FB630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,-27368
	ctx.r7.s64 = ctx.r11.s64 + -27368;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831fd318
	ctx.lr = 0x830FB650;
	sub_831FD318(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fb664
	if (ctx.cr0.eq) goto loc_830FB664;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f9430
	ctx.lr = 0x830FB664;
	sub_830F9430(ctx, base);
loc_830FB664:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,-27368
	ctx.r6.s64 = ctx.r11.s64 + -27368;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830fcdd8
	ctx.lr = 0x830FB688;
	sub_830FCDD8(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fb69c
	if (ctx.cr0.eq) goto loc_830FB69C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f9430
	ctx.lr = 0x830FB69C;
	sub_830F9430(ctx, base);
loc_830FB69C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830FB6A0:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_830FB6A8"))) PPC_WEAK_FUNC(sub_830FB6A8);
PPC_FUNC_IMPL(__imp__sub_830FB6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x830FB6B0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82ca3190
	ctx.lr = 0x830FB6E0;
	sub_82CA3190(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310f850
	ctx.lr = 0x830FB6F0;
	sub_8310F850(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x830fbd24
	if (!ctx.cr6.eq) goto loc_830FBD24;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x830fb71c
	if (ctx.cr6.eq) goto loc_830FB71C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-29688
	ctx.r5.s64 = ctx.r11.s64 + -29688;
	// b 0x830fb724
	goto loc_830FB724;
loc_830FB71C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-29696
	ctx.r5.s64 = ctx.r11.s64 + -29696;
loc_830FB724:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15584
	ctx.r4.s64 = ctx.r11.s64 + -15584;
	// bl 0x830f9520
	ctx.lr = 0x830FB734;
	sub_830F9520(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,124
	ctx.r30.s64 = ctx.r11.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB748;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,3200
	ctx.r29.s64 = ctx.r11.s64 + 3200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB75C;
	sub_830F9520(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f13,3196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3196);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x830fb7a0
	if (!ctx.cr6.eq) goto loc_830FB7A0;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,-15620
	ctx.r4.s64 = ctx.r10.s64 + -15620;
	// bl 0x830f9520
	ctx.lr = 0x830FB79C;
	sub_830F9520(ctx, base);
	// b 0x830fb7d8
	goto loc_830FB7D8;
loc_830FB7A0:
	// fmr f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f12.f64;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,-15668
	ctx.r4.s64 = ctx.r10.s64 + -15668;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x830f9520
	ctx.lr = 0x830FB7D8;
	sub_830F9520(ctx, base);
loc_830FB7D8:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x830fb808
	if (!ctx.cr6.eq) goto loc_830FB808;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,-15684
	ctx.r4.s64 = ctx.r11.s64 + -15684;
	// bl 0x830f9520
	ctx.lr = 0x830FB804;
	sub_830F9520(ctx, base);
	// b 0x830fb828
	goto loc_830FB828;
loc_830FB808:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// addi r4,r11,-15700
	ctx.r4.s64 = ctx.r11.s64 + -15700;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830f9520
	ctx.lr = 0x830FB828;
	sub_830F9520(ctx, base);
loc_830FB828:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x830fb858
	if (!ctx.cr6.eq) goto loc_830FB858;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,-15716
	ctx.r4.s64 = ctx.r11.s64 + -15716;
	// bl 0x830f9520
	ctx.lr = 0x830FB854;
	sub_830F9520(ctx, base);
	// b 0x830fb878
	goto loc_830FB878;
loc_830FB858:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-15736
	ctx.r4.s64 = ctx.r11.s64 + -15736;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830f9520
	ctx.lr = 0x830FB878;
	sub_830F9520(ctx, base);
loc_830FB878:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB884;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB890;
	sub_830F9520(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25208
	ctx.r4.s64 = ctx.r11.s64 + 25208;
	// bl 0x830f9520
	ctx.lr = 0x830FB8A0;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// addi r4,r11,-15756
	ctx.r4.s64 = ctx.r11.s64 + -15756;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830f9520
	ctx.lr = 0x830FB8C0;
	sub_830F9520(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// addi r27,r10,3044
	ctx.r27.s64 = ctx.r10.s64 + 3044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x830fb920
	if (!ctx.cr6.eq) goto loc_830FB920;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r4,r11,-15780
	ctx.r4.s64 = ctx.r11.s64 + -15780;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830f9520
	ctx.lr = 0x830FB8F8;
	sub_830F9520(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	ctx.r11.s32 = ctx.r11.s32 / ctx.r5.s32;
	// twllei r5,0
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// ble cr6,0x830fb954
	if (!ctx.cr6.gt) goto loc_830FB954;
	// li r26,63
	ctx.r26.s64 = 63;
	// b 0x830fb964
	goto loc_830FB964;
loc_830FB920:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// bl 0x830f9520
	ctx.lr = 0x830FB92C;
	sub_830F9520(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	ctx.r11.s32 = ctx.r11.s32 / ctx.r5.s32;
	// twllei r5,0
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x830fb954
	if (!ctx.cr6.gt) goto loc_830FB954;
	// li r26,31
	ctx.r26.s64 = 31;
	// b 0x830fb964
	goto loc_830FB964;
loc_830FB954:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// beq cr6,0x830fb968
	if (ctx.cr6.eq) goto loc_830FB968;
loc_830FB964:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_830FB968:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bne cr6,0x830fb978
	if (!ctx.cr6.eq) goto loc_830FB978;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_830FB978:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r4,r11,-15804
	ctx.r4.s64 = ctx.r11.s64 + -15804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB98C;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FB998;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FB9A4;
	sub_830F9520(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x830fb9d4
	if (!ctx.cr6.eq) goto loc_830FB9D4;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-15864
	ctx.r4.s64 = ctx.r11.s64 + -15864;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830f9520
	ctx.lr = 0x830FB9D0;
	sub_830F9520(ctx, base);
	// b 0x830fb9f4
	goto loc_830FB9F4;
loc_830FB9D4:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-15928
	ctx.r4.s64 = ctx.r11.s64 + -15928;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830f9520
	ctx.lr = 0x830FB9F4;
	sub_830F9520(ctx, base);
loc_830FB9F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBA00;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBA0C;
	sub_830F9520(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fba68
	if (ctx.cr6.eq) goto loc_830FBA68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16008
	ctx.r4.s64 = ctx.r11.s64 + -16008;
	// bl 0x830f9520
	ctx.lr = 0x830FBA28;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBA34;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBA40;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16032
	ctx.r4.s64 = ctx.r11.s64 + -16032;
	// bl 0x830f9520
	ctx.lr = 0x830FBA50;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBA5C;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBA68;
	sub_830F9520(ctx, base);
loc_830FBA68:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fbac4
	if (ctx.cr6.eq) goto loc_830FBAC4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16112
	ctx.r4.s64 = ctx.r11.s64 + -16112;
	// bl 0x830f9520
	ctx.lr = 0x830FBA84;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBA90;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBA9C;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16184
	ctx.r4.s64 = ctx.r11.s64 + -16184;
	// bl 0x830f9520
	ctx.lr = 0x830FBAAC;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBAB8;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBAC4;
	sub_830F9520(ctx, base);
loc_830FBAC4:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fbaf8
	if (ctx.cr6.eq) goto loc_830FBAF8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16272
	ctx.r4.s64 = ctx.r11.s64 + -16272;
	// bl 0x830f9520
	ctx.lr = 0x830FBAE0;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBAEC;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBAF8;
	sub_830F9520(ctx, base);
loc_830FBAF8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fbb2c
	if (ctx.cr6.eq) goto loc_830FBB2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16344
	ctx.r4.s64 = ctx.r11.s64 + -16344;
	// bl 0x830f9520
	ctx.lr = 0x830FBB14;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBB20;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBB2C;
	sub_830F9520(ctx, base);
loc_830FBB2C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fbb88
	if (ctx.cr6.eq) goto loc_830FBB88;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16424
	ctx.r4.s64 = ctx.r11.s64 + -16424;
	// bl 0x830f9520
	ctx.lr = 0x830FBB48;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBB54;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBB60;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16464
	ctx.r4.s64 = ctx.r11.s64 + -16464;
	// bl 0x830f9520
	ctx.lr = 0x830FBB70;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBB7C;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBB88;
	sub_830F9520(ctx, base);
loc_830FBB88:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fbbe4
	if (ctx.cr6.eq) goto loc_830FBBE4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16544
	ctx.r4.s64 = ctx.r11.s64 + -16544;
	// bl 0x830f9520
	ctx.lr = 0x830FBBA4;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBBB0;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBBBC;
	sub_830F9520(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16592
	ctx.r4.s64 = ctx.r11.s64 + -16592;
	// bl 0x830f9520
	ctx.lr = 0x830FBBCC;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBBD8;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBBE4;
	sub_830F9520(ctx, base);
loc_830FBBE4:
	// cmplwi cr6,r26,9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 9, ctx.xer);
	// beq cr6,0x830fbbf4
	if (ctx.cr6.eq) goto loc_830FBBF4;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 6, ctx.xer);
	// bne cr6,0x830fbc1c
	if (!ctx.cr6.eq) goto loc_830FBC1C;
loc_830FBBF4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16672
	ctx.r4.s64 = ctx.r11.s64 + -16672;
	// bl 0x830f9520
	ctx.lr = 0x830FBC04;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBC10;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBC1C;
	sub_830F9520(ctx, base);
loc_830FBC1C:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x830fbd0c
	if (!ctx.cr6.eq) goto loc_830FBD0C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16752
	ctx.r4.s64 = ctx.r11.s64 + -16752;
	// bl 0x830f9520
	ctx.lr = 0x830FBC34;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBC40;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBC4C;
	sub_830F9520(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// ble cr6,0x830fbc6c
	if (!ctx.cr6.gt) goto loc_830FBC6C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-16816
	ctx.r4.s64 = ctx.r11.s64 + -16816;
	// b 0x830fbc74
	goto loc_830FBC74;
loc_830FBC6C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-16872
	ctx.r4.s64 = ctx.r11.s64 + -16872;
loc_830FBC74:
	// bl 0x830f9520
	ctx.lr = 0x830FBC78;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBC84;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBC90;
	sub_830F9520(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x830fbca4
	if (ctx.cr6.eq) goto loc_830FBCA4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r11,-16892
	ctx.r5.s64 = ctx.r11.s64 + -16892;
	// b 0x830fbcac
	goto loc_830FBCAC;
loc_830FBCA4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r11,-16912
	ctx.r5.s64 = ctx.r11.s64 + -16912;
loc_830FBCAC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16960
	ctx.r4.s64 = ctx.r11.s64 + -16960;
	// bl 0x830f9520
	ctx.lr = 0x830FBCBC;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBCC8;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBCD4;
	sub_830F9520(ctx, base);
	// subfic r11,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,-16996
	ctx.r4.s64 = ctx.r10.s64 + -16996;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// bl 0x830f9520
	ctx.lr = 0x830FBCF4;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBD00;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBD0C;
	sub_830F9520(ctx, base);
loc_830FBD0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBD18;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBD24;
	sub_830F9520(ctx, base);
loc_830FBD24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_830FBD30"))) PPC_WEAK_FUNC(sub_830FBD30);
PPC_FUNC_IMPL(__imp__sub_830FBD30) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBD58;
	sub_830F9FA8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FBD6C;
	sub_830F9520(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x830f9fa8
	ctx.lr = 0x830FBD7C;
	sub_830F9FA8(ctx, base);
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

__attribute__((alias("__imp__sub_830FBD94"))) PPC_WEAK_FUNC(sub_830FBD94);
PPC_FUNC_IMPL(__imp__sub_830FBD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBD98"))) PPC_WEAK_FUNC(sub_830FBD98);
PPC_FUNC_IMPL(__imp__sub_830FBD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x830FBDA0;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// addi r8,r11,10344
	ctx.r8.s64 = ctx.r11.s64 + 10344;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,18
	ctx.r7.s64 = 18;
	// addi r11,r11,9592
	ctx.r11.s64 = ctx.r11.s64 + 9592;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r14,r11,20
	ctx.r14.s64 = ctx.r11.s64 + 20;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r31,-32240
	ctx.r31.s64 = -2112880640;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r25,r30,10056
	ctx.r25.s64 = ctx.r30.s64 + 10056;
	// addi r23,r29,3200
	ctx.r23.s64 = ctx.r29.s64 + 3200;
	// addi r22,r31,124
	ctx.r22.s64 = ctx.r31.s64 + 124;
	// addi r18,r3,256
	ctx.r18.s64 = ctx.r3.s64 + 256;
	// addi r21,r4,272
	ctx.r21.s64 = ctx.r4.s64 + 272;
	// addi r20,r5,2864
	ctx.r20.s64 = ctx.r5.s64 + 2864;
	// addi r17,r6,5664
	ctx.r17.s64 = ctx.r6.s64 + 5664;
	// addi r16,r7,3900
	ctx.r16.s64 = ctx.r7.s64 + 3900;
	// addi r27,r8,-6332
	ctx.r27.s64 = ctx.r8.s64 + -6332;
	// addi r24,r9,-15532
	ctx.r24.s64 = ctx.r9.s64 + -15532;
	// addi r19,r10,25208
	ctx.r19.s64 = ctx.r10.s64 + 25208;
	// addi r15,r11,10984
	ctx.r15.s64 = ctx.r11.s64 + 10984;
loc_830FBE50:
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x830fbe68
	if (ctx.cr6.eq) goto loc_830FBE68;
	// lwz r11,-4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fc0d0
	if (ctx.cr6.eq) goto loc_830FC0D0;
loc_830FBE68:
	// lbz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r14.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// bgt cr6,0x830fbf54
	if (ctx.cr6.gt) goto loc_830FBF54;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-17976
	ctx.r12.s64 = ctx.r12.s64 + -17976;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-31984
	ctx.r12.s64 = -2096103424;
	// addi r12,r12,-16732
	ctx.r12.s64 = ctx.r12.s64 + -16732;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_830FBEA4;
	case 1:
		goto loc_830FBEAC;
	case 2:
		goto loc_830FBEB4;
	case 3:
		goto loc_830FBEBC;
	case 4:
		goto loc_830FBEC4;
	case 5:
		goto loc_830FBECC;
	case 6:
		goto loc_830FBED8;
	case 7:
		goto loc_830FBEE0;
	case 8:
		goto loc_830FBEE8;
	case 9:
		goto loc_830FBEF0;
	case 10:
		goto loc_830FBEF8;
	case 11:
		goto loc_830FBF00;
	case 12:
		goto loc_830FBF0C;
	case 13:
		goto loc_830FBF1C;
	case 14:
		goto loc_830FBF28;
	case 15:
		goto loc_830FBF34;
	case 16:
		goto loc_830FBF40;
	case 17:
		goto loc_830FBF4C;
	default:
		__builtin_unreachable();
	}
loc_830FBEA4:
	// clrlwi r31,r26,26
	ctx.r31.u64 = ctx.r26.u32 & 0x3F;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBEAC:
	// rlwinm r31,r26,24,26,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0x3F;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBEB4:
	// rlwinm r31,r26,16,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0x1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBEBC:
	// rlwinm r31,r26,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 15) & 0x1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBEC4:
	// rlwinm r31,r26,14,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBECC:
	// rlwinm r31,r26,13,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 13) & 0x1;
loc_830FBED0:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBED8:
	// rlwinm r31,r26,12,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xF;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBEE0:
	// rlwinm r31,r26,8,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0x7;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBEE8:
	// rlwinm r31,r26,5,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0x1;
	// b 0x830fbed0
	goto loc_830FBED0;
loc_830FBEF0:
	// rlwinm r31,r26,4,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0x7;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBEF8:
	// rlwinm r31,r26,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// b 0x830fbed0
	goto loc_830FBED0;
loc_830FBF00:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBF0C:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r31,r11,31,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBF1C:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,30,30,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBF28:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,24,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBF34:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,16,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBF40:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x830fbf54
	goto loc_830FBF54;
loc_830FBF4C:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,14,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
loc_830FBF54:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fbf68
	if (!ctx.cr6.eq) goto loc_830FBF68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830fbf6c
	if (ctx.cr6.eq) goto loc_830FBF6C;
loc_830FBF68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FBF6C:
	// lwz r8,300(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830fbfd8
	if (ctx.cr6.eq) goto loc_830FBFD8;
	// lwz r11,-12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -12);
loc_830FBF80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fbfe0
	if (!ctx.cr6.eq) goto loc_830FBFE0;
loc_830FBF88:
	// lwz r6,-8(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x830fbfa0
	if (ctx.cr6.eq) goto loc_830FBFA0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x830fbfa4
	if (!ctx.cr0.eq) goto loc_830FBFA4;
loc_830FBFA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FBFA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x830fbfb4
	if (ctx.cr6.eq) goto loc_830FBFB4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FBFB4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830fbfec
	if (ctx.cr6.eq) goto loc_830FBFEC;
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x830fbfec
	if (!ctx.cr6.eq) goto loc_830FBFEC;
	// rlwinm. r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fbfe8
	if (ctx.cr0.eq) goto loc_830FBFE8;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830fbfec
	goto loc_830FBFEC;
loc_830FBFD8:
	// lwz r11,-16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -16);
	// b 0x830fbf80
	goto loc_830FBF80;
loc_830FBFE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830fbf88
	goto loc_830FBF88;
loc_830FBFE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FBFEC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fc0d0
	if (ctx.cr0.eq) goto loc_830FC0D0;
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq 0x830fc014
	if (ctx.cr0.eq) goto loc_830FC014;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x830fbd30
	ctx.lr = 0x830FC010;
	sub_830FBD30(ctx, base);
	// b 0x830fc028
	goto loc_830FC028;
loc_830FC014:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC01C;
	sub_830F9FA8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC028;
	sub_830F9520(ctx, base);
loc_830FC028:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,-20(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + -20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x830f9520
	ctx.lr = 0x830FC03C;
	sub_830F9520(ctx, base);
	// lbz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x830fc05c
	if (!ctx.cr6.eq) goto loc_830FC05C;
	// addi r11,r25,-32
	ctx.r11.s64 = ctx.r25.s64 + -32;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x830fc09c
	goto loc_830FC09C;
loc_830FC05C:
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x830fc074
	if (!ctx.cr6.eq) goto loc_830FC074;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// b 0x830fc09c
	goto loc_830FC09C;
loc_830FC074:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fc094
	if (ctx.cr0.eq) goto loc_830FC094;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bne cr6,0x830fc08c
	if (!ctx.cr6.eq) goto loc_830FC08C;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
loc_830FC08C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x830fc09c
	goto loc_830FC09C;
loc_830FC094:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_830FC09C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC0A4;
	sub_830F9520(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830fc0b8
	if (!ctx.cr6.eq) goto loc_830FC0B8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC0B8;
	sub_830F9FA8(ctx, base);
loc_830FC0B8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC0C4;
	sub_830F9FA8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC0D0;
	sub_830F9520(ctx, base);
loc_830FC0D0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r14,r14,24
	ctx.r14.s64 = ctx.r14.s64 + 24;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x830fbe50
	if (!ctx.cr0.eq) goto loc_830FBE50;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC0F8"))) PPC_WEAK_FUNC(sub_830FC0F8);
PPC_FUNC_IMPL(__imp__sub_830FC0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830FC100;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x830fc124
	if (!ctx.cr6.lt) goto loc_830FC124;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830fc1d4
	goto loc_830FC1D4;
loc_830FC124:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10352
	ctx.r11.s64 = ctx.r11.s64 + 10352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x830fbd30
	ctx.lr = 0x830FC13C;
	sub_830FBD30(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,124
	ctx.r30.s64 = ctx.r11.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC150;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,3200
	ctx.r29.s64 = ctx.r11.s64 + 3200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC164;
	sub_830F9520(ctx, base);
	// rlwinm. r11,r28,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne 0x830fc17c
	if (!ctx.cr0.eq) goto loc_830FC17C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fc1d0
	if (ctx.cr0.eq) goto loc_830FC1D0;
loc_830FC17C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10984
	ctx.r4.s64 = ctx.r11.s64 + 10984;
	// bl 0x830fbd30
	ctx.lr = 0x830FC18C;
	sub_830FBD30(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fc1a0
	if (ctx.cr0.eq) goto loc_830FC1A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3900
	ctx.r5.s64 = ctx.r11.s64 + 3900;
	// b 0x830fc1a8
	goto loc_830FC1A8;
loc_830FC1A0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,5664
	ctx.r5.s64 = ctx.r11.s64 + 5664;
loc_830FC1A8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15524
	ctx.r4.s64 = ctx.r11.s64 + -15524;
	// bl 0x830f9520
	ctx.lr = 0x830FC1B8;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC1C4;
	sub_830F9FA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC1D0;
	sub_830F9520(ctx, base);
loc_830FC1D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FC1D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830FC1DC"))) PPC_WEAK_FUNC(sub_830FC1DC);
PPC_FUNC_IMPL(__imp__sub_830FC1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC1E0"))) PPC_WEAK_FUNC(sub_830FC1E0);
PPC_FUNC_IMPL(__imp__sub_830FC1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x830FC1E8;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x830fc20c
	if (!ctx.cr6.lt) goto loc_830FC20C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x830fc8ac
	goto loc_830FC8AC;
loc_830FC20C:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fc8a8
	if (ctx.cr6.eq) goto loc_830FC8A8;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// add r25,r11,r19
	ctx.r25.u64 = ctx.r11.u64 + ctx.r19.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-15116
	ctx.r9.s64 = ctx.r9.s64 + -15116;
	// clrlwi. r20,r10,24
	ctx.r20.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r17,20(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r26,8(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r16,r11,r25
	ctx.r16.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r24,12(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r10,r17,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 15) & 0x1;
	// bne 0x830fc25c
	if (!ctx.cr0.eq) goto loc_830FC25C;
	// rlwinm r10,r17,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 14) & 0x1;
loc_830FC25C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,10984
	ctx.r30.s64 = ctx.r11.s64 + 10984;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r29,r27,25,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 25) & 0x1;
	// bl 0x830fbd30
	ctx.lr = 0x830FC278;
	sub_830FBD30(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15140
	ctx.r4.s64 = ctx.r11.s64 + -15140;
	// bl 0x830f9520
	ctx.lr = 0x830FC288;
	sub_830F9520(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r14,r11,124
	ctx.r14.s64 = ctx.r11.s64 + 124;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// bl 0x830f9fa8
	ctx.lr = 0x830FC2A0;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r22,r11,3200
	ctx.r22.s64 = ctx.r11.s64 + 3200;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FC2B8;
	sub_830F9520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fbd30
	ctx.lr = 0x830FC2C4;
	sub_830FBD30(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15160
	ctx.r4.s64 = ctx.r11.s64 + -15160;
	// bl 0x830f9520
	ctx.lr = 0x830FC2D4;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC2E0;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC2EC;
	sub_830F9520(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r23,r11,5664
	ctx.r23.s64 = ctx.r11.s64 + 5664;
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r21,r10,3900
	ctx.r21.s64 = ctx.r10.s64 + 3900;
	// bne 0x830fc314
	if (!ctx.cr0.eq) goto loc_830FC314;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fc35c
	if (ctx.cr0.eq) goto loc_830FC35C;
loc_830FC314:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fbd30
	ctx.lr = 0x830FC320;
	sub_830FBD30(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bne 0x830fc330
	if (!ctx.cr0.eq) goto loc_830FC330;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_830FC330:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15188
	ctx.r4.s64 = ctx.r11.s64 + -15188;
	// bl 0x830f9520
	ctx.lr = 0x830FC340;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC34C;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC358;
	sub_830F9520(ctx, base);
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
loc_830FC35C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fbd98
	ctx.lr = 0x830FC37C;
	sub_830FBD98(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fc3a0
	if (ctx.cr0.eq) goto loc_830FC3A0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC394;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC3A0;
	sub_830F9520(ctx, base);
loc_830FC3A0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r18,r11,256
	ctx.r18.s64 = ctx.r11.s64 + 256;
	// rlwinm. r9,r27,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r27,r10,272
	ctx.r27.s64 = ctx.r10.s64 + 272;
	// beq 0x830fc538
	if (ctx.cr0.eq) goto loc_830FC538;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC3C8;
	sub_830F9FA8(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x830fc3dc
	if (!ctx.cr6.eq) goto loc_830FC3DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fc40c
	if (ctx.cr6.eq) goto loc_830FC40C;
loc_830FC3DC:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r6,r11,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// addi r4,r10,-15248
	ctx.r4.s64 = ctx.r10.s64 + -15248;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC3F4;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC400;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC40C;
	sub_830F9520(ctx, base);
loc_830FC40C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x830fc41c
	if (!ctx.cr6.eq) goto loc_830FC41C;
	// clrlwi. r30,r17,27
	ctx.r30.u64 = ctx.r17.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830fc454
	if (ctx.cr0.eq) goto loc_830FC454;
loc_830FC41C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r30,r17,27
	ctx.r30.u64 = ctx.r17.u32 & 0x1F;
	// rlwinm r7,r17,22,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 22) & 0x7F;
	// addi r4,r11,-15304
	ctx.r4.s64 = ctx.r11.s64 + -15304;
	// rlwinm r6,r17,27,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC43C;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC448;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC454;
	sub_830F9520(ctx, base);
loc_830FC454:
	// rlwinm r29,r17,27,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x830fc488
	if (!ctx.cr6.gt) goto loc_830FC488;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15344
	ctx.r4.s64 = ctx.r11.s64 + -15344;
	// bl 0x830f9520
	ctx.lr = 0x830FC470;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC47C;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC488;
	sub_830F9520(ctx, base);
loc_830FC488:
	// rlwinm r28,r17,22,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 22) & 0x7F;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x830fc4bc
	if (!ctx.cr6.lt) goto loc_830FC4BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15384
	ctx.r4.s64 = ctx.r11.s64 + -15384;
	// bl 0x830f9520
	ctx.lr = 0x830FC4A4;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC4B0;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC4BC;
	sub_830F9520(ctx, base);
loc_830FC4BC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830fc4f0
	if (!ctx.cr6.gt) goto loc_830FC4F0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15428
	ctx.r4.s64 = ctx.r11.s64 + -15428;
	// bl 0x830f9520
	ctx.lr = 0x830FC4D8;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC4E4;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC4F0;
	sub_830F9520(ctx, base);
loc_830FC4F0:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fc504
	if (!ctx.cr0.eq) goto loc_830FC504;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_830FC504:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15452
	ctx.r4.s64 = ctx.r11.s64 + -15452;
	// bl 0x830f9520
	ctx.lr = 0x830FC514;
	sub_830F9520(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC520;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC52C;
	sub_830F9520(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC538;
	sub_830F9FA8(ctx, base);
loc_830FC538:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC544;
	sub_830F9FA8(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x830fc6b0
	if (ctx.cr6.eq) goto loc_830FC6B0;
	// lhz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 24);
	// rlwinm. r15,r17,27,27,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// lhz r10,26(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 26);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// not r17,r11
	ctx.r17.u64 = ~ctx.r11.u64;
	// not r16,r10
	ctx.r16.u64 = ~ctx.r10.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// beq 0x830fc87c
	if (ctx.cr0.eq) goto loc_830FC87C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r25,r10,240
	ctx.r25.s64 = ctx.r10.s64 + 240;
	// addi r21,r9,-15456
	ctx.r21.s64 = ctx.r9.s64 + -15456;
	// addi r22,r8,-15464
	ctx.r22.s64 = ctx.r8.s64 + -15464;
	// addi r19,r7,-15484
	ctx.r19.s64 = ctx.r7.s64 + -15484;
	// addi r18,r6,-15496
	ctx.r18.s64 = ctx.r6.s64 + -15496;
	// addi r20,r5,2864
	ctx.r20.s64 = ctx.r5.s64 + 2864;
	// addi r24,r4,-15504
	ctx.r24.s64 = ctx.r4.s64 + -15504;
	// addi r28,r11,9464
	ctx.r28.s64 = ctx.r11.s64 + 9464;
loc_830FC5B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r14,3(r29)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r14,28
	ctx.r30.u64 = ctx.r14.u32 & 0xF;
	// and r27,r11,r17
	ctx.r27.u64 = ctx.r11.u64 & ctx.r17.u64;
	// and r26,r11,r16
	ctx.r26.u64 = ctx.r11.u64 & ctx.r16.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC5DC;
	sub_830F9FA8(ctx, base);
	// rlwinm r11,r14,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FC5F0;
	sub_830F9520(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fc608
	if (ctx.cr6.eq) goto loc_830FC608;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC608;
	sub_830F9520(ctx, base);
loc_830FC608:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830fc618
	if (ctx.cr6.eq) goto loc_830FC618;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x830fc624
	goto loc_830FC624;
loc_830FC618:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830fc62c
	if (ctx.cr6.eq) goto loc_830FC62C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_830FC624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC62C;
	sub_830F9520(ctx, base);
loc_830FC62C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x830f9fa8
	ctx.lr = 0x830FC638;
	sub_830F9FA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x830f9520
	ctx.lr = 0x830FC64C;
	sub_830F9520(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x830fc674
	if (ctx.cr6.eq) goto loc_830FC674;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,64
	ctx.r10.s64 = ctx.r28.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FC674;
	sub_830F9520(ctx, base);
loc_830FC674:
	// lwz r14,92(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC684;
	sub_830F9FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830f9520
	ctx.lr = 0x830FC690;
	sub_830F9520(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r23,r15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x830fc5b8
	if (ctx.cr6.lt) goto loc_830FC5B8;
	// lbz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x830fc87c
	goto loc_830FC87C;
loc_830FC6B0:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r6,240
	ctx.r24.s64 = ctx.r6.s64 + 240;
	// addi r21,r7,-15456
	ctx.r21.s64 = ctx.r7.s64 + -15456;
	// addi r20,r8,2864
	ctx.r20.s64 = ctx.r8.s64 + 2864;
	// addi r23,r9,-15504
	ctx.r23.s64 = ctx.r9.s64 + -15504;
	// addi r26,r10,9464
	ctx.r26.s64 = ctx.r10.s64 + 9464;
	// beq cr6,0x830fc7a4
	if (ctx.cr6.eq) goto loc_830FC7A4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// addi r27,r11,-15464
	ctx.r27.s64 = ctx.r11.s64 + -15464;
loc_830FC6F8:
	// lbz r15,3(r30)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r15,28
	ctx.r29.u64 = ctx.r15.u32 & 0xF;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC70C;
	sub_830F9FA8(ctx, base);
	// rlwinm r11,r15,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FC720;
	sub_830F9520(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830fc738
	if (ctx.cr6.eq) goto loc_830FC738;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC738;
	sub_830F9520(ctx, base);
loc_830FC738:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC744;
	sub_830F9FA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x830f9520
	ctx.lr = 0x830FC758;
	sub_830F9520(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,23,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x830fc780
	if (ctx.cr6.eq) goto loc_830FC780;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = ctx.r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FC780;
	sub_830F9520(ctx, base);
loc_830FC780:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC78C;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC798;
	sub_830F9520(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830fc6f8
	if (!ctx.cr0.eq) goto loc_830FC6F8;
loc_830FC7A4:
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// rlwinm. r11,r17,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r16
	ctx.r30.u64 = ctx.r10.u64 + ctx.r16.u64;
	// beq 0x830fc87c
	if (ctx.cr0.eq) goto loc_830FC87C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r27,r11,-15512
	ctx.r27.s64 = ctx.r11.s64 + -15512;
loc_830FC7D0:
	// lbz r25,3(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r25,28
	ctx.r29.u64 = ctx.r25.u32 & 0xF;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC7E4;
	sub_830F9FA8(ctx, base);
	// rlwinm r11,r25,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FC7F8;
	sub_830F9520(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830fc810
	if (ctx.cr6.eq) goto loc_830FC810;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC810;
	sub_830F9520(ctx, base);
loc_830FC810:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC81C;
	sub_830F9FA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x830f9520
	ctx.lr = 0x830FC830;
	sub_830F9520(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x830fc858
	if (ctx.cr6.eq) goto loc_830FC858;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = ctx.r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x830f9520
	ctx.lr = 0x830FC858;
	sub_830F9520(ctx, base);
loc_830FC858:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC864;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC870;
	sub_830F9520(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830fc7d0
	if (!ctx.cr0.eq) goto loc_830FC7D0;
loc_830FC87C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC888;
	sub_830F9FA8(ctx, base);
	// clrlwi. r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fc8a8
	if (ctx.cr0.eq) goto loc_830FC8A8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9fa8
	ctx.lr = 0x830FC89C;
	sub_830F9FA8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC8A8;
	sub_830F9520(ctx, base);
loc_830FC8A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FC8AC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC8B4"))) PPC_WEAK_FUNC(sub_830FC8B4);
PPC_FUNC_IMPL(__imp__sub_830FC8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC8B8"))) PPC_WEAK_FUNC(sub_830FC8B8);
PPC_FUNC_IMPL(__imp__sub_830FC8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830FC8C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830fc9e4
	if (!ctx.cr6.eq) goto loc_830FC9E4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x830fc990
	if (ctx.cr6.lt) goto loc_830FC990;
	// beq cr6,0x830fc938
	if (ctx.cr6.eq) goto loc_830FC938;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x830fc900
	if (ctx.cr6.lt) goto loc_830FC900;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// b 0x830fc9d4
	goto loc_830FC9D4;
loc_830FC900:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3212
	ctx.r4.s64 = ctx.r11.s64 + 3212;
	// bl 0x830fbd30
	ctx.lr = 0x830FC910;
	sub_830FBD30(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r11,-15088
	ctx.r4.s64 = ctx.r11.s64 + -15088;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830f9520
	ctx.lr = 0x830FC934;
	sub_830F9520(ctx, base);
	// b 0x830fc9d4
	goto loc_830FC9D4;
loc_830FC938:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1688
	ctx.r4.s64 = ctx.r11.s64 + 1688;
	// bl 0x830fbd30
	ctx.lr = 0x830FC948;
	sub_830FBD30(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-15096
	ctx.r4.s64 = ctx.r11.s64 + -15096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC95C;
	sub_830F9520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r28,r11,7908
	ctx.r28.s64 = ctx.r11.s64 + 7908;
loc_830FC968:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC974;
	sub_830F9520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830f9790
	ctx.lr = 0x830FC980;
	sub_830F9790(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830fc968
	if (!ctx.cr0.eq) goto loc_830FC968;
	// b 0x830fc9d4
	goto loc_830FC9D4;
loc_830FC990:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3204
	ctx.r4.s64 = ctx.r11.s64 + 3204;
	// bl 0x830fbd30
	ctx.lr = 0x830FC9A0;
	sub_830FBD30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fc9b8
	if (ctx.cr6.eq) goto loc_830FC9B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,3900
	ctx.r6.s64 = ctx.r11.s64 + 3900;
	// b 0x830fc9c0
	goto loc_830FC9C0;
loc_830FC9B8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,5664
	ctx.r6.s64 = ctx.r11.s64 + 5664;
loc_830FC9C0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9520
	ctx.lr = 0x830FC9D4;
	sub_830F9520(ctx, base);
loc_830FC9D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// bl 0x830f9520
	ctx.lr = 0x830FC9E4;
	sub_830F9520(ctx, base);
loc_830FC9E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830FC9F0"))) PPC_WEAK_FUNC(sub_830FC9F0);
PPC_FUNC_IMPL(__imp__sub_830FC9F0) {
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
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830fca28
	if (!ctx.cr6.eq) goto loc_830FCA28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fca84
	goto loc_830FCA84;
loc_830FCA28:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-14152
	ctx.r5.s64 = ctx.r9.s64 + -14152;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82b983d8
	ctx.lr = 0x830FCA58;
	sub_82B983D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fca84
	if (ctx.cr0.lt) goto loc_830FCA84;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCA70;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// bl 0x830f9520
	ctx.lr = 0x830FCA80;
	sub_830F9520(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830FCA84:
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

__attribute__((alias("__imp__sub_830FCA9C"))) PPC_WEAK_FUNC(sub_830FCA9C);
PPC_FUNC_IMPL(__imp__sub_830FCA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCAA0"))) PPC_WEAK_FUNC(sub_830FCAA0);
PPC_FUNC_IMPL(__imp__sub_830FCAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830FCAA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830fcdc8
	if (ctx.cr6.eq) goto loc_830FCDC8;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x830fcdc8
	if (ctx.cr6.lt) goto loc_830FCDC8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830fcdc8
	if (ctx.cr6.eq) goto loc_830FCDC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// clrlwi. r10,r28,30
	ctx.r10.u64 = ctx.r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x830fcdc8
	if (!ctx.cr0.eq) goto loc_830FCDC8;
	// rlwinm r11,r28,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x1;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-14840
	ctx.r4.s64 = ctx.r10.s64 + -14840;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCB08;
	sub_830F9FA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14968
	ctx.r4.s64 = ctx.r11.s64 + -14968;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCB18;
	sub_830F9FA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCB28;
	sub_830F9FA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,10376(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10376);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCB4C;
	sub_830F9FA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15048
	ctx.r4.s64 = ctx.r11.s64 + -15048;
	// bl 0x830f9520
	ctx.lr = 0x830FCB5C;
	sub_830F9520(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x830fcb84
	if (ctx.cr6.gt) goto loc_830FCB84;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10368
	ctx.r11.s64 = ctx.r11.s64 + 10368;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r4,r9,-28108
	ctx.r4.s64 = ctx.r9.s64 + -28108;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x830fcb90
	goto loc_830FCB90;
loc_830FCB84:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-15064
	ctx.r4.s64 = ctx.r11.s64 + -15064;
loc_830FCB90:
	// bl 0x830f9520
	ctx.lr = 0x830FCB94;
	sub_830F9520(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15368
	ctx.r4.s64 = ctx.r11.s64 + -15368;
	// bl 0x830f9520
	ctx.lr = 0x830FCBA4;
	sub_830F9520(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10364);
	// bl 0x830f9fa8
	ctx.lr = 0x830FCBB4;
	sub_830F9FA8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10360);
	// bl 0x830f9fa8
	ctx.lr = 0x830FCBC4;
	sub_830F9FA8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830fc0f8
	ctx.lr = 0x830FCBDC;
	sub_830FC0F8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830f9ef0
	ctx.lr = 0x830FCBF0;
	sub_830F9EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcdd0
	if (ctx.cr0.lt) goto loc_830FCDD0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830fc1e0
	ctx.lr = 0x830FCC14;
	sub_830FC1E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcc68
	if (ctx.cr0.lt) goto loc_830FCC68;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830fc9f0
	ctx.lr = 0x830FCC38;
	sub_830FC9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcc68
	if (ctx.cr0.lt) goto loc_830FCC68;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830fb338
	ctx.lr = 0x830FCC68;
	sub_830FB338(ctx, base);
loc_830FCC68:
	// rlwinm. r27,r28,0,20,20
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x830fcc90
	if (ctx.cr0.eq) goto loc_830FCC90;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830fb6a8
	ctx.lr = 0x830FCC84;
	sub_830FB6A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830fcc98
	if (!ctx.cr0.lt) goto loc_830FCC98;
	// b 0x830fcdd0
	goto loc_830FCDD0;
loc_830FCC90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x830fcdd0
	if (ctx.cr6.lt) goto loc_830FCDD0;
loc_830FCC98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fcd70
	if (ctx.cr0.eq) goto loc_830FCD70;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23200
	ctx.r4.s64 = ctx.r11.s64 + 23200;
	// bl 0x830fbd30
	ctx.lr = 0x830FCCB4;
	sub_830FBD30(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCCC4;
	sub_830F9FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// bl 0x830f9520
	ctx.lr = 0x830FCCD4;
	sub_830F9520(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830fc1e0
	ctx.lr = 0x830FCCF0;
	sub_830FC1E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcdd0
	if (ctx.cr0.lt) goto loc_830FCDD0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830fc9f0
	ctx.lr = 0x830FCD14;
	sub_830FC9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcdd0
	if (ctx.cr0.lt) goto loc_830FCDD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830fb338
	ctx.lr = 0x830FCD44;
	sub_830FB338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcdd0
	if (ctx.cr0.lt) goto loc_830FCDD0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830fcd70
	if (ctx.cr6.eq) goto loc_830FCD70;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830fb6a8
	ctx.lr = 0x830FCD68;
	sub_830FB6A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcdd0
	if (ctx.cr0.lt) goto loc_830FCDD0;
loc_830FCD70:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fcdb0
	if (ctx.cr6.eq) goto loc_830FCDB0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCD8C;
	sub_830F9FA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x830faba0
	ctx.lr = 0x830FCD98;
	sub_830FABA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830fcdd0
	if (ctx.cr0.lt) goto loc_830FCDD0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCDB0;
	sub_830F9FA8(ctx, base);
loc_830FCDB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28104
	ctx.r4.s64 = ctx.r11.s64 + -28104;
	// bl 0x830f9fa8
	ctx.lr = 0x830FCDC0;
	sub_830F9FA8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x830fcdd0
	goto loc_830FCDD0;
loc_830FCDC8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_830FCDD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830FCDD8"))) PPC_WEAK_FUNC(sub_830FCDD8);
PPC_FUNC_IMPL(__imp__sub_830FCDD8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x830fcaa0
	sub_830FCAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCDE0"))) PPC_WEAK_FUNC(sub_830FCDE0);
PPC_FUNC_IMPL(__imp__sub_830FCDE0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCE1C"))) PPC_WEAK_FUNC(sub_830FCE1C);
PPC_FUNC_IMPL(__imp__sub_830FCE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCE20"))) PPC_WEAK_FUNC(sub_830FCE20);
PPC_FUNC_IMPL(__imp__sub_830FCE20) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,2496
	ctx.r3.s64 = 2496;
	// bl 0x82d0dad8
	ctx.lr = 0x830FCE40;
	sub_82D0DAD8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830fce5c
	if (!ctx.cr6.eq) goto loc_830FCE5C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// b 0x830fce94
	goto loc_830FCE94;
loc_830FCE5C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r5,2496
	ctx.r5.s64 = 2496;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ca3190
	ctx.lr = 0x830FCE78;
	sub_82CA3190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,2488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2488, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,2492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2492, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FCE94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCEA4"))) PPC_WEAK_FUNC(sub_830FCEA4);
PPC_FUNC_IMPL(__imp__sub_830FCEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCEA8"))) PPC_WEAK_FUNC(sub_830FCEA8);
PPC_FUNC_IMPL(__imp__sub_830FCEA8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fced4
	if (ctx.cr6.eq) goto loc_830FCED4;
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_830FCED4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16387
	ctx.r3.u64 = ctx.r11.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCEE0"))) PPC_WEAK_FUNC(sub_830FCEE0);
PPC_FUNC_IMPL(__imp__sub_830FCEE0) {
	PPC_FUNC_PROLOGUE();
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
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FCF2C;
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

__attribute__((alias("__imp__sub_830FCF3C"))) PPC_WEAK_FUNC(sub_830FCF3C);
PPC_FUNC_IMPL(__imp__sub_830FCF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCF40"))) PPC_WEAK_FUNC(sub_830FCF40);
PPC_FUNC_IMPL(__imp__sub_830FCF40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10384
	ctx.r9.s64 = ctx.r10.s64 + 10384;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_830FCF50:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x830fcf74
	if (ctx.cr6.eq) goto loc_830FCF74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,167
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 167, ctx.xer);
	// blt cr6,0x830fcf50
	if (ctx.cr6.lt) goto loc_830FCF50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830FCF74:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCF84"))) PPC_WEAK_FUNC(sub_830FCF84);
PPC_FUNC_IMPL(__imp__sub_830FCF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCF88"))) PPC_WEAK_FUNC(sub_830FCF88);
PPC_FUNC_IMPL(__imp__sub_830FCF88) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830fcf40
	ctx.lr = 0x830FCFA8;
	sub_830FCF40(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x830fcfc0
	if (ctx.cr0.eq) goto loc_830FCFC0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82caacc0
	ctx.lr = 0x830FCFBC;
	sub_82CAACC0(ctx, base);
	// b 0x830fcfd0
	goto loc_830FCFD0;
loc_830FCFC0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,-14628
	ctx.r4.s64 = ctx.r11.s64 + -14628;
	// bl 0x82ca2c60
	ctx.lr = 0x830FCFD0;
	sub_82CA2C60(ctx, base);
loc_830FCFD0:
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

__attribute__((alias("__imp__sub_830FCFE4"))) PPC_WEAK_FUNC(sub_830FCFE4);
PPC_FUNC_IMPL(__imp__sub_830FCFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCFE8"))) PPC_WEAK_FUNC(sub_830FCFE8);
PPC_FUNC_IMPL(__imp__sub_830FCFE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r3,552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// b 0x821f5f18
	sub_821F5F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD000"))) PPC_WEAK_FUNC(sub_830FD000);
PPC_FUNC_IMPL(__imp__sub_830FD000) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x82ca9260
	sub_82CA9260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD01C"))) PPC_WEAK_FUNC(sub_830FD01C);
PPC_FUNC_IMPL(__imp__sub_830FD01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD020"))) PPC_WEAK_FUNC(sub_830FD020);
PPC_FUNC_IMPL(__imp__sub_830FD020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830FD028;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FD050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd154
	if (ctx.cr0.eq) goto loc_830FD154;
	// rlwinm. r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fd154
	if (!ctx.cr0.eq) goto loc_830FD154;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fd0a4
	if (ctx.cr6.eq) goto loc_830FD0A4;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,11728(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11728);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830FD07C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830fd07c
	if (!ctx.cr6.eq) goto loc_830FD07C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x830FD0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FD0A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r27,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FD0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x831fd318
	ctx.lr = 0x830FD0E8;
	sub_831FD318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fd15c
	if (ctx.cr6.eq) goto loc_830FD15C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x830fd11c
	if (ctx.cr6.lt) goto loc_830FD11C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,11724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11724);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830FD108:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830fd108
	if (!ctx.cr6.eq) goto loc_830FD108;
	// b 0x830fd138
	goto loc_830FD138;
loc_830FD11C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,11720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11720);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830FD128:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830fd128
	if (!ctx.cr6.eq) goto loc_830FD128;
loc_830FD138:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x830FD150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830fd15c
	goto loc_830FD15C;
loc_830FD154:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_830FD15C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830FD168"))) PPC_WEAK_FUNC(sub_830FD168);
PPC_FUNC_IMPL(__imp__sub_830FD168) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830fcf88
	ctx.lr = 0x830FD198;
	sub_830FCF88(ctx, base);
	// lwz r11,2492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fd1c8
	if (ctx.cr6.eq) goto loc_830FD1C8;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x830fd1c8
	if (ctx.cr6.eq) goto loc_830FD1C8;
	// lwz r3,2488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2488);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r30,-1100
	ctx.r6.s64 = ctx.r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FD1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FD1C8:
	// cmpwi cr6,r30,3517
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3517, ctx.xer);
	// beq cr6,0x830fd204
	if (ctx.cr6.eq) goto loc_830FD204;
	// cmpwi cr6,r30,3525
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3525, ctx.xer);
	// beq cr6,0x830fd210
	if (ctx.cr6.eq) goto loc_830FD210;
	// cmpwi cr6,r30,3527
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3527, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// beq cr6,0x830fd1fc
	if (ctx.cr6.eq) goto loc_830FD1FC;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x830fd1f4
	if (ctx.cr6.eq) goto loc_830FD1F4;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x830fd20c
	goto loc_830FD20C;
loc_830FD1F4:
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// b 0x830fd20c
	goto loc_830FD20C;
loc_830FD1FC:
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// b 0x830fd20c
	goto loc_830FD20C;
loc_830FD204:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
loc_830FD20C:
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_830FD210:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// bl 0x82ca9260
	ctx.lr = 0x830FD21C;
	sub_82CA9260(ctx, base);
}

__attribute__((alias("__imp__sub_830FD21C"))) PPC_WEAK_FUNC(sub_830FD21C);
PPC_FUNC_IMPL(__imp__sub_830FD21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD220"))) PPC_WEAK_FUNC(sub_830FD220);
PPC_FUNC_IMPL(__imp__sub_830FD220) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830fcf88
	ctx.lr = 0x830FD274;
	sub_830FCF88(ctx, base);
	// lwz r11,2492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fd29c
	if (ctx.cr6.eq) goto loc_830FD29C;
	// lwz r3,2488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2488);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r30,-1100
	ctx.r6.s64 = ctx.r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FD29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830FD29C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

__attribute__((alias("__imp__sub_830FD2B4"))) PPC_WEAK_FUNC(sub_830FD2B4);
PPC_FUNC_IMPL(__imp__sub_830FD2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD2B8"))) PPC_WEAK_FUNC(sub_830FD2B8);
PPC_FUNC_IMPL(__imp__sub_830FD2B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x830fd2f8
	if (!ctx.cr6.gt) goto loc_830FD2F8;
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
loc_830FD2F8:
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

__attribute__((alias("__imp__sub_830FD314"))) PPC_WEAK_FUNC(sub_830FD314);
PPC_FUNC_IMPL(__imp__sub_830FD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD318"))) PPC_WEAK_FUNC(sub_830FD318);
PPC_FUNC_IMPL(__imp__sub_830FD318) {
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
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830fd168
	ctx.lr = 0x830FD350;
	sub_830FD168(ctx, base);
}

__attribute__((alias("__imp__sub_830FD350"))) PPC_WEAK_FUNC(sub_830FD350);
PPC_FUNC_IMPL(__imp__sub_830FD350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82caacc0
	ctx.lr = 0x830FD39C;
	sub_82CAACC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,3542
	ctx.r4.s64 = 3542;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd318
	ctx.lr = 0x830FD3AC;
	sub_830FD318(ctx, base);
}

__attribute__((alias("__imp__sub_830FD3AC"))) PPC_WEAK_FUNC(sub_830FD3AC);
PPC_FUNC_IMPL(__imp__sub_830FD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD3B0"))) PPC_WEAK_FUNC(sub_830FD3B0);
PPC_FUNC_IMPL(__imp__sub_830FD3B0) {
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
	// bl 0x8304b540
	ctx.lr = 0x830FD3D0;
	sub_8304B540(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd3ec
	if (ctx.cr0.eq) goto loc_830FD3EC;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_830FD3EC:
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

__attribute__((alias("__imp__sub_830FD408"))) PPC_WEAK_FUNC(sub_830FD408);
PPC_FUNC_IMPL(__imp__sub_830FD408) {
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
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
loc_830FD41C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fd460
	if (!ctx.cr0.eq) goto loc_830FD460;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830fd460
	if (ctx.cr0.eq) goto loc_830FD460;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
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
	// bl 0x821f5f18
	ctx.lr = 0x830FD45C;
	sub_821F5F18(ctx, base);
	// b 0x830fd41c
	goto loc_830FD41C;
loc_830FD460:
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

__attribute__((alias("__imp__sub_830FD474"))) PPC_WEAK_FUNC(sub_830FD474);
PPC_FUNC_IMPL(__imp__sub_830FD474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD478"))) PPC_WEAK_FUNC(sub_830FD478);
PPC_FUNC_IMPL(__imp__sub_830FD478) {
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
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fd4b4
	if (ctx.cr6.eq) goto loc_830FD4B4;
loc_830FD49C:
	// lis r4,-24435
	ctx.r4.s64 = -1601372160;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x821f5f18
	ctx.lr = 0x830FD4A8;
	sub_821F5F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830fd49c
	if (!ctx.cr6.eq) goto loc_830FD49C;
loc_830FD4B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd408
	ctx.lr = 0x830FD4BC;
	sub_830FD408(ctx, base);
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

__attribute__((alias("__imp__sub_830FD4D4"))) PPC_WEAK_FUNC(sub_830FD4D4);
PPC_FUNC_IMPL(__imp__sub_830FD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD4D8"))) PPC_WEAK_FUNC(sub_830FD4D8);
PPC_FUNC_IMPL(__imp__sub_830FD4D8) {
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
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x830fd508
	goto loc_830FD508;
loc_830FD4F8:
	// li r5,4088
	ctx.r5.s64 = 4088;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82ca3190
	ctx.lr = 0x830FD504;
	sub_82CA3190(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_830FD508:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x830fd4f8
	if (!ctx.cr6.eq) goto loc_830FD4F8;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x82ca3190
	ctx.lr = 0x830FD530;
	sub_82CA3190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd408
	ctx.lr = 0x830FD538;
	sub_830FD408(ctx, base);
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

__attribute__((alias("__imp__sub_830FD550"))) PPC_WEAK_FUNC(sub_830FD550);
PPC_FUNC_IMPL(__imp__sub_830FD550) {
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
	// lis r4,-8051
	ctx.r4.s64 = -527630336;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x821f4d88
	ctx.lr = 0x830FD570;
	sub_821F4D88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830fd584
	if (!ctx.cr0.eq) goto loc_830FD584;
	// li r4,3517
	ctx.r4.s64 = 3517;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x830fd318
	ctx.lr = 0x830FD584;
	sub_830FD318(ctx, base);
loc_830FD584:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830FD5A4"))) PPC_WEAK_FUNC(sub_830FD5A4);
PPC_FUNC_IMPL(__imp__sub_830FD5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD5A8"))) PPC_WEAK_FUNC(sub_830FD5A8);
PPC_FUNC_IMPL(__imp__sub_830FD5A8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830fd738
	if (ctx.cr6.eq) goto loc_830FD738;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,115
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 115, ctx.xer);
	// beq cr6,0x830fd738
	if (ctx.cr6.eq) goto loc_830FD738;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x830fd5fc
	if (ctx.cr6.eq) goto loc_830FD5FC;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830fd73c
	if (!ctx.cr0.eq) goto loc_830FD73C;
loc_830FD5FC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_830FD600:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fd66c
	if (!ctx.cr0.eq) goto loc_830FD66C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd66c
	if (ctx.cr0.eq) goto loc_830FD66C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x830fd600
	if (ctx.cr6.eq) goto loc_830FD600;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830fd600
	if (ctx.cr6.eq) goto loc_830FD600;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x830fd66c
	if (ctx.cr6.eq) goto loc_830FD66C;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830fd73c
	if (!ctx.cr0.eq) goto loc_830FD73C;
loc_830FD66C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_830FD670:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fd6d8
	if (!ctx.cr0.eq) goto loc_830FD6D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fd6d8
	if (ctx.cr6.eq) goto loc_830FD6D8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x830fd670
	if (ctx.cr6.eq) goto loc_830FD670;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830fd670
	if (ctx.cr6.eq) goto loc_830FD670;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x830fd6d8
	if (ctx.cr6.eq) goto loc_830FD6D8;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830fd73c
	if (!ctx.cr0.eq) goto loc_830FD73C;
loc_830FD6D8:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd738
	if (ctx.cr0.eq) goto loc_830FD738;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fd6f4
	if (ctx.cr0.eq) goto loc_830FD6F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FD6F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd5a8
	ctx.lr = 0x830FD704;
	sub_830FD5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830fd73c
	if (!ctx.cr0.eq) goto loc_830FD73C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fd720
	if (ctx.cr0.eq) goto loc_830FD720;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FD720:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd5a8
	ctx.lr = 0x830FD730;
	sub_830FD5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830fd73c
	if (!ctx.cr0.eq) goto loc_830FD73C;
loc_830FD738:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FD73C:
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

__attribute__((alias("__imp__sub_830FD754"))) PPC_WEAK_FUNC(sub_830FD754);
PPC_FUNC_IMPL(__imp__sub_830FD754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD758"))) PPC_WEAK_FUNC(sub_830FD758);
PPC_FUNC_IMPL(__imp__sub_830FD758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-22808(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -22808);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fd7a8
	if (ctx.cr6.eq) goto loc_830FD7A8;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830fd3b0
	ctx.lr = 0x830FD7A0;
	sub_830FD3B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 772, ctx.r11.u32);
loc_830FD7A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fd7bc
	// ERROR 830FD7BC
	return;
}

__attribute__((alias("__imp__sub_830FD760"))) PPC_WEAK_FUNC(sub_830FD760);
PPC_FUNC_IMPL(__imp__sub_830FD760) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fd7a8
	if (ctx.cr6.eq) goto loc_830FD7A8;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830fd3b0
	ctx.lr = 0x830FD7A0;
	sub_830FD3B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 772, ctx.r11.u32);
loc_830FD7A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fd7bc
	goto loc_830FD7BC;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_830FD7BC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fd7e4
	if (ctx.cr6.eq) goto loc_830FD7E4;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x82b96c90
	ctx.lr = 0x830FD7DC;
	sub_82B96C90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r11.u32);
loc_830FD7E4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fd7f8
	goto loc_830FD7F8;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_830FD7F8:
	// addi r3,r30,812
	ctx.r3.s64 = ctx.r30.s64 + 812;
	// bl 0x830fd478
	ctx.lr = 0x830FD800;
	sub_830FD478(ctx, base);
	// addi r3,r30,972
	ctx.r3.s64 = ctx.r30.s64 + 972;
	// bl 0x830fd478
	ctx.lr = 0x830FD808;
	sub_830FD478(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// bl 0x821f5f18
	ctx.lr = 0x830FD814;
	sub_821F5F18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 784, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_830FD7B8"))) PPC_WEAK_FUNC(sub_830FD7B8);
PPC_FUNC_IMPL(__imp__sub_830FD7B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fd7e4
	if (ctx.cr6.eq) goto loc_830FD7E4;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x82b96c90
	ctx.lr = 0x830FD7DC;
	sub_82B96C90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r11.u32);
loc_830FD7E4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fd7f8
	// ERROR 830FD7F8
	return;
}

__attribute__((alias("__imp__sub_830FD7F4"))) PPC_WEAK_FUNC(sub_830FD7F4);
PPC_FUNC_IMPL(__imp__sub_830FD7F4) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r30,812
	ctx.r3.s64 = ctx.r30.s64 + 812;
	// bl 0x830fd478
	ctx.lr = 0x830FD800;
	sub_830FD478(ctx, base);
	// addi r3,r30,972
	ctx.r3.s64 = ctx.r30.s64 + 972;
	// bl 0x830fd478
	ctx.lr = 0x830FD808;
	sub_830FD478(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// bl 0x821f5f18
	ctx.lr = 0x830FD814;
	sub_821F5F18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 784, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_830FD834"))) PPC_WEAK_FUNC(sub_830FD834);
PPC_FUNC_IMPL(__imp__sub_830FD834) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FD840"))) PPC_WEAK_FUNC(sub_830FD840);
PPC_FUNC_IMPL(__imp__sub_830FD840) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FD84C"))) PPC_WEAK_FUNC(sub_830FD84C);
PPC_FUNC_IMPL(__imp__sub_830FD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FD850"))) PPC_WEAK_FUNC(sub_830FD850);
PPC_FUNC_IMPL(__imp__sub_830FD850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x830FD858;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// andis. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 327680;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830fd884
	if (ctx.cr0.eq) goto loc_830FD884;
	// bl 0x8316d6c8
	ctx.lr = 0x830FD884;
	sub_8316D6C8(ctx, base);
loc_830FD884:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,7,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd898
	if (ctx.cr0.eq) goto loc_830FD898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831720c0
	ctx.lr = 0x830FD898;
	sub_831720C0(ctx, base);
loc_830FD898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83191270
	ctx.lr = 0x830FD8A0;
	sub_83191270(ctx, base);
	// addi r30,r31,972
	ctx.r30.s64 = ctx.r31.s64 + 972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd4d8
	ctx.lr = 0x830FD8AC;
	sub_830FD4D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831665c8
	ctx.lr = 0x830FD8B4;
	sub_831665C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd4d8
	ctx.lr = 0x830FD8BC;
	sub_830FD4D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8315c528
	ctx.lr = 0x830FD8C4;
	sub_8315C528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd4d8
	ctx.lr = 0x830FD8CC;
	sub_830FD4D8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fd8f4
	if (ctx.cr6.eq) goto loc_830FD8F4;
	// stw r28,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r28.u32);
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
	// stw r28,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r28.u32);
	// stw r28,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r28.u32);
	// stw r28,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r28.u32);
loc_830FD8F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83141b48
	ctx.lr = 0x830FD8FC;
	sub_83141B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd4d8
	ctx.lr = 0x830FD904;
	sub_830FD4D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313fdd8
	ctx.lr = 0x830FD90C;
	sub_8313FDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd4d8
	ctx.lr = 0x830FD914;
	sub_830FD4D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83138d80
	ctx.lr = 0x830FD91C;
	sub_83138D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd4d8
	ctx.lr = 0x830FD924;
	sub_830FD4D8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fd938
	if (ctx.cr6.eq) goto loc_830FD938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83135b88
	ctx.lr = 0x830FD938;
	sub_83135B88(ctx, base);
loc_830FD938:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd94c
	if (ctx.cr0.eq) goto loc_830FD94C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83127af0
	ctx.lr = 0x830FD94C;
	sub_83127AF0(ctx, base);
loc_830FD94C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83122628
	ctx.lr = 0x830FD954;
	sub_83122628(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd964
	if (ctx.cr0.eq) goto loc_830FD964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831215c0
	ctx.lr = 0x830FD964;
	sub_831215C0(ctx, base);
loc_830FD964:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq 0x830fd998
	if (ctx.cr0.eq) goto loc_830FD998;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fd990
	if (ctx.cr6.eq) goto loc_830FD990;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_830FD990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831109d8
	ctx.lr = 0x830FD998;
	sub_831109D8(ctx, base);
loc_830FD998:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fd9b0
	if (ctx.cr0.eq) goto loc_830FD9B0;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x830fd9b4
	if (ctx.cr0.eq) goto loc_830FD9B4;
loc_830FD9B0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830FD9B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fd9c4
	if (ctx.cr0.eq) goto loc_830FD9C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bef0
	ctx.lr = 0x830FD9C4;
	sub_8311BEF0(ctx, base);
loc_830FD9C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311b9d8
	ctx.lr = 0x830FD9CC;
	sub_8311B9D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83118d50
	ctx.lr = 0x830FD9D4;
	sub_83118D50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd4d8
	ctx.lr = 0x830FD9DC;
	sub_830FD4D8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fda00
	if (ctx.cr6.eq) goto loc_830FDA00;
	// stw r28,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r28.u32);
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
	// stw r28,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r28.u32);
	// stw r28,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r28.u32);
	// stw r28,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r28.u32);
loc_830FDA00:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83114098
	ctx.lr = 0x830FDA18;
	sub_83114098(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fdb80
	if (!ctx.cr0.eq) goto loc_830FDB80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fda70
	if (ctx.cr0.eq) goto loc_830FDA70;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x830fda60
	if (ctx.cr6.eq) goto loc_830FDA60;
	// bctrl 
	ctx.lr = 0x830FDA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x83117fe8
	ctx.lr = 0x830FDA5C;
	sub_83117FE8(ctx, base);
	// b 0x830fda68
	goto loc_830FDA68;
loc_830FDA60:
	// bctrl 
	ctx.lr = 0x830FDA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x83117ff0
	ctx.lr = 0x830FDA68;
	sub_83117FF0(ctx, base);
loc_830FDA68:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x830fdb80
	if (!ctx.cr6.eq) goto loc_830FDB80;
loc_830FDA70:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r10,10,15,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
	// beq 0x830fda88
	if (ctx.cr0.eq) goto loc_830FDA88;
	// oris r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 262144;
loc_830FDA88:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r27,r11,5488
	ctx.r27.s64 = ctx.r11.s64 + 5488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x831fd318
	ctx.lr = 0x830FDAD8;
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830fdb80
	if (!ctx.cr0.lt) goto loc_830FDB80;
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r30,r11,-21148
	ctx.r30.s64 = ctx.r11.s64 + -21148;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830fdb18
	if (ctx.cr6.eq) goto loc_830FDB18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2a78
	ctx.lr = 0x830FDAFC;
	sub_82CA2A78(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x821f5f18
	ctx.lr = 0x830FDB08;
	sub_821F5F18(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// stw r28,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
loc_830FDB18:
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,5488
	ctx.r5.s64 = ctx.r11.s64 + 5488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830fd020
	ctx.lr = 0x830FDB30;
	sub_830FD020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830fdb80
	if (!ctx.cr0.lt) goto loc_830FDB80;
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830fdb58
	if (ctx.cr6.eq) goto loc_830FDB58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2a78
	ctx.lr = 0x830FDB4C;
	sub_82CA2A78(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
loc_830FDB58:
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// lwz r10,780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830fdb80
	if (!ctx.cr6.gt) goto loc_830FDB80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdb88
	if (ctx.cr0.eq) goto loc_830FDB88;
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd220
	ctx.lr = 0x830FDB80;
	sub_830FD220(ctx, base);
loc_830FDB80:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_830FDB88:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// beq cr6,0x830fdbc8
	if (ctx.cr6.eq) goto loc_830FDBC8;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fdbc8
	if (ctx.cr6.eq) goto loc_830FDBC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FDBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
loc_830FDBC8:
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd318
	ctx.lr = 0x830FDBD4;
	sub_830FD318(ctx, base);
}

__attribute__((alias("__imp__sub_830FDBD4"))) PPC_WEAK_FUNC(sub_830FDBD4);
PPC_FUNC_IMPL(__imp__sub_830FDBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FDBD8"))) PPC_WEAK_FUNC(sub_830FDBD8);
PPC_FUNC_IMPL(__imp__sub_830FDBD8) {
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
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdc78
	if (ctx.cr0.eq) goto loc_830FDC78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830fdc30
	if (!ctx.cr6.eq) goto loc_830FDC30;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,2480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2480, ctx.r10.u32);
	// b 0x830fdc78
	goto loc_830FDC78;
loc_830FDC30:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r4,r11,16389
	ctx.r4.u64 = ctx.r11.u64 | 16389;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830fd760
	ctx.lr = 0x830FDC50;
	sub_830FD760(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d0dae0
	ctx.lr = 0x830FDC58;
	sub_82D0DAE0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fdca0
	goto loc_830FDCA0;
loc_830FDC78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,2480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830fdc9c
	if (ctx.cr6.lt) goto loc_830FDC9C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830FDC9C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830FDCA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FDCB0"))) PPC_WEAK_FUNC(sub_830FDCB0);
PPC_FUNC_IMPL(__imp__sub_830FDCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-22768(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -22768);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdd08
	if (ctx.cr0.eq) goto loc_830FDD08;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830fd760
	ctx.lr = 0x830FDCFC;
	sub_830FD760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830FDD08:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fdd24
	if (ctx.cr6.eq) goto loc_830FDD24;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d0dae0
	ctx.lr = 0x830FDD24;
	sub_82D0DAE0(ctx, base);
loc_830FDD24:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FDCB8"))) PPC_WEAK_FUNC(sub_830FDCB8);
PPC_FUNC_IMPL(__imp__sub_830FDCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdd08
	if (ctx.cr0.eq) goto loc_830FDD08;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830fd760
	ctx.lr = 0x830FDCFC;
	sub_830FD760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830FDD08:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fdd24
	if (ctx.cr6.eq) goto loc_830FDD24;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d0dae0
	ctx.lr = 0x830FDD24;
	sub_82D0DAE0(ctx, base);
loc_830FDD24:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FDD3C"))) PPC_WEAK_FUNC(sub_830FDD3C);
PPC_FUNC_IMPL(__imp__sub_830FDD3C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FDD48"))) PPC_WEAK_FUNC(sub_830FDD48);
PPC_FUNC_IMPL(__imp__sub_830FDD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x830FDD50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829ce870
	ctx.lr = 0x830FDD5C;
	sub_829CE870(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r30,r31,812
	ctx.r30.s64 = ctx.r31.s64 + 812;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x830FDD84;
	sub_82CA3190(ctx, base);
	// addi r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 + 152;
	// addi r29,r31,972
	ctx.r29.s64 = ctx.r31.s64 + 972;
	// stw r31,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x830FDDB4;
	sub_82CA3190(ctx, base);
	// addi r11,r29,152
	ctx.r11.s64 = ctx.r29.s64 + 152;
	// stw r31,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// stw r10,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r10.u32);
	// bl 0x830fd550
	ctx.lr = 0x830FDDD8;
	sub_830FD550(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// bl 0x830fd550
	ctx.lr = 0x830FDDF8;
	sub_830FD550(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r3.u32);
	// stw r3,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r3.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_830FDE24"))) PPC_WEAK_FUNC(sub_830FDE24);
PPC_FUNC_IMPL(__imp__sub_830FDE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FDE28"))) PPC_WEAK_FUNC(sub_830FDE28);
PPC_FUNC_IMPL(__imp__sub_830FDE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x830FDE30;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x830fde64
	if (ctx.cr6.eq) goto loc_830FDE64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_830FDE64:
	// lwz r30,356(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// stw r23,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// beq cr6,0x830fdf18
	if (ctx.cr6.eq) goto loc_830FDF18;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// stw r6,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r6.u32);
	// ble cr6,0x830fdea0
	if (!ctx.cr6.gt) goto loc_830FDEA0;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3589
	ctx.r4.s64 = 3589;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd318
	ctx.lr = 0x830FDEA0;
	sub_830FD318(ctx, base);
loc_830FDEA0:
	// rlwinm r11,r28,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x830fdec4
	if (!ctx.cr6.eq) goto loc_830FDEC4;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x830fded8
	goto loc_830FDED8;
loc_830FDEC4:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_830FDED8:
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdef4
	if (ctx.cr0.eq) goto loc_830FDEF4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_830FDEF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fdf18
	if (ctx.cr6.eq) goto loc_830FDF18;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdf18
	if (ctx.cr0.eq) goto loc_830FDF18;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x830f7048
	ctx.lr = 0x830FDF18;
	sub_830F7048(ctx, base);
loc_830FDF18:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x830fdf54
	if (ctx.cr6.eq) goto loc_830FDF54;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fdf40
	if (ctx.cr6.eq) goto loc_830FDF40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdf4c
	if (ctx.cr0.eq) goto loc_830FDF4C;
loc_830FDF40:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_830FDF4C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x830fdf78
	if (!ctx.cr6.eq) goto loc_830FDF78;
loc_830FDF54:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fdf78
	if (ctx.cr6.eq) goto loc_830FDF78;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fdf78
	if (ctx.cr0.eq) goto loc_830FDF78;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_830FDF78:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831b1648
	ctx.lr = 0x830FDF88;
	sub_831B1648(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x830fdfa0
	if (!ctx.cr0.eq) goto loc_830FDFA0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3501
	ctx.r4.s64 = 3501;
	// bl 0x830fd318
	ctx.lr = 0x830FDFA0;
	sub_830FD318(ctx, base);
loc_830FDFA0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x831ae2c8
	ctx.lr = 0x830FDFA8;
	sub_831AE2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831945b8
	ctx.lr = 0x830FDFB0;
	sub_831945B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fdfc0
	if (ctx.cr0.eq) goto loc_830FDFC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FDFC0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fdfe0
	if (!ctx.cr0.eq) goto loc_830FDFE0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fdfe0
	if (ctx.cr6.eq) goto loc_830FDFE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83192ae0
	ctx.lr = 0x830FDFE0;
	sub_83192AE0(ctx, base);
loc_830FDFE0:
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x830fd4d8
	ctx.lr = 0x830FDFE8;
	sub_830FD4D8(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd850
	ctx.lr = 0x830FE004;
	sub_830FD850(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_830FE00C"))) PPC_WEAK_FUNC(sub_830FE00C);
PPC_FUNC_IMPL(__imp__sub_830FE00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE010"))) PPC_WEAK_FUNC(sub_830FE010);
PPC_FUNC_IMPL(__imp__sub_830FE010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FE018;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x831b2290
	ctx.lr = 0x830FE040;
	sub_831B2290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831945b8
	ctx.lr = 0x830FE048;
	sub_831945B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fe058
	if (ctx.cr0.eq) goto loc_830FE058;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FE058:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830fe078
	if (!ctx.cr0.eq) goto loc_830FE078;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fe078
	if (ctx.cr6.eq) goto loc_830FE078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83192ae0
	ctx.lr = 0x830FE078;
	sub_83192AE0(ctx, base);
loc_830FE078:
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x830fd4d8
	ctx.lr = 0x830FE080;
	sub_830FD4D8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830FE090:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x830fe090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830FE090;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fe0c8
	if (ctx.cr6.eq) goto loc_830FE0C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_830FE0C8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x830fe0e0
	if (ctx.cr6.eq) goto loc_830FE0E0;
	// lis r4,-2
	ctx.r4.s64 = -131072;
loc_830FE0E0:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fd850
	ctx.lr = 0x830FE0F8;
	sub_830FD850(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830fe108
	if (ctx.cr6.eq) goto loc_830FE108;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_830FE108:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FE110"))) PPC_WEAK_FUNC(sub_830FE110);
PPC_FUNC_IMPL(__imp__sub_830FE110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-22744(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -22744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// stw r5,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x830fcde0
	ctx.lr = 0x830FE160;
	sub_830FCDE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830FE168:
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830fce20
	ctx.lr = 0x830FE178;
	sub_830FCE20(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fe214
	if (!ctx.cr6.eq) goto loc_830FE214;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x83000200
	ctx.lr = 0x830FE194;
	sub_83000200(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe1bc
	if (ctx.cr6.eq) goto loc_830FE1BC;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830fdbd8
	ctx.lr = 0x830FE1B4;
	sub_830FDBD8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// b 0x830fe214
	goto loc_830FE214;
loc_830FE1BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x830fdd48
	ctx.lr = 0x830FE1D4;
	sub_830FDD48(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x830fde28
	ctx.lr = 0x830FE210;
	sub_830FDE28(ctx, base);
	// b 0x830fe220
	goto loc_830FE220;
loc_830FE214:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe168
	if (ctx.cr6.eq) goto loc_830FE168;
loc_830FE220:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fe240
	// ERROR 830FE240
	return;
}

__attribute__((alias("__imp__sub_830FE118"))) PPC_WEAK_FUNC(sub_830FE118);
PPC_FUNC_IMPL(__imp__sub_830FE118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// stw r5,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x830fcde0
	ctx.lr = 0x830FE160;
	sub_830FCDE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830FE168:
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830fce20
	ctx.lr = 0x830FE178;
	sub_830FCE20(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fe214
	if (!ctx.cr6.eq) goto loc_830FE214;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x83000200
	ctx.lr = 0x830FE194;
	sub_83000200(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe1bc
	if (ctx.cr6.eq) goto loc_830FE1BC;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830fdbd8
	ctx.lr = 0x830FE1B4;
	sub_830FDBD8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// b 0x830fe214
	goto loc_830FE214;
loc_830FE1BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x830fdd48
	ctx.lr = 0x830FE1D4;
	sub_830FDD48(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x830fde28
	ctx.lr = 0x830FE210;
	sub_830FDE28(ctx, base);
	// b 0x830fe220
	goto loc_830FE220;
loc_830FE214:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe168
	if (ctx.cr6.eq) goto loc_830FE168;
loc_830FE220:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fe240
	goto loc_830FE240;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x830fcea8
	ctx.lr = 0x830FE23C;
	sub_830FCEA8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_830FE240:
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830fdcb8
	ctx.lr = 0x830FE24C;
	sub_830FDCB8(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FE230"))) PPC_WEAK_FUNC(sub_830FE230);
PPC_FUNC_IMPL(__imp__sub_830FE230) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x830fcea8
	ctx.lr = 0x830FE23C;
	sub_830FCEA8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830fdcb8
	ctx.lr = 0x830FE24C;
	sub_830FDCB8(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FE260"))) PPC_WEAK_FUNC(sub_830FE260);
PPC_FUNC_IMPL(__imp__sub_830FE260) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FE26C"))) PPC_WEAK_FUNC(sub_830FE26C);
PPC_FUNC_IMPL(__imp__sub_830FE26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE270"))) PPC_WEAK_FUNC(sub_830FE270);
PPC_FUNC_IMPL(__imp__sub_830FE270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,9644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9644);
	// lwz r16,-22720(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -22720);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r11,r11,-12576
	ctx.r11.s64 = ctx.r11.s64 + -12576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x830fcde0
	ctx.lr = 0x830FE2E0;
	sub_830FCDE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830FE2E8:
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fce20
	ctx.lr = 0x830FE2F8;
	sub_830FCE20(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fe374
	if (!ctx.cr6.eq) goto loc_830FE374;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x83000200
	ctx.lr = 0x830FE314;
	sub_83000200(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe33c
	if (ctx.cr6.eq) goto loc_830FE33C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fdbd8
	ctx.lr = 0x830FE334;
	sub_830FDBD8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// b 0x830fe374
	goto loc_830FE374;
loc_830FE33C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830fdd48
	ctx.lr = 0x830FE354;
	sub_830FDD48(ctx, base);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830fe010
	ctx.lr = 0x830FE370;
	sub_830FE010(ctx, base);
	// b 0x830fe380
	goto loc_830FE380;
loc_830FE374:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe2e8
	if (ctx.cr6.eq) goto loc_830FE2E8;
loc_830FE380:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fe3a0
	// ERROR 830FE3A0
	return;
}

__attribute__((alias("__imp__sub_830FE278"))) PPC_WEAK_FUNC(sub_830FE278);
PPC_FUNC_IMPL(__imp__sub_830FE278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r11,r11,-12576
	ctx.r11.s64 = ctx.r11.s64 + -12576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x830fcde0
	ctx.lr = 0x830FE2E0;
	sub_830FCDE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830FE2E8:
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fce20
	ctx.lr = 0x830FE2F8;
	sub_830FCE20(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830fe374
	if (!ctx.cr6.eq) goto loc_830FE374;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x83000200
	ctx.lr = 0x830FE314;
	sub_83000200(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe33c
	if (ctx.cr6.eq) goto loc_830FE33C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fdbd8
	ctx.lr = 0x830FE334;
	sub_830FDBD8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// b 0x830fe374
	goto loc_830FE374;
loc_830FE33C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830fdd48
	ctx.lr = 0x830FE354;
	sub_830FDD48(ctx, base);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830fe010
	ctx.lr = 0x830FE370;
	sub_830FE010(ctx, base);
	// b 0x830fe380
	goto loc_830FE380;
loc_830FE374:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830fe2e8
	if (ctx.cr6.eq) goto loc_830FE2E8;
loc_830FE380:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830fe3a0
	goto loc_830FE3A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x830fcea8
	ctx.lr = 0x830FE39C;
	sub_830FCEA8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
loc_830FE3A0:
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fdcb8
	ctx.lr = 0x830FE3AC;
	sub_830FDCB8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FE390"))) PPC_WEAK_FUNC(sub_830FE390);
PPC_FUNC_IMPL(__imp__sub_830FE390) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x830fcea8
	ctx.lr = 0x830FE39C;
	sub_830FCEA8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fdcb8
	ctx.lr = 0x830FE3AC;
	sub_830FDCB8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FE3C0"))) PPC_WEAK_FUNC(sub_830FE3C0);
PPC_FUNC_IMPL(__imp__sub_830FE3C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FE3CC"))) PPC_WEAK_FUNC(sub_830FE3CC);
PPC_FUNC_IMPL(__imp__sub_830FE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE3D0"))) PPC_WEAK_FUNC(sub_830FE3D0);
PPC_FUNC_IMPL(__imp__sub_830FE3D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x821f4d88
	sub_821F4D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FE3DC"))) PPC_WEAK_FUNC(sub_830FE3DC);
PPC_FUNC_IMPL(__imp__sub_830FE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE3E0"))) PPC_WEAK_FUNC(sub_830FE3E0);
PPC_FUNC_IMPL(__imp__sub_830FE3E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x821f5f18
	sub_821F5F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FE3EC"))) PPC_WEAK_FUNC(sub_830FE3EC);
PPC_FUNC_IMPL(__imp__sub_830FE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE3F0"))) PPC_WEAK_FUNC(sub_830FE3F0);
PPC_FUNC_IMPL(__imp__sub_830FE3F0) {
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
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830fe48c
	if (ctx.cr6.gt) goto loc_830FE48C;
	// beq cr6,0x830fe484
	if (ctx.cr6.eq) goto loc_830FE484;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fe508
	if (ctx.cr6.eq) goto loc_830FE508;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe478
	if (ctx.cr6.eq) goto loc_830FE478;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe470
	if (ctx.cr6.eq) goto loc_830FE470;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe468
	if (ctx.cr6.eq) goto loc_830FE468;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe460
	if (ctx.cr6.eq) goto loc_830FE460;
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830fe4d4
	if (!ctx.cr6.eq) goto loc_830FE4D4;
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x830fe47c
	goto loc_830FE47C;
loc_830FE460:
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE468:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x830fe47c
	goto loc_830FE47C;
loc_830FE470:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE478:
	// lis r31,0
	ctx.r31.s64 = 0;
loc_830FE47C:
	// ori r31,r31,34952
	ctx.r31.u64 = ctx.r31.u64 | 34952;
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE484:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE48C:
	// lis r11,1792
	ctx.r11.s64 = 117440512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe504
	if (ctx.cr6.eq) goto loc_830FE504;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe4fc
	if (ctx.cr6.eq) goto loc_830FE4FC;
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe4f4
	if (ctx.cr6.eq) goto loc_830FE4F4;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe4ec
	if (ctx.cr6.eq) goto loc_830FE4EC;
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe4e4
	if (ctx.cr6.eq) goto loc_830FE4E4;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe4dc
	if (ctx.cr6.eq) goto loc_830FE4DC;
loc_830FE4D4:
	// bl 0x82cbbb58
	ctx.lr = 0x830FE4D8;
	sub_82CBBB58(ctx, base);
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE4DC:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x830fe47c
	goto loc_830FE47C;
loc_830FE4E4:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE4EC:
	// lis r31,96
	ctx.r31.s64 = 6291456;
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE4F4:
	// lis r31,64
	ctx.r31.s64 = 4194304;
	// b 0x830fe508
	goto loc_830FE508;
loc_830FE4FC:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x830fe47c
	goto loc_830FE47C;
loc_830FE504:
	// lis r31,4
	ctx.r31.s64 = 262144;
loc_830FE508:
	// rlwinm. r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fe524
	if (ctx.cr0.eq) goto loc_830FE524;
	// lis r12,6
	ctx.r12.s64 = 393216;
	// ori r12,r12,34952
	ctx.r12.u64 = ctx.r12.u64 | 34952;
	// and. r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fe524
	if (ctx.cr0.eq) goto loc_830FE524;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE524;
	sub_82CBBB58(ctx, base);
loc_830FE524:
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

__attribute__((alias("__imp__sub_830FE53C"))) PPC_WEAK_FUNC(sub_830FE53C);
PPC_FUNC_IMPL(__imp__sub_830FE53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE540"))) PPC_WEAK_FUNC(sub_830FE540);
PPC_FUNC_IMPL(__imp__sub_830FE540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FE548;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830fe628
	if (ctx.cr6.eq) goto loc_830FE628;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x830fe5ec
	if (ctx.cr6.eq) goto loc_830FE5EC;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x830fe590
	if (ctx.cr6.eq) goto loc_830FE590;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x830fe620
	if (!ctx.cr6.eq) goto loc_830FE620;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r31,34
	ctx.r31.s64 = 34;
	// stw r10,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r10.u32);
	// b 0x830fe630
	goto loc_830FE630;
loc_830FE590:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x830fe5a8
	if (!ctx.cr6.lt) goto loc_830FE5A8;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE5A8;
	sub_82CBBB58(ctx, base);
loc_830FE5A8:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x830fe5b4
	if (ctx.cr6.lt) goto loc_830FE5B4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE5B4;
	sub_82CBBB58(ctx, base);
loc_830FE5B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x830fe5e4
	if (!ctx.cr6.eq) goto loc_830FE5E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// li r9,4
	ctx.r9.s64 = 4;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r31,r31,35
	ctx.r31.s64 = ctx.r31.s64 + 35;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// b 0x830fe630
	goto loc_830FE630;
loc_830FE5E4:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x830fe62c
	goto loc_830FE62C;
loc_830FE5EC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830fe604
	if (ctx.cr6.lt) goto loc_830FE604;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE604;
	sub_82CBBB58(ctx, base);
loc_830FE604:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830fe630
	if (!ctx.cr6.eq) goto loc_830FE630;
loc_830FE620:
	// bl 0x82cbbb58
	ctx.lr = 0x830FE624;
	sub_82CBBB58(ctx, base);
	// b 0x830fe630
	goto loc_830FE630;
loc_830FE628:
	// li r11,4
	ctx.r11.s64 = 4;
loc_830FE62C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830FE630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FE63C"))) PPC_WEAK_FUNC(sub_830FE63C);
PPC_FUNC_IMPL(__imp__sub_830FE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE640"))) PPC_WEAK_FUNC(sub_830FE640);
PPC_FUNC_IMPL(__imp__sub_830FE640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FE648;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,52
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 52, ctx.xer);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x830fe670
	if (ctx.cr6.eq) goto loc_830FE670;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// beq cr6,0x830fe670
	if (ctx.cr6.eq) goto loc_830FE670;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE670;
	sub_82CBBB58(ctx, base);
loc_830FE670:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830fe694
	if (!ctx.cr6.eq) goto loc_830FE694;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x830fe698
	goto loc_830FE698;
loc_830FE694:
	// rlwinm r10,r11,0,16,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
loc_830FE698:
	// rlwinm r11,r30,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830fe714
	if (ctx.cr6.eq) goto loc_830FE714;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,11764
	ctx.r8.s64 = ctx.r8.s64 + 11764;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r6,r11,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// lis r4,68
	ctx.r4.s64 = 4456448;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x830fe724
	goto loc_830FE724;
loc_830FE714:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_830FE724:
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FE748"))) PPC_WEAK_FUNC(sub_830FE748);
PPC_FUNC_IMPL(__imp__sub_830FE748) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE76C;
	sub_82CBBB58(ctx, base);
	// b 0x830fe774
	goto loc_830FE774;
loc_830FE770:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_830FE774:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830fe770
	if (!ctx.cr0.eq) goto loc_830FE770;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_830FE79C"))) PPC_WEAK_FUNC(sub_830FE79C);
PPC_FUNC_IMPL(__imp__sub_830FE79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE7A0"))) PPC_WEAK_FUNC(sub_830FE7A0);
PPC_FUNC_IMPL(__imp__sub_830FE7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830FE7A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fe7cc
	if (ctx.cr6.eq) goto loc_830FE7CC;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE7CC;
	sub_82CBBB58(ctx, base);
loc_830FE7CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r8.u32);
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fe808
	if (ctx.cr0.eq) goto loc_830FE808;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE808;
	sub_82CBBB58(ctx, base);
loc_830FE808:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// li r8,257
	ctx.r8.s64 = 257;
	// rlwimi r31,r10,18,0,20
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFFF800) | (ctx.r31.u64 & 0xFFFFFFFF000007FF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,12816
	ctx.r10.u64 = ctx.r10.u64 | 12816;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830FE850"))) PPC_WEAK_FUNC(sub_830FE850);
PPC_FUNC_IMPL(__imp__sub_830FE850) {
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
	// bne cr6,0x830fe878
	if (!ctx.cr6.eq) goto loc_830FE878;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE878;
	sub_82CBBB58(ctx, base);
loc_830FE878:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830fe88c
	if (ctx.cr6.lt) goto loc_830FE88C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fe89c
	goto loc_830FE89C;
loc_830FE88C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830FE89C:
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

__attribute__((alias("__imp__sub_830FE8B4"))) PPC_WEAK_FUNC(sub_830FE8B4);
PPC_FUNC_IMPL(__imp__sub_830FE8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE8B8"))) PPC_WEAK_FUNC(sub_830FE8B8);
PPC_FUNC_IMPL(__imp__sub_830FE8B8) {
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
	// bne cr6,0x830fe8e0
	if (!ctx.cr6.eq) goto loc_830FE8E0;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE8E0;
	sub_82CBBB58(ctx, base);
loc_830FE8E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r11,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_830FE908"))) PPC_WEAK_FUNC(sub_830FE908);
PPC_FUNC_IMPL(__imp__sub_830FE908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x830FE910;
	sub_82CA2BEC(ctx, base);
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
	// bne cr6,0x830fe928
	if (!ctx.cr6.eq) goto loc_830FE928;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE928;
	sub_82CBBB58(ctx, base);
loc_830FE928:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830fe938
	if (!ctx.cr6.eq) goto loc_830FE938;
	// bl 0x82cbbb58
	ctx.lr = 0x830FE938;
	sub_82CBBB58(ctx, base);
loc_830FE938:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830fe9e0
	if (ctx.cr6.lt) goto loc_830FE9E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fe960
	if (ctx.cr6.eq) goto loc_830FE960;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x830fe964
	goto loc_830FE964;
loc_830FE960:
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_830FE964:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// b 0x830fe974
	goto loc_830FE974;
loc_830FE96C:
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830fe9ec
	if (ctx.cr0.eq) goto loc_830FE9EC;
loc_830FE974:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830fe96c
	if (ctx.cr6.lt) goto loc_830FE96C;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f4d88
	ctx.lr = 0x830FE998;
	sub_821F4D88(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830fe9ec
	if (ctx.cr0.eq) goto loc_830FE9EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fe9cc
	if (ctx.cr6.eq) goto loc_830FE9CC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82ca2c60
	ctx.lr = 0x830FE9C0;
	sub_82CA2C60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x821f5f18
	ctx.lr = 0x830FE9CC;
	sub_821F5F18(ctx, base);
loc_830FE9CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// twllei r11,0
	// divwu r11,r29,r11
	ctx.r11.u32 = ctx.r29.u32 / ctx.r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_830FE9E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830FE9E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_830FE9EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fe9e4
	goto loc_830FE9E4;
}

__attribute__((alias("__imp__sub_830FE9F4"))) PPC_WEAK_FUNC(sub_830FE9F4);
PPC_FUNC_IMPL(__imp__sub_830FE9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FE9F8"))) PPC_WEAK_FUNC(sub_830FE9F8);
PPC_FUNC_IMPL(__imp__sub_830FE9F8) {
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
	// bne cr6,0x830fea20
	if (!ctx.cr6.eq) goto loc_830FEA20;
	// bl 0x82cbbb58
	ctx.lr = 0x830FEA20;
	sub_82CBBB58(ctx, base);
loc_830FEA20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe8b8
	ctx.lr = 0x830FEA2C;
	sub_830FE8B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x830fea60
	if (!ctx.cr0.eq) goto loc_830FEA60;
	// bl 0x830fe908
	ctx.lr = 0x830FEA40;
	sub_830FE908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830fea58
	if (ctx.cr0.eq) goto loc_830FEA58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe850
	ctx.lr = 0x830FEA54;
	sub_830FE850(ctx, base);
	// b 0x830fea78
	goto loc_830FEA78;
loc_830FEA58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830fea78
	goto loc_830FEA78;
loc_830FEA60:
	// bl 0x830fe850
	ctx.lr = 0x830FEA64;
	sub_830FE850(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x830FEA74;
	sub_82CA3190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830FEA78:
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

__attribute__((alias("__imp__sub_830FEA90"))) PPC_WEAK_FUNC(sub_830FEA90);
PPC_FUNC_IMPL(__imp__sub_830FEA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FEA98;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r3,21
	ctx.r31.u64 = ctx.r3.u32 & 0x7FF;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x830feadc
	if (ctx.cr6.eq) goto loc_830FEADC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x830fead4
	if (ctx.cr6.eq) goto loc_830FEAD4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x830feae0
	if (!ctx.cr6.eq) goto loc_830FEAE0;
	// addi r31,r31,6144
	ctx.r31.s64 = ctx.r31.s64 + 6144;
	// b 0x830feae0
	goto loc_830FEAE0;
loc_830FEAD4:
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// b 0x830feae0
	goto loc_830FEAE0;
loc_830FEADC:
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
loc_830FEAE0:
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x830feaf4
	if (ctx.cr6.lt) goto loc_830FEAF4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x830feaf4
	if (ctx.cr6.gt) goto loc_830FEAF4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_830FEAF4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830febf8
	if (ctx.cr6.lt) goto loc_830FEBF8;
	// beq cr6,0x830feba4
	if (ctx.cr6.eq) goto loc_830FEBA4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x830feb9c
	if (ctx.cr6.lt) goto loc_830FEB9C;
	// beq cr6,0x830feb58
	if (ctx.cr6.eq) goto loc_830FEB58;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x830feb50
	if (ctx.cr6.eq) goto loc_830FEB50;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x830feb48
	if (ctx.cr6.eq) goto loc_830FEB48;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x830febf0
	if (!ctx.cr6.eq) goto loc_830FEBF0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x830feb38
	if (ctx.cr6.lt) goto loc_830FEB38;
	// bne cr6,0x830feb40
	if (!ctx.cr6.eq) goto loc_830FEB40;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x830feb3c
	goto loc_830FEB3C;
loc_830FEB38:
	// li r11,22
	ctx.r11.s64 = 22;
loc_830FEB3C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830FEB40:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830fec00
	goto loc_830FEC00;
loc_830FEB48:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830febfc
	goto loc_830FEBFC;
loc_830FEB50:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x830febfc
	goto loc_830FEBFC;
loc_830FEB58:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830feb94
	if (ctx.cr6.eq) goto loc_830FEB94;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830feb84
	if (ctx.cr6.lt) goto loc_830FEB84;
	// bl 0x82cbbb58
	ctx.lr = 0x830FEB84;
	sub_82CBBB58(ctx, base);
loc_830FEB84:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// b 0x830fec00
	goto loc_830FEC00;
loc_830FEB94:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x830febfc
	goto loc_830FEBFC;
loc_830FEB9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830febfc
	goto loc_830FEBFC;
loc_830FEBA4:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x830febcc
	if (ctx.cr6.lt) goto loc_830FEBCC;
	// bl 0x82cbbb58
	ctx.lr = 0x830FEBCC;
	sub_82CBBB58(ctx, base);
loc_830FEBCC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x830fec00
	if (ctx.cr6.eq) goto loc_830FEC00;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x830fec00
	if (ctx.cr6.eq) goto loc_830FEC00;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x830fec00
	if (ctx.cr6.eq) goto loc_830FEC00;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x830fec00
	if (ctx.cr6.eq) goto loc_830FEC00;
loc_830FEBF0:
	// bl 0x82cbbb58
	ctx.lr = 0x830FEBF4;
	sub_82CBBB58(ctx, base);
	// b 0x830fec00
	goto loc_830FEC00;
loc_830FEBF8:
	// li r11,4
	ctx.r11.s64 = 4;
loc_830FEBFC:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830FEC00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FEC0C"))) PPC_WEAK_FUNC(sub_830FEC0C);
PPC_FUNC_IMPL(__imp__sub_830FEC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FEC10"))) PPC_WEAK_FUNC(sub_830FEC10);
PPC_FUNC_IMPL(__imp__sub_830FEC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FEC18;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r7,r10,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r10,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xF;
	// rlwinm r29,r10,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x830fec54
	if (ctx.cr0.eq) goto loc_830FEC54;
	// li r9,256
	ctx.r9.s64 = 256;
loc_830FEC54:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830fec90
	if (ctx.cr6.eq) goto loc_830FEC90;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fec7c
	if (ctx.cr0.eq) goto loc_830FEC7C;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,11748
	ctx.r10.s64 = ctx.r10.s64 + 11748;
	// b 0x830fec84
	goto loc_830FEC84;
loc_830FEC7C:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,11732
	ctx.r10.s64 = ctx.r10.s64 + 11732;
loc_830FEC84:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_830FEC90:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// or r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x830fe540
	ctx.lr = 0x830FECA0;
	sub_830FE540(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830feccc
	if (!ctx.cr6.eq) goto loc_830FECCC;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830feccc
	if (!ctx.cr6.eq) goto loc_830FECCC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x830fed28
	goto loc_830FED28;
loc_830FECCC:
	// rlwinm. r10,r29,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x830fecdc
	if (ctx.cr0.eq) goto loc_830FECDC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FECDC:
	// rlwinm. r10,r29,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fece8
	if (ctx.cr0.eq) goto loc_830FECE8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_830FECE8:
	// rlwinm. r10,r29,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fecf4
	if (ctx.cr0.eq) goto loc_830FECF4;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_830FECF4:
	// rlwinm. r10,r29,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fed00
	if (ctx.cr0.eq) goto loc_830FED00;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_830FED00:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_830FED28:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FED34"))) PPC_WEAK_FUNC(sub_830FED34);
PPC_FUNC_IMPL(__imp__sub_830FED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FED38"))) PPC_WEAK_FUNC(sub_830FED38);
PPC_FUNC_IMPL(__imp__sub_830FED38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x830FED40;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830fedb8
	if (ctx.cr6.eq) goto loc_830FEDB8;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,11764
	ctx.r9.s64 = ctx.r9.s64 + 11764;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x830fedbc
	goto loc_830FEDBC;
loc_830FEDB8:
	// li r25,12816
	ctx.r25.s64 = 12816;
loc_830FEDBC:
	// rlwinm r3,r31,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// bl 0x830fe3f0
	ctx.lr = 0x830FEDC4;
	sub_830FE3F0(ctx, base);
	// or r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 | ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fea90
	ctx.lr = 0x830FEDD8;
	sub_830FEA90(ctx, base);
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x830fee40
	if (!ctx.cr6.eq) goto loc_830FEE40;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x830fee40
	if (!ctx.cr6.eq) goto loc_830FEE40;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x830fee1c
	if (ctx.cr6.eq) goto loc_830FEE1C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FEE18;
	sub_82CBBB58(ctx, base);
	// b 0x830fee40
	goto loc_830FEE40;
loc_830FEE1C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r26,21
	ctx.r10.u64 = ctx.r26.u32 & 0x7FF;
	// andis. r11,r11,65521
	ctx.r11.u64 = ctx.r11.u64 & 4293984256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x830fee3c
	if (ctx.cr0.eq) goto loc_830FEE3C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FEE3C;
	sub_82CBBB58(ctx, base);
loc_830FEE3C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_830FEE40:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x830fee6c
	if (!ctx.cr6.eq) goto loc_830FEE6C;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12816, ctx.xer);
	// bne cr6,0x830fee6c
	if (!ctx.cr6.eq) goto loc_830FEE6C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwimi r10,r29,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r30,r10,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x830fee9c
	goto loc_830FEE9C;
loc_830FEE6C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// or r8,r27,r25
	ctx.r8.u64 = ctx.r27.u64 | ctx.r25.u64;
	// rlwimi r10,r29,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwinm r10,r10,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
loc_830FEE9C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830feeb0
	if (ctx.cr6.eq) goto loc_830FEEB0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_830FEEB0:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_830FEEBC"))) PPC_WEAK_FUNC(sub_830FEEBC);
PPC_FUNC_IMPL(__imp__sub_830FEEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FEEC0"))) PPC_WEAK_FUNC(sub_830FEEC0);
PPC_FUNC_IMPL(__imp__sub_830FEEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x830FEEC8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r28,21
	ctx.r4.u64 = ctx.r28.u32 & 0x7FF;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x830fe540
	ctx.lr = 0x830FEEF4;
	sub_830FE540(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// rlwinm r10,r28,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830fef68
	if (ctx.cr6.eq) goto loc_830FEF68;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x830fef3c
	if (ctx.cr0.eq) goto loc_830FEF3C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_830FEF3C:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830fef48
	if (ctx.cr0.eq) goto loc_830FEF48;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_830FEF48:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830fef54
	if (ctx.cr0.eq) goto loc_830FEF54;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_830FEF54:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830fef60
	if (ctx.cr0.eq) goto loc_830FEF60;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_830FEF60:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x830fef78
	goto loc_830FEF78;
loc_830FEF68:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_830FEF78:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,18,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_830FEF98"))) PPC_WEAK_FUNC(sub_830FEF98);
PPC_FUNC_IMPL(__imp__sub_830FEF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x830FEFA0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r9,r27,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r27,21
	ctx.r4.u64 = ctx.r27.u32 & 0x7FF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x830fe540
	ctx.lr = 0x830FEFE0;
	sub_830FE540(ctx, base);
	// rlwinm r11,r27,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830ff04c
	if (ctx.cr6.eq) goto loc_830FF04C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// beq 0x830ff01c
	if (ctx.cr0.eq) goto loc_830FF01C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_830FF01C:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830ff028
	if (ctx.cr0.eq) goto loc_830FF028;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_830FF028:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830ff034
	if (ctx.cr0.eq) goto loc_830FF034;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_830FF034:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ff040
	if (ctx.cr0.eq) goto loc_830FF040;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_830FF040:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x830ff060
	goto loc_830FF060;
loc_830FF04C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830FF060:
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// beq cr6,0x830ff07c
	if (ctx.cr6.eq) goto loc_830FF07C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_830FF07C:
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// addi r11,r11,11764
	ctx.r11.s64 = ctx.r11.s64 + 11764;
	// bne cr6,0x830ff0ac
	if (!ctx.cr6.eq) goto loc_830FF0AC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830ff0ac
	if (!ctx.cr6.eq) goto loc_830FF0AC;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x830ff108
	goto loc_830FF108;
loc_830FF0AC:
	// rlwinm r6,r10,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r6,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r4,r5,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r31,68
	ctx.r31.s64 = 4456448;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r5,r5,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_830FF108:
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x830ff164
	if (ctx.cr6.eq) goto loc_830FF164;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r29,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x830ff16c
	goto loc_830FF16C;
loc_830FF164:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
loc_830FF16C:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_830FF180"))) PPC_WEAK_FUNC(sub_830FF180);
PPC_FUNC_IMPL(__imp__sub_830FF180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x830FF188;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r9,71
	ctx.r9.s64 = 71;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwimi r8,r10,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r3,r8,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// bl 0x830fe540
	ctx.lr = 0x830FF1CC;
	sub_830FE540(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r11,r27,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r27,r27,21
	ctx.r27.u64 = ctx.r27.u32 & 0x7FF;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ff1e8
	if (ctx.cr0.eq) goto loc_830FF1E8;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF1E8;
	sub_82CBBB58(ctx, base);
loc_830FF1E8:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830ff250
	if (ctx.cr6.eq) goto loc_830FF250;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r8,r29,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// beq 0x830ff220
	if (ctx.cr0.eq) goto loc_830FF220;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830FF220:
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830ff22c
	if (ctx.cr0.eq) goto loc_830FF22C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_830FF22C:
	// rlwinm. r9,r29,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830ff238
	if (ctx.cr0.eq) goto loc_830FF238;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_830FF238:
	// rlwinm. r9,r29,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830ff244
	if (ctx.cr0.eq) goto loc_830FF244;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_830FF244:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// b 0x830ff264
	goto loc_830FF264;
loc_830FF250:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r30,r10,16,10,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r30.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r30,10
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_830FF264:
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r9,r9,11764
	ctx.r9.s64 = ctx.r9.s64 + 11764;
	// rlwinm r6,r8,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r5,r28,18,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0xC;
	// rlwimi r27,r7,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_830FF2D0"))) PPC_WEAK_FUNC(sub_830FF2D0);
PPC_FUNC_IMPL(__imp__sub_830FF2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x830FF2D8;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r17,r11,0,3,3
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm r16,r11,0,1,1
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x830ff31c
	if (!ctx.cr0.eq) goto loc_830FF31C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF31C;
	sub_82CBBB58(ctx, base);
loc_830FF31C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// ori r23,r11,512
	ctx.r23.u64 = ctx.r11.u64 | 512;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x830ff38c
	if (!ctx.cr6.lt) goto loc_830FF38C;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r9,r11,25
	ctx.r9.s64 = ctx.r11.s64 + 25;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830ff38c
	if (!ctx.cr6.eq) goto loc_830FF38C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff36c
	if (!ctx.cr6.eq) goto loc_830FF36C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF36C;
	sub_82CBBB58(ctx, base);
loc_830FF36C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x830ff378
	if (ctx.cr6.eq) goto loc_830FF378;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF378;
	sub_82CBBB58(ctx, base);
loc_830FF378:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57360
	ctx.r12.u64 = ctx.r12.u64 | 57360;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
loc_830FF38C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x830ff3c0
	if (ctx.cr6.eq) goto loc_830FF3C0;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r21,0(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,33
	ctx.r27.u64 = ctx.r27.u64 | 33;
	// bge cr6,0x830ff3c4
	if (!ctx.cr6.lt) goto loc_830FF3C4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF3BC;
	sub_82CBBB58(ctx, base);
	// b 0x830ff3c4
	goto loc_830FF3C4;
loc_830FF3C0:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830FF3C4:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// bne cr6,0x830ff3e8
	if (!ctx.cr6.eq) goto loc_830FF3E8;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 80, ctx.xer);
	// lis r11,67
	ctx.r11.s64 = 4390912;
	// beq cr6,0x830ff3e0
	if (ctx.cr6.eq) goto loc_830FF3E0;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_830FF3E0:
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// b 0x830ff4e8
	goto loc_830FF4E8;
loc_830FF3E8:
	// cmpwi cr6,r30,69
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 69, ctx.xer);
	// bne cr6,0x830ff45c
	if (!ctx.cr6.eq) goto loc_830FF45C;
	// li r31,69
	ctx.r31.s64 = 69;
	// cmplwi cr6,r24,20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 20, ctx.xer);
	// beq cr6,0x830ff448
	if (ctx.cr6.eq) goto loc_830FF448;
	// cmplwi cr6,r24,21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 21, ctx.xer);
	// beq cr6,0x830ff43c
	if (ctx.cr6.eq) goto loc_830FF43C;
	// cmplwi cr6,r24,22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 22, ctx.xer);
	// beq cr6,0x830ff434
	if (ctx.cr6.eq) goto loc_830FF434;
	// cmplwi cr6,r24,23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 23, ctx.xer);
	// beq cr6,0x830ff42c
	if (ctx.cr6.eq) goto loc_830FF42C;
	// cmplwi cr6,r24,24
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 24, ctx.xer);
	// beq cr6,0x830ff424
	if (ctx.cr6.eq) goto loc_830FF424;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF420;
	sub_82CBBB58(ctx, base);
	// b 0x830ff44c
	goto loc_830FF44C;
loc_830FF424:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x830ff440
	goto loc_830FF440;
loc_830FF42C:
	// lis r31,3
	ctx.r31.s64 = 196608;
	// b 0x830ff440
	goto loc_830FF440;
loc_830FF434:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x830ff440
	goto loc_830FF440;
loc_830FF43C:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_830FF440:
	// ori r31,r31,69
	ctx.r31.u64 = ctx.r31.u64 | 69;
	// b 0x830ff44c
	goto loc_830FF44C;
loc_830FF448:
	// li r31,69
	ctx.r31.s64 = 69;
loc_830FF44C:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x830ff4f4
	goto loc_830FF4F4;
loc_830FF45C:
	// cmpwi cr6,r30,61
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 61, ctx.xer);
	// beq cr6,0x830ff4e4
	if (ctx.cr6.eq) goto loc_830FF4E4;
	// cmpwi cr6,r30,60
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 60, ctx.xer);
	// beq cr6,0x830ff4e4
	if (ctx.cr6.eq) goto loc_830FF4E4;
	// cmpwi cr6,r30,76
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 76, ctx.xer);
	// beq cr6,0x830ff4e4
	if (ctx.cr6.eq) goto loc_830FF4E4;
	// cmpwi cr6,r30,81
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 81, ctx.xer);
	// beq cr6,0x830ff4d0
	if (ctx.cr6.eq) goto loc_830FF4D0;
	// cmpwi cr6,r30,85
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 85, ctx.xer);
	// beq cr6,0x830ff4d0
	if (ctx.cr6.eq) goto loc_830FF4D0;
	// cmpwi cr6,r30,37
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 37, ctx.xer);
	// beq cr6,0x830ff494
	if (ctx.cr6.eq) goto loc_830FF494;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 38, ctx.xer);
	// bne cr6,0x830ff4e4
	if (!ctx.cr6.eq) goto loc_830FF4E4;
loc_830FF494:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830ff4ac
	if (!ctx.cr6.eq) goto loc_830FF4AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830ff4bc
	goto loc_830FF4BC;
loc_830FF4AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x830ff4bc
	if (ctx.cr6.eq) goto loc_830FF4BC;
	// rlwinm r11,r19,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 10) & 0x1;
loc_830FF4BC:
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x830ff4f4
	goto loc_830FF4F4;
loc_830FF4D0:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwimi r30,r25,17,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 17) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x830ff4f4
	goto loc_830FF4F4;
loc_830FF4E4:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
loc_830FF4E8:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_830FF4F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830fec10
	ctx.lr = 0x830FF504;
	sub_830FEC10(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ff514
	if (!ctx.cr0.eq) goto loc_830FF514;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF514;
	sub_82CBBB58(ctx, base);
loc_830FF514:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x830ff544
	if (!ctx.cr6.eq) goto loc_830FF544;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ff53c
	if (!ctx.cr0.eq) goto loc_830FF53C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF53C;
	sub_82CBBB58(ctx, base);
loc_830FF53C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_830FF544:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// beq cr6,0x830ff56c
	if (ctx.cr6.eq) goto loc_830FF56C;
	// cmplwi cr6,r24,15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 15, ctx.xer);
	// beq cr6,0x830ff56c
	if (ctx.cr6.eq) goto loc_830FF56C;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// beq cr6,0x830ff56c
	if (ctx.cr6.eq) goto loc_830FF56C;
	// cmplwi cr6,r24,37
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 37, ctx.xer);
	// beq cr6,0x830ff604
	if (ctx.cr6.eq) goto loc_830FF604;
	// cmplwi cr6,r24,79
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 79, ctx.xer);
	// bne cr6,0x830ff5e0
	if (!ctx.cr6.eq) goto loc_830FF5E0;
loc_830FF56C:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830ff650
	if (ctx.cr6.eq) goto loc_830FF650;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830ff648
	if (ctx.cr6.eq) goto loc_830FF648;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830ff63c
	if (ctx.cr6.eq) goto loc_830FF63C;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830ff630
	if (ctx.cr6.eq) goto loc_830FF630;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830ff654
	if (!ctx.cr6.eq) goto loc_830FF654;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x830ff634
	goto loc_830FF634;
loc_830FF5B4:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x830ff5e0
	if (!ctx.cr6.eq) goto loc_830FF5E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ff5d8
	if (!ctx.cr0.eq) goto loc_830FF5D8;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF5D8;
	sub_82CBBB58(ctx, base);
loc_830FF5D8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_830FF5E0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fed38
	ctx.lr = 0x830FF5F4;
	sub_830FED38(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ff5b4
	if (!ctx.cr0.eq) goto loc_830FF5B4;
	// b 0x830ff6d4
	goto loc_830FF6D4;
loc_830FF604:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fed38
	ctx.lr = 0x830FF618;
	sub_830FED38(ctx, base);
	// b 0x830ff620
	goto loc_830FF620;
loc_830FF61C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_830FF620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ff61c
	if (!ctx.cr0.eq) goto loc_830FF61C;
	// b 0x830ff6d4
	goto loc_830FF6D4;
loc_830FF630:
	// li r11,7
	ctx.r11.s64 = 7;
loc_830FF634:
	// rlwimi r30,r11,24,4,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF000000) | (ctx.r30.u64 & 0xFFFFFFFFF0FFFFFF);
	// b 0x830ff654
	goto loc_830FF654;
loc_830FF63C:
	// rlwinm r11,r30,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// oris r30,r11,1024
	ctx.r30.u64 = ctx.r11.u64 | 67108864;
	// b 0x830ff654
	goto loc_830FF654;
loc_830FF648:
	// rlwimi r30,r25,25,6,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 25) & 0x3000000) | (ctx.r30.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x830ff654
	goto loc_830FF654;
loc_830FF650:
	// rlwinm r30,r30,0,8,6
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_830FF654:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fed38
	ctx.lr = 0x830FF668;
	sub_830FED38(ctx, base);
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// bne cr6,0x830ff6c4
	if (!ctx.cr6.eq) goto loc_830FF6C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ff680
	if (!ctx.cr0.eq) goto loc_830FF680;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF680;
	sub_82CBBB58(ctx, base);
loc_830FF680:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x830ff6b0
	if (!ctx.cr6.eq) goto loc_830FF6B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ff6a8
	if (!ctx.cr0.eq) goto loc_830FF6A8;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF6A8;
	sub_82CBBB58(ctx, base);
loc_830FF6A8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_830FF6B0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fed38
	ctx.lr = 0x830FF6C4;
	sub_830FED38(ctx, base);
loc_830FF6C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ff6d4
	if (ctx.cr0.eq) goto loc_830FF6D4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF6D4;
	sub_82CBBB58(ctx, base);
loc_830FF6D4:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x830ff6f4
	if (ctx.cr6.eq) goto loc_830FF6F4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830fef98
	ctx.lr = 0x830FF6F4;
	sub_830FEF98(ctx, base);
loc_830FF6F4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x830ff748
	if (ctx.cr6.eq) goto loc_830FF748;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x830ff708
	if (ctx.cr6.lt) goto loc_830FF708;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF708;
	sub_82CBBB58(ctx, base);
loc_830FF708:
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830feec0
	ctx.lr = 0x830FF72C;
	sub_830FEEC0(ctx, base);
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,424(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r26)
	PPC_STORE_U32(ctx.r26.u32 + 428, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830ff748
	if (!ctx.cr6.gt) goto loc_830FF748;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF748;
	sub_82CBBB58(ctx, base);
loc_830FF748:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_830FF75C"))) PPC_WEAK_FUNC(sub_830FF75C);
PPC_FUNC_IMPL(__imp__sub_830FF75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FF760"))) PPC_WEAK_FUNC(sub_830FF760);
PPC_FUNC_IMPL(__imp__sub_830FF760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x830FF768;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830ff794
	if (!ctx.cr6.lt) goto loc_830FF794;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF794;
	sub_82CBBB58(ctx, base);
loc_830FF794:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x830ff7d0
	if (!ctx.cr6.eq) goto loc_830FF7D0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830ff7cc
	if (!ctx.cr6.eq) goto loc_830FF7CC;
	// li r28,43
	ctx.r28.s64 = 43;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x830ff7dc
	goto loc_830FF7DC;
loc_830FF7CC:
	// li r28,83
	ctx.r28.s64 = 83;
loc_830FF7D0:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bgt cr6,0x830ffc3c
	if (ctx.cr6.gt) goto loc_830FFC3C;
	// beq cr6,0x830ffbfc
	if (ctx.cr6.eq) goto loc_830FFBFC;
loc_830FF7DC:
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x830ffc3c
	if (ctx.cr6.gt) goto loc_830FFC3C;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-6904
	ctx.r12.s64 = ctx.r12.s64 + -6904;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31984
	ctx.r12.s64 = -2096103424;
	// addi r12,r12,-2032
	ctx.r12.s64 = ctx.r12.s64 + -2032;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_830FF810;
	case 1:
		goto loc_830FF878;
	case 2:
		goto loc_830FFA64;
	case 3:
		goto loc_830FFA54;
	case 4:
		goto loc_830FFA54;
	case 5:
		goto loc_830FFAF0;
	case 6:
		goto loc_830FFC3C;
	case 7:
		goto loc_830FFC3C;
	case 8:
		goto loc_830FFC3C;
	case 9:
		goto loc_830FFC3C;
	case 10:
		goto loc_830FFC3C;
	case 11:
		goto loc_830FFC3C;
	case 12:
		goto loc_830FFC3C;
	case 13:
		goto loc_830FFA90;
	case 14:
		goto loc_830FFA54;
	case 15:
		goto loc_830FFB58;
	case 16:
		goto loc_830FFC3C;
	case 17:
		goto loc_830FF9B4;
	case 18:
		goto loc_830FFA0C;
	case 19:
		goto loc_830FFA54;
	default:
		__builtin_unreachable();
	}
loc_830FF810:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r10,4608
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4608, ctx.xer);
	// beq cr6,0x830ff840
	if (ctx.cr6.eq) goto loc_830FF840;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF840;
	sub_82CBBB58(ctx, base);
loc_830FF840:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// blt cr6,0x830ff84c
	if (ctx.cr6.lt) goto loc_830FF84C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF84C;
	sub_82CBBB58(ctx, base);
loc_830FF84C:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x830ff868
	if (ctx.cr6.lt) goto loc_830FF868;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830ff868
	if (!ctx.cr6.lt) goto loc_830FF868;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF868;
	sub_82CBBB58(ctx, base);
loc_830FF868:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FF878:
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r29,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r27,r10,24,27,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 14, ctx.xer);
	// beq cr6,0x830ff8a8
	if (ctx.cr6.eq) goto loc_830FF8A8;
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// beq cr6,0x830ff8a8
	if (ctx.cr6.eq) goto loc_830FF8A8;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF8A8;
	sub_82CBBB58(ctx, base);
loc_830FF8A8:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x830ff8b8
	if (!ctx.cr6.eq) goto loc_830FF8B8;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF8B8;
	sub_82CBBB58(ctx, base);
loc_830FF8B8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// clrlwi r30,r28,21
	ctx.r30.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x830ff8d4
	if (ctx.cr6.eq) goto loc_830FF8D4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF8D4;
	sub_82CBBB58(ctx, base);
loc_830FF8D4:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x830ff8e0
	if (ctx.cr6.lt) goto loc_830FF8E0;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF8E0;
	sub_82CBBB58(ctx, base);
loc_830FF8E0:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x830ff8fc
	if (ctx.cr6.lt) goto loc_830FF8FC;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830ff8fc
	if (!ctx.cr6.lt) goto loc_830FF8FC;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF8FC;
	sub_82CBBB58(ctx, base);
loc_830FF8FC:
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// bne cr6,0x830ff938
	if (!ctx.cr6.eq) goto loc_830FF938;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fe640
	ctx.lr = 0x830FF914;
	sub_830FE640(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x830ff9a8
	goto loc_830FF9A8;
loc_830FF938:
	// rlwinm r10,r29,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r29,21
	ctx.r11.u64 = ctx.r29.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x830ff998
	if (!ctx.cr6.eq) goto loc_830FF998;
	// li r9,53
	ctx.r9.s64 = 53;
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,41
	ctx.r7.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FF998:
	// li r9,9
	ctx.r9.s64 = 9;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_830FF9A8:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FF9B4:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ff9c4
	if (!ctx.cr6.eq) goto loc_830FF9C4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FF9C4;
	sub_82CBBB58(ctx, base);
loc_830FF9C4:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830fe850
	ctx.lr = 0x830FF9D0;
	sub_830FE850(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ffa54
	if (ctx.cr0.eq) goto loc_830FFA54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830ffa54
	if (ctx.cr6.eq) goto loc_830FFA54;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r10,41
	ctx.r10.s64 = 41;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FFA0C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ffa1c
	if (!ctx.cr6.eq) goto loc_830FFA1C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFA1C;
	sub_82CBBB58(ctx, base);
loc_830FFA1C:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830fe850
	ctx.lr = 0x830FFA28;
	sub_830FE850(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ffa48
	if (ctx.cr0.eq) goto loc_830FFA48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830ffa48
	if (ctx.cr6.eq) goto loc_830FFA48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_830FFA48:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_830FFA54:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FFA64:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x830ffa84
	if (ctx.cr6.eq) goto loc_830FFA84;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFA84;
	sub_82CBBB58(ctx, base);
loc_830FFA84:
	// clrlwi. r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ffa90
	if (ctx.cr0.eq) goto loc_830FFA90;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFA90;
	sub_82CBBB58(ctx, base);
loc_830FFA90:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x830ffab0
	if (ctx.cr6.eq) goto loc_830FFAB0;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFAB0;
	sub_82CBBB58(ctx, base);
loc_830FFAB0:
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x830ffac0
	if (ctx.cr6.lt) goto loc_830FFAC0;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFAC0;
	sub_82CBBB58(ctx, base);
loc_830FFAC0:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fed38
	ctx.lr = 0x830FFAE8;
	sub_830FED38(ctx, base);
loc_830FFAE8:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FFAF0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x830ffb14
	if (ctx.cr6.eq) goto loc_830FFB14;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFB14;
	sub_82CBBB58(ctx, base);
loc_830FFB14:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x830ffb20
	if (ctx.cr6.lt) goto loc_830FFB20;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFB20;
	sub_82CBBB58(ctx, base);
loc_830FFB20:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x830ffb3c
	if (ctx.cr6.lt) goto loc_830FFB3C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830ffb3c
	if (!ctx.cr6.lt) goto loc_830FFB3C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFB3C;
	sub_82CBBB58(ctx, base);
loc_830FFB3C:
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FFB58:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x830ffb7c
	if (!ctx.cr6.eq) goto loc_830FFB7C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFB7C;
	sub_82CBBB58(ctx, base);
loc_830FFB7C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r28,r11,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// beq cr6,0x830ffb9c
	if (ctx.cr6.eq) goto loc_830FFB9C;
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// beq cr6,0x830ffba4
	if (ctx.cr6.eq) goto loc_830FFBA4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFB9C;
	sub_82CBBB58(ctx, base);
loc_830FFB9C:
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// bne cr6,0x830ffbb0
	if (!ctx.cr6.eq) goto loc_830FFBB0;
loc_830FFBA4:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830ffc30
	goto loc_830FFC30;
loc_830FFBB0:
	// li r10,53
	ctx.r10.s64 = 53;
	// clrlwi r28,r30,21
	ctx.r28.u64 = ctx.r30.u32 & 0x7FF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830ffc40
	if (!ctx.cr6.eq) goto loc_830FFC40;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830fe9f8
	ctx.lr = 0x830FFBF0;
	sub_830FE9F8(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// b 0x830ffc40
	goto loc_830FFC40;
loc_830FFBFC:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x830ffc1c
	if (ctx.cr6.eq) goto loc_830FFC1C;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFC1C;
	sub_82CBBB58(ctx, base);
loc_830FFC1C:
	// clrlwi. r11,r31,21
	ctx.r11.u64 = ctx.r31.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ffc28
	if (ctx.cr0.eq) goto loc_830FFC28;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFC28;
	sub_82CBBB58(ctx, base);
loc_830FFC28:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830FFC30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x830fe640
	ctx.lr = 0x830FFC38;
	sub_830FE640(ctx, base);
	// b 0x830ffae8
	goto loc_830FFAE8;
loc_830FFC3C:
	// bl 0x82cbbb58
	ctx.lr = 0x830FFC40;
	sub_82CBBB58(ctx, base);
loc_830FFC40:
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_830FFC50"))) PPC_WEAK_FUNC(sub_830FFC50);
PPC_FUNC_IMPL(__imp__sub_830FFC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x830FFC58;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830ffce4
	if (ctx.cr6.eq) goto loc_830FFCE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830ffcdc
	if (ctx.cr6.eq) goto loc_830FFCDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830ffcd4
	if (ctx.cr6.eq) goto loc_830FFCD4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x830ffccc
	if (ctx.cr6.eq) goto loc_830FFCCC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830ffcc4
	if (ctx.cr6.eq) goto loc_830FFCC4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x830ffcbc
	if (ctx.cr6.eq) goto loc_830FFCBC;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFCB8;
	sub_82CBBB58(ctx, base);
	// b 0x830ffcec
	goto loc_830FFCEC;
loc_830FFCBC:
	// rlwimi r31,r27,18,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 18) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x830ffcec
	goto loc_830FFCEC;
loc_830FFCC4:
	// rlwinm r31,r31,0,16,12
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// b 0x830ffcec
	goto loc_830FFCEC;
loc_830FFCCC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x830ffce8
	goto loc_830FFCE8;
loc_830FFCD4:
	// rlwimi r31,r27,17,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 17) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x830ffcec
	goto loc_830FFCEC;
loc_830FFCDC:
	// rlwimi r31,r27,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x830ffcec
	goto loc_830FFCEC;
loc_830FFCE4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_830FFCE8:
	// rlwimi r31,r11,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
loc_830FFCEC:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,86
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 86, ctx.xer);
	// bne cr6,0x830ffd9c
	if (!ctx.cr6.eq) goto loc_830FFD9C;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x830ffd24
	if (ctx.cr6.eq) goto loc_830FFD24;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFD24;
	sub_82CBBB58(ctx, base);
loc_830FFD24:
	// rlwinm r10,r30,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830ffd48
	if (!ctx.cr6.eq) goto loc_830FFD48;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x830ffd94
	goto loc_830FFD94;
loc_830FFD48:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// rlwinm. r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x830ffd68
	if (ctx.cr0.eq) goto loc_830FFD68;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830FFD68:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830ffd74
	if (ctx.cr0.eq) goto loc_830FFD74;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_830FFD74:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830ffd80
	if (ctx.cr0.eq) goto loc_830FFD80;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_830FFD80:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830ffd8c
	if (ctx.cr0.eq) goto loc_830FFD8C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_830FFD8C:
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_830FFD94:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x830ffdb0
	goto loc_830FFDB0;
loc_830FFD9C:
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// bne cr6,0x830ffdb0
	if (!ctx.cr6.eq) goto loc_830FFDB0;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_830FFDB0:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ffe0c
	if (ctx.cr0.eq) goto loc_830FFE0C;
loc_830FFDBC:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x830ffde8
	if (!ctx.cr6.eq) goto loc_830FFDE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ffde0
	if (!ctx.cr0.eq) goto loc_830FFDE0;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFDE0;
	sub_82CBBB58(ctx, base);
loc_830FFDE0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_830FFDE8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fed38
	ctx.lr = 0x830FFDFC;
	sub_830FED38(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830ffdbc
	if (!ctx.cr0.eq) goto loc_830FFDBC;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830FFE0C:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_830FFE1C"))) PPC_WEAK_FUNC(sub_830FFE1C);
PPC_FUNC_IMPL(__imp__sub_830FFE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FFE20"))) PPC_WEAK_FUNC(sub_830FFE20);
PPC_FUNC_IMPL(__imp__sub_830FFE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x830FFE28;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830ffe50
	if (ctx.cr6.lt) goto loc_830FFE50;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFE50;
	sub_82CBBB58(ctx, base);
loc_830FFE50:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// bgt cr6,0x830fff38
	if (ctx.cr6.gt) goto loc_830FFF38;
	// rlwinm. r9,r31,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r31,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// li r10,256
	ctx.r10.s64 = 256;
	// beq 0x830ffe8c
	if (ctx.cr0.eq) goto loc_830FFE8C;
	// li r10,257
	ctx.r10.s64 = 257;
loc_830FFE8C:
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830ffe98
	if (ctx.cr0.eq) goto loc_830FFE98;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_830FFE98:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830ffea4
	if (ctx.cr0.eq) goto loc_830FFEA4;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_830FFEA4:
	// ori r9,r10,192
	ctx.r9.u64 = ctx.r10.u64 | 192;
	// rlwinm. r11,r31,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x830ffee4
	if (ctx.cr0.eq) goto loc_830FFEE4;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830ffed0
	if (ctx.cr0.eq) goto loc_830FFED0;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,11748
	ctx.r10.s64 = ctx.r10.s64 + 11748;
	// b 0x830ffed8
	goto loc_830FFED8;
loc_830FFED0:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,11732
	ctx.r10.s64 = ctx.r10.s64 + 11732;
loc_830FFED8:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_830FFEE4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// or r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x830fff00
	if (ctx.cr6.eq) goto loc_830FFF00;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFF00;
	sub_82CBBB58(ctx, base);
loc_830FFF00:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,71
	ctx.r9.s64 = 71;
	// oris r8,r10,81
	ctx.r8.u64 = ctx.r10.u64 | 5308416;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// oris r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 1114112;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x830fffa4
	goto loc_830FFFA4;
loc_830FFF38:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x830fff58
	if (ctx.cr6.eq) goto loc_830FFF58;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFF58;
	sub_82CBBB58(ctx, base);
loc_830FFF58:
	// li r11,71
	ctx.r11.s64 = 71;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fec10
	ctx.lr = 0x830FFF78;
	sub_830FEC10(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fed38
	ctx.lr = 0x830FFF90;
	sub_830FED38(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830fffa4
	if (ctx.cr6.eq) goto loc_830FFFA4;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFFA4;
	sub_82CBBB58(ctx, base);
loc_830FFFA4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_830FFFB8"))) PPC_WEAK_FUNC(sub_830FFFB8);
PPC_FUNC_IMPL(__imp__sub_830FFFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x830FFFC0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r27,r11,0,3,3
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// bne 0x830ffff8
	if (!ctx.cr0.eq) goto loc_830FFFF8;
	// bl 0x82cbbb58
	ctx.lr = 0x830FFFF8;
	sub_82CBBB58(ctx, base);
loc_830FFFF8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83100038
	if (ctx.cr6.eq) goto loc_83100038;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83100020
	if (!ctx.cr0.eq) goto loc_83100020;
	// bl 0x82cbbb58
	ctx.lr = 0x83100020;
	sub_82CBBB58(ctx, base);
loc_83100020:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8310002c
	if (!ctx.cr6.lt) goto loc_8310002C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310002C;
	sub_82CBBB58(ctx, base);
loc_8310002C:
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x8310003c
	goto loc_8310003C;
loc_83100038:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8310003C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83100058
	if (ctx.cr6.gt) goto loc_83100058;
	// clrlwi r3,r29,21
	ctx.r3.u64 = ctx.r29.u32 & 0x7FF;
	// li r9,17
	ctx.r9.s64 = 17;
	// b 0x8310006c
	goto loc_8310006C;
loc_83100058:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fea90
	ctx.lr = 0x83100068;
	sub_830FEA90(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8310006C:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x831000a4
	if (!ctx.cr6.lt) goto loc_831000A4;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r10,r9,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,55
	ctx.r8.s64 = 55;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,21008
	ctx.r9.s64 = 21008;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x831001c4
	goto loc_831001C4;
loc_831000A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x831001ac
	if (ctx.cr6.eq) goto loc_831001AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// ori r8,r10,33
	ctx.r8.u64 = ctx.r10.u64 | 33;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r25,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83100140
	if (ctx.cr6.eq) goto loc_83100140;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r5,68
	ctx.r5.s64 = 4456448;
	// addi r7,r7,11764
	ctx.r7.s64 = ctx.r7.s64 + 11764;
	// rlwinm r4,r6,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// rlwinm r6,r6,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r7,r4,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// b 0x83100150
	goto loc_83100150;
loc_83100140:
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83100150:
	// rlwinm r10,r25,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xF000000;
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r8,21845
	ctx.r8.s64 = 21845;
	// bne cr6,0x83100188
	if (!ctx.cr6.eq) goto loc_83100188;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x831001a0
	goto loc_831001A0;
loc_83100188:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831001A0:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r3,33
	ctx.r3.s64 = 33;
	// li r9,4
	ctx.r9.s64 = 4;
loc_831001AC:
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r10,55
	ctx.r10.s64 = 55;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_831001C4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_831001D8"))) PPC_WEAK_FUNC(sub_831001D8);
PPC_FUNC_IMPL(__imp__sub_831001D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x831001E0;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r19,0(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r14,r11,0,3,3
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// bne 0x8310021c
	if (!ctx.cr0.eq) goto loc_8310021C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310021C;
	sub_82CBBB58(ctx, base);
loc_8310021C:
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r15,r24
	ctx.r15.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83100240
	if (!ctx.cr6.eq) goto loc_83100240;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x83100250
	goto loc_83100250;
loc_83100240:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq cr6,0x83100250
	if (ctx.cr6.eq) goto loc_83100250;
	// rlwinm r29,r24,10,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 10) & 0x1;
loc_83100250:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r22,r11,512
	ctx.r22.u64 = ctx.r11.u64 | 512;
	// ori r18,r10,33
	ctx.r18.u64 = ctx.r10.u64 | 33;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x831002a0
	if (ctx.cr6.eq) goto loc_831002A0;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83100278
	if (!ctx.cr0.eq) goto loc_83100278;
	// bl 0x82cbbb58
	ctx.lr = 0x83100278;
	sub_82CBBB58(ctx, base);
loc_83100278:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x83100284
	if (!ctx.cr6.lt) goto loc_83100284;
	// bl 0x82cbbb58
	ctx.lr = 0x83100284;
	sub_82CBBB58(ctx, base);
loc_83100284:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r16,0(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
	// b 0x831002a4
	goto loc_831002A4;
loc_831002A0:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831002A4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// beq 0x83100338
	if (ctx.cr0.eq) goto loc_83100338;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_831002C4:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x831002d0
	if (ctx.cr6.lt) goto loc_831002D0;
	// bl 0x82cbbb58
	ctx.lr = 0x831002D0;
	sub_82CBBB58(ctx, base);
loc_831002D0:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r21,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83100320
	if (!ctx.cr6.eq) goto loc_83100320;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x83100304
	if (ctx.cr6.gt) goto loc_83100304;
	// bl 0x82cbbb58
	ctx.lr = 0x83100304;
	sub_82CBBB58(ctx, base);
loc_83100304:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83100314
	if (!ctx.cr0.eq) goto loc_83100314;
	// bl 0x82cbbb58
	ctx.lr = 0x83100314;
	sub_82CBBB58(ctx, base);
loc_83100314:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_83100320:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831002c4
	if (!ctx.cr0.eq) goto loc_831002C4;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83100338:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x83100368
	if (ctx.cr6.lt) goto loc_83100368;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x83100354
	if (!ctx.cr6.lt) goto loc_83100354;
	// bl 0x82cbbb58
	ctx.lr = 0x83100354;
	sub_82CBBB58(ctx, base);
loc_83100354:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r26,r11,0,8,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// b 0x8310036c
	goto loc_8310036C;
loc_83100368:
	// clrlwi r31,r15,21
	ctx.r31.u64 = ctx.r15.u32 & 0x7FF;
loc_8310036C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r19,4
	ctx.r9.s64 = ctx.r19.s64 + 4;
	// rlwinm. r27,r26,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwimi r11,r29,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// beq 0x83100390
	if (ctx.cr0.eq) goto loc_83100390;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// b 0x83100394
	goto loc_83100394;
loc_83100390:
	// ori r10,r10,93
	ctx.r10.u64 = ctx.r10.u64 | 93;
loc_83100394:
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83100400
	if (!ctx.cr6.eq) goto loc_83100400;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831003b0
	if (ctx.cr6.eq) goto loc_831003B0;
	// bl 0x82cbbb58
	ctx.lr = 0x831003B0;
	sub_82CBBB58(ctx, base);
loc_831003B0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831003c4
	if (ctx.cr6.lt) goto loc_831003C4;
	// bl 0x82cbbb58
	ctx.lr = 0x831003C4;
	sub_82CBBB58(ctx, base);
loc_831003C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830fec10
	ctx.lr = 0x831003D4;
	sub_830FEC10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,81
	ctx.r10.s64 = 81;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// ori r10,r9,12816
	ctx.r10.u64 = ctx.r9.u64 | 12816;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83100554
	goto loc_83100554;
loc_83100400:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x83100454
	if (!ctx.cr6.eq) goto loc_83100454;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8310041c
	if (ctx.cr6.eq) goto loc_8310041C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310041C;
	sub_82CBBB58(ctx, base);
loc_8310041C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83100428
	if (ctx.cr6.eq) goto loc_83100428;
	// bl 0x82cbbb58
	ctx.lr = 0x83100428;
	sub_82CBBB58(ctx, base);
loc_83100428:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830fec10
	ctx.lr = 0x83100438;
	sub_830FEC10(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830fed38
	ctx.lr = 0x83100450;
	sub_830FED38(ctx, base);
	// b 0x83100554
	goto loc_83100554;
loc_83100454:
	// rlwinm r29,r30,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x83100468
	if (ctx.cr6.eq) goto loc_83100468;
	// bl 0x82cbbb58
	ctx.lr = 0x83100468;
	sub_82CBBB58(ctx, base);
loc_83100468:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x83100474
	if (!ctx.cr6.lt) goto loc_83100474;
	// bl 0x82cbbb58
	ctx.lr = 0x83100474;
	sub_82CBBB58(ctx, base);
loc_83100474:
	// lis r28,228
	ctx.r28.s64 = 14942208;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8310049c
	if (ctx.cr6.eq) goto loc_8310049C;
	// oris r24,r24,15
	ctx.r24.u64 = ctx.r24.u64 | 983040;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8310049c
	if (!ctx.cr6.eq) goto loc_8310049C;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
loc_8310049C:
	// rlwinm. r11,r26,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831004a8
	if (ctx.cr0.eq) goto loc_831004A8;
	// lis r30,96
	ctx.r30.s64 = 6291456;
loc_831004A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830fec10
	ctx.lr = 0x831004B8;
	sub_830FEC10(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fed38
	ctx.lr = 0x831004D4;
	sub_830FED38(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83100510
	if (ctx.cr6.eq) goto loc_83100510;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831004ec
	if (ctx.cr0.eq) goto loc_831004EC;
	// bl 0x82cbbb58
	ctx.lr = 0x831004EC;
	sub_82CBBB58(ctx, base);
loc_831004EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831004f8
	if (ctx.cr6.eq) goto loc_831004F8;
	// bl 0x82cbbb58
	ctx.lr = 0x831004F8;
	sub_82CBBB58(ctx, base);
loc_831004F8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fed38
	ctx.lr = 0x83100510;
	sub_830FED38(ctx, base);
loc_83100510:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x83100534
	if (ctx.cr6.eq) goto loc_83100534;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830fef98
	ctx.lr = 0x83100530;
	sub_830FEF98(ctx, base);
	// b 0x83100554
	goto loc_83100554;
loc_83100534:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83100554
	if (ctx.cr6.eq) goto loc_83100554;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x830ff180
	ctx.lr = 0x83100554;
	sub_830FF180(ctx, base);
loc_83100554:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r20,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83100570"))) PPC_WEAK_FUNC(sub_83100570);
PPC_FUNC_IMPL(__imp__sub_83100570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x83100578;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x831005a0
	if (!ctx.cr6.eq) goto loc_831005A0;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x831005ac
	goto loc_831005AC;
loc_831005A0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r21,r11,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831005AC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x831005c0
	if (!ctx.cr6.lt) goto loc_831005C0;
	// bl 0x82cbbb58
	ctx.lr = 0x831005C0;
	sub_82CBBB58(ctx, base);
loc_831005C0:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r26,0(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r20,r11,0,3,3
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x831005e8
	if (!ctx.cr0.eq) goto loc_831005E8;
	// bl 0x82cbbb58
	ctx.lr = 0x831005E8;
	sub_82CBBB58(ctx, base);
loc_831005E8:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// ori r24,r11,33
	ctx.r24.u64 = ctx.r11.u64 | 33;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// beq cr6,0x8310063c
	if (ctx.cr6.eq) goto loc_8310063C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83100614
	if (!ctx.cr0.eq) goto loc_83100614;
	// bl 0x82cbbb58
	ctx.lr = 0x83100614;
	sub_82CBBB58(ctx, base);
loc_83100614:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x83100620
	if (ctx.cr6.gt) goto loc_83100620;
	// bl 0x82cbbb58
	ctx.lr = 0x83100620;
	sub_82CBBB58(ctx, base);
loc_83100620:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r19,0(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
	// b 0x83100640
	goto loc_83100640;
loc_8310063C:
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83100640:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831006b8
	if (ctx.cr0.eq) goto loc_831006B8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83100654:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stwx r9,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83100698
	if (!ctx.cr6.eq) goto loc_83100698;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310068c
	if (!ctx.cr0.eq) goto loc_8310068C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310068C;
	sub_82CBBB58(ctx, base);
loc_8310068C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_83100698:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83100654
	if (!ctx.cr0.eq) goto loc_83100654;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x831006b8
	if (!ctx.cr6.gt) goto loc_831006B8;
	// bl 0x82cbbb58
	ctx.lr = 0x831006B8;
	sub_82CBBB58(ctx, base);
loc_831006B8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwimi r11,r21,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r21.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x831006e0
	if (!ctx.cr6.eq) goto loc_831006E0;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x831006e8
	goto loc_831006E8;
loc_831006E0:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_831006E8:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8310071c
	if (ctx.cr6.eq) goto loc_8310071C;
	// oris r27,r27,15
	ctx.r27.u64 = ctx.r27.u64 | 983040;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x8310071c
	if (!ctx.cr6.eq) goto loc_8310071C;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
loc_8310071C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830fec10
	ctx.lr = 0x8310072C;
	sub_830FEC10(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fed38
	ctx.lr = 0x8310074C;
	sub_830FED38(ctx, base);
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// bne cr6,0x83100770
	if (!ctx.cr6.eq) goto loc_83100770;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83100764
	if (ctx.cr0.eq) goto loc_83100764;
	// bl 0x82cbbb58
	ctx.lr = 0x83100764;
	sub_82CBBB58(ctx, base);
loc_83100764:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8310079c
	goto loc_8310079C;
loc_83100770:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// beq cr6,0x8310077c
	if (ctx.cr6.eq) goto loc_8310077C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310077C;
	sub_82CBBB58(ctx, base);
loc_8310077C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fed38
	ctx.lr = 0x83100794;
	sub_830FED38(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_8310079C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fed38
	ctx.lr = 0x831007AC;
	sub_830FED38(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x831007d0
	if (ctx.cr6.eq) goto loc_831007D0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x830fef98
	ctx.lr = 0x831007CC;
	sub_830FEF98(ctx, base);
	// b 0x831007f0
	goto loc_831007F0;
loc_831007D0:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x831007f0
	if (ctx.cr6.eq) goto loc_831007F0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x830ff180
	ctx.lr = 0x831007F0;
	sub_830FF180(ctx, base);
loc_831007F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_83100804"))) PPC_WEAK_FUNC(sub_83100804);
PPC_FUNC_IMPL(__imp__sub_83100804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83100808"))) PPC_WEAK_FUNC(sub_83100808);
PPC_FUNC_IMPL(__imp__sub_83100808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83100810;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8310083c
	if (!ctx.cr6.eq) goto loc_8310083C;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x83100848
	goto loc_83100848;
loc_8310083C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r17,r11,27,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83100848:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310085c
	if (ctx.cr6.lt) goto loc_8310085C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310085C;
	sub_82CBBB58(ctx, base);
loc_8310085C:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8310087c
	if (!ctx.cr0.eq) goto loc_8310087C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310087C;
	sub_82CBBB58(ctx, base);
loc_8310087C:
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// clrlwi r30,r20,21
	ctx.r30.u64 = ctx.r20.u32 & 0x7FF;
	// rlwimi r10,r20,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r20.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r15,r11,4
	ctx.r15.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x831008a8
	if (ctx.cr6.eq) goto loc_831008A8;
	// bl 0x82cbbb58
	ctx.lr = 0x831008A8;
	sub_82CBBB58(ctx, base);
loc_831008A8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fe540
	ctx.lr = 0x831008BC;
	sub_830FE540(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// li r9,80
	ctx.r9.s64 = 80;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r7,r23,16,10,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x3F0000;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r23,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r9,r30,16,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// or r22,r7,r8
	ctx.r22.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r21,r10,r8
	ctx.r21.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r9,r10,12816
	ctx.r9.u64 = ctx.r10.u64 | 12816;
	// li r25,33
	ctx.r25.s64 = 33;
	// rlwinm r10,r27,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83100984
	if (ctx.cr6.eq) goto loc_83100984;
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,11764
	ctx.r9.s64 = ctx.r9.s64 + 11764;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x83100988
	goto loc_83100988;
loc_83100984:
	// li r24,12816
	ctx.r24.s64 = 12816;
loc_83100988:
	// rlwinm r3,r27,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF000000;
	// bl 0x830fe3f0
	ctx.lr = 0x83100990;
	sub_830FE3F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830fea90
	ctx.lr = 0x831009A4;
	sub_830FEA90(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x831009d4
	if (!ctx.cr6.eq) goto loc_831009D4;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x831009d4
	if (!ctx.cr6.eq) goto loc_831009D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r26,r11,26
	ctx.r26.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83100a00
	goto loc_83100A00;
loc_831009D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r26,r11,26
	ctx.r26.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// or r9,r28,r24
	ctx.r9.u64 = ctx.r28.u64 | ctx.r24.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83100A00:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// oris r9,r9,81
	ctx.r9.u64 = ctx.r9.u64 | 5308416;
	// oris r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 65536;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x83100a68
	if (!ctx.cr6.eq) goto loc_83100A68;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x83100a68
	if (!ctx.cr6.eq) goto loc_83100A68;
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x83100a84
	goto loc_83100A84;
loc_83100A68:
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r28,r24
	ctx.r7.u64 = ctx.r28.u64 | ctx.r24.u64;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_83100A84:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 4259840;
	// li r8,50
	ctx.r8.s64 = 50;
	// li r27,4369
	ctx.r27.s64 = 4369;
	// li r7,93
	ctx.r7.s64 = 93;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// rlwimi r10,r17,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r17.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beq cr6,0x83100ae0
	if (ctx.cr6.eq) goto loc_83100AE0;
	// bl 0x82cbbb58
	ctx.lr = 0x83100AE0;
	sub_82CBBB58(ctx, base);
loc_83100AE0:
	// cmplwi cr6,r16,67
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 67, ctx.xer);
	// bne cr6,0x83100b04
	if (!ctx.cr6.eq) goto loc_83100B04;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830fec10
	ctx.lr = 0x83100AF8;
	sub_830FEC10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x83100c70
	goto loc_83100C70;
loc_83100B04:
	// cmplwi cr6,r16,68
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 68, ctx.xer);
	// bne cr6,0x83100c74
	if (!ctx.cr6.eq) goto loc_83100C74;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// li r8,272
	ctx.r8.s64 = 272;
	// ori r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 | 15;
	// rlwinm r7,r26,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r9,r7,64
	ctx.r9.u64 = ctx.r7.u64 | 4194304;
	// or r7,r28,r24
	ctx.r7.u64 = ctx.r28.u64 | ctx.r24.u64;
	// or r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 | ctx.r29.u64;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// li r5,73
	ctx.r5.s64 = 73;
	// oris r4,r9,65
	ctx.r4.u64 = ctx.r9.u64 | 4259840;
	// rlwinm. r3,r20,0,8,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x83100bac
	if (ctx.cr0.eq) goto loc_83100BAC;
	// li r9,256
	ctx.r9.s64 = 256;
loc_83100BAC:
	// rlwinm. r8,r20,8,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// beq 0x83100be8
	if (ctx.cr0.eq) goto loc_83100BE8;
	// rlwinm. r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83100bd4
	if (ctx.cr0.eq) goto loc_83100BD4;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,11748
	ctx.r7.s64 = ctx.r7.s64 + 11748;
	// b 0x83100bdc
	goto loc_83100BDC;
loc_83100BD4:
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// addi r7,r7,11732
	ctx.r7.s64 = ctx.r7.s64 + 11732;
loc_83100BDC:
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r7,r8,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
loc_83100BE8:
	// or. r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x83100c0c
	if (!ctx.cr0.eq) goto loc_83100C0C;
	// rlwinm r9,r20,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83100c0c
	if (!ctx.cr6.eq) goto loc_83100C0C;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83100c58
	goto loc_83100C58;
loc_83100C0C:
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm. r6,r20,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r20,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// beq 0x83100c28
	if (ctx.cr0.eq) goto loc_83100C28;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83100C28:
	// rlwinm. r6,r8,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83100c34
	if (ctx.cr0.eq) goto loc_83100C34;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_83100C34:
	// rlwinm. r6,r8,0,13,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83100c40
	if (ctx.cr0.eq) goto loc_83100C40;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_83100C40:
	// rlwinm. r8,r8,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83100c4c
	if (ctx.cr0.eq) goto loc_83100C4C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_83100C4C:
	// or r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 | ctx.r7.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_83100C58:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,8738
	ctx.r9.s64 = 8738;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83100C70:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_83100C74:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r15,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r15.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83100C88"))) PPC_WEAK_FUNC(sub_83100C88);
PPC_FUNC_IMPL(__imp__sub_83100C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x83100C90;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83100cb4
	if (ctx.cr6.eq) goto loc_83100CB4;
	// bl 0x82cbbb58
	ctx.lr = 0x83100CB4;
	sub_82CBBB58(ctx, base);
loc_83100CB4:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r29,0(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83100cd0
	if (!ctx.cr0.eq) goto loc_83100CD0;
	// bl 0x82cbbb58
	ctx.lr = 0x83100CD0;
	sub_82CBBB58(ctx, base);
loc_83100CD0:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// clrlwi r27,r28,21
	ctx.r27.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r10,r28,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r3,r10,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// bl 0x830fe540
	ctx.lr = 0x83100D00;
	sub_830FE540(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r19,33
	ctx.r19.s64 = 33;
	// or r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// rlwinm. r7,r28,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r23,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x83100d38
	if (ctx.cr0.eq) goto loc_83100D38;
	// li r8,256
	ctx.r8.s64 = 256;
loc_83100D38:
	// rlwinm. r11,r28,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x83100d74
	if (ctx.cr0.eq) goto loc_83100D74;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83100d60
	if (ctx.cr0.eq) goto loc_83100D60;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,11748
	ctx.r10.s64 = ctx.r10.s64 + 11748;
	// b 0x83100d68
	goto loc_83100D68;
loc_83100D60:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,11732
	ctx.r10.s64 = ctx.r10.s64 + 11732;
loc_83100D68:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_83100D74:
	// rlwinm. r11,r28,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r18,r10,r8
	ctx.r18.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r29,r9,4
	ctx.r29.s64 = ctx.r9.s64 + 4;
	// beq 0x83100d90
	if (ctx.cr0.eq) goto loc_83100D90;
	// ori r11,r18,1
	ctx.r11.u64 = ctx.r18.u64 | 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x83100d94
	goto loc_83100D94;
loc_83100D90:
	// stw r18,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
loc_83100D94:
	// rlwinm r11,r30,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r31,r10,11764
	ctx.r31.s64 = ctx.r10.s64 + 11764;
	// beq cr6,0x83100df0
	if (ctx.cr6.eq) goto loc_83100DF0;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r8,r9,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r9,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x83100df4
	goto loc_83100DF4;
loc_83100DF0:
	// li r20,12816
	ctx.r20.s64 = 12816;
loc_83100DF4:
	// rlwinm r26,r30,0,4,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830fe3f0
	ctx.lr = 0x83100E00;
	sub_830FE3F0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fea90
	ctx.lr = 0x83100E14;
	sub_830FEA90(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83100e44
	if (!ctx.cr6.eq) goto loc_83100E44;
	// cmplwi cr6,r20,12816
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 12816, ctx.xer);
	// bne cr6,0x83100e44
	if (!ctx.cr6.eq) goto loc_83100E44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | ctx.r25.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83100e70
	goto loc_83100E70;
loc_83100E44:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | ctx.r25.u64;
	// or r9,r22,r20
	ctx.r9.u64 = ctx.r22.u64 | ctx.r20.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83100E70:
	// rlwinm r10,r30,14,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3F;
	// addi r9,r27,8
	ctx.r9.s64 = ctx.r27.s64 + 8;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r27,r9,16
	ctx.r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r8,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r7,r30,18,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xC;
	// oris r6,r27,1
	ctx.r6.u64 = ctx.r27.u64 | 65536;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r14,r31,29
	ctx.r14.u64 = ctx.r31.u32 & 0x7;
	// bl 0x830fe3f0
	ctx.lr = 0x83100ED0;
	sub_830FE3F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fea90
	ctx.lr = 0x83100EE4;
	sub_830FEA90(ctx, base);
	// rlwinm r11,r31,4,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x70;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// or r8,r11,r14
	ctx.r8.u64 = ctx.r11.u64 | ctx.r14.u64;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// or r10,r8,r14
	ctx.r10.u64 = ctx.r8.u64 | ctx.r14.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 | ctx.r26.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r14
	ctx.r9.u64 = ctx.r7.u64 | ctx.r14.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// rlwinm. r8,r28,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x83100f48
	if (ctx.cr0.eq) goto loc_83100F48;
	// ori r9,r18,4
	ctx.r9.u64 = ctx.r18.u64 | 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83100f4c
	goto loc_83100F4C;
loc_83100F48:
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_83100F4C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83100f70
	if (!ctx.cr6.eq) goto loc_83100F70;
	// cmplwi cr6,r20,12816
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 12816, ctx.xer);
	// bne cr6,0x83100f70
	if (!ctx.cr6.eq) goto loc_83100F70;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83100f8c
	goto loc_83100F8C;
loc_83100F70:
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r22,r20
	ctx.r8.u64 = ctx.r22.u64 | ctx.r20.u64;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_83100F8C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r9,r27,65
	ctx.r9.u64 = ctx.r27.u64 | 4259840;
	// rlwinm r8,r31,28,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x7;
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r31,0,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | ctx.r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// stw r17,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83100FE8"))) PPC_WEAK_FUNC(sub_83100FE8);
PPC_FUNC_IMPL(__imp__sub_83100FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x83100FF0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83101014
	if (!ctx.cr6.eq) goto loc_83101014;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x83101020
	goto loc_83101020;
loc_83101014:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83101020:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83101034
	if (ctx.cr6.lt) goto loc_83101034;
	// bl 0x82cbbb58
	ctx.lr = 0x83101034;
	sub_82CBBB58(ctx, base);
loc_83101034:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x83101070
	if (ctx.cr6.eq) goto loc_83101070;
	// bl 0x82cbbb58
	ctx.lr = 0x83101070;
	sub_82CBBB58(ctx, base);
loc_83101070:
	// rlwimi r29,r25,8,23,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r25.u32, 8) & 0x100) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r11,93
	ctx.r11.s64 = 93;
	// clrlwi r10,r29,23
	ctx.r10.u64 = ctx.r29.u32 & 0x1FF;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fec10
	ctx.lr = 0x8310109C;
	sub_830FEC10(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x831010b4
	if (ctx.cr6.eq) goto loc_831010B4;
	// bl 0x82cbbb58
	ctx.lr = 0x831010B4;
	sub_82CBBB58(ctx, base);
loc_831010B4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fea90
	ctx.lr = 0x831010C4;
	sub_830FEA90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// bl 0x830fe3f0
	ctx.lr = 0x831010D0;
	sub_830FE3F0(ctx, base);
	// rlwinm r31,r30,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83101134
	if (ctx.cr6.eq) goto loc_83101134;
	// bl 0x82cbbb58
	ctx.lr = 0x831010E8;
	sub_82CBBB58(ctx, base);
	// rlwinm r11,r31,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,11764
	ctx.r10.s64 = ctx.r10.s64 + 11764;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r8,r31,18,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x83101138
	goto loc_83101138;
loc_83101134:
	// li r11,12816
	ctx.r11.s64 = 12816;
loc_83101138:
	// cmplwi cr6,r26,82
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 82, ctx.xer);
	// bne cr6,0x8310116c
	if (!ctx.cr6.eq) goto loc_8310116C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8310116c
	if (!ctx.cr6.eq) goto loc_8310116C;
	// cmplwi cr6,r11,12816
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12816, ctx.xer);
	// bne cr6,0x8310116c
	if (!ctx.cr6.eq) goto loc_8310116C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r10,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x831011c8
	goto loc_831011C8;
loc_8310116C:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplwi cr6,r26,69
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 69, ctx.xer);
	// or r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x831011a8
	if (!ctx.cr6.eq) goto loc_831011A8;
	// li r9,13312
	ctx.r9.s64 = 13312;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x831011bc
	goto loc_831011BC;
loc_831011A8:
	// cmplwi cr6,r26,70
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 70, ctx.xer);
	// bne cr6,0x831011bc
	if (!ctx.cr6.eq) goto loc_831011BC;
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
loc_831011BC:
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_831011C8:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_831011D8"))) PPC_WEAK_FUNC(sub_831011D8);
PPC_FUNC_IMPL(__imp__sub_831011D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831011E0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83101204
	if (ctx.cr6.lt) goto loc_83101204;
	// bl 0x82cbbb58
	ctx.lr = 0x83101204;
	sub_82CBBB58(ctx, base);
loc_83101204:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r31,r10,21
	ctx.r31.u64 = ctx.r10.u32 & 0x7FF;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r9,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8310123c
	if (ctx.cr6.eq) goto loc_8310123C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310123C;
	sub_82CBBB58(ctx, base);
loc_8310123C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fe540
	ctx.lr = 0x83101250;
	sub_830FE540(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,34
	ctx.r10.s64 = 34;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830fed38
	ctx.lr = 0x831012B0;
	sub_830FED38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_831012C4"))) PPC_WEAK_FUNC(sub_831012C4);
PPC_FUNC_IMPL(__imp__sub_831012C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831012C8"))) PPC_WEAK_FUNC(sub_831012C8);
PPC_FUNC_IMPL(__imp__sub_831012C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x831012D0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831012f4
	if (ctx.cr6.lt) goto loc_831012F4;
	// bl 0x82cbbb58
	ctx.lr = 0x831012F4;
	sub_82CBBB58(ctx, base);
loc_831012F4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r10,21
	ctx.r29.u64 = ctx.r10.u32 & 0x7FF;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r28,r9,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r10,r11,-73
	ctx.r10.s64 = ctx.r11.s64 + -73;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x83101340
	if (!ctx.cr6.eq) goto loc_83101340;
	// lhz r11,14(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 14);
loc_83101340:
	// addi r11,r11,-77
	ctx.r11.s64 = ctx.r11.s64 + -77;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x83101358
	if (ctx.cr6.eq) goto loc_83101358;
	// bl 0x82cbbb58
	ctx.lr = 0x83101358;
	sub_82CBBB58(ctx, base);
loc_83101358:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x830fe540
	ctx.lr = 0x83101378;
	sub_830FE540(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// li r7,34
	ctx.r7.s64 = 34;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// oris r10,r31,17
	ctx.r10.u64 = ctx.r31.u64 | 1114112;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830fed38
	ctx.lr = 0x831013E4;
	sub_830FED38(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83101430
	if (ctx.cr6.eq) goto loc_83101430;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// li r8,71
	ctx.r8.s64 = 71;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// oris r8,r31,81
	ctx.r8.u64 = ctx.r31.u64 | 5308416;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,13107
	ctx.r9.s64 = 13107;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83101434
	goto loc_83101434;
loc_83101430:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83101434:
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_83101444"))) PPC_WEAK_FUNC(sub_83101444);
PPC_FUNC_IMPL(__imp__sub_83101444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83101448"))) PPC_WEAK_FUNC(sub_83101448);
PPC_FUNC_IMPL(__imp__sub_83101448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x83101450;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83101474
	if (!ctx.cr6.eq) goto loc_83101474;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x83101480
	goto loc_83101480;
loc_83101474:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83101480:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83101494
	if (ctx.cr6.lt) goto loc_83101494;
	// bl 0x82cbbb58
	ctx.lr = 0x83101494;
	sub_82CBBB58(ctx, base);
loc_83101494:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x831014b8
	if (ctx.cr6.eq) goto loc_831014B8;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x831014bc
	if (!ctx.cr6.eq) goto loc_831014BC;
loc_831014B8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831014BC:
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r8,34
	ctx.r8.s64 = 34;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// clrlwi r27,r23,21
	ctx.r27.u64 = ctx.r23.u32 & 0x7FF;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwimi r9,r23,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
	// rlwinm r24,r9,24,27,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// beq cr6,0x831014f4
	if (ctx.cr6.eq) goto loc_831014F4;
	// bl 0x82cbbb58
	ctx.lr = 0x831014F4;
	sub_82CBBB58(ctx, base);
loc_831014F4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830fe540
	ctx.lr = 0x83101508;
	sub_830FE540(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x8310151c
	if (ctx.cr6.eq) goto loc_8310151C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310151C;
	sub_82CBBB58(ctx, base);
loc_8310151C:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r22,r29,16
	ctx.r22.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r11,r31,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r20,r31,26
	ctx.r20.u64 = ctx.r31.u32 & 0x3F;
	// or r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 | ctx.r22.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x83101560
	if (ctx.cr6.eq) goto loc_83101560;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// beq cr6,0x83101558
	if (ctx.cr6.eq) goto loc_83101558;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x83101558
	if (ctx.cr6.eq) goto loc_83101558;
	// li r10,208
	ctx.r10.s64 = 208;
	// b 0x83101564
	goto loc_83101564;
loc_83101558:
	// li r10,144
	ctx.r10.s64 = 144;
	// b 0x83101564
	goto loc_83101564;
loc_83101560:
	// li r10,228
	ctx.r10.s64 = 228;
loc_83101564:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// oris r9,r31,17
	ctx.r9.u64 = ctx.r31.u64 | 1114112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830fed38
	ctx.lr = 0x83101598;
	sub_830FED38(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r26,93
	ctx.r26.s64 = 93;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x83101648
	if (ctx.cr6.eq) goto loc_83101648;
	// cmplwi cr6,r25,74
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 74, ctx.xer);
	// beq cr6,0x83101648
	if (ctx.cr6.eq) goto loc_83101648;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x8310160c
	if (ctx.cr6.eq) goto loc_8310160C;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// bne cr6,0x83101690
	if (!ctx.cr6.eq) goto loc_83101690;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,156(r21)
	PPC_STORE_U32(ctx.r21.u32 + 156, ctx.r10.u32);
	// lis r10,88
	ctx.r10.s64 = 5767168;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,257
	ctx.r8.s64 = 257;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// ori r9,r7,12816
	ctx.r9.u64 = ctx.r7.u64 | 12816;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8310181c
	goto loc_8310181C;
loc_8310160C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// oris r7,r31,81
	ctx.r7.u64 = ctx.r31.u64 | 5308416;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,13107
	ctx.r9.s64 = 13107;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x831016a0
	goto loc_831016A0;
loc_83101648:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwimi r10,r19,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830fec10
	ctx.lr = 0x8310167C;
	sub_830FEC10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83101690:
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x831016a0
	if (ctx.cr6.eq) goto loc_831016A0;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// bne cr6,0x83101820
	if (!ctx.cr6.eq) goto loc_83101820;
loc_831016A0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x831016bc
	if (ctx.cr6.eq) goto loc_831016BC;
	// bl 0x82cbbb58
	ctx.lr = 0x831016BC;
	sub_82CBBB58(ctx, base);
loc_831016BC:
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x831016ec
	if (!ctx.cr6.eq) goto loc_831016EC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r10,r10,47768
	ctx.r10.u64 = ctx.r10.u64 | 47768;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x831017d4
	goto loc_831017D4;
loc_831016EC:
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r11,r29,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83101750
	if (ctx.cr6.eq) goto loc_83101750;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,11764
	ctx.r9.s64 = ctx.r9.s64 + 11764;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x83101754
	goto loc_83101754;
loc_83101750:
	// li r28,12816
	ctx.r28.s64 = 12816;
loc_83101754:
	// rlwinm r3,r29,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// bl 0x830fe3f0
	ctx.lr = 0x8310175C;
	sub_830FE3F0(ctx, base);
	// andi. r11,r3,34952
	ctx.r11.u64 = ctx.r3.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,34952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34952, ctx.xer);
	// bne cr6,0x83101778
	if (!ctx.cr6.eq) goto loc_83101778;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r30,r3,r12
	ctx.r30.u64 = ctx.r3.u64 & ctx.r12.u64;
	// b 0x8310177c
	goto loc_8310177C;
loc_83101778:
	// ori r30,r3,34952
	ctx.r30.u64 = ctx.r3.u64 | 34952;
loc_8310177C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fea90
	ctx.lr = 0x8310178C;
	sub_830FEA90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831017b4
	if (!ctx.cr6.eq) goto loc_831017B4;
	// cmplwi cr6,r28,12816
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12816, ctx.xer);
	// bne cr6,0x831017b4
	if (!ctx.cr6.eq) goto loc_831017B4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x831017dc
	goto loc_831017DC;
loc_831017B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 | ctx.r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_831017D4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_831017DC:
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r27,r19,8,23,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// or r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 | ctx.r22.u64;
	// clrlwi r10,r27,23
	ctx.r10.u64 = ctx.r27.u32 & 0x1FF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r26,r10,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830fec10
	ctx.lr = 0x83101814;
	sub_830FEC10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8310181C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83101820:
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_83101830"))) PPC_WEAK_FUNC(sub_83101830);
PPC_FUNC_IMPL(__imp__sub_83101830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x83101838;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8310185c
	if (!ctx.cr6.eq) goto loc_8310185C;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x83101868
	goto loc_83101868;
loc_8310185C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r20,r11,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83101868:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8310188c
	if (ctx.cr6.eq) goto loc_8310188C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8310188c
	if (ctx.cr6.eq) goto loc_8310188C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310188C;
	sub_82CBBB58(ctx, base);
loc_8310188C:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,0(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r23,r11,4
	ctx.r23.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x831018c8
	if (ctx.cr6.eq) goto loc_831018C8;
	// bl 0x82cbbb58
	ctx.lr = 0x831018C8;
	sub_82CBBB58(ctx, base);
loc_831018C8:
	// li r11,34
	ctx.r11.s64 = 34;
	// addi r25,r28,4
	ctx.r25.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r26,85
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 85, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bne cr6,0x831018fc
	if (!ctx.cr6.eq) goto loc_831018FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fec10
	ctx.lr = 0x831018F0;
	sub_830FEC10(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8310194c
	goto loc_8310194C;
loc_831018FC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fe540
	ctx.lr = 0x83101910;
	sub_830FE540(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x83101924
	if (ctx.cr6.eq) goto loc_83101924;
	// bl 0x82cbbb58
	ctx.lr = 0x83101924;
	sub_82CBBB58(ctx, base);
loc_83101924:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r10,r28,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8310194C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x83101964
	if (ctx.cr6.eq) goto loc_83101964;
	// bl 0x82cbbb58
	ctx.lr = 0x83101964;
	sub_82CBBB58(ctx, base);
loc_83101964:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830fed38
	ctx.lr = 0x8310197C;
	sub_830FED38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,17
	ctx.r9.s64 = 17;
	// cmplwi cr6,r26,83
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 83, ctx.xer);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x831019dc
	if (!ctx.cr6.eq) goto loc_831019DC;
	// rlwimi r30,r20,8,23,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0x100) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r10,93
	ctx.r10.s64 = 93;
	// clrlwi r9,r30,23
	ctx.r9.u64 = ctx.r30.u32 & 0x1FF;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fec10
	ctx.lr = 0x831019C8;
	sub_830FEC10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r28,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_831019DC:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_831019EC"))) PPC_WEAK_FUNC(sub_831019EC);
PPC_FUNC_IMPL(__imp__sub_831019EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831019F0"))) PPC_WEAK_FUNC(sub_831019F0);
PPC_FUNC_IMPL(__imp__sub_831019F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb4
	ctx.lr = 0x831019F8;
	sub_82CA2BB4(ctx, base);
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r15,r9,-17856
	ctx.r15.s64 = ctx.r9.s64 + -17856;
	// addi r10,r10,-6328
	ctx.r10.s64 = ctx.r10.s64 + -6328;
	// li r11,75
	ctx.r11.s64 = 75;
	// lis r27,-31984
	ctx.r27.s64 = -2096103424;
	// stw r11,-17856(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17856, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r10.u32);
	// addi r11,r27,-3376
	ctx.r11.s64 = ctx.r27.s64 + -3376;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r9.u32);
	// lis r28,-31984
	ctx.r28.s64 = -2096103424;
	// stw r11,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
	// lis r29,-31984
	ctx.r29.s64 = -2096103424;
	// stw r10,16(r15)
	PPC_STORE_U32(ctx.r15.u32 + 16, ctx.r10.u32);
	// addi r9,r28,-3376
	ctx.r9.s64 = ctx.r28.s64 + -3376;
	// addi r10,r29,-3376
	ctx.r10.s64 = ctx.r29.s64 + -3376;
	// li r11,91
	ctx.r11.s64 = 91;
	// stw r9,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r9.u32);
	// lis r30,-31984
	ctx.r30.s64 = -2096103424;
	// stw r10,28(r15)
	PPC_STORE_U32(ctx.r15.u32 + 28, ctx.r10.u32);
	// stw r11,24(r15)
	PPC_STORE_U32(ctx.r15.u32 + 24, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r11,r30,-3376
	ctx.r11.s64 = ctx.r30.s64 + -3376;
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r9,32(r15)
	PPC_STORE_U32(ctx.r15.u32 + 32, ctx.r9.u32);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,36(r15)
	PPC_STORE_U32(ctx.r15.u32 + 36, ctx.r11.u32);
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// stw r10,40(r15)
	PPC_STORE_U32(ctx.r15.u32 + 40, ctx.r10.u32);
	// addi r9,r31,-3376
	ctx.r9.s64 = ctx.r31.s64 + -3376;
	// addi r10,r3,-3376
	ctx.r10.s64 = ctx.r3.s64 + -3376;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r9,44(r15)
	PPC_STORE_U32(ctx.r15.u32 + 44, ctx.r9.u32);
	// lis r4,-31984
	ctx.r4.s64 = -2096103424;
	// stw r10,52(r15)
	PPC_STORE_U32(ctx.r15.u32 + 52, ctx.r10.u32);
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
	// li r9,85
	ctx.r9.s64 = 85;
	// addi r11,r4,-3376
	ctx.r11.s64 = ctx.r4.s64 + -3376;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,56(r15)
	PPC_STORE_U32(ctx.r15.u32 + 56, ctx.r9.u32);
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// stw r11,60(r15)
	PPC_STORE_U32(ctx.r15.u32 + 60, ctx.r11.u32);
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// stw r10,64(r15)
	PPC_STORE_U32(ctx.r15.u32 + 64, ctx.r10.u32);
	// addi r9,r5,-3376
	ctx.r9.s64 = ctx.r5.s64 + -3376;
	// addi r10,r6,-3376
	ctx.r10.s64 = ctx.r6.s64 + -3376;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r9,68(r15)
	PPC_STORE_U32(ctx.r15.u32 + 68, ctx.r9.u32);
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// stw r10,76(r15)
	PPC_STORE_U32(ctx.r15.u32 + 76, ctx.r10.u32);
	// stw r11,72(r15)
	PPC_STORE_U32(ctx.r15.u32 + 72, ctx.r11.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r11,r7,-3376
	ctx.r11.s64 = ctx.r7.s64 + -3376;
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r9,80(r15)
	PPC_STORE_U32(ctx.r15.u32 + 80, ctx.r9.u32);
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// stw r11,84(r15)
	PPC_STORE_U32(ctx.r15.u32 + 84, ctx.r11.u32);
	// lis r23,-31984
	ctx.r23.s64 = -2096103424;
	// stw r10,88(r15)
	PPC_STORE_U32(ctx.r15.u32 + 88, ctx.r10.u32);
	// addi r9,r8,-3376
	ctx.r9.s64 = ctx.r8.s64 + -3376;
	// li r11,86
	ctx.r11.s64 = 86;
	// addi r10,r23,-6328
	ctx.r10.s64 = ctx.r23.s64 + -6328;
	// stw r9,92(r15)
	PPC_STORE_U32(ctx.r15.u32 + 92, ctx.r9.u32);
	// stw r11,96(r15)
	PPC_STORE_U32(ctx.r15.u32 + 96, ctx.r11.u32);
	// lis r24,-31984
	ctx.r24.s64 = -2096103424;
	// lis r25,-31984
	ctx.r25.s64 = -2096103424;
	// stw r10,100(r15)
	PPC_STORE_U32(ctx.r15.u32 + 100, ctx.r10.u32);
	// lis r26,-31984
	ctx.r26.s64 = -2096103424;
	// lis r27,-31984
	ctx.r27.s64 = -2096103424;
	// lis r28,-31984
	ctx.r28.s64 = -2096103424;
	// lis r29,-31984
	ctx.r29.s64 = -2096103424;
	// lis r30,-31984
	ctx.r30.s64 = -2096103424;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// lis r4,-31984
	ctx.r4.s64 = -2096103424;
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// stw r11,104(r15)
	PPC_STORE_U32(ctx.r15.u32 + 104, ctx.r11.u32);
	// addi r11,r25,-3376
	ctx.r11.s64 = ctx.r25.s64 + -3376;
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r11,116(r15)
	PPC_STORE_U32(ctx.r15.u32 + 116, ctx.r11.u32);
	// addi r9,r24,-6328
	ctx.r9.s64 = ctx.r24.s64 + -6328;
	// stw r10,112(r15)
	PPC_STORE_U32(ctx.r15.u32 + 112, ctx.r10.u32);
	// li r11,57
	ctx.r11.s64 = 57;
	// addi r10,r26,-3376
	ctx.r10.s64 = ctx.r26.s64 + -3376;
	// stw r9,108(r15)
	PPC_STORE_U32(ctx.r15.u32 + 108, ctx.r9.u32);
	// stw r11,128(r15)
	PPC_STORE_U32(ctx.r15.u32 + 128, ctx.r11.u32);
	// addi r11,r28,-6328
	ctx.r11.s64 = ctx.r28.s64 + -6328;
	// stw r10,124(r15)
	PPC_STORE_U32(ctx.r15.u32 + 124, ctx.r10.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,140(r15)
	PPC_STORE_U32(ctx.r15.u32 + 140, ctx.r11.u32);
	// stw r9,120(r15)
	PPC_STORE_U32(ctx.r15.u32 + 120, ctx.r9.u32);
	// addi r9,r27,-6328
	ctx.r9.s64 = ctx.r27.s64 + -6328;
	// stw r10,136(r15)
	PPC_STORE_U32(ctx.r15.u32 + 136, ctx.r10.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// addi r10,r29,-3376
	ctx.r10.s64 = ctx.r29.s64 + -3376;
	// stw r9,132(r15)
	PPC_STORE_U32(ctx.r15.u32 + 132, ctx.r9.u32);
	// stw r11,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r11.u32);
	// addi r11,r31,-3376
	ctx.r11.s64 = ctx.r31.s64 + -3376;
	// stw r10,148(r15)
	PPC_STORE_U32(ctx.r15.u32 + 148, ctx.r10.u32);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,164(r15)
	PPC_STORE_U32(ctx.r15.u32 + 164, ctx.r11.u32);
	// stw r9,144(r15)
	PPC_STORE_U32(ctx.r15.u32 + 144, ctx.r9.u32);
	// addi r9,r30,-3376
	ctx.r9.s64 = ctx.r30.s64 + -3376;
	// stw r10,160(r15)
	PPC_STORE_U32(ctx.r15.u32 + 160, ctx.r10.u32);
	// li r11,69
	ctx.r11.s64 = 69;
	// addi r10,r3,-3376
	ctx.r10.s64 = ctx.r3.s64 + -3376;
	// stw r9,156(r15)
	PPC_STORE_U32(ctx.r15.u32 + 156, ctx.r9.u32);
	// stw r11,176(r15)
	PPC_STORE_U32(ctx.r15.u32 + 176, ctx.r11.u32);
	// addi r11,r5,-3376
	ctx.r11.s64 = ctx.r5.s64 + -3376;
	// stw r10,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,188(r15)
	PPC_STORE_U32(ctx.r15.u32 + 188, ctx.r11.u32);
	// stw r9,168(r15)
	PPC_STORE_U32(ctx.r15.u32 + 168, ctx.r9.u32);
	// addi r9,r4,-3376
	ctx.r9.s64 = ctx.r4.s64 + -3376;
	// stw r10,184(r15)
	PPC_STORE_U32(ctx.r15.u32 + 184, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r6,-3376
	ctx.r10.s64 = ctx.r6.s64 + -3376;
	// stw r9,180(r15)
	PPC_STORE_U32(ctx.r15.u32 + 180, ctx.r9.u32);
	// stw r11,200(r15)
	PPC_STORE_U32(ctx.r15.u32 + 200, ctx.r11.u32);
	// addi r11,r8,-2208
	ctx.r11.s64 = ctx.r8.s64 + -2208;
	// stw r10,196(r15)
	PPC_STORE_U32(ctx.r15.u32 + 196, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,212(r15)
	PPC_STORE_U32(ctx.r15.u32 + 212, ctx.r11.u32);
	// stw r9,192(r15)
	PPC_STORE_U32(ctx.r15.u32 + 192, ctx.r9.u32);
	// addi r9,r7,-2208
	ctx.r9.s64 = ctx.r7.s64 + -2208;
	// stw r10,208(r15)
	PPC_STORE_U32(ctx.r15.u32 + 208, ctx.r10.u32);
	// li r11,62
	ctx.r11.s64 = 62;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// stw r9,204(r15)
	PPC_STORE_U32(ctx.r15.u32 + 204, ctx.r9.u32);
	// lis r18,-31984
	ctx.r18.s64 = -2096103424;
	// stw r11,216(r15)
	PPC_STORE_U32(ctx.r15.u32 + 216, ctx.r11.u32);
	// lis r19,-31984
	ctx.r19.s64 = -2096103424;
	// lis r20,-31984
	ctx.r20.s64 = -2096103424;
	// lis r21,-31984
	ctx.r21.s64 = -2096103424;
	// lis r22,-31984
	ctx.r22.s64 = -2096103424;
	// lis r23,-31984
	ctx.r23.s64 = -2096103424;
	// lis r24,-31984
	ctx.r24.s64 = -2096103424;
	// lis r25,-31984
	ctx.r25.s64 = -2096103424;
	// lis r29,-31984
	ctx.r29.s64 = -2096103424;
	// lis r30,-31984
	ctx.r30.s64 = -2096103424;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// lis r4,-31984
	ctx.r4.s64 = -2096103424;
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lis r26,-31984
	ctx.r26.s64 = -2096103424;
	// lis r27,-31984
	ctx.r27.s64 = -2096103424;
	// lis r28,-31984
	ctx.r28.s64 = -2096103424;
	// addi r10,r10,-2208
	ctx.r10.s64 = ctx.r10.s64 + -2208;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r18,-2208
	ctx.r11.s64 = ctx.r18.s64 + -2208;
	// stw r10,220(r15)
	PPC_STORE_U32(ctx.r15.u32 + 220, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r9,224(r15)
	PPC_STORE_U32(ctx.r15.u32 + 224, ctx.r9.u32);
	// addi r9,r19,-2208
	ctx.r9.s64 = ctx.r19.s64 + -2208;
	// stw r11,228(r15)
	PPC_STORE_U32(ctx.r15.u32 + 228, ctx.r11.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r10,232(r15)
	PPC_STORE_U32(ctx.r15.u32 + 232, ctx.r10.u32);
	// addi r10,r20,-2208
	ctx.r10.s64 = ctx.r20.s64 + -2208;
	// stw r9,236(r15)
	PPC_STORE_U32(ctx.r15.u32 + 236, ctx.r9.u32);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r11,240(r15)
	PPC_STORE_U32(ctx.r15.u32 + 240, ctx.r11.u32);
	// addi r11,r21,-6328
	ctx.r11.s64 = ctx.r21.s64 + -6328;
	// stw r10,244(r15)
	PPC_STORE_U32(ctx.r15.u32 + 244, ctx.r10.u32);
	// li r10,78
	ctx.r10.s64 = 78;
	// stw r9,248(r15)
	PPC_STORE_U32(ctx.r15.u32 + 248, ctx.r9.u32);
	// addi r9,r22,-3376
	ctx.r9.s64 = ctx.r22.s64 + -3376;
	// stw r11,252(r15)
	PPC_STORE_U32(ctx.r15.u32 + 252, ctx.r11.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r10,256(r15)
	PPC_STORE_U32(ctx.r15.u32 + 256, ctx.r10.u32);
	// addi r10,r23,-3376
	ctx.r10.s64 = ctx.r23.s64 + -3376;
	// stw r9,260(r15)
	PPC_STORE_U32(ctx.r15.u32 + 260, ctx.r9.u32);
	// li r9,87
	ctx.r9.s64 = 87;
	// stw r11,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r11.u32);
	// addi r11,r24,-6328
	ctx.r11.s64 = ctx.r24.s64 + -6328;
	// stw r10,268(r15)
	PPC_STORE_U32(ctx.r15.u32 + 268, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,272(r15)
	PPC_STORE_U32(ctx.r15.u32 + 272, ctx.r9.u32);
	// addi r9,r25,-3376
	ctx.r9.s64 = ctx.r25.s64 + -3376;
	// stw r11,276(r15)
	PPC_STORE_U32(ctx.r15.u32 + 276, ctx.r11.u32);
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r10,280(r15)
	PPC_STORE_U32(ctx.r15.u32 + 280, ctx.r10.u32);
	// addi r10,r29,-3376
	ctx.r10.s64 = ctx.r29.s64 + -3376;
	// stw r9,284(r15)
	PPC_STORE_U32(ctx.r15.u32 + 284, ctx.r9.u32);
	// li r9,89
	ctx.r9.s64 = 89;
	// stw r11,288(r15)
	PPC_STORE_U32(ctx.r15.u32 + 288, ctx.r11.u32);
	// addi r11,r30,-3376
	ctx.r11.s64 = ctx.r30.s64 + -3376;
	// stw r10,292(r15)
	PPC_STORE_U32(ctx.r15.u32 + 292, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r9,296(r15)
	PPC_STORE_U32(ctx.r15.u32 + 296, ctx.r9.u32);
	// addi r9,r31,-2208
	ctx.r9.s64 = ctx.r31.s64 + -2208;
	// stw r11,300(r15)
	PPC_STORE_U32(ctx.r15.u32 + 300, ctx.r11.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r10,304(r15)
	PPC_STORE_U32(ctx.r15.u32 + 304, ctx.r10.u32);
	// addi r10,r3,-2208
	ctx.r10.s64 = ctx.r3.s64 + -2208;
	// stw r9,308(r15)
	PPC_STORE_U32(ctx.r15.u32 + 308, ctx.r9.u32);
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r11,312(r15)
	PPC_STORE_U32(ctx.r15.u32 + 312, ctx.r11.u32);
	// addi r11,r4,-2208
	ctx.r11.s64 = ctx.r4.s64 + -2208;
	// stw r10,316(r15)
	PPC_STORE_U32(ctx.r15.u32 + 316, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r9,320(r15)
	PPC_STORE_U32(ctx.r15.u32 + 320, ctx.r9.u32);
	// addi r9,r5,-944
	ctx.r9.s64 = ctx.r5.s64 + -944;
	// stw r11,324(r15)
	PPC_STORE_U32(ctx.r15.u32 + 324, ctx.r11.u32);
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r10,328(r15)
	PPC_STORE_U32(ctx.r15.u32 + 328, ctx.r10.u32);
	// addi r10,r6,-2208
	ctx.r10.s64 = ctx.r6.s64 + -2208;
	// stw r9,332(r15)
	PPC_STORE_U32(ctx.r15.u32 + 332, ctx.r9.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r11,336(r15)
	PPC_STORE_U32(ctx.r15.u32 + 336, ctx.r11.u32);
	// addi r11,r7,-2208
	ctx.r11.s64 = ctx.r7.s64 + -2208;
	// stw r10,340(r15)
	PPC_STORE_U32(ctx.r15.u32 + 340, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,344(r15)
	PPC_STORE_U32(ctx.r15.u32 + 344, ctx.r9.u32);
	// addi r9,r8,-2208
	ctx.r9.s64 = ctx.r8.s64 + -2208;
	// stw r11,348(r15)
	PPC_STORE_U32(ctx.r15.u32 + 348, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,352(r15)
	PPC_STORE_U32(ctx.r15.u32 + 352, ctx.r10.u32);
	// addi r10,r26,-944
	ctx.r10.s64 = ctx.r26.s64 + -944;
	// stw r9,356(r15)
	PPC_STORE_U32(ctx.r15.u32 + 356, ctx.r9.u32);
	// lis r29,-31984
	ctx.r29.s64 = -2096103424;
	// lis r30,-31984
	ctx.r30.s64 = -2096103424;
	// stw r11,360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 360, ctx.r11.u32);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r10,364(r15)
	PPC_STORE_U32(ctx.r15.u32 + 364, ctx.r10.u32);
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// lis r4,-31984
	ctx.r4.s64 = -2096103424;
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r27,-6328
	ctx.r11.s64 = ctx.r27.s64 + -6328;
	// stw r9,368(r15)
	PPC_STORE_U32(ctx.r15.u32 + 368, ctx.r9.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,372(r15)
	PPC_STORE_U32(ctx.r15.u32 + 372, ctx.r11.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r10,376(r15)
	PPC_STORE_U32(ctx.r15.u32 + 376, ctx.r10.u32);
	// addi r10,r29,-6328
	ctx.r10.s64 = ctx.r29.s64 + -6328;
	// stw r11,384(r15)
	PPC_STORE_U32(ctx.r15.u32 + 384, ctx.r11.u32);
	// addi r9,r28,-6328
	ctx.r9.s64 = ctx.r28.s64 + -6328;
	// stw r10,388(r15)
	PPC_STORE_U32(ctx.r15.u32 + 388, ctx.r10.u32);
	// addi r11,r30,-480
	ctx.r11.s64 = ctx.r30.s64 + -480;
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r9,380(r15)
	PPC_STORE_U32(ctx.r15.u32 + 380, ctx.r9.u32);
	// stw r11,516(r15)
	PPC_STORE_U32(ctx.r15.u32 + 516, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,520(r15)
	PPC_STORE_U32(ctx.r15.u32 + 520, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r3,472
	ctx.r10.s64 = ctx.r3.s64 + 472;
	// stw r9,512(r15)
	PPC_STORE_U32(ctx.r15.u32 + 512, ctx.r9.u32);
	// stw r11,528(r15)
	PPC_STORE_U32(ctx.r15.u32 + 528, ctx.r11.u32);
	// addi r9,r31,-72
	ctx.r9.s64 = ctx.r31.s64 + -72;
	// stw r10,532(r15)
	PPC_STORE_U32(ctx.r15.u32 + 532, ctx.r10.u32);
	// addi r11,r4,2056
	ctx.r11.s64 = ctx.r4.s64 + 2056;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r9,524(r15)
	PPC_STORE_U32(ctx.r15.u32 + 524, ctx.r9.u32);
	// stw r11,540(r15)
	PPC_STORE_U32(ctx.r15.u32 + 540, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,544(r15)
	PPC_STORE_U32(ctx.r15.u32 + 544, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r6,4072
	ctx.r10.s64 = ctx.r6.s64 + 4072;
	// stw r9,536(r15)
	PPC_STORE_U32(ctx.r15.u32 + 536, ctx.r9.u32);
	// stw r11,552(r15)
	PPC_STORE_U32(ctx.r15.u32 + 552, ctx.r11.u32);
	// addi r9,r5,2056
	ctx.r9.s64 = ctx.r5.s64 + 2056;
	// stw r10,556(r15)
	PPC_STORE_U32(ctx.r15.u32 + 556, ctx.r10.u32);
	// addi r11,r7,4072
	ctx.r11.s64 = ctx.r7.s64 + 4072;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,548(r15)
	PPC_STORE_U32(ctx.r15.u32 + 548, ctx.r9.u32);
	// stw r11,564(r15)
	PPC_STORE_U32(ctx.r15.u32 + 564, ctx.r11.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r10,568(r15)
	PPC_STORE_U32(ctx.r15.u32 + 568, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// stw r9,560(r15)
	PPC_STORE_U32(ctx.r15.u32 + 560, ctx.r9.u32);
	// stw r11,576(r15)
	PPC_STORE_U32(ctx.r15.u32 + 576, ctx.r11.u32);
	// addi r9,r8,4568
	ctx.r9.s64 = ctx.r8.s64 + 4568;
	// addi r11,r10,5192
	ctx.r11.s64 = ctx.r10.s64 + 5192;
	// stw r9,572(r15)
	PPC_STORE_U32(ctx.r15.u32 + 572, ctx.r9.u32);
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// stw r11,580(r15)
	PPC_STORE_U32(ctx.r15.u32 + 580, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r17,-31984
	ctx.r17.s64 = -2096103424;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r11,592(r15)
	PPC_STORE_U32(ctx.r15.u32 + 592, ctx.r11.u32);
	// addi r9,r9,4808
	ctx.r9.s64 = ctx.r9.s64 + 4808;
	// lis r16,-31984
	ctx.r16.s64 = -2096103424;
	// stw r10,584(r15)
	PPC_STORE_U32(ctx.r15.u32 + 584, ctx.r10.u32);
	// addi r11,r17,-6328
	ctx.r11.s64 = ctx.r17.s64 + -6328;
	// stw r9,588(r15)
	PPC_STORE_U32(ctx.r15.u32 + 588, ctx.r9.u32);
	// lis r18,-31984
	ctx.r18.s64 = -2096103424;
	// lis r19,-31984
	ctx.r19.s64 = -2096103424;
	// stw r11,604(r15)
	PPC_STORE_U32(ctx.r15.u32 + 604, ctx.r11.u32);
	// lis r20,-31984
	ctx.r20.s64 = -2096103424;
	// lis r21,-31984
	ctx.r21.s64 = -2096103424;
	// lis r22,-31984
	ctx.r22.s64 = -2096103424;
	// lis r23,-31984
	ctx.r23.s64 = -2096103424;
	// lis r24,-31984
	ctx.r24.s64 = -2096103424;
	// lis r25,-31984
	ctx.r25.s64 = -2096103424;
	// lis r26,-31984
	ctx.r26.s64 = -2096103424;
	// lis r27,-31984
	ctx.r27.s64 = -2096103424;
	// lis r28,-31984
	ctx.r28.s64 = -2096103424;
	// lis r29,-31984
	ctx.r29.s64 = -2096103424;
	// lis r30,-31984
	ctx.r30.s64 = -2096103424;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lis r4,-31984
	ctx.r4.s64 = -2096103424;
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// addi r10,r16,5192
	ctx.r10.s64 = ctx.r16.s64 + 5192;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,596(r15)
	PPC_STORE_U32(ctx.r15.u32 + 596, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,600(r15)
	PPC_STORE_U32(ctx.r15.u32 + 600, ctx.r9.u32);
	// stw r11,616(r15)
	PPC_STORE_U32(ctx.r15.u32 + 616, ctx.r11.u32);
	// addi r9,r18,5192
	ctx.r9.s64 = ctx.r18.s64 + 5192;
	// stw r10,608(r15)
	PPC_STORE_U32(ctx.r15.u32 + 608, ctx.r10.u32);
	// addi r11,r20,-3376
	ctx.r11.s64 = ctx.r20.s64 + -3376;
	// addi r10,r19,5192
	ctx.r10.s64 = ctx.r19.s64 + 5192;
	// stw r9,612(r15)
	PPC_STORE_U32(ctx.r15.u32 + 612, ctx.r9.u32);
	// stw r11,628(r15)
	PPC_STORE_U32(ctx.r15.u32 + 628, ctx.r11.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// stw r10,620(r15)
	PPC_STORE_U32(ctx.r15.u32 + 620, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,61
	ctx.r10.s64 = 61;
	// stw r9,624(r15)
	PPC_STORE_U32(ctx.r15.u32 + 624, ctx.r9.u32);
	// stw r11,640(r15)
	PPC_STORE_U32(ctx.r15.u32 + 640, ctx.r11.u32);
	// addi r9,r21,-3376
	ctx.r9.s64 = ctx.r21.s64 + -3376;
	// stw r10,632(r15)
	PPC_STORE_U32(ctx.r15.u32 + 632, ctx.r10.u32);
	// addi r11,r23,-6328
	ctx.r11.s64 = ctx.r23.s64 + -6328;
	// addi r10,r22,-3376
	ctx.r10.s64 = ctx.r22.s64 + -3376;
	// stw r9,636(r15)
	PPC_STORE_U32(ctx.r15.u32 + 636, ctx.r9.u32);
	// stw r11,652(r15)
	PPC_STORE_U32(ctx.r15.u32 + 652, ctx.r11.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,644(r15)
	PPC_STORE_U32(ctx.r15.u32 + 644, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r9,648(r15)
	PPC_STORE_U32(ctx.r15.u32 + 648, ctx.r9.u32);
	// stw r11,664(r15)
	PPC_STORE_U32(ctx.r15.u32 + 664, ctx.r11.u32);
	// addi r9,r24,4072
	ctx.r9.s64 = ctx.r24.s64 + 4072;
	// stw r10,656(r15)
	PPC_STORE_U32(ctx.r15.u32 + 656, ctx.r10.u32);
	// addi r11,r26,5192
	ctx.r11.s64 = ctx.r26.s64 + 5192;
	// addi r10,r25,6192
	ctx.r10.s64 = ctx.r25.s64 + 6192;
	// stw r9,660(r15)
	PPC_STORE_U32(ctx.r15.u32 + 660, ctx.r9.u32);
	// stw r11,676(r15)
	PPC_STORE_U32(ctx.r15.u32 + 676, ctx.r11.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r10,668(r15)
	PPC_STORE_U32(ctx.r15.u32 + 668, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,672(r15)
	PPC_STORE_U32(ctx.r15.u32 + 672, ctx.r9.u32);
	// stw r11,688(r15)
	PPC_STORE_U32(ctx.r15.u32 + 688, ctx.r11.u32);
	// addi r9,r27,6192
	ctx.r9.s64 = ctx.r27.s64 + 6192;
	// stw r10,680(r15)
	PPC_STORE_U32(ctx.r15.u32 + 680, ctx.r10.u32);
	// addi r11,r29,-6240
	ctx.r11.s64 = ctx.r29.s64 + -6240;
	// addi r10,r28,5192
	ctx.r10.s64 = ctx.r28.s64 + 5192;
	// stw r9,684(r15)
	PPC_STORE_U32(ctx.r15.u32 + 684, ctx.r9.u32);
	// stw r11,700(r15)
	PPC_STORE_U32(ctx.r15.u32 + 700, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,692(r15)
	PPC_STORE_U32(ctx.r15.u32 + 692, ctx.r10.u32);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,696(r15)
	PPC_STORE_U32(ctx.r15.u32 + 696, ctx.r9.u32);
	// stw r11,712(r15)
	PPC_STORE_U32(ctx.r15.u32 + 712, ctx.r11.u32);
	// addi r9,r30,-3376
	ctx.r9.s64 = ctx.r30.s64 + -3376;
	// stw r10,704(r15)
	PPC_STORE_U32(ctx.r15.u32 + 704, ctx.r10.u32);
	// addi r11,r3,-3376
	ctx.r11.s64 = ctx.r3.s64 + -3376;
	// addi r10,r31,3208
	ctx.r10.s64 = ctx.r31.s64 + 3208;
	// stw r9,708(r15)
	PPC_STORE_U32(ctx.r15.u32 + 708, ctx.r9.u32);
	// stw r11,724(r15)
	PPC_STORE_U32(ctx.r15.u32 + 724, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,716(r15)
	PPC_STORE_U32(ctx.r15.u32 + 716, ctx.r10.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r9,720(r15)
	PPC_STORE_U32(ctx.r15.u32 + 720, ctx.r9.u32);
	// stw r11,736(r15)
	PPC_STORE_U32(ctx.r15.u32 + 736, ctx.r11.u32);
	// addi r9,r8,-3376
	ctx.r9.s64 = ctx.r8.s64 + -3376;
	// addi r11,r4,-3376
	ctx.r11.s64 = ctx.r4.s64 + -3376;
	// stw r10,728(r15)
	PPC_STORE_U32(ctx.r15.u32 + 728, ctx.r10.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r9,732(r15)
	PPC_STORE_U32(ctx.r15.u32 + 732, ctx.r9.u32);
	// stw r11,740(r15)
	PPC_STORE_U32(ctx.r15.u32 + 740, ctx.r11.u32);
	// addi r9,r5,1392
	ctx.r9.s64 = ctx.r5.s64 + 1392;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r10,744(r15)
	PPC_STORE_U32(ctx.r15.u32 + 744, ctx.r10.u32);
	// addi r10,r6,-944
	ctx.r10.s64 = ctx.r6.s64 + -944;
	// stw r9,748(r15)
	PPC_STORE_U32(ctx.r15.u32 + 748, ctx.r9.u32);
	// stw r11,752(r15)
	PPC_STORE_U32(ctx.r15.u32 + 752, ctx.r11.u32);
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// li r9,94
	ctx.r9.s64 = 94;
	// stw r10,756(r15)
	PPC_STORE_U32(ctx.r15.u32 + 756, ctx.r10.u32);
	// addi r11,r7,1392
	ctx.r11.s64 = ctx.r7.s64 + 1392;
	// stw r9,760(r15)
	PPC_STORE_U32(ctx.r15.u32 + 760, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r8,-2208
	ctx.r9.s64 = ctx.r8.s64 + -2208;
	// stw r11,764(r15)
	PPC_STORE_U32(ctx.r15.u32 + 764, ctx.r11.u32);
	// stw r10,768(r15)
	PPC_STORE_U32(ctx.r15.u32 + 768, ctx.r10.u32);
	// stw r9,772(r15)
	PPC_STORE_U32(ctx.r15.u32 + 772, ctx.r9.u32);
	// b 0x82ca2c04
	// ERROR 82CA2C04
	return;
}

__attribute__((alias("__imp__sub_83102068"))) PPC_WEAK_FUNC(sub_83102068);
PPC_FUNC_IMPL(__imp__sub_83102068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83102070;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83102090
	if (!ctx.cr6.lt) goto loc_83102090;
	// bl 0x82cbbb58
	ctx.lr = 0x83102090;
	sub_82CBBB58(ctx, base);
loc_83102090:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// blt cr6,0x831020b8
	if (ctx.cr6.lt) goto loc_831020B8;
	// bl 0x82cbbb58
	ctx.lr = 0x831020B4;
	sub_82CBBB58(ctx, base);
	// li r31,255
	ctx.r31.s64 = 255;
loc_831020B8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x831020d0
	if (ctx.cr6.eq) goto loc_831020D0;
	// bl 0x82cbbb58
	ctx.lr = 0x831020D0;
	sub_82CBBB58(ctx, base);
loc_831020D0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,28
	ctx.r9.s64 = 28;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8310213C"))) PPC_WEAK_FUNC(sub_8310213C);
PPC_FUNC_IMPL(__imp__sub_8310213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83102140"))) PPC_WEAK_FUNC(sub_83102140);
PPC_FUNC_IMPL(__imp__sub_83102140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83102148;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83102168
	if (!ctx.cr6.lt) goto loc_83102168;
	// bl 0x82cbbb58
	ctx.lr = 0x83102168;
	sub_82CBBB58(ctx, base);
loc_83102168:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x83102190
	if (ctx.cr6.lt) goto loc_83102190;
	// bl 0x82cbbb58
	ctx.lr = 0x8310218C;
	sub_82CBBB58(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_83102190:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x831021a8
	if (ctx.cr6.eq) goto loc_831021A8;
	// bl 0x82cbbb58
	ctx.lr = 0x831021A8;
	sub_82CBBB58(ctx, base);
loc_831021A8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,28
	ctx.r9.s64 = 28;
	// rlwimi r31,r10,17,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83102214"))) PPC_WEAK_FUNC(sub_83102214);
PPC_FUNC_IMPL(__imp__sub_83102214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83102218"))) PPC_WEAK_FUNC(sub_83102218);
PPC_FUNC_IMPL(__imp__sub_83102218) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83102230
	if (ctx.cr0.eq) goto loc_83102230;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x83102234
	goto loc_83102234;
loc_83102230:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83102234:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83102248
	if (ctx.cr0.eq) goto loc_83102248;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x8310224c
	goto loc_8310224C;
loc_83102248:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8310224C:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83102260
	if (ctx.cr0.eq) goto loc_83102260;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x83102264
	goto loc_83102264;
loc_83102260:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_83102264:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83102270
	if (ctx.cr0.eq) goto loc_83102270;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_83102270:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102278"))) PPC_WEAK_FUNC(sub_83102278);
PPC_FUNC_IMPL(__imp__sub_83102278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83102280;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x831022a0
	if (ctx.cr6.lt) goto loc_831022A0;
	// bl 0x82cbbb58
	ctx.lr = 0x831022A0;
	sub_82CBBB58(ctx, base);
loc_831022A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x831022f0
	if (ctx.cr6.eq) goto loc_831022F0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831022e8
	if (ctx.cr6.eq) goto loc_831022E8;
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831022e0
	if (ctx.cr6.eq) goto loc_831022E0;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831022d8
	if (ctx.cr6.eq) goto loc_831022D8;
	// bl 0x82cbbb58
	ctx.lr = 0x831022D4;
	sub_82CBBB58(ctx, base);
	// b 0x831022f4
	goto loc_831022F4;
loc_831022D8:
	// lis r31,768
	ctx.r31.s64 = 50331648;
	// b 0x831022f4
	goto loc_831022F4;
loc_831022E0:
	// lis r31,1024
	ctx.r31.s64 = 67108864;
	// b 0x831022f4
	goto loc_831022F4;
loc_831022E8:
	// lis r31,512
	ctx.r31.s64 = 33554432;
	// b 0x831022f4
	goto loc_831022F4;
loc_831022F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_831022F4:
	// rlwimi r31,r29,16,8,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFF0000) | (ctx.r31.u64 & 0xFFFFFFFFFF00FFFF);
	// li r11,801
	ctx.r11.s64 = 801;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// rlwimi r31,r11,27,16,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0xFFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,27,3,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x18000000) | (ctx.r31.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_83102318"))) PPC_WEAK_FUNC(sub_83102318);
PPC_FUNC_IMPL(__imp__sub_83102318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x83102320;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r28,21,3,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1FE00000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r23,0(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// ori r29,r11,23
	ctx.r29.u64 = ctx.r11.u64 | 23;
	// ble cr6,0x8310235c
	if (!ctx.cr6.gt) goto loc_8310235C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310235C;
	sub_82CBBB58(ctx, base);
loc_8310235C:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x83102368
	if (ctx.cr6.lt) goto loc_83102368;
	// bl 0x82cbbb58
	ctx.lr = 0x83102368;
	sub_82CBBB58(ctx, base);
loc_83102368:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x831023c4
	if (!ctx.cr6.eq) goto loc_831023C4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102384
	if (!ctx.cr6.lt) goto loc_83102384;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83102384:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x831023a0
	if (!ctx.cr6.eq) goto loc_831023A0;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x831023ac
	goto loc_831023AC;
loc_831023A0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x831023ac
	if (!ctx.cr6.eq) goto loc_831023AC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_831023AC:
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// rlwimi r29,r11,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// blt cr6,0x831023f4
	if (ctx.cr6.lt) goto loc_831023F4;
	// bl 0x82cbbb58
	ctx.lr = 0x831023C0;
	sub_82CBBB58(ctx, base);
	// b 0x831023f4
	goto loc_831023F4;
loc_831023C4:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// bne cr6,0x831023d8
	if (!ctx.cr6.eq) goto loc_831023D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r29,r11,17,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x831023f4
	goto loc_831023F4;
loc_831023D8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r28,21,0,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0xFFE00000;
	// rlwinm r11,r11,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// li r9,5
	ctx.r9.s64 = 5;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r29,r11,0,3,10
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FE00000) | (ctx.r29.u64 & 0xFFFFFFFFE01FFFFF);
	// rlwimi r29,r9,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
loc_831023F4:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x83102400
	if (ctx.cr6.lt) goto loc_83102400;
	// bl 0x82cbbb58
	ctx.lr = 0x83102400;
	sub_82CBBB58(ctx, base);
loc_83102400:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,12
	ctx.r9.s64 = 12;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stwx r9,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83102218
	ctx.lr = 0x83102440;
	sub_83102218(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x83102488
	if (!ctx.cr6.eq) goto loc_83102488;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x83102488
	if (!ctx.cr6.eq) goto loc_83102488;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x83102488
	if (!ctx.cr6.eq) goto loc_83102488;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x83102488
	if (!ctx.cr6.eq) goto loc_83102488;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83102488
	if (!ctx.cr6.eq) goto loc_83102488;
	// clrlwi r10,r29,1
	ctx.r10.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// b 0x831024b0
	goto loc_831024B0;
loc_83102488:
	// rlwimi r11,r26,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// oris r7,r29,32768
	ctx.r7.u64 = ctx.r29.u64 | 2147483648;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// rlwimi r10,r6,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r8.u32);
loc_831024B0:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r27,r10,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_831024CC"))) PPC_WEAK_FUNC(sub_831024CC);
PPC_FUNC_IMPL(__imp__sub_831024CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831024D0"))) PPC_WEAK_FUNC(sub_831024D0);
PPC_FUNC_IMPL(__imp__sub_831024D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x831024D8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x83102518
	if (ctx.cr6.eq) goto loc_83102518;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x83102530
	if (ctx.cr6.eq) goto loc_83102530;
	// bl 0x82cbbb58
	ctx.lr = 0x83102510;
	sub_82CBBB58(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x83102570
	goto loc_83102570;
loc_83102518:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,18
	ctx.r29.s64 = ctx.r11.s64 + 18;
	// b 0x83102570
	goto loc_83102570;
loc_83102530:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r29,17
	ctx.r29.s64 = 17;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102548
	if (!ctx.cr6.lt) goto loc_83102548;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83102548:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83102564
	if (!ctx.cr6.eq) goto loc_83102564;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x83102570
	goto loc_83102570;
loc_83102564:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83102570
	if (!ctx.cr6.eq) goto loc_83102570;
	// li r25,1
	ctx.r25.s64 = 1;
loc_83102570:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x8310257c
	if (ctx.cr6.lt) goto loc_8310257C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310257C;
	sub_82CBBB58(ctx, base);
loc_8310257C:
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83102218
	ctx.lr = 0x831025B8;
	sub_83102218(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,22
	ctx.r10.s64 = 22;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r31,r29,16,10,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0x3F0000) | (ctx.r31.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r7,r9,2,29,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0x4) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFB);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// clrlwi r7,r7,29
	ctx.r7.u64 = ctx.r7.u32 & 0x7;
	// clrlwi r8,r31,10
	ctx.r8.u64 = ctx.r31.u32 & 0x3FFFFF;
	// rlwimi r6,r7,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r5,r9,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r5,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_83102610"))) PPC_WEAK_FUNC(sub_83102610);
PPC_FUNC_IMPL(__imp__sub_83102610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x83102618;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8310264c
	if (ctx.cr6.eq) goto loc_8310264C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310264C;
	sub_82CBBB58(ctx, base);
loc_8310264C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83102660
	if (!ctx.cr6.lt) goto loc_83102660;
	// bl 0x82cbbb58
	ctx.lr = 0x83102660;
	sub_82CBBB58(ctx, base);
loc_83102660:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x831026f8
	if (!ctx.cr6.eq) goto loc_831026F8;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x831026b8
	if (ctx.cr6.lt) goto loc_831026B8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,-6748
	ctx.r6.s64 = ctx.r11.s64 + -6748;
loc_831026A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x831026B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83102848
	goto loc_83102848;
loc_831026B8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102278
	ctx.lr = 0x831026C8;
	sub_83102278(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831026dc
	if (!ctx.cr6.lt) goto loc_831026DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831026DC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// slw r11,r10,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x83102840
	goto loc_83102840;
loc_831026F8:
	// rlwinm r27,r31,0,12,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8310276c
	if (ctx.cr6.eq) goto loc_8310276C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83102730
	if (ctx.cr6.eq) goto loc_83102730;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8310271c
	if (ctx.cr6.eq) goto loc_8310271C;
loc_83102714:
	// bl 0x82cbbb58
	ctx.lr = 0x83102718;
	sub_82CBBB58(ctx, base);
	// b 0x83102840
	goto loc_83102840;
loc_8310271C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83102840
	if (!ctx.cr6.lt) goto loc_83102840;
	// b 0x83102714
	goto loc_83102714;
loc_83102730:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83102744
	if (ctx.cr6.lt) goto loc_83102744;
	// bl 0x82cbbb58
	ctx.lr = 0x83102744;
	sub_82CBBB58(ctx, base);
loc_83102744:
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x83102750
	if (ctx.cr6.lt) goto loc_83102750;
	// bl 0x82cbbb58
	ctx.lr = 0x83102750;
	sub_82CBBB58(ctx, base);
loc_83102750:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,11820
	ctx.r7.s64 = ctx.r11.s64 + 11820;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// b 0x83102830
	goto loc_83102830;
loc_8310276C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831027f4
	if (ctx.cr6.lt) goto loc_831027F4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x83102788
	if (ctx.cr6.lt) goto loc_83102788;
	// bl 0x82cbbb58
	ctx.lr = 0x83102788;
	sub_82CBBB58(ctx, base);
loc_83102788:
	// clrlwi r4,r29,28
	ctx.r4.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r6,r31,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0x1;
	// rlwinm r5,r29,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x831027a0
	if (!ctx.cr6.eq) goto loc_831027A0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_831027A0:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x831027d4
	if (!ctx.cr6.eq) goto loc_831027D4;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x831027d4
	if (ctx.cr6.lt) goto loc_831027D4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,-6864
	ctx.r5.s64 = ctx.r11.s64 + -6864;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3eb8
	ctx.lr = 0x831027C8;
	sub_82CA3EB8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x831026a0
	goto loc_831026A0;
loc_831027D4:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r7,r11,11836
	ctx.r7.s64 = ctx.r11.s64 + 11836;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102318
	ctx.lr = 0x831027F0;
	sub_83102318(ctx, base);
	// b 0x83102840
	goto loc_83102840;
loc_831027F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83102808
	if (!ctx.cr6.eq) goto loc_83102808;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,11788
	ctx.r31.s64 = ctx.r11.s64 + 11788;
	// b 0x8310281c
	goto loc_8310281C;
loc_83102808:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// addi r31,r11,11804
	ctx.r31.s64 = ctx.r11.s64 + 11804;
	// blt cr6,0x8310281c
	if (ctx.cr6.lt) goto loc_8310281C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310281C;
	sub_82CBBB58(ctx, base);
loc_8310281C:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83102830:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x831024d0
	ctx.lr = 0x83102840;
	sub_831024D0(ctx, base);
loc_83102840:
	// stw r22,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83102848:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_83102850"))) PPC_WEAK_FUNC(sub_83102850);
PPC_FUNC_IMPL(__imp__sub_83102850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83102858;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310287c
	if (ctx.cr6.lt) goto loc_8310287C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310287C;
	sub_82CBBB58(ctx, base);
loc_8310287C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831028d4
	if (!ctx.cr6.gt) goto loc_831028D4;
loc_8310288C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831028c4
	if (ctx.cr0.eq) goto loc_831028C4;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x831028ac
	if (ctx.cr6.lt) goto loc_831028AC;
	// bl 0x82cbbb58
	ctx.lr = 0x831028AC;
	sub_82CBBB58(ctx, base);
loc_831028AC:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// rlwimi r11,r31,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_831028C4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8310288c
	if (ctx.cr6.lt) goto loc_8310288C;
loc_831028D4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83102930
	if (!ctx.cr6.gt) goto loc_83102930;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r30,r11,11820
	ctx.r30.s64 = ctx.r11.s64 + 11820;
loc_831028EC:
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83102920
	if (ctx.cr0.eq) goto loc_83102920;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x831024d0
	ctx.lr = 0x83102920;
	sub_831024D0(ctx, base);
loc_83102920:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831028ec
	if (ctx.cr6.lt) goto loc_831028EC;
loc_83102930:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r10,11804
	ctx.r30.s64 = ctx.r10.s64 + 11804;
	// addi r28,r11,11788
	ctx.r28.s64 = ctx.r11.s64 + 11788;
loc_83102944:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83102988
	if (ctx.cr6.eq) goto loc_83102988;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq cr6,0x83102968
	if (ctx.cr6.eq) goto loc_83102968;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_83102968:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831024d0
	ctx.lr = 0x83102988;
	sub_831024D0(ctx, base);
loc_83102988:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x83102944
	if (ctx.cr6.lt) goto loc_83102944;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8310299C"))) PPC_WEAK_FUNC(sub_8310299C);
PPC_FUNC_IMPL(__imp__sub_8310299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831029A0"))) PPC_WEAK_FUNC(sub_831029A0);
PPC_FUNC_IMPL(__imp__sub_831029A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x831029A8;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r24,16(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831029d0
	if (ctx.cr6.lt) goto loc_831029D0;
	// bl 0x82cbbb58
	ctx.lr = 0x831029D0;
	sub_82CBBB58(ctx, base);
loc_831029D0:
	// lwz r11,432(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83102a2c
	if (ctx.cr6.eq) goto loc_83102A2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83102a2c
	if (ctx.cr0.eq) goto loc_83102A2C;
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x831029fc
	if (ctx.cr6.lt) goto loc_831029FC;
	// bl 0x82cbbb58
	ctx.lr = 0x831029FC;
	sub_82CBBB58(ctx, base);
loc_831029FC:
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r10,432(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r24)
	PPC_STORE_U32(ctx.r24.u32 + 424, ctx.r11.u32);
loc_83102A2C:
	// stw r31,432(r24)
	PPC_STORE_U32(ctx.r24.u32 + 432, ctx.r31.u32);
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r27,2(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// beq 0x83102c74
	if (ctx.cr0.eq) goto loc_83102C74;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// rlwinm r26,r9,24,27,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102b6c
	if (!ctx.cr6.lt) goto loc_83102B6C;
	// addi r11,r27,-64
	ctx.r11.s64 = ctx.r27.s64 + -64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x83102ac4
	if (ctx.cr6.gt) goto loc_83102AC4;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-6704
	ctx.r12.s64 = ctx.r12.s64 + -6704;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31984
	ctx.r12.s64 = -2096103424;
	// addi r12,r12,10924
	ctx.r12.s64 = ctx.r12.s64 + 10924;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83102AB4;
	case 1:
		goto loc_83102AB4;
	case 2:
		goto loc_83102AAC;
	case 3:
		goto loc_83102AAC;
	case 4:
		goto loc_83102AAC;
	case 5:
		goto loc_83102ABC;
	case 6:
		goto loc_83102ABC;
	case 7:
		goto loc_83102AB4;
	case 8:
		goto loc_83102AAC;
	case 9:
		goto loc_83102AB4;
	case 10:
		goto loc_83102AAC;
	case 11:
		goto loc_83102AC4;
	case 12:
		goto loc_83102AAC;
	case 13:
		goto loc_83102AAC;
	case 14:
		goto loc_83102AC4;
	case 15:
		goto loc_83102AC4;
	case 16:
		goto loc_83102AC4;
	case 17:
		goto loc_83102AC4;
	case 18:
		goto loc_83102ABC;
	case 19:
		goto loc_83102AAC;
	case 20:
		goto loc_83102AB0;
	case 21:
		goto loc_83102AB0;
	case 22:
		goto loc_83102AB0;
	default:
		__builtin_unreachable();
	}
loc_83102AAC:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_83102AB0:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_83102AB4:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x83102ad0
	goto loc_83102AD0;
loc_83102ABC:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x83102acc
	goto loc_83102ACC;
loc_83102AC4:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x83102ad0
	if (!ctx.cr6.eq) goto loc_83102AD0;
loc_83102ACC:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_83102AD0:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x83102adc
	if (ctx.cr6.lt) goto loc_83102ADC;
	// bl 0x82cbbb58
	ctx.lr = 0x83102ADC;
	sub_82CBBB58(ctx, base);
loc_83102ADC:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x83102c68
	if (!ctx.cr6.eq) goto loc_83102C68;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x83102b20
	if (ctx.cr6.eq) goto loc_83102B20;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x83102b08
	if (ctx.cr6.lt) goto loc_83102B08;
	// bl 0x82cbbb58
	ctx.lr = 0x83102B08;
	sub_82CBBB58(ctx, base);
loc_83102B08:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102b1c
	if (!ctx.cr6.lt) goto loc_83102B1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83102B1C:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
loc_83102B20:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x83102b50
	if (ctx.cr6.eq) goto loc_83102B50;
	// lwz r11,196(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r10,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r10.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102b4c
	if (!ctx.cr6.lt) goto loc_83102B4C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83102B4C:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_83102B50:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x83102c68
	if (ctx.cr6.eq) goto loc_83102C68;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// b 0x83102c68
	goto loc_83102C68;
loc_83102B6C:
	// beq cr6,0x83102b74
	if (ctx.cr6.eq) goto loc_83102B74;
	// bl 0x82cbbb58
	ctx.lr = 0x83102B74;
	sub_82CBBB58(ctx, base);
loc_83102B74:
	// cmplwi cr6,r27,65
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65, ctx.xer);
	// beq cr6,0x83102bbc
	if (ctx.cr6.eq) goto loc_83102BBC;
	// cmplwi cr6,r27,66
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 66, ctx.xer);
	// bne cr6,0x83102c68
	if (!ctx.cr6.eq) goto loc_83102C68;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x83102ba0
	if (ctx.cr6.lt) goto loc_83102BA0;
	// bl 0x82cbbb58
	ctx.lr = 0x83102BA0;
	sub_82CBBB58(ctx, base);
loc_83102BA0:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102bb4
	if (!ctx.cr6.lt) goto loc_83102BB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83102BB4:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x83102c68
	goto loc_83102C68;
loc_83102BBC:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x83102c68
	if (!ctx.cr6.eq) goto loc_83102C68;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102bd8
	if (!ctx.cr6.lt) goto loc_83102BD8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83102BD8:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// b 0x83102c68
	goto loc_83102C68;
loc_83102BE0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x83102c44
	if (!ctx.cr6.eq) goto loc_83102C44;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83102c64
	if (!ctx.cr6.eq) goto loc_83102C64;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x83102c18
	if (ctx.cr6.lt) goto loc_83102C18;
	// bl 0x82cbbb58
	ctx.lr = 0x83102C18;
	sub_82CBBB58(ctx, base);
loc_83102C18:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102c2c
	if (!ctx.cr6.lt) goto loc_83102C2C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83102C2C:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// slw r11,r22,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r10,196(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r11.u32);
	// b 0x83102c64
	goto loc_83102C64;
loc_83102C44:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83102c64
	if (!ctx.cr6.eq) goto loc_83102C64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x83102c58
	if (ctx.cr6.lt) goto loc_83102C58;
	// bl 0x82cbbb58
	ctx.lr = 0x83102C58;
	sub_82CBBB58(ctx, base);
loc_83102C58:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r22,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r22.u32);
loc_83102C64:
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
loc_83102C68:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83102be0
	if (!ctx.cr0.eq) goto loc_83102BE0;
loc_83102C74:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_83102C80"))) PPC_WEAK_FUNC(sub_83102C80);
PPC_FUNC_IMPL(__imp__sub_83102C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83102C88;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83102d34
	if (ctx.cr6.lt) goto loc_83102D34;
	// bl 0x82cbbb58
	ctx.lr = 0x83102CB8;
	sub_82CBBB58(ctx, base);
	// b 0x83102d34
	goto loc_83102D34;
loc_83102CBC:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x83102d60
	if (!ctx.cr0.eq) goto loc_83102D60;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x83102ce4
	if (!ctx.cr6.eq) goto loc_83102CE4;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x83102d20
	goto loc_83102D20;
loc_83102CE4:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x83102d1c
	if (ctx.cr6.eq) goto loc_83102D1C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83102d1c
	if (ctx.cr6.eq) goto loc_83102D1C;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x83102d04
	if (!ctx.cr6.eq) goto loc_83102D04;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// b 0x83102d20
	goto loc_83102D20;
loc_83102D04:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831029a0
	ctx.lr = 0x83102D14;
	sub_831029A0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83102d24
	goto loc_83102D24;
loc_83102D1C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83102D20:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_83102D24:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x83102d60
	if (ctx.cr6.gt) goto loc_83102D60;
loc_83102D34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x83102cbc
	if (!ctx.cr6.eq) goto loc_83102CBC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x83102d60
	if (!ctx.cr6.eq) goto loc_83102D60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83102D58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_83102D60:
	// bl 0x82cbbb58
	ctx.lr = 0x83102D64;
	sub_82CBBB58(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83102d58
	goto loc_83102D58;
}

__attribute__((alias("__imp__sub_83102D6C"))) PPC_WEAK_FUNC(sub_83102D6C);
PPC_FUNC_IMPL(__imp__sub_83102D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83102D70"))) PPC_WEAK_FUNC(sub_83102D70);
PPC_FUNC_IMPL(__imp__sub_83102D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83102D78;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,16379
	ctx.r11.s64 = ctx.r11.s64 + 16379;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f4d88
	ctx.lr = 0x83102DA4;
	sub_821F4D88(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83102dbc
	if (!ctx.cr0.eq) goto loc_83102DBC;
	// bl 0x82cbbb58
	ctx.lr = 0x83102DB0;
	sub_82CBBB58(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83102dfc
	goto loc_83102DFC;
loc_83102DBC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83102dec
	if (ctx.cr6.eq) goto loc_83102DEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83102de0
	if (ctx.cr6.eq) goto loc_83102DE0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x83102DE0;
	sub_82CA2C60(ctx, base);
loc_83102DE0:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f5f18
	ctx.lr = 0x83102DEC;
	sub_821F5F18(ctx, base);
loc_83102DEC:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83102DFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83102E04"))) PPC_WEAK_FUNC(sub_83102E04);
PPC_FUNC_IMPL(__imp__sub_83102E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83102E08"))) PPC_WEAK_FUNC(sub_83102E08);
PPC_FUNC_IMPL(__imp__sub_83102E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83102E10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83102e3c
	if (ctx.cr6.lt) goto loc_83102E3C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83102e40
	if (!ctx.cr6.gt) goto loc_83102E40;
loc_83102E3C:
	// bl 0x82cbbb58
	ctx.lr = 0x83102E40;
	sub_82CBBB58(ctx, base);
loc_83102E40:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x83102e88
	if (!ctx.cr6.lt) goto loc_83102E88;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83102d70
	ctx.lr = 0x83102E70;
	sub_83102D70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83102E88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83102E94"))) PPC_WEAK_FUNC(sub_83102E94);
PPC_FUNC_IMPL(__imp__sub_83102E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83102E98"))) PPC_WEAK_FUNC(sub_83102E98);
PPC_FUNC_IMPL(__imp__sub_83102E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83102EA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83102e08
	ctx.lr = 0x83102EBC;
	sub_83102E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83102ecc
	if (ctx.cr0.eq) goto loc_83102ECC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83102fd0
	goto loc_83102FD0;
loc_83102ECC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83102f0c
	if (!ctx.cr6.lt) goto loc_83102F0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,87
	ctx.r8.s64 = 5701632;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r7,341
	ctx.r7.s64 = 341;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x83102fc0
	goto loc_83102FC0;
loc_83102F0C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83102f80
	if (!ctx.cr6.lt) goto loc_83102F80;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83102F28:
	// lwz r8,160(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83102f70
	if (ctx.cr0.eq) goto loc_83102F70;
	// li r8,14
	ctx.r8.s64 = 14;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,23
	ctx.r8.s64 = 23;
	// addi r6,r10,35
	ctx.r6.s64 = ctx.r10.s64 + 35;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r6,r8,18,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83102F70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x83102f28
	if (ctx.cr6.lt) goto loc_83102F28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83102F80:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83102fcc
	if (ctx.cr6.eq) goto loc_83102FCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,88
	ctx.r8.s64 = 5767168;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r9,341
	ctx.r9.s64 = 341;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// ori r8,r7,34
	ctx.r8.u64 = ctx.r7.u64 | 34;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_83102FC0:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83102FCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83102FD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83102FD8"))) PPC_WEAK_FUNC(sub_83102FD8);
PPC_FUNC_IMPL(__imp__sub_83102FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x83102FE0;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r24,12
	ctx.r11.s64 = ctx.r24.s64 + 12;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r7,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r7.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// beq cr6,0x83103038
	if (ctx.cr6.eq) goto loc_83103038;
	// bl 0x82cbbb58
	ctx.lr = 0x83103038;
	sub_82CBBB58(ctx, base);
loc_83103038:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r20,r31,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x83103054
	if (!ctx.cr6.eq) goto loc_83103054;
	// bl 0x82cbbb58
	ctx.lr = 0x83103050;
	sub_82CBBB58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83103054:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r23,r10,512
	ctx.r23.u64 = ctx.r10.u64 | 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8310306c
	if (ctx.cr6.lt) goto loc_8310306C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310306C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x831030d8
	if (!ctx.cr6.lt) goto loc_831030D8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83102c80
	ctx.lr = 0x831030AC;
	sub_83102C80(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102e08
	ctx.lr = 0x831030B8;
	sub_83102E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831030c8
	if (ctx.cr0.eq) goto loc_831030C8;
loc_831030C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831033cc
	goto loc_831033CC;
loc_831030C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83102850
	ctx.lr = 0x831030D8;
	sub_83102850(ctx, base);
loc_831030D8:
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x83103338
	if (ctx.cr6.eq) goto loc_83103338;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r25,r11,-17856
	ctx.r25.s64 = ctx.r11.s64 + -17856;
loc_831030F4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102e08
	ctx.lr = 0x83103100;
	sub_83102E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x831030c0
	if (!ctx.cr0.eq) goto loc_831030C0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x83103128
	if (ctx.cr0.eq) goto loc_83103128;
loc_83103120:
	// bl 0x82cbbb58
	ctx.lr = 0x83103124;
	sub_82CBBB58(ctx, base);
	// b 0x831032fc
	goto loc_831032FC;
loc_83103128:
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x83103144
	if (!ctx.cr6.eq) goto loc_83103144;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x831032f8
	goto loc_831032F8;
loc_83103144:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x831032f4
	if (ctx.cr6.eq) goto loc_831032F4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831032f4
	if (ctx.cr6.eq) goto loc_831032F4;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x83103184
	if (!ctx.cr6.eq) goto loc_83103184;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8310317c
	if (ctx.cr6.lt) goto loc_8310317C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83102068
	ctx.lr = 0x83103178;
	sub_83102068(ctx, base);
	// b 0x831032fc
	goto loc_831032FC;
loc_8310317C:
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// b 0x831032f8
	goto loc_831032F8;
loc_83103184:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x831031a4
	if (!ctx.cr6.eq) goto loc_831031A4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83102140
	ctx.lr = 0x831031A0;
	sub_83102140(ctx, base);
	// b 0x831032fc
	goto loc_831032FC;
loc_831031A4:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x83103238
	if (!ctx.cr6.eq) goto loc_83103238;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x831031bc
	if (!ctx.cr6.lt) goto loc_831031BC;
	// bl 0x82cbbb58
	ctx.lr = 0x831031B8;
	sub_82CBBB58(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_831031BC:
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r31,r28,21
	ctx.r31.u64 = ctx.r28.u32 & 0x7FF;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x831031e0
	if (ctx.cr6.lt) goto loc_831031E0;
	// bl 0x82cbbb58
	ctx.lr = 0x831031DC;
	sub_82CBBB58(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_831031E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x831031f8
	if (ctx.cr6.eq) goto loc_831031F8;
	// bl 0x82cbbb58
	ctx.lr = 0x831031F8;
	sub_82CBBB58(ctx, base);
loc_831031F8:
	// li r11,29
	ctx.r11.s64 = 29;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x831032fc
	goto loc_831032FC;
loc_83103238:
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x83103274
	if (!ctx.cr6.eq) goto loc_83103274;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8310324c
	if (!ctx.cr6.lt) goto loc_8310324C;
	// bl 0x82cbbb58
	ctx.lr = 0x8310324C;
	sub_82CBBB58(ctx, base);
loc_8310324C:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83102610
	ctx.lr = 0x83103268;
	sub_83102610(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831033cc
	if (!ctx.cr0.eq) goto loc_831033CC;
	// b 0x831032fc
	goto loc_831032FC;
loc_83103274:
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x831032c0
	if (!ctx.cr6.eq) goto loc_831032C0;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831032c8
	if (!ctx.cr6.eq) goto loc_831032C8;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x83103298
	if (!ctx.cr6.lt) goto loc_83103298;
	// bl 0x82cbbb58
	ctx.lr = 0x83103298;
	sub_82CBBB58(ctx, base);
loc_83103298:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83102e98
	ctx.lr = 0x831032AC;
	sub_83102E98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831033cc
	if (!ctx.cr0.eq) goto loc_831033CC;
	// lwz r5,224(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// b 0x831032d8
	goto loc_831032D8;
loc_831032C0:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// bge cr6,0x83103120
	if (!ctx.cr6.lt) goto loc_83103120;
loc_831032C8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_831032D8:
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831032F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831032fc
	goto loc_831032FC;
loc_831032F4:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_831032F8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_831032FC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x831033d4
	if (ctx.cr6.gt) goto loc_831033D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x83103328
	if (ctx.cr6.lt) goto loc_83103328;
	// bl 0x82cbbb58
	ctx.lr = 0x83103328;
	sub_82CBBB58(ctx, base);
loc_83103328:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x831030f4
	if (!ctx.cr6.eq) goto loc_831030F4;
loc_83103338:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x831033d8
	if (!ctx.cr6.eq) goto loc_831033D8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102e08
	ctx.lr = 0x8310335C;
	sub_83102E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x831030c0
	if (!ctx.cr0.eq) goto loc_831030C0;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83103390
	if (!ctx.cr6.eq) goto loc_83103390;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83102e98
	ctx.lr = 0x83103388;
	sub_83102E98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831033cc
	if (!ctx.cr0.eq) goto loc_831033CC;
loc_83103390:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// ble cr6,0x831033c8
	if (!ctx.cr6.gt) goto loc_831033C8;
	// bl 0x82cbbb58
	ctx.lr = 0x831033C8;
	sub_82CBBB58(ctx, base);
loc_831033C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831033CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
loc_831033D4:
	// bl 0x82cbbb58
	ctx.lr = 0x831033D8;
	sub_82CBBB58(ctx, base);
loc_831033D8:
	// bl 0x82cbbb58
	ctx.lr = 0x831033DC;
	sub_82CBBB58(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831033cc
	goto loc_831033CC;
}

__attribute__((alias("__imp__sub_831033E4"))) PPC_WEAK_FUNC(sub_831033E4);
PPC_FUNC_IMPL(__imp__sub_831033E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

