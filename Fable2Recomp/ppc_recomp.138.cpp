#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A3702C"))) PPC_WEAK_FUNC(sub_82A3702C);
PPC_FUNC_IMPL(__imp__sub_82A3702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37030"))) PPC_WEAK_FUNC(sub_82A37030);
PPC_FUNC_IMPL(__imp__sub_82A37030) {
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
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82a3707c
	if (ctx.cr6.eq) goto loc_82A3707C;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x82a3707c
	if (ctx.cr6.eq) goto loc_82A3707C;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x82a37074
	if (!ctx.cr6.eq) goto loc_82A37074;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,14140
	ctx.r10.s64 = ctx.r11.s64 + 14140;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x82a37084
	goto loc_82A37084;
loc_82A37074:
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// b 0x82a37084
	goto loc_82A37084;
loc_82A3707C:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82A37084:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x82a36f40
	ctx.lr = 0x82A37098;
	sub_82A36F40(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,14156
	ctx.r4.s64 = ctx.r11.s64 + 14156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227ea0
	ctx.lr = 0x82A370AC;
	sub_82227EA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a36d00
	ctx.lr = 0x82A370B8;
	sub_82A36D00(ctx, base);
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

__attribute__((alias("__imp__sub_82A370CC"))) PPC_WEAK_FUNC(sub_82A370CC);
PPC_FUNC_IMPL(__imp__sub_82A370CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A370D0"))) PPC_WEAK_FUNC(sub_82A370D0);
PPC_FUNC_IMPL(__imp__sub_82A370D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a370f8
	if (!ctx.cr6.gt) goto loc_82A370F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3711c
	if (!ctx.cr6.eq) goto loc_82A3711C;
	// lbz r11,50(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82A370F8:
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwimi r4,r6,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82a38cc8
	sub_82A38CC8(ctx, base);
	return;
loc_82A3711C:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82a370f8
	if (!ctx.cr6.eq) goto loc_82A370F8;
	// rlwinm r7,r11,26,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFF;
	// rlwinm r9,r11,9,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82a370f8
	if (ctx.cr6.gt) goto loc_82A370F8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a370f8
	if (ctx.cr6.gt) goto loc_82A370F8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,23,0,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xFF800000) | (ctx.r11.u64 & 0xFFFFFFFF007FFFFF);
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37178"))) PPC_WEAK_FUNC(sub_82A37178);
PPC_FUNC_IMPL(__imp__sub_82A37178) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// ori r4,r4,32790
	ctx.r4.u64 = ctx.r4.u64 | 32790;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A371B0;
	sub_82A38CC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A371C4;
	sub_82A374B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82A371E0"))) PPC_WEAK_FUNC(sub_82A371E0);
PPC_FUNC_IMPL(__imp__sub_82A371E0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82a37264
	if (ctx.cr6.eq) goto loc_82A37264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r11,-27020
	ctx.r8.s64 = ctx.r11.s64 + -27020;
loc_82A37200:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x82a3722c
	if (ctx.cr6.lt) goto loc_82A3722C;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// clrlwi r5,r6,26
	ctx.r5.u64 = ctx.r6.u32 & 0x3F;
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r6,r3,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a37230
	if (!ctx.cr6.eq) goto loc_82A37230;
loc_82A3722C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A37230:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r6,27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 27, ctx.xer);
	// bne cr6,0x82a3726c
	if (!ctx.cr6.eq) goto loc_82A3726C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a37264
	if (ctx.cr6.eq) goto loc_82A37264;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82a37200
	if (!ctx.cr6.eq) goto loc_82A37200;
loc_82A37264:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3726C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37274"))) PPC_WEAK_FUNC(sub_82A37274);
PPC_FUNC_IMPL(__imp__sub_82A37274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37278"))) PPC_WEAK_FUNC(sub_82A37278);
PPC_FUNC_IMPL(__imp__sub_82A37278) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82a372b4
	if (ctx.cr6.lt) goto loc_82A372B4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r7,r8,-27020
	ctx.r7.s64 = ctx.r8.s64 + -27020;
	// clrlwi r6,r9,26
	ctx.r6.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r3,r4,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a372b8
	if (!ctx.cr6.eq) goto loc_82A372B8;
loc_82A372B4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A372B8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r9,27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 27, ctx.xer);
	// beq cr6,0x82a372d0
	if (ctx.cr6.eq) goto loc_82A372D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A372D0:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// beq cr6,0x82a372f4
	if (ctx.cr6.eq) goto loc_82A372F4;
	// rlwinm r9,r11,9,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82a372f4
	if (ctx.cr6.eq) goto loc_82A372F4;
	// rlwimi r11,r5,6,18,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0x3FC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC03F);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82A372F4:
	// li r9,26
	ctx.r9.s64 = 26;
	// rlwinm r8,r11,0,9,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FC000;
	// rlwimi r9,r11,15,17,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x7FC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFF803F);
	// li r3,1
	ctx.r3.s64 = 1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37310"))) PPC_WEAK_FUNC(sub_82A37310);
PPC_FUNC_IMPL(__imp__sub_82A37310) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r7,r11,-27020
	ctx.r7.s64 = ctx.r11.s64 + -27020;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
loc_82A37328:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82a3735c
	if (ctx.cr6.lt) goto loc_82A3735C;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// clrlwi r5,r6,26
	ctx.r5.u64 = ctx.r6.u32 & 0x3F;
	// lbzx r6,r5,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a37360
	if (!ctx.cr6.eq) goto loc_82A37360;
loc_82A3735C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A37360:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r6,27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 27, ctx.xer);
	// bne cr6,0x82a37384
	if (!ctx.cr6.eq) goto loc_82A37384;
	// li r6,26
	ctx.r6.s64 = 26;
	// rlwinm r5,r11,0,9,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FC000;
	// rlwimi r6,r11,15,17,25
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x7FC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFF803F);
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82A37384:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r6,r9,18,14,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r8,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82a37328
	if (!ctx.cr6.eq) goto loc_82A37328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A373B4"))) PPC_WEAK_FUNC(sub_82A373B4);
PPC_FUNC_IMPL(__imp__sub_82A373B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A373B8"))) PPC_WEAK_FUNC(sub_82A373B8);
PPC_FUNC_IMPL(__imp__sub_82A373B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A373C0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82a3749c
	if (ctx.cr6.eq) goto loc_82A3749C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
loc_82A373E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r31,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a37410
	if (!ctx.cr6.eq) goto loc_82A37410;
	// li r27,-1
	ctx.r27.s64 = -1;
	// b 0x82a37418
	goto loc_82A37418;
loc_82A37410:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82A37418:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a37278
	ctx.lr = 0x82A37424;
	sub_82A37278(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// beq cr6,0x82a37464
	if (ctx.cr6.eq) goto loc_82A37464;
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82a37480
	if (!ctx.cr6.gt) goto loc_82A37480;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14160
	ctx.r4.s64 = ctx.r11.s64 + 14160;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A37464;
	sub_82A306A0(ctx, base);
loc_82A37464:
	// subf r11,r30,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x82a374a4
	if (ctx.cr6.gt) goto loc_82A374A4;
loc_82A37480:
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// rlwimi r9,r8,14,0,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0xFFFFC000) | (ctx.r9.u64 & 0xFFFFFFFF00003FFF);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// bne cr6,0x82a373e8
	if (!ctx.cr6.eq) goto loc_82A373E8;
loc_82A3749C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82A374A4:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14160
	ctx.r4.s64 = ctx.r11.s64 + 14160;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A374B8;
	sub_82A306A0(ctx, base);
}

__attribute__((alias("__imp__sub_82A374B8"))) PPC_WEAK_FUNC(sub_82A374B8);
PPC_FUNC_IMPL(__imp__sub_82A374B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a374d4
	if (!ctx.cr6.eq) goto loc_82A374D4;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82A374D4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
loc_82A374E4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r6,r8,18,14,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a37514
	if (ctx.cr6.eq) goto loc_82A37514;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a37514
	if (ctx.cr6.eq) goto loc_82A37514;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82a374e4
	goto loc_82A374E4;
loc_82A37514:
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r5,r8,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r8.s64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a37548
	if (!ctx.cr6.gt) goto loc_82A37548;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14160
	ctx.r4.s64 = ctx.r11.s64 + 14160;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82a306a0
	sub_82A306A0(ctx, base);
	return;
loc_82A37548:
	// lwzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r8,r6,14,0,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 14) & 0xFFFFC000) | (ctx.r8.u64 & 0xFFFFFFFF00003FFF);
	// stwx r8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3755C"))) PPC_WEAK_FUNC(sub_82A3755C);
PPC_FUNC_IMPL(__imp__sub_82A3755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37560"))) PPC_WEAK_FUNC(sub_82A37560);
PPC_FUNC_IMPL(__imp__sub_82A37560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A37568;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r26,16(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228d98
	ctx.lr = 0x82A37588;
	sub_82228D98(ctx, base);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r31,40(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bne cr6,0x82a375b8
	if (!ctx.cr6.eq) goto loc_82A375B8;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82A375B8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a37618
	if (!ctx.cr6.gt) goto loc_82A37618;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r11,13632
	ctx.r8.s64 = ctx.r11.s64 + 13632;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2c600
	ctx.lr = 0x82A37614;
	sub_82A2C600(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
loc_82A37618:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a3764c
	if (!ctx.cr6.lt) goto loc_82A3764C;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A3762C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a3762c
	if (ctx.cr6.lt) goto loc_82A3762C;
loc_82A3764C:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82a376d8
	if (ctx.cr6.lt) goto loc_82A376D8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a376d8
	if (ctx.cr6.eq) goto loc_82A376D8;
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a376d8
	if (ctx.cr6.eq) goto loc_82A376D8;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82a376c4
	if (!ctx.cr6.eq) goto loc_82A376C4;
	// bl 0x82a2c778
	ctx.lr = 0x82A376B0;
	sub_82A2C778(ctx, base);
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82A376C4:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r10,r11,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r9.u8);
loc_82A376D8:
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A376EC"))) PPC_WEAK_FUNC(sub_82A376EC);
PPC_FUNC_IMPL(__imp__sub_82A376EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A376F0"))) PPC_WEAK_FUNC(sub_82A376F0);
PPC_FUNC_IMPL(__imp__sub_82A376F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82a37720
	if (!ctx.cr6.eq) goto loc_82A37720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r7,r9,14,9,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0x7FC000) | (ctx.r7.u64 & 0xFFFFFFFFFF803FFF);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// blr 
	return;
loc_82A37720:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r7,r9,23,0,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0xFF800000) | (ctx.r7.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,39(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rotlwi r9,r5,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 6);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,26,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFC03F;
	// or r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r5,75(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82a377a8
	if (!ctx.cr6.gt) goto loc_82A377A8;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a377a4
	if (ctx.cr6.lt) goto loc_82A377A4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82a306a0
	sub_82A306A0(ctx, base);
	return;
loc_82A377A4:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A377A8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A377B8"))) PPC_WEAK_FUNC(sub_82A377B8);
PPC_FUNC_IMPL(__imp__sub_82A377B8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82a37940
	if (ctx.cr6.gt) goto loc_82A37940;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,30708
	ctx.r12.s64 = ctx.r12.s64 + 30708;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A37818;
	case 1:
		goto loc_82A37834;
	case 2:
		goto loc_82A3786C;
	case 3:
		goto loc_82A378A4;
	case 4:
		goto loc_82A37940;
	case 5:
		goto loc_82A37940;
	case 6:
		goto loc_82A37940;
	case 7:
		goto loc_82A37938;
	case 8:
		goto loc_82A37938;
	default:
		__builtin_unreachable();
	}
	// lwz r21,30744(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30744);
	// lwz r21,30772(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30772);
	// lwz r21,30828(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30828);
	// lwz r21,30884(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30884);
	// lwz r21,31040(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31040);
	// lwz r21,31040(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31040);
	// lwz r21,31040(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31040);
	// lwz r21,31032(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31032);
	// lwz r21,31032(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31032);
loc_82A37818:
	// li r11,12
	ctx.r11.s64 = 12;
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
loc_82A37834:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r4,r11,23,0,8
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 23) & 0xFF800000) | (ctx.r4.u64 & 0xFFFFFFFF007FFFFF);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A3784C;
	sub_82A38CC8(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_82A3786C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r4,r11,14,0,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0xFFFFC000) | (ctx.r4.u64 & 0xFFFFFFFF00003FFF);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A37884;
	sub_82A38CC8(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_82A378A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a378cc
	if (!ctx.cr6.eq) goto loc_82A378CC;
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a378cc
	if (ctx.cr6.lt) goto loc_82A378CC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_82A378CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a378f4
	if (!ctx.cr6.eq) goto loc_82A378F4;
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a378f4
	if (ctx.cr6.lt) goto loc_82A378F4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_82A378F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r4,r8,14,0,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0xFFFFC000) | (ctx.r4.u64 & 0xFFFFFFFF00003FFF);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A37918;
	sub_82A38CC8(ctx, base);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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
loc_82A37938:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82be1e98
	ctx.lr = 0x82A37940;
	sub_82BE1E98(ctx, base);
loc_82A37940:
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

__attribute__((alias("__imp__sub_82A37954"))) PPC_WEAK_FUNC(sub_82A37954);
PPC_FUNC_IMPL(__imp__sub_82A37954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37958"))) PPC_WEAK_FUNC(sub_82A37958);
PPC_FUNC_IMPL(__imp__sub_82A37958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A37960;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a377b8
	ctx.lr = 0x82A37974;
	sub_82A377B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82a37ac4
	if (ctx.cr6.gt) goto loc_82A37AC4;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,31132
	ctx.r12.s64 = ctx.r12.s64 + 31132;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82A379CC;
	case 1:
		goto loc_82A379F0;
	case 2:
		goto loc_82A379F0;
	case 3:
		goto loc_82A37A0C;
	case 4:
		goto loc_82A37A24;
	case 5:
		goto loc_82A37AC4;
	case 6:
		goto loc_82A37AC4;
	case 7:
		goto loc_82A37AC4;
	case 8:
		goto loc_82A37AC4;
	case 9:
		goto loc_82A37AC4;
	case 10:
		goto loc_82A37A60;
	case 11:
		goto loc_82A37A90;
	default:
		__builtin_unreachable();
	}
	// lwz r21,31180(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31180);
	// lwz r21,31216(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31216);
	// lwz r21,31216(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31216);
	// lwz r21,31244(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31244);
	// lwz r21,31268(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31268);
	// lwz r21,31428(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31428);
	// lwz r21,31428(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31428);
	// lwz r21,31428(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31428);
	// lwz r21,31428(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31428);
	// lwz r21,31428(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31428);
	// lwz r21,31328(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31328);
	// lwz r21,31376(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31376);
loc_82A379CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a370d0
	ctx.lr = 0x82A379DC;
	sub_82A370D0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A379F0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r4,2
	ctx.r4.s64 = 2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,12,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x20000;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// rlwimi r4,r7,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82a37aa8
	goto loc_82A37AA8;
loc_82A37A0C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 | ctx.r30.u64;
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82a37aa8
	goto loc_82A37AA8;
loc_82A37A24:
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37560
	ctx.lr = 0x82A37A44;
	sub_82A37560(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,1
	ctx.r4.s64 = 1;
	// or r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 | ctx.r30.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82a37ab0
	goto loc_82A37AB0;
loc_82A37A60:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r8,r30,6,18,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r30.u32, 6) & 0x3FC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC03F);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A37A90:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a37ab8
	if (ctx.cr6.eq) goto loc_82A37AB8;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwinm r4,r9,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_82A37AA8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82A37AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38cc8
	ctx.lr = 0x82A37AB8;
	sub_82A38CC8(ctx, base);
loc_82A37AB8:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82A37AC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A37ACC"))) PPC_WEAK_FUNC(sub_82A37ACC);
PPC_FUNC_IMPL(__imp__sub_82A37ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37AD0"))) PPC_WEAK_FUNC(sub_82A37AD0);
PPC_FUNC_IMPL(__imp__sub_82A37AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82A37AD8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82a37958
	ctx.lr = 0x82A37AEC;
	sub_82A37958(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82a37b08
	if (!ctx.cr6.eq) goto loc_82A37B08;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A37B08;
	sub_82A374B8(ctx, base);
loc_82A37B08:
	// lwz r27,16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82a37c00
	if (ctx.cr6.eq) goto loc_82A37C00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x82a371e0
	ctx.lr = 0x82A37B2C;
	sub_82A371E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a37b48
	if (!ctx.cr6.eq) goto loc_82A37B48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a371e0
	ctx.lr = 0x82A37B40;
	sub_82A371E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a37bc8
	if (ctx.cr6.eq) goto loc_82A37BC8;
loc_82A37B48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82a37b5c
	if (!ctx.cr6.eq) goto loc_82A37B5C;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x82a37b68
	goto loc_82A37B68;
loc_82A37B5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A37B64;
	sub_82A37178(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82A37B68:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r29,r26,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r29,16386
	ctx.r4.u64 = ctx.r29.u64 | 16386;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A37B88;
	sub_82A38CC8(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// oris r4,r29,128
	ctx.r4.u64 = ctx.r29.u64 | 8388608;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A37BAC;
	sub_82A38CC8(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A37BC8;
	sub_82A374B8(ctx, base);
loc_82A37BC8:
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82a373b8
	ctx.lr = 0x82A37BE8;
	sub_82A373B8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a373b8
	ctx.lr = 0x82A37C00;
	sub_82A373B8(ctx, base);
loc_82A37C00:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// stw r25,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r25.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82A37C1C"))) PPC_WEAK_FUNC(sub_82A37C1C);
PPC_FUNC_IMPL(__imp__sub_82A37C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37C20"))) PPC_WEAK_FUNC(sub_82A37C20);
PPC_FUNC_IMPL(__imp__sub_82A37C20) {
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
	// bl 0x82a377b8
	ctx.lr = 0x82A37C40;
	sub_82A377B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a37c74
	if (!ctx.cr6.eq) goto loc_82A37C74;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a37c74
	if (!ctx.cr6.eq) goto loc_82A37C74;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a37c74
	if (ctx.cr6.lt) goto loc_82A37C74;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A37C74:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a37cac
	if (!ctx.cr6.gt) goto loc_82A37CAC;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a37ca8
	if (ctx.cr6.lt) goto loc_82A37CA8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A37CA8;
	sub_82A306A0(ctx, base);
loc_82A37CA8:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A37CAC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82a37ad0
	ctx.lr = 0x82A37CC8;
	sub_82A37AD0(ctx, base);
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

__attribute__((alias("__imp__sub_82A37CE0"))) PPC_WEAK_FUNC(sub_82A37CE0);
PPC_FUNC_IMPL(__imp__sub_82A37CE0) {
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
	// bl 0x82a377b8
	ctx.lr = 0x82A37D00;
	sub_82A377B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a37d3c
	if (!ctx.cr6.eq) goto loc_82A37D3C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a37d48
	if (ctx.cr6.eq) goto loc_82A37D48;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a37d3c
	if (ctx.cr6.lt) goto loc_82A37D3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37ad0
	ctx.lr = 0x82A37D38;
	sub_82A37AD0(ctx, base);
	// b 0x82a37d48
	goto loc_82A37D48;
loc_82A37D3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A37D48;
	sub_82A37C20(ctx, base);
loc_82A37D48:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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

__attribute__((alias("__imp__sub_82A37D64"))) PPC_WEAK_FUNC(sub_82A37D64);
PPC_FUNC_IMPL(__imp__sub_82A37D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37D68"))) PPC_WEAK_FUNC(sub_82A37D68);
PPC_FUNC_IMPL(__imp__sub_82A37D68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a37d9c
	if (ctx.cr6.eq) goto loc_82A37D9C;
	// bl 0x82a37ce0
	ctx.lr = 0x82A37D98;
	sub_82A37CE0(ctx, base);
	// b 0x82a37da0
	goto loc_82A37DA0;
loc_82A37D9C:
	// bl 0x82a377b8
	ctx.lr = 0x82A37DA0;
	sub_82A377B8(ctx, base);
loc_82A37DA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82a37e7c
	if (ctx.cr6.gt) goto loc_82A37E7C;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,32200
	ctx.r12.s64 = ctx.r12.s64 + 32200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82A37DDC;
	case 1:
		goto loc_82A37DDC;
	case 2:
		goto loc_82A37DDC;
	case 3:
		goto loc_82A37E68;
	case 4:
		goto loc_82A37DDC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,32220(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32220);
	// lwz r21,32220(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32220);
	// lwz r21,32220(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32220);
	// lwz r21,32360(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32360);
	// lwz r21,32220(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32220);
loc_82A37DDC:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bgt cr6,0x82a37e7c
	if (ctx.cr6.gt) goto loc_82A37E7C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a37e10
	if (!ctx.cr6.eq) goto loc_82A37E10;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82a37e48
	goto loc_82A37E48;
loc_82A37E10:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82a37e30
	if (!ctx.cr6.eq) goto loc_82A37E30;
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82a37e48
	goto loc_82A37E48;
loc_82A37E30:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_82A37E48:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37560
	ctx.lr = 0x82A37E54;
	sub_82A37560(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// ori r3,r3,256
	ctx.r3.u64 = ctx.r3.u64 | 256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82a37e88
	goto loc_82A37E88;
loc_82A37E68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bgt cr6,0x82a37e7c
	if (ctx.cr6.gt) goto loc_82A37E7C;
	// ori r3,r11,256
	ctx.r3.u64 = ctx.r11.u64 | 256;
	// b 0x82a37e88
	goto loc_82A37E88;
loc_82A37E7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37ce0
	ctx.lr = 0x82A37E88;
	sub_82A37CE0(ctx, base);
loc_82A37E88:
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

__attribute__((alias("__imp__sub_82A37EA0"))) PPC_WEAK_FUNC(sub_82A37EA0);
PPC_FUNC_IMPL(__imp__sub_82A37EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A37EA8;
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
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82a37fd0
	if (ctx.cr6.gt) goto loc_82A37FD0;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// addi r12,r12,32480
	ctx.r12.s64 = ctx.r12.s64 + 32480;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A37EF0;
	case 1:
		goto loc_82A37F3C;
	case 2:
		goto loc_82A37F68;
	case 3:
		goto loc_82A37F94;
	default:
		__builtin_unreachable();
	}
	// lwz r21,32496(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32496);
	// lwz r21,32572(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32572);
	// lwz r21,32616(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32616);
	// lwz r21,32660(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32660);
loc_82A37EF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a37f24
	if (!ctx.cr6.eq) goto loc_82A37F24;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a37f24
	if (!ctx.cr6.eq) goto loc_82A37F24;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a37f24
	if (ctx.cr6.lt) goto loc_82A37F24;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A37F24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37ad0
	ctx.lr = 0x82A37F34;
	sub_82A37AD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A37F3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37ce0
	ctx.lr = 0x82A37F48;
	sub_82A37CE0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r9,r11,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82a37fc8
	goto loc_82A37FC8;
loc_82A37F68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37ce0
	ctx.lr = 0x82A37F74;
	sub_82A37CE0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,7
	ctx.r4.s64 = 7;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82a37fc8
	goto loc_82A37FC8;
loc_82A37F94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A37FA0;
	sub_82A37D68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwinm r9,r11,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// or r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 | ctx.r3.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
loc_82A37FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38cc8
	ctx.lr = 0x82A37FD0;
	sub_82A38CC8(ctx, base);
loc_82A37FD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a38004
	if (!ctx.cr6.eq) goto loc_82A38004;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a38004
	if (!ctx.cr6.eq) goto loc_82A38004;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a38004
	if (ctx.cr6.lt) goto loc_82A38004;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A38004:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3800C"))) PPC_WEAK_FUNC(sub_82A3800C);
PPC_FUNC_IMPL(__imp__sub_82A3800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38010"))) PPC_WEAK_FUNC(sub_82A38010);
PPC_FUNC_IMPL(__imp__sub_82A38010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A38018;
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
	// bl 0x82a37ce0
	ctx.lr = 0x82A3802C;
	sub_82A37CE0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a38060
	if (!ctx.cr6.eq) goto loc_82A38060;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a38060
	if (!ctx.cr6.eq) goto loc_82A38060;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a38060
	if (ctx.cr6.lt) goto loc_82A38060;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A38060:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a38098
	if (!ctx.cr6.gt) goto loc_82A38098;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a38094
	if (ctx.cr6.lt) goto loc_82A38094;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A38094;
	sub_82A306A0(ctx, base);
loc_82A38094:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A38098:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82a37d68
	ctx.lr = 0x82A380B0;
	sub_82A37D68(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r8,r10,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// or r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 | ctx.r30.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x82a38cc8
	ctx.lr = 0x82A380DC;
	sub_82A38CC8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x82a38110
	if (!ctx.cr6.eq) goto loc_82A38110;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a38110
	if (!ctx.cr6.eq) goto loc_82A38110;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a38110
	if (ctx.cr6.lt) goto loc_82A38110;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A38110:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A38124"))) PPC_WEAK_FUNC(sub_82A38124);
PPC_FUNC_IMPL(__imp__sub_82A38124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38128"))) PPC_WEAK_FUNC(sub_82A38128);
PPC_FUNC_IMPL(__imp__sub_82A38128) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82a3816c
	if (ctx.cr6.lt) goto loc_82A3816C;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r7,r8,-27020
	ctx.r7.s64 = ctx.r8.s64 + -27020;
	// clrlwi r6,r9,26
	ctx.r6.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r4,r5,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a3816c
	if (ctx.cr6.eq) goto loc_82A3816C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A3816C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,18,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FC0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwimi r10,r7,6,18,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0x3FC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC03F);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A38188"))) PPC_WEAK_FUNC(sub_82A38188);
PPC_FUNC_IMPL(__imp__sub_82A38188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A38190;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x82a381f8
	if (!ctx.cr6.eq) goto loc_82A381F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r6,19
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 19, ctx.xer);
	// bne cr6,0x82a381f8
	if (!ctx.cr6.eq) goto loc_82A381F8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,26
	ctx.r9.s64 = 26;
	// cntlzw r8,r29
	ctx.r8.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rlwinm r5,r8,9,17,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x4000;
	// rlwimi r9,r11,15,17,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x7FC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFF803F);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// or r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 | ctx.r5.u64;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x82a382a4
	goto loc_82A382A4;
loc_82A381F8:
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x82a38260
	if (ctx.cr6.eq) goto loc_82A38260;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a38238
	if (!ctx.cr6.gt) goto loc_82A38238;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a38234
	if (ctx.cr6.lt) goto loc_82A38234;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A38234;
	sub_82A306A0(ctx, base);
loc_82A38234:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A38238:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82a37958
	ctx.lr = 0x82A38254;
	sub_82A37958(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a38288
	if (!ctx.cr6.eq) goto loc_82A38288;
loc_82A38260:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a38288
	if (!ctx.cr6.eq) goto loc_82A38288;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a38288
	if (ctx.cr6.lt) goto loc_82A38288;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A38288:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,16347
	ctx.r4.s64 = 16347;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// or r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 | ctx.r29.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r8,14,0,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0xFFFFC000) | (ctx.r4.u64 & 0xFFFFFFFF00003FFF);
loc_82A382A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38cc8
	ctx.lr = 0x82A382AC;
	sub_82A38CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A382B4;
	sub_82A37178(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A382BC"))) PPC_WEAK_FUNC(sub_82A382BC);
PPC_FUNC_IMPL(__imp__sub_82A382BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A382C0"))) PPC_WEAK_FUNC(sub_82A382C0);
PPC_FUNC_IMPL(__imp__sub_82A382C0) {
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
	// bl 0x82a377b8
	ctx.lr = 0x82A382E0;
	sub_82A377B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82a38354
	if (ctx.cr6.gt) goto loc_82A38354;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// addi r12,r12,-31992
	ctx.r12.s64 = ctx.r12.s64 + -31992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A3832C;
	case 1:
		goto loc_82A38334;
	case 2:
		goto loc_82A3832C;
	case 3:
		goto loc_82A3832C;
	case 4:
		goto loc_82A38354;
	case 5:
		goto loc_82A38354;
	case 6:
		goto loc_82A38354;
	case 7:
		goto loc_82A38354;
	case 8:
		goto loc_82A38340;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-31956(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31956);
	// lwz r21,-31948(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31948);
	// lwz r21,-31956(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31956);
	// lwz r21,-31956(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31956);
	// lwz r21,-31916(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31916);
	// lwz r21,-31916(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31916);
	// lwz r21,-31916(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31916);
	// lwz r21,-31916(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31916);
	// lwz r21,-31936(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31936);
loc_82A3832C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a38364
	goto loc_82A38364;
loc_82A38334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A3833C;
	sub_82A37178(ctx, base);
	// b 0x82a38364
	goto loc_82A38364;
loc_82A38340:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38128
	ctx.lr = 0x82A3834C;
	sub_82A38128(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82a38364
	goto loc_82A38364;
loc_82A38354:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38188
	ctx.lr = 0x82A38364;
	sub_82A38188(ctx, base);
loc_82A38364:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A38374;
	sub_82A374B8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a374b8
	ctx.lr = 0x82A3838C;
	sub_82A374B8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A383AC"))) PPC_WEAK_FUNC(sub_82A383AC);
PPC_FUNC_IMPL(__imp__sub_82A383AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A383B0"))) PPC_WEAK_FUNC(sub_82A383B0);
PPC_FUNC_IMPL(__imp__sub_82A383B0) {
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
	// bl 0x82a377b8
	ctx.lr = 0x82A383D0;
	sub_82A377B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82a3843c
	if (ctx.cr6.gt) goto loc_82A3843C;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// addi r12,r12,-31752
	ctx.r12.s64 = ctx.r12.s64 + -31752;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A38420;
	case 1:
		goto loc_82A38428;
	case 2:
		goto loc_82A38420;
	case 3:
		goto loc_82A3843C;
	case 4:
		goto loc_82A3843C;
	case 5:
		goto loc_82A3843C;
	case 6:
		goto loc_82A3843C;
	case 7:
		goto loc_82A3843C;
	case 8:
		goto loc_82A3843C;
	case 9:
		goto loc_82A38434;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-31712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31712);
	// lwz r21,-31704(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31704);
	// lwz r21,-31712(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31712);
	// lwz r21,-31684(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31684);
	// lwz r21,-31684(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31684);
	// lwz r21,-31684(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31684);
	// lwz r21,-31684(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31684);
	// lwz r21,-31684(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31684);
	// lwz r21,-31684(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31684);
	// lwz r21,-31692(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31692);
loc_82A38420:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a3844c
	goto loc_82A3844C;
loc_82A38428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A38430;
	sub_82A37178(ctx, base);
	// b 0x82a3844c
	goto loc_82A3844C;
loc_82A38434:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82a3844c
	goto loc_82A3844C;
loc_82A3843C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38188
	ctx.lr = 0x82A3844C;
	sub_82A38188(ctx, base);
loc_82A3844C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a374b8
	ctx.lr = 0x82A3845C;
	sub_82A374B8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a374b8
	ctx.lr = 0x82A38474;
	sub_82A374B8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A38494"))) PPC_WEAK_FUNC(sub_82A38494);
PPC_FUNC_IMPL(__imp__sub_82A38494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38498"))) PPC_WEAK_FUNC(sub_82A38498);
PPC_FUNC_IMPL(__imp__sub_82A38498) {
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
	// bl 0x82a377b8
	ctx.lr = 0x82A384B8;
	sub_82A377B8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82a385f0
	if (ctx.cr6.gt) goto loc_82A385F0;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// addi r12,r12,-31520
	ctx.r12.s64 = ctx.r12.s64 + -31520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A38510;
	case 1:
		goto loc_82A3851C;
	case 2:
		goto loc_82A38510;
	case 3:
		goto loc_82A3851C;
	case 4:
		goto loc_82A3851C;
	case 5:
		goto loc_82A385F0;
	case 6:
		goto loc_82A385F0;
	case 7:
		goto loc_82A385F0;
	case 8:
		goto loc_82A385F0;
	case 9:
		goto loc_82A38528;
	case 10:
		goto loc_82A38538;
	case 11:
		goto loc_82A38538;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-31472(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31472);
	// lwz r21,-31460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31460);
	// lwz r21,-31472(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31472);
	// lwz r21,-31460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31460);
	// lwz r21,-31460(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31460);
	// lwz r21,-31248(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31248);
	// lwz r21,-31248(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31248);
	// lwz r21,-31248(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31248);
	// lwz r21,-31248(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31248);
	// lwz r21,-31448(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31448);
	// lwz r21,-31432(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31432);
	// lwz r21,-31432(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31432);
loc_82A38510:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a385f0
	goto loc_82A385F0;
loc_82A3851C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a385f0
	goto loc_82A385F0;
loc_82A38528:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38128
	ctx.lr = 0x82A38534;
	sub_82A38128(ctx, base);
	// b 0x82a385f0
	goto loc_82A385F0;
loc_82A38538:
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x82a385a0
	if (ctx.cr6.eq) goto loc_82A385A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a38578
	if (!ctx.cr6.gt) goto loc_82A38578;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// blt cr6,0x82a38574
	if (ctx.cr6.lt) goto loc_82A38574;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a306a0
	ctx.lr = 0x82A38574;
	sub_82A306A0(ctx, base);
loc_82A38574:
	// stb r11,75(r10)
	PPC_STORE_U8(ctx.r10.u32 + 75, ctx.r11.u8);
loc_82A38578:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82a37958
	ctx.lr = 0x82A38594;
	sub_82A37958(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a385c8
	if (!ctx.cr6.eq) goto loc_82A385C8;
loc_82A385A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a385c8
	if (!ctx.cr6.eq) goto loc_82A385C8;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a385c8
	if (ctx.cr6.lt) goto loc_82A385C8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A385C8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r4,r11,23,0,8
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 23) & 0xFF800000) | (ctx.r4.u64 & 0xFFFFFFFF007FFFFF);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A385E4;
	sub_82A38CC8(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82A385F0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82a37310
	ctx.lr = 0x82A3860C;
	sub_82A37310(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a37310
	ctx.lr = 0x82A38614;
	sub_82A37310(ctx, base);
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

__attribute__((alias("__imp__sub_82A3862C"))) PPC_WEAK_FUNC(sub_82A3862C);
PPC_FUNC_IMPL(__imp__sub_82A3862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38630"))) PPC_WEAK_FUNC(sub_82A38630);
PPC_FUNC_IMPL(__imp__sub_82A38630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a38778
	if (!ctx.cr6.eq) goto loc_82A38778;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a38778
	if (!ctx.cr6.eq) goto loc_82A38778;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a38778
	if (!ctx.cr6.eq) goto loc_82A38778;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a38778
	if (!ctx.cr6.eq) goto loc_82A38778;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a38778
	if (!ctx.cr6.eq) goto loc_82A38778;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a38778
	if (!ctx.cr6.eq) goto loc_82A38778;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82a38764
	if (ctx.cr6.gt) goto loc_82A38764;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// addi r12,r12,-31040
	ctx.r12.s64 = ctx.r12.s64 + -31040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A386E4;
	case 1:
		goto loc_82A386FC;
	case 2:
		goto loc_82A38704;
	case 3:
		goto loc_82A3870C;
	case 4:
		goto loc_82A38724;
	case 5:
		goto loc_82A38748;
	case 6:
		goto loc_82A3875C;
	case 7:
		goto loc_82A38764;
	case 8:
		goto loc_82A38778;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-31004(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31004);
	// lwz r21,-30980(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30980);
	// lwz r21,-30972(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30972);
	// lwz r21,-30964(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30964);
	// lwz r21,-30940(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30940);
	// lwz r21,-30904(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30904);
	// lwz r21,-30884(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30884);
	// lwz r21,-30876(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30876);
	// lwz r21,-30856(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30856);
loc_82A386E4:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
loc_82A386E8:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82a38778
	if (!ctx.cr6.eq) goto loc_82A38778;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a3877c
	goto loc_82A3877C;
loc_82A386FC:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// b 0x82a386e8
	goto loc_82A386E8;
loc_82A38704:
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// b 0x82a386e8
	goto loc_82A386E8;
loc_82A3870C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82a38778
	if (ctx.cr6.eq) goto loc_82A38778;
	// fdivs f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// b 0x82a386e8
	goto loc_82A386E8;
loc_82A38724:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82a38778
	if (ctx.cr6.eq) goto loc_82A38778;
	// fdivs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82A3873C;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fnmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// b 0x82a386e8
	goto loc_82A386E8;
loc_82A38748:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821fe378
	ctx.lr = 0x82A38754;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82a386e8
	goto loc_82A386E8;
loc_82A3875C:
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// b 0x82a386e8
	goto loc_82A386E8;
loc_82A38764:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82a3877c
	goto loc_82A3877C;
loc_82A38778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A3877C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A38798"))) PPC_WEAK_FUNC(sub_82A38798);
PPC_FUNC_IMPL(__imp__sub_82A38798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A387A0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a38630
	ctx.lr = 0x82A387C4;
	sub_82A38630(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a388e4
	if (!ctx.cr6.eq) goto loc_82A388E4;
	// cmpwi cr6,r27,18
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 18, ctx.xer);
	// beq cr6,0x82a387f0
	if (ctx.cr6.eq) goto loc_82A387F0;
	// cmpwi cr6,r27,20
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 20, ctx.xer);
	// beq cr6,0x82a387f0
	if (ctx.cr6.eq) goto loc_82A387F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A387E8;
	sub_82A37D68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82a387f4
	goto loc_82A387F4;
loc_82A387F0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A387F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A38800;
	sub_82A37D68(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82a38850
	if (!ctx.cr6.gt) goto loc_82A38850;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a3883c
	if (!ctx.cr6.eq) goto loc_82A3883C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a3883c
	if (!ctx.cr6.eq) goto loc_82A3883C;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a3883c
	if (ctx.cr6.lt) goto loc_82A3883C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A3883C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a388b8
	if (!ctx.cr6.eq) goto loc_82A388B8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82a38894
	goto loc_82A38894;
loc_82A38850:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a38884
	if (!ctx.cr6.eq) goto loc_82A38884;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a38884
	if (!ctx.cr6.eq) goto loc_82A38884;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a38884
	if (ctx.cr6.lt) goto loc_82A38884;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A38884:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a388b8
	if (!ctx.cr6.eq) goto loc_82A388B8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82A38894:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a388b8
	if (!ctx.cr6.eq) goto loc_82A388B8;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a388b8
	if (ctx.cr6.lt) goto loc_82A388B8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A388B8:
	// rlwinm r11,r3,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// rlwinm r8,r9,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// or r4,r8,r27
	ctx.r4.u64 = ctx.r8.u64 | ctx.r27.u64;
	// bl 0x82a38cc8
	ctx.lr = 0x82A388D8;
	sub_82A38CC8(ctx, base);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
loc_82A388E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82A388EC"))) PPC_WEAK_FUNC(sub_82A388EC);
PPC_FUNC_IMPL(__imp__sub_82A388EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A388F0"))) PPC_WEAK_FUNC(sub_82A388F0);
PPC_FUNC_IMPL(__imp__sub_82A388F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A388F8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A38918;
	sub_82A37D68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37d68
	ctx.lr = 0x82A38928;
	sub_82A37D68(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a38960
	if (!ctx.cr6.eq) goto loc_82A38960;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a38960
	if (!ctx.cr6.eq) goto loc_82A38960;
	// lbz r9,50(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a38960
	if (ctx.cr6.lt) goto loc_82A38960;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A38960:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a38994
	if (!ctx.cr6.eq) goto loc_82A38994;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a38994
	if (!ctx.cr6.eq) goto loc_82A38994;
	// lbz r9,50(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a38994
	if (ctx.cr6.lt) goto loc_82A38994;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A38994:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a389b4
	if (!ctx.cr6.eq) goto loc_82A389B4;
	// cmpwi cr6,r26,23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 23, ctx.xer);
	// beq cr6,0x82a389b4
	if (ctx.cr6.eq) goto loc_82A389B4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A389B4:
	// rlwinm r11,r28,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// or r6,r7,r27
	ctx.r6.u64 = ctx.r7.u64 | ctx.r27.u64;
	// rlwinm r4,r6,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// or r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 | ctx.r26.u64;
	// bl 0x82a38cc8
	ctx.lr = 0x82A389DC;
	sub_82A38CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37178
	ctx.lr = 0x82A389E4;
	sub_82A37178(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A389F8"))) PPC_WEAK_FUNC(sub_82A389F8);
PPC_FUNC_IMPL(__imp__sub_82A389F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A38A00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bgt cr6,0x82a38cc0
	if (ctx.cr6.gt) goto loc_82A38CC0;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// addi r12,r12,-30160
	ctx.r12.s64 = ctx.r12.s64 + -30160;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82A38BCC;
	case 1:
		goto loc_82A38BE8;
	case 2:
		goto loc_82A38C04;
	case 3:
		goto loc_82A38C20;
	case 4:
		goto loc_82A38C3C;
	case 5:
		goto loc_82A38C58;
	case 6:
		goto loc_82A38AEC;
	case 7:
		goto loc_82A38C80;
	case 8:
		goto loc_82A38C74;
	case 9:
		goto loc_82A38C88;
	case 10:
		goto loc_82A38C94;
	case 11:
		goto loc_82A38CA0;
	case 12:
		goto loc_82A38CA8;
	case 13:
		goto loc_82A38A6C;
	case 14:
		goto loc_82A38AAC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-29748(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29748);
	// lwz r21,-29720(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29720);
	// lwz r21,-29692(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29692);
	// lwz r21,-29664(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29664);
	// lwz r21,-29636(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29636);
	// lwz r21,-29608(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29608);
	// lwz r21,-29972(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29972);
	// lwz r21,-29568(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29568);
	// lwz r21,-29580(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29580);
	// lwz r21,-29560(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29560);
	// lwz r21,-29548(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29548);
	// lwz r21,-29536(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29536);
	// lwz r21,-29528(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29528);
	// lwz r21,-30100(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30100);
	// lwz r21,-30036(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30036);
loc_82A38A6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a377b8
	ctx.lr = 0x82A38A78;
	sub_82A377B8(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82a374b8
	ctx.lr = 0x82A38A88;
	sub_82A374B8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A38A90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bdnz 0x82a38a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A38A90;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38AAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a377b8
	ctx.lr = 0x82A38AB8;
	sub_82A377B8(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a374b8
	ctx.lr = 0x82A38AC8;
	sub_82A374B8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A38AD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bdnz 0x82a38ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A38AD0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38AEC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a38b0c
	if (ctx.cr6.eq) goto loc_82A38B0C;
	// bl 0x82a37ce0
	ctx.lr = 0x82A38B08;
	sub_82A37CE0(ctx, base);
	// b 0x82a38b10
	goto loc_82A38B10;
loc_82A38B0C:
	// bl 0x82a377b8
	ctx.lr = 0x82A38B10;
	sub_82A377B8(ctx, base);
loc_82A38B10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82a38ba4
	if (!ctx.cr6.eq) goto loc_82A38BA4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// cmpwi cr6,r6,21
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 21, ctx.xer);
	// bne cr6,0x82a38ba4
	if (!ctx.cr6.eq) goto loc_82A38BA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82a38b70
	if (!ctx.cr6.eq) goto loc_82A38B70;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a38b70
	if (!ctx.cr6.eq) goto loc_82A38B70;
	// lbz r9,50(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a38b70
	if (ctx.cr6.lt) goto loc_82A38B70;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_82A38B70:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,11
	ctx.r9.s64 = 11;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r8,23,0,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 23) & 0xFF800000) | (ctx.r7.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38BA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37c20
	ctx.lr = 0x82A38BB0;
	sub_82A37C20(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A38BC4;
	sub_82A38798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38BCC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A38BE0;
	sub_82A38798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38BE8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A38BFC;
	sub_82A38798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38C04:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A38C18;
	sub_82A38798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38C20:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A38C34;
	sub_82A38798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38C3C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A38C50;
	sub_82A38798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38C58:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38798
	ctx.lr = 0x82A38C6C;
	sub_82A38798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38C74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82a38cb0
	goto loc_82A38CB0;
loc_82A38C80:
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82a38cac
	goto loc_82A38CAC;
loc_82A38C88:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82a38cb0
	goto loc_82A38CB0;
loc_82A38C94:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82a38cb0
	goto loc_82A38CB0;
loc_82A38CA0:
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82a38cac
	goto loc_82A38CAC;
loc_82A38CA8:
	// li r4,25
	ctx.r4.s64 = 25;
loc_82A38CAC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82A38CB0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a388f0
	ctx.lr = 0x82A38CC0;
	sub_82A388F0(ctx, base);
loc_82A38CC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A38CC8"))) PPC_WEAK_FUNC(sub_82A38CC8);
PPC_FUNC_IMPL(__imp__sub_82A38CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A38CD0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82a373b8
	ctx.lr = 0x82A38CF8;
	sub_82A373B8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r29,r11,14224
	ctx.r29.s64 = ctx.r11.s64 + 14224;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82a38d40
	if (!ctx.cr6.gt) goto loc_82A38D40;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82a2c600
	ctx.lr = 0x82A38D3C;
	sub_82A2C600(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_82A38D40:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a38d88
	if (!ctx.cr6.gt) goto loc_82A38D88;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82a2c600
	ctx.lr = 0x82A38D84;
	sub_82A2C600(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_82A38D88:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82A38DAC"))) PPC_WEAK_FUNC(sub_82A38DAC);
PPC_FUNC_IMPL(__imp__sub_82A38DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38DB0"))) PPC_WEAK_FUNC(sub_82A38DB0);
PPC_FUNC_IMPL(__imp__sub_82A38DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A38DB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// li r10,50
	ctx.r10.s64 = 50;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82a38de0
	if (!ctx.cr6.eq) goto loc_82A38DE0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82A38DE0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r29,511
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 511, ctx.xer);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bgt cr6,0x82a38e20
	if (ctx.cr6.gt) goto loc_82A38E20;
	// rlwinm r11,r6,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// rlwimi r4,r7,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x82a38cc8
	ctx.lr = 0x82A38E10;
	sub_82A38CC8(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A38E20:
	// rlwinm r11,r6,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFE0000;
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwimi r4,r9,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x82a38cc8
	ctx.lr = 0x82A38E30;
	sub_82A38CC8(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x82a38cc8
	ctx.lr = 0x82A38E44;
	sub_82A38CC8(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A38E54"))) PPC_WEAK_FUNC(sub_82A38E54);
PPC_FUNC_IMPL(__imp__sub_82A38E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38E58"))) PPC_WEAK_FUNC(sub_82A38E58);
PPC_FUNC_IMPL(__imp__sub_82A38E58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,28344
	ctx.r7.s64 = ctx.r10.s64 + 28344;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82A38E6C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a38e6c
	if (!ctx.cr0.eq) goto loc_82A38E6C;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82A38E90:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwcx. r5,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a38e90
	if (!ctx.cr0.eq) goto loc_82A38E90;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82A38EB4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a38eb4
	if (!ctx.cr0.eq) goto loc_82A38EB4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82A38ED4:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwcx. r5,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a38ed4
	if (!ctx.cr0.eq) goto loc_82A38ED4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A38EF4"))) PPC_WEAK_FUNC(sub_82A38EF4);
PPC_FUNC_IMPL(__imp__sub_82A38EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38EF8"))) PPC_WEAK_FUNC(sub_82A38EF8);
PPC_FUNC_IMPL(__imp__sub_82A38EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A38F00;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82a38f9c
	if (ctx.cr6.eq) goto loc_82A38F9C;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r10,r11,-2384
	ctx.r10.s64 = ctx.r11.s64 + -2384;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222abd0
	ctx.lr = 0x82A38F2C;
	sub_8222ABD0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// bl 0x8222ac38
	ctx.lr = 0x82A38F40;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a38f4c
	if (ctx.cr6.eq) goto loc_82A38F4C;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82A38F4C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A38F5C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a38f6c
	if (ctx.cr6.eq) goto loc_82A38F6C;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82A38F6C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A38F7C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a38f88
	if (ctx.cr6.eq) goto loc_82A38F88;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_82A38F88:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
loc_82A38F9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A38FA4"))) PPC_WEAK_FUNC(sub_82A38FA4);
PPC_FUNC_IMPL(__imp__sub_82A38FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38FA8"))) PPC_WEAK_FUNC(sub_82A38FA8);
PPC_FUNC_IMPL(__imp__sub_82A38FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a492b0
	ctx.lr = 0x82A38FB8;
	sub_82A492B0(ctx, base);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-13807(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13807, ctx.r11.u8);
	// bl 0x82a493a8
	ctx.lr = 0x82A38FC8;
	sub_82A493A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A38FD8"))) PPC_WEAK_FUNC(sub_82A38FD8);
PPC_FUNC_IMPL(__imp__sub_82A38FD8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a39050
	if (!ctx.cr6.gt) goto loc_82A39050;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82a39060
	if (ctx.cr6.eq) goto loc_82A39060;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2384
	ctx.r9.s64 = ctx.r11.s64 + -2384;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222abd0
	ctx.lr = 0x82A3901C;
	sub_8222ABD0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3902C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39038
	if (ctx.cr6.eq) goto loc_82A39038;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82A39038:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// b 0x82a39060
	goto loc_82A39060;
loc_82A39050:
	// bl 0x82a492b0
	ctx.lr = 0x82A39054;
	sub_82A492B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a48fc8
	ctx.lr = 0x82A3905C;
	sub_82A48FC8(ctx, base);
	// bl 0x82a493a8
	ctx.lr = 0x82A39060;
	sub_82A493A8(ctx, base);
loc_82A39060:
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

__attribute__((alias("__imp__sub_82A39078"))) PPC_WEAK_FUNC(sub_82A39078);
PPC_FUNC_IMPL(__imp__sub_82A39078) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a390ec
	if (!ctx.cr6.gt) goto loc_82A390EC;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2384
	ctx.r9.s64 = ctx.r11.s64 + -2384;
	// li r4,19
	ctx.r4.s64 = 19;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222abd0
	ctx.lr = 0x82A390B4;
	sub_8222ABD0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A390C4;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a390d4
	if (ctx.cr6.eq) goto loc_82A390D4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A390D4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// b 0x82a390fc
	goto loc_82A390FC;
loc_82A390EC:
	// bl 0x82a492b0
	ctx.lr = 0x82A390F0;
	sub_82A492B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a50e40
	ctx.lr = 0x82A390F8;
	sub_82A50E40(ctx, base);
	// bl 0x82a493a8
	ctx.lr = 0x82A390FC;
	sub_82A493A8(ctx, base);
loc_82A390FC:
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

__attribute__((alias("__imp__sub_82A39114"))) PPC_WEAK_FUNC(sub_82A39114);
PPC_FUNC_IMPL(__imp__sub_82A39114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39118"))) PPC_WEAK_FUNC(sub_82A39118);
PPC_FUNC_IMPL(__imp__sub_82A39118) {
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
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bgt cr6,0x82a39190
	if (ctx.cr6.gt) goto loc_82A39190;
	// bl 0x82a492b0
	ctx.lr = 0x82A39138;
	sub_82A492B0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82a3918c
	if (ctx.cr6.eq) goto loc_82A3918C;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r8,r11,-9336
	ctx.r8.s64 = ctx.r11.s64 + -9336;
	// li r10,112
	ctx.r10.s64 = 112;
	// stw r31,28448(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28448, ctx.r31.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r11,r6,r10
	ctx.r11.s32 = ctx.r6.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a3918c
	if (ctx.cr0.eq) goto loc_82A3918C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82a39178
	goto loc_82A39178;
loc_82A39174:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82A39178:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// stb r7,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r7.u8);
	// bne 0x82a39174
	if (!ctx.cr0.eq) goto loc_82A39174;
loc_82A3918C:
	// bl 0x82a493a8
	ctx.lr = 0x82A39190;
	sub_82A493A8(ctx, base);
loc_82A39190:
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

__attribute__((alias("__imp__sub_82A391A4"))) PPC_WEAK_FUNC(sub_82A391A4);
PPC_FUNC_IMPL(__imp__sub_82A391A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A391A8"))) PPC_WEAK_FUNC(sub_82A391A8);
PPC_FUNC_IMPL(__imp__sub_82A391A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a492b0
	ctx.lr = 0x82A391B8;
	sub_82A492B0(ctx, base);
	// bl 0x82b7e3a8
	ctx.lr = 0x82A391BC;
	sub_82B7E3A8(ctx, base);
	// bl 0x82a493a8
	ctx.lr = 0x82A391C0;
	sub_82A493A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A391D0"))) PPC_WEAK_FUNC(sub_82A391D0);
PPC_FUNC_IMPL(__imp__sub_82A391D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A391D8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-2384
	ctx.r30.s64 = ctx.r11.s64 + -2384;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r28,r11,-2544
	ctx.r28.s64 = ctx.r11.s64 + -2544;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lbz r27,56(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82a39210
	if (!ctx.cr6.eq) goto loc_82A39210;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f1,r11,r28
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x821a5840
	ctx.lr = 0x82A39210;
	sub_821A5840(ctx, base);
loc_82A39210:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a48cd8
	ctx.lr = 0x82A3921C;
	sub_82A48CD8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwzx r26,r29,r30
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222abd0
	ctx.lr = 0x82A3922C;
	sub_8222ABD0(ctx, base);
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// stw r8,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r8.u32);
	// stb r11,56(r26)
	PPC_STORE_U8(ctx.r26.u32 + 56, ctx.r11.u8);
	// bl 0x821a5a30
	ctx.lr = 0x82A39250;
	sub_821A5A30(ctx, base);
loc_82A39250:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b49b50
	ctx.lr = 0x82A39260;
	sub_82B49B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a39250
	if (ctx.cr6.eq) goto loc_82A39250;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a39280
	if (ctx.cr6.eq) goto loc_82A39280;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lfdx f1,r11,r28
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x821a5840
	ctx.lr = 0x82A39280;
	sub_821A5840(ctx, base);
loc_82A39280:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82cbbf60
	ctx.lr = 0x82A39288;
	sub_82CBBF60(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A39290"))) PPC_WEAK_FUNC(sub_82A39290);
PPC_FUNC_IMPL(__imp__sub_82A39290) {
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
	// bl 0x82a492b0
	ctx.lr = 0x82A392B0;
	sub_82A492B0(ctx, base);
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r7,r11,12696
	ctx.r7.s64 = ctx.r11.s64 + 12696;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-6032
	ctx.r5.s64 = ctx.r10.s64 + -6032;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83ed0
	ctx.lr = 0x82A392D0;
	sub_82B83ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a493a8
	ctx.lr = 0x82A392D8;
	sub_82A493A8(ctx, base);
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

__attribute__((alias("__imp__sub_82A392F4"))) PPC_WEAK_FUNC(sub_82A392F4);
PPC_FUNC_IMPL(__imp__sub_82A392F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A392F8"))) PPC_WEAK_FUNC(sub_82A392F8);
PPC_FUNC_IMPL(__imp__sub_82A392F8) {
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
	// bl 0x82a492b0
	ctx.lr = 0x82A39310;
	sub_82A492B0(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-2776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2776);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A3932C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-2768(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2768);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A39348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-2760(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2760);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A39364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-2752(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2752);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A39380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stw r11,-2356(r6)
	PPC_STORE_U32(ctx.r6.u32 + -2356, ctx.r11.u32);
	// bl 0x82a493a8
	ctx.lr = 0x82A39390;
	sub_82A493A8(ctx, base);
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

__attribute__((alias("__imp__sub_82A393A4"))) PPC_WEAK_FUNC(sub_82A393A4);
PPC_FUNC_IMPL(__imp__sub_82A393A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A393A8"))) PPC_WEAK_FUNC(sub_82A393A8);
PPC_FUNC_IMPL(__imp__sub_82A393A8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,14288
	ctx.r3.s64 = ctx.r11.s64 + 14288;
	// bl 0x82b38798
	ctx.lr = 0x82A393C8;
	sub_82B38798(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x82cbbe20
	ctx.lr = 0x82A393D4;
	sub_82CBBE20(ctx, base);
	// bl 0x82b68fc8
	ctx.lr = 0x82A393D8;
	sub_82B68FC8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r31,r11,-20472
	ctx.r31.s64 = ctx.r11.s64 + -20472;
	// lfs f31,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f31.f64 = double(temp.f32);
loc_82A393E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821e27c8
	ctx.lr = 0x82A393F4;
	sub_821E27C8(ctx, base);
	// bl 0x82b69488
	ctx.lr = 0x82A393F8;
	sub_82B69488(ctx, base);
	// b 0x82a393e8
	goto loc_82A393E8;
}

__attribute__((alias("__imp__sub_82A393FC"))) PPC_WEAK_FUNC(sub_82A393FC);
PPC_FUNC_IMPL(__imp__sub_82A393FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39400"))) PPC_WEAK_FUNC(sub_82A39400);
PPC_FUNC_IMPL(__imp__sub_82A39400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82b68f60
	ctx.lr = 0x82A39410;
	sub_82B68F60(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r11,-27736
	ctx.r3.s64 = ctx.r11.s64 + -27736;
	// bl 0x82ca34b0
	ctx.lr = 0x82A39424;
	sub_82CA34B0(ctx, base);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r3,-2500(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2500);
	// bl 0x82cbbcf0
	ctx.lr = 0x82A39430;
	sub_82CBBCF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A39440"))) PPC_WEAK_FUNC(sub_82A39440);
PPC_FUNC_IMPL(__imp__sub_82A39440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A39448;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a39530
	if (ctx.cr6.eq) goto loc_82A39530;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	// bl 0x823b0c60
	ctx.lr = 0x82A39488;
	sub_823B0C60(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a39540
	ctx.lr = 0x82A394A0;
	sub_82A39540(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r7,33(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a39524
	if (!ctx.cr6.eq) goto loc_82A39524;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a394e4
	if (!ctx.cr6.eq) goto loc_82A394E4;
loc_82A394D0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a394d0
	if (ctx.cr6.eq) goto loc_82A394D0;
loc_82A394E4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a39514
	if (!ctx.cr6.eq) goto loc_82A39514;
loc_82A39500:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a39500
	if (ctx.cr6.eq) goto loc_82A39500;
loc_82A39514:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A39524:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
loc_82A39530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3953C"))) PPC_WEAK_FUNC(sub_82A3953C);
PPC_FUNC_IMPL(__imp__sub_82A3953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39540"))) PPC_WEAK_FUNC(sub_82A39540);
PPC_FUNC_IMPL(__imp__sub_82A39540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82A39548;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a395ec
	if (!ctx.cr6.eq) goto loc_82A395EC;
	// li r3,40
	ctx.r3.s64 = 40;
	// lbz r26,32(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// rotlwi r29,r24,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// bl 0x8221f388
	ctx.lr = 0x82A3957C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a395b4
	if (ctx.cr6.eq) goto loc_82A395B4;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x821f0108
	ctx.lr = 0x82A395A0;
	sub_821F0108(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfd f0,8(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// stfd f0,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// stb r26,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r26.u8);
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
loc_82A395B4:
	// lbz r11,33(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a395c4
	if (ctx.cr6.eq) goto loc_82A395C4;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_82A395C4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a39540
	ctx.lr = 0x82A395D4;
	sub_82A39540(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a39540
	ctx.lr = 0x82A395E8;
	sub_82A39540(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82A395EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82A395F8"))) PPC_WEAK_FUNC(sub_82A395F8);
PPC_FUNC_IMPL(__imp__sub_82A395F8) {
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
	// bl 0x82a39648
	ctx.lr = 0x82A39618;
	sub_82A39648(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a39630
	if (ctx.cr6.eq) goto loc_82A39630;
	// bl 0x8221be68
	ctx.lr = 0x82A3962C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A39630:
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

__attribute__((alias("__imp__sub_82A39648"))) PPC_WEAK_FUNC(sub_82A39648);
PPC_FUNC_IMPL(__imp__sub_82A39648) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r10,14312
	ctx.r9.s64 = ctx.r10.s64 + 14312;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a39688
	if (ctx.cr6.eq) goto loc_82A39688;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8221be68
	ctx.lr = 0x82A39680;
	sub_8221BE68(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_82A39688:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,14884
	ctx.r10.s64 = ctx.r11.s64 + 14884;
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

__attribute__((alias("__imp__sub_82A396A8"))) PPC_WEAK_FUNC(sub_82A396A8);
PPC_FUNC_IMPL(__imp__sub_82A396A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82A396B0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r31,r11,-9848
	ctx.r31.s64 = ctx.r11.s64 + -9848;
	// mulli r30,r27,112
	ctx.r30.s64 = ctx.r27.s64 * 112;
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a3981c
	if (ctx.cr6.eq) goto loc_82A3981C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwzx r7,r30,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821fba48
	ctx.lr = 0x82A39718;
	sub_821FBA48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3981c
	if (ctx.cr6.eq) goto loc_82A3981C;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x82b380f0
	ctx.lr = 0x82A39728;
	sub_82B380F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a3981c
	if (ctx.cr6.eq) goto loc_82A3981C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// li r3,56
	ctx.r3.s64 = 56;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r8,r11,63
	ctx.r8.s64 = ctx.r11.s64 + 63;
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r28,r6,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x8221f388
	ctx.lr = 0x82A3975C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3979c
	if (ctx.cr6.eq) goto loc_82A3979C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r10,r11,14312
	ctx.r10.s64 = ctx.r11.s64 + 14312;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// bl 0x832b258c
	ctx.lr = 0x82A39794;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a397a0
	goto loc_82A397A0;
loc_82A3979C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A397A0:
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_82A397BC:
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
	// bne 0x82a397bc
	if (!ctx.cr0.eq) goto loc_82A397BC;
loc_82A397D8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a397d8
	if (!ctx.cr0.eq) goto loc_82A397D8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a39820
	if (!ctx.cr6.eq) goto loc_82A39820;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A39810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82A3981C:
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_82A39820:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82A3982C"))) PPC_WEAK_FUNC(sub_82A3982C);
PPC_FUNC_IMPL(__imp__sub_82A3982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39830"))) PPC_WEAK_FUNC(sub_82A39830);
PPC_FUNC_IMPL(__imp__sub_82A39830) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A39854;
	sub_82200688(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x82a3986c
	if (ctx.cr6.eq) goto loc_82A3986C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3986C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3986C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A39884"))) PPC_WEAK_FUNC(sub_82A39884);
PPC_FUNC_IMPL(__imp__sub_82A39884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39888"))) PPC_WEAK_FUNC(sub_82A39888);
PPC_FUNC_IMPL(__imp__sub_82A39888) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A398AC;
	sub_82200688(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// beq cr6,0x82a398c4
	if (ctx.cr6.eq) goto loc_82A398C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A398C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A398C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A398DC"))) PPC_WEAK_FUNC(sub_82A398DC);
PPC_FUNC_IMPL(__imp__sub_82A398DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A398E0"))) PPC_WEAK_FUNC(sub_82A398E0);
PPC_FUNC_IMPL(__imp__sub_82A398E0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A39904;
	sub_82200688(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// beq cr6,0x82a3991c
	if (ctx.cr6.eq) goto loc_82A3991C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3991C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3991C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A39934"))) PPC_WEAK_FUNC(sub_82A39934);
PPC_FUNC_IMPL(__imp__sub_82A39934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39938"))) PPC_WEAK_FUNC(sub_82A39938);
PPC_FUNC_IMPL(__imp__sub_82A39938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x8221f388
	ctx.lr = 0x82A3994C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39968
	if (ctx.cr6.eq) goto loc_82A39968;
	// bl 0x82a5a720
	ctx.lr = 0x82A39958;
	sub_82A5A720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A39968:
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

__attribute__((alias("__imp__sub_82A3997C"))) PPC_WEAK_FUNC(sub_82A3997C);
PPC_FUNC_IMPL(__imp__sub_82A3997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39980"))) PPC_WEAK_FUNC(sub_82A39980);
PPC_FUNC_IMPL(__imp__sub_82A39980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A39988;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A399A4;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A399C4;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a399d4
	if (ctx.cr6.eq) goto loc_82A399D4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A399D4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A399E4;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39a34
	if (ctx.cr6.eq) goto loc_82A39A34;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,14320
	ctx.r8.s64 = ctx.r10.s64 + 14320;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A39A34:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A39A44"))) PPC_WEAK_FUNC(sub_82A39A44);
PPC_FUNC_IMPL(__imp__sub_82A39A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39A48"))) PPC_WEAK_FUNC(sub_82A39A48);
PPC_FUNC_IMPL(__imp__sub_82A39A48) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,14340
	ctx.r10.s64 = ctx.r11.s64 + 14340;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82a39aec
	if (ctx.cr6.eq) goto loc_82A39AEC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A39A84:
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
	// bne 0x82a39a84
	if (!ctx.cr0.eq) goto loc_82A39A84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39aec
	if (ctx.cr6.eq) goto loc_82A39AEC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A39AB0:
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
	// bne 0x82a39ab0
	if (!ctx.cr0.eq) goto loc_82A39AB0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a39ae4
	if (!ctx.cr6.eq) goto loc_82A39AE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A39AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A39AE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A39AEC:
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

__attribute__((alias("__imp__sub_82A39B08"))) PPC_WEAK_FUNC(sub_82A39B08);
PPC_FUNC_IMPL(__imp__sub_82A39B08) {
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
	// bl 0x822f8e48
	ctx.lr = 0x82A39B28;
	sub_822F8E48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a39b40
	if (ctx.cr6.eq) goto loc_82A39B40;
	// bl 0x8221be68
	ctx.lr = 0x82A39B3C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A39B40:
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

__attribute__((alias("__imp__sub_82A39B58"))) PPC_WEAK_FUNC(sub_82A39B58);
PPC_FUNC_IMPL(__imp__sub_82A39B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A39B60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A39B7C;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39B9C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39bac
	if (ctx.cr6.eq) goto loc_82A39BAC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A39BAC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39BBC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39c10
	if (ctx.cr6.eq) goto loc_82A39C10;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,14340
	ctx.r10.s64 = ctx.r11.s64 + 14340;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82a39c10
	if (ctx.cr6.eq) goto loc_82A39C10;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A39BE4:
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
	// bne 0x82a39be4
	if (!ctx.cr0.eq) goto loc_82A39BE4;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A39C10:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A39C20"))) PPC_WEAK_FUNC(sub_82A39C20);
PPC_FUNC_IMPL(__imp__sub_82A39C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8221f388
	ctx.lr = 0x82A39C34;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39c50
	if (ctx.cr6.eq) goto loc_82A39C50;
	// bl 0x82a5ad88
	ctx.lr = 0x82A39C40;
	sub_82A5AD88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A39C50:
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

__attribute__((alias("__imp__sub_82A39C64"))) PPC_WEAK_FUNC(sub_82A39C64);
PPC_FUNC_IMPL(__imp__sub_82A39C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39C68"))) PPC_WEAK_FUNC(sub_82A39C68);
PPC_FUNC_IMPL(__imp__sub_82A39C68) {
	PPC_FUNC_PROLOGUE();
	// li r3,47
	ctx.r3.s64 = 47;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A39C70"))) PPC_WEAK_FUNC(sub_82A39C70);
PPC_FUNC_IMPL(__imp__sub_82A39C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a39c80
	goto loc_82A39C80;
loc_82A39C80:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A39C88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39CA0;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39CC0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39cd0
	if (ctx.cr6.eq) goto loc_82A39CD0;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A39CD0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39CE0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39d70
	if (ctx.cr6.eq) goto loc_82A39D70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,14352
	ctx.r8.s64 = ctx.r10.s64 + 14352;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lvx128 v0,r31,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A39D70:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A39C80"))) PPC_WEAK_FUNC(sub_82A39C80);
PPC_FUNC_IMPL(__imp__sub_82A39C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A39C88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39CA0;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39CC0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39cd0
	if (ctx.cr6.eq) goto loc_82A39CD0;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A39CD0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A39CE0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a39d70
	if (ctx.cr6.eq) goto loc_82A39D70;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,14352
	ctx.r8.s64 = ctx.r10.s64 + 14352;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lvx128 v0,r31,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A39D70:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A39D84"))) PPC_WEAK_FUNC(sub_82A39D84);
PPC_FUNC_IMPL(__imp__sub_82A39D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39D88"))) PPC_WEAK_FUNC(sub_82A39D88);
PPC_FUNC_IMPL(__imp__sub_82A39D88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82293968
	ctx.lr = 0x82A39DA0;
	sub_82293968(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blt cr6,0x82a39e14
	if (ctx.cr6.lt) goto loc_82A39E14;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a39e00
	if (ctx.cr6.lt) goto loc_82A39E00;
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a39e00
	if (!ctx.cr6.lt) goto loc_82A39E00;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a39e00
	if (ctx.cr6.lt) goto loc_82A39E00;
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a39e04
	if (ctx.cr6.lt) goto loc_82A39E04;
loc_82A39E00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A39E04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a39e18
	if (!ctx.cr6.eq) goto loc_82A39E18;
loc_82A39E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A39E18:
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

__attribute__((alias("__imp__sub_82A39E2C"))) PPC_WEAK_FUNC(sub_82A39E2C);
PPC_FUNC_IMPL(__imp__sub_82A39E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39E30"))) PPC_WEAK_FUNC(sub_82A39E30);
PPC_FUNC_IMPL(__imp__sub_82A39E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r3.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfd f31,3368(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3368);
	// fmul f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 * ctx.f31.f64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82293cd0
	ctx.lr = 0x82A39E74;
	sub_82293CD0(ctx, base);
	// lfs f12,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// frsp f29,f1
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x82293cd0
	ctx.lr = 0x82A39E88;
	sub_82293CD0(ctx, base);
	// lfs f10,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f9,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f4,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// addi r8,r10,-27852
	ctx.r8.s64 = ctx.r10.s64 + -27852;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f3,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-27852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f2,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fadds f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f30,384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	ctx.f30.f64 = double(temp.f32);
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f10,f3
	ctx.f10.f64 = ctx.f3.f64;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,396(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 396);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f12,f7,f0,f4
	ctx.f12.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f4.f64)));
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r3,-28208
	ctx.r9.s64 = ctx.r3.s64 + -28208;
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f13,f0,f7
	ctx.f6.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fdivs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// addi r7,r8,-28192
	ctx.r7.s64 = ctx.r8.s64 + -28192;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// ld r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v7,r0,r7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stvx128 v7,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v10,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fdivs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 / ctx.f4.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v8,v11,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v13,v8,v10,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v7,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vperm128 v127,v13,v7,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8220ca28
	ctx.lr = 0x82A39FC0;
	sub_8220CA28(ctx, base);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v6,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx v1,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvlx v5,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvlx v30,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lvlx v4,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v26,v6,0
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// lvlx v3,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvlx v2,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,16
	ctx.r5.s64 = 16;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vspltw v28,v5,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// lvlx v31,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v29,v30,0
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xFF));
	// lvx128 v27,r0,r10
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lvx128 v25,r0,r9
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r7,-28160
	ctx.r3.s64 = ctx.r7.s64 + -28160;
	// lvx128 v24,r0,r8
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v22,v27,v28
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v22.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v28.f32)));
	// vmulfp128 v23,v25,v29
	_mm_store_ps(ctx.v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v29.f32)));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vmulfp128 v21,v24,v26
	_mm_store_ps(ctx.v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v26.f32)));
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r11,-28176
	ctx.r9.s64 = ctx.r11.s64 + -28176;
	// lvx128 v20,r31,r5
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v19,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v18,v20,v1,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r6
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v6,v127,v19,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvlx v5,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v7,r0,r9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v1,v6,v5,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v29,v22,v4,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v28,v21,v2,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v30,v23,v3,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghw v25,v28,v18
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v18.u32), _mm_load_si128((__m128i*)ctx.v28.u32)));
	// vmrglw v23,v28,v18
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v18.u32), _mm_load_si128((__m128i*)ctx.v28.u32)));
	// vperm v27,v1,v31,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghw v26,v29,v30
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v29.u32)));
	// vmrglw v24,v29,v30
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v29.u32)));
	// vmrghw v22,v26,v25
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), _mm_load_si128((__m128i*)ctx.v26.u32)));
	// vmrglw v21,v26,v25
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), _mm_load_si128((__m128i*)ctx.v26.u32)));
	// vmrghw v20,v24,v23
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), _mm_load_si128((__m128i*)ctx.v24.u32)));
	// vmrglw v19,v24,v23
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), _mm_load_si128((__m128i*)ctx.v24.u32)));
	// vmsum4fp128 v18,v27,v22
	_mm_store_ps(ctx.v18.f32, _mm_dp_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v22.f32), 0xFF));
	// vmsum4fp128 v17,v27,v21
	_mm_store_ps(ctx.v17.f32, _mm_dp_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v21.f32), 0xFF));
	// vmsum4fp128 v16,v27,v20
	_mm_store_ps(ctx.v16.f32, _mm_dp_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v20.f32), 0xFF));
	// vmsum4fp128 v15,v27,v19
	_mm_store_ps(ctx.v15.f32, _mm_dp_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v19.f32), 0xFF));
	// vmrghw v14,v18,v16
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v16.u32), _mm_load_si128((__m128i*)ctx.v18.u32)));
	// vmrghw128 v63,v17,v15
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v15.u32), _mm_load_si128((__m128i*)ctx.v17.u32)));
	// vmrghw128 v1,v14,v63
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v14.u32)));
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3A108"))) PPC_WEAK_FUNC(sub_82A3A108);
PPC_FUNC_IMPL(__imp__sub_82A3A108) {
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
	// bl 0x82ca7508
	ctx.lr = 0x82A3A11C;
	sub_82CA7508(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,308(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// std r3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r3.u64);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfd f31,3368(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3368);
	// fmul f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 * ctx.f31.f64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82293cd0
	ctx.lr = 0x82A3A150;
	sub_82293CD0(ctx, base);
	// lfs f12,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x82293cd0
	ctx.lr = 0x82A3A164;
	sub_82293CD0(ctx, base);
	// lfs f10,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f9,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f4,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// addi r8,r10,-27852
	ctx.r8.s64 = ctx.r10.s64 + -27852;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f3,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-27852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f2,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fadds f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f31,384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	ctx.f31.f64 = double(temp.f32);
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f10,f3
	ctx.f10.f64 = ctx.f3.f64;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f30,396(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 396);
	ctx.f30.f64 = double(temp.f32);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f12,f7,f0,f4
	ctx.f12.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f4.f64)));
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r3,-28208
	ctx.r9.s64 = ctx.r3.s64 + -28208;
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f13,f0,f7
	ctx.f6.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fdivs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// addi r7,r8,-28192
	ctx.r7.s64 = ctx.r8.s64 + -28192;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lvx128 v7,r0,r7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v10,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fdivs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 / ctx.f4.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v8,v11,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v13,v8,v10,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v6,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v13,v13,v6,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvlx v5,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v13,v13,v5,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lvlx v4,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v127,v13,v4,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8220ca28
	ctx.lr = 0x82A3A2D8;
	sub_8220CA28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v1,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvlx v2,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lvlx v31,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lvlx v3,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvlx v30,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r7,-28176
	ctx.r3.s64 = ctx.r7.s64 + -28176;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// lvlx v25,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vperm128 v13,v127,v25,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v27,r0,r10
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v7,r0,r3
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// vspltw v9,v3,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// lvlx v29,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r6,-28160
	ctx.r11.s64 = ctx.r6.s64 + -28160;
	// vspltw v10,v1,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// lvx128 v12,r31,r5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v8,v13,v11,v7
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v7,r0,r10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v28,v29,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// lvx128 v5,r0,r9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v26,v27,v28
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v28.f32)));
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vperm v6,v12,v2,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vmulfp128 v4,v5,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v10.f32)));
	// lvlx v3,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v2,v7,v9
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)));
	// lvlx v1,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v31,v8,v31,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v29,v2,v1,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v30,v26,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v28,v4,v3,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghw v27,v30,v6
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vmrglw v26,v30,v6
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vmrghw v25,v28,v29
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v28.u32)));
	// vmrglw v24,v28,v29
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v28.u32)));
	// vmrghw v23,v25,v27
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), _mm_load_si128((__m128i*)ctx.v25.u32)));
	// vmrglw v22,v25,v27
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), _mm_load_si128((__m128i*)ctx.v25.u32)));
	// vmrghw v21,v24,v26
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), _mm_load_si128((__m128i*)ctx.v24.u32)));
	// vmrglw v20,v24,v26
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), _mm_load_si128((__m128i*)ctx.v24.u32)));
	// vmsum4fp128 v19,v31,v23
	_mm_store_ps(ctx.v19.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v23.f32), 0xFF));
	// vmsum4fp128 v18,v31,v22
	_mm_store_ps(ctx.v18.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v22.f32), 0xFF));
	// vmsum4fp128 v17,v31,v21
	_mm_store_ps(ctx.v17.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v21.f32), 0xFF));
	// vmsum4fp128 v16,v31,v20
	_mm_store_ps(ctx.v16.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v20.f32), 0xFF));
	// vmrghw v15,v19,v17
	_mm_store_si128((__m128i*)ctx.v15.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v17.u32), _mm_load_si128((__m128i*)ctx.v19.u32)));
	// vmrghw v14,v18,v16
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v16.u32), _mm_load_si128((__m128i*)ctx.v18.u32)));
	// vmrghw v1,v15,v14
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v14.u32), _mm_load_si128((__m128i*)ctx.v15.u32)));
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7554
	ctx.lr = 0x82A3A40C;
	sub_82CA7554(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3A41C"))) PPC_WEAK_FUNC(sub_82A3A41C);
PPC_FUNC_IMPL(__imp__sub_82A3A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A420"))) PPC_WEAK_FUNC(sub_82A3A420);
PPC_FUNC_IMPL(__imp__sub_82A3A420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x8223bd98
	ctx.lr = 0x82A3A438;
	sub_8223BD98(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8223bd98
	ctx.lr = 0x82A3A440;
	sub_8223BD98(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-27468
	ctx.r9.s64 = ctx.r11.s64 + -27468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8604(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8604);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
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

__attribute__((alias("__imp__sub_82A3A48C"))) PPC_WEAK_FUNC(sub_82A3A48C);
PPC_FUNC_IMPL(__imp__sub_82A3A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A490"))) PPC_WEAK_FUNC(sub_82A3A490);
PPC_FUNC_IMPL(__imp__sub_82A3A490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3A498;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor v25,v1,v1
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// vor v1,v2,v2
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821de4d8
	ctx.lr = 0x82A3A4BC;
	sub_821DE4D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vor v1,v25,v25
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v25.u8));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v24,r0,r11
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821de4d8
	ctx.lr = 0x82A3A4DC;
	sub_821DE4D8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821dee00
	ctx.lr = 0x82A3A500;
	sub_821DEE00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3A508"))) PPC_WEAK_FUNC(sub_82A3A508);
PPC_FUNC_IMPL(__imp__sub_82A3A508) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stvx128 v2,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82a3a53c
	if (!ctx.cr6.eq) goto loc_82A3A53C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82a3a548
	goto loc_82A3A548;
loc_82A3A53C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
loc_82A3A548:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a3a5a0
	if (!ctx.cr6.lt) goto loc_82A3A5A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3a588
	if (ctx.cr6.eq) goto loc_82A3A588;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
loc_82A3A588:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3A5A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825d9008
	ctx.lr = 0x82A3A5BC;
	sub_825D9008(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3A5CC"))) PPC_WEAK_FUNC(sub_82A3A5CC);
PPC_FUNC_IMPL(__imp__sub_82A3A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A5D0"))) PPC_WEAK_FUNC(sub_82A3A5D0);
PPC_FUNC_IMPL(__imp__sub_82A3A5D0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82A3A5E4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3a698
	if (ctx.cr6.eq) goto loc_82A3A698;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,13
	ctx.r6.s64 = 13;
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// clrlwi r4,r7,25
	ctx.r4.u64 = ctx.r7.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r6,r8,24752
	ctx.r6.s64 = ctx.r8.s64 + 24752;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r11,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// stb r11,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r5,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, ctx.r5.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3A698:
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

__attribute__((alias("__imp__sub_82A3A6AC"))) PPC_WEAK_FUNC(sub_82A3A6AC);
PPC_FUNC_IMPL(__imp__sub_82A3A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A6B0"))) PPC_WEAK_FUNC(sub_82A3A6B0);
PPC_FUNC_IMPL(__imp__sub_82A3A6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3A6B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3A6D4;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3A6F4;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3a704
	if (ctx.cr6.eq) goto loc_82A3A704;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3A704:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3A714;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3a724
	if (ctx.cr6.eq) goto loc_82A3A724;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8262c628
	ctx.lr = 0x82A3A724;
	sub_8262C628(ctx, base);
loc_82A3A724:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3A734"))) PPC_WEAK_FUNC(sub_82A3A734);
PPC_FUNC_IMPL(__imp__sub_82A3A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A738"))) PPC_WEAK_FUNC(sub_82A3A738);
PPC_FUNC_IMPL(__imp__sub_82A3A738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3A740;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r29,r11,-18864
	ctx.r29.s64 = ctx.r11.s64 + -18864;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r8,r9,14372
	ctx.r8.s64 = ctx.r9.s64 + 14372;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f31,-8604(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8604);
	ctx.f31.f64 = double(temp.f32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stvx128 v2,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r7,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r7.u64);
	// stb r10,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r10.u8);
	// stvx128 v1,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-25888(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82260bc8
	ctx.lr = 0x82A3A7A4;
	sub_82260BC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,192(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a3a7f8
	if (!ctx.cr6.gt) goto loc_82A3A7F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,-28192
	ctx.r9.s64 = ctx.r11.s64 + -28192;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-25888(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v11,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82260bc8
	ctx.lr = 0x82A3A7F8;
	sub_82260BC8(ctx, base);
loc_82A3A7F8:
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a3a814
	if (!ctx.cr6.eq) goto loc_82A3A814;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_82A3A814:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3A820"))) PPC_WEAK_FUNC(sub_82A3A820);
PPC_FUNC_IMPL(__imp__sub_82A3A820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a3a854
	if (ctx.cr6.eq) goto loc_82A3A854;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2904
	ctx.r9.s64 = ctx.r11.s64 + -2904;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82A3A854:
	// ld r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lbz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lvx128 v0,r3,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r10,r31,-1892
	ctx.r10.s64 = ctx.r31.s64 + -1892;
	// stb r6,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r6.u8);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a5e150
	ctx.lr = 0x82A3A8BC;
	sub_82A5E150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3A8D4"))) PPC_WEAK_FUNC(sub_82A3A8D4);
PPC_FUNC_IMPL(__imp__sub_82A3A8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A8D8"))) PPC_WEAK_FUNC(sub_82A3A8D8);
PPC_FUNC_IMPL(__imp__sub_82A3A8D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3A8E0"))) PPC_WEAK_FUNC(sub_82A3A8E0);
PPC_FUNC_IMPL(__imp__sub_82A3A8E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a3a9d0
	sub_82A3A9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3A8F0"))) PPC_WEAK_FUNC(sub_82A3A8F0);
PPC_FUNC_IMPL(__imp__sub_82A3A8F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,53
	ctx.r3.s64 = 53;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3A8F8"))) PPC_WEAK_FUNC(sub_82A3A8F8);
PPC_FUNC_IMPL(__imp__sub_82A3A8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a5d120
	ctx.lr = 0x82A3A908;
	sub_82A5D120(ctx, base);
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

__attribute__((alias("__imp__sub_82A3A91C"))) PPC_WEAK_FUNC(sub_82A3A91C);
PPC_FUNC_IMPL(__imp__sub_82A3A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A920"))) PPC_WEAK_FUNC(sub_82A3A920);
PPC_FUNC_IMPL(__imp__sub_82A3A920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3A928;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3A944;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3A964;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3a974
	if (ctx.cr6.eq) goto loc_82A3A974;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3A974:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3A984;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3a9bc
	if (ctx.cr6.eq) goto loc_82A3A9BC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,26476
	ctx.r8.s64 = ctx.r10.s64 + 26476;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3A9BC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3A9CC"))) PPC_WEAK_FUNC(sub_82A3A9CC);
PPC_FUNC_IMPL(__imp__sub_82A3A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A9D0"))) PPC_WEAK_FUNC(sub_82A3A9D0);
PPC_FUNC_IMPL(__imp__sub_82A3A9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3A9D8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3A9F0;
	sub_8222AC38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3AA10;
	sub_8222AC38(ctx, base);
	// li r29,16
	ctx.r29.s64 = 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3aa20
	if (ctx.cr6.eq) goto loc_82A3AA20;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_82A3AA20:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3AA30;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3aaac
	if (ctx.cr6.eq) goto loc_82A3AAAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,14372
	ctx.r8.s64 = ctx.r10.s64 + 14372;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lvx128 v0,r31,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r31,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lbz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// stb r10,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r10.u8);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3AAAC:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3AAC0"))) PPC_WEAK_FUNC(sub_82A3AAC0);
PPC_FUNC_IMPL(__imp__sub_82A3AAC0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82A3AAD4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ab94
	if (ctx.cr6.eq) goto loc_82A3AB94;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,17
	ctx.r4.s64 = 17;
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrlwi r6,r6,25
	ctx.r6.u64 = ctx.r6.u32 & 0x7F;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r6,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r6.u8);
	// addi r8,r8,24824
	ctx.r8.s64 = ctx.r8.s64 + 24824;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// addi r4,r6,28340
	ctx.r4.s64 = ctx.r6.s64 + 28340;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
loc_82A3AB68:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a3ab68
	if (!ctx.cr0.eq) goto loc_82A3AB68;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3AB94:
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

__attribute__((alias("__imp__sub_82A3ABA8"))) PPC_WEAK_FUNC(sub_82A3ABA8);
PPC_FUNC_IMPL(__imp__sub_82A3ABA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3ABB0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3ABCC;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3ABEC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3abfc
	if (ctx.cr6.eq) goto loc_82A3ABFC;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3ABFC:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3AC0C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ac1c
	if (ctx.cr6.eq) goto loc_82A3AC1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a3ac30
	ctx.lr = 0x82A3AC1C;
	sub_82A3AC30(ctx, base);
loc_82A3AC1C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3AC2C"))) PPC_WEAK_FUNC(sub_82A3AC2C);
PPC_FUNC_IMPL(__imp__sub_82A3AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AC30"))) PPC_WEAK_FUNC(sub_82A3AC30);
PPC_FUNC_IMPL(__imp__sub_82A3AC30) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,29944
	ctx.r8.s64 = ctx.r10.s64 + 29944;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82a3acb4
	if (ctx.cr6.eq) goto loc_82A3ACB4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3AC98:
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
	// bne 0x82a3ac98
	if (!ctx.cr0.eq) goto loc_82A3AC98;
loc_82A3ACB4:
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82287710
	ctx.lr = 0x82A3ACC0;
	sub_82287710(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82A3AD04"))) PPC_WEAK_FUNC(sub_82A3AD04);
PPC_FUNC_IMPL(__imp__sub_82A3AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AD08"))) PPC_WEAK_FUNC(sub_82A3AD08);
PPC_FUNC_IMPL(__imp__sub_82A3AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x8221f388
	ctx.lr = 0x82A3AD1C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ad38
	if (ctx.cr6.eq) goto loc_82A3AD38;
	// bl 0x82a5f7e8
	ctx.lr = 0x82A3AD28;
	sub_82A5F7E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3AD38:
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

__attribute__((alias("__imp__sub_82A3AD4C"))) PPC_WEAK_FUNC(sub_82A3AD4C);
PPC_FUNC_IMPL(__imp__sub_82A3AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AD50"))) PPC_WEAK_FUNC(sub_82A3AD50);
PPC_FUNC_IMPL(__imp__sub_82A3AD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r11,-28224
	ctx.r8.s64 = ctx.r11.s64 + -28224;
	// addi r7,r10,5668
	ctx.r7.s64 = ctx.r10.s64 + 5668;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// stvx128 v0,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r6,-27468
	ctx.r4.s64 = ctx.r6.s64 + -27468;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f0,-27468(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// lis r31,-32240
	ctx.r31.s64 = -2112880640;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lvlx v13,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vand v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lfs f12,-28504(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28504);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8604(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8604);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r3,104
	ctx.r9.s64 = ctx.r3.s64 + 104;
	// lfs f10,8400(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8400);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,27080(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 27080);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v11,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f10,52(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f9,64(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r10,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r10.u8);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r10,102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 102, ctx.r10.u8);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r10,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r10.u8);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,564(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 564);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3AE3C"))) PPC_WEAK_FUNC(sub_82A3AE3C);
PPC_FUNC_IMPL(__imp__sub_82A3AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AE40"))) PPC_WEAK_FUNC(sub_82A3AE40);
PPC_FUNC_IMPL(__imp__sub_82A3AE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x8221f388
	ctx.lr = 0x82A3AE54;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ae70
	if (ctx.cr6.eq) goto loc_82A3AE70;
	// bl 0x82a60348
	ctx.lr = 0x82A3AE60;
	sub_82A60348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3AE70:
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

__attribute__((alias("__imp__sub_82A3AE84"))) PPC_WEAK_FUNC(sub_82A3AE84);
PPC_FUNC_IMPL(__imp__sub_82A3AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AE88"))) PPC_WEAK_FUNC(sub_82A3AE88);
PPC_FUNC_IMPL(__imp__sub_82A3AE88) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,29924
	ctx.r9.s64 = ctx.r11.s64 + 29924;
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x8217ac88
	ctx.lr = 0x82A3AED4;
	sub_8217AC88(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r7,5868
	ctx.r5.s64 = ctx.r7.s64 + 5868;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// stvx128 v127,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// lfs f1,-25888(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82260bc8
	ctx.lr = 0x82A3AF0C;
	sub_82260BC8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,-27468
	ctx.r7.s64 = ctx.r9.s64 + -27468;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r31,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82A3AF84"))) PPC_WEAK_FUNC(sub_82A3AF84);
PPC_FUNC_IMPL(__imp__sub_82A3AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AF88"))) PPC_WEAK_FUNC(sub_82A3AF88);
PPC_FUNC_IMPL(__imp__sub_82A3AF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8221f388
	ctx.lr = 0x82A3AF9C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3afb8
	if (ctx.cr6.eq) goto loc_82A3AFB8;
	// bl 0x82a605c0
	ctx.lr = 0x82A3AFA8;
	sub_82A605C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3AFB8:
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

__attribute__((alias("__imp__sub_82A3AFCC"))) PPC_WEAK_FUNC(sub_82A3AFCC);
PPC_FUNC_IMPL(__imp__sub_82A3AFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AFD0"))) PPC_WEAK_FUNC(sub_82A3AFD0);
PPC_FUNC_IMPL(__imp__sub_82A3AFD0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,26452
	ctx.r8.s64 = ctx.r10.s64 + 26452;
	// addi r7,r9,29924
	ctx.r7.s64 = ctx.r9.s64 + 29924;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// bl 0x8217a2c8
	ctx.lr = 0x82A3B01C;
	sub_8217A2C8(ctx, base);
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

__attribute__((alias("__imp__sub_82A3B034"))) PPC_WEAK_FUNC(sub_82A3B034);
PPC_FUNC_IMPL(__imp__sub_82A3B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B038"))) PPC_WEAK_FUNC(sub_82A3B038);
PPC_FUNC_IMPL(__imp__sub_82A3B038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3B040;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,29924
	ctx.r9.s64 = ctx.r11.s64 + 29924;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8217ac88
	ctx.lr = 0x82A3B080;
	sub_8217AC88(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r7,14392
	ctx.r5.s64 = ctx.r7.s64 + 14392;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stvx128 v127,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lfs f0,-17372(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -17372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stb r29,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r29.u8);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r29,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r29.u8);
	// std r9,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r9.u64);
	// lfs f1,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82260bc8
	ctx.lr = 0x82A3B0D0;
	sub_82260BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3B0E4"))) PPC_WEAK_FUNC(sub_82A3B0E4);
PPC_FUNC_IMPL(__imp__sub_82A3B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B0E8"))) PPC_WEAK_FUNC(sub_82A3B0E8);
PPC_FUNC_IMPL(__imp__sub_82A3B0E8) {
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
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x8221f388
	ctx.lr = 0x82A3B104;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3b128
	if (ctx.cr6.eq) goto loc_82A3B128;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82a60718
	ctx.lr = 0x82A3B114;
	sub_82A60718(ctx, base);
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
loc_82A3B128:
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

__attribute__((alias("__imp__sub_82A3B140"))) PPC_WEAK_FUNC(sub_82A3B140);
PPC_FUNC_IMPL(__imp__sub_82A3B140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3B148;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B164;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B184;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3b194
	if (ctx.cr6.eq) goto loc_82A3B194;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3B194:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B1A4;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a3b1d4
	if (ctx.cr6.eq) goto loc_82A3B1D4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a3afd0
	ctx.lr = 0x82A3B1B8;
	sub_82A3AFD0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,14392
	ctx.r10.s64 = ctx.r11.s64 + 14392;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3B1D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3B1E4"))) PPC_WEAK_FUNC(sub_82A3B1E4);
PPC_FUNC_IMPL(__imp__sub_82A3B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B1E8"))) PPC_WEAK_FUNC(sub_82A3B1E8);
PPC_FUNC_IMPL(__imp__sub_82A3B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// addi r7,r1,-8
	ctx.r7.s64 = ctx.r1.s64 + -8;
	// addi r4,r1,-8
	ctx.r4.s64 = ctx.r1.s64 + -8;
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-4
	ctx.r9.s64 = ctx.r1.s64 + -4;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-12
	ctx.r6.s64 = ctx.r1.s64 + -12;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v9,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvlx v8,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// li r10,32
	ctx.r10.s64 = 32;
	// vrlimi128 v7,v11,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// vrlimi128 v13,v9,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// stvx128 v7,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stvx128 v13,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B294"))) PPC_WEAK_FUNC(sub_82A3B294);
PPC_FUNC_IMPL(__imp__sub_82A3B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B298"))) PPC_WEAK_FUNC(sub_82A3B298);
PPC_FUNC_IMPL(__imp__sub_82A3B298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r11,-27468
	ctx.r8.s64 = ctx.r11.s64 + -27468;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r4,r1,-8
	ctx.r4.s64 = ctx.r1.s64 + -8;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvlx v8,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v13,v9,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// vrlimi128 v7,v11,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v7,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B330"))) PPC_WEAK_FUNC(sub_82A3B330);
PPC_FUNC_IMPL(__imp__sub_82A3B330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82A3B338;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82A3B350:
	// bl 0x82a3b1e8
	ctx.lr = 0x82A3B354;
	sub_82A3B1E8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bge 0x82a3b350
	if (!ctx.cr0.lt) goto loc_82A3B350;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r11,-27468
	ctx.r7.s64 = ctx.r11.s64 + -27468;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r1,100
	ctx.r29.s64 = ctx.r1.s64 + 100;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx v9,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r27,16
	ctx.r27.s64 = 16;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r26,32
	ctx.r26.s64 = 32;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lvlx v6,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,92
	ctx.r29.s64 = ctx.r1.s64 + 92;
	// lvlx v1,0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vrlimi128 v0,v11,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v8,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r3,48
	ctx.r3.s64 = 48;
	// lvlx v7,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvlx v4,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vrlimi128 v0,v9,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvlx v3,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvlx v2,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvlx v31,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v6,v1,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 57), 4));
	// lvlx v30,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v5,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vrlimi128 v12,v6,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v4,v5,4,3
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 4));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vrlimi128 v2,v3,4,3
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v3.f32), 57), 4));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vrlimi128 v30,v31,4,3
	_mm_store_ps(ctx.v30.f32, _mm_blend_ps(_mm_load_ps(ctx.v30.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 57), 4));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vrlimi128 v7,v4,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 78), 3));
	// stvx128 v12,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lvlx v29,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lvlx v28,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,108
	ctx.r29.s64 = ctx.r1.s64 + 108;
	// addi r25,r1,88
	ctx.r25.s64 = ctx.r1.s64 + 88;
	// lvlx v25,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,108
	ctx.r27.s64 = ctx.r1.s64 + 108;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v26,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lvlx v21,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r24,r1,92
	ctx.r24.s64 = ctx.r1.s64 + 92;
	// lvlx v16,0,r25
	temp.u32 = ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lvlx v23,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v28,v29,4,3
	_mm_store_ps(ctx.v28.f32, _mm_blend_ps(_mm_load_ps(ctx.v28.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 57), 4));
	// lvlx v14,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v2,v30,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 78), 3));
	// lvlx v24,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r23,64
	ctx.r23.s64 = 64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vrlimi128 v24,v25,4,3
	_mm_store_ps(ctx.v24.f32, _mm_blend_ps(_mm_load_ps(ctx.v24.f32), _mm_permute_ps(_mm_load_ps(ctx.v25.f32), 57), 4));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r22,80
	ctx.r22.s64 = 80;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r21,112
	ctx.r21.s64 = 112;
	// lvlx v27,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v26,v27,4,3
	_mm_store_ps(ctx.v26.f32, _mm_blend_ps(_mm_load_ps(ctx.v26.f32), _mm_permute_ps(_mm_load_ps(ctx.v27.f32), 57), 4));
	// lvlx v18,0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r20,-1
	ctx.r20.s64 = -1;
	// stvx128 v7,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r26,96
	ctx.r26.s64 = 96;
	// lvlx v20,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vrlimi128 v20,v21,4,3
	_mm_store_ps(ctx.v20.f32, _mm_blend_ps(_mm_load_ps(ctx.v20.f32), _mm_permute_ps(_mm_load_ps(ctx.v21.f32), 57), 4));
	// lvlx v19,0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v26,v28,3,2
	_mm_store_ps(ctx.v26.f32, _mm_blend_ps(_mm_load_ps(ctx.v26.f32), _mm_permute_ps(_mm_load_ps(ctx.v28.f32), 78), 3));
	// stvx128 v2,r11,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vrlimi128 v20,v24,3,2
	_mm_store_ps(ctx.v20.f32, _mm_blend_ps(_mm_load_ps(ctx.v20.f32), _mm_permute_ps(_mm_load_ps(ctx.v24.f32), 78), 3));
	// stvx128 v26,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v15,0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v17,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v22,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v17,v18,4,3
	_mm_store_ps(ctx.v17.f32, _mm_blend_ps(_mm_load_ps(ctx.v17.f32), _mm_permute_ps(_mm_load_ps(ctx.v18.f32), 57), 4));
	// vrlimi128 v15,v16,4,3
	_mm_store_ps(ctx.v15.f32, _mm_blend_ps(_mm_load_ps(ctx.v15.f32), _mm_permute_ps(_mm_load_ps(ctx.v16.f32), 57), 4));
	// vrlimi128 v19,v14,4,3
	_mm_store_ps(ctx.v19.f32, _mm_blend_ps(_mm_load_ps(ctx.v19.f32), _mm_permute_ps(_mm_load_ps(ctx.v14.f32), 57), 4));
	// vrlimi128 v22,v23,4,3
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v23.f32), 57), 4));
	// vrlimi128 v17,v15,3,2
	_mm_store_ps(ctx.v17.f32, _mm_blend_ps(_mm_load_ps(ctx.v17.f32), _mm_permute_ps(_mm_load_ps(ctx.v15.f32), 78), 3));
	// vrlimi128 v19,v22,3,2
	_mm_store_ps(ctx.v19.f32, _mm_blend_ps(_mm_load_ps(ctx.v19.f32), _mm_permute_ps(_mm_load_ps(ctx.v22.f32), 78), 3));
	// stvx128 v17,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r20,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r20.u32);
	// stb r30,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82A3B5CC"))) PPC_WEAK_FUNC(sub_82A3B5CC);
PPC_FUNC_IMPL(__imp__sub_82A3B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B5D0"))) PPC_WEAK_FUNC(sub_82A3B5D0);
PPC_FUNC_IMPL(__imp__sub_82A3B5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3b5f8
	if (ctx.cr6.eq) goto loc_82A3B5F8;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3b610
	if (!ctx.cr6.eq) goto loc_82A3B610;
loc_82A3B5F8:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3b618
	if (ctx.cr6.eq) goto loc_82A3B618;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3b618
	if (!ctx.cr6.eq) goto loc_82A3B618;
loc_82A3B610:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a3b61c
	goto loc_82A3B61C;
loc_82A3B618:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3B61C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3b658
	if (!ctx.cr6.eq) goto loc_82A3B658;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82a3b658
	if (ctx.cr6.gt) goto loc_82A3B658;
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x8221f388
	ctx.lr = 0x82A3B63C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3b658
	if (ctx.cr6.eq) goto loc_82A3B658;
	// bl 0x82a608f8
	ctx.lr = 0x82A3B648;
	sub_82A608F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3B658:
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

__attribute__((alias("__imp__sub_82A3B66C"))) PPC_WEAK_FUNC(sub_82A3B66C);
PPC_FUNC_IMPL(__imp__sub_82A3B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B670"))) PPC_WEAK_FUNC(sub_82A3B670);
PPC_FUNC_IMPL(__imp__sub_82A3B670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3B678;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B694;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B6B4;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3b6c4
	if (ctx.cr6.eq) goto loc_82A3B6C4;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3B6C4:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,544
	ctx.r4.s64 = 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B6D4;
	sub_8222AC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3b71c
	if (ctx.cr6.eq) goto loc_82A3B71C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,26452
	ctx.r8.s64 = ctx.r10.s64 + 26452;
	// addi r7,r9,14412
	ctx.r7.s64 = ctx.r9.s64 + 14412;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bl 0x82400600
	ctx.lr = 0x82A3B70C;
	sub_82400600(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3B71C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3B72C"))) PPC_WEAK_FUNC(sub_82A3B72C);
PPC_FUNC_IMPL(__imp__sub_82A3B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B730"))) PPC_WEAK_FUNC(sub_82A3B730);
PPC_FUNC_IMPL(__imp__sub_82A3B730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3B738;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B754;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B774;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3b784
	if (ctx.cr6.eq) goto loc_82A3B784;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3B784:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,544
	ctx.r4.s64 = 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3B794;
	sub_8222AC38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3b7d0
	if (ctx.cr6.eq) goto loc_82A3B7D0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r9,r10,14432
	ctx.r9.s64 = ctx.r10.s64 + 14432;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bl 0x82400600
	ctx.lr = 0x82A3B7C0;
	sub_82400600(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3B7D0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3B7E0"))) PPC_WEAK_FUNC(sub_82A3B7E0);
PPC_FUNC_IMPL(__imp__sub_82A3B7E0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,14876
	ctx.r10.s64 = ctx.r11.s64 + 14876;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a3b9e8
	ctx.lr = 0x82A3B80C;
	sub_82A3B9E8(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,14884
	ctx.r7.s64 = ctx.r9.s64 + 14884;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82a3b830
	if (ctx.cr6.eq) goto loc_82A3B830;
	// bl 0x8221be68
	ctx.lr = 0x82A3B82C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A3B830:
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

__attribute__((alias("__imp__sub_82A3B848"))) PPC_WEAK_FUNC(sub_82A3B848);
PPC_FUNC_IMPL(__imp__sub_82A3B848) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,14876
	ctx.r10.s64 = ctx.r11.s64 + 14876;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a3b9e8
	ctx.lr = 0x82A3B86C;
	sub_82A3B9E8(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r9,14884
	ctx.r8.s64 = ctx.r9.s64 + 14884;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82A3B88C"))) PPC_WEAK_FUNC(sub_82A3B88C);
PPC_FUNC_IMPL(__imp__sub_82A3B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B890"))) PPC_WEAK_FUNC(sub_82A3B890);
PPC_FUNC_IMPL(__imp__sub_82A3B890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3B898;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,27704(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 27704);
	// stb r6,223(r30)
	PPC_STORE_U8(ctx.r30.u32 + 223, ctx.r6.u8);
	// stb r5,222(r30)
	PPC_STORE_U8(ctx.r30.u32 + 222, ctx.r5.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3b934
	if (!ctx.cr6.eq) goto loc_82A3B934;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r10,r11,29448
	ctx.r10.s64 = ctx.r11.s64 + 29448;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3b924
	if (ctx.cr6.eq) goto loc_82A3B924;
	// lis r11,-31920
	ctx.r11.s64 = -2091909120;
	// addi r31,r11,-16232
	ctx.r31.s64 = ctx.r11.s64 + -16232;
	// lwz r11,-16232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3b8fc
	if (ctx.cr6.eq) goto loc_82A3B8FC;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r10,29448
	ctx.r9.s64 = ctx.r10.s64 + 29448;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a3b908
	if (ctx.cr6.eq) goto loc_82A3B908;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3b924
	if (!ctx.cr6.eq) goto loc_82A3B924;
loc_82A3B8FC:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,29448
	ctx.r11.s64 = ctx.r11.s64 + 29448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A3B908:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A3B918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3b924
	if (ctx.cr6.eq) goto loc_82A3B924;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82A3B924:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82be3960
	ctx.lr = 0x82A3B92C;
	sub_82BE3960(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,27704(r29)
	PPC_STORE_U8(ctx.r29.u32 + 27704, ctx.r11.u8);
loc_82A3B934:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x832b3eb8
	ctx.lr = 0x82A3B940;
	sub_832B3EB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// bne cr6,0x82a3b958
	if (!ctx.cr6.eq) goto loc_82A3B958;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3B958:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3ca68
	ctx.lr = 0x82A3B960;
	sub_82A3CA68(ctx, base);
	// lbz r11,222(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 222);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3b984
	if (ctx.cr6.eq) goto loc_82A3B984;
	// bl 0x82cf6c78
	ctx.lr = 0x82A3B970;
	sub_82CF6C78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,220(r30)
	PPC_STORE_U8(ctx.r30.u32 + 220, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3B984:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832b6440
	ctx.lr = 0x82A3B994;
	sub_832B6440(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x832b6440
	ctx.lr = 0x82A3B9A4;
	sub_832B6440(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x832b6440
	ctx.lr = 0x82A3B9B4;
	sub_832B6440(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x832b6440
	ctx.lr = 0x82A3B9C4;
	sub_832B6440(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x832b6440
	ctx.lr = 0x82A3B9D4;
	sub_832B6440(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,220(r30)
	PPC_STORE_U8(ctx.r30.u32 + 220, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3B9E8"))) PPC_WEAK_FUNC(sub_82A3B9E8);
PPC_FUNC_IMPL(__imp__sub_82A3B9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3B9F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3bab4
	if (ctx.cr6.eq) goto loc_82A3BAB4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a3baa4
	if (!ctx.cr6.gt) goto loc_82A3BAA4;
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
loc_82A3BA1C:
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3ba38
	if (ctx.cr6.eq) goto loc_82A3BA38;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3ce30
	ctx.lr = 0x82A3BA38;
	sub_82A3CE30(ctx, base);
loc_82A3BA38:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3ba54
	if (ctx.cr6.eq) goto loc_82A3BA54;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3ce30
	ctx.lr = 0x82A3BA54;
	sub_82A3CE30(ctx, base);
loc_82A3BA54:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3ba70
	if (ctx.cr6.eq) goto loc_82A3BA70;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3ce30
	ctx.lr = 0x82A3BA70;
	sub_82A3CE30(ctx, base);
loc_82A3BA70:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3ba8c
	if (ctx.cr6.eq) goto loc_82A3BA8C;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3ce30
	ctx.lr = 0x82A3BA8C;
	sub_82A3CE30(ctx, base);
loc_82A3BA8C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a3ba1c
	if (ctx.cr6.lt) goto loc_82A3BA1C;
loc_82A3BAA4:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x832b5e40
	ctx.lr = 0x82A3BAAC;
	sub_832B5E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82A3BAB4:
	// lbz r11,222(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 222);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3bac4
	if (ctx.cr6.eq) goto loc_82A3BAC4;
	// bl 0x82cf6d50
	ctx.lr = 0x82A3BAC4;
	sub_82CF6D50(ctx, base);
loc_82A3BAC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3BACC"))) PPC_WEAK_FUNC(sub_82A3BACC);
PPC_FUNC_IMPL(__imp__sub_82A3BACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3BAD0"))) PPC_WEAK_FUNC(sub_82A3BAD0);
PPC_FUNC_IMPL(__imp__sub_82A3BAD0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3bb68
	if (ctx.cr6.eq) goto loc_82A3BB68;
	// lbz r11,222(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 222);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3bb68
	if (ctx.cr6.eq) goto loc_82A3BB68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-27456
	ctx.r11.s64 = ctx.r11.s64 + -27456;
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a3bb24
	if (!ctx.cr6.lt) goto loc_82A3BB24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832b6440
	ctx.lr = 0x82A3BB14;
	sub_832B6440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3BB24:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a3bb4c
	if (!ctx.cr6.gt) goto loc_82A3BB4C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x832b6440
	ctx.lr = 0x82A3BB3C;
	sub_832B6440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3BB4C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832b6440
	ctx.lr = 0x82A3BB68;
	sub_832B6440(ctx, base);
loc_82A3BB68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3BB78"))) PPC_WEAK_FUNC(sub_82A3BB78);
PPC_FUNC_IMPL(__imp__sub_82A3BB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// addi r6,r10,-27468
	ctx.r6.s64 = ctx.r10.s64 + -27468;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-27468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f12,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// beq cr6,0x82a3bc14
	if (ctx.cr6.eq) goto loc_82A3BC14;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a3bc18
	goto loc_82A3BC18;
loc_82A3BC14:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A3BC18:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3bc28
	if (ctx.cr6.eq) goto loc_82A3BC28;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82A3BC28:
	// stfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3BC54"))) PPC_WEAK_FUNC(sub_82A3BC54);
PPC_FUNC_IMPL(__imp__sub_82A3BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3BC58"))) PPC_WEAK_FUNC(sub_82A3BC58);
PPC_FUNC_IMPL(__imp__sub_82A3BC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82A3BC60;
	sub_82CA2BCC(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca7504
	ctx.lr = 0x82A3BC68;
	sub_82CA7504(ctx, base);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A3BC78:
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x832b5530
	ctx.lr = 0x82A3BC80;
	sub_832B5530(ctx, base);
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3bcf0
	if (ctx.cr6.eq) goto loc_82A3BCF0;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3bcf0
	if (!ctx.cr6.eq) goto loc_82A3BCF0;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3bcf0
	if (ctx.cr6.eq) goto loc_82A3BCF0;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3bcf0
	if (ctx.cr6.eq) goto loc_82A3BCF0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a3bcf0
	if (!ctx.cr6.lt) goto loc_82A3BCF0;
	// lwz r11,820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3bcd4
	if (ctx.cr6.eq) goto loc_82A3BCD4;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x82a3bcdc
	goto loc_82A3BCDC;
loc_82A3BCD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832b4f98
	ctx.lr = 0x82A3BCDC;
	sub_832B4F98(ctx, base);
loc_82A3BCDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a3bcf0
	if (ctx.cr6.eq) goto loc_82A3BCF0;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x832b5a18
	ctx.lr = 0x82A3BCEC;
	sub_832B5A18(ctx, base);
	// b 0x82a3bc78
	goto loc_82A3BC78;
loc_82A3BCF0:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r30,r11,-32624
	ctx.r30.s64 = ctx.r11.s64 + -32624;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r8,r10,-9360
	ctx.r8.s64 = ctx.r10.s64 + -9360;
	// addi r31,r11,-16224
	ctx.r31.s64 = ctx.r11.s64 + -16224;
	// addi r7,r30,8200
	ctx.r7.s64 = ctx.r30.s64 + 8200;
	// lwz r11,8196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8196);
	// lis r6,-31951
	ctx.r6.s64 = -2093940736;
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r22,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r22.u8);
	// addi r4,r6,28404
	ctx.r4.s64 = ctx.r6.s64 + 28404;
	// addi r27,r11,3056
	ctx.r27.s64 = ctx.r11.s64 + 3056;
	// lis r28,-31943
	ctx.r28.s64 = -2093416448;
	// stwx r8,r5,r30
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r10,8196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8196);
	// lwz r9,8192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8192);
	// lwz r11,16396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16396);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8196, ctx.r11.u32);
	// stw r10,8192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8192, ctx.r10.u32);
	// stwx r8,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r8.u32);
	// lbz r6,141(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 141);
	// lwz r9,16392(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16392);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,16396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16396);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mulli r10,r6,8200
	ctx.r10.s64 = ctx.r6.s64 * 8200;
	// stw r11,16396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16396, ctx.r11.u32);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// stw r10,16392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16392, ctx.r10.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82a3be10
	if (ctx.cr6.eq) goto loc_82A3BE10;
	// lwz r10,8192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a3bddc
	if (!ctx.cr6.eq) goto loc_82A3BDDC;
	// lwz r8,8196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r6,r31,120
	ctx.r6.s64 = ctx.r31.s64 + 120;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stwx r6,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r4,8196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r10.u32);
loc_82A3BDDC:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3be10
	if (!ctx.cr6.eq) goto loc_82A3BE10;
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r9,r31,120
	ctx.r9.s64 = ctx.r31.s64 + 120;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r10,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r10.u8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r8.u32);
	// stwx r9,r7,r27
	PPC_STORE_U32(ctx.r7.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x82a3be14
	goto loc_82A3BE14;
loc_82A3BE10:
	// lwz r8,1000(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
loc_82A3BE14:
	// lbz r11,93(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mulli r11,r11,8200
	ctx.r11.s64 = ctx.r11.s64 * 8200;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// beq cr6,0x82a3beb0
	if (ctx.cr6.eq) goto loc_82A3BEB0;
	// lwz r10,8192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a3be80
	if (!ctx.cr6.eq) goto loc_82A3BE80;
	// lwz r7,8196(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r6,r31,72
	ctx.r6.s64 = ctx.r31.s64 + 72;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stwx r6,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,8196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r10.u32);
loc_82A3BE80:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3beb0
	if (!ctx.cr6.eq) goto loc_82A3BEB0;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r9,r31,72
	ctx.r9.s64 = ctx.r31.s64 + 72;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stw r8,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r8.u32);
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_82A3BEB0:
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r11,8200
	ctx.r11.s64 = ctx.r11.s64 * 8200;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// beq cr6,0x82a3bf48
	if (ctx.cr6.eq) goto loc_82A3BF48;
	// lwz r10,8192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a3bf18
	if (!ctx.cr6.eq) goto loc_82A3BF18;
	// lwz r7,8196(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stwx r6,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r4,8196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r10.u32);
loc_82A3BF18:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3bf48
	if (!ctx.cr6.eq) goto loc_82A3BF48;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stw r10,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r10.u32);
	// stwx r7,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r7.u32);
loc_82A3BF48:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,14444
	ctx.r4.s64 = ctx.r11.s64 + 14444;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82A3BF5C;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7dd58
	ctx.lr = 0x82A3BF64;
	sub_82B7DD58(ctx, base);
	// bl 0x8222c268
	ctx.lr = 0x82A3BF68;
	sub_8222C268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3BF70;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r24,r10,14552
	ctx.r24.s64 = ctx.r10.s64 + 14552;
	// addi r25,r11,-9280
	ctx.r25.s64 = ctx.r11.s64 + -9280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r10,188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a3c208
	if (ctx.cr6.eq) goto loc_82A3C208;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14496
	ctx.r4.s64 = ctx.r11.s64 + 14496;
	// bl 0x8222cf18
	ctx.lr = 0x82A3BFBC;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7dd58
	ctx.lr = 0x82A3BFC4;
	sub_82B7DD58(ctx, base);
	// bl 0x82208c48
	ctx.lr = 0x82A3BFC8;
	sub_82208C48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3BFD0;
	sub_82214F08(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82A3BFE0;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3BFE8;
	sub_82B7DE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r8,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82214f08
	ctx.lr = 0x82A3C008;
	sub_82214F08(ctx, base);
	// lwz r7,64(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,188(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r11,200
	ctx.r5.s64 = ctx.r11.s64 + 200;
	// bl 0x82a3cef0
	ctx.lr = 0x82A3C02C;
	sub_82A3CEF0(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lbz r4,189(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mulli r11,r4,8200
	ctx.r11.s64 = ctx.r4.s64 * 8200;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// beq cr6,0x82a3c0c8
	if (ctx.cr6.eq) goto loc_82A3C0C8;
	// lwz r10,8192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a3c094
	if (!ctx.cr6.eq) goto loc_82A3C094;
	// lwz r8,8196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stwx r7,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,8196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r3.u32);
loc_82A3C094:
	// lbz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3c0c8
	if (!ctx.cr6.eq) goto loc_82A3C0C8;
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stb r10,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r10.u8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r6.u32);
	// stwx r9,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x82a3c0cc
	goto loc_82A3C0CC;
loc_82A3C0C8:
	// lwz r6,1000(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
loc_82A3C0CC:
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lbz r11,261(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 261);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r7,r9,28332
	ctx.r7.s64 = ctx.r9.s64 + 28332;
	// mulli r11,r11,8200
	ctx.r11.s64 = ctx.r11.s64 * 8200;
	// lwz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// beq cr6,0x82a3c16c
	if (ctx.cr6.eq) goto loc_82A3C16C;
	// lwz r10,8192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// and r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a3c140
	if (!ctx.cr6.eq) goto loc_82A3C140;
	// lwz r5,8196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r9,8196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r4.u32);
loc_82A3C140:
	// lbz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 260);
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3c16c
	if (!ctx.cr6.eq) goto loc_82A3C16C;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r9,r31,240
	ctx.r9.s64 = ctx.r31.s64 + 240;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r11.u8);
	// stw r6,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r6.u32);
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_82A3C16C:
	// lbz r11,285(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 285);
	// lwz r8,20(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mulli r11,r11,8200
	ctx.r11.s64 = ctx.r11.s64 * 8200;
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// beq cr6,0x82a3c2c4
	if (ctx.cr6.eq) goto loc_82A3C2C4;
	// lwz r10,8192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a3c1d8
	if (!ctx.cr6.eq) goto loc_82A3C1D8;
	// lwz r7,8196(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r5,r31,264
	ctx.r5.s64 = ctx.r31.s64 + 264;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// stwx r5,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r3,8196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r7.u32);
loc_82A3C1D8:
	// lbz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 284);
	// stw r8,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3c2c4
	if (!ctx.cr6.eq) goto loc_82A3C2C4;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r8,r31,264
	ctx.r8.s64 = ctx.r31.s64 + 264;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stb r11,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r11.u8);
	// stw r10,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r10.u32);
	// stwx r8,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r8.u32);
	// b 0x82a3c2c4
	goto loc_82A3C2C4;
loc_82A3C208:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,14596
	ctx.r4.s64 = ctx.r11.s64 + 14596;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C214;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7dd58
	ctx.lr = 0x82A3C21C;
	sub_82B7DD58(ctx, base);
	// bl 0x82208c48
	ctx.lr = 0x82A3C220;
	sub_82208C48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3C228;
	sub_82214F08(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lbz r10,189(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mulli r11,r10,8200
	ctx.r11.s64 = ctx.r10.s64 * 8200;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// beq cr6,0x82a3c2c4
	if (ctx.cr6.eq) goto loc_82A3C2C4;
	// lwz r10,8192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a3c290
	if (!ctx.cr6.eq) goto loc_82A3C290;
	// lwz r8,8196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stwx r7,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,8196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r3.u32);
loc_82A3C290:
	// lbz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3c2c4
	if (!ctx.cr6.eq) goto loc_82A3C2C4;
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r10,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r11.u32);
	// stwx r9,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r9.u32);
loc_82A3C2C4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r11,14640
	ctx.r30.s64 = ctx.r11.s64 + 14640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C2DC;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3C2E4;
	sub_82B7DE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82214f08
	ctx.lr = 0x82A3C304;
	sub_82214F08(ctx, base);
	// lwz r8,64(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,188(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r11,188
	ctx.r5.s64 = ctx.r11.s64 + 188;
	// bl 0x82a3cef0
	ctx.lr = 0x82A3C328;
	sub_82A3CEF0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r27,r11,14684
	ctx.r27.s64 = ctx.r11.s64 + 14684;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C340;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3C348;
	sub_82B7DE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r4,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// bl 0x82214f08
	ctx.lr = 0x82A3C368;
	sub_82214F08(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a3cef0
	ctx.lr = 0x82A3C38C;
	sub_82A3CEF0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r26,r11,14728
	ctx.r26.s64 = ctx.r11.s64 + 14728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C3A4;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3C3AC;
	sub_82B7DE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// bl 0x82214f08
	ctx.lr = 0x82A3C3CC;
	sub_82214F08(ctx, base);
	// lwz r6,64(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,188(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 188);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r11,196
	ctx.r5.s64 = ctx.r11.s64 + 196;
	// bl 0x82a3cef0
	ctx.lr = 0x82A3C3F0;
	sub_82A3CEF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-19232
	ctx.r31.s64 = ctx.r11.s64 + -19232;
	// addi r4,r10,14772
	ctx.r4.s64 = ctx.r10.s64 + 14772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,-8224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8224);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8222cf18
	ctx.lr = 0x82A3C420;
	sub_8222CF18(ctx, base);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
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
	// vor128 v127,v13,v13
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v127,v11,3,2
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// bl 0x82b7de00
	ctx.lr = 0x82A3C458;
	sub_82B7DE00(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x821eaf90
	ctx.lr = 0x82A3C460;
	sub_821EAF90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3C468;
	sub_82214F08(ctx, base);
	// lis r5,-31924
	ctx.r5.s64 = -2092171264;
	// lis r28,-31946
	ctx.r28.s64 = -2093613056;
	// lfs f31,-8236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8236);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r5,-9176
	ctx.r4.s64 = ctx.r5.s64 + -9176;
	// lis r3,-31927
	ctx.r3.s64 = -2092367872;
	// lwz r11,412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,11820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11820, ctx.r10.u32);
	// ld r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// oris r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 524288;
	// std r7,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r7.u64);
	// stw r10,28388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28388, ctx.r10.u32);
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x82a3c4e8
	if (!ctx.cr6.eq) goto loc_82A3C4E8;
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f10,216(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f12,240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// b 0x82a3c744
	goto loc_82A3C744;
loc_82A3C4E8:
	// lfs f12,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// li r6,24
	ctx.r6.s64 = 24;
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-8620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8620);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r4,-31946
	ctx.r4.s64 = -2093613056;
	// lvlx v0,r29,r6
	temp.u32 = ctx.r29.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r3,-31926
	ctx.r3.s64 = -2092302336;
	// addi r11,r4,344
	ctx.r11.s64 = ctx.r4.s64 + 344;
	// addi r9,r3,23768
	ctx.r9.s64 = ctx.r3.s64 + 23768;
	// lvlx v13,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,23768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23768);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvlx128 v127,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v127,v12,4,3
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v127,v0,3,2
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// beq cr6,0x82a3c570
	if (ctx.cr6.eq) goto loc_82A3C570;
	// lfs f0,18844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18844);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a3c574
	goto loc_82A3C574;
loc_82A3C570:
	// lfs f0,18708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18708);
	ctx.f0.f64 = double(temp.f32);
loc_82A3C574:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f6,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f9,160(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f30,f13,f3
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fdivs f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f8.f64));
	// fdivs f29,f2,f0
	ctx.f29.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// fdivs f28,f5,f29
	ctx.f28.f64 = double(float(ctx.f5.f64 / ctx.f29.f64));
	// bl 0x82239e88
	ctx.lr = 0x82A3C5CC;
	sub_82239E88(ctx, base);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// frsp f27,f1
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82239f68
	ctx.lr = 0x82A3C5DC;
	sub_82239F68(ctx, base);
	// fmuls f11,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f27,f28
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvlx v7,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvlx v9,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r21,r1,160
	ctx.r21.s64 = ctx.r1.s64 + 160;
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v8,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v8,v9,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 57), 4));
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f6,f8,f29
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vrlimi128 v7,v12,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v8,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v10,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v10,v0,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vsubfp128 v6,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v10,v7,3,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vaddfp128 v5,v127,v13
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// vsubfp v4,v6,v10
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v3,v6,v10
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v2,v5,v10
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v10.f32)));
	// vsubfp v1,v5,v10
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v4,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v4,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stvx128 v2,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stvx128 v3,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v3,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// stvx128 v1,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v2,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f8,200(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f1,224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f9,240(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
loc_82A3C744:
	// ld r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// li r11,2
	ctx.r11.s64 = 2;
	// ld r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// li r6,3
	ctx.r6.s64 = 3;
	// ld r21,56(r29)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// addi r4,r9,14816
	ctx.r4.s64 = ctx.r9.s64 + 14816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// std r10,188(r1)
	PPC_STORE_U64(ctx.r1.u32 + 188, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// stfs f10,236(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// std r7,228(r1)
	PPC_STORE_U64(ctx.r1.u32 + 228, ctx.r7.u64);
	// sth r22,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r22.u16);
	// std r21,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r21.u64);
	// sth r23,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r23.u16);
	// sth r11,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// sth r11,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r11.u16);
	// sth r23,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r23.u16);
	// sth r6,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, ctx.r6.u16);
	// bl 0x8222cf18
	ctx.lr = 0x82A3C7A0;
	sub_8222CF18(ctx, base);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r5,23976
	ctx.r8.s64 = ctx.r5.s64 + 23976;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,23976(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 23976);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,3168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3168);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r23,r10,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r23,r9
	ctx.r11.s32 = ctx.r23.s32 / ctx.r9.s32;
	// divw r10,r31,r8
	ctx.r10.s32 = ctx.r31.s32 / ctx.r8.s32;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subfic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r10.s64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f4,160(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// fdivs f1,f13,f5
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f13,f2
	ctx.f13.f64 = double(float(ctx.f2.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vor128 v127,v13,v13
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v127,v11,3,2
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// bl 0x82b7de00
	ctx.lr = 0x82A3C884;
	sub_82B7DE00(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82210418
	ctx.lr = 0x82A3C88C;
	sub_82210418(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3C894;
	sub_82214F08(ctx, base);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8220a528
	ctx.lr = 0x82A3C8AC;
	sub_8220A528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C8BC;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3C8C4;
	sub_82B7DE00(ctx, base);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r6,r3,r9
	ctx.r6.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicr r31,r7,63,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r30,r10,-20628
	ctx.r30.s64 = ctx.r10.s64 + -20628;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a3c908
	if (ctx.cr6.lt) goto loc_82A3C908;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r6,r31,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x821b7020
	ctx.lr = 0x82A3C908;
	sub_821B7020(ctx, base);
loc_82A3C908:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3C910;
	sub_82214F08(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C920;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3C928;
	sub_82B7DE00(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a3c95c
	if (ctx.cr6.lt) goto loc_82A3C95C;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r6,r31,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x821b7020
	ctx.lr = 0x82A3C95C;
	sub_821B7020(ctx, base);
loc_82A3C95C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3C964;
	sub_82214F08(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C974;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3C97C;
	sub_82B7DE00(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a3c9b0
	if (ctx.cr6.lt) goto loc_82A3C9B0;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r6,r31,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x821b7020
	ctx.lr = 0x82A3C9B0;
	sub_821B7020(ctx, base);
loc_82A3C9B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3C9B8;
	sub_82214F08(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82A3C9C8;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7de00
	ctx.lr = 0x82A3C9D0;
	sub_82B7DE00(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a3ca04
	if (ctx.cr6.lt) goto loc_82A3CA04;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r6,r31,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x821b7020
	ctx.lr = 0x82A3CA04;
	sub_821B7020(ctx, base);
loc_82A3CA04:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82A3CA0C;
	sub_82214F08(ctx, base);
loc_82A3CA0C:
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x832b6110
	ctx.lr = 0x82A3CA14;
	sub_832B6110(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a3ca0c
	if (!ctx.cr6.eq) goto loc_82A3CA0C;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a3ca38
	if (ctx.cr6.eq) goto loc_82A3CA38;
	// bl 0x832b5a18
	ctx.lr = 0x82A3CA34;
	sub_832B5A18(ctx, base);
	// b 0x82a3ca48
	goto loc_82A3CA48;
loc_82A3CA38:
	// stb r22,221(r29)
	PPC_STORE_U8(ctx.r29.u32 + 221, ctx.r22.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832b5c18
	ctx.lr = 0x82A3CA48;
	sub_832B5C18(ctx, base);
loc_82A3CA48:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8221f410
	ctx.lr = 0x82A3CA50;
	sub_8221F410(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ca7550
	ctx.lr = 0x82A3CA64;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82A3CA68"))) PPC_WEAK_FUNC(sub_82A3CA68);
PPC_FUNC_IMPL(__imp__sub_82A3CA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82A3CA70;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r23,r30,68
	ctx.r23.s64 = ctx.r30.s64 + 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82A3CA8C;
	sub_82CA3190(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x832b3de0
	ctx.lr = 0x82A3CA98;
	sub_832B3DE0(ctx, base);
	// lbz r11,223(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 223);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3cbe8
	if (ctx.cr6.eq) goto loc_82A3CBE8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a3cbd8
	if (!ctx.cr6.gt) goto loc_82A3CBD8;
	// lis r11,1168
	ctx.r11.s64 = 76546048;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r29,r11,2
	ctx.r29.u64 = ctx.r11.u64 | 2;
loc_82A3CAC8:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821fba48
	ctx.lr = 0x82A3CB00;
	sub_821FBA48(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x821fba48
	ctx.lr = 0x82A3CB3C;
	sub_821FBA48(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x821fba48
	ctx.lr = 0x82A3CB78;
	sub_821FBA48(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x821fba48
	ctx.lr = 0x82A3CBB4;
	sub_821FBA48(ctx, base);
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r26,r11,16384
	ctx.r26.s64 = ctx.r11.s64 + 16384;
	// blt cr6,0x82a3cac8
	if (ctx.cr6.lt) goto loc_82A3CAC8;
loc_82A3CBD8:
	// bl 0x82a492b0
	ctx.lr = 0x82A3CBDC;
	sub_82A492B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a51838
	ctx.lr = 0x82A3CBE4;
	sub_82A51838(ctx, base);
	// bl 0x82a493a8
	ctx.lr = 0x82A3CBE8;
	sub_82A493A8(ctx, base);
loc_82A3CBE8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a3cca4
	if (!ctx.cr6.gt) goto loc_82A3CCA4;
	// addi r28,r30,104
	ctx.r28.s64 = ctx.r30.s64 + 104;
	// addi r29,r30,192
	ctx.r29.s64 = ctx.r30.s64 + 192;
loc_82A3CBFC:
	// lwz r11,-12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// addi r6,r28,-12
	ctx.r6.s64 = ctx.r28.s64 + -12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3cc20
	if (ctx.cr6.eq) goto loc_82A3CC20;
	// addi r7,r29,-4
	ctx.r7.s64 = ctx.r29.s64 + -4;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82a3cce8
	ctx.lr = 0x82A3CC20;
	sub_82A3CCE8(ctx, base);
loc_82A3CC20:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3cc44
	if (ctx.cr6.eq) goto loc_82A3CC44;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3cce8
	ctx.lr = 0x82A3CC44;
	sub_82A3CCE8(ctx, base);
loc_82A3CC44:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r6,r28,12
	ctx.r6.s64 = ctx.r28.s64 + 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3cc68
	if (ctx.cr6.eq) goto loc_82A3CC68;
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82a3cce8
	ctx.lr = 0x82A3CC68;
	sub_82A3CCE8(ctx, base);
loc_82A3CC68:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r6,r28,24
	ctx.r6.s64 = ctx.r28.s64 + 24;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a3cc8c
	if (ctx.cr6.eq) goto loc_82A3CC8C;
	// addi r7,r29,8
	ctx.r7.s64 = ctx.r29.s64 + 8;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82a3cce8
	ctx.lr = 0x82A3CC8C;
	sub_82A3CCE8(ctx, base);
loc_82A3CC8C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a3cbfc
	if (ctx.cr6.lt) goto loc_82A3CBFC;
loc_82A3CCA4:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3ccdc
	if (ctx.cr6.eq) goto loc_82A3CCDC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a3ccdc
	if (ctx.cr6.eq) goto loc_82A3CCDC;
	// stw r23,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r23.u32);
	// lwz r3,28(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// bl 0x82cbb630
	ctx.lr = 0x82A3CCC4;
	sub_82CBB630(ctx, base);
	// rlwinm r11,r3,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3ccdc
	if (ctx.cr6.eq) goto loc_82A3CCDC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-4008
	ctx.r3.s64 = ctx.r11.s64 + -4008;
	// bl 0x82170010
	ctx.lr = 0x82A3CCDC;
	sub_82170010(ctx, base);
loc_82A3CCDC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82A3CCE4"))) PPC_WEAK_FUNC(sub_82A3CCE4);
PPC_FUNC_IMPL(__imp__sub_82A3CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3CCE8"))) PPC_WEAK_FUNC(sub_82A3CCE8);
PPC_FUNC_IMPL(__imp__sub_82A3CCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A3CCF0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8221f388
	ctx.lr = 0x82A3CD10;
	sub_8221F388(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r7,1168
	ctx.r7.s64 = 76546048;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821fba48
	ctx.lr = 0x82A3CD54;
	sub_821FBA48(ctx, base);
	// lbz r11,223(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 223);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3cdb0
	if (ctx.cr6.eq) goto loc_82A3CDB0;
	// bl 0x82a492b0
	ctx.lr = 0x82A3CD68;
	sub_82A492B0(ctx, base);
	// addi r11,r31,4095
	ctx.r11.s64 = ctx.r31.s64 + 4095;
	// lis r10,-32060
	ctx.r10.s64 = -2101084160;
	// rlwinm r29,r11,0,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r9,-32099
	ctx.r9.s64 = -2103640064;
	// addi r7,r10,12696
	ctx.r7.s64 = ctx.r10.s64 + 12696;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r9,-6032
	ctx.r5.s64 = ctx.r9.s64 + -6032;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b83ed0
	ctx.lr = 0x82A3CD90;
	sub_82B83ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3cda8
	if (ctx.cr6.eq) goto loc_82A3CDA8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cbb610
	ctx.lr = 0x82A3CDA8;
	sub_82CBB610(ctx, base);
loc_82A3CDA8:
	// bl 0x82a493a8
	ctx.lr = 0x82A3CDAC;
	sub_82A493A8(ctx, base);
	// b 0x82a3cdcc
	goto loc_82A3CDCC;
loc_82A3CDB0:
	// addi r11,r31,4095
	ctx.r11.s64 = ctx.r31.s64 + 4095;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82b38380
	ctx.lr = 0x82A3CDC8;
	sub_82B38380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A3CDCC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8225fcd8
	ctx.lr = 0x82A3CDD8;
	sub_8225FCD8(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82277ff8
	ctx.lr = 0x82A3CE08;
	sub_82277FF8(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r4,r9,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r5,r8,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	ctx.lr = 0x82A3CE28;
	sub_822C2628(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A3CE30"))) PPC_WEAK_FUNC(sub_82A3CE30);
PPC_FUNC_IMPL(__imp__sub_82A3CE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3CE38;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,223(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 223);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3cecc
	if (ctx.cr6.eq) goto loc_82A3CECC;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82a492b0
	ctx.lr = 0x82A3CE54;
	sub_82A492B0(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,5540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5540);
	// addi r4,r11,404
	ctx.r4.s64 = ctx.r11.s64 + 404;
	// bl 0x82200688
	ctx.lr = 0x82A3CE6C;
	sub_82200688(ctx, base);
	// lwz r10,-56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// addi r11,r31,-64
	ctx.r11.s64 = ctx.r31.s64 + -64;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r30,68(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// beq cr6,0x82a3ce90
	if (ctx.cr6.eq) goto loc_82A3CE90;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3CE90;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3CE90:
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbb610
	ctx.lr = 0x82A3CEA0;
	sub_82CBB610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a3cebc
	if (ctx.cr6.eq) goto loc_82A3CEBC;
loc_82A3CEAC:
	// dcbf r11,r31
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a3ceac
	if (ctx.cr6.lt) goto loc_82A3CEAC;
loc_82A3CEBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83fa8
	ctx.lr = 0x82A3CEC4;
	sub_82B83FA8(ctx, base);
	// bl 0x82a493a8
	ctx.lr = 0x82A3CEC8;
	sub_82A493A8(ctx, base);
	// b 0x82a3ced4
	goto loc_82A3CED4;
loc_82A3CECC:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82b38478
	ctx.lr = 0x82A3CED4;
	sub_82B38478(ctx, base);
loc_82A3CED4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x82A3CEDC;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3CEEC"))) PPC_WEAK_FUNC(sub_82A3CEEC);
PPC_FUNC_IMPL(__imp__sub_82A3CEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3CEF0"))) PPC_WEAK_FUNC(sub_82A3CEF0);
PPC_FUNC_IMPL(__imp__sub_82A3CEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A3CEF8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r8.u8 & 0x7F));
	// lwz r3,412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x821b7020
	ctx.lr = 0x82A3CF24;
	sub_821B7020(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r4,r11,-16224
	ctx.r4.s64 = ctx.r11.s64 + -16224;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r4,4176
	ctx.r11.s64 = ctx.r4.s64 + 4176;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,28240
	ctx.r8.s64 = ctx.r10.s64 + 28240;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// addi r28,r10,3056
	ctx.r28.s64 = ctx.r10.s64 + 3056;
	// lbz r5,21(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// addi r31,r9,-32624
	ctx.r31.s64 = ctx.r9.s64 + -32624;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// mulli r10,r5,8200
	ctx.r10.s64 = ctx.r5.s64 * 8200;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lis r29,-31943
	ctx.r29.s64 = -2093416448;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// addi r10,r10,-8200
	ctx.r10.s64 = ctx.r10.s64 + -8200;
	// beq cr6,0x82a3cffc
	if (ctx.cr6.eq) goto loc_82A3CFFC;
	// lwz r7,8192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8192);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a3cfd0
	if (!ctx.cr6.eq) goto loc_82A3CFD0;
	// lwz r9,8196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stwx r11,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8196(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r7,8196(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,8196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8196, ctx.r7.u32);
loc_82A3CFD0:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3cffc
	if (!ctx.cr6.eq) goto loc_82A3CFFC;
	// lwz r10,1000(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// stw r30,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r30.u32);
	// stwx r11,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r11.u32);
	// b 0x82a3d000
	goto loc_82A3D000;
loc_82A3CFFC:
	// lwz r30,1000(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
loc_82A3D000:
	// addi r11,r4,4656
	ctx.r11.s64 = ctx.r4.s64 + 4656;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,8200
	ctx.r10.s64 = ctx.r10.s64 * 8200;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// addi r10,r10,-8200
	ctx.r10.s64 = ctx.r10.s64 + -8200;
	// beq cr6,0x82a3d090
	if (ctx.cr6.eq) goto loc_82A3D090;
	// lwz r8,8192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8192);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a3d06c
	if (!ctx.cr6.eq) goto loc_82A3D06C;
	// lwz r6,8196(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8196(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r8,8196(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,8196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8196, ctx.r8.u32);
loc_82A3D06C:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3d090
	if (!ctx.cr6.eq) goto loc_82A3D090;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r30.u32);
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
loc_82A3D090:
	// addi r11,r4,2736
	ctx.r11.s64 = ctx.r4.s64 + 2736;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r6,r10,28104
	ctx.r6.s64 = ctx.r10.s64 + 28104;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mulli r10,r10,8200
	ctx.r10.s64 = ctx.r10.s64 * 8200;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// addi r10,r10,-8200
	ctx.r10.s64 = ctx.r10.s64 + -8200;
	// beq cr6,0x82a3d134
	if (ctx.cr6.eq) goto loc_82A3D134;
	// lwz r8,8192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8192);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r26,r7,r8
	ctx.r26.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82a3d110
	if (!ctx.cr6.eq) goto loc_82A3D110;
	// lwz r9,8196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r8,8196(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,8196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8196, ctx.r8.u32);
loc_82A3D110:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3d134
	if (!ctx.cr6.eq) goto loc_82A3D134;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r30.u32);
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
loc_82A3D134:
	// addi r11,r4,3216
	ctx.r11.s64 = ctx.r4.s64 + 3216;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,8200
	ctx.r10.s64 = ctx.r10.s64 * 8200;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// addi r10,r10,-8200
	ctx.r10.s64 = ctx.r10.s64 + -8200;
	// beq cr6,0x82a3d1cc
	if (ctx.cr6.eq) goto loc_82A3D1CC;
	// lwz r8,8192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8192);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r26,r7,r8
	ctx.r26.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82a3d1a8
	if (!ctx.cr6.eq) goto loc_82A3D1A8;
	// lwz r9,8196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,8196(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,8196(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,8196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8196, ctx.r8.u32);
loc_82A3D1A8:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3d1cc
	if (!ctx.cr6.eq) goto loc_82A3D1CC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r30.u32);
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
loc_82A3D1CC:
	// addi r11,r4,3696
	ctx.r11.s64 = ctx.r4.s64 + 3696;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,8200
	ctx.r10.s64 = ctx.r10.s64 * 8200;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// addi r10,r10,-8200
	ctx.r10.s64 = ctx.r10.s64 + -8200;
	// beq cr6,0x82a3d25c
	if (ctx.cr6.eq) goto loc_82A3D25C;
	// lwz r8,8192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8192);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a3d238
	if (!ctx.cr6.eq) goto loc_82A3D238;
	// lwz r6,8196(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stwx r11,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8196(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// lwz r8,8196(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8196);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stw r5,8196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8196, ctx.r5.u32);
loc_82A3D238:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3d25c
	if (!ctx.cr6.eq) goto loc_82A3D25C;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// stw r10,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r10.u32);
	// stwx r11,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r11.u32);
loc_82A3D25C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A3D264"))) PPC_WEAK_FUNC(sub_82A3D264);
PPC_FUNC_IMPL(__imp__sub_82A3D264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D268"))) PPC_WEAK_FUNC(sub_82A3D268);
PPC_FUNC_IMPL(__imp__sub_82A3D268) {
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
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x8221f388
	ctx.lr = 0x82A3D27C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d374
	if (ctx.cr6.eq) goto loc_82A3D374;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r4,r8,-27468
	ctx.r4.s64 = ctx.r8.s64 + -27468;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r7,r7,25
	ctx.r7.u64 = ctx.r7.u32 & 0x7F;
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r7,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r7.u8);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r7,r6,24896
	ctx.r7.s64 = ctx.r6.s64 + 24896;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lfd f13,3376(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3376);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f12,18768(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 18768);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfd f13,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.f13.u64);
	// stfd f13,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.f13.u64);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3D374:
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

__attribute__((alias("__imp__sub_82A3D388"))) PPC_WEAK_FUNC(sub_82A3D388);
PPC_FUNC_IMPL(__imp__sub_82A3D388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a3d398
	goto loc_82A3D398;
loc_82A3D398:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3D3A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D3B8;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D3D8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d3e8
	if (ctx.cr6.eq) goto loc_82A3D3E8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3D3E8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D3F8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d48c
	if (ctx.cr6.eq) goto loc_82A3D48C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,-32548
	ctx.r8.s64 = ctx.r10.s64 + -32548;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3D48C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3D398"))) PPC_WEAK_FUNC(sub_82A3D398);
PPC_FUNC_IMPL(__imp__sub_82A3D398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3D3A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D3B8;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D3D8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d3e8
	if (ctx.cr6.eq) goto loc_82A3D3E8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3D3E8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D3F8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d48c
	if (ctx.cr6.eq) goto loc_82A3D48C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,-32548
	ctx.r8.s64 = ctx.r10.s64 + -32548;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3D48C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3D4A0"))) PPC_WEAK_FUNC(sub_82A3D4A0);
PPC_FUNC_IMPL(__imp__sub_82A3D4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,14892
	ctx.r9.s64 = ctx.r11.s64 + 14892;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82a3d4f0
	if (ctx.cr6.eq) goto loc_82A3D4F0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3D4D4:
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
	// bne 0x82a3d4d4
	if (!ctx.cr0.eq) goto loc_82A3D4D4;
loc_82A3D4F0:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D50C"))) PPC_WEAK_FUNC(sub_82A3D50C);
PPC_FUNC_IMPL(__imp__sub_82A3D50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D510"))) PPC_WEAK_FUNC(sub_82A3D510);
PPC_FUNC_IMPL(__imp__sub_82A3D510) {
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
	// bl 0x82379920
	ctx.lr = 0x82A3D530;
	sub_82379920(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3d548
	if (ctx.cr6.eq) goto loc_82A3D548;
	// bl 0x8221be68
	ctx.lr = 0x82A3D544;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A3D548:
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

__attribute__((alias("__imp__sub_82A3D560"))) PPC_WEAK_FUNC(sub_82A3D560);
PPC_FUNC_IMPL(__imp__sub_82A3D560) {
	PPC_FUNC_PROLOGUE();
	// li r3,52
	ctx.r3.s64 = 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D568"))) PPC_WEAK_FUNC(sub_82A3D568);
PPC_FUNC_IMPL(__imp__sub_82A3D568) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82A3D57C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d618
	if (ctx.cr6.eq) goto loc_82A3D618;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r6,46
	ctx.r6.s64 = 46;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// clrlwi r4,r7,25
	ctx.r4.u64 = ctx.r7.u32 & 0x7F;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r8,r8,24984
	ctx.r8.s64 = ctx.r8.s64 + 24984;
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3D618:
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

__attribute__((alias("__imp__sub_82A3D62C"))) PPC_WEAK_FUNC(sub_82A3D62C);
PPC_FUNC_IMPL(__imp__sub_82A3D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D630"))) PPC_WEAK_FUNC(sub_82A3D630);
PPC_FUNC_IMPL(__imp__sub_82A3D630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a3d640
	goto loc_82A3D640;
loc_82A3D640:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3D648;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D660;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D680;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d690
	if (ctx.cr6.eq) goto loc_82A3D690;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3D690:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D6A0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d730
	if (ctx.cr6.eq) goto loc_82A3D730;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,14892
	ctx.r8.s64 = ctx.r10.s64 + 14892;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82a3d708
	if (ctx.cr6.eq) goto loc_82A3D708;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3D6EC:
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
	// bne 0x82a3d6ec
	if (!ctx.cr0.eq) goto loc_82A3D6EC;
loc_82A3D708:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3D730:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3D640"))) PPC_WEAK_FUNC(sub_82A3D640);
PPC_FUNC_IMPL(__imp__sub_82A3D640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3D648;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D660;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D680;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d690
	if (ctx.cr6.eq) goto loc_82A3D690;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3D690:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D6A0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d730
	if (ctx.cr6.eq) goto loc_82A3D730;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,14892
	ctx.r8.s64 = ctx.r10.s64 + 14892;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82a3d708
	if (ctx.cr6.eq) goto loc_82A3D708;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3D6EC:
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
	// bne 0x82a3d6ec
	if (!ctx.cr0.eq) goto loc_82A3D6EC;
loc_82A3D708:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3D730:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3D744"))) PPC_WEAK_FUNC(sub_82A3D744);
PPC_FUNC_IMPL(__imp__sub_82A3D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D748"))) PPC_WEAK_FUNC(sub_82A3D748);
PPC_FUNC_IMPL(__imp__sub_82A3D748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8221f388
	ctx.lr = 0x82A3D75C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d778
	if (ctx.cr6.eq) goto loc_82A3D778;
	// bl 0x82a62ed8
	ctx.lr = 0x82A3D768;
	sub_82A62ED8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3D778:
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

__attribute__((alias("__imp__sub_82A3D78C"))) PPC_WEAK_FUNC(sub_82A3D78C);
PPC_FUNC_IMPL(__imp__sub_82A3D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D790"))) PPC_WEAK_FUNC(sub_82A3D790);
PPC_FUNC_IMPL(__imp__sub_82A3D790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3D798;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D7B4;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D7D4;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d7e4
	if (ctx.cr6.eq) goto loc_82A3D7E4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3D7E4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D7F4;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d83c
	if (ctx.cr6.eq) goto loc_82A3D83C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,-31720
	ctx.r8.s64 = ctx.r10.s64 + -31720;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3D83C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3D84C"))) PPC_WEAK_FUNC(sub_82A3D84C);
PPC_FUNC_IMPL(__imp__sub_82A3D84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D850"))) PPC_WEAK_FUNC(sub_82A3D850);
PPC_FUNC_IMPL(__imp__sub_82A3D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	ctx.lr = 0x82A3D864;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d924
	if (ctx.cr6.eq) goto loc_82A3D924;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,14
	ctx.r4.s64 = 14;
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrlwi r6,r6,25
	ctx.r6.u64 = ctx.r6.u32 & 0x7F;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r6,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r6.u8);
	// addi r8,r8,25056
	ctx.r8.s64 = ctx.r8.s64 + 25056;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// addi r4,r6,28340
	ctx.r4.s64 = ctx.r6.s64 + 28340;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_82A3D8F8:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a3d8f8
	if (!ctx.cr0.eq) goto loc_82A3D8F8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3D924:
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

__attribute__((alias("__imp__sub_82A3D938"))) PPC_WEAK_FUNC(sub_82A3D938);
PPC_FUNC_IMPL(__imp__sub_82A3D938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a3d948
	goto loc_82A3D948;
loc_82A3D948:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A3D950;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D968;
	sub_8222AC38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D988;
	sub_8222AC38(ctx, base);
	// li r28,16
	ctx.r28.s64 = 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d998
	if (ctx.cr6.eq) goto loc_82A3D998;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_82A3D998:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D9A8;
	sub_8222AC38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3da54
	if (ctx.cr6.eq) goto loc_82A3DA54;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,-31080
	ctx.r8.s64 = ctx.r10.s64 + -31080;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lvx128 v0,r30,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3da0c
	if (ctx.cr6.eq) goto loc_82A3DA0C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3D9F0:
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
	// bne 0x82a3d9f0
	if (!ctx.cr0.eq) goto loc_82A3D9F0;
loc_82A3DA0C:
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82287710
	ctx.lr = 0x82A3DA18;
	sub_82287710(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82A3DA54:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82A3D948"))) PPC_WEAK_FUNC(sub_82A3D948);
PPC_FUNC_IMPL(__imp__sub_82A3D948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82A3D950;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D968;
	sub_8222AC38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D988;
	sub_8222AC38(ctx, base);
	// li r28,16
	ctx.r28.s64 = 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3d998
	if (ctx.cr6.eq) goto loc_82A3D998;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_82A3D998:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3D9A8;
	sub_8222AC38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3da54
	if (ctx.cr6.eq) goto loc_82A3DA54;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,-31080
	ctx.r8.s64 = ctx.r10.s64 + -31080;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lvx128 v0,r30,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3da0c
	if (ctx.cr6.eq) goto loc_82A3DA0C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3D9F0:
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
	// bne 0x82a3d9f0
	if (!ctx.cr0.eq) goto loc_82A3D9F0;
loc_82A3DA0C:
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82287710
	ctx.lr = 0x82A3DA18;
	sub_82287710(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82A3DA54:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82A3DA68"))) PPC_WEAK_FUNC(sub_82A3DA68);
PPC_FUNC_IMPL(__imp__sub_82A3DA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3DA70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DA8C;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DAAC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3dabc
	if (ctx.cr6.eq) goto loc_82A3DABC;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3DABC:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DACC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3db20
	if (ctx.cr6.eq) goto loc_82A3DB20;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r9,r11,-7528
	ctx.r9.s64 = ctx.r11.s64 + -7528;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3DB20:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3DB30"))) PPC_WEAK_FUNC(sub_82A3DB30);
PPC_FUNC_IMPL(__imp__sub_82A3DB30) {
	PPC_FUNC_PROLOGUE();
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3DB38"))) PPC_WEAK_FUNC(sub_82A3DB38);
PPC_FUNC_IMPL(__imp__sub_82A3DB38) {
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
	ctx.lr = 0x82A3DB50;
	sub_82CA7508(ctx, base);
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vor128 v126,v2,v2
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// addi r9,r11,29924
	ctx.r9.s64 = ctx.r11.s64 + 29924;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// li r8,9
	ctx.r8.s64 = 9;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// bl 0x8217ac88
	ctx.lr = 0x82A3DBA8;
	sub_8217AC88(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r6,112
	ctx.r6.s64 = 112;
	// lbz r5,303(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 303);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lbz r4,319(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 319);
	// addi r10,r7,14912
	ctx.r10.s64 = ctx.r7.s64 + 14912;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stvx128 v127,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// li r9,8
	ctx.r9.s64 = 8;
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// stfs f29,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f28,144(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// std r7,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r7.u64);
	// stb r5,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r5.u8);
	// stb r4,162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 162, ctx.r4.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A3DC04:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a3dc04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A3DC04;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stfs f31,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f30,156(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f1,-25888(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// stw r7,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
	// bl 0x82260bc8
	ctx.lr = 0x82A3DCA8;
	sub_82260BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7554
	ctx.lr = 0x82A3DCC8;
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
}

__attribute__((alias("__imp__sub_82A3DCDC"))) PPC_WEAK_FUNC(sub_82A3DCDC);
PPC_FUNC_IMPL(__imp__sub_82A3DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3DCE0"))) PPC_WEAK_FUNC(sub_82A3DCE0);
PPC_FUNC_IMPL(__imp__sub_82A3DCE0) {
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
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x8221f388
	ctx.lr = 0x82A3DCFC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3dd20
	if (ctx.cr6.eq) goto loc_82A3DD20;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82a67210
	ctx.lr = 0x82A3DD0C;
	sub_82A67210(ctx, base);
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
loc_82A3DD20:
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

__attribute__((alias("__imp__sub_82A3DD38"))) PPC_WEAK_FUNC(sub_82A3DD38);
PPC_FUNC_IMPL(__imp__sub_82A3DD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3DD40;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DD5C;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DD7C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3dd8c
	if (ctx.cr6.eq) goto loc_82A3DD8C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3DD8C:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DD9C;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a3ddcc
	if (ctx.cr6.eq) goto loc_82A3DDCC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a3afd0
	ctx.lr = 0x82A3DDB0;
	sub_82A3AFD0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,14912
	ctx.r10.s64 = ctx.r11.s64 + 14912;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3DDCC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3DDDC"))) PPC_WEAK_FUNC(sub_82A3DDDC);
PPC_FUNC_IMPL(__imp__sub_82A3DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3DDE0"))) PPC_WEAK_FUNC(sub_82A3DDE0);
PPC_FUNC_IMPL(__imp__sub_82A3DDE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3DDE8"))) PPC_WEAK_FUNC(sub_82A3DDE8);
PPC_FUNC_IMPL(__imp__sub_82A3DDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3DDF0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DE0C;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DE2C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3de3c
	if (ctx.cr6.eq) goto loc_82A3DE3C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3DE3C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3DE4C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3de9c
	if (ctx.cr6.eq) goto loc_82A3DE9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,14932
	ctx.r8.s64 = ctx.r10.s64 + 14932;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3DE9C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3DEAC"))) PPC_WEAK_FUNC(sub_82A3DEAC);
PPC_FUNC_IMPL(__imp__sub_82A3DEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3DEB0"))) PPC_WEAK_FUNC(sub_82A3DEB0);
PPC_FUNC_IMPL(__imp__sub_82A3DEB0) {
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
	// bl 0x82a3df00
	ctx.lr = 0x82A3DED0;
	sub_82A3DF00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3dee8
	if (ctx.cr6.eq) goto loc_82A3DEE8;
	// bl 0x8221be68
	ctx.lr = 0x82A3DEE4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A3DEE8:
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

__attribute__((alias("__imp__sub_82A3DF00"))) PPC_WEAK_FUNC(sub_82A3DF00);
PPC_FUNC_IMPL(__imp__sub_82A3DF00) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,15068
	ctx.r10.s64 = ctx.r11.s64 + 15068;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3df44
	if (ctx.cr6.eq) goto loc_82A3DF44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3DF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_82A3DF44:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,14884
	ctx.r10.s64 = ctx.r11.s64 + 14884;
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

__attribute__((alias("__imp__sub_82A3DF64"))) PPC_WEAK_FUNC(sub_82A3DF64);
PPC_FUNC_IMPL(__imp__sub_82A3DF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3DF68"))) PPC_WEAK_FUNC(sub_82A3DF68);
PPC_FUNC_IMPL(__imp__sub_82A3DF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3DF70;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3dfa4
	if (ctx.cr6.eq) goto loc_82A3DFA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3DFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82A3DFA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A3DFB4;
	sub_82200688(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x82a3dfcc
	if (ctx.cr6.eq) goto loc_82A3DFCC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3DFCC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3DFCC:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82a3e044
	if (ctx.cr6.gt) goto loc_82A3E044;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// addi r12,r12,-8204
	ctx.r12.s64 = ctx.r12.s64 + -8204;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A3E010;
	case 1:
		goto loc_82A3E018;
	case 2:
		goto loc_82A3E020;
	case 3:
		goto loc_82A3E028;
	case 4:
		goto loc_82A3E030;
	case 5:
		goto loc_82A3E038;
	case 6:
		goto loc_82A3E040;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-8176(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8176);
	// lwz r21,-8168(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8168);
	// lwz r21,-8160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8160);
	// lwz r21,-8152(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8152);
	// lwz r21,-8144(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8144);
	// lwz r21,-8136(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8136);
	// lwz r21,-8128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8128);
loc_82A3E010:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82a3e044
	goto loc_82A3E044;
loc_82A3E018:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a3e044
	goto loc_82A3E044;
loc_82A3E020:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82a3e044
	goto loc_82A3E044;
loc_82A3E028:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82a3e044
	goto loc_82A3E044;
loc_82A3E030:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82a3e044
	goto loc_82A3E044;
loc_82A3E038:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82a3e044
	goto loc_82A3E044;
loc_82A3E040:
	// li r4,8
	ctx.r4.s64 = 8;
loc_82A3E044:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0ebb8
	ctx.lr = 0x82A3E058;
	sub_82D0EBB8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r8,r10,7532
	ctx.r8.s64 = ctx.r10.s64 + 7532;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// xori r31,r7,1
	ctx.r31.u64 = ctx.r7.u64 ^ 1;
	// beq cr6,0x82a3e08c
	if (ctx.cr6.eq) goto loc_82A3E08C;
	// bl 0x821fc1f0
	ctx.lr = 0x82A3E084;
	sub_821FC1F0(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
loc_82A3E08C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3E098"))) PPC_WEAK_FUNC(sub_82A3E098);
PPC_FUNC_IMPL(__imp__sub_82A3E098) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A3E0C4;
	sub_82200688(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82a3e0f4
	if (!ctx.cr6.gt) goto loc_82A3E0F4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bge cr6,0x82a3e0f4
	if (!ctx.cr6.lt) goto loc_82A3E0F4;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3e0ec
	if (ctx.cr6.eq) goto loc_82A3E0EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E0EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E0EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a3e10c
	goto loc_82A3E10C;
loc_82A3E0F4:
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3e108
	if (ctx.cr6.eq) goto loc_82A3E108;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E108;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E108:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A3E10C:
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

__attribute__((alias("__imp__sub_82A3E124"))) PPC_WEAK_FUNC(sub_82A3E124);
PPC_FUNC_IMPL(__imp__sub_82A3E124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E128"))) PPC_WEAK_FUNC(sub_82A3E128);
PPC_FUNC_IMPL(__imp__sub_82A3E128) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A3E14C;
	sub_82200688(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3e1ac
	if (ctx.cr6.eq) goto loc_82A3E1AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3e388
	ctx.lr = 0x82A3E160;
	sub_82A3E388(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82a3e1ac
	if (!ctx.cr6.eq) goto loc_82A3E1AC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a3e194
	if (ctx.cr6.eq) goto loc_82A3E194;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E194;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82A3E1AC:
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3e1c0
	if (ctx.cr6.eq) goto loc_82A3E1C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E1C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E1C0:
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

__attribute__((alias("__imp__sub_82A3E1D8"))) PPC_WEAK_FUNC(sub_82A3E1D8);
PPC_FUNC_IMPL(__imp__sub_82A3E1D8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A3E1FC;
	sub_82200688(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3e25c
	if (ctx.cr6.eq) goto loc_82A3E25C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3e388
	ctx.lr = 0x82A3E210;
	sub_82A3E388(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82a3e25c
	if (!ctx.cr6.eq) goto loc_82A3E25C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a3e244
	if (ctx.cr6.eq) goto loc_82A3E244;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E244;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82A3E25C:
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3e270
	if (ctx.cr6.eq) goto loc_82A3E270;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E270;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E270:
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

__attribute__((alias("__imp__sub_82A3E288"))) PPC_WEAK_FUNC(sub_82A3E288);
PPC_FUNC_IMPL(__imp__sub_82A3E288) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	ctx.lr = 0x82A3E2A8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3e2f0
	if (ctx.cr6.eq) goto loc_82A3E2F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,14976
	ctx.r9.s64 = ctx.r11.s64 + 14976;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x832b258c
	ctx.lr = 0x82A3E2D0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,15068
	ctx.r7.s64 = ctx.r8.s64 + 15068;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82a3e2f4
	goto loc_82A3E2F4;
loc_82A3E2F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A3E2F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82A3E314:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a3e314
	if (!ctx.cr0.eq) goto loc_82A3E314;
loc_82A3E330:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a3e330
	if (!ctx.cr0.eq) goto loc_82A3E330;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3e36c
	if (!ctx.cr6.eq) goto loc_82A3E36C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3E36C:
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

__attribute__((alias("__imp__sub_82A3E388"))) PPC_WEAK_FUNC(sub_82A3E388);
PPC_FUNC_IMPL(__imp__sub_82A3E388) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82A3E3AC;
	sub_82200688(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x82a3e3c4
	if (ctx.cr6.eq) goto loc_82A3E3C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E3C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E3C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A3E3DC"))) PPC_WEAK_FUNC(sub_82A3E3DC);
PPC_FUNC_IMPL(__imp__sub_82A3E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E3E0"))) PPC_WEAK_FUNC(sub_82A3E3E0);
PPC_FUNC_IMPL(__imp__sub_82A3E3E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// clrlwi r4,r7,25
	ctx.r4.u64 = ctx.r7.u32 & 0x7F;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r8,r8,15000
	ctx.r8.s64 = ctx.r8.s64 + 15000;
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E46C"))) PPC_WEAK_FUNC(sub_82A3E46C);
PPC_FUNC_IMPL(__imp__sub_82A3E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E470"))) PPC_WEAK_FUNC(sub_82A3E470);
PPC_FUNC_IMPL(__imp__sub_82A3E470) {
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
	// bl 0x82a3e4c0
	ctx.lr = 0x82A3E490;
	sub_82A3E4C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3e4a8
	if (ctx.cr6.eq) goto loc_82A3E4A8;
	// bl 0x8221be68
	ctx.lr = 0x82A3E4A4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A3E4A8:
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

__attribute__((alias("__imp__sub_82A3E4C0"))) PPC_WEAK_FUNC(sub_82A3E4C0);
PPC_FUNC_IMPL(__imp__sub_82A3E4C0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r11,15000
	ctx.r9.s64 = ctx.r11.s64 + 15000;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3e4f8
	if (ctx.cr6.eq) goto loc_82A3E4F8;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a501b8
	ctx.lr = 0x82A3E4F8;
	sub_82A501B8(ctx, base);
loc_82A3E4F8:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3e540
	if (ctx.cr6.eq) goto loc_82A3E540;
	// bl 0x82a3e388
	ctx.lr = 0x82A3E508;
	sub_82A3E388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a3e540
	if (!ctx.cr6.eq) goto loc_82A3E540;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82200688
	ctx.lr = 0x82A3E524;
	sub_82200688(ctx, base);
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a3e540
	if (ctx.cr6.eq) goto loc_82A3E540;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3E540;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3E540:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3e58c
	if (ctx.cr6.eq) goto loc_82A3E58C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A3E554:
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
	// bne 0x82a3e554
	if (!ctx.cr0.eq) goto loc_82A3E554;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3e588
	if (!ctx.cr6.eq) goto loc_82A3E588;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3E588:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_82A3E58C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3e5d4
	if (ctx.cr6.eq) goto loc_82A3E5D4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A3E59C:
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
	// bne 0x82a3e59c
	if (!ctx.cr0.eq) goto loc_82A3E59C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3e5d0
	if (!ctx.cr6.eq) goto loc_82A3E5D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3E5D0:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_82A3E5D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6cef0
	ctx.lr = 0x82A3E5DC;
	sub_82A6CEF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A3E5F4"))) PPC_WEAK_FUNC(sub_82A3E5F4);
PPC_FUNC_IMPL(__imp__sub_82A3E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E5F8"))) PPC_WEAK_FUNC(sub_82A3E5F8);
PPC_FUNC_IMPL(__imp__sub_82A3E5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3E600;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwimi r10,r11,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82a3e630
	if (ctx.cr6.eq) goto loc_82A3E630;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a501b8
	ctx.lr = 0x82A3E630;
	sub_82A501B8(ctx, base);
loc_82A3E630:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// beq cr6,0x82a3e77c
	if (ctx.cr6.eq) goto loc_82A3E77C;
	// cmpwi cr6,r3,45
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 45, ctx.xer);
	// bne cr6,0x82a3e7b0
	if (!ctx.cr6.eq) goto loc_82A3E7B0;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a3e680
	if (ctx.cr6.eq) goto loc_82A3E680;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82A3E664:
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
	// bne 0x82a3e664
	if (!ctx.cr0.eq) goto loc_82A3E664;
loc_82A3E680:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a3e700
	if (ctx.cr6.eq) goto loc_82A3E700;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3e6d4
	if (ctx.cr6.eq) goto loc_82A3E6D4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A3E69C:
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
	// bne 0x82a3e69c
	if (!ctx.cr0.eq) goto loc_82A3E69C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3e6d0
	if (!ctx.cr6.eq) goto loc_82A3E6D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3E6D0:
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_82A3E6D4:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a3e748
	if (ctx.cr6.eq) goto loc_82A3E748;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82A3E6E4:
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
	// bne 0x82a3e6e4
	if (!ctx.cr0.eq) goto loc_82A3E6E4;
loc_82A3E700:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a3e748
	if (ctx.cr6.eq) goto loc_82A3E748;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82A3E70C:
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
	// bne 0x82a3e70c
	if (!ctx.cr0.eq) goto loc_82A3E70C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3e748
	if (!ctx.cr6.eq) goto loc_82A3E748;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3E748:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,84(r31)
	PPC_STORE_U64(ctx.r31.u32 + 84, ctx.r7.u64);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3E77C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// std r7,84(r31)
	PPC_STORE_U64(ctx.r31.u32 + 84, ctx.r7.u64);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3E7B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3E7C0"))) PPC_WEAK_FUNC(sub_82A3E7C0);
PPC_FUNC_IMPL(__imp__sub_82A3E7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A3E7C8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3ed74
	if (ctx.cr6.eq) goto loc_82A3ED74;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8221eb58
	ctx.lr = 0x82A3E7E4;
	sub_8221EB58(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r11,r11,-32624
	ctx.r11.s64 = ctx.r11.s64 + -32624;
	// addi r7,r10,-9360
	ctx.r7.s64 = ctx.r10.s64 + -9360;
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// addi r6,r11,8200
	ctx.r6.s64 = ctx.r11.s64 + 8200;
	// addi r3,r5,23928
	ctx.r3.s64 = ctx.r5.s64 + 23928;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// lwz r10,8196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r9,8196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	// lwz r8,8192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8192);
	// lwz r10,16396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16396);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8196, ctx.r10.u32);
	// stw r9,8192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8192, ctx.r9.u32);
	// stwx r7,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r10,16396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16396);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,16392(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16392);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,16392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16392, ctx.r9.u32);
	// stw r10,16396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16396, ctx.r10.u32);
	// bl 0x821f9f40
	ctx.lr = 0x82A3E85C;
	sub_821F9F40(ctx, base);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r31,r30,84
	ctx.r31.s64 = ctx.r30.s64 + 84;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bne cr6,0x82a3eaa0
	if (!ctx.cr6.eq) goto loc_82A3EAA0;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3e948
	if (ctx.cr6.eq) goto loc_82A3E948;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ec20
	ctx.lr = 0x82A3E8B0;
	sub_8221EC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ed198
	ctx.lr = 0x82A3E8C0;
	sub_821ED198(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a3e8e4
	if (!ctx.cr6.eq) goto loc_82A3E8E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x82a3e8e8
	if (ctx.cr6.eq) goto loc_82A3E8E8;
loc_82A3E8E4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A3E8E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3e948
	if (!ctx.cr6.eq) goto loc_82A3E948;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82a501b8
	ctx.lr = 0x82A3E8FC;
	sub_82A501B8(ctx, base);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3e944
	if (ctx.cr6.eq) goto loc_82A3E944;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A3E90C:
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
	// bne 0x82a3e90c
	if (!ctx.cr0.eq) goto loc_82A3E90C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3e940
	if (!ctx.cr6.eq) goto loc_82A3E940;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3E940:
	// stw r26,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r26.u32);
loc_82A3E944:
	// stw r26,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r26.u32);
loc_82A3E948:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3ea6c
	if (!ctx.cr6.eq) goto loc_82A3EA6C;
	// lbz r11,27705(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 27705);
	// li r7,6
	ctx.r7.s64 = 6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3e968
	if (ctx.cr6.eq) goto loc_82A3E968;
	// li r7,35
	ctx.r7.s64 = 35;
loc_82A3E968:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82a4fe40
	ctx.lr = 0x82A3E990;
	sub_82A4FE40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82a3ea1c
	if (ctx.cr6.eq) goto loc_82A3EA1C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3e9ec
	if (ctx.cr6.eq) goto loc_82A3E9EC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A3E9B4:
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
	// bne 0x82a3e9b4
	if (!ctx.cr0.eq) goto loc_82A3E9B4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3e9e8
	if (!ctx.cr6.eq) goto loc_82A3E9E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3E9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3E9E8:
	// stw r26,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r26.u32);
loc_82A3E9EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a3ea1c
	if (ctx.cr6.eq) goto loc_82A3EA1C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3EA00:
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
	// bne 0x82a3ea00
	if (!ctx.cr0.eq) goto loc_82A3EA00;
loc_82A3EA1C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3ea6c
	if (ctx.cr6.eq) goto loc_82A3EA6C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82A3EA30:
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
	// bne 0x82a3ea30
	if (!ctx.cr0.eq) goto loc_82A3EA30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3ea68
	if (!ctx.cr6.eq) goto loc_82A3EA68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3EA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3EA68:
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
loc_82A3EA6C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ed6c
	if (ctx.cr6.eq) goto loc_82A3ED6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ec20
	ctx.lr = 0x82A3EA88;
	sub_8221EC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821ed198
	ctx.lr = 0x82A3EA98;
	sub_821ED198(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_82A3EAA0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-2368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2368);
	// bl 0x8225fb90
	ctx.lr = 0x82A3EACC;
	sub_8225FB90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822326b0
	ctx.lr = 0x82A3EADC;
	sub_822326B0(ctx, base);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,-2368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2368);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,316(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// bl 0x821fbc60
	ctx.lr = 0x82A3EB00;
	sub_821FBC60(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a3eca4
	if (!ctx.cr6.eq) goto loc_82A3ECA4;
	// lbz r11,27705(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 27705);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3eb98
	if (ctx.cr6.eq) goto loc_82A3EB98;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a68910
	ctx.lr = 0x82A3EB24;
	sub_82A68910(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ec20
	ctx.lr = 0x82A3EB38;
	sub_8221EC20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7aef8
	ctx.lr = 0x82A3EB4C;
	sub_82B7AEF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b7aef8
	ctx.lr = 0x82A3EB60;
	sub_82B7AEF8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d0f8a8
	ctx.lr = 0x82A3EB84;
	sub_82D0F8A8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a14e70
	ctx.lr = 0x82A3EB8C;
	sub_82A14E70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a14e70
	ctx.lr = 0x82A3EB94;
	sub_82A14E70(ctx, base);
	// b 0x82a3ed3c
	goto loc_82A3ED3C;
loc_82A3EB98:
	// bl 0x821fbbb8
	ctx.lr = 0x82A3EB9C;
	sub_821FBBB8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e13b8
	ctx.lr = 0x82A3EBA4;
	sub_821E13B8(ctx, base);
	// bl 0x822421d8
	ctx.lr = 0x82A3EBA8;
	sub_822421D8(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8222c268
	ctx.lr = 0x82A3EBB0;
	sub_8222C268(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r29,-32246
	ctx.r29.s64 = -2113273856;
	// addi r8,r11,-20468
	ctx.r8.s64 = ctx.r11.s64 + -20468;
	// addi r28,r29,-27852
	ctx.r28.s64 = ctx.r29.s64 + -27852;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r9,-20468(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20468);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f1,384(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// lbz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r8,3(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// bl 0x82a6a7c0
	ctx.lr = 0x82A3EC08;
	sub_82A6A7C0(ctx, base);
	// lfs f2,396(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	ctx.f2.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6af60
	ctx.lr = 0x82A3EC20;
	sub_82A6AF60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a6ba90
	ctx.lr = 0x82A3EC28;
	sub_82A6BA90(ctx, base);
	// lfs f1,-27852(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -27852);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8228ad10
	ctx.lr = 0x82A3EC30;
	sub_8228AD10(ctx, base);
	// lis r7,-31924
	ctx.r7.s64 = -2092171264;
	// addi r6,r7,-9280
	ctx.r6.s64 = ctx.r7.s64 + -9280;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,3024(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a3ec74
	if (ctx.cr6.lt) goto loc_82A3EC74;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,-20628
	ctx.r9.s64 = ctx.r11.s64 + -20628;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r11,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,412(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// bl 0x821b7020
	ctx.lr = 0x82A3EC74;
	sub_821B7020(ctx, base);
loc_82A3EC74:
	// bl 0x82232468
	ctx.lr = 0x82A3EC78;
	sub_82232468(ctx, base);
	// bl 0x822209a0
	ctx.lr = 0x82A3EC7C;
	sub_822209A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ec20
	ctx.lr = 0x82A3EC90;
	sub_8221EC20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822326b0
	ctx.lr = 0x82A3EC9C;
	sub_822326B0(ctx, base);
	// bl 0x821fc320
	ctx.lr = 0x82A3ECA0;
	sub_821FC320(ctx, base);
	// b 0x82a3ed3c
	goto loc_82A3ED3C;
loc_82A3ECA4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a3ed3c
	if (!ctx.cr6.eq) goto loc_82A3ED3C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a68910
	ctx.lr = 0x82A3ECB8;
	sub_82A68910(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3ECCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a3ed3c
	if (!ctx.cr6.eq) goto loc_82A3ED3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,96(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b7aef8
	ctx.lr = 0x82A3ECE8;
	sub_82B7AEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a3df68
	ctx.lr = 0x82A3ECF4;
	sub_82A3DF68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// beq cr6,0x82a3ed18
	if (ctx.cr6.eq) goto loc_82A3ED18;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// bl 0x82200688
	ctx.lr = 0x82A3ED10;
	sub_82200688(ctx, base);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// b 0x82a3ed28
	goto loc_82A3ED28;
loc_82A3ED18:
	// lwz r29,96(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82200688
	ctx.lr = 0x82A3ED24;
	sub_82200688(ctx, base);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
loc_82A3ED28:
	// lbz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3ed3c
	if (ctx.cr6.eq) goto loc_82A3ED3C;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x832b226c
	ctx.lr = 0x82A3ED3C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3ED3C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,-2368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2368);
	// bl 0x821d9840
	ctx.lr = 0x82A3ED48;
	sub_821D9840(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,-2368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2368);
	// bl 0x821d9840
	ctx.lr = 0x82A3ED54;
	sub_821D9840(ctx, base);
	// bl 0x8221eb78
	ctx.lr = 0x82A3ED58;
	sub_8221EB78(ctx, base);
	// stb r26,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r26.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fbe60
	ctx.lr = 0x82A3ED64;
	sub_821FBE60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821973b0
	ctx.lr = 0x82A3ED6C;
	sub_821973B0(ctx, base);
loc_82A3ED6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221f410
	ctx.lr = 0x82A3ED74;
	sub_8221F410(ctx, base);
loc_82A3ED74:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A3ED7C"))) PPC_WEAK_FUNC(sub_82A3ED7C);
PPC_FUNC_IMPL(__imp__sub_82A3ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3ED80"))) PPC_WEAK_FUNC(sub_82A3ED80);
PPC_FUNC_IMPL(__imp__sub_82A3ED80) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne cr6,0x82a3edac
	if (!ctx.cr6.eq) goto loc_82A3EDAC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A3EDAC:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-23720
	ctx.r8.s64 = ctx.r10.s64 + -23720;
	// addi r7,r9,7532
	ctx.r7.s64 = ctx.r9.s64 + 7532;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82a3eddc
	if (ctx.cr6.eq) goto loc_82A3EDDC;
	// bl 0x821fc1f0
	ctx.lr = 0x82A3EDD4;
	sub_821FC1F0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82A3EDDC:
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

__attribute__((alias("__imp__sub_82A3EDF4"))) PPC_WEAK_FUNC(sub_82A3EDF4);
PPC_FUNC_IMPL(__imp__sub_82A3EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3EDF8"))) PPC_WEAK_FUNC(sub_82A3EDF8);
PPC_FUNC_IMPL(__imp__sub_82A3EDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3EE00;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,15092
	ctx.r10.s64 = ctx.r11.s64 + 15092;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82a3eebc
	if (ctx.cr6.eq) goto loc_82A3EEBC;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ee8c
	if (ctx.cr6.eq) goto loc_82A3EE8C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A3EE54:
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
	// bne 0x82a3ee54
	if (!ctx.cr0.eq) goto loc_82A3EE54;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3ee88
	if (!ctx.cr6.eq) goto loc_82A3EE88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3EE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3EE88:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82A3EE8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a3eebc
	if (ctx.cr6.eq) goto loc_82A3EEBC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3EEA0:
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
	// bne 0x82a3eea0
	if (!ctx.cr0.eq) goto loc_82A3EEA0;
loc_82A3EEBC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82200688
	ctx.lr = 0x82A3EED0;
	sub_82200688(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3eee8
	if (ctx.cr6.eq) goto loc_82A3EEE8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x82A3EEE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A3EEE8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ef30
	if (ctx.cr6.eq) goto loc_82A3EF30;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82A3EEF8:
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
	// bne 0x82a3eef8
	if (!ctx.cr0.eq) goto loc_82A3EEF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3ef2c
	if (!ctx.cr6.eq) goto loc_82A3EF2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3EF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3EF2C:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82A3EF30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3EF3C"))) PPC_WEAK_FUNC(sub_82A3EF3C);
PPC_FUNC_IMPL(__imp__sub_82A3EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3EF40"))) PPC_WEAK_FUNC(sub_82A3EF40);
PPC_FUNC_IMPL(__imp__sub_82A3EF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8221f388
	ctx.lr = 0x82A3EF54;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3ef70
	if (ctx.cr6.eq) goto loc_82A3EF70;
	// bl 0x82a3e3e0
	ctx.lr = 0x82A3EF60;
	sub_82A3E3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3EF70:
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

__attribute__((alias("__imp__sub_82A3EF84"))) PPC_WEAK_FUNC(sub_82A3EF84);
PPC_FUNC_IMPL(__imp__sub_82A3EF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3EF88"))) PPC_WEAK_FUNC(sub_82A3EF88);
PPC_FUNC_IMPL(__imp__sub_82A3EF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a3ef98
	goto loc_82A3EF98;
loc_82A3EF98:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3EFA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3EFB8;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3EFD8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3efe8
	if (ctx.cr6.eq) goto loc_82A3EFE8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3EFE8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3EFF8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f070
	if (ctx.cr6.eq) goto loc_82A3F070;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,15092
	ctx.r8.s64 = ctx.r10.s64 + 15092;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a3f050
	if (ctx.cr6.eq) goto loc_82A3F050;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3F034:
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
	// bne 0x82a3f034
	if (!ctx.cr0.eq) goto loc_82A3F034;
loc_82A3F050:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3F070:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3EF98"))) PPC_WEAK_FUNC(sub_82A3EF98);
PPC_FUNC_IMPL(__imp__sub_82A3EF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3EFA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3EFB8;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3EFD8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3efe8
	if (ctx.cr6.eq) goto loc_82A3EFE8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3EFE8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3EFF8;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f070
	if (ctx.cr6.eq) goto loc_82A3F070;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,15092
	ctx.r8.s64 = ctx.r10.s64 + 15092;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a3f050
	if (ctx.cr6.eq) goto loc_82A3F050;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A3F034:
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
	// bne 0x82a3f034
	if (!ctx.cr0.eq) goto loc_82A3F034;
loc_82A3F050:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3F070:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3F084"))) PPC_WEAK_FUNC(sub_82A3F084);
PPC_FUNC_IMPL(__imp__sub_82A3F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F088"))) PPC_WEAK_FUNC(sub_82A3F088);
PPC_FUNC_IMPL(__imp__sub_82A3F088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x8221f388
	ctx.lr = 0x82A3F09C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f138
	if (ctx.cr6.eq) goto loc_82A3F138;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,21
	ctx.r6.s64 = 21;
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// clrlwi r4,r7,25
	ctx.r4.u64 = ctx.r7.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r6,r8,25704
	ctx.r6.s64 = ctx.r8.s64 + 25704;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3F138:
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

__attribute__((alias("__imp__sub_82A3F14C"))) PPC_WEAK_FUNC(sub_82A3F14C);
PPC_FUNC_IMPL(__imp__sub_82A3F14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F150"))) PPC_WEAK_FUNC(sub_82A3F150);
PPC_FUNC_IMPL(__imp__sub_82A3F150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a3f160
	goto loc_82A3F160;
loc_82A3F160:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3F168;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F180;
	sub_8222AC38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F1A0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f1b0
	if (ctx.cr6.eq) goto loc_82A3F1B0;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3F1B0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F1C0;
	sub_8222AC38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3f250
	if (ctx.cr6.eq) goto loc_82A3F250;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,-5280
	ctx.r8.s64 = ctx.r10.s64 + -5280;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82A3F204;
	sub_82CA2C60(ctx, base);
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lwz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r5,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// lwz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3F250:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3F160"))) PPC_WEAK_FUNC(sub_82A3F160);
PPC_FUNC_IMPL(__imp__sub_82A3F160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82A3F168;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F180;
	sub_8222AC38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F1A0;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f1b0
	if (ctx.cr6.eq) goto loc_82A3F1B0;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3F1B0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F1C0;
	sub_8222AC38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3f250
	if (ctx.cr6.eq) goto loc_82A3F250;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r8,r10,-5280
	ctx.r8.s64 = ctx.r10.s64 + -5280;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82A3F204;
	sub_82CA2C60(ctx, base);
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lwz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r5,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// lwz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82A3F250:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82A3F264"))) PPC_WEAK_FUNC(sub_82A3F264);
PPC_FUNC_IMPL(__imp__sub_82A3F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F268"))) PPC_WEAK_FUNC(sub_82A3F268);
PPC_FUNC_IMPL(__imp__sub_82A3F268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3F270;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F28C;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F2AC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f2bc
	if (ctx.cr6.eq) goto loc_82A3F2BC;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3F2BC:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F2CC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f318
	if (ctx.cr6.eq) goto loc_82A3F318;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r9,r11,3004
	ctx.r9.s64 = ctx.r11.s64 + 3004;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3F318:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3F328"))) PPC_WEAK_FUNC(sub_82A3F328);
PPC_FUNC_IMPL(__imp__sub_82A3F328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8221f388
	ctx.lr = 0x82A3F33C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f360
	if (ctx.cr6.eq) goto loc_82A3F360;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82a6fbd0
	ctx.lr = 0x82A3F350;
	sub_82A6FBD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3F360:
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

__attribute__((alias("__imp__sub_82A3F374"))) PPC_WEAK_FUNC(sub_82A3F374);
PPC_FUNC_IMPL(__imp__sub_82A3F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F378"))) PPC_WEAK_FUNC(sub_82A3F378);
PPC_FUNC_IMPL(__imp__sub_82A3F378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A3F380;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A3F3A0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82a3f3c8
	if (ctx.cr6.eq) goto loc_82A3F3C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82a3f3a0
	if (ctx.cr6.lt) goto loc_82A3F3A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82A3F3C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3f42c
	if (!ctx.cr6.eq) goto loc_82A3F42C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	ctx.lr = 0x82A3F3E0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f424
	if (ctx.cr6.eq) goto loc_82A3F424;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,3832
	ctx.r9.s64 = ctx.r10.s64 + 3832;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// b 0x82a3f428
	goto loc_82A3F428;
loc_82A3F424:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A3F428:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A3F42C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be46a8
	ctx.lr = 0x82A3F440;
	sub_82BE46A8(ctx, base);
	// lbz r11,41(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 41);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3f468
	if (!ctx.cr6.eq) goto loc_82A3F468;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// bl 0x82a3f478
	ctx.lr = 0x82A3F460;
	sub_82A3F478(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,41(r29)
	PPC_STORE_U8(ctx.r29.u32 + 41, ctx.r10.u8);
loc_82A3F468:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A3F474"))) PPC_WEAK_FUNC(sub_82A3F474);
PPC_FUNC_IMPL(__imp__sub_82A3F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F478"))) PPC_WEAK_FUNC(sub_82A3F478);
PPC_FUNC_IMPL(__imp__sub_82A3F478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a3f4a4
	if (!ctx.cr6.eq) goto loc_82A3F4A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82a3f4b0
	goto loc_82A3F4B0;
loc_82A3F4A4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
loc_82A3F4B0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a3f4e4
	if (!ctx.cr6.lt) goto loc_82A3F4E4;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A3F4E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a3f510
	ctx.lr = 0x82A3F4FC;
	sub_82A3F510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3F50C"))) PPC_WEAK_FUNC(sub_82A3F50C);
PPC_FUNC_IMPL(__imp__sub_82A3F50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F510"))) PPC_WEAK_FUNC(sub_82A3F510);
PPC_FUNC_IMPL(__imp__sub_82A3F510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82A3F518;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// addi r30,r11,-6720
	ctx.r30.s64 = ctx.r11.s64 + -6720;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3f540
	if (!ctx.cr6.eq) goto loc_82A3F540;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a3f54c
	goto loc_82A3F54C;
loc_82A3F540:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82A3F54C:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bge cr6,0x82a3f578
	if (!ctx.cr6.lt) goto loc_82A3F578;
	// bl 0x82a97648
	ctx.lr = 0x82A3F570;
	sub_82A97648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82A3F578:
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82a3f664
	if (!ctx.cr6.lt) goto loc_82A3F664;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a3f5a4
	if (ctx.cr6.lt) goto loc_82A3F5A4;
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82A3F5A4:
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a3f5c4
	if (!ctx.cr6.lt) goto loc_82A3F5C4;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82A3F5C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82333f78
	ctx.lr = 0x82A3F5D0;
	sub_82333F78(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r5,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r31
	ctx.r28.u64 = ctx.r6.u64 + ctx.r31.u64;
	// beq 0x82a3f5f8
	if (ctx.cr0.eq) goto loc_82A3F5F8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82A3F5F8;
	sub_82CA3808(ctx, base);
loc_82A3F5F8:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a3f624
	if (ctx.cr0.eq) goto loc_82A3F624;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82ca3808
	ctx.lr = 0x82A3F620;
	sub_82CA3808(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82A3F624:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82a3f640
	if (ctx.cr6.eq) goto loc_82A3F640;
	// bl 0x8221be68
	ctx.lr = 0x82A3F640;
	sub_8221BE68(ctx, base);
loc_82A3F640:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82A3F664:
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82a3f6f4
	if (!ctx.cr6.lt) goto loc_82A3F6F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3f698
	if (ctx.cr6.eq) goto loc_82A3F698;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82ca3808
	ctx.lr = 0x82A3F694;
	sub_82CA3808(ctx, base);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82A3F698:
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a3f6c4
	if (ctx.cr6.eq) goto loc_82A3F6C4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A3F6B4:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a3f6b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A3F6B4;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82A3F6C4:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a3f764
	if (ctx.cr6.eq) goto loc_82A3F764;
loc_82A3F6DC:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a3f6dc
	if (!ctx.cr6.eq) goto loc_82A3F6DC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82A3F6F4:
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r6,r31
	ctx.r27.u64 = ctx.r6.u64 + ctx.r31.u64;
	// beq 0x82a3f71c
	if (ctx.cr0.eq) goto loc_82A3F71C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca3808
	ctx.lr = 0x82A3F71C;
	sub_82CA3808(ctx, base);
loc_82A3F71C:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82a3f744
	if (!ctx.cr0.gt) goto loc_82A3F744;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x82ca3808
	ctx.lr = 0x82A3F744;
	sub_82CA3808(ctx, base);
loc_82A3F744:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a3f764
	if (ctx.cr6.eq) goto loc_82A3F764;
loc_82A3F754:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a3f754
	if (!ctx.cr6.eq) goto loc_82A3F754;
loc_82A3F764:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82A3F76C"))) PPC_WEAK_FUNC(sub_82A3F76C);
PPC_FUNC_IMPL(__imp__sub_82A3F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F770"))) PPC_WEAK_FUNC(sub_82A3F770);
PPC_FUNC_IMPL(__imp__sub_82A3F770) {
	PPC_FUNC_PROLOGUE();
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3F778"))) PPC_WEAK_FUNC(sub_82A3F778);
PPC_FUNC_IMPL(__imp__sub_82A3F778) {
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
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8221f388
	ctx.lr = 0x82A3F790;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3f7cc
	if (ctx.cr6.eq) goto loc_82A3F7CC;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x82a6fbd0
	ctx.lr = 0x82A3F7A8;
	sub_82A6FBD0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,25776
	ctx.r10.s64 = ctx.r11.s64 + 25776;
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
loc_82A3F7CC:
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

__attribute__((alias("__imp__sub_82A3F7E4"))) PPC_WEAK_FUNC(sub_82A3F7E4);
PPC_FUNC_IMPL(__imp__sub_82A3F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F7E8"))) PPC_WEAK_FUNC(sub_82A3F7E8);
PPC_FUNC_IMPL(__imp__sub_82A3F7E8) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F814;
	sub_8222AC38(ctx, base);
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F834;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f844
	if (ctx.cr6.eq) goto loc_82A3F844;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3F844:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F854;
	sub_8222AC38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3f87c
	if (ctx.cr6.eq) goto loc_82A3F87C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821cdc28
	ctx.lr = 0x82A3F868;
	sub_821CDC28(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,15112
	ctx.r10.s64 = ctx.r11.s64 + 15112;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82a3f880
	goto loc_82A3F880;
loc_82A3F87C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A3F880:
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

__attribute__((alias("__imp__sub_82A3F898"))) PPC_WEAK_FUNC(sub_82A3F898);
PPC_FUNC_IMPL(__imp__sub_82A3F898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3F8A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F8BC;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F8DC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f8ec
	if (ctx.cr6.eq) goto loc_82A3F8EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3F8EC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F8FC;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f928
	if (ctx.cr6.eq) goto loc_82A3F928;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,3052
	ctx.r10.s64 = ctx.r11.s64 + 3052;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3F928:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3F938"))) PPC_WEAK_FUNC(sub_82A3F938);
PPC_FUNC_IMPL(__imp__sub_82A3F938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3F940;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F95C;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F97C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f98c
	if (ctx.cr6.eq) goto loc_82A3F98C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3F98C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3F99C;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3f9d0
	if (ctx.cr6.eq) goto loc_82A3F9D0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,3016
	ctx.r10.s64 = ctx.r11.s64 + 3016;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3F9D0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3F9E0"))) PPC_WEAK_FUNC(sub_82A3F9E0);
PPC_FUNC_IMPL(__imp__sub_82A3F9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3F9E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3FA04;
	sub_8222AC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3FA24;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3fa34
	if (ctx.cr6.eq) goto loc_82A3FA34;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3FA34:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3FA44;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3fa90
	if (ctx.cr6.eq) goto loc_82A3FA90;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r9,r11,3028
	ctx.r9.s64 = ctx.r11.s64 + 3028;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82A3FA90:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3FAA0"))) PPC_WEAK_FUNC(sub_82A3FAA0);
PPC_FUNC_IMPL(__imp__sub_82A3FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3FAA8;
	sub_82CA2BEC(ctx, base);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,32
	ctx.r31.s64 = 32;
	// addi r10,r10,26452
	ctx.r10.s64 = ctx.r10.s64 + 26452;
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// lwz r29,8(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stvx128 v1,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A3FB08:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a3fb08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A3FB08;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r8,r10,15136
	ctx.r8.s64 = ctx.r10.s64 + 15136;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// std r9,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r9.u64);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3FB54"))) PPC_WEAK_FUNC(sub_82A3FB54);
PPC_FUNC_IMPL(__imp__sub_82A3FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FB58"))) PPC_WEAK_FUNC(sub_82A3FB58);
PPC_FUNC_IMPL(__imp__sub_82A3FB58) {
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
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a50320
	ctx.lr = 0x82A3FB78;
	sub_82A50320(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a3fb8c
	if (!ctx.cr6.eq) goto loc_82A3FB8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a3fcf4
	goto loc_82A3FCF4;
loc_82A3FB8C:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a3fc40
	if (!ctx.cr6.eq) goto loc_82A3FC40;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x8221f388
	ctx.lr = 0x82A3FBA0;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a3fc18
	if (ctx.cr6.eq) goto loc_82A3FC18;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82a709c8
	ctx.lr = 0x82A3FBB4;
	sub_82A709C8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// addi r8,r10,-27468
	ctx.r8.s64 = ctx.r10.s64 + -27468;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r6,23928
	ctx.r4.s64 = ctx.r6.s64 + 23928;
	// lfs f13,-31760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21396(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21396);
	ctx.f12.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfd f11,3376(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 3376);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,600(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f12,604(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfd f11,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.f11.u64);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// bl 0x82a6d0d0
	ctx.lr = 0x82A3FC14;
	sub_82A6D0D0(ctx, base);
	// b 0x82a3fc1c
	goto loc_82A3FC1C;
loc_82A3FC18:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A3FC1C:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82A3FC20:
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
	// bne 0x82a3fc20
	if (!ctx.cr0.eq) goto loc_82A3FC20;
	// b 0x82a3fcd0
	goto loc_82A3FCD0;
loc_82A3FC40:
	// lbz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a3fc90
	if (!ctx.cr6.eq) goto loc_82A3FC90;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8221f388
	ctx.lr = 0x82A3FC54;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3fc68
	if (ctx.cr6.eq) goto loc_82A3FC68;
	// bl 0x82a708e0
	ctx.lr = 0x82A3FC60;
	sub_82A708E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a3fc6c
	goto loc_82A3FC6C;
loc_82A3FC68:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A3FC6C:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82A3FC70:
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
	// bne 0x82a3fc70
	if (!ctx.cr0.eq) goto loc_82A3FC70;
	// b 0x82a3fcd0
	goto loc_82A3FCD0;
loc_82A3FC90:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x8221f388
	ctx.lr = 0x82A3FC98;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3fcac
	if (ctx.cr6.eq) goto loc_82A3FCAC;
	// bl 0x82a716e8
	ctx.lr = 0x82A3FCA4;
	sub_82A716E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a3fcb0
	goto loc_82A3FCB0;
loc_82A3FCAC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A3FCB0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82A3FCB4:
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
	// bne 0x82a3fcb4
	if (!ctx.cr0.eq) goto loc_82A3FCB4;
loc_82A3FCD0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a3fcf0
	if (!ctx.cr6.eq) goto loc_82A3FCF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3FCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A3FCF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A3FCF4:
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

__attribute__((alias("__imp__sub_82A3FD0C"))) PPC_WEAK_FUNC(sub_82A3FD0C);
PPC_FUNC_IMPL(__imp__sub_82A3FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FD10"))) PPC_WEAK_FUNC(sub_82A3FD10);
PPC_FUNC_IMPL(__imp__sub_82A3FD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3FD18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8222ac38
	ctx.lr = 0x82A3FD34;
	sub_8222AC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-3856
	ctx.r11.s64 = -252706816;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,61680
	ctx.r10.u64 = ctx.r11.u64 | 61680;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3FD54;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3fd64
	if (ctx.cr6.eq) goto loc_82A3FD64;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A3FD64:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ac38
	ctx.lr = 0x82A3FD74;
	sub_8222AC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a3fd84
	if (ctx.cr6.eq) goto loc_82A3FD84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a3fe50
	ctx.lr = 0x82A3FD84;
	sub_82A3FE50(ctx, base);
loc_82A3FD84:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3FD94"))) PPC_WEAK_FUNC(sub_82A3FD94);
PPC_FUNC_IMPL(__imp__sub_82A3FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FD98"))) PPC_WEAK_FUNC(sub_82A3FD98);
PPC_FUNC_IMPL(__imp__sub_82A3FD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82A3FDA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// srawi. r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82a3fdd8
	if (!ctx.cr0.eq) goto loc_82A3FDD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82a3fde0
	goto loc_82A3FDE0;
loc_82A3FDD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827dfe60
	ctx.lr = 0x82A3FDE0;
	sub_827DFE60(ctx, base);
loc_82A3FDE0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3fe40
	if (ctx.cr6.eq) goto loc_82A3FE40;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x82a3fe3c
	if (ctx.cr6.eq) goto loc_82A3FE3C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82A3FE14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a3fe2c
	if (ctx.cr6.eq) goto loc_82A3FE2C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82A3FE2C:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a3fe14
	if (!ctx.cr6.eq) goto loc_82A3FE14;
loc_82A3FE3C:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82A3FE40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82A3FE4C"))) PPC_WEAK_FUNC(sub_82A3FE4C);
PPC_FUNC_IMPL(__imp__sub_82A3FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FE50"))) PPC_WEAK_FUNC(sub_82A3FE50);
PPC_FUNC_IMPL(__imp__sub_82A3FE50) {
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
	// bl 0x82a3feb8
	ctx.lr = 0x82A3FE70;
	sub_82A3FEB8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,15136
	ctx.r10.s64 = ctx.r11.s64 + 15136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// ld r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 128);
	// std r6,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r6.u64);
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

__attribute__((alias("__imp__sub_82A3FEB8"))) PPC_WEAK_FUNC(sub_82A3FEB8);
PPC_FUNC_IMPL(__imp__sub_82A3FEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,26452
	ctx.r9.s64 = ctx.r11.s64 + 26452;
	// addi r7,r10,26452
	ctx.r7.s64 = ctx.r10.s64 + 26452;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 + 60;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lvx128 v0,r4,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A3FF34:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a3ff34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A3FF34;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FF54"))) PPC_WEAK_FUNC(sub_82A3FF54);
PPC_FUNC_IMPL(__imp__sub_82A3FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

