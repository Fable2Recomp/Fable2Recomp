#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C3BFFC"))) PPC_WEAK_FUNC(sub_82C3BFFC);
PPC_FUNC_IMPL(__imp__sub_82C3BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C000"))) PPC_WEAK_FUNC(sub_82C3C000);
PPC_FUNC_IMPL(__imp__sub_82C3C000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3C00C"))) PPC_WEAK_FUNC(sub_82C3C00C);
PPC_FUNC_IMPL(__imp__sub_82C3C00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C010"))) PPC_WEAK_FUNC(sub_82C3C010);
PPC_FUNC_IMPL(__imp__sub_82C3C010) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// beq 0x82c3c04c
	if (ctx.cr0.eq) goto loc_82C3C04C;
loc_82C3C034:
	// divw r10,r6,r11
	ctx.r10.s32 = ctx.r6.s32 / ctx.r11.s32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82c3c034
	if (!ctx.cr0.eq) goto loc_82C3C034;
loc_82C3C04C:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c3c0d0
	if (!ctx.cr6.lt) goto loc_82C3C0D0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82c3c0d0
	if (!ctx.cr6.gt) goto loc_82C3C0D0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C3C068:
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c3c080
	if (!ctx.cr6.eq) goto loc_82C3C080;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C3C080:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82c3c0c0
	if (ctx.cr6.eq) goto loc_82C3C0C0;
loc_82C3C088:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bge cr6,0x82c3c0ac
	if (!ctx.cr6.lt) goto loc_82C3C0AC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// b 0x82c3c0b8
	goto loc_82C3C0B8;
loc_82C3C0AC:
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C3C0B8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c3c088
	if (!ctx.cr6.eq) goto loc_82C3C088;
loc_82C3C0C0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bgt 0x82c3c068
	if (ctx.cr0.gt) goto loc_82C3C068;
loc_82C3C0D0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3C0DC"))) PPC_WEAK_FUNC(sub_82C3C0DC);
PPC_FUNC_IMPL(__imp__sub_82C3C0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C0E0"))) PPC_WEAK_FUNC(sub_82C3C0E0);
PPC_FUNC_IMPL(__imp__sub_82C3C0E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-18640
	ctx.r4.s64 = ctx.r11.s64 + -18640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C3C110;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c1e0
	if (ctx.cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-15500
	ctx.r4.s64 = ctx.r11.s64 + -15500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C3C130;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c1e0
	if (ctx.cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-18672
	ctx.r4.s64 = ctx.r11.s64 + -18672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C3C150;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c1e0
	if (ctx.cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-15512
	ctx.r4.s64 = ctx.r11.s64 + -15512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c14f38
	ctx.lr = 0x82C3C170;
	sub_82C14F38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c1e0
	if (ctx.cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,-19236
	ctx.r4.s64 = ctx.r11.s64 + -19236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C3C190;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c1e0
	if (ctx.cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,-9616
	ctx.r4.s64 = ctx.r11.s64 + -9616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15068
	ctx.lr = 0x82C3C1B0;
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c1e0
	if (ctx.cr6.eq) goto loc_82C3C1E0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,30936
	ctx.r4.s64 = ctx.r11.s64 + 30936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15068
	ctx.lr = 0x82C3C1D0;
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3c1e4
	if (!ctx.cr6.eq) goto loc_82C3C1E4;
loc_82C3C1E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3C1E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C3C200"))) PPC_WEAK_FUNC(sub_82C3C200);
PPC_FUNC_IMPL(__imp__sub_82C3C200) {
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
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3c274
	if (ctx.cr6.eq) goto loc_82C3C274;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3c0e0
	ctx.lr = 0x82C3C244;
	sub_82C3C0E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c274
	if (ctx.cr6.eq) goto loc_82C3C274;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3c278
	if (!ctx.cr6.eq) goto loc_82C3C278;
loc_82C3C274:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3C278:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C3C294"))) PPC_WEAK_FUNC(sub_82C3C294);
PPC_FUNC_IMPL(__imp__sub_82C3C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C298"))) PPC_WEAK_FUNC(sub_82C3C298);
PPC_FUNC_IMPL(__imp__sub_82C3C298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x82c3c454
	if (!ctx.cr6.gt) goto loc_82C3C454;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c3c2e0
	if (!ctx.cr6.lt) goto loc_82C3C2E0;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82C3C2E0:
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c3c300
	if (!ctx.cr6.lt) goto loc_82C3C300;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82C3C300:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c3c320
	if (!ctx.cr6.lt) goto loc_82C3C320;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82C3C320:
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82c3c344
	if (!ctx.cr6.lt) goto loc_82C3C344;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82C3C344:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82c3c364
	if (!ctx.cr6.lt) goto loc_82C3C364;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82C3C364:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82c3c384
	if (!ctx.cr6.lt) goto loc_82C3C384;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82C3C384:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82c3c3ac
	if (!ctx.cr6.lt) goto loc_82C3C3AC;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82C3C3AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82c3c3cc
	if (!ctx.cr6.lt) goto loc_82C3C3CC;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82C3C3CC:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82c3c3ec
	if (!ctx.cr6.lt) goto loc_82C3C3EC;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82C3C3EC:
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82c3c40c
	if (!ctx.cr6.lt) goto loc_82C3C40C;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82C3C40C:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82c3c42c
	if (!ctx.cr6.lt) goto loc_82C3C42C;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_82C3C42C:
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c3c4b4
	if (!ctx.cr6.lt) goto loc_82C3C4B4;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82C3C454:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c3c474
	if (!ctx.cr6.lt) goto loc_82C3C474;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82C3C474:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c3c494
	if (!ctx.cr6.lt) goto loc_82C3C494;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82C3C494:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c3c4b4
	if (!ctx.cr6.lt) goto loc_82C3C4B4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82C3C4B4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3C4BC"))) PPC_WEAK_FUNC(sub_82C3C4BC);
PPC_FUNC_IMPL(__imp__sub_82C3C4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C4C0"))) PPC_WEAK_FUNC(sub_82C3C4C0);
PPC_FUNC_IMPL(__imp__sub_82C3C4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82c3c510
	if (!ctx.cr6.eq) goto loc_82C3C510;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82C3C4DC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c554
	if (ctx.cr6.eq) goto loc_82C3C554;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15536
	ctx.r9.s64 = ctx.r10.s64 + -15536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C3C510:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82c3c554
	if (!ctx.cr6.eq) goto loc_82C3C554;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82C3C520;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c554
	if (ctx.cr6.eq) goto loc_82C3C554;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15524
	ctx.r9.s64 = ctx.r10.s64 + -15524;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C3C554:
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

__attribute__((alias("__imp__sub_82C3C568"))) PPC_WEAK_FUNC(sub_82C3C568);
PPC_FUNC_IMPL(__imp__sub_82C3C568) {
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
	// bl 0x82c3bd40
	ctx.lr = 0x82C3C580;
	sub_82C3BD40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c3c59c
	if (!ctx.cr6.eq) goto loc_82C3C59C;
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
loc_82C3C59C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,19936
	ctx.r4.s64 = ctx.r10.s64 + 19936;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3C5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82C3C5D8"))) PPC_WEAK_FUNC(sub_82C3C5D8);
PPC_FUNC_IMPL(__imp__sub_82C3C5D8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r10,19932
	ctx.r4.s64 = ctx.r10.s64 + 19932;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3C608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c3c624
	if (!ctx.cr6.eq) goto loc_82C3C624;
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
loc_82C3C624:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
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

__attribute__((alias("__imp__sub_82C3C648"))) PPC_WEAK_FUNC(sub_82C3C648);
PPC_FUNC_IMPL(__imp__sub_82C3C648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3C650;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b920
	ctx.lr = 0x82C3C684;
	sub_82C3B920(ctx, base);
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r7,12
	ctx.r7.s64 = 12;
	// divw r11,r8,r7
	ctx.r11.s32 = ctx.r8.s32 / ctx.r7.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r5,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r5.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3C6A8"))) PPC_WEAK_FUNC(sub_82C3C6A8);
PPC_FUNC_IMPL(__imp__sub_82C3C6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3C6B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b9d0
	ctx.lr = 0x82C3C6E4;
	sub_82C3B9D0(ctx, base);
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r7,28
	ctx.r7.s64 = 28;
	// divw r6,r8,r7
	ctx.r6.s32 = ctx.r8.s32 / ctx.r7.s32;
	// mulli r5,r6,28
	ctx.r5.s64 = ctx.r6.s64 * 28;
	// subf r3,r5,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r5.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3C700"))) PPC_WEAK_FUNC(sub_82C3C700);
PPC_FUNC_IMPL(__imp__sub_82C3C700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C3C708;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3c84c
	if (ctx.cr6.lt) goto loc_82C3C84C;
	// bne cr6,0x82c3c9ac
	if (!ctx.cr6.eq) goto loc_82C3C9AC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3c7ac
	if (ctx.cr6.lt) goto loc_82C3C7AC;
	// bne cr6,0x82c3c9ac
	if (!ctx.cr6.eq) goto loc_82C3C9AC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3ca30
	if (!ctx.cr6.gt) goto loc_82C3CA30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,6544
	ctx.r29.s64 = ctx.r11.s64 + 6544;
loc_82C3C76C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82c3bf68
	ctx.lr = 0x82C3C780;
	sub_82C3BF68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c9ac
	if (ctx.cr6.eq) goto loc_82C3C9AC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3c76c
	if (ctx.cr6.lt) goto loc_82C3C76C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3C7AC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,6544
	ctx.r27.s64 = ctx.r11.s64 + 6544;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c02b98
	ctx.lr = 0x82C3C7D0;
	sub_82C02B98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C3C7E0;
	sub_82C21C90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c3ca30
	if (ctx.cr6.eq) goto loc_82C3CA30;
loc_82C3C7EC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82C3C7F4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c808
	if (ctx.cr6.eq) goto loc_82C3C808;
	// bl 0x82c3be20
	ctx.lr = 0x82C3C800;
	sub_82C3BE20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c3c80c
	goto loc_82C3C80C;
loc_82C3C808:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C3C80C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c3bf68
	ctx.lr = 0x82C3C81C;
	sub_82C3BF68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c9ac
	if (ctx.cr6.eq) goto loc_82C3C9AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C3C834;
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c3c7ec
	if (ctx.cr6.lt) goto loc_82C3C7EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3C84C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3c908
	if (ctx.cr6.lt) goto loc_82C3C908;
	// bne cr6,0x82c3c9ac
	if (!ctx.cr6.eq) goto loc_82C3C9AC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C3C8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c3c9ac
	if (ctx.cr6.eq) goto loc_82C3C9AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3ca30
	if (ctx.cr6.eq) goto loc_82C3CA30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,6544
	ctx.r30.s64 = ctx.r11.s64 + 6544;
loc_82C3C8C8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82c3bf68
	ctx.lr = 0x82C3C8DC;
	sub_82C3BF68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3c9ac
	if (ctx.cr6.eq) goto loc_82C3C9AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3c8c8
	if (ctx.cr6.lt) goto loc_82C3C8C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3C908:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C3C938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c3c9ac
	if (ctx.cr6.eq) goto loc_82C3C9AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C3C94C;
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c3c9b8
	if (!ctx.cr6.gt) goto loc_82C3C9B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C3C960;
	sub_82C01D60(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r10,-20240
	ctx.r29.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r27,r9,-20272
	ctx.r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C3C98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3C994;
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C3C99C;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3C9A4;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C3C9AC;
	sub_82BFF848(ctx, base);
loc_82C3C9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3C9B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C3C9C0;
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3ca30
	if (ctx.cr6.eq) goto loc_82C3CA30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,6544
	ctx.r29.s64 = ctx.r11.s64 + 6544;
loc_82C3C9D8:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82C3C9E0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c9f4
	if (ctx.cr6.eq) goto loc_82C3C9F4;
	// bl 0x82c3be20
	ctx.lr = 0x82C3C9EC;
	sub_82C3BE20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c3c9f8
	goto loc_82C3C9F8;
loc_82C3C9F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C3C9F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c3bf68
	ctx.lr = 0x82C3CA08;
	sub_82C3BF68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c9ac
	if (ctx.cr6.eq) goto loc_82C3C9AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C3CA20;
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3c9d8
	if (ctx.cr6.lt) goto loc_82C3C9D8;
loc_82C3CA30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C3CA3C"))) PPC_WEAK_FUNC(sub_82C3CA3C);
PPC_FUNC_IMPL(__imp__sub_82C3CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CA40"))) PPC_WEAK_FUNC(sub_82C3CA40);
PPC_FUNC_IMPL(__imp__sub_82C3CA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C3CA48;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3cb78
	if (ctx.cr6.lt) goto loc_82C3CB78;
	// bne cr6,0x82c3ccd8
	if (!ctx.cr6.eq) goto loc_82C3CCD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3caec
	if (ctx.cr6.lt) goto loc_82C3CAEC;
	// bne cr6,0x82c3ccd8
	if (!ctx.cr6.eq) goto loc_82C3CCD8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3cd48
	if (!ctx.cr6.gt) goto loc_82C3CD48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C3CAAC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c3c200
	ctx.lr = 0x82C3CAC0;
	sub_82C3C200(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3ccd8
	if (ctx.cr6.eq) goto loc_82C3CCD8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3caac
	if (ctx.cr6.lt) goto loc_82C3CAAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3CAEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,6544
	ctx.r26.s64 = ctx.r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c02b98
	ctx.lr = 0x82C3CB10;
	sub_82C02B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C3CB20;
	sub_82C21C90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c3cd48
	if (ctx.cr6.eq) goto loc_82C3CD48;
loc_82C3CB2C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	ctx.lr = 0x82C3CB34;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3c200
	ctx.lr = 0x82C3CB48;
	sub_82C3C200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3ccd8
	if (ctx.cr6.eq) goto loc_82C3CCD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C3CB60;
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82c3cb2c
	if (ctx.cr6.lt) goto loc_82C3CB2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3CB78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3cc34
	if (ctx.cr6.lt) goto loc_82C3CC34;
	// bne cr6,0x82c3ccd8
	if (!ctx.cr6.eq) goto loc_82C3CCD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C3CBCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c3ccd8
	if (ctx.cr6.eq) goto loc_82C3CCD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3cd48
	if (ctx.cr6.eq) goto loc_82C3CD48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,6544
	ctx.r29.s64 = ctx.r11.s64 + 6544;
loc_82C3CBF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c3c200
	ctx.lr = 0x82C3CC08;
	sub_82C3C200(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3ccd8
	if (ctx.cr6.eq) goto loc_82C3CCD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3cbf4
	if (ctx.cr6.lt) goto loc_82C3CBF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3CC34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C3CC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c3ccd8
	if (ctx.cr6.eq) goto loc_82C3CCD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C3CC78;
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c3cce4
	if (!ctx.cr6.gt) goto loc_82C3CCE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C3CC8C;
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	ctx.r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r27,r9,-20272
	ctx.r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C3CCB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3CCC0;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C3CCC8;
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3CCD0;
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C3CCD8;
	sub_82BFF848(ctx, base);
loc_82C3CCD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C3CCE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C3CCEC;
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3cd48
	if (ctx.cr6.eq) goto loc_82C3CD48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C3CD04:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	ctx.lr = 0x82C3CD0C;
	sub_8221F388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3c200
	ctx.lr = 0x82C3CD20;
	sub_82C3C200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3ccd8
	if (ctx.cr6.eq) goto loc_82C3CCD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C3CD38;
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3cd04
	if (ctx.cr6.lt) goto loc_82C3CD04;
loc_82C3CD48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C3CD54"))) PPC_WEAK_FUNC(sub_82C3CD54);
PPC_FUNC_IMPL(__imp__sub_82C3CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CD58"))) PPC_WEAK_FUNC(sub_82C3CD58);
PPC_FUNC_IMPL(__imp__sub_82C3CD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3CD60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c3cdc0
	if (ctx.cr6.eq) goto loc_82C3CDC0;
loc_82C3CD78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3cdb0
	if (ctx.cr6.eq) goto loc_82C3CDB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82c3cdb0
	if (ctx.cr6.eq) goto loc_82C3CDB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3CDB0:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82c3cd78
	if (!ctx.cr6.eq) goto loc_82C3CD78;
loc_82C3CDC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3CDCC"))) PPC_WEAK_FUNC(sub_82C3CDCC);
PPC_FUNC_IMPL(__imp__sub_82C3CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CDD0"))) PPC_WEAK_FUNC(sub_82C3CDD0);
PPC_FUNC_IMPL(__imp__sub_82C3CDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3CDD8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c3ce58
	if (ctx.cr6.eq) goto loc_82C3CE58;
loc_82C3CDF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3ce48
	if (ctx.cr6.eq) goto loc_82C3CE48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82c3ce40
	if (ctx.cr6.eq) goto loc_82C3CE40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3CE40:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82C3CE48:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82c3cdf0
	if (!ctx.cr6.eq) goto loc_82C3CDF0;
loc_82C3CE58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3CE64"))) PPC_WEAK_FUNC(sub_82C3CE64);
PPC_FUNC_IMPL(__imp__sub_82C3CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CE68"))) PPC_WEAK_FUNC(sub_82C3CE68);
PPC_FUNC_IMPL(__imp__sub_82C3CE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3CE70;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c3cec0
	if (ctx.cr6.eq) goto loc_82C3CEC0;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C3CE8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3cea8
	if (ctx.cr6.eq) goto loc_82C3CEA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3CEA8:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c3ce8c
	if (!ctx.cr6.eq) goto loc_82C3CE8C;
loc_82C3CEC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3CEC8"))) PPC_WEAK_FUNC(sub_82C3CEC8);
PPC_FUNC_IMPL(__imp__sub_82C3CEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3CED0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c3cf20
	if (ctx.cr6.eq) goto loc_82C3CF20;
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C3CEEC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3cf08
	if (ctx.cr6.eq) goto loc_82C3CF08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3CF08:
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c3ceec
	if (!ctx.cr6.eq) goto loc_82C3CEEC;
loc_82C3CF20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3CF28"))) PPC_WEAK_FUNC(sub_82C3CF28);
PPC_FUNC_IMPL(__imp__sub_82C3CF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3CF30;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c3cf8c
	if (ctx.cr6.eq) goto loc_82C3CF8C;
loc_82C3CF48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c3cf80
	if (ctx.cr6.eq) goto loc_82C3CF80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82c3cf80
	if (ctx.cr6.eq) goto loc_82C3CF80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3CF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3CF80:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82c3cf48
	if (!ctx.cr0.eq) goto loc_82C3CF48;
loc_82C3CF8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3CF94"))) PPC_WEAK_FUNC(sub_82C3CF94);
PPC_FUNC_IMPL(__imp__sub_82C3CF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CF98"))) PPC_WEAK_FUNC(sub_82C3CF98);
PPC_FUNC_IMPL(__imp__sub_82C3CF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3CFA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c3d01c
	if (ctx.cr6.eq) goto loc_82C3D01C;
loc_82C3CFB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c3d010
	if (ctx.cr6.eq) goto loc_82C3D010;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82c3d008
	if (ctx.cr6.eq) goto loc_82C3D008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3D008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3D008:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82C3D010:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82c3cfb8
	if (!ctx.cr0.eq) goto loc_82C3CFB8;
loc_82C3D01C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3D024"))) PPC_WEAK_FUNC(sub_82C3D024);
PPC_FUNC_IMPL(__imp__sub_82C3D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D028"))) PPC_WEAK_FUNC(sub_82C3D028);
PPC_FUNC_IMPL(__imp__sub_82C3D028) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16096
	ctx.r9.s64 = ctx.r11.s64 + -16096;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C3D068;
	sub_82C16C78(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,-17212
	ctx.r7.s64 = ctx.r8.s64 + -17212;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82C3D08C"))) PPC_WEAK_FUNC(sub_82C3D08C);
PPC_FUNC_IMPL(__imp__sub_82C3D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D090"))) PPC_WEAK_FUNC(sub_82C3D090);
PPC_FUNC_IMPL(__imp__sub_82C3D090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C3D098;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r27.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// beq cr6,0x82c3d0c8
	if (ctx.cr6.eq) goto loc_82C3D0C8;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3d0cc
	if (ctx.cr6.eq) goto loc_82C3D0CC;
loc_82C3D0C8:
	// twi 31,r0,22
loc_82C3D0CC:
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c3d144
	if (ctx.cr6.eq) goto loc_82C3D144;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b7a0
	ctx.lr = 0x82C3D110;
	sub_82C3B7A0(ctx, base);
	// subf r8,r28,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r28.s64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,12
	ctx.r7.s64 = 12;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// divw r11,r8,r7
	ctx.r11.s32 = ctx.r8.s32 / ctx.r7.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3ce68
	ctx.lr = 0x82C3D140;
	sub_82C3CE68(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82C3D144:
	// std r27,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r27.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C3D154"))) PPC_WEAK_FUNC(sub_82C3D154);
PPC_FUNC_IMPL(__imp__sub_82C3D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D158"))) PPC_WEAK_FUNC(sub_82C3D158);
PPC_FUNC_IMPL(__imp__sub_82C3D158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C3D160;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r27.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// beq cr6,0x82c3d190
	if (ctx.cr6.eq) goto loc_82C3D190;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3d194
	if (ctx.cr6.eq) goto loc_82C3D194;
loc_82C3D190:
	// twi 31,r0,22
loc_82C3D194:
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c3d204
	if (ctx.cr6.eq) goto loc_82C3D204;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82c3b850
	ctx.lr = 0x82C3D1D8;
	sub_82C3B850(ctx, base);
	// subf r8,r28,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r28.s64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,28
	ctx.r7.s64 = 28;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// divw r3,r8,r7
	ctx.r3.s32 = ctx.r8.s32 / ctx.r7.s32;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3cec8
	ctx.lr = 0x82C3D200;
	sub_82C3CEC8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82C3D204:
	// std r27,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r27.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C3D214"))) PPC_WEAK_FUNC(sub_82C3D214);
PPC_FUNC_IMPL(__imp__sub_82C3D214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D218"))) PPC_WEAK_FUNC(sub_82C3D218);
PPC_FUNC_IMPL(__imp__sub_82C3D218) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cf28
	ctx.lr = 0x82C3D25C;
	sub_82C3CF28(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82C3D284"))) PPC_WEAK_FUNC(sub_82C3D284);
PPC_FUNC_IMPL(__imp__sub_82C3D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D288"))) PPC_WEAK_FUNC(sub_82C3D288);
PPC_FUNC_IMPL(__imp__sub_82C3D288) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cf98
	ctx.lr = 0x82C3D2CC;
	sub_82C3CF98(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82C3D2EC"))) PPC_WEAK_FUNC(sub_82C3D2EC);
PPC_FUNC_IMPL(__imp__sub_82C3D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D2F0"))) PPC_WEAK_FUNC(sub_82C3D2F0);
PPC_FUNC_IMPL(__imp__sub_82C3D2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3D2F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-15536
	ctx.r9.s64 = ctx.r11.s64 + -15536;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C3D338;
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-16696
	ctx.r6.s64 = ctx.r7.s64 + -16696;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c2fdc0
	ctx.lr = 0x82C3D34C;
	sub_82C2FDC0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3d364
	if (ctx.cr6.eq) goto loc_82C3D364;
	// bl 0x824fe010
	ctx.lr = 0x82C3D35C;
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82C3D364:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00008
	ctx.lr = 0x82C3D36C;
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3D374"))) PPC_WEAK_FUNC(sub_82C3D374);
PPC_FUNC_IMPL(__imp__sub_82C3D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D378"))) PPC_WEAK_FUNC(sub_82C3D378);
PPC_FUNC_IMPL(__imp__sub_82C3D378) {
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
	// bl 0x82c3d2f0
	ctx.lr = 0x82C3D398;
	sub_82C3D2F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3d3b0
	if (ctx.cr6.eq) goto loc_82C3D3B0;
	// bl 0x824fe010
	ctx.lr = 0x82C3D3AC;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3D3B0:
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

__attribute__((alias("__imp__sub_82C3D3C8"))) PPC_WEAK_FUNC(sub_82C3D3C8);
PPC_FUNC_IMPL(__imp__sub_82C3D3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3D3D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-15524
	ctx.r9.s64 = ctx.r11.s64 + -15524;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C3D410;
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	ctx.lr = 0x82C3D424;
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3d43c
	if (ctx.cr6.eq) goto loc_82C3D43C;
	// bl 0x824fe010
	ctx.lr = 0x82C3D434;
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82C3D43C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00008
	ctx.lr = 0x82C3D444;
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3D44C"))) PPC_WEAK_FUNC(sub_82C3D44C);
PPC_FUNC_IMPL(__imp__sub_82C3D44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D450"))) PPC_WEAK_FUNC(sub_82C3D450);
PPC_FUNC_IMPL(__imp__sub_82C3D450) {
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
	// bl 0x82c3d3c8
	ctx.lr = 0x82C3D470;
	sub_82C3D3C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3d488
	if (ctx.cr6.eq) goto loc_82C3D488;
	// bl 0x824fe010
	ctx.lr = 0x82C3D484;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3D488:
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

__attribute__((alias("__imp__sub_82C3D4A0"))) PPC_WEAK_FUNC(sub_82C3D4A0);
PPC_FUNC_IMPL(__imp__sub_82C3D4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C3D4A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3d4d0
	if (!ctx.cr6.gt) goto loc_82C3D4D0;
	// bl 0x82bf8e78
	ctx.lr = 0x82C3D4C8;
	sub_82BF8E78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C3D4D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,12
	ctx.r27.s64 = 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3d4ec
	if (!ctx.cr6.eq) goto loc_82C3D4EC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82c3d4f8
	goto loc_82C3D4F8;
loc_82C3D4EC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_82C3D4F8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82c3d5a4
	if (!ctx.cr6.lt) goto loc_82C3D5A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c49908
	ctx.lr = 0x82C3D50C;
	sub_82C49908(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82c3d528
	if (!ctx.cr6.gt) goto loc_82C3D528;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82C3D528:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	ctx.lr = 0x82C3D548;
	sub_82C3CD58(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3d578
	if (ctx.cr6.eq) goto loc_82C3D578;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// divw r29,r10,r27
	ctx.r29.s32 = ctx.r10.s32 / ctx.r27.s32;
	// bl 0x82c3ce68
	ctx.lr = 0x82C3D570;
	sub_82C3CE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C3D578;
	sub_824FE010(ctx, base);
loc_82C3D578:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_82C3D5A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C3D5AC"))) PPC_WEAK_FUNC(sub_82C3D5AC);
PPC_FUNC_IMPL(__imp__sub_82C3D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D5B0"))) PPC_WEAK_FUNC(sub_82C3D5B0);
PPC_FUNC_IMPL(__imp__sub_82C3D5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C3D5B8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3d5e0
	if (!ctx.cr6.gt) goto loc_82C3D5E0;
	// bl 0x82bf8e78
	ctx.lr = 0x82C3D5D8;
	sub_82BF8E78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C3D5E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,28
	ctx.r28.s64 = 28;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3d5fc
	if (!ctx.cr6.eq) goto loc_82C3D5FC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82c3d608
	goto loc_82C3D608;
loc_82C3D5FC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r28
	ctx.r11.s32 = ctx.r9.s32 / ctx.r28.s32;
loc_82C3D608:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82c3d6a4
	if (!ctx.cr6.lt) goto loc_82C3D6A4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829fed20
	ctx.lr = 0x82C3D61C;
	sub_829FED20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82c3d638
	if (!ctx.cr6.gt) goto loc_82C3D638;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82C3D638:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	ctx.lr = 0x82C3D658;
	sub_82C3CDD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3d688
	if (ctx.cr6.eq) goto loc_82C3D688;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// divw r29,r10,r28
	ctx.r29.s32 = ctx.r10.s32 / ctx.r28.s32;
	// bl 0x82c3cec8
	ctx.lr = 0x82C3D680;
	sub_82C3CEC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C3D688;
	sub_824FE010(ctx, base);
loc_82C3D688:
	// mulli r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 * 28;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82C3D6A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C3D6AC"))) PPC_WEAK_FUNC(sub_82C3D6AC);
PPC_FUNC_IMPL(__imp__sub_82C3D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D6B0"))) PPC_WEAK_FUNC(sub_82C3D6B0);
PPC_FUNC_IMPL(__imp__sub_82C3D6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82C3D6B8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,8(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// beq cr6,0x82c3d6fc
	if (ctx.cr6.eq) goto loc_82C3D6FC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3D6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3D6FC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,12
	ctx.r26.s64 = 12;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3d718
	if (!ctx.cr6.eq) goto loc_82C3D718;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// b 0x82c3d724
	goto loc_82C3D724;
loc_82C3D718:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_82C3D724:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c3d98c
	if (ctx.cr6.eq) goto loc_82C3D98C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3d73c
	if (!ctx.cr6.eq) goto loc_82C3D73C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3d748
	goto loc_82C3D748;
loc_82C3D73C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	ctx.r11.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_82C3D748:
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// ori r9,r9,21845
	ctx.r9.u64 = ctx.r9.u64 | 21845;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82c3d764
	if (!ctx.cr6.lt) goto loc_82C3D764;
	// bl 0x82bf8e78
	ctx.lr = 0x82C3D760;
	sub_82BF8E78(ctx, base);
	// b 0x82c3d98c
	goto loc_82C3D98C;
loc_82C3D764:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3d774
	if (!ctx.cr6.eq) goto loc_82C3D774;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3d780
	goto loc_82C3D780;
loc_82C3D774:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r7,r26
	ctx.r11.s32 = ctx.r7.s32 / ctx.r26.s32;
loc_82C3D780:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c3d8d4
	if (!ctx.cr6.lt) goto loc_82C3D8D4;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c3d7a4
	if (ctx.cr6.lt) goto loc_82C3D7A4;
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82C3D7A4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3d7b4
	if (!ctx.cr6.eq) goto loc_82C3D7B4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3d7c0
	goto loc_82C3D7C0;
loc_82C3D7B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	ctx.r11.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_82C3D7C0:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c3d7ec
	if (!ctx.cr6.lt) goto loc_82C3D7EC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3d7dc
	if (!ctx.cr6.eq) goto loc_82C3D7DC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3d7e8
	goto loc_82C3D7E8;
loc_82C3D7DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r10,r26
	ctx.r11.s32 = ctx.r10.s32 / ctx.r26.s32;
loc_82C3D7E8:
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82C3D7EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c49908
	ctx.lr = 0x82C3D7F8;
	sub_82C49908(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	ctx.lr = 0x82C3D828;
	sub_82C3CD58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3d218
	ctx.lr = 0x82C3D83C;
	sub_82C3D218(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r25,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r25.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	ctx.lr = 0x82C3D860;
	sub_82C3CD58(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c3d874
	if (!ctx.cr6.eq) goto loc_82C3D874;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3d880
	goto loc_82C3D880;
loc_82C3D874:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r11,r10,r26
	ctx.r11.s32 = ctx.r10.s32 / ctx.r26.s32;
loc_82C3D880:
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3d8a4
	if (ctx.cr6.eq) goto loc_82C3D8A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c3ce68
	ctx.lr = 0x82C3D89C;
	sub_82C3CE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C3D8A4;
	sub_824FE010(ctx, base);
loc_82C3D8A4:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82c3d988
	goto loc_82C3D988;
loc_82C3D8D4:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r30,204(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// divw r10,r11,r26
	ctx.r10.s32 = ctx.r11.s32 / ctx.r26.s32;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r25.u8);
	// bge cr6,0x82c3d94c
	if (!ctx.cr6.lt) goto loc_82C3D94C;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r29,r30
	ctx.r5.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	ctx.lr = 0x82C3D91C;
	sub_82C3CD58(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r8,r30,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r30.s64;
	// divw r7,r8,r26
	ctx.r7.s32 = ctx.r8.s32 / ctx.r26.s32;
	// subf r5,r7,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r7.s64;
	// bl 0x82c3d218
	ctx.lr = 0x82C3D938;
	sub_82C3D218(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// subf r4,r29,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r29.s64;
	// b 0x82c3d97c
	goto loc_82C3D97C;
loc_82C3D94C:
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r27,r28,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r28.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cd58
	ctx.lr = 0x82C3D964;
	sub_82C3CD58(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3c648
	ctx.lr = 0x82C3D978;
	sub_82C3C648(ctx, base);
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
loc_82C3D97C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3bb88
	ctx.lr = 0x82C3D988;
	sub_82C3BB88(ctx, base);
loc_82C3D988:
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82C3D98C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82c3d9a8
	if (ctx.cr6.eq) goto loc_82C3D9A8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3D9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3D9A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82C3D9B0"))) PPC_WEAK_FUNC(sub_82C3D9B0);
PPC_FUNC_IMPL(__imp__sub_82C3D9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82C3D9B8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82c3bb00
	ctx.lr = 0x82C3D9D4;
	sub_82C3BB00(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,28
	ctx.r26.s64 = 28;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3d9f0
	if (!ctx.cr6.eq) goto loc_82C3D9F0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// b 0x82c3d9fc
	goto loc_82C3D9FC;
loc_82C3D9F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_82C3D9FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c3dc44
	if (ctx.cr6.eq) goto loc_82C3DC44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3da14
	if (!ctx.cr6.eq) goto loc_82C3DA14;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3da20
	goto loc_82C3DA20;
loc_82C3DA14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	ctx.r11.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_82C3DA20:
	// lis r9,2340
	ctx.r9.s64 = 153354240;
	// ori r9,r9,37449
	ctx.r9.u64 = ctx.r9.u64 | 37449;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82c3da3c
	if (!ctx.cr6.lt) goto loc_82C3DA3C;
	// bl 0x82bf8e78
	ctx.lr = 0x82C3DA38;
	sub_82BF8E78(ctx, base);
	// b 0x82c3dc44
	goto loc_82C3DC44;
loc_82C3DA3C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3da4c
	if (!ctx.cr6.eq) goto loc_82C3DA4C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3da58
	goto loc_82C3DA58;
loc_82C3DA4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r7,r26
	ctx.r11.s32 = ctx.r7.s32 / ctx.r26.s32;
loc_82C3DA58:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c3db9c
	if (!ctx.cr6.lt) goto loc_82C3DB9C;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c3da7c
	if (ctx.cr6.lt) goto loc_82C3DA7C;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82C3DA7C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3da8c
	if (!ctx.cr6.eq) goto loc_82C3DA8C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3da98
	goto loc_82C3DA98;
loc_82C3DA8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r26
	ctx.r11.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_82C3DA98:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c3dac4
	if (!ctx.cr6.lt) goto loc_82C3DAC4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3dab4
	if (!ctx.cr6.eq) goto loc_82C3DAB4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3dac0
	goto loc_82C3DAC0;
loc_82C3DAB4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r10,r26
	ctx.r11.s32 = ctx.r10.s32 / ctx.r26.s32;
loc_82C3DAC0:
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82C3DAC4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829fed20
	ctx.lr = 0x82C3DAD0;
	sub_829FED20(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r29,220(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	ctx.lr = 0x82C3DB00;
	sub_82C3CDD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3d288
	ctx.lr = 0x82C3DB14;
	sub_82C3D288(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r25,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r25.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	ctx.lr = 0x82C3DB38;
	sub_82C3CDD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c3db4c
	if (!ctx.cr6.eq) goto loc_82C3DB4C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82c3db58
	goto loc_82C3DB58;
loc_82C3DB4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r11,r10,r26
	ctx.r11.s32 = ctx.r10.s32 / ctx.r26.s32;
loc_82C3DB58:
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3db7c
	if (ctx.cr6.eq) goto loc_82C3DB7C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c3cec8
	ctx.lr = 0x82C3DB74;
	sub_82C3CEC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C3DB7C;
	sub_824FE010(ctx, base);
loc_82C3DB7C:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82c3dc44
	goto loc_82C3DC44;
loc_82C3DB9C:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r28,r27,28
	ctx.r28.s64 = ctx.r27.s64 * 28;
	// lwz r30,220(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// divw r10,r11,r26
	ctx.r10.s32 = ctx.r11.s32 / ctx.r26.s32;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// bge cr6,0x82c3dc0c
	if (!ctx.cr6.lt) goto loc_82C3DC0C;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	ctx.lr = 0x82C3DBDC;
	sub_82C3CDD0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r30,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r30.s64;
	// divw r9,r10,r26
	ctx.r9.s32 = ctx.r10.s32 / ctx.r26.s32;
	// subf r5,r9,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r9.s64;
	// bl 0x82c3d288
	ctx.lr = 0x82C3DBF8;
	sub_82C3D288(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// subf r4,r28,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x82c3dc38
	goto loc_82C3DC38;
loc_82C3DC0C:
	// subf r27,r28,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r28.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c3cdd0
	ctx.lr = 0x82C3DC20;
	sub_82C3CDD0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3c6a8
	ctx.lr = 0x82C3DC34;
	sub_82C3C6A8(ctx, base);
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
loc_82C3DC38:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3bc28
	ctx.lr = 0x82C3DC44;
	sub_82C3BC28(ctx, base);
loc_82C3DC44:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3dc60
	if (ctx.cr6.eq) goto loc_82C3DC60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3DC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3DC60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82C3DC68"))) PPC_WEAK_FUNC(sub_82C3DC68);
PPC_FUNC_IMPL(__imp__sub_82C3DC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3DC70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3dc98
	if (!ctx.cr6.eq) goto loc_82C3DC98;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82c3dca4
	goto loc_82C3DCA4;
loc_82C3DC98:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DCA4:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82c3dcf8
	if (!ctx.cr6.lt) goto loc_82C3DCF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3dcbc
	if (!ctx.cr6.eq) goto loc_82C3DCBC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x82c3dcc8
	goto loc_82C3DCC8;
loc_82C3DCBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DCC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3dcd8
	if (!ctx.cr6.gt) goto loc_82C3DCD8;
	// twi 31,r0,22
loc_82C3DCD8:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3d6b0
	ctx.lr = 0x82C3DCF4;
	sub_82C3D6B0(ctx, base);
	// b 0x82c3dd64
	goto loc_82C3DD64;
loc_82C3DCF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3dd64
	if (ctx.cr6.eq) goto loc_82C3DD64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82c3dd64
	if (!ctx.cr6.lt) goto loc_82C3DD64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3dd20
	if (!ctx.cr6.gt) goto loc_82C3DD20;
	// twi 31,r0,22
loc_82C3DD20:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x82c3dd34
	if (!ctx.cr6.gt) goto loc_82C3DD34;
	// twi 31,r0,22
loc_82C3DD34:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c49b70
	ctx.lr = 0x82C3DD4C;
	sub_82C49B70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82c3d090
	ctx.lr = 0x82C3DD64;
	sub_82C3D090(ctx, base);
loc_82C3DD64:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3dd84
	if (ctx.cr6.eq) goto loc_82C3DD84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3DD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3DD84:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3DD94"))) PPC_WEAK_FUNC(sub_82C3DD94);
PPC_FUNC_IMPL(__imp__sub_82C3DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3DD98"))) PPC_WEAK_FUNC(sub_82C3DD98);
PPC_FUNC_IMPL(__imp__sub_82C3DD98) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3ddcc
	if (!ctx.cr6.eq) goto loc_82C3DDCC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82c3ddd8
	goto loc_82C3DDD8;
loc_82C3DDCC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DDD8:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82c3de28
	if (!ctx.cr6.lt) goto loc_82C3DE28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3ddf0
	if (!ctx.cr6.eq) goto loc_82C3DDF0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x82c3ddfc
	goto loc_82C3DDFC;
loc_82C3DDF0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C3DDFC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3de0c
	if (!ctx.cr6.gt) goto loc_82C3DE0C;
	// twi 31,r0,22
loc_82C3DE0C:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3d9b0
	ctx.lr = 0x82C3DE24;
	sub_82C3D9B0(ctx, base);
	// b 0x82c3deb0
	goto loc_82C3DEB0;
loc_82C3DE28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3deb0
	if (ctx.cr6.eq) goto loc_82C3DEB0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82c3deb0
	if (!ctx.cr6.lt) goto loc_82C3DEB0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3de50
	if (!ctx.cr6.gt) goto loc_82C3DE50;
	// twi 31,r0,22
loc_82C3DE50:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x82c3de64
	if (!ctx.cr6.gt) goto loc_82C3DE64;
	// twi 31,r0,22
loc_82C3DE64:
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82c3de94
	if (ctx.cr6.gt) goto loc_82C3DE94;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c3de98
	if (!ctx.cr6.lt) goto loc_82C3DE98;
loc_82C3DE94:
	// twi 31,r0,22
loc_82C3DE98:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c3d158
	ctx.lr = 0x82C3DEB0;
	sub_82C3D158(ctx, base);
loc_82C3DEB0:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ded0
	if (ctx.cr6.eq) goto loc_82C3DED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3DED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3DED0:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C3DEF0"))) PPC_WEAK_FUNC(sub_82C3DEF0);
PPC_FUNC_IMPL(__imp__sub_82C3DEF0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-15492
	ctx.r8.s64 = ctx.r11.s64 + -15492;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r5,r7,-18484
	ctx.r5.s64 = ctx.r7.s64 + -18484;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lfs f0,2720(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2720);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// bl 0x82c474e0
	ctx.lr = 0x82C3DF70;
	sub_82C474E0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,3084(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r8,-18484
	ctx.r6.s64 = ctx.r8.s64 + -18484;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v62,v63,4,3
	_mm_store_ps(ctx.v62.f32, _mm_blend_ps(_mm_load_ps(ctx.v62.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v62,3,2
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 78), 3));
	// stvx128 v60,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// bl 0x82bfcb58
	ctx.lr = 0x82C3DFE0;
	sub_82BFCB58(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82C3E008"))) PPC_WEAK_FUNC(sub_82C3E008);
PPC_FUNC_IMPL(__imp__sub_82C3E008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,80
	ctx.r10.s64 = 80;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lvx128 v63,r3,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3E020"))) PPC_WEAK_FUNC(sub_82C3E020);
PPC_FUNC_IMPL(__imp__sub_82C3E020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca74fc
	ctx.lr = 0x82C3E034;
	sub_82CA74FC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f25,f2
	ctx.f25.f64 = ctx.f2.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// lfs f29,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,3092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3092);
	ctx.f28.f64 = double(temp.f32);
loc_82C3E05C:
	// bl 0x82ca3b80
	ctx.lr = 0x82C3E060;
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmsubs f30,f11,f27,f29
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 - ctx.f29.f64));
	// bl 0x82ca3b80
	ctx.lr = 0x82C3E080;
	sub_82CA3B80(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fmuls f10,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmsubs f5,f6,f27,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 - ctx.f29.f64));
	// fmadds f31,f5,f5,f10
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x82c3e05c
	if (!ctx.cr6.lt) goto loc_82C3E05C;
	// lfs f0,-28496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82c3e05c
	if (!ctx.cr6.gt) goto loc_82C3E05C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822050e0
	ctx.lr = 0x82C3E0C0;
	sub_822050E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3e05c
	if (!ctx.cr6.eq) goto loc_82C3E05C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821f3c80
	ctx.lr = 0x82C3E0D0;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,3168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28508);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f31.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fdivs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// fmadds f1,f7,f25,f26
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f26.f64));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7548
	ctx.lr = 0x82C3E108;
	sub_82CA7548(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3E118"))) PPC_WEAK_FUNC(sub_82C3E118);
PPC_FUNC_IMPL(__imp__sub_82C3E118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3E120;
	sub_82CA2BEC(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ca3b80
	ctx.lr = 0x82C3E140;
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3092);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmsubs f6,f13,f7,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f9.f64));
	// fadds f30,f6,f8
	ctx.f30.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// bl 0x82ca3b80
	ctx.lr = 0x82C3E180;
	sub_82CA3B80(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lfs f5,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// fsubs f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmadds f29,f13,f12,f5
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f5.f64));
	// bl 0x82239e88
	ctx.lr = 0x82C3E1B0;
	sub_82239E88(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f31,3084(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82239f68
	ctx.lr = 0x82C3E1D0;
	sub_82239F68(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,4,3
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 57), 4));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v63,v60,3,2
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 78), 3));
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3E224"))) PPC_WEAK_FUNC(sub_82C3E224);
PPC_FUNC_IMPL(__imp__sub_82C3E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E228"))) PPC_WEAK_FUNC(sub_82C3E228);
PPC_FUNC_IMPL(__imp__sub_82C3E228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3E230;
	sub_82CA2BE8(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7508
	ctx.lr = 0x82C3E238;
	sub_82CA7508(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82c3e28c
	if (ctx.cr6.lt) goto loc_82C3E28C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x82c3e28c
	if (ctx.cr6.gt) goto loc_82C3E28C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-28508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// stfs f13,100(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// stfs f12,104(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	ctx.lr = 0x82C3E288;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82C3E28C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82c3e2b8
	if (!ctx.cr6.eq) goto loc_82C3E2B8;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c3e2c4
	goto loc_82C3E2C4;
loc_82C3E2B8:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3E2C4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f2,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// li r10,80
	ctx.r10.s64 = 80;
	// lfs f1,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r29,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmsum3fp128 v61,v63,v63
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f3,f0
	ctx.f3.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82c509a8
	ctx.lr = 0x82C3E304;
	sub_82C509A8(ctx, base);
	// lfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f28,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// stfs f1,104(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// fmadds f11,f28,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fsqrts f0,f11
	ctx.f0.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82c3e33c
	if (!ctx.cr6.gt) goto loc_82C3E33C;
	// lfs f12,-28496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -28496);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82c3e340
	if (ctx.cr6.gt) goto loc_82C3E340;
loc_82C3E33C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C3E340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3e374
	if (ctx.cr6.eq) goto loc_82C3E374;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-28508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// stfs f13,100(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	ctx.lr = 0x82C3E370;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82C3E374:
	// fdivs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x8227efe8
	ctx.lr = 0x82C3E37C;
	sub_8227EFE8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,96(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// lfs f0,-28496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82c3e3e4
	if (ctx.cr6.gt) goto loc_82C3E3E4;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82c3e3e4
	if (ctx.cr6.lt) goto loc_82C3E3E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,-28504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28504);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,3084
	ctx.r11.s64 = ctx.r11.s64 + 3084;
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// blt cr6,0x82c3e3d8
	if (ctx.cr6.lt) goto loc_82C3E3D8;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x82c3e428
	goto loc_82C3E428;
loc_82C3E3D8:
	// lfs f12,-28512(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -28512);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x82c3e428
	goto loc_82C3E428;
loc_82C3E3E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3084
	ctx.r11.s64 = ctx.r11.s64 + 3084;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// blt cr6,0x82c3e408
	if (ctx.cr6.lt) goto loc_82C3E408;
	// fdivs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// bl 0x8227ee80
	ctx.lr = 0x82C3E400;
	sub_8227EE80(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// b 0x82c3e420
	goto loc_82C3E420;
loc_82C3E408:
	// fdivs f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8227ee80
	ctx.lr = 0x82C3E414;
	sub_8227EE80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,-28512(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -28512);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
loc_82C3E420:
	// lfs f13,-28504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28504);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
loc_82C3E428:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82c3e450
	if (ctx.cr6.gt) goto loc_82C3E450;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x82c3e450
	if (ctx.cr6.lt) goto loc_82C3E450;
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// bge cr6,0x82c3e480
	if (!ctx.cr6.lt) goto loc_82C3E480;
	// lfs f0,-28512(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -28512);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82c3e480
	goto loc_82C3E480;
loc_82C3E450:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// blt cr6,0x82c3e468
	if (ctx.cr6.lt) goto loc_82C3E468;
	// fdivs f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 / ctx.f30.f64));
	// bl 0x8227ee80
	ctx.lr = 0x82C3E460;
	sub_8227EE80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// b 0x82c3e480
	goto loc_82C3E480;
loc_82C3E468:
	// fdivs f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f30.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8227ee80
	ctx.lr = 0x82C3E474;
	sub_8227EE80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,-28512(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -28512);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82C3E480:
	// fadds f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f0,100(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	ctx.lr = 0x82C3E494;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3E498"))) PPC_WEAK_FUNC(sub_82C3E498);
PPC_FUNC_IMPL(__imp__sub_82C3E498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3E4A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821d5ba0
	ctx.lr = 0x82C3E4B8;
	sub_821D5BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc7f8
	ctx.lr = 0x82C3E4C8;
	sub_82BFC7F8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc810
	ctx.lr = 0x82C3E4D4;
	sub_82BFC810(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc8f0
	ctx.lr = 0x82C3E4DC;
	sub_82BFC8F0(ctx, base);
	// lbz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3e4f0
	if (ctx.cr6.eq) goto loc_82C3E4F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfc900
	ctx.lr = 0x82C3E4F0;
	sub_82BFC900(ctx, base);
loc_82C3E4F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b768
	ctx.lr = 0x82C3E51C;
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3e538
	if (ctx.cr6.eq) goto loc_82C3E538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3E538:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82c3e55c
	if (ctx.cr6.eq) goto loc_82C3E55C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x82c50130
	ctx.lr = 0x82C3E55C;
	sub_82C50130(ctx, base);
loc_82C3E55C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82289530
	ctx.lr = 0x82C3E564;
	sub_82289530(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3E56C"))) PPC_WEAK_FUNC(sub_82C3E56C);
PPC_FUNC_IMPL(__imp__sub_82C3E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E570"))) PPC_WEAK_FUNC(sub_82C3E570);
PPC_FUNC_IMPL(__imp__sub_82C3E570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3E578;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82c3e020
	ctx.lr = 0x82C3E594;
	sub_82C3E020(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// lfd f0,-28488(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28488);
	// lfs f13,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82c3e660
	if (ctx.cr6.lt) goto loc_82C3E660;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3e118
	ctx.lr = 0x82C3E5C4;
	sub_82C3E118(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d5ba0
	ctx.lr = 0x82C3E5CC;
	sub_821D5BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bfc7f8
	ctx.lr = 0x82C3E5DC;
	sub_82BFC7F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bfc810
	ctx.lr = 0x82C3E5E8;
	sub_82BFC810(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82bfc910
	ctx.lr = 0x82C3E5F8;
	sub_82BFC910(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3E618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b768
	ctx.lr = 0x82C3E624;
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3e640
	if (ctx.cr6.eq) goto loc_82C3E640;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3E640:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82c3e66c
	if (!ctx.cr6.eq) goto loc_82C3E66C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82289530
	ctx.lr = 0x82C3E660;
	sub_82289530(ctx, base);
loc_82C3E660:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C3E66C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c50130
	ctx.lr = 0x82C3E678;
	sub_82C50130(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82289530
	ctx.lr = 0x82C3E69C;
	sub_82289530(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3E6A8"))) PPC_WEAK_FUNC(sub_82C3E6A8);
PPC_FUNC_IMPL(__imp__sub_82C3E6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3E6B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3e6d0
	if (!ctx.cr6.eq) goto loc_82C3E6D0;
loc_82C3E6C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C3E6D0:
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3e6e8
	if (!ctx.cr6.gt) goto loc_82C3E6E8;
	// twi 31,r0,22
loc_82C3E6E8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3e6fc
	if (!ctx.cr6.gt) goto loc_82C3E6FC;
	// twi 31,r0,22
loc_82C3E6FC:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3e708
	if (ctx.cr6.eq) goto loc_82C3E708;
	// twi 31,r0,22
loc_82C3E708:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3e75c
	if (ctx.cr6.eq) goto loc_82C3E75C;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e71c
	if (ctx.cr6.lt) goto loc_82C3E71C;
	// twi 31,r0,22
loc_82C3E71C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3e744
	if (ctx.cr6.eq) goto loc_82C3E744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3e6c4
	if (ctx.cr6.eq) goto loc_82C3E6C4;
loc_82C3E744:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e754
	if (ctx.cr6.lt) goto loc_82C3E754;
	// twi 31,r0,22
loc_82C3E754:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82c3e6e8
	goto loc_82C3E6E8;
loc_82C3E75C:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3e774
	if (!ctx.cr6.gt) goto loc_82C3E774;
	// twi 31,r0,22
loc_82C3E774:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3e788
	if (!ctx.cr6.gt) goto loc_82C3E788;
	// twi 31,r0,22
loc_82C3E788:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3e794
	if (ctx.cr6.eq) goto loc_82C3E794;
	// twi 31,r0,22
loc_82C3E794:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3e7e8
	if (ctx.cr6.eq) goto loc_82C3E7E8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e7a8
	if (ctx.cr6.lt) goto loc_82C3E7A8;
	// twi 31,r0,22
loc_82C3E7A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3e7d0
	if (ctx.cr6.eq) goto loc_82C3E7D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3e6c4
	if (ctx.cr6.eq) goto loc_82C3E6C4;
loc_82C3E7D0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e7e0
	if (ctx.cr6.lt) goto loc_82C3E7E0;
	// twi 31,r0,22
loc_82C3E7E0:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x82c3e774
	goto loc_82C3E774;
loc_82C3E7E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3E7F4"))) PPC_WEAK_FUNC(sub_82C3E7F4);
PPC_FUNC_IMPL(__imp__sub_82C3E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E7F8"))) PPC_WEAK_FUNC(sub_82C3E7F8);
PPC_FUNC_IMPL(__imp__sub_82C3E7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3E800;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3e8a4
	if (ctx.cr6.eq) goto loc_82C3E8A4;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3e830
	if (!ctx.cr6.gt) goto loc_82C3E830;
	// twi 31,r0,22
loc_82C3E830:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3e844
	if (!ctx.cr6.gt) goto loc_82C3E844;
	// twi 31,r0,22
loc_82C3E844:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3e850
	if (ctx.cr6.eq) goto loc_82C3E850;
	// twi 31,r0,22
loc_82C3E850:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3e89c
	if (ctx.cr6.eq) goto loc_82C3E89C;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e864
	if (ctx.cr6.lt) goto loc_82C3E864;
	// twi 31,r0,22
loc_82C3E864:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3e884
	if (ctx.cr6.eq) goto loc_82C3E884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3E884:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e894
	if (ctx.cr6.lt) goto loc_82C3E894;
	// twi 31,r0,22
loc_82C3E894:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82c3e830
	goto loc_82C3E830;
loc_82C3E89C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,108(r29)
	PPC_STORE_U8(ctx.r29.u32 + 108, ctx.r11.u8);
loc_82C3E8A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3E8AC"))) PPC_WEAK_FUNC(sub_82C3E8AC);
PPC_FUNC_IMPL(__imp__sub_82C3E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E8B0"))) PPC_WEAK_FUNC(sub_82C3E8B0);
PPC_FUNC_IMPL(__imp__sub_82C3E8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3E8B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3ea04
	if (!ctx.cr6.eq) goto loc_82C3EA04;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3e8e8
	if (!ctx.cr6.gt) goto loc_82C3E8E8;
	// twi 31,r0,22
loc_82C3E8E8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3e8fc
	if (!ctx.cr6.gt) goto loc_82C3E8FC;
	// twi 31,r0,22
loc_82C3E8FC:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3e908
	if (ctx.cr6.eq) goto loc_82C3E908;
	// twi 31,r0,22
loc_82C3E908:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3e954
	if (ctx.cr6.eq) goto loc_82C3E954;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e91c
	if (ctx.cr6.lt) goto loc_82C3E91C;
	// twi 31,r0,22
loc_82C3E91C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3e93c
	if (ctx.cr6.eq) goto loc_82C3E93C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3E93C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e94c
	if (ctx.cr6.lt) goto loc_82C3E94C;
	// twi 31,r0,22
loc_82C3E94C:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82c3e8e8
	goto loc_82C3E8E8;
loc_82C3E954:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3e96c
	if (!ctx.cr6.gt) goto loc_82C3E96C;
	// twi 31,r0,22
loc_82C3E96C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3e980
	if (!ctx.cr6.gt) goto loc_82C3E980;
	// twi 31,r0,22
loc_82C3E980:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3e98c
	if (ctx.cr6.eq) goto loc_82C3E98C;
	// twi 31,r0,22
loc_82C3E98C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3e9fc
	if (ctx.cr6.eq) goto loc_82C3E9FC;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e9a0
	if (ctx.cr6.lt) goto loc_82C3E9A0;
	// twi 31,r0,22
loc_82C3E9A0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3e9e4
	if (ctx.cr6.eq) goto loc_82C3E9E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3e9e4
	if (!ctx.cr6.eq) goto loc_82C3E9E4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3E9E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3e9f4
	if (ctx.cr6.lt) goto loc_82C3E9F4;
	// twi 31,r0,22
loc_82C3E9F4:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x82c3e96c
	goto loc_82C3E96C;
loc_82C3E9FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r29)
	PPC_STORE_U8(ctx.r29.u32 + 108, ctx.r11.u8);
loc_82C3EA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3EA0C"))) PPC_WEAK_FUNC(sub_82C3EA0C);
PPC_FUNC_IMPL(__imp__sub_82C3EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3EA10"))) PPC_WEAK_FUNC(sub_82C3EA10);
PPC_FUNC_IMPL(__imp__sub_82C3EA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C3EA18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3eb74
	if (!ctx.cr6.eq) goto loc_82C3EB74;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// stb r11,109(r29)
	PPC_STORE_U8(ctx.r29.u32 + 109, ctx.r11.u8);
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3ea4c
	if (!ctx.cr6.gt) goto loc_82C3EA4C;
	// twi 31,r0,22
loc_82C3EA4C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3ea60
	if (!ctx.cr6.gt) goto loc_82C3EA60;
	// twi 31,r0,22
loc_82C3EA60:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3ea6c
	if (ctx.cr6.eq) goto loc_82C3EA6C;
	// twi 31,r0,22
loc_82C3EA6C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3ead4
	if (ctx.cr6.eq) goto loc_82C3EAD4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3ea80
	if (ctx.cr6.lt) goto loc_82C3EA80;
	// twi 31,r0,22
loc_82C3EA80:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3eabc
	if (ctx.cr6.eq) goto loc_82C3EABC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3eabc
	if (!ctx.cr6.eq) goto loc_82C3EABC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3EABC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3eacc
	if (ctx.cr6.lt) goto loc_82C3EACC;
	// twi 31,r0,22
loc_82C3EACC:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82c3ea4c
	goto loc_82C3EA4C;
loc_82C3EAD4:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3eaec
	if (!ctx.cr6.gt) goto loc_82C3EAEC;
	// twi 31,r0,22
loc_82C3EAEC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3eb00
	if (!ctx.cr6.gt) goto loc_82C3EB00;
	// twi 31,r0,22
loc_82C3EB00:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3eb0c
	if (ctx.cr6.eq) goto loc_82C3EB0C;
	// twi 31,r0,22
loc_82C3EB0C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3eb74
	if (ctx.cr6.eq) goto loc_82C3EB74;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3eb20
	if (ctx.cr6.lt) goto loc_82C3EB20;
	// twi 31,r0,22
loc_82C3EB20:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3eb5c
	if (ctx.cr6.eq) goto loc_82C3EB5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3eb5c
	if (!ctx.cr6.eq) goto loc_82C3EB5C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3EB5C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3eb6c
	if (ctx.cr6.lt) goto loc_82C3EB6C;
	// twi 31,r0,22
loc_82C3EB6C:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x82c3eaec
	goto loc_82C3EAEC;
loc_82C3EB74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C3EB7C"))) PPC_WEAK_FUNC(sub_82C3EB7C);
PPC_FUNC_IMPL(__imp__sub_82C3EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3EB80"))) PPC_WEAK_FUNC(sub_82C3EB80);
PPC_FUNC_IMPL(__imp__sub_82C3EB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C3EB88;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,109(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 109);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3ed54
	if (!ctx.cr6.eq) goto loc_82C3ED54;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stb r11,109(r28)
	PPC_STORE_U8(ctx.r28.u32 + 109, ctx.r11.u8);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3ebc0
	if (!ctx.cr6.gt) goto loc_82C3EBC0;
	// twi 31,r0,22
loc_82C3EBC0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82C3EBC8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3ebdc
	if (!ctx.cr6.gt) goto loc_82C3EBDC;
	// twi 31,r0,22
loc_82C3EBDC:
	// cmplw cr6,r29,r29
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c3ebe8
	if (ctx.cr6.eq) goto loc_82C3EBE8;
	// twi 31,r0,22
loc_82C3EBE8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c3ec80
	if (ctx.cr6.eq) goto loc_82C3EC80;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3ebfc
	if (ctx.cr6.lt) goto loc_82C3EBFC;
	// twi 31,r0,22
loc_82C3EBFC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ec68
	if (ctx.cr6.eq) goto loc_82C3EC68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ec68
	if (!ctx.cr6.eq) goto loc_82C3EC68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ec60
	if (ctx.cr6.eq) goto loc_82C3EC60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3EC60:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82C3EC68:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3ec78
	if (ctx.cr6.lt) goto loc_82C3EC78;
	// twi 31,r0,22
loc_82C3EC78:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// b 0x82c3ebc8
	goto loc_82C3EBC8;
loc_82C3EC80:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3ec98
	if (!ctx.cr6.gt) goto loc_82C3EC98;
	// twi 31,r0,22
loc_82C3EC98:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82C3EC9C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3ecb0
	if (!ctx.cr6.gt) goto loc_82C3ECB0;
	// twi 31,r0,22
loc_82C3ECB0:
	// cmplw cr6,r29,r29
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c3ecbc
	if (ctx.cr6.eq) goto loc_82C3ECBC;
	// twi 31,r0,22
loc_82C3ECBC:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3ed54
	if (ctx.cr6.eq) goto loc_82C3ED54;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3ecd0
	if (ctx.cr6.lt) goto loc_82C3ECD0;
	// twi 31,r0,22
loc_82C3ECD0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ed3c
	if (ctx.cr6.eq) goto loc_82C3ED3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3ECF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ed3c
	if (!ctx.cr6.eq) goto loc_82C3ED3C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3ED18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ed34
	if (ctx.cr6.eq) goto loc_82C3ED34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3ED34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3ED34:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82C3ED3C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3ed4c
	if (ctx.cr6.lt) goto loc_82C3ED4C;
	// twi 31,r0,22
loc_82C3ED4C:
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// b 0x82c3ec9c
	goto loc_82C3EC9C;
loc_82C3ED54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C3ED5C"))) PPC_WEAK_FUNC(sub_82C3ED5C);
PPC_FUNC_IMPL(__imp__sub_82C3ED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3ED60"))) PPC_WEAK_FUNC(sub_82C3ED60);
PPC_FUNC_IMPL(__imp__sub_82C3ED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3ED68;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x82c50270
	ctx.lr = 0x82C3ED7C;
	sub_82C50270(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3ed94
	if (!ctx.cr6.gt) goto loc_82C3ED94;
	// twi 31,r0,22
loc_82C3ED94:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3eda8
	if (!ctx.cr6.gt) goto loc_82C3EDA8;
	// twi 31,r0,22
loc_82C3EDA8:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3edb4
	if (ctx.cr6.eq) goto loc_82C3EDB4;
	// twi 31,r0,22
loc_82C3EDB4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3ee00
	if (ctx.cr6.eq) goto loc_82C3EE00;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3edc8
	if (ctx.cr6.lt) goto loc_82C3EDC8;
	// twi 31,r0,22
loc_82C3EDC8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ede8
	if (ctx.cr6.eq) goto loc_82C3EDE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3EDE8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3edf8
	if (ctx.cr6.lt) goto loc_82C3EDF8;
	// twi 31,r0,22
loc_82C3EDF8:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82c3ed94
	goto loc_82C3ED94;
loc_82C3EE00:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3ee18
	if (!ctx.cr6.gt) goto loc_82C3EE18;
	// twi 31,r0,22
loc_82C3EE18:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3ee2c
	if (!ctx.cr6.gt) goto loc_82C3EE2C;
	// twi 31,r0,22
loc_82C3EE2C:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3ee38
	if (ctx.cr6.eq) goto loc_82C3EE38;
	// twi 31,r0,22
loc_82C3EE38:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3ee84
	if (ctx.cr6.eq) goto loc_82C3EE84;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3ee4c
	if (ctx.cr6.lt) goto loc_82C3EE4C;
	// twi 31,r0,22
loc_82C3EE4C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ee6c
	if (ctx.cr6.eq) goto loc_82C3EE6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3EE6C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3ee7c
	if (ctx.cr6.lt) goto loc_82C3EE7C;
	// twi 31,r0,22
loc_82C3EE7C:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x82c3ee18
	goto loc_82C3EE18;
loc_82C3EE84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3EE8C"))) PPC_WEAK_FUNC(sub_82C3EE8C);
PPC_FUNC_IMPL(__imp__sub_82C3EE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3EE90"))) PPC_WEAK_FUNC(sub_82C3EE90);
PPC_FUNC_IMPL(__imp__sub_82C3EE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3EE98;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x82c505e8
	ctx.lr = 0x82C3EEAC;
	sub_82C505E8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3eec4
	if (!ctx.cr6.gt) goto loc_82C3EEC4;
	// twi 31,r0,22
loc_82C3EEC4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3eed8
	if (!ctx.cr6.gt) goto loc_82C3EED8;
	// twi 31,r0,22
loc_82C3EED8:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3eee4
	if (ctx.cr6.eq) goto loc_82C3EEE4;
	// twi 31,r0,22
loc_82C3EEE4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3ef30
	if (ctx.cr6.eq) goto loc_82C3EF30;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3eef8
	if (ctx.cr6.lt) goto loc_82C3EEF8;
	// twi 31,r0,22
loc_82C3EEF8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ef18
	if (ctx.cr6.eq) goto loc_82C3EF18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3EF18:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3ef28
	if (ctx.cr6.lt) goto loc_82C3EF28;
	// twi 31,r0,22
loc_82C3EF28:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82c3eec4
	goto loc_82C3EEC4;
loc_82C3EF30:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3ef48
	if (!ctx.cr6.gt) goto loc_82C3EF48;
	// twi 31,r0,22
loc_82C3EF48:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3ef5c
	if (!ctx.cr6.gt) goto loc_82C3EF5C;
	// twi 31,r0,22
loc_82C3EF5C:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3ef68
	if (ctx.cr6.eq) goto loc_82C3EF68;
	// twi 31,r0,22
loc_82C3EF68:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3efb4
	if (ctx.cr6.eq) goto loc_82C3EFB4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3ef7c
	if (ctx.cr6.lt) goto loc_82C3EF7C;
	// twi 31,r0,22
loc_82C3EF7C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3ef9c
	if (ctx.cr6.eq) goto loc_82C3EF9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3EF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3EF9C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3efac
	if (ctx.cr6.lt) goto loc_82C3EFAC;
	// twi 31,r0,22
loc_82C3EFAC:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x82c3ef48
	goto loc_82C3EF48;
loc_82C3EFB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3EFBC"))) PPC_WEAK_FUNC(sub_82C3EFBC);
PPC_FUNC_IMPL(__imp__sub_82C3EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3EFC0"))) PPC_WEAK_FUNC(sub_82C3EFC0);
PPC_FUNC_IMPL(__imp__sub_82C3EFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3EFC8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3efec
	if (!ctx.cr6.gt) goto loc_82C3EFEC;
	// twi 31,r0,22
loc_82C3EFEC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3f000
	if (!ctx.cr6.gt) goto loc_82C3F000;
	// twi 31,r0,22
loc_82C3F000:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c3f00c
	if (ctx.cr6.eq) goto loc_82C3F00C;
	// twi 31,r0,22
loc_82C3F00C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3f094
	if (ctx.cr6.eq) goto loc_82C3F094;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3f020
	if (ctx.cr6.lt) goto loc_82C3F020;
	// twi 31,r0,22
loc_82C3F020:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3f048
	if (ctx.cr6.eq) goto loc_82C3F048;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3f058
	if (ctx.cr6.eq) goto loc_82C3F058;
loc_82C3F048:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3e498
	ctx.lr = 0x82C3F058;
	sub_82C3E498(ctx, base);
loc_82C3F058:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3f07c
	if (ctx.cr6.eq) goto loc_82C3F07C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3F07C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3f08c
	if (ctx.cr6.lt) goto loc_82C3F08C;
	// twi 31,r0,22
loc_82C3F08C:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82c3efec
	goto loc_82C3EFEC;
loc_82C3F094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3F09C"))) PPC_WEAK_FUNC(sub_82C3F09C);
PPC_FUNC_IMPL(__imp__sub_82C3F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F0A0"))) PPC_WEAK_FUNC(sub_82C3F0A0);
PPC_FUNC_IMPL(__imp__sub_82C3F0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C3F0A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3f1d8
	if (!ctx.cr6.eq) goto loc_82C3F1D8;
	// lwz r31,24(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r28,r27,20
	ctx.r28.s64 = ctx.r27.s64 + 20;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c3f0d8
	if (!ctx.cr6.gt) goto loc_82C3F0D8;
	// twi 31,r0,22
loc_82C3F0D8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3f0ec
	if (!ctx.cr6.gt) goto loc_82C3F0EC;
	// twi 31,r0,22
loc_82C3F0EC:
	// cmplw cr6,r28,r28
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c3f0f8
	if (ctx.cr6.eq) goto loc_82C3F0F8;
	// twi 31,r0,22
loc_82C3F0F8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c3f1d8
	if (ctx.cr6.eq) goto loc_82C3F1D8;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3f10c
	if (ctx.cr6.lt) goto loc_82C3F10C;
	// twi 31,r0,22
loc_82C3F10C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3f148
	if (ctx.cr6.eq) goto loc_82C3F148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x82c3f14c
	goto loc_82C3F14C;
loc_82C3F148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3F14C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3f180
	if (ctx.cr6.eq) goto loc_82C3F180;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3f180
	if (ctx.cr6.eq) goto loc_82C3F180;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f1,104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3F180:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3f19c
	if (!ctx.cr6.gt) goto loc_82C3F19C;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x82c3f1c0
	goto loc_82C3F1C0;
loc_82C3F19C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3f1b0
	if (ctx.cr6.eq) goto loc_82C3F1B0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3f1c0
	if (!ctx.cr6.eq) goto loc_82C3F1C0;
loc_82C3F1B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c3e570
	ctx.lr = 0x82C3F1C0;
	sub_82C3E570(ctx, base);
loc_82C3F1C0:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3f1d0
	if (ctx.cr6.lt) goto loc_82C3F1D0;
	// twi 31,r0,22
loc_82C3F1D0:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x82c3f0d8
	goto loc_82C3F0D8;
loc_82C3F1D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C3F1E0"))) PPC_WEAK_FUNC(sub_82C3F1E0);
PPC_FUNC_IMPL(__imp__sub_82C3F1E0) {
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
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3f224
	if (!ctx.cr6.eq) goto loc_82C3F224;
	// bl 0x82c3e228
	ctx.lr = 0x82C3F20C;
	sub_82C3E228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3efc0
	ctx.lr = 0x82C3F218;
	sub_82C3EFC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3f0a0
	ctx.lr = 0x82C3F224;
	sub_82C3F0A0(ctx, base);
loc_82C3F224:
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

__attribute__((alias("__imp__sub_82C3F23C"))) PPC_WEAK_FUNC(sub_82C3F23C);
PPC_FUNC_IMPL(__imp__sub_82C3F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F240"))) PPC_WEAK_FUNC(sub_82C3F240);
PPC_FUNC_IMPL(__imp__sub_82C3F240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3F248;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// addi r10,r11,-15492
	ctx.r10.s64 = ctx.r11.s64 + -15492;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82c502d8
	ctx.lr = 0x82C3F264;
	sub_82C502D8(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3f28c
	if (ctx.cr6.eq) goto loc_82C3F28C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c3cec8
	ctx.lr = 0x82C3F284;
	sub_82C3CEC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C3F28C;
	sub_824FE010(ctx, base);
loc_82C3F28C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3f2c4
	if (ctx.cr6.eq) goto loc_82C3F2C4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c3ce68
	ctx.lr = 0x82C3F2BC;
	sub_82C3CE68(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x82C3F2C4;
	sub_824FE010(ctx, base);
loc_82C3F2C4:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// bl 0x82c00018
	ctx.lr = 0x82C3F2D8;
	sub_82C00018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3F2E0"))) PPC_WEAK_FUNC(sub_82C3F2E0);
PPC_FUNC_IMPL(__imp__sub_82C3F2E0) {
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
	// bl 0x82c3f240
	ctx.lr = 0x82C3F300;
	sub_82C3F240(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3f318
	if (ctx.cr6.eq) goto loc_82C3F318;
	// bl 0x824fe010
	ctx.lr = 0x82C3F314;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3F318:
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

__attribute__((alias("__imp__sub_82C3F330"))) PPC_WEAK_FUNC(sub_82C3F330);
PPC_FUNC_IMPL(__imp__sub_82C3F330) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3f364
	if (!ctx.cr6.eq) goto loc_82C3F364;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82c3f374
	goto loc_82C3F374;
loc_82C3F364:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r7,r8
	ctx.r11.s32 = ctx.r7.s32 / ctx.r8.s32;
loc_82C3F374:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3dc68
	ctx.lr = 0x82C3F38C;
	sub_82C3DC68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3f3a0
	if (!ctx.cr6.gt) goto loc_82C3F3A0;
	// twi 31,r0,22
loc_82C3F3A0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82c3f3cc
	if (ctx.cr6.gt) goto loc_82C3F3CC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c3f3d0
	if (!ctx.cr6.lt) goto loc_82C3F3D0;
loc_82C3F3CC:
	// twi 31,r0,22
loc_82C3F3D0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c3f3e8
	if (ctx.cr6.lt) goto loc_82C3F3E8;
	// twi 31,r0,22
loc_82C3F3E8:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C3F404"))) PPC_WEAK_FUNC(sub_82C3F404);
PPC_FUNC_IMPL(__imp__sub_82C3F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F408"))) PPC_WEAK_FUNC(sub_82C3F408);
PPC_FUNC_IMPL(__imp__sub_82C3F408) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3f454
	if (!ctx.cr6.eq) goto loc_82C3F454;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82c3f464
	goto loc_82C3F464;
loc_82C3F454:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,28
	ctx.r8.s64 = 28;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r7,r8
	ctx.r11.s32 = ctx.r7.s32 / ctx.r8.s32;
loc_82C3F464:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3dd98
	ctx.lr = 0x82C3F47C;
	sub_82C3DD98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3f490
	if (!ctx.cr6.gt) goto loc_82C3F490;
	// twi 31,r0,22
loc_82C3F490:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,-28
	ctx.r10.s64 = ctx.r11.s64 + -28;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82c3f4bc
	if (ctx.cr6.gt) goto loc_82C3F4BC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c3f4c0
	if (!ctx.cr6.lt) goto loc_82C3F4C0;
loc_82C3F4BC:
	// twi 31,r0,22
loc_82C3F4C0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r11,-28
	ctx.r31.s64 = ctx.r11.s64 + -28;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c3f4d8
	if (ctx.cr6.lt) goto loc_82C3F4D8;
	// twi 31,r0,22
loc_82C3F4D8:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f29,12(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82ca3b80
	ctx.lr = 0x82C3F4EC;
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r9,24
	ctx.r9.s64 = 24;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,3092(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3092);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82C3F540"))) PPC_WEAK_FUNC(sub_82C3F540);
PPC_FUNC_IMPL(__imp__sub_82C3F540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C3F548;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r10,r27,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x82c3f57c
	if (ctx.cr6.eq) goto loc_82C3F57C;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82c3f588
	goto loc_82C3F588;
loc_82C3F57C:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_82C3F588:
	// stfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3f5dc
	if (ctx.cr6.eq) goto loc_82C3F5DC;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82C3F5A8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c3f5d0
	if (!ctx.cr6.eq) goto loc_82C3F5D0;
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3f5cc
	if (ctx.cr6.eq) goto loc_82C3F5CC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82c3f5d0
	goto loc_82C3F5D0;
loc_82C3F5CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82C3F5D0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82c3f5a8
	if (!ctx.cr0.eq) goto loc_82C3F5A8;
loc_82C3F5DC:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82c3d4a0
	ctx.lr = 0x82C3F5E4;
	sub_82C3D4A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82c3d5b0
	ctx.lr = 0x82C3F5F0;
	sub_82C3D5B0(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3f66c
	if (!ctx.cr6.gt) goto loc_82C3F66C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C3F604:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3f658
	if (!ctx.cr6.eq) goto loc_82C3F658;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3f638
	if (ctx.cr6.eq) goto loc_82C3F638;
	// bl 0x82c3f330
	ctx.lr = 0x82C3F634;
	sub_82C3F330(ctx, base);
	// b 0x82c3f658
	goto loc_82C3F658;
loc_82C3F638:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f3,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82c3f408
	ctx.lr = 0x82C3F658;
	sub_82C3F408(ctx, base);
loc_82C3F658:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3f604
	if (ctx.cr6.lt) goto loc_82C3F604;
loc_82C3F66C:
	// rlwinm r11,r27,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 18) & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C3F688"))) PPC_WEAK_FUNC(sub_82C3F688);
PPC_FUNC_IMPL(__imp__sub_82C3F688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C3F690;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82c3bd40
	ctx.lr = 0x82C3F6A8;
	sub_82C3BD40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c3f714
	if (ctx.cr6.eq) goto loc_82C3F714;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,19936
	ctx.r4.s64 = ctx.r10.s64 + 19936;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3F6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c3f714
	if (ctx.cr6.eq) goto loc_82C3F714;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8221f388
	ctx.lr = 0x82C3F6E4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3f6fc
	if (ctx.cr6.eq) goto loc_82C3F6FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c3def0
	ctx.lr = 0x82C3F6F4;
	sub_82C3DEF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c3f700
	goto loc_82C3F700;
loc_82C3F6FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C3F700:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c3f720
	if (!ctx.cr6.eq) goto loc_82C3F720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82C3F710:
	// bl 0x82c32138
	ctx.lr = 0x82C3F714;
	sub_82C32138(ctx, base);
loc_82C3F714:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82C3F720:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3f540
	ctx.lr = 0x82C3F734;
	sub_82C3F540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3f710
	if (ctx.cr6.eq) goto loc_82C3F710;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c32138
	ctx.lr = 0x82C3F750;
	sub_82C32138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C3F75C"))) PPC_WEAK_FUNC(sub_82C3F75C);
PPC_FUNC_IMPL(__imp__sub_82C3F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F760"))) PPC_WEAK_FUNC(sub_82C3F760);
PPC_FUNC_IMPL(__imp__sub_82C3F760) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3f7c8
	if (ctx.cr6.lt) goto loc_82C3F7C8;
	// bne cr6,0x82c3f8ac
	if (!ctx.cr6.eq) goto loc_82C3F8AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3f820
	if (ctx.cr6.lt) goto loc_82C3F820;
	// bne cr6,0x82c3f8ac
	if (!ctx.cr6.eq) goto loc_82C3F8AC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3f8d0
	if (ctx.cr6.eq) goto loc_82C3F8D0;
	// b 0x82c3f7e8
	goto loc_82C3F7E8;
loc_82C3F7C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3f820
	if (ctx.cr6.lt) goto loc_82C3F820;
	// bne cr6,0x82c3f8ac
	if (!ctx.cr6.eq) goto loc_82C3F8AC;
loc_82C3F7E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	ctx.lr = 0x82C3F7F4;
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3c700
	ctx.lr = 0x82C3F800;
	sub_82C3C700(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C3F810;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	ctx.lr = 0x82C3F818;
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c3f8d4
	goto loc_82C3F8D4;
loc_82C3F820:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c31b48
	ctx.lr = 0x82C3F82C;
	sub_82C31B48(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3c700
	ctx.lr = 0x82C3F838;
	sub_82C3C700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3f8a4
	if (ctx.cr6.eq) goto loc_82C3F8A4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16696
	ctx.r9.s64 = ctx.r10.s64 + -16696;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c1b998
	ctx.lr = 0x82C3F86C;
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3f8b4
	if (ctx.cr6.eq) goto loc_82C3F8B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r10,-20180
	ctx.r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3F894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3F89C;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c2fdc0
	ctx.lr = 0x82C3F8A4;
	sub_82C2FDC0(ctx, base);
loc_82C3F8A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2aaf8
	ctx.lr = 0x82C3F8AC;
	sub_82C2AAF8(ctx, base);
loc_82C3F8AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3f8d4
	goto loc_82C3F8D4;
loc_82C3F8B4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C3F8C0;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c2fdc0
	ctx.lr = 0x82C3F8C8;
	sub_82C2FDC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2aaf8
	ctx.lr = 0x82C3F8D0;
	sub_82C2AAF8(ctx, base);
loc_82C3F8D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3F8D4:
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

__attribute__((alias("__imp__sub_82C3F8EC"))) PPC_WEAK_FUNC(sub_82C3F8EC);
PPC_FUNC_IMPL(__imp__sub_82C3F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F8F0"))) PPC_WEAK_FUNC(sub_82C3F8F0);
PPC_FUNC_IMPL(__imp__sub_82C3F8F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3f958
	if (ctx.cr6.lt) goto loc_82C3F958;
	// bne cr6,0x82c3fa3c
	if (!ctx.cr6.eq) goto loc_82C3FA3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3f9b0
	if (ctx.cr6.lt) goto loc_82C3F9B0;
	// bne cr6,0x82c3fa3c
	if (!ctx.cr6.eq) goto loc_82C3FA3C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3fa60
	if (ctx.cr6.eq) goto loc_82C3FA60;
	// b 0x82c3f978
	goto loc_82C3F978;
loc_82C3F958:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3f9b0
	if (ctx.cr6.lt) goto loc_82C3F9B0;
	// bne cr6,0x82c3fa3c
	if (!ctx.cr6.eq) goto loc_82C3FA3C;
loc_82C3F978:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	ctx.lr = 0x82C3F984;
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3ca40
	ctx.lr = 0x82C3F990;
	sub_82C3CA40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C3F9A0;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	ctx.lr = 0x82C3F9A8;
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c3fa64
	goto loc_82C3FA64;
loc_82C3F9B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	ctx.lr = 0x82C3F9BC;
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3ca40
	ctx.lr = 0x82C3F9C8;
	sub_82C3CA40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3fa34
	if (ctx.cr6.eq) goto loc_82C3FA34;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c1b998
	ctx.lr = 0x82C3F9FC;
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3fa44
	if (ctx.cr6.eq) goto loc_82C3FA44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r10,-20180
	ctx.r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3FA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FA2C;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C3FA34;
	sub_82C39298(ctx, base);
loc_82C3FA34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C3FA3C;
	sub_82C2D228(ctx, base);
loc_82C3FA3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3fa64
	goto loc_82C3FA64;
loc_82C3FA44:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C3FA50;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C3FA58;
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C3FA60;
	sub_82C2D228(ctx, base);
loc_82C3FA60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3FA64:
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

__attribute__((alias("__imp__sub_82C3FA7C"))) PPC_WEAK_FUNC(sub_82C3FA7C);
PPC_FUNC_IMPL(__imp__sub_82C3FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FA80"))) PPC_WEAK_FUNC(sub_82C3FA80);
PPC_FUNC_IMPL(__imp__sub_82C3FA80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x82c3f760
	sub_82C3F760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3FA90"))) PPC_WEAK_FUNC(sub_82C3FA90);
PPC_FUNC_IMPL(__imp__sub_82C3FA90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x82c3f8f0
	sub_82C3F8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3FAA0"))) PPC_WEAK_FUNC(sub_82C3FAA0);
PPC_FUNC_IMPL(__imp__sub_82C3FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3fae4
	if (ctx.cr6.eq) goto loc_82C3FAE4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-28512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82c3facc
	if (ctx.cr6.lt) goto loc_82C3FACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f0,f13,f1
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// b 0x82c3fae4
	goto loc_82C3FAE4;
loc_82C3FACC:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82c3fae4
	if (!ctx.cr6.lt) goto loc_82C3FAE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f1.f64));
loc_82C3FAE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3FB20"))) PPC_WEAK_FUNC(sub_82C3FB20);
PPC_FUNC_IMPL(__imp__sub_82C3FB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19948
	ctx.r3.s64 = ctx.r11.s64 + 19948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3FB2C"))) PPC_WEAK_FUNC(sub_82C3FB2C);
PPC_FUNC_IMPL(__imp__sub_82C3FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FB30"))) PPC_WEAK_FUNC(sub_82C3FB30);
PPC_FUNC_IMPL(__imp__sub_82C3FB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19944
	ctx.r3.s64 = ctx.r11.s64 + 19944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3FB3C"))) PPC_WEAK_FUNC(sub_82C3FB3C);
PPC_FUNC_IMPL(__imp__sub_82C3FB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FB40"))) PPC_WEAK_FUNC(sub_82C3FB40);
PPC_FUNC_IMPL(__imp__sub_82C3FB40) {
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
	// addi r10,r11,-15412
	ctx.r10.s64 = ctx.r11.s64 + -15412;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00140
	ctx.lr = 0x82C3FB6C;
	sub_82C00140(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3fb84
	if (ctx.cr6.eq) goto loc_82C3FB84;
	// bl 0x824fe010
	ctx.lr = 0x82C3FB80;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3FB84:
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

__attribute__((alias("__imp__sub_82C3FB9C"))) PPC_WEAK_FUNC(sub_82C3FB9C);
PPC_FUNC_IMPL(__imp__sub_82C3FB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FBA0"))) PPC_WEAK_FUNC(sub_82C3FBA0);
PPC_FUNC_IMPL(__imp__sub_82C3FBA0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-15372
	ctx.r8.s64 = ctx.r9.s64 + -15372;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x821882b0
	ctx.lr = 0x82C3FBF0;
	sub_821882B0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lfs f0,3056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-15376(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15376);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f11,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82c3faa0
	ctx.lr = 0x82C3FC24;
	sub_82C3FAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bffea8
	ctx.lr = 0x82C3FC2C;
	sub_82BFFEA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c0b768
	ctx.lr = 0x82C3FC38;
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3fc54
	if (ctx.cr6.eq) goto loc_82C3FC54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3FC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C3FC54:
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

__attribute__((alias("__imp__sub_82C3FC70"))) PPC_WEAK_FUNC(sub_82C3FC70);
PPC_FUNC_IMPL(__imp__sub_82C3FC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c3fc88
	if (!ctx.cr6.lt) goto loc_82C3FC88;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C3FC88:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c3fcd8
	if (ctx.cr6.lt) goto loc_82C3FCD8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3fcc8
	if (ctx.cr6.eq) goto loc_82C3FCC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
loc_82C3FCC8:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
loc_82C3FCD8:
	// fmuls f10,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f13,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f10,f5,f0,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f8,f12,f7,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f7,f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f6,f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fadds f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f1,f5,f3,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fadds f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3FD4C"))) PPC_WEAK_FUNC(sub_82C3FD4C);
PPC_FUNC_IMPL(__imp__sub_82C3FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FD50"))) PPC_WEAK_FUNC(sub_82C3FD50);
PPC_FUNC_IMPL(__imp__sub_82C3FD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3FD70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3FD88"))) PPC_WEAK_FUNC(sub_82C3FD88);
PPC_FUNC_IMPL(__imp__sub_82C3FD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C3FD90;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3FDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C3FDC0;
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-21232
	ctx.r4.s64 = ctx.r9.s64 + -21232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-21224
	ctx.r31.s64 = ctx.r8.s64 + -21224;
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FDDC;
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bff980
	ctx.lr = 0x82C3FDE4;
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FDEC;
	sub_82BFF7D8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r7,3200
	ctx.r28.s64 = ctx.r7.s64 + 3200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FE00;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C3FE0C;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C3FE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C3FE28;
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C3FE30;
	sub_82BFF710(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r5,-15256
	ctx.r4.s64 = ctx.r5.s64 + -15256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-15272
	ctx.r31.s64 = ctx.r11.s64 + -15272;
	// lfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FE4C;
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bff980
	ctx.lr = 0x82C3FE54;
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FE5C;
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FE68;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C3FE74;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3FE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C3FE90;
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C3FE98;
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-15296
	ctx.r4.s64 = ctx.r9.s64 + -15296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-15320
	ctx.r31.s64 = ctx.r8.s64 + -15320;
	// lfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FEB4;
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bff980
	ctx.lr = 0x82C3FEBC;
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FEC4;
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FED0;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C3FEDC;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C3FEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C3FEF8;
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C3FF00;
	sub_82BFF710(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r6,-15336
	ctx.r4.s64 = ctx.r6.s64 + -15336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r5,-15352
	ctx.r31.s64 = ctx.r5.s64 + -15352;
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FF1C;
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bff980
	ctx.lr = 0x82C3FF24;
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FF2C;
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	ctx.lr = 0x82C3FF38;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C3FF44;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3FF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C3FF60;
	sub_82BFF750(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C3FF6C"))) PPC_WEAK_FUNC(sub_82C3FF6C);
PPC_FUNC_IMPL(__imp__sub_82C3FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FF70"))) PPC_WEAK_FUNC(sub_82C3FF70);
PPC_FUNC_IMPL(__imp__sub_82C3FF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7504
	ctx.lr = 0x82C3FF84;
	sub_82CA7504(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f3
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f3.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82c3ffa8
	if (!ctx.cr6.lt) goto loc_82C3FFA8;
	// bl 0x82c3faa0
	ctx.lr = 0x82C3FFA4;
	sub_82C3FAA0(ctx, base);
	// b 0x82c401d8
	goto loc_82C401D8;
loc_82C3FFA8:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40010
	if (ctx.cr6.eq) goto loc_82C40010;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-28512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,3140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82c3ffd4
	if (ctx.cr6.lt) goto loc_82C3FFD4;
	// fnmsubs f1,f0,f11,f1
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f1.f64)));
	// b 0x82c3ffe4
	goto loc_82C3FFE4;
loc_82C3FFD4:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82c3ffe4
	if (!ctx.cr6.lt) goto loc_82C3FFE4;
	// fmadds f1,f0,f11,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f1.f64));
loc_82C3FFE4:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82c3fffc
	if (ctx.cr6.lt) goto loc_82C3FFFC;
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// b 0x82c4000c
	goto loc_82C4000C;
loc_82C3FFFC:
	// fneg f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82c40010
	if (!ctx.cr6.lt) goto loc_82C40010;
	// fnmsubs f0,f0,f11,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f13.f64)));
loc_82C4000C:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82C40010:
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f30,24(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,3232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f28,f30
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fmuls f27,f10,f0
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x8223bd98
	ctx.lr = 0x82C40060;
	sub_8223BD98(ctx, base);
	// fmuls f1,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f9,f28
	ctx.f9.f64 = ctx.f28.f64;
	// lfs f29,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f29.f64 = double(temp.f32);
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// lfs f0,-15356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x8219d738
	ctx.lr = 0x82C400BC;
	sub_8219D738(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8227c9f8
	ctx.lr = 0x82C400C4;
	sub_8227C9F8(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v61,r0,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// lvx128 v60,r0,r3
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r11,-28208
	ctx.r7.s64 = ctx.r11.s64 + -28208;
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// vmrghw128 v58,v61,v60
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// vmrglw128 v57,v63,v62
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// vmrglw128 v55,v61,v60
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v53,v59,v58
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// vmrglw128 v52,v59,v58
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v51,v57,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// fnmsubs f7,f8,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// lvx128 v49,r0,r6
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r11,r4,-28192
	ctx.r11.s64 = ctx.r4.s64 + -28192;
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lvlx128 v48,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v47,v49,v48,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r10,r3,-28176
	ctx.r10.s64 = ctx.r3.s64 + -28176;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// vperm128 v46,v47,v50,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglw128 v45,v57,v55
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r9,-28160
	ctx.r7.s64 = ctx.r9.s64 + -28160;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v44,v46,v56,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v43,v44,v54,v7
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum4fp128 v42,v43,v45
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v41,v43,v52
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v40,v43,v51
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v39,v43,v53
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrghw128 v38,v41,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v37,v39,v40
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v36,v37,v38
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// stvx128 v36,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f4,40(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_82C401D8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7550
	ctx.lr = 0x82C401E4;
	sub_82CA7550(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C401F4"))) PPC_WEAK_FUNC(sub_82C401F4);
PPC_FUNC_IMPL(__imp__sub_82C401F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C401F8"))) PPC_WEAK_FUNC(sub_82C401F8);
PPC_FUNC_IMPL(__imp__sub_82C401F8) {
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
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// addi r10,r11,-15372
	ctx.r10.s64 = ctx.r11.s64 + -15372;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4023c
	if (ctx.cr6.eq) goto loc_82C4023C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4023C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C4023C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82c00130
	ctx.lr = 0x82C40250;
	sub_82C00130(ctx, base);
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

__attribute__((alias("__imp__sub_82C40268"))) PPC_WEAK_FUNC(sub_82C40268);
PPC_FUNC_IMPL(__imp__sub_82C40268) {
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
	// bl 0x82c401f8
	ctx.lr = 0x82C40288;
	sub_82C401F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c402a0
	if (ctx.cr6.eq) goto loc_82C402A0;
	// bl 0x824fe010
	ctx.lr = 0x82C4029C;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C402A0:
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

__attribute__((alias("__imp__sub_82C402B8"))) PPC_WEAK_FUNC(sub_82C402B8);
PPC_FUNC_IMPL(__imp__sub_82C402B8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19944
	ctx.r4.s64 = ctx.r10.s64 + 19944;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C402E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c40308
	if (!ctx.cr6.eq) goto loc_82C40308;
loc_82C402F0:
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
loc_82C40308:
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40ec0
	ctx.lr = 0x82C4031C;
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c402f0
	if (ctx.cr6.eq) goto loc_82C402F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C40348"))) PPC_WEAK_FUNC(sub_82C40348);
PPC_FUNC_IMPL(__imp__sub_82C40348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19944
	ctx.r4.s64 = ctx.r10.s64 + 19944;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C40370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c40388
	if (!ctx.cr6.eq) goto loc_82C40388;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C40388:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4039C"))) PPC_WEAK_FUNC(sub_82C4039C);
PPC_FUNC_IMPL(__imp__sub_82C4039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C403A0"))) PPC_WEAK_FUNC(sub_82C403A0);
PPC_FUNC_IMPL(__imp__sub_82C403A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C403A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c402b8
	ctx.lr = 0x82C403B8;
	sub_82C402B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c40434
	if (!ctx.cr6.eq) goto loc_82C40434;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C403CC;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	ctx.r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	ctx.lr = 0x82C403E4;
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C403EC;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C403F4;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C40400;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-15240
	ctx.r4.s64 = ctx.r9.s64 + -15240;
	// li r5,213
	ctx.r5.s64 = 213;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C40420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C40428;
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C40434:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8221f388
	ctx.lr = 0x82C4043C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c40450
	if (ctx.cr6.eq) goto loc_82C40450;
	// bl 0x82c3fba0
	ctx.lr = 0x82C40448;
	sub_82C3FBA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c40454
	goto loc_82C40454;
loc_82C40450:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C40454:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4049c
	if (ctx.cr6.eq) goto loc_82C4049C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4049C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C4049C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C404A8"))) PPC_WEAK_FUNC(sub_82C404A8);
PPC_FUNC_IMPL(__imp__sub_82C404A8) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7508
	ctx.lr = 0x82C404C0;
	sub_82CA7508(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40604
	if (ctx.cr6.eq) goto loc_82C40604;
	// bl 0x821882b0
	ctx.lr = 0x82C404D8;
	sub_821882B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-30920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30920);
	ctx.f0.f64 = double(temp.f32);
	// frsp f31,f10
	ctx.f31.f64 = double(float(ctx.f10.f64));
	// lfs f29,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f30,3084(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
	// fadds f8,f31,f13
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x82c40568
	if (!ctx.cr6.gt) goto loc_82C40568;
	// stfs f30,20(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f28,f29,f0
	ctx.f28.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// bl 0x82ca3b80
	ctx.lr = 0x82C4053C;
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,3092(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3092);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f8,f9,f0,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f28.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_82C40568:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3ff70
	ctx.lr = 0x82C40580;
	sub_82C3FF70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82c3fc70
	ctx.lr = 0x82C4058C;
	sub_82C3FC70(ctx, base);
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c405d4
	if (ctx.cr6.eq) goto loc_82C405D4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,-28512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c405bc
	if (ctx.cr6.lt) goto loc_82C405BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// b 0x82c405d4
	goto loc_82C405D4;
loc_82C405BC:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82c405d4
	if (!ctx.cr6.lt) goto loc_82C405D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
loc_82C405D4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82c40624
	if (!ctx.cr6.gt) goto loc_82C40624;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// blt cr6,0x82c405ec
	if (ctx.cr6.lt) goto loc_82C405EC;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
loc_82C405EC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C40604:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7554
	ctx.lr = 0x82C40610;
	sub_82CA7554(ctx, base);
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
loc_82C40624:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82c405ec
	goto loc_82C405EC;
}

__attribute__((alias("__imp__sub_82C4062C"))) PPC_WEAK_FUNC(sub_82C4062C);
PPC_FUNC_IMPL(__imp__sub_82C4062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40630"))) PPC_WEAK_FUNC(sub_82C40630);
PPC_FUNC_IMPL(__imp__sub_82C40630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82c402b8
	ctx.lr = 0x82C40640;
	sub_82C402B8(ctx, base);
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

__attribute__((alias("__imp__sub_82C40654"))) PPC_WEAK_FUNC(sub_82C40654);
PPC_FUNC_IMPL(__imp__sub_82C40654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40658"))) PPC_WEAK_FUNC(sub_82C40658);
PPC_FUNC_IMPL(__imp__sub_82C40658) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r10,19944
	ctx.r4.s64 = ctx.r10.s64 + 19944;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C40688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
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

__attribute__((alias("__imp__sub_82C406AC"))) PPC_WEAK_FUNC(sub_82C406AC);
PPC_FUNC_IMPL(__imp__sub_82C406AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C406B0"))) PPC_WEAK_FUNC(sub_82C406B0);
PPC_FUNC_IMPL(__imp__sub_82C406B0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = ctx.r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C406E0;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c40750
	if (ctx.cr6.eq) goto loc_82C40750;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-15040
	ctx.r4.s64 = ctx.r11.s64 + -15040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15068
	ctx.lr = 0x82C40700;
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c40750
	if (ctx.cr6.eq) goto loc_82C40750;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-15060
	ctx.r4.s64 = ctx.r11.s64 + -15060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15068
	ctx.lr = 0x82C40720;
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c40750
	if (ctx.cr6.eq) goto loc_82C40750;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-15072
	ctx.r4.s64 = ctx.r11.s64 + -15072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15068
	ctx.lr = 0x82C40740;
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c40754
	if (!ctx.cr6.eq) goto loc_82C40754;
loc_82C40750:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C40754:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C40770"))) PPC_WEAK_FUNC(sub_82C40770);
PPC_FUNC_IMPL(__imp__sub_82C40770) {
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
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4079C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c407e4
	if (ctx.cr6.eq) goto loc_82C407E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c406b0
	ctx.lr = 0x82C407B4;
	sub_82C406B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c407e4
	if (ctx.cr6.eq) goto loc_82C407E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C407D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c407e8
	if (!ctx.cr6.eq) goto loc_82C407E8;
loc_82C407E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C407E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C40804"))) PPC_WEAK_FUNC(sub_82C40804);
PPC_FUNC_IMPL(__imp__sub_82C40804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40808"))) PPC_WEAK_FUNC(sub_82C40808);
PPC_FUNC_IMPL(__imp__sub_82C40808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x82C4081C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c40840
	if (ctx.cr6.eq) goto loc_82C40840;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-15412
	ctx.r10.s64 = ctx.r11.s64 + -15412;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C40840:
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

__attribute__((alias("__imp__sub_82C40854"))) PPC_WEAK_FUNC(sub_82C40854);
PPC_FUNC_IMPL(__imp__sub_82C40854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40858"))) PPC_WEAK_FUNC(sub_82C40858);
PPC_FUNC_IMPL(__imp__sub_82C40858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C40860;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4087C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c40990
	if (ctx.cr6.lt) goto loc_82C40990;
	// bne cr6,0x82c40af0
	if (!ctx.cr6.eq) goto loc_82C40AF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4089C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c40904
	if (ctx.cr6.lt) goto loc_82C40904;
	// bne cr6,0x82c40af0
	if (!ctx.cr6.eq) goto loc_82C40AF0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c40b60
	if (!ctx.cr6.gt) goto loc_82C40B60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C408C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c40770
	ctx.lr = 0x82C408D8;
	sub_82C40770(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c40af0
	if (ctx.cr6.eq) goto loc_82C40AF0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c408c4
	if (ctx.cr6.lt) goto loc_82C408C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C40904:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,6544
	ctx.r26.s64 = ctx.r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c02b98
	ctx.lr = 0x82C40928;
	sub_82C02B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C40938;
	sub_82C21C90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c40b60
	if (ctx.cr6.eq) goto loc_82C40B60;
loc_82C40944:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82C4094C;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40770
	ctx.lr = 0x82C40960;
	sub_82C40770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40af0
	if (ctx.cr6.eq) goto loc_82C40AF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C40978;
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82c40944
	if (ctx.cr6.lt) goto loc_82C40944;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C40990:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C409A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c40a4c
	if (ctx.cr6.lt) goto loc_82C40A4C;
	// bne cr6,0x82c40af0
	if (!ctx.cr6.eq) goto loc_82C40AF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C409C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C409E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c40af0
	if (ctx.cr6.eq) goto loc_82C40AF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40b60
	if (ctx.cr6.eq) goto loc_82C40B60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,6544
	ctx.r29.s64 = ctx.r11.s64 + 6544;
loc_82C40A0C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c40770
	ctx.lr = 0x82C40A20;
	sub_82C40770(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c40af0
	if (ctx.cr6.eq) goto loc_82C40AF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c40a0c
	if (ctx.cr6.lt) goto loc_82C40A0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C40A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C40A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c40af0
	if (ctx.cr6.eq) goto loc_82C40AF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C40A90;
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c40afc
	if (!ctx.cr6.gt) goto loc_82C40AFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C40AA4;
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	ctx.r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r27,r9,-20272
	ctx.r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C40AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C40AD8;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C40AE0;
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C40AE8;
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C40AF0;
	sub_82BFF848(ctx, base);
loc_82C40AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C40AFC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C40B04;
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40b60
	if (ctx.cr6.eq) goto loc_82C40B60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C40B1C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82C40B24;
	sub_8221F388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40770
	ctx.lr = 0x82C40B38;
	sub_82C40770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40af0
	if (ctx.cr6.eq) goto loc_82C40AF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C40B50;
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c40b1c
	if (ctx.cr6.lt) goto loc_82C40B1C;
loc_82C40B60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C40B6C"))) PPC_WEAK_FUNC(sub_82C40B6C);
PPC_FUNC_IMPL(__imp__sub_82C40B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40B70"))) PPC_WEAK_FUNC(sub_82C40B70);
PPC_FUNC_IMPL(__imp__sub_82C40B70) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82C40B84;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c40bb8
	if (ctx.cr6.eq) goto loc_82C40BB8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15084
	ctx.r9.s64 = ctx.r10.s64 + -15084;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C40BB8:
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

__attribute__((alias("__imp__sub_82C40BCC"))) PPC_WEAK_FUNC(sub_82C40BCC);
PPC_FUNC_IMPL(__imp__sub_82C40BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40BD0"))) PPC_WEAK_FUNC(sub_82C40BD0);
PPC_FUNC_IMPL(__imp__sub_82C40BD0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16096
	ctx.r9.s64 = ctx.r11.s64 + -16096;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C40C10;
	sub_82C16C78(ctx, base);
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

__attribute__((alias("__imp__sub_82C40C28"))) PPC_WEAK_FUNC(sub_82C40C28);
PPC_FUNC_IMPL(__imp__sub_82C40C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C40C30;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-15084
	ctx.r9.s64 = ctx.r11.s64 + -15084;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C40C70;
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	ctx.lr = 0x82C40C84;
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c40c9c
	if (ctx.cr6.eq) goto loc_82C40C9C;
	// bl 0x824fe010
	ctx.lr = 0x82C40C94;
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82C40C9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00008
	ctx.lr = 0x82C40CA4;
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C40CAC"))) PPC_WEAK_FUNC(sub_82C40CAC);
PPC_FUNC_IMPL(__imp__sub_82C40CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40CB0"))) PPC_WEAK_FUNC(sub_82C40CB0);
PPC_FUNC_IMPL(__imp__sub_82C40CB0) {
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
	// bl 0x82c40c28
	ctx.lr = 0x82C40CD0;
	sub_82C40C28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40ce8
	if (ctx.cr6.eq) goto loc_82C40CE8;
	// bl 0x824fe010
	ctx.lr = 0x82C40CE4;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C40CE8:
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

__attribute__((alias("__imp__sub_82C40D00"))) PPC_WEAK_FUNC(sub_82C40D00);
PPC_FUNC_IMPL(__imp__sub_82C40D00) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c40d68
	if (ctx.cr6.lt) goto loc_82C40D68;
	// bne cr6,0x82c40e4c
	if (!ctx.cr6.eq) goto loc_82C40E4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c40dc0
	if (ctx.cr6.lt) goto loc_82C40DC0;
	// bne cr6,0x82c40e4c
	if (!ctx.cr6.eq) goto loc_82C40E4C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40e70
	if (ctx.cr6.eq) goto loc_82C40E70;
	// b 0x82c40d88
	goto loc_82C40D88;
loc_82C40D68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c40dc0
	if (ctx.cr6.lt) goto loc_82C40DC0;
	// bne cr6,0x82c40e4c
	if (!ctx.cr6.eq) goto loc_82C40E4C;
loc_82C40D88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	ctx.lr = 0x82C40D94;
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40858
	ctx.lr = 0x82C40DA0;
	sub_82C40858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C40DB0;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	ctx.lr = 0x82C40DB8;
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c40e74
	goto loc_82C40E74;
loc_82C40DC0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	ctx.lr = 0x82C40DCC;
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40858
	ctx.lr = 0x82C40DD8;
	sub_82C40858(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c40e44
	if (ctx.cr6.eq) goto loc_82C40E44;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c1b998
	ctx.lr = 0x82C40E0C;
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c40e54
	if (ctx.cr6.eq) goto loc_82C40E54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r10,-20180
	ctx.r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C40E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C40E3C;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C40E44;
	sub_82C39298(ctx, base);
loc_82C40E44:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C40E4C;
	sub_82C2D228(ctx, base);
loc_82C40E4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c40e74
	goto loc_82C40E74;
loc_82C40E54:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C40E60;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C40E68;
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C40E70;
	sub_82C2D228(ctx, base);
loc_82C40E70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C40E74:
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

__attribute__((alias("__imp__sub_82C40E8C"))) PPC_WEAK_FUNC(sub_82C40E8C);
PPC_FUNC_IMPL(__imp__sub_82C40E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40E90"))) PPC_WEAK_FUNC(sub_82C40E90);
PPC_FUNC_IMPL(__imp__sub_82C40E90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x82c40d00
	sub_82C40D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40EA0"))) PPC_WEAK_FUNC(sub_82C40EA0);
PPC_FUNC_IMPL(__imp__sub_82C40EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19956
	ctx.r3.s64 = ctx.r11.s64 + 19956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C40EAC"))) PPC_WEAK_FUNC(sub_82C40EAC);
PPC_FUNC_IMPL(__imp__sub_82C40EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40EB0"))) PPC_WEAK_FUNC(sub_82C40EB0);
PPC_FUNC_IMPL(__imp__sub_82C40EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C40EBC"))) PPC_WEAK_FUNC(sub_82C40EBC);
PPC_FUNC_IMPL(__imp__sub_82C40EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40EC0"))) PPC_WEAK_FUNC(sub_82C40EC0);
PPC_FUNC_IMPL(__imp__sub_82C40EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c40edc
	if (!ctx.cr6.eq) goto loc_82C40EDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C40EDC:
	// addic. r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82c40f1c
	if (ctx.cr0.lt) goto loc_82C40F1C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82C40EEC:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82c40f4c
	if (ctx.cr6.gt) goto loc_82C40F4C;
	// bge cr6,0x82c40f54
	if (!ctx.cr6.lt) goto loc_82C40F54;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_82C40F14:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82c40eec
	if (!ctx.cr6.gt) goto loc_82C40EEC;
loc_82C40F1C:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82c40f48
	if (ctx.cr6.lt) goto loc_82C40F48;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82C40F48:
	// blr 
	return;
loc_82C40F4C:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// b 0x82c40f14
	goto loc_82C40F14;
loc_82C40F54:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C40F64"))) PPC_WEAK_FUNC(sub_82C40F64);
PPC_FUNC_IMPL(__imp__sub_82C40F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40F68"))) PPC_WEAK_FUNC(sub_82C40F68);
PPC_FUNC_IMPL(__imp__sub_82C40F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C40F70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bff710
	ctx.lr = 0x82C40F84;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-14908
	ctx.r4.s64 = ctx.r11.s64 + -14908;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,-14928
	ctx.r29.s64 = ctx.r10.s64 + -14928;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bff7d8
	ctx.lr = 0x82C40FA0;
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C40FA8;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C40FB0;
	sub_82BFF7D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,3200
	ctx.r4.s64 = ctx.r9.s64 + 3200;
	// bl 0x82bff7d8
	ctx.lr = 0x82C40FC0;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C40FCC;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C40FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C40FE8;
	sub_82BFF750(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C40FF0"))) PPC_WEAK_FUNC(sub_82C40FF0);
PPC_FUNC_IMPL(__imp__sub_82C40FF0) {
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
	// addi r10,r11,-14944
	ctx.r10.s64 = ctx.r11.s64 + -14944;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00130
	ctx.lr = 0x82C4101C;
	sub_82C00130(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c41034
	if (ctx.cr6.eq) goto loc_82C41034;
	// bl 0x824fe010
	ctx.lr = 0x82C41030;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C41034:
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

__attribute__((alias("__imp__sub_82C4104C"))) PPC_WEAK_FUNC(sub_82C4104C);
PPC_FUNC_IMPL(__imp__sub_82C4104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41050"))) PPC_WEAK_FUNC(sub_82C41050);
PPC_FUNC_IMPL(__imp__sub_82C41050) {
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
	// addi r10,r11,-14980
	ctx.r10.s64 = ctx.r11.s64 + -14980;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00140
	ctx.lr = 0x82C4107C;
	sub_82C00140(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c41094
	if (ctx.cr6.eq) goto loc_82C41094;
	// bl 0x824fe010
	ctx.lr = 0x82C41090;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C41094:
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

__attribute__((alias("__imp__sub_82C410AC"))) PPC_WEAK_FUNC(sub_82C410AC);
PPC_FUNC_IMPL(__imp__sub_82C410AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C410B0"))) PPC_WEAK_FUNC(sub_82C410B0);
PPC_FUNC_IMPL(__imp__sub_82C410B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C410B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c41134
	if (!ctx.cr6.eq) goto loc_82C41134;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C410E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c41134
	if (ctx.cr6.eq) goto loc_82C41134;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C41124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ade08
	ctx.lr = 0x82C4112C;
	sub_822ADE08(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r8.u8);
loc_82C41134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C4113C"))) PPC_WEAK_FUNC(sub_82C4113C);
PPC_FUNC_IMPL(__imp__sub_82C4113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41140"))) PPC_WEAK_FUNC(sub_82C41140);
PPC_FUNC_IMPL(__imp__sub_82C41140) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19952
	ctx.r4.s64 = ctx.r10.s64 + 19952;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C41170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41190
	if (!ctx.cr6.eq) goto loc_82C41190;
loc_82C41178:
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
loc_82C41190:
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40ec0
	ctx.lr = 0x82C411A4;
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41178
	if (ctx.cr6.eq) goto loc_82C41178;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C411D0"))) PPC_WEAK_FUNC(sub_82C411D0);
PPC_FUNC_IMPL(__imp__sub_82C411D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C411D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c41140
	ctx.lr = 0x82C411E8;
	sub_82C41140(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c41264
	if (!ctx.cr6.eq) goto loc_82C41264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C411FC;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	ctx.r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41214;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C4121C;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41224;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C41230;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14888
	ctx.r4.s64 = ctx.r9.s64 + -14888;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C41250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C41258;
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C41264:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C4127C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C41284"))) PPC_WEAK_FUNC(sub_82C41284);
PPC_FUNC_IMPL(__imp__sub_82C41284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41288"))) PPC_WEAK_FUNC(sub_82C41288);
PPC_FUNC_IMPL(__imp__sub_82C41288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19952
	ctx.r4.s64 = ctx.r10.s64 + 19952;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C412B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c412c8
	if (!ctx.cr6.eq) goto loc_82C412C8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C412C8:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C412DC"))) PPC_WEAK_FUNC(sub_82C412DC);
PPC_FUNC_IMPL(__imp__sub_82C412DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C412E0"))) PPC_WEAK_FUNC(sub_82C412E0);
PPC_FUNC_IMPL(__imp__sub_82C412E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C412E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c41140
	ctx.lr = 0x82C412F8;
	sub_82C41140(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c41374
	if (!ctx.cr6.eq) goto loc_82C41374;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C4130C;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	ctx.r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41324;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C4132C;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41334;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C41340;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14888
	ctx.r4.s64 = ctx.r9.s64 + -14888;
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C41360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C41368;
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C41374:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x82C4137C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c413ac
	if (ctx.cr6.eq) goto loc_82C413AC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-14944
	ctx.r9.s64 = ctx.r10.s64 + -14944;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C413AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C413C0"))) PPC_WEAK_FUNC(sub_82C413C0);
PPC_FUNC_IMPL(__imp__sub_82C413C0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r10,19952
	ctx.r4.s64 = ctx.r10.s64 + 19952;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C413F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
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

__attribute__((alias("__imp__sub_82C41414"))) PPC_WEAK_FUNC(sub_82C41414);
PPC_FUNC_IMPL(__imp__sub_82C41414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41418"))) PPC_WEAK_FUNC(sub_82C41418);
PPC_FUNC_IMPL(__imp__sub_82C41418) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = ctx.r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C41448;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41478
	if (ctx.cr6.eq) goto loc_82C41478;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-14760
	ctx.r4.s64 = ctx.r11.s64 + -14760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C41468;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c4147c
	if (!ctx.cr6.eq) goto loc_82C4147C;
loc_82C41478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C4147C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C41498"))) PPC_WEAK_FUNC(sub_82C41498);
PPC_FUNC_IMPL(__imp__sub_82C41498) {
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
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C414C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c4150c
	if (ctx.cr6.eq) goto loc_82C4150C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c41418
	ctx.lr = 0x82C414DC;
	sub_82C41418(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c4150c
	if (ctx.cr6.eq) goto loc_82C4150C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C414FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c41510
	if (!ctx.cr6.eq) goto loc_82C41510;
loc_82C4150C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C41510:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C4152C"))) PPC_WEAK_FUNC(sub_82C4152C);
PPC_FUNC_IMPL(__imp__sub_82C4152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41530"))) PPC_WEAK_FUNC(sub_82C41530);
PPC_FUNC_IMPL(__imp__sub_82C41530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x82C41544;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41568
	if (ctx.cr6.eq) goto loc_82C41568;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14980
	ctx.r10.s64 = ctx.r11.s64 + -14980;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C41568:
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

__attribute__((alias("__imp__sub_82C4157C"))) PPC_WEAK_FUNC(sub_82C4157C);
PPC_FUNC_IMPL(__imp__sub_82C4157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41580"))) PPC_WEAK_FUNC(sub_82C41580);
PPC_FUNC_IMPL(__imp__sub_82C41580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C41588;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C415A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c416b8
	if (ctx.cr6.lt) goto loc_82C416B8;
	// bne cr6,0x82c41818
	if (!ctx.cr6.eq) goto loc_82C41818;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C415C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c4162c
	if (ctx.cr6.lt) goto loc_82C4162C;
	// bne cr6,0x82c41818
	if (!ctx.cr6.eq) goto loc_82C41818;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c41888
	if (!ctx.cr6.gt) goto loc_82C41888;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C415EC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c41498
	ctx.lr = 0x82C41600;
	sub_82C41498(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41818
	if (ctx.cr6.eq) goto loc_82C41818;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c415ec
	if (ctx.cr6.lt) goto loc_82C415EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C4162C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,6544
	ctx.r26.s64 = ctx.r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c02b98
	ctx.lr = 0x82C41650;
	sub_82C02B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C41660;
	sub_82C21C90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c41888
	if (ctx.cr6.eq) goto loc_82C41888;
loc_82C4166C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	ctx.lr = 0x82C41674;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41498
	ctx.lr = 0x82C41688;
	sub_82C41498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41818
	if (ctx.cr6.eq) goto loc_82C41818;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C416A0;
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82c4166c
	if (ctx.cr6.lt) goto loc_82C4166C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C416B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C416CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c41774
	if (ctx.cr6.lt) goto loc_82C41774;
	// bne cr6,0x82c41818
	if (!ctx.cr6.eq) goto loc_82C41818;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C416EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C4170C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c41818
	if (ctx.cr6.eq) goto loc_82C41818;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41888
	if (ctx.cr6.eq) goto loc_82C41888;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,6544
	ctx.r29.s64 = ctx.r11.s64 + 6544;
loc_82C41734:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c41498
	ctx.lr = 0x82C41748;
	sub_82C41498(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41818
	if (ctx.cr6.eq) goto loc_82C41818;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c41734
	if (ctx.cr6.lt) goto loc_82C41734;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C41774:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C417A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c41818
	if (ctx.cr6.eq) goto loc_82C41818;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C417B8;
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c41824
	if (!ctx.cr6.gt) goto loc_82C41824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C417CC;
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	ctx.r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r27,r9,-20272
	ctx.r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C417F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41800;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C41808;
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41810;
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C41818;
	sub_82BFF848(ctx, base);
loc_82C41818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C41824:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C4182C;
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41888
	if (ctx.cr6.eq) goto loc_82C41888;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C41844:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	ctx.lr = 0x82C4184C;
	sub_8221F388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41498
	ctx.lr = 0x82C41860;
	sub_82C41498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41818
	if (ctx.cr6.eq) goto loc_82C41818;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C41878;
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c41844
	if (ctx.cr6.lt) goto loc_82C41844;
loc_82C41888:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C41894"))) PPC_WEAK_FUNC(sub_82C41894);
PPC_FUNC_IMPL(__imp__sub_82C41894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41898"))) PPC_WEAK_FUNC(sub_82C41898);
PPC_FUNC_IMPL(__imp__sub_82C41898) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82C418AC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c418e0
	if (ctx.cr6.eq) goto loc_82C418E0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-14772
	ctx.r9.s64 = ctx.r10.s64 + -14772;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C418E0:
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

__attribute__((alias("__imp__sub_82C418F4"))) PPC_WEAK_FUNC(sub_82C418F4);
PPC_FUNC_IMPL(__imp__sub_82C418F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C418F8"))) PPC_WEAK_FUNC(sub_82C418F8);
PPC_FUNC_IMPL(__imp__sub_82C418F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C41900;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-14772
	ctx.r9.s64 = ctx.r11.s64 + -14772;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C41940;
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	ctx.lr = 0x82C41954;
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4196c
	if (ctx.cr6.eq) goto loc_82C4196C;
	// bl 0x824fe010
	ctx.lr = 0x82C41964;
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82C4196C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00008
	ctx.lr = 0x82C41974;
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C4197C"))) PPC_WEAK_FUNC(sub_82C4197C);
PPC_FUNC_IMPL(__imp__sub_82C4197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41980"))) PPC_WEAK_FUNC(sub_82C41980);
PPC_FUNC_IMPL(__imp__sub_82C41980) {
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
	// bl 0x82c418f8
	ctx.lr = 0x82C419A0;
	sub_82C418F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c419b8
	if (ctx.cr6.eq) goto loc_82C419B8;
	// bl 0x824fe010
	ctx.lr = 0x82C419B4;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C419B8:
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

__attribute__((alias("__imp__sub_82C419D0"))) PPC_WEAK_FUNC(sub_82C419D0);
PPC_FUNC_IMPL(__imp__sub_82C419D0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C419FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c41a38
	if (ctx.cr6.lt) goto loc_82C41A38;
	// bne cr6,0x82c41b1c
	if (!ctx.cr6.eq) goto loc_82C41B1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c41a90
	if (ctx.cr6.lt) goto loc_82C41A90;
	// bne cr6,0x82c41b1c
	if (!ctx.cr6.eq) goto loc_82C41B1C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41b40
	if (ctx.cr6.eq) goto loc_82C41B40;
	// b 0x82c41a58
	goto loc_82C41A58;
loc_82C41A38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c41a90
	if (ctx.cr6.lt) goto loc_82C41A90;
	// bne cr6,0x82c41b1c
	if (!ctx.cr6.eq) goto loc_82C41B1C;
loc_82C41A58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	ctx.lr = 0x82C41A64;
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41580
	ctx.lr = 0x82C41A70;
	sub_82C41580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C41A80;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	ctx.lr = 0x82C41A88;
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c41b44
	goto loc_82C41B44;
loc_82C41A90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	ctx.lr = 0x82C41A9C;
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41580
	ctx.lr = 0x82C41AA8;
	sub_82C41580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41b14
	if (ctx.cr6.eq) goto loc_82C41B14;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c1b998
	ctx.lr = 0x82C41ADC;
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c41b24
	if (ctx.cr6.eq) goto loc_82C41B24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r10,-20180
	ctx.r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C41B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41B0C;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C41B14;
	sub_82C39298(ctx, base);
loc_82C41B14:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C41B1C;
	sub_82C2D228(ctx, base);
loc_82C41B1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c41b44
	goto loc_82C41B44;
loc_82C41B24:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C41B30;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C41B38;
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C41B40;
	sub_82C2D228(ctx, base);
loc_82C41B40:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C41B44:
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

__attribute__((alias("__imp__sub_82C41B5C"))) PPC_WEAK_FUNC(sub_82C41B5C);
PPC_FUNC_IMPL(__imp__sub_82C41B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41B60"))) PPC_WEAK_FUNC(sub_82C41B60);
PPC_FUNC_IMPL(__imp__sub_82C41B60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x82c419d0
	sub_82C419D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C41B70"))) PPC_WEAK_FUNC(sub_82C41B70);
PPC_FUNC_IMPL(__imp__sub_82C41B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19964
	ctx.r3.s64 = ctx.r11.s64 + 19964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C41B7C"))) PPC_WEAK_FUNC(sub_82C41B7C);
PPC_FUNC_IMPL(__imp__sub_82C41B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41B80"))) PPC_WEAK_FUNC(sub_82C41B80);
PPC_FUNC_IMPL(__imp__sub_82C41B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C41B8C"))) PPC_WEAK_FUNC(sub_82C41B8C);
PPC_FUNC_IMPL(__imp__sub_82C41B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41B90"))) PPC_WEAK_FUNC(sub_82C41B90);
PPC_FUNC_IMPL(__imp__sub_82C41B90) {
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
	// addi r10,r11,-14724
	ctx.r10.s64 = ctx.r11.s64 + -14724;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c00140
	ctx.lr = 0x82C41BBC;
	sub_82C00140(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c41bd4
	if (ctx.cr6.eq) goto loc_82C41BD4;
	// bl 0x824fe010
	ctx.lr = 0x82C41BD0;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C41BD4:
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

__attribute__((alias("__imp__sub_82C41BEC"))) PPC_WEAK_FUNC(sub_82C41BEC);
PPC_FUNC_IMPL(__imp__sub_82C41BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41BF0"))) PPC_WEAK_FUNC(sub_82C41BF0);
PPC_FUNC_IMPL(__imp__sub_82C41BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C41BF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-14668
	ctx.r10.s64 = ctx.r11.s64 + -14668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x82bffea8
	ctx.lr = 0x82C41C2C;
	sub_82BFFEA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c0b768
	ctx.lr = 0x82C41C38;
	sub_82C0B768(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41c54
	if (ctx.cr6.eq) goto loc_82C41C54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C41C54:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82bff710
	ctx.lr = 0x82C41C64;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-14688
	ctx.r4.s64 = ctx.r11.s64 + -14688;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41C74;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bffa40
	ctx.lr = 0x82C41C84;
	sub_82BFFA40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff750
	ctx.lr = 0x82C41CA0;
	sub_82BFF750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C41CAC"))) PPC_WEAK_FUNC(sub_82C41CAC);
PPC_FUNC_IMPL(__imp__sub_82C41CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41CB0"))) PPC_WEAK_FUNC(sub_82C41CB0);
PPC_FUNC_IMPL(__imp__sub_82C41CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82C41CB8;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C41CE8;
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-14588
	ctx.r4.s64 = ctx.r9.s64 + -14588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-14600
	ctx.r31.s64 = ctx.r8.s64 + -14600;
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82bff7d8
	ctx.lr = 0x82C41D04;
	sub_82BFF7D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bff980
	ctx.lr = 0x82C41D0C;
	sub_82BFF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41D14;
	sub_82BFF7D8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r7,3200
	ctx.r28.s64 = ctx.r7.s64 + 3200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41D28;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C41D34;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C41D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C41D50;
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C41D58;
	sub_82BFF710(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r5,-14612
	ctx.r4.s64 = ctx.r5.s64 + -14612;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-14628
	ctx.r31.s64 = ctx.r11.s64 + -14628;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82bff7d8
	ctx.lr = 0x82C41D74;
	sub_82BFF7D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C41D7C;
	sub_82BFF848(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41D84;
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41D90;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C41D9C;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C41DB8;
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C41DC0;
	sub_82BFF710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r9,-14640
	ctx.r4.s64 = ctx.r9.s64 + -14640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r8,-14652
	ctx.r31.s64 = ctx.r8.s64 + -14652;
	// lbz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82bff7d8
	ctx.lr = 0x82C41DDC;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff9d0
	ctx.lr = 0x82C41DE4;
	sub_82BFF9D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41DEC;
	sub_82BFF7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff7d8
	ctx.lr = 0x82C41DF8;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C41E04;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C41E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C41E20;
	sub_82BFF750(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82C41E2C"))) PPC_WEAK_FUNC(sub_82C41E2C);
PPC_FUNC_IMPL(__imp__sub_82C41E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41E30"))) PPC_WEAK_FUNC(sub_82C41E30);
PPC_FUNC_IMPL(__imp__sub_82C41E30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41ed8
	if (ctx.cr6.eq) goto loc_82C41ED8;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41e94
	if (ctx.cr6.eq) goto loc_82C41E94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C41E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c41ed8
	if (!ctx.cr6.eq) goto loc_82C41ED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ade08
	ctx.lr = 0x82C41E90;
	sub_822ADE08(ctx, base);
	// b 0x82c41ed8
	goto loc_82C41ED8;
loc_82C41E94:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41ed8
	if (!ctx.cr6.eq) goto loc_82C41ED8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C41ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C41ED8:
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

__attribute__((alias("__imp__sub_82C41EF0"))) PPC_WEAK_FUNC(sub_82C41EF0);
PPC_FUNC_IMPL(__imp__sub_82C41EF0) {
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
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-14668
	ctx.r10.s64 = ctx.r11.s64 + -14668;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41f34
	if (ctx.cr6.eq) goto loc_82C41F34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C41F34:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82c00130
	ctx.lr = 0x82C41F48;
	sub_82C00130(ctx, base);
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

__attribute__((alias("__imp__sub_82C41F60"))) PPC_WEAK_FUNC(sub_82C41F60);
PPC_FUNC_IMPL(__imp__sub_82C41F60) {
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
	// bl 0x82c41ef0
	ctx.lr = 0x82C41F80;
	sub_82C41EF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41f98
	if (ctx.cr6.eq) goto loc_82C41F98;
	// bl 0x824fe010
	ctx.lr = 0x82C41F94;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C41F98:
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

__attribute__((alias("__imp__sub_82C41FB0"))) PPC_WEAK_FUNC(sub_82C41FB0);
PPC_FUNC_IMPL(__imp__sub_82C41FB0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19960
	ctx.r4.s64 = ctx.r10.s64 + 19960;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C41FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c42000
	if (!ctx.cr6.eq) goto loc_82C42000;
loc_82C41FE8:
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
loc_82C42000:
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40ec0
	ctx.lr = 0x82C42014;
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41fe8
	if (ctx.cr6.eq) goto loc_82C41FE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C42040"))) PPC_WEAK_FUNC(sub_82C42040);
PPC_FUNC_IMPL(__imp__sub_82C42040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C42048;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c41fb0
	ctx.lr = 0x82C42058;
	sub_82C41FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c420d4
	if (!ctx.cr6.eq) goto loc_82C420D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C4206C;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	ctx.r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42084;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C4208C;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42094;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C420A0;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14576
	ctx.r4.s64 = ctx.r9.s64 + -14576;
	// li r5,159
	ctx.r5.s64 = 159;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C420C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C420C8;
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C420D4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C420EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C420F4"))) PPC_WEAK_FUNC(sub_82C420F4);
PPC_FUNC_IMPL(__imp__sub_82C420F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C420F8"))) PPC_WEAK_FUNC(sub_82C420F8);
PPC_FUNC_IMPL(__imp__sub_82C420F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19960
	ctx.r4.s64 = ctx.r10.s64 + 19960;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C42120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c42138
	if (!ctx.cr6.eq) goto loc_82C42138;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C42138:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4214C"))) PPC_WEAK_FUNC(sub_82C4214C);
PPC_FUNC_IMPL(__imp__sub_82C4214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42150"))) PPC_WEAK_FUNC(sub_82C42150);
PPC_FUNC_IMPL(__imp__sub_82C42150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C42158;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c41fb0
	ctx.lr = 0x82C42168;
	sub_82C41FB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c421e4
	if (!ctx.cr6.eq) goto loc_82C421E4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff710
	ctx.lr = 0x82C4217C;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r10,31240
	ctx.r30.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42194;
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C4219C;
	sub_82BFF848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C421A4;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C421B0;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14576
	ctx.r4.s64 = ctx.r9.s64 + -14576;
	// li r5,183
	ctx.r5.s64 = 183;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C421D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff750
	ctx.lr = 0x82C421D8;
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C421E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c42288
	if (!ctx.cr6.eq) goto loc_82C42288;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff710
	ctx.lr = 0x82C42214;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-14452
	ctx.r4.s64 = ctx.r11.s64 + -14452;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r10,31240
	ctx.r29.s64 = ctx.r10.s64 + 31240;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82bff7d8
	ctx.lr = 0x82C42230;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C42238;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42240;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C4224C;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14576
	ctx.r4.s64 = ctx.r9.s64 + -14576;
	// li r5,190
	ctx.r5.s64 = 190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C4226C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bff750
	ctx.lr = 0x82C42274;
	sub_82BFF750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ade08
	ctx.lr = 0x82C4227C;
	sub_822ADE08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C42288:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x82C42290;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c422a4
	if (ctx.cr6.eq) goto loc_82C422A4;
	// bl 0x82c41bf0
	ctx.lr = 0x82C4229C;
	sub_82C41BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c422a8
	goto loc_82C422A8;
loc_82C422A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C422A8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bffb40
	ctx.lr = 0x82C422B4;
	sub_82BFFB40(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C422D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x822ade08
	ctx.lr = 0x82C422E0;
	sub_822ADE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C422EC"))) PPC_WEAK_FUNC(sub_82C422EC);
PPC_FUNC_IMPL(__imp__sub_82C422EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C422F0"))) PPC_WEAK_FUNC(sub_82C422F0);
PPC_FUNC_IMPL(__imp__sub_82C422F0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r10,19960
	ctx.r4.s64 = ctx.r10.s64 + 19960;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C42320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
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

__attribute__((alias("__imp__sub_82C42344"))) PPC_WEAK_FUNC(sub_82C42344);
PPC_FUNC_IMPL(__imp__sub_82C42344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42348"))) PPC_WEAK_FUNC(sub_82C42348);
PPC_FUNC_IMPL(__imp__sub_82C42348) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = ctx.r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C42378;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42408
	if (ctx.cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-20580
	ctx.r4.s64 = ctx.r11.s64 + -20580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C42398;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42408
	if (ctx.cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-20592
	ctx.r4.s64 = ctx.r11.s64 + -20592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C423B8;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42408
	if (ctx.cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,-14416
	ctx.r4.s64 = ctx.r11.s64 + -14416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15068
	ctx.lr = 0x82C423D8;
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42408
	if (ctx.cr6.eq) goto loc_82C42408;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-14760
	ctx.r4.s64 = ctx.r11.s64 + -14760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C423F8;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c4240c
	if (!ctx.cr6.eq) goto loc_82C4240C;
loc_82C42408:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C4240C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C42428"))) PPC_WEAK_FUNC(sub_82C42428);
PPC_FUNC_IMPL(__imp__sub_82C42428) {
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
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c4249c
	if (ctx.cr6.eq) goto loc_82C4249C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c42348
	ctx.lr = 0x82C4246C;
	sub_82C42348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c4249c
	if (ctx.cr6.eq) goto loc_82C4249C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4248C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c424a0
	if (!ctx.cr6.eq) goto loc_82C424A0;
loc_82C4249C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C424A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C424BC"))) PPC_WEAK_FUNC(sub_82C424BC);
PPC_FUNC_IMPL(__imp__sub_82C424BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C424C0"))) PPC_WEAK_FUNC(sub_82C424C0);
PPC_FUNC_IMPL(__imp__sub_82C424C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x82C424D4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c424f8
	if (ctx.cr6.eq) goto loc_82C424F8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14724
	ctx.r10.s64 = ctx.r11.s64 + -14724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C424F8:
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

__attribute__((alias("__imp__sub_82C4250C"))) PPC_WEAK_FUNC(sub_82C4250C);
PPC_FUNC_IMPL(__imp__sub_82C4250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42510"))) PPC_WEAK_FUNC(sub_82C42510);
PPC_FUNC_IMPL(__imp__sub_82C42510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C42518;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c42648
	if (ctx.cr6.lt) goto loc_82C42648;
	// bne cr6,0x82c427a8
	if (!ctx.cr6.eq) goto loc_82C427A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c425bc
	if (ctx.cr6.lt) goto loc_82C425BC;
	// bne cr6,0x82c427a8
	if (!ctx.cr6.eq) goto loc_82C427A8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c42818
	if (!ctx.cr6.gt) goto loc_82C42818;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C4257C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c42428
	ctx.lr = 0x82C42590;
	sub_82C42428(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c427a8
	if (ctx.cr6.eq) goto loc_82C427A8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c4257c
	if (ctx.cr6.lt) goto loc_82C4257C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C425BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C425D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,6544
	ctx.r26.s64 = ctx.r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c02b98
	ctx.lr = 0x82C425E0;
	sub_82C02B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C425F0;
	sub_82C21C90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c42818
	if (ctx.cr6.eq) goto loc_82C42818;
loc_82C425FC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x82C42604;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42428
	ctx.lr = 0x82C42618;
	sub_82C42428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c427a8
	if (ctx.cr6.eq) goto loc_82C427A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C42630;
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82c425fc
	if (ctx.cr6.lt) goto loc_82C425FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C42648:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4265C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c42704
	if (ctx.cr6.lt) goto loc_82C42704;
	// bne cr6,0x82c427a8
	if (!ctx.cr6.eq) goto loc_82C427A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4267C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C4269C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c427a8
	if (ctx.cr6.eq) goto loc_82C427A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42818
	if (ctx.cr6.eq) goto loc_82C42818;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,6544
	ctx.r29.s64 = ctx.r11.s64 + 6544;
loc_82C426C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c42428
	ctx.lr = 0x82C426D8;
	sub_82C42428(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c427a8
	if (ctx.cr6.eq) goto loc_82C427A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c426c4
	if (ctx.cr6.lt) goto loc_82C426C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C42704:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C42734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c427a8
	if (ctx.cr6.eq) goto loc_82C427A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C42748;
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c427b4
	if (!ctx.cr6.gt) goto loc_82C427B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C4275C;
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	ctx.r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r27,r9,-20272
	ctx.r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C42788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42790;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C42798;
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C427A0;
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C427A8;
	sub_82BFF848(ctx, base);
loc_82C427A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C427B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C427BC;
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42818
	if (ctx.cr6.eq) goto loc_82C42818;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C427D4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x82C427DC;
	sub_8221F388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42428
	ctx.lr = 0x82C427F0;
	sub_82C42428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c427a8
	if (ctx.cr6.eq) goto loc_82C427A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C42808;
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c427d4
	if (ctx.cr6.lt) goto loc_82C427D4;
loc_82C42818:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C42824"))) PPC_WEAK_FUNC(sub_82C42824);
PPC_FUNC_IMPL(__imp__sub_82C42824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42828"))) PPC_WEAK_FUNC(sub_82C42828);
PPC_FUNC_IMPL(__imp__sub_82C42828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82C42830;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c3c298
	ctx.lr = 0x82C42868;
	sub_82C3C298(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82c428b0
	if (!ctx.cr6.lt) goto loc_82C428B0;
loc_82C42878:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c428b0
	if (ctx.cr6.lt) goto loc_82C428B0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c428b0
	if (ctx.cr6.lt) goto loc_82C428B0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c42878
	if (ctx.cr6.lt) goto loc_82C42878;
loc_82C428B0:
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c428ec
	if (!ctx.cr6.lt) goto loc_82C428EC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82C428BC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c428ec
	if (ctx.cr6.lt) goto loc_82C428EC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c428ec
	if (ctx.cr6.lt) goto loc_82C428EC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c428bc
	if (ctx.cr6.lt) goto loc_82C428BC;
loc_82C428EC:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82C428F4:
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82c42944
	if (!ctx.cr6.lt) goto loc_82C42944;
loc_82C428FC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c42938
	if (ctx.cr6.lt) goto loc_82C42938;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82c42944
	if (ctx.cr6.lt) goto loc_82C42944;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82C42938:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c428fc
	if (ctx.cr6.lt) goto loc_82C428FC;
loc_82C42944:
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82c4299c
	if (!ctx.cr6.gt) goto loc_82C4299C;
loc_82C4294C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lwz r9,-4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82c4298c
	if (ctx.cr6.lt) goto loc_82C4298C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c42998
	if (ctx.cr6.lt) goto loc_82C42998;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82C4298C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c4294c
	if (ctx.cr6.lt) goto loc_82C4294C;
loc_82C42998:
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
loc_82C4299C:
	// bne cr6,0x82c429e8
	if (!ctx.cr6.eq) goto loc_82C429E8;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c42a40
	if (ctx.cr6.eq) goto loc_82C42A40;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82c429c0
	if (ctx.cr6.eq) goto loc_82C429C0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82C429C0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x82c428f4
	goto loc_82C428F4;
loc_82C429E8:
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bne cr6,0x82c42a28
	if (!ctx.cr6.eq) goto loc_82C42A28;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82c42a10
	if (ctx.cr6.eq) goto loc_82C42A10;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82C42A10:
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x82c428f4
	goto loc_82C428F4;
loc_82C42A28:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x82c428f4
	goto loc_82C428F4;
loc_82C42A40:
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82C42A54"))) PPC_WEAK_FUNC(sub_82C42A54);
PPC_FUNC_IMPL(__imp__sub_82C42A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42A58"))) PPC_WEAK_FUNC(sub_82C42A58);
PPC_FUNC_IMPL(__imp__sub_82C42A58) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82C42A6C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42aa0
	if (ctx.cr6.eq) goto loc_82C42AA0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-14428
	ctx.r9.s64 = ctx.r10.s64 + -14428;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C42AA0:
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

__attribute__((alias("__imp__sub_82C42AB4"))) PPC_WEAK_FUNC(sub_82C42AB4);
PPC_FUNC_IMPL(__imp__sub_82C42AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42AB8"))) PPC_WEAK_FUNC(sub_82C42AB8);
PPC_FUNC_IMPL(__imp__sub_82C42AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C42AC0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-14428
	ctx.r9.s64 = ctx.r11.s64 + -14428;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C42B00;
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	ctx.lr = 0x82C42B14;
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42b2c
	if (ctx.cr6.eq) goto loc_82C42B2C;
	// bl 0x824fe010
	ctx.lr = 0x82C42B24;
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82C42B2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00008
	ctx.lr = 0x82C42B34;
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C42B3C"))) PPC_WEAK_FUNC(sub_82C42B3C);
PPC_FUNC_IMPL(__imp__sub_82C42B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42B40"))) PPC_WEAK_FUNC(sub_82C42B40);
PPC_FUNC_IMPL(__imp__sub_82C42B40) {
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
	// bl 0x82c42ab8
	ctx.lr = 0x82C42B60;
	sub_82C42AB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42b78
	if (ctx.cr6.eq) goto loc_82C42B78;
	// bl 0x824fe010
	ctx.lr = 0x82C42B74;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C42B78:
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

__attribute__((alias("__imp__sub_82C42B90"))) PPC_WEAK_FUNC(sub_82C42B90);
PPC_FUNC_IMPL(__imp__sub_82C42B90) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c42bf8
	if (ctx.cr6.lt) goto loc_82C42BF8;
	// bne cr6,0x82c42cdc
	if (!ctx.cr6.eq) goto loc_82C42CDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c42c50
	if (ctx.cr6.lt) goto loc_82C42C50;
	// bne cr6,0x82c42cdc
	if (!ctx.cr6.eq) goto loc_82C42CDC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42d00
	if (ctx.cr6.eq) goto loc_82C42D00;
	// b 0x82c42c18
	goto loc_82C42C18;
loc_82C42BF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c42c50
	if (ctx.cr6.lt) goto loc_82C42C50;
	// bne cr6,0x82c42cdc
	if (!ctx.cr6.eq) goto loc_82C42CDC;
loc_82C42C18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c40bd0
	ctx.lr = 0x82C42C24;
	sub_82C40BD0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42510
	ctx.lr = 0x82C42C30;
	sub_82C42510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C42C40;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3bf18
	ctx.lr = 0x82C42C48;
	sub_82C3BF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c42d04
	goto loc_82C42D04;
loc_82C42C50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3d028
	ctx.lr = 0x82C42C5C;
	sub_82C3D028(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42510
	ctx.lr = 0x82C42C68;
	sub_82C42510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42cd4
	if (ctx.cr6.eq) goto loc_82C42CD4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15660
	ctx.r9.s64 = ctx.r10.s64 + -15660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82c1b998
	ctx.lr = 0x82C42C9C;
	sub_82C1B998(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c42ce4
	if (ctx.cr6.eq) goto loc_82C42CE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r10,-20180
	ctx.r31.s64 = ctx.r10.s64 + -20180;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C42CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42CCC;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C42CD4;
	sub_82C39298(ctx, base);
loc_82C42CD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C42CDC;
	sub_82C2D228(ctx, base);
loc_82C42CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c42d04
	goto loc_82C42D04;
loc_82C42CE4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3adf0
	ctx.lr = 0x82C42CF0;
	sub_82C3ADF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c39298
	ctx.lr = 0x82C42CF8;
	sub_82C39298(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c2d228
	ctx.lr = 0x82C42D00;
	sub_82C2D228(ctx, base);
loc_82C42D00:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C42D04:
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

__attribute__((alias("__imp__sub_82C42D1C"))) PPC_WEAK_FUNC(sub_82C42D1C);
PPC_FUNC_IMPL(__imp__sub_82C42D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42D20"))) PPC_WEAK_FUNC(sub_82C42D20);
PPC_FUNC_IMPL(__imp__sub_82C42D20) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x82c42b90
	sub_82C42B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C42D30"))) PPC_WEAK_FUNC(sub_82C42D30);
PPC_FUNC_IMPL(__imp__sub_82C42D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C42D38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bff710
	ctx.lr = 0x82C42D4C;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-14612
	ctx.r4.s64 = ctx.r11.s64 + -14612;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,-14628
	ctx.r29.s64 = ctx.r10.s64 + -14628;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bff7d8
	ctx.lr = 0x82C42D68;
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C42D70;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42D78;
	sub_82BFF7D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,3200
	ctx.r4.s64 = ctx.r9.s64 + 3200;
	// bl 0x82bff7d8
	ctx.lr = 0x82C42D88;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C42D94;
	sub_82BFFAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C42DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C42DB0;
	sub_82BFF750(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C42DB8"))) PPC_WEAK_FUNC(sub_82C42DB8);
PPC_FUNC_IMPL(__imp__sub_82C42DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C42DC8"))) PPC_WEAK_FUNC(sub_82C42DC8);
PPC_FUNC_IMPL(__imp__sub_82C42DC8) {
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
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c42e14
	if (!ctx.cr6.eq) goto loc_82C42E14;
loc_82C42DF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c42dc8
	ctx.lr = 0x82C42DFC;
	sub_82C42DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x82C42E08;
	sub_824FE010(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42df0
	if (ctx.cr6.eq) goto loc_82C42DF0;
loc_82C42E14:
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

__attribute__((alias("__imp__sub_82C42E2C"))) PPC_WEAK_FUNC(sub_82C42E2C);
PPC_FUNC_IMPL(__imp__sub_82C42E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42E30"))) PPC_WEAK_FUNC(sub_82C42E30);
PPC_FUNC_IMPL(__imp__sub_82C42E30) {
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
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-14364
	ctx.r10.s64 = ctx.r11.s64 + -14364;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42e74
	if (ctx.cr6.eq) goto loc_82C42E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C42E74:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82c00130
	ctx.lr = 0x82C42E88;
	sub_82C00130(ctx, base);
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

__attribute__((alias("__imp__sub_82C42EA0"))) PPC_WEAK_FUNC(sub_82C42EA0);
PPC_FUNC_IMPL(__imp__sub_82C42EA0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c42dc8
	ctx.lr = 0x82C42EC0;
	sub_82C42DC8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82C42EF4"))) PPC_WEAK_FUNC(sub_82C42EF4);
PPC_FUNC_IMPL(__imp__sub_82C42EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42EF8"))) PPC_WEAK_FUNC(sub_82C42EF8);
PPC_FUNC_IMPL(__imp__sub_82C42EF8) {
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
	// bl 0x82c42e30
	ctx.lr = 0x82C42F18;
	sub_82C42E30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42f30
	if (ctx.cr6.eq) goto loc_82C42F30;
	// bl 0x824fe010
	ctx.lr = 0x82C42F2C;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C42F30:
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

__attribute__((alias("__imp__sub_82C42F48"))) PPC_WEAK_FUNC(sub_82C42F48);
PPC_FUNC_IMPL(__imp__sub_82C42F48) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x82C42F64;
	sub_8221F388(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42f74
	if (ctx.cr6.eq) goto loc_82C42F74;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82C42F74:
	// addic. r10,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r10.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c42f80
	if (ctx.cr0.eq) goto loc_82C42F80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82C42F80:
	// addic. r10,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c42f8c
	if (ctx.cr0.eq) goto loc_82C42F8C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82C42F8C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C42FD0"))) PPC_WEAK_FUNC(sub_82C42FD0);
PPC_FUNC_IMPL(__imp__sub_82C42FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C42FD8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c430c0
	if (ctx.cr6.eq) goto loc_82C430C0;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfd180
	ctx.lr = 0x82C42FFC;
	sub_82BFD180(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82bfd118
	ctx.lr = 0x82C43018;
	sub_82BFD118(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82c4302c
	if (ctx.cr6.lt) goto loc_82C4302C;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x822ade08
	ctx.lr = 0x82C4302C;
	sub_822ADE08(ctx, base);
loc_82C4302C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_82C43040:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43054
	if (ctx.cr6.eq) goto loc_82C43054;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c43058
	if (ctx.cr6.eq) goto loc_82C43058;
loc_82C43054:
	// twi 31,r0,22
loc_82C43058:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c430c0
	if (ctx.cr6.eq) goto loc_82C430C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c4306c
	if (!ctx.cr6.eq) goto loc_82C4306C;
	// twi 31,r0,22
loc_82C4306C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c4307c
	if (!ctx.cr6.eq) goto loc_82C4307C;
	// twi 31,r0,22
loc_82C4307C:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82c430b0
	if (!ctx.cr6.eq) goto loc_82C430B0;
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8273f9d8
	ctx.lr = 0x82C43094;
	sub_8273F9D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c11008
	ctx.lr = 0x82C430A4;
	sub_82C11008(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82c43040
	goto loc_82C43040;
loc_82C430B0:
	// bl 0x8273f9d8
	ctx.lr = 0x82C430B4;
	sub_8273F9D8(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82c43040
	goto loc_82C43040;
loc_82C430C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C430C8"))) PPC_WEAK_FUNC(sub_82C430C8);
PPC_FUNC_IMPL(__imp__sub_82C430C8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C430F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c43174
	if (!ctx.cr6.eq) goto loc_82C43174;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4313c
	if (ctx.cr6.eq) goto loc_82C4313C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c42fd0
	ctx.lr = 0x82C4310C;
	sub_82C42FD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82c4313c
	if (ctx.cr6.eq) goto loc_82C4313C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f1,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C4313C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C4313C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c43174
	if (ctx.cr6.eq) goto loc_82C43174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c43174
	if (!ctx.cr6.eq) goto loc_82C43174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ade08
	ctx.lr = 0x82C43174;
	sub_822ADE08(ctx, base);
loc_82C43174:
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

__attribute__((alias("__imp__sub_82C43188"))) PPC_WEAK_FUNC(sub_82C43188);
PPC_FUNC_IMPL(__imp__sub_82C43188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19972
	ctx.r3.s64 = ctx.r11.s64 + 19972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C43194"))) PPC_WEAK_FUNC(sub_82C43194);
PPC_FUNC_IMPL(__imp__sub_82C43194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43198"))) PPC_WEAK_FUNC(sub_82C43198);
PPC_FUNC_IMPL(__imp__sub_82C43198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C431A0"))) PPC_WEAK_FUNC(sub_82C431A0);
PPC_FUNC_IMPL(__imp__sub_82C431A0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r4,r10,19968
	ctx.r4.s64 = ctx.r10.s64 + 19968;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C431D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c431f0
	if (!ctx.cr6.eq) goto loc_82C431F0;
loc_82C431D8:
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
loc_82C431F0:
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40ec0
	ctx.lr = 0x82C43204;
	sub_82C40EC0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c431d8
	if (ctx.cr6.eq) goto loc_82C431D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C43230"))) PPC_WEAK_FUNC(sub_82C43230);
PPC_FUNC_IMPL(__imp__sub_82C43230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C43238;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c431a0
	ctx.lr = 0x82C43248;
	sub_82C431A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c432c4
	if (!ctx.cr6.eq) goto loc_82C432C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C4325C;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,31240
	ctx.r29.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	ctx.lr = 0x82C43274;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C4327C;
	sub_82BFF848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C43284;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C43290;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14312
	ctx.r4.s64 = ctx.r9.s64 + -14312;
	// li r5,174
	ctx.r5.s64 = 174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C432B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C432B8;
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C432C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C432DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C432E4"))) PPC_WEAK_FUNC(sub_82C432E4);
PPC_FUNC_IMPL(__imp__sub_82C432E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C432E8"))) PPC_WEAK_FUNC(sub_82C432E8);
PPC_FUNC_IMPL(__imp__sub_82C432E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,19968
	ctx.r4.s64 = ctx.r10.s64 + 19968;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C43310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c43328
	if (!ctx.cr6.eq) goto loc_82C43328;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C43328:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4333C"))) PPC_WEAK_FUNC(sub_82C4333C);
PPC_FUNC_IMPL(__imp__sub_82C4333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43340"))) PPC_WEAK_FUNC(sub_82C43340);
PPC_FUNC_IMPL(__imp__sub_82C43340) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r10,19968
	ctx.r4.s64 = ctx.r10.s64 + 19968;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C43370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
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

__attribute__((alias("__imp__sub_82C43394"))) PPC_WEAK_FUNC(sub_82C43394);
PPC_FUNC_IMPL(__imp__sub_82C43394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43398"))) PPC_WEAK_FUNC(sub_82C43398);
PPC_FUNC_IMPL(__imp__sub_82C43398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19968
	ctx.r3.s64 = ctx.r11.s64 + 19968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C433A4"))) PPC_WEAK_FUNC(sub_82C433A4);
PPC_FUNC_IMPL(__imp__sub_82C433A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C433A8"))) PPC_WEAK_FUNC(sub_82C433A8);
PPC_FUNC_IMPL(__imp__sub_82C433A8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-20604
	ctx.r4.s64 = ctx.r11.s64 + -20604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C433D8;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43468
	if (ctx.cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-20580
	ctx.r4.s64 = ctx.r11.s64 + -20580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C433F8;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43468
	if (ctx.cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-20592
	ctx.r4.s64 = ctx.r11.s64 + -20592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C43418;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43468
	if (ctx.cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,-14184
	ctx.r4.s64 = ctx.r11.s64 + -14184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15068
	ctx.lr = 0x82C43438;
	sub_82C15068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43468
	if (ctx.cr6.eq) goto loc_82C43468;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-14760
	ctx.r4.s64 = ctx.r11.s64 + -14760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c011e8
	ctx.lr = 0x82C43458;
	sub_82C011E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c4346c
	if (!ctx.cr6.eq) goto loc_82C4346C;
loc_82C43468:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C4346C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C43488"))) PPC_WEAK_FUNC(sub_82C43488);
PPC_FUNC_IMPL(__imp__sub_82C43488) {
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
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C434B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c434fc
	if (ctx.cr6.eq) goto loc_82C434FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c433a8
	ctx.lr = 0x82C434CC;
	sub_82C433A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c434fc
	if (ctx.cr6.eq) goto loc_82C434FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C434EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c43500
	if (!ctx.cr6.eq) goto loc_82C43500;
loc_82C434FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C43500:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82C4351C"))) PPC_WEAK_FUNC(sub_82C4351C);
PPC_FUNC_IMPL(__imp__sub_82C4351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43520"))) PPC_WEAK_FUNC(sub_82C43520);
PPC_FUNC_IMPL(__imp__sub_82C43520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C43528;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c43658
	if (ctx.cr6.lt) goto loc_82C43658;
	// bne cr6,0x82c437b8
	if (!ctx.cr6.eq) goto loc_82C437B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c435cc
	if (ctx.cr6.lt) goto loc_82C435CC;
	// bne cr6,0x82c437b8
	if (!ctx.cr6.eq) goto loc_82C437B8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c43828
	if (!ctx.cr6.gt) goto loc_82C43828;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C4358C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c43488
	ctx.lr = 0x82C435A0;
	sub_82C43488(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c437b8
	if (ctx.cr6.eq) goto loc_82C437B8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c4358c
	if (ctx.cr6.lt) goto loc_82C4358C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C435CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C435E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,6544
	ctx.r26.s64 = ctx.r11.s64 + 6544;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c02b98
	ctx.lr = 0x82C435F0;
	sub_82C02B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C43600;
	sub_82C21C90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c43828
	if (ctx.cr6.eq) goto loc_82C43828;
loc_82C4360C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x82C43614;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43488
	ctx.lr = 0x82C43628;
	sub_82C43488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c437b8
	if (ctx.cr6.eq) goto loc_82C437B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C43640;
	sub_82C21E08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82c4360c
	if (ctx.cr6.lt) goto loc_82C4360C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C43658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4366C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c43714
	if (ctx.cr6.lt) goto loc_82C43714;
	// bne cr6,0x82c437b8
	if (!ctx.cr6.eq) goto loc_82C437B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4368C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C436AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c437b8
	if (ctx.cr6.eq) goto loc_82C437B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43828
	if (ctx.cr6.eq) goto loc_82C43828;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,6544
	ctx.r29.s64 = ctx.r11.s64 + 6544;
loc_82C436D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82c43488
	ctx.lr = 0x82C436E8;
	sub_82C43488(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c437b8
	if (ctx.cr6.eq) goto loc_82C437B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c436d4
	if (ctx.cr6.lt) goto loc_82C436D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C43714:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C43744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c437b8
	if (ctx.cr6.eq) goto loc_82C437B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C43758;
	sub_82C01D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c437c4
	if (!ctx.cr6.gt) goto loc_82C437C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01d60
	ctx.lr = 0x82C4376C;
	sub_82C01D60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r10,-20240
	ctx.r28.s64 = ctx.r10.s64 + -20240;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r27,r9,-20272
	ctx.r27.s64 = ctx.r9.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C43798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C437A0;
	sub_82BFF7D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C437A8;
	sub_82BFF848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C437B0;
	sub_82BFF7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C437B8;
	sub_82BFF848(ctx, base);
loc_82C437B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C437C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21c90
	ctx.lr = 0x82C437CC;
	sub_82C21C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43828
	if (ctx.cr6.eq) goto loc_82C43828;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,6544
	ctx.r28.s64 = ctx.r11.s64 + 6544;
loc_82C437E4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x82C437EC;
	sub_8221F388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43488
	ctx.lr = 0x82C43800;
	sub_82C43488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c437b8
	if (ctx.cr6.eq) goto loc_82C437B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c21e08
	ctx.lr = 0x82C43818;
	sub_82C21E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c437e4
	if (ctx.cr6.lt) goto loc_82C437E4;
loc_82C43828:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C43834"))) PPC_WEAK_FUNC(sub_82C43834);
PPC_FUNC_IMPL(__imp__sub_82C43834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43838"))) PPC_WEAK_FUNC(sub_82C43838);
PPC_FUNC_IMPL(__imp__sub_82C43838) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82C4384C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c43880
	if (ctx.cr6.eq) goto loc_82C43880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-14196
	ctx.r9.s64 = ctx.r10.s64 + -14196;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C43880:
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

__attribute__((alias("__imp__sub_82C43894"))) PPC_WEAK_FUNC(sub_82C43894);
PPC_FUNC_IMPL(__imp__sub_82C43894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43898"))) PPC_WEAK_FUNC(sub_82C43898);
PPC_FUNC_IMPL(__imp__sub_82C43898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C438A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cb448
	ctx.lr = 0x82C438C4;
	sub_825CB448(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c438dc
	if (ctx.cr6.eq) goto loc_82C438DC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c438e0
	if (ctx.cr6.eq) goto loc_82C438E0;
loc_82C438DC:
	// twi 31,r0,22
loc_82C438E0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c438f8
	if (!ctx.cr6.eq) goto loc_82C438F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82C438F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c43904
	if (!ctx.cr6.eq) goto loc_82C43904;
	// twi 31,r0,22
loc_82C43904:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c43914
	if (!ctx.cr6.eq) goto loc_82C43914;
	// twi 31,r0,22
loc_82C43914:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82c0b768
	ctx.lr = 0x82C43924;
	sub_82C0B768(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C43930"))) PPC_WEAK_FUNC(sub_82C43930);
PPC_FUNC_IMPL(__imp__sub_82C43930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82C43938;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-14196
	ctx.r9.s64 = ctx.r11.s64 + -14196;
	// addi r8,r10,-16700
	ctx.r8.s64 = ctx.r10.s64 + -16700;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82c16c78
	ctx.lr = 0x82C43978;
	sub_82C16C78(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-15660
	ctx.r6.s64 = ctx.r7.s64 + -15660;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82c39298
	ctx.lr = 0x82C4398C;
	sub_82C39298(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c439a4
	if (ctx.cr6.eq) goto loc_82C439A4;
	// bl 0x824fe010
	ctx.lr = 0x82C4399C;
	sub_824FE010(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82C439A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00008
	ctx.lr = 0x82C439AC;
	sub_82C00008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82C439B4"))) PPC_WEAK_FUNC(sub_82C439B4);
PPC_FUNC_IMPL(__imp__sub_82C439B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C439B8"))) PPC_WEAK_FUNC(sub_82C439B8);
PPC_FUNC_IMPL(__imp__sub_82C439B8) {
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
	// bl 0x82c43930
	ctx.lr = 0x82C439D8;
	sub_82C43930(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c439f0
	if (ctx.cr6.eq) goto loc_82C439F0;
	// bl 0x824fe010
	ctx.lr = 0x82C439EC;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C439F0:
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

__attribute__((alias("__imp__sub_82C43A08"))) PPC_WEAK_FUNC(sub_82C43A08);
PPC_FUNC_IMPL(__imp__sub_82C43A08) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c43a74
	if (!ctx.cr6.eq) goto loc_82C43A74;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82C43A40:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// subfc r8,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43a64
	if (ctx.cr6.eq) goto loc_82C43A64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c43a68
	goto loc_82C43A68;
loc_82C43A64:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82C43A68:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c43a40
	if (ctx.cr6.eq) goto loc_82C43A40;
loc_82C43A74:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c82a80
	ctx.lr = 0x82C43A80;
	sub_82C82A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82C43AB4"))) PPC_WEAK_FUNC(sub_82C43AB4);
PPC_FUNC_IMPL(__imp__sub_82C43AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43AB8"))) PPC_WEAK_FUNC(sub_82C43AB8);
PPC_FUNC_IMPL(__imp__sub_82C43AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82C43AC0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c431a0
	ctx.lr = 0x82C43AD4;
	sub_82C431A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c43b50
	if (!ctx.cr6.eq) goto loc_82C43B50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff710
	ctx.lr = 0x82C43AE8;
	sub_82BFF710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r11,-14172
	ctx.r4.s64 = ctx.r11.s64 + -14172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,31240
	ctx.r30.s64 = ctx.r10.s64 + 31240;
	// bl 0x82bff7d8
	ctx.lr = 0x82C43B00;
	sub_82BFF7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bff848
	ctx.lr = 0x82C43B08;
	sub_82BFF848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bff7d8
	ctx.lr = 0x82C43B10;
	sub_82BFF7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82bffaa8
	ctx.lr = 0x82C43B1C;
	sub_82BFFAA8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-14312
	ctx.r4.s64 = ctx.r9.s64 + -14312;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C43B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bff750
	ctx.lr = 0x82C43B44;
	sub_82BFF750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C43B50:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x82C43B58;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x82c43b8c
	if (ctx.cr6.eq) goto loc_82C43B8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-14364
	ctx.r10.s64 = ctx.r11.s64 + -14364;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// b 0x82c43b90
	goto loc_82C43B90;
loc_82C43B8C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82C43B90:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c43bfc
	if (ctx.cr6.eq) goto loc_82C43BFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c43898
	ctx.lr = 0x82C43BC0;
	sub_82C43898(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c43c68
	if (!ctx.cr6.eq) goto loc_82C43C68;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c43c10
	if (!ctx.cr6.eq) goto loc_82C43C10;
loc_82C43BF4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ade08
	ctx.lr = 0x82C43BFC;
	sub_822ADE08(ctx, base);
loc_82C43BFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c32138
	ctx.lr = 0x82C43C04;
	sub_82C32138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82C43C10:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bffea8
	ctx.lr = 0x82C43C18;
	sub_82BFFEA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c0b768
	ctx.lr = 0x82C43C24;
	sub_82C0B768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ade08
	ctx.lr = 0x82C43C2C;
	sub_822ADE08(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43bf4
	if (ctx.cr6.eq) goto loc_82C43BF4;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82bffb40
	ctx.lr = 0x82C43C44;
	sub_82BFFB40(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ade08
	ctx.lr = 0x82C43C68;
	sub_822ADE08(ctx, base);
loc_82C43C68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82c43a08
	ctx.lr = 0x82C43C88;
	sub_82C43A08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c32138
	ctx.lr = 0x82C43C90;
	sub_82C32138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82C43C9C"))) PPC_WEAK_FUNC(sub_82C43C9C);
PPC_FUNC_IMPL(__imp__sub_82C43C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43CA0"))) PPC_WEAK_FUNC(sub_82C43CA0);
PPC_FUNC_IMPL(__imp__sub_82C43CA0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-14348
	ctx.r10.s64 = ctx.r11.s64 + -14348;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c82dc0
	ctx.lr = 0x82C43CEC;
	sub_82C82DC0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824fe010
	ctx.lr = 0x82C43CF4;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82c00140
	ctx.lr = 0x82C43D08;
	sub_82C00140(ctx, base);
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

__attribute__((alias("__imp__sub_82C43D1C"))) PPC_WEAK_FUNC(sub_82C43D1C);
PPC_FUNC_IMPL(__imp__sub_82C43D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43D20"))) PPC_WEAK_FUNC(sub_82C43D20);
PPC_FUNC_IMPL(__imp__sub_82C43D20) {
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
	// bl 0x82c43ca0
	ctx.lr = 0x82C43D40;
	sub_82C43CA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43d58
	if (ctx.cr6.eq) goto loc_82C43D58;
	// bl 0x824fe010
	ctx.lr = 0x82C43D54;
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C43D58:
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

__attribute__((alias("__imp__sub_82C43D70"))) PPC_WEAK_FUNC(sub_82C43D70);
PPC_FUNC_IMPL(__imp__sub_82C43D70) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82C43D88;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c43dc0
	if (ctx.cr6.eq) goto loc_82C43DC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-14348
	ctx.r10.s64 = ctx.r11.s64 + -14348;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c42f48
	ctx.lr = 0x82C43DA8;
	sub_82C42F48(ctx, base);
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
loc_82C43DC0:
	// li r3,0
	ctx.r3.s64 = 0;
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

